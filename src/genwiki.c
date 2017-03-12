/*
  Copyright (C) 2015 Susi Lehtola

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "util.h"
#include <ctype.h>

#define FUNCMAX 2000
  
int compare(const void *f1, const void *f2) {
  /* Functional IDs are */
  int i1=*(int *)f1;
  int i2=*(int *)f2;

  /* Get functional names */
  char *n1=XC(functional_get_name)(i1);
  char *n2=XC(functional_get_name)(i2);

  int val=strcmp(n1,n2);

  free(n1);
  free(n2);

  return val;
}

void sort_funcs(int * list, int nfunc) {
  qsort(list,nfunc,sizeof(int),compare);
}

/* Sanitizes links so that they are parsed correctly on the wiki */
char * sanitize_link(char * doi) {
  int i, j, MAXLEN=4096;
  char buf[MAXLEN], *r;

  for(i=0, j=0; i<strlen(doi); i++) {
    switch(doi[i]) {
    case('!'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='1';
      break;
    case('#'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='3';
      break;
    case('$'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='4';
      break;
    case('%'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='5';
      break;
    case('&'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='6';
      break;
    case('\''):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='7';
      break;
    case('*'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='A';
      break;
    case('+'):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='B';
      break;
    case(','):
      buf[j++]='%';
      buf[j++]='2';
      buf[j++]='C';
      break;
    case(':'):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='A';
      break;
    case(';'):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='B';
      break;
    case('<'):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='C';
      break;
    case('='):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='D';
      break;
    case('>'):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='E';
      break;
    case('?'):
      buf[j++]='%';
      buf[j++]='3';
      buf[j++]='F';
      break;
    case('@'):
      buf[j++]='%';
      buf[j++]='4';
      buf[j++]='0';
      break;
    case('['):
      buf[j++]='%';
      buf[j++]='5';
      buf[j++]='B';
      break;
    case('\\'):
      buf[j++]='%';
      buf[j++]='5';
      buf[j++]='C';
      break;
    case(']'):
      buf[j++]='%';
      buf[j++]='5';
      buf[j++]='D';
      break;
    default:
      buf[j++]=doi[i];
    }
  }
  buf[j++]='\0';

  /* Allocate return array */
  r=malloc(strlen(buf)+1);
  strcpy(r,buf);

  return r;
}

int main(void) {
  int func_id, error, i, ii;
  xc_func_type func;
  char *fname;

  /* Families to print out */
  const int families[]={XC_FAMILY_LDA, XC_FAMILY_GGA, XC_FAMILY_HYB_GGA, XC_FAMILY_MGGA, XC_FAMILY_HYB_MGGA};
  const char *famleg[]={"LDA","GGA","hybrid GGA","meta-GGA","hybrid meta-GGA"};
  const int Nfam=sizeof(families)/sizeof(families[0]);
  int ifam;
  /* Types to print out */
  const int types[]={XC_EXCHANGE, XC_CORRELATION, XC_EXCHANGE_CORRELATION, XC_KINETIC};
  const char *typeleg[]={"exchange","correlation","exchange-correlation","kinetic"};
  const int Ntype=sizeof(types)/sizeof(types[0]);
  int itype;

  /* List of functionals of current type and family */
  int funclist[FUNCMAX];
  int nfunc;

  /* Loop over families, and then types */
  for(ifam=0;ifam<Nfam;ifam++) {
    /* Print wiki section header */
    printf("\n== %s functionals ==\n",famleg[ifam]);
    for(itype=0;itype<Ntype;itype++) {
      
      /* Collect functional ids */
      nfunc=0;
      for(func_id=0;func_id<FUNCMAX;func_id++) {
	/* Initialize functional */
	error = xc_func_init(&func, func_id, XC_UNPOLARIZED);
	if(error) {
	  /* Functional does not exist */
	  continue;
	}
	
	/* Check family and type */
	if(func.info->family != families[ifam] || func.info->kind != types[itype]) {
	  XC(func_end)(&func);
	  continue;
	}

	/* Add to list */
	funclist[nfunc++]=func_id;
	
	/* Free memory */
	XC(func_end)(&func);
      }

      /* Sort list alphabetically */
      sort_funcs(funclist,nfunc);
      
      /* Print list */
      if(nfunc) {
	printf("\n===== %s %s =====\n",famleg[ifam],typeleg[itype]);
	for(ii=0;ii<nfunc;ii++) {
	  /* Func id is */
	  func_id=funclist[ii];

	  /* Initialize functional */
	  error = xc_func_init(&func, func_id, XC_UNPOLARIZED);
	  /* Get functional keyword */
	  fname = XC(functional_get_name)(func_id);
	  /* Convert functional keyword to upper case */
	  for(i=0; i<strlen(fname); i++)
	    fname[i]=toupper(fname[i]);
	  
	  /* Print out info and any special wiki links */
	  switch(func_id) {
	  case(XC_LDA_X):
	    printf("* '''[[lda_x|%s]]''': %s\n",fname,func.info->name);
	    break;
	  case(XC_LDA_C_PW):
	  case(XC_LDA_C_PW_MOD):
	  case(XC_LDA_C_OB_PW):
	    printf("* '''[[lda_c_pw|%s]]''': %s\n",fname,func.info->name);
	    break;
	  default:
	    printf("* '''%s''': %s\n",fname,func.info->name);
	  }

	  /* Print out references */
	  for(i=0; i<5; i++){
	    if(func.info->refs[i]==NULL) break;
	    if(strlen(func.info->refs[i]->doi) > 0) {
	      char *h=sanitize_link(func.info->refs[i]->doi);
	      printf("** [http://dx.doi.org/%s %s] (doi: %s)\n", h, func.info->refs[i]->ref, func.info->refs[i]->doi);
	      free(h);
	    } else
	      printf("** %s\n", func.info->refs[i]->ref);
	  }
	  
	  XC(func_end)(&func);
	  free(fname);
	}
      }
    }
  }
  
  return 0;
}
