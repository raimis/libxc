/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_xc_teter93.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t2, t4, t6, t10, t12, t13, t17, t19;
  double t20, t21, t25, t28, t30, t34, t35, t36;
  double t41, t52;


  t2 = r->rs * r->rs;
  t4 = t2 * r->rs;
  t6 = 0.4581652932831429e0 + 0.2217058676663745e1 * r->rs + 0.7405551735357053e0 * t2 + 0.1968227878617998e-1 * t4;
  t10 = t2 * t2;
  t12 = 0.10000000000000000e1 * r->rs + 0.4504130959426697e1 * t2 + 0.1110667363742916e1 * t4 + 0.2359291751427506e-1 * t10;
  t13 = 0.1e1 / t12;
  r->e = -t6 * t13;

  if(r->order < 1) return;

  t17 = 0.2217058676663745e1 + 0.14811103470714106e1 * r->rs + 0.5904683635853994e-1 * t2;
  t19 = t12 * t12;
  t20 = 0.1e1 / t19;
  t21 = t6 * t20;
  t25 = 0.10000000000000000e1 + 0.9008261918853394e1 * r->rs + 0.3332002091228748e1 * t2 + 0.9437167005710024e-1 * t4;
  r->dedrs = -t17 * t13 + t21 * t25;
  r->dedz = 0;

  if(r->order < 2) return;

  t28 = 0.14811103470714106e1 + 0.11809367271707988e0 * r->rs;
  t30 = t17 * t20;
  t34 = 0.1e1 / t19 / t12;
  t35 = t6 * t34;
  t36 = t25 * t25;
  t41 = 0.9008261918853394e1 + 0.6664004182457496e1 * r->rs + 0.28311501017130072e0 * t2;
  r->d2edrs2 = -t28 * t13 + t21 * t41 + 0.2e1 * t30 * t25 - 0.2e1 * t35 * t36;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t52 = t19 * t19;
  r->d3edrs3 = -0.11809367271707988e0 * t13 + 0.3e1 * t28 * t20 * t25 - 0.6e1 * t17 * t34 * t36 + 0.3e1 * t30 * t41 + 0.6e1 * t6 / t52 * t36 * t25 - 0.6e1 * t35 * t25 * t41 + t21 * (0.6664004182457496e1 + 0.56623002034260144e0 * r->rs);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t4, t5, t7, t8, t13, t14;
  double t18, t19, t21, t25, t29, t33, t34, t36;
  double t37, t43, t45, t46, t47, t54, t56, t58;
  double t60, t61, t66, t70, t72, t76, t80, t84;
  double t86, t92, t94, t98, t99, t100, t109, t111;
  double t113, t115, t116, t121, t125, t127, t129, t132;
  double t137, t141, t145, t147, t153, t157, t166, t172;
  double t175, t180, t182, t195, t197, t213, t216, t248;


  t1 = 0.10e1 + r->zeta;
  t2 = pow(t1, 0.13333333333333333333e1);
  t4 = 0.10e1 - r->zeta;
  t5 = pow(t4, 0.13333333333333333333e1);
  t7 = 0.11844755496666676899e1 * t2;
  t8 = 0.11844755496666676899e1 * t5;
  t13 = 0.13490914504760727847e0 + 0.30282301424404901076e0 * t2 + 0.30282301424404901076e0 * t5;
  t14 = r->rs * r->rs;
  t18 = 0.6092241869870837005e-2 + 0.67950184581545714977e-2 * t2 + 0.67950184581545714977e-2 * t5;
  t19 = t14 * r->rs;
  t21 = -0.6709e-16 + 0.22908264664157148354e0 * t2 + 0.22908264664157148354e0 * t5 + (-0.1518924226695903799e0 + t7 + t8) * r->rs + t13 * t14 + t18 * t19;
  t25 = 0.34755059308198843008e1 + 0.51431251430340634958e0 * t2 + 0.51431251430340634958e0 * t5;
  t29 = 0.32119509568008145443e0 + 0.39473613403141727278e0 * t2 + 0.39473613403141727278e0 * t5;
  t33 = 0.7434145274050185612e-2 + 0.80793861201124371942e-2 * t2 + 0.80793861201124371942e-2 * t5;
  t34 = t14 * t14;
  t36 = 0.10000000000000000e1 * r->rs + t25 * t14 + t29 * t19 + t33 * t34;
  t37 = 0.1e1 / t36;
  r->e = -t21 * t37;

  if(r->order < 1) return;

  t43 = -0.1518924226695903799e0 + t7 + t8 + 0.2e1 * t13 * r->rs + 0.3e1 * t18 * t14;
  t45 = t36 * t36;
  t46 = 0.1e1 / t45;
  t47 = t21 * t46;
  t54 = 0.10000000000000000e1 + 0.2e1 * t25 * r->rs + 0.3e1 * t29 * t14 + 0.4e1 * t33 * t19;
  r->dedrs = -t43 * t37 + t47 * t54;
  t56 = pow(t1, 0.3333333333333333333e0);
  t58 = pow(t4, 0.3333333333333333333e0);
  t60 = 0.15793007328888902532e1 * t56;
  t61 = 0.15793007328888902532e1 * t58;
  t66 = 0.40376401899206534767e0 * t56 - 0.40376401899206534767e0 * t58;
  t70 = 0.90600246108727619967e-2 * t56 - 0.90600246108727619967e-2 * t58;
  t72 = 0.30544352885542864471e0 * t56 - 0.30544352885542864471e0 * t58 + (t60 - t61) * r->rs + t66 * t14 + t70 * t19;
  t76 = 0.68575001907120846609e0 * t56 - 0.68575001907120846609e0 * t58;
  t80 = 0.52631484537522303036e0 * t56 - 0.52631484537522303036e0 * t58;
  t84 = 0.10772514826816582925e-1 * t56 - 0.10772514826816582925e-1 * t58;
  t86 = t76 * t14 + t80 * t19 + t84 * t34;
  r->dedz = -t72 * t37 + t47 * t86;

  if(r->order < 2) return;

  t92 = 0.26981829009521455694e0 + 0.60564602848809802152e0 * t2 + 0.60564602848809802152e0 * t5 + 0.6e1 * t18 * r->rs;
  t94 = t43 * t46;
  t98 = 0.1e1 / t45 / t36;
  t99 = t21 * t98;
  t100 = t54 * t54;
  t109 = 0.69510118616397686016e1 + 0.10286250286068126992e1 * t2 + 0.10286250286068126992e1 * t5 + 0.6e1 * t29 * r->rs + 0.12e2 * t33 * t14;
  r->d2edrs2 = -0.2e1 * t99 * t100 + t47 * t109 - t92 * t37 + 0.2e1 * t94 * t54;
  t111 = pow(t1, -0.6666666666666666667e0);
  t113 = pow(t4, -0.6666666666666666667e0);
  t115 = 0.52643357762963008435e0 * t111;
  t116 = 0.52643357762963008435e0 * t113;
  t121 = 0.13458800633068844921e0 * t111 + 0.13458800633068844921e0 * t113;
  t125 = 0.30200082036242539986e-2 * t111 + 0.30200082036242539986e-2 * t113;
  t127 = 0.10181450961847621489e0 * t111 + 0.10181450961847621489e0 * t113 + (t115 + t116) * r->rs + t121 * t14 + t125 * t19;
  t129 = t72 * t46;
  t132 = t86 * t86;
  t137 = 0.22858333969040282201e0 * t111 + 0.22858333969040282201e0 * t113;
  t141 = 0.17543828179174101010e0 * t111 + 0.17543828179174101010e0 * t113;
  t145 = 0.35908382756055276413e-2 * t111 + 0.35908382756055276413e-2 * t113;
  t147 = t137 * t14 + t141 * t19 + t145 * t34;
  r->d2edz2 = -t127 * t37 + 0.2e1 * t129 * t86 - 0.2e1 * t99 * t132 + t47 * t147;
  t153 = 0.2e1 * t66 * r->rs + 0.3e1 * t70 * t14 + t60 - t61;
  t157 = t54 * t86;
  t166 = 0.2e1 * t76 * r->rs + 0.3e1 * t80 * t14 + 0.4e1 * t84 * t19;
  r->d2edrsz = t129 * t54 - t153 * t37 - 0.2e1 * t99 * t157 + t47 * t166 + t94 * t86;

  if(r->order < 3) return;

  t172 = t92 * t46;
  t175 = t43 * t98;
  t180 = t45 * t45;
  t182 = t21 / t180;
  r->d3edrs3 = -(0.36553451219225022030e-1 + 0.40770110748927428986e-1 * t2 + 0.40770110748927428986e-1 * t5) * t37 + 0.3e1 * t172 * t54 - 0.6e1 * t175 * t100 + 0.3e1 * t94 * t109 + 0.6e1 * t182 * t100 * t54 - 0.6e1 * t99 * t54 * t109 + t47 * (0.19271705740804887266e1 + 0.23684168041885036367e1 * t2 + 0.23684168041885036367e1 * t5 + 0.24e2 * t33 * r->rs);
  t195 = pow(t1, -0.16666666666666666667e1);
  t197 = pow(t4, -0.16666666666666666667e1);
  t213 = t127 * t46;
  t216 = t72 * t98;
  r->d3edz3 = -(-0.67876339745650809930e-1 * t195 + 0.67876339745650809930e-1 * t197 + (-0.35095571841975338958e0 * t195 + 0.35095571841975338958e0 * t197) * r->rs + (-0.89725337553792299478e-1 * t195 + 0.89725337553792299478e-1 * t197) * t14 + (-0.20133388024161693325e-2 * t195 + 0.20133388024161693325e-2 * t197) * t19) * t37 + 0.3e1 * t213 * t86 - 0.6e1 * t216 * t132 + 0.3e1 * t129 * t147 + 0.6e1 * t182 * t132 * t86 - 0.6e1 * t99 * t86 * t147 + t47 * ((-0.15238889312693521468e0 * t195 + 0.15238889312693521468e0 * t197) * t14 + (-0.11695885452782734007e0 * t195 + 0.11695885452782734007e0 * t197) * t19 + (-0.23938921837370184277e-2 * t195 + 0.23938921837370184277e-2 * t197) * t34);
  t248 = t153 * t46;
  r->d3edrs2z = -(0.80752803798413069534e0 * t56 - 0.80752803798413069534e0 * t58 + 0.6e1 * t70 * r->rs) * t37 + t172 * t86 + 0.2e1 * t248 * t54 - 0.4e1 * t175 * t157 + 0.2e1 * t94 * t166 - 0.2e1 * t216 * t100 + 0.6e1 * t182 * t100 * t86 - 0.4e1 * t99 * t54 * t166 + t129 * t109 - 0.2e1 * t99 * t109 * t86 + t47 * (0.13715000381424169322e1 * t56 - 0.13715000381424169322e1 * t58 + 0.6e1 * t80 * r->rs + 0.12e2 * t84 * t14);
  r->d3edrsz2 = -(0.2e1 * t121 * r->rs + 0.3e1 * t125 * t14 + t115 + t116) * t37 + 0.2e1 * t248 * t86 - 0.2e1 * t175 * t132 + t94 * t147 + t213 * t54 - 0.4e1 * t216 * t157 + 0.2e1 * t129 * t166 + 0.6e1 * t182 * t54 * t132 - 0.4e1 * t99 * t166 * t86 - 0.2e1 * t99 * t54 * t147 + t47 * (0.2e1 * t137 * r->rs + 0.3e1 * t141 * t14 + 0.4e1 * t145 * t19);

  if(r->order < 4) return;


}

void 
XC(lda_xc_teter93_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_xc_teter93_func)
