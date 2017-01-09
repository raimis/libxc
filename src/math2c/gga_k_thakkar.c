/* 
  This file was generated automatically with scripts/math2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Mathematica source: ./mathematica/functionals/gga_k_takkar.m
  Type of functional: work_gga_x
*/

void XC(math2c_gga_k_takkar_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  gga_x_b88_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_b88_params * )(p->params);


  if(order < 0) return;

  *f = 1. - (0.022678578898107715*x)/(0.3149802624737183 + 1.*x) + (params->beta*POW(x,2))/(1.*X_FACTOR_C + params->beta*params->gamma*x*X_FACTOR_C*asinh(x));

  if(order < 1) return;

  *dfdx = (0.022678578898107718*x)/POW(0.3149802624737183 + 1.*x,2) - 0.022678578898107715/(0.3149802624737183 + 1.*x) - (POW(params->beta,2)*params->gamma*POW(x,2)*(x/SQRT(1 + POW(x,2)) + asinh(x)))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),2)) + (2*params->beta*x)/(1.*X_FACTOR_C + params->beta*params->gamma*x*X_FACTOR_C*asinh(x));

  if(order < 2) return;

  *d2fdx2 = (-0.04535715779621543*x)/POW(0.3149802624737183 + 1.*x,3) + 0.045357157796215436/POW(0.3149802624737183 + 1.*x,2) - (4*POW(params->beta,2)*params->gamma*x*(x/SQRT(1 + POW(x,2)) + asinh(x)))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),2)) + (2*params->beta)/(1.*X_FACTOR_C + params->beta*params->gamma*x*X_FACTOR_C*asinh(x)) + (params->beta*POW(x,2)*(2*POW((params->beta*params->gamma*x)/SQRT(1 + POW(x,2)) + params->beta*params->gamma*asinh(x),2) - (1.*params->beta*params->gamma*(2. + POW(x,2))*(1. + params->beta*params->gamma*x*asinh(x)))/(SQRT(1 + POW(x,2))*(1. + POW(x,2)))))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),3));

  if(order < 3) return;

  *d3fdx3 = (0.1360714733886463*x)/POW(0.3149802624737183 + 1.*x,4) - 0.1360714733886463/POW(0.3149802624737183 + 1.*x,3) - (6*POW(params->beta,2)*params->gamma*(x/SQRT(1 + POW(x,2)) + asinh(x)))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),2)) + (6*params->beta*x*(2*POW((params->beta*params->gamma*x)/SQRT(1 + POW(x,2)) + params->beta*params->gamma*asinh(x),2) - (1.*params->beta*params->gamma*(2. + POW(x,2))*(1. + params->beta*params->gamma*x*asinh(x)))/(SQRT(1 + POW(x,2))*(1. + POW(x,2)))))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),3)) + (params->beta*POW(x,2)*(-6*POW((params->beta*params->gamma*x)/SQRT(1 + POW(x,2)) + params->beta*params->gamma*asinh(x),3) + (params->beta*params->gamma*(4.*x + POW(x,3))*POW(1. + params->beta*params->gamma*x*asinh(x),2))/(SQRT(1 + POW(x,2))*POW(1. + POW(x,2),2)) + (6.*POW(params->beta,2)*POW(params->gamma,2)*(2. + POW(x,2))*(1. + params->beta*params->gamma*x*asinh(x))*(x + SQRT(1 + POW(x,2))*asinh(x)))/POW(1. + POW(x,2),2)))/(X_FACTOR_C*POW(1. + params->beta*params->gamma*x*asinh(x),4));
}


#define math2c_order 3
#define math2c_func  XC(math2c_gga_k_takkar_enhance)
