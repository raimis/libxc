/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_x_2d.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t3, t8;


  r->zk = -0.60021087743807071301e0 / r->rss;

  if(r->order < 1) return;

  t3 = r->rss * r->rss;
  r->dedrs = 0.60021087743807071301e0 / t3;
  r->dedz = 0;

  if(r->order < 2) return;

  r->d2edrs2 = -0.12004217548761414260e1 / t3 / r->rss;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t8 = t3 * t3;
  r->d3edrs3 = 0.36012652646284242780e1 / t8;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t4, t5, t7, t8, t11, t12;
  double t14, t16, t18, t22, t25, t27, t29, t33;
  double t36, t38;


  t1 = 0.10e1 + r->zeta;
  t2 = pow(t1, 0.15e1);
  t4 = 0.10e1 - r->zeta;
  t5 = pow(t4, 0.15e1);
  t7 = 0.5e0 * t2 + 0.5e0 * t5;
  t8 = 0.1e1 / r->rss;
  r->zk = -0.60021087743807071301e0 * t7 * t8;

  if(r->order < 1) return;

  t11 = r->rss * r->rss;
  t12 = 0.1e1 / t11;
  r->dedrs = 0.60021087743807071301e0 * t7 * t12;
  t14 = pow(t1, 0.5e0);
  t16 = pow(t4, 0.5e0);
  t18 = 0.75e0 * t14 - 0.75e0 * t16;
  r->dedz = -0.60021087743807071301e0 * t18 * t8;

  if(r->order < 2) return;

  t22 = 0.1e1 / t11 / r->rss;
  r->d2edrs2 = -0.12004217548761414260e1 * t7 * t22;
  t25 = pow(t1, -0.5e0);
  t27 = pow(t4, -0.5e0);
  t29 = 0.375e0 * t25 + 0.375e0 * t27;
  r->d2edz2 = -0.60021087743807071301e0 * t29 * t8;
  r->d2edrsz = 0.60021087743807071301e0 * t18 * t12;

  if(r->order < 3) return;

  t33 = t11 * t11;
  r->d3edrs3 = 0.36012652646284242780e1 * t7 / t33;
  t36 = pow(t1, -0.15e1);
  t38 = pow(t4, -0.15e1);
  r->d3edz3 = -0.60021087743807071301e0 * (-0.1875e0 * t36 + 0.1875e0 * t38) * t8;
  r->d3edrs2z = -0.12004217548761414260e1 * t18 * t22;
  r->d3edrsz2 = 0.60021087743807071301e0 * t29 * t12;

  if(r->order < 4) return;


}

void 
XC(lda_x_2d_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_x_2d_func)