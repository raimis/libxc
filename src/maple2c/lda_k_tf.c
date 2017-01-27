/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_k_tf.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t8;

  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t1 = r->rs * r->rs;
  r->e = 0.10e1 * params->ax / t1;

  if(r->order < 1) return;

  r->dedrs = -0.20e1 * params->ax / t1 / r->rs;
  r->dedz = 0;

  if(r->order < 2) return;

  t8 = t1 * t1;
  r->d2edrs2 = 0.60e1 * params->ax / t8;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  r->d3edrs3 = -0.240e2 * params->ax / t8 / r->rs;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t4, t5, t8, t9, t10, t12;
  double t15, t17, t20, t21, t22, t24, t26, t29;
  double t36, t38;

  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t1 = 0.10e1 + r->zeta;
  t2 = pow(t1, 0.16666666666666666667e1);
  t4 = 0.10e1 - r->zeta;
  t5 = pow(t4, 0.16666666666666666667e1);
  t8 = params->ax * (0.5e0 * t2 + 0.5e0 * t5);
  t9 = r->rs * r->rs;
  t10 = 0.1e1 / t9;
  r->e = t8 * t10;

  if(r->order < 1) return;

  t12 = 0.1e1 / t9 / r->rs;
  r->dedrs = -0.2e1 * t8 * t12;
  t15 = pow(t1, 0.6666666666666666667e0);
  t17 = pow(t4, 0.6666666666666666667e0);
  t20 = params->ax * (0.83333333333333333335e0 * t15 - 0.83333333333333333335e0 * t17);
  r->dedz = t20 * t10;

  if(r->order < 2) return;

  t21 = t9 * t9;
  t22 = 0.1e1 / t21;
  r->d2edrs2 = 0.6e1 * t8 * t22;
  t24 = pow(t1, -0.3333333333333333333e0);
  t26 = pow(t4, -0.3333333333333333333e0);
  t29 = params->ax * (0.55555555555555555559e0 * t24 + 0.55555555555555555559e0 * t26);
  r->d2edz2 = t29 * t10;
  r->d2edrsz = -0.2e1 * t20 * t12;

  if(r->order < 3) return;

  r->d3edrs3 = -0.24e2 * t8 / t21 / r->rs;
  t36 = pow(t1, -0.13333333333333333333e1);
  t38 = pow(t4, -0.13333333333333333333e1);
  r->d3edz3 = params->ax * (-0.18518518518518518518e0 * t36 + 0.18518518518518518518e0 * t38) * t10;
  r->d3edrs2z = 0.6e1 * t20 * t22;
  r->d3edrsz2 = -0.2e1 * t29 * t12;

  if(r->order < 4) return;


}

void 
XC(lda_k_tf_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_k_tf_func)
