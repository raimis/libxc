/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_vwn.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t6, t9, t12, t14, t15;
  double t17, t19, t20, t22, t24, t26, t27, t28;
  double t31, t32, t35, t36, t39, t41, t43, t44;
  double t45, t51, t53, t58, t59, t62, t63, t64;
  double t70, t75, t79, t81, t83, t84, t89, t90;
  double t95, t100, t101, t105, t106, t107, t127, t136;
  double t146, t147, t149, t175, t191;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t9 = 0.20e1 * t1 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  r->e = 0.310907e-1 * t6 + 0.38783294878113014393e-1 * t12 + 0.96902277115443742139e-3 * t17;

  if(r->order < 1) return;

  t19 = t3 * t3;
  t20 = 0.1e1 / t19;
  t22 = 0.1e1 / t1;
  t24 = 0.1e1 + 0.18637200000000000000e1 * t22;
  t26 = -r->rs * t20 * t24 + t4;
  t27 = 0.1e1 / r->rs;
  t28 = t26 * t27;
  t31 = t9 * t9;
  t32 = 0.1e1 / t31;
  t35 = 0.37846991046400000000e2 * t32 + 0.1e1;
  t36 = 0.1e1 / t35;
  t39 = t14 * t4;
  t41 = t15 * t20;
  t43 = t39 * t22 - t41 * t24;
  t44 = 0.1e1 / t15;
  t45 = t43 * t44;
  r->dedrs = 0.310907e-1 * t28 * t3 - 0.23859447405016062107e0 * t32 * t22 * t36 + 0.96902277115443742139e-3 * t45 * t3;
  r->dedz = 0;

  if(r->order < 2) return;

  t51 = 0.1e1 / t19 / t3;
  t53 = t24 * t24;
  t58 = -0.2e1 * t20 * t24 + 0.2e1 * r->rs * t51 * t53 + 0.93186000000000000000e0 * t22 * t20;
  t59 = t58 * t27;
  t62 = r->rs * r->rs;
  t63 = 0.1e1 / t62;
  t64 = t26 * t63;
  t70 = 0.1e1 / t31 / t9;
  t75 = 0.1e1 / t1 / r->rs;
  t79 = t31 * t31;
  t81 = 0.1e1 / t79 / t9;
  t83 = t35 * t35;
  t84 = 0.1e1 / t83;
  t89 = t14 * t20;
  t90 = t22 * t24;
  t95 = t15 * t51;
  t100 = t27 * t4 / 0.2e1 - 0.2e1 * t89 * t90 - t39 * t75 / 0.2e1 + 0.2e1 * t95 * t53 + 0.93186000000000000000e0 * t41 * t75;
  t101 = t100 * t44;
  t105 = 0.1e1 / t15 / t14;
  t106 = t43 * t105;
  t107 = t3 * t22;
  r->d2edrs2 = 0.310907e-1 * t59 * t3 - 0.310907e-1 * t64 * t3 + 0.310907e-1 * t28 * t24 + 0.47718894810032124214e0 * t70 * t27 * t36 + 0.11929723702508031054e0 * t32 * t75 * t36 - 0.18060165846193892340e2 * t81 * t27 * t84 + 0.96902277115443742139e-3 * t101 * t3 - 0.96902277115443742139e-3 * t106 * t107 + 0.96902277115443742139e-3 * t45 * t24;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t127 = 0.1e1 / t1 / t62;
  t136 = t15 * t15;
  t146 = t19 * t19;
  t147 = 0.1e1 / t146;
  t149 = t53 * t24;
  t175 = t79 * t79;
  t191 = t75 * t24;
  r->d3edrs3 = 0.48451138557721871070e-3 * t106 * t3 * t75 - 0.621814e-1 * t58 * t63 * t3 + 0.621814e-1 * t26 / t62 / r->rs * t3 - 0.71578342215048186322e0 * t70 * t63 * t36 - 0.17894585553762046581e0 * t32 * t127 * t36 - 0.19380455423088748428e-2 * t100 * t105 * t107 - 0.19380455423088748428e-2 * t106 * t90 + 0.14535341567316561321e-2 * t43 / t136 * t3 * t27 + 0.310907e-1 * (0.6e1 * t51 * t53 + 0.13977900000000000000e1 * t20 * t75 - 0.6e1 * r->rs * t147 * t149 - 0.55911600000000000000e1 * t22 * t51 * t24) * t27 * t3 + 0.621814e-1 * t59 * t24 - 0.621814e-1 * t64 * t24 - 0.14315668443009637264e1 / t79 * t75 * t36 + 0.12642116092335724638e3 / t79 / t31 * t75 * t84 + 0.27090248769290838510e2 * t81 * t63 * t84 - 0.27340917403095972916e4 / t175 * t75 / t83 / t35 + 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t63 * t4 - 0.3e1 / 0.2e1 * t27 * t20 * t24 + 0.6e1 * t14 * t51 * t22 * t53 + 0.3e1 / 0.2e1 * t89 * t191 + 0.27955800000000000000e1 * t89 * t63 + 0.3e1 / 0.4e1 * t39 * t127 - 0.6e1 * t15 * t147 * t149 - 0.55911600000000000000e1 * t95 * t191 - 0.13977900000000000000e1 * t41 * t127) * t44 * t3 + 0.19380455423088748428e-2 * t101 * t24 - 0.90299355952797405550e-3 * t45 * t75 - 0.28972179702000000000e-1 * t26 * t127;
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t6, t7, t8, t9, t12;
  double t13, t14, t15, t17, t18, t20, t21, t23;
  double t25, t28, t30, t31, t33, t35, t36, t37;
  double t39, t40, t42, t43, t44, t45, t46, t50;
  double t51, t53, t55, t58, t60, t61, t63, t65;
  double t66, t68, t69, t71, t73, t75, t76, t77;
  double t79, t80, t81, t84, t85, t87, t88, t90;
  double t92, t93, t94, t96, t97, t98, t101, t103;
  double t104, t107, t108, t111, t112, t115, t117, t119;
  double t120, t121, t124, t125, t128, t129, t132, t134;
  double t135, t138, t139, t142, t143, t146, t148, t150;
  double t151, t152, t155, t156, t158, t160, t162, t163;
  double t166, t169, t176, t178, t183, t184, t186, t187;
  double t188, t189, t191, t193, t195, t198, t200, t203;
  double t204, t206, t208, t209, t211, t214, t215, t220;
  double t225, t226, t228, t230, t231, t232, t234, t236;
  double t240, t242, t247, t248, t251, t257, t264, t266;
  double t268, t269, t274, t275, t280, t285, t286, t290;
  double t291, t292, t297, t298, t304, t306, t311, t312;
  double t315, t321, t328, t330, t332, t333, t338, t339;
  double t344, t349, t350, t354, t355, t356, t361, t362;
  double t364, t366, t368, t369, t376, t382, t387, t393;
  double t395, t398, t401, t403, t406, t409, t411, t412;
  double t417, t422, t423, t425, t434, t436, t438, t441;
  double t445, t450, t453, t454, t460, t470, t487, t489;
  double t491, t509, t521, t522, t524, t550, t566, t591;
  double t600, t608, t612, t629, t630, t632, t658, t674;
  double t698, t702, t703, t705, t707;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t7 = 0.310907e-1 * t6;
  t8 = 0.20e1 * t1;
  t9 = t8 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t13 = 0.38783294878113014393e-1 * t12;
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  t18 = 0.96902277115443742139e-3 * t17;
  t20 = r->rs + 0.113107e1 * t1 + 0.130045e2;
  t21 = 0.1e1 / t20;
  t23 = log(r->rs * t21);
  t25 = t8 + 0.113107e1;
  t28 = atan(0.71231089178181179908e1 / t25);
  t30 = t1 + 0.47584e-2;
  t31 = t30 * t30;
  t33 = log(t31 * t21);
  t35 = -0.16886863940389628573e-1 * t23 - 0.53650918488836021582e-2 * t28 - 0.69917323507644629720e-5 * t33;
  t36 = 0.10e1 + r->zeta;
  t37 = pow(t36, 0.13333333333333333333e1);
  t39 = 0.10e1 - r->zeta;
  t40 = pow(t39, 0.13333333333333333333e1);
  t42 = 0.19236610509315363199e1 * t37 + 0.19236610509315363199e1 * t40 - 0.38473221018630726398e1;
  t43 = t35 * t42;
  t44 = r->zeta * r->zeta;
  t45 = t44 * t44;
  t46 = 0.10e1 - t45;
  t50 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t51 = 0.1e1 / t50;
  t53 = log(r->rs * t51);
  t55 = t8 + 0.706042e1;
  t58 = atan(0.47309269095601128300e1 / t55);
  t60 = t1 + 0.32500e0;
  t61 = t60 * t60;
  t63 = log(t61 * t51);
  t65 = 0.1554535e-1 * t53 + 0.52491393169780936216e-1 * t58 + 0.22478670955426118383e-2 * t63 - t7 - t13 - t18;
  t66 = t65 * t42;
  r->e = t7 + t13 + t18 + 0.58482236226346462082e0 * t43 * t46 + t66 * t45;

  if(r->order < 1) return;

  t68 = t3 * t3;
  t69 = 0.1e1 / t68;
  t71 = 0.1e1 / t1;
  t73 = 0.1e1 + 0.18637200000000000000e1 * t71;
  t75 = -r->rs * t69 * t73 + t4;
  t76 = 0.1e1 / r->rs;
  t77 = t75 * t76;
  t79 = 0.310907e-1 * t77 * t3;
  t80 = t9 * t9;
  t81 = 0.1e1 / t80;
  t84 = 0.37846991046400000000e2 * t81 + 0.1e1;
  t85 = 0.1e1 / t84;
  t87 = 0.23859447405016062107e0 * t81 * t71 * t85;
  t88 = t14 * t4;
  t90 = t15 * t69;
  t92 = t88 * t71 - t90 * t73;
  t93 = 0.1e1 / t15;
  t94 = t92 * t93;
  t96 = 0.96902277115443742139e-3 * t94 * t3;
  t97 = t20 * t20;
  t98 = 0.1e1 / t97;
  t101 = 0.1e1 + 0.56553500000000000000e0 * t71;
  t103 = -r->rs * t98 * t101 + t21;
  t104 = t103 * t76;
  t107 = t25 * t25;
  t108 = 0.1e1 / t107;
  t111 = 0.50738680655100000001e2 * t108 + 0.1e1;
  t112 = 0.1e1 / t111;
  t115 = t30 * t21;
  t117 = t31 * t98;
  t119 = -t117 * t101 + t115 * t71;
  t120 = 0.1e1 / t31;
  t121 = t119 * t120;
  t124 = -0.16886863940389628573e-1 * t104 * t20 + 0.38216133593696081192e-1 * t108 * t71 * t112 - 0.69917323507644629720e-5 * t121 * t20;
  t125 = t124 * t42;
  t128 = t50 * t50;
  t129 = 0.1e1 / t128;
  t132 = 0.1e1 + 0.35302100000000000000e1 * t71;
  t134 = -r->rs * t129 * t132 + t51;
  t135 = t134 * t76;
  t138 = t55 * t55;
  t139 = 0.1e1 / t138;
  t142 = 0.22381669423600000000e2 * t139 + 0.1e1;
  t143 = 0.1e1 / t142;
  t146 = t60 * t51;
  t148 = t61 * t129;
  t150 = -t148 * t132 + t146 * t71;
  t151 = 0.1e1 / t61;
  t152 = t150 * t151;
  t155 = 0.1554535e-1 * t135 * t50 - 0.24833294446721653956e0 * t139 * t71 * t143 + 0.22478670955426118383e-2 * t152 * t50 - t79 + t87 - t96;
  t156 = t155 * t42;
  r->dedrs = t79 - t87 + t96 + 0.58482236226346462082e0 * t125 * t46 + t156 * t45;
  t158 = pow(t36, 0.3333333333333333333e0);
  t160 = pow(t39, 0.3333333333333333333e0);
  t162 = 0.25648814012420484265e1 * t158 - 0.25648814012420484265e1 * t160;
  t163 = t35 * t162;
  t166 = t44 * r->zeta;
  t169 = t65 * t162;
  r->dedz = 0.58482236226346462082e0 * t163 * t46 - 0.23392894490538584833e1 * t43 * t166 + t169 * t45 + 0.4e1 * t66 * t166;

  if(r->order < 2) return;

  t176 = 0.1e1 / t68 / t3;
  t178 = t73 * t73;
  t183 = -0.2e1 * t69 * t73 + 0.2e1 * r->rs * t176 * t178 + 0.93186000000000000000e0 * t71 * t69;
  t184 = t183 * t76;
  t186 = 0.310907e-1 * t184 * t3;
  t187 = r->rs * r->rs;
  t188 = 0.1e1 / t187;
  t189 = t75 * t188;
  t191 = 0.310907e-1 * t189 * t3;
  t193 = 0.310907e-1 * t77 * t73;
  t195 = 0.1e1 / t80 / t9;
  t198 = 0.47718894810032124214e0 * t195 * t76 * t85;
  t200 = 0.1e1 / t1 / r->rs;
  t203 = 0.11929723702508031054e0 * t81 * t200 * t85;
  t204 = t80 * t80;
  t206 = 0.1e1 / t204 / t9;
  t208 = t84 * t84;
  t209 = 0.1e1 / t208;
  t211 = 0.18060165846193892340e2 * t206 * t76 * t209;
  t214 = t14 * t69;
  t215 = t71 * t73;
  t220 = t15 * t176;
  t225 = t76 * t4 / 0.2e1 - 0.2e1 * t214 * t215 - t88 * t200 / 0.2e1 + 0.2e1 * t220 * t178 + 0.93186000000000000000e0 * t90 * t200;
  t226 = t225 * t93;
  t228 = 0.96902277115443742139e-3 * t226 * t3;
  t230 = 0.1e1 / t15 / t14;
  t231 = t92 * t230;
  t232 = t3 * t71;
  t234 = 0.96902277115443742139e-3 * t231 * t232;
  t236 = 0.96902277115443742139e-3 * t94 * t73;
  t240 = 0.1e1 / t97 / t20;
  t242 = t101 * t101;
  t247 = -0.2e1 * t98 * t101 + 0.2e1 * r->rs * t240 * t242 + 0.28276750000000000000e0 * t71 * t98;
  t248 = t247 * t76;
  t251 = t103 * t188;
  t257 = 0.1e1 / t107 / t25;
  t264 = t107 * t107;
  t266 = 0.1e1 / t264 / t25;
  t268 = t111 * t111;
  t269 = 0.1e1 / t268;
  t274 = t30 * t98;
  t275 = t71 * t101;
  t280 = t31 * t240;
  t285 = t76 * t21 / 0.2e1 - 0.2e1 * t274 * t275 - t115 * t200 / 0.2e1 + 0.2e1 * t280 * t242 + 0.28276750000000000000e0 * t117 * t200;
  t286 = t285 * t120;
  t290 = 0.1e1 / t31 / t30;
  t291 = t119 * t290;
  t292 = t20 * t71;
  t297 = -0.16886863940389628573e-1 * t248 * t20 + 0.16886863940389628573e-1 * t251 * t20 - 0.16886863940389628573e-1 * t104 * t101 - 0.76432267187392162384e-1 * t257 * t76 * t112 - 0.19108066796848040596e-1 * t108 * t200 * t112 + 0.38780723965663691962e1 * t266 * t76 * t269 - 0.69917323507644629720e-5 * t286 * t20 + 0.69917323507644629720e-5 * t291 * t292 - 0.69917323507644629720e-5 * t121 * t101;
  t298 = t297 * t42;
  t304 = 0.1e1 / t128 / t50;
  t306 = t132 * t132;
  t311 = -0.2e1 * t129 * t132 + 0.2e1 * r->rs * t304 * t306 + 0.17651050000000000000e1 * t71 * t129;
  t312 = t311 * t76;
  t315 = t134 * t188;
  t321 = 0.1e1 / t138 / t55;
  t328 = t138 * t138;
  t330 = 0.1e1 / t328 / t55;
  t332 = t142 * t142;
  t333 = 0.1e1 / t332;
  t338 = t60 * t129;
  t339 = t71 * t132;
  t344 = t61 * t304;
  t349 = t76 * t51 / 0.2e1 - 0.2e1 * t338 * t339 - t146 * t200 / 0.2e1 + 0.2e1 * t344 * t306 + 0.17651050000000000000e1 * t148 * t200;
  t350 = t349 * t151;
  t354 = 0.1e1 / t61 / t60;
  t355 = t150 * t354;
  t356 = t50 * t71;
  t361 = 0.1554535e-1 * t312 * t50 - 0.1554535e-1 * t315 * t50 + 0.1554535e-1 * t135 * t132 + 0.49666588893443307912e0 * t321 * t76 * t143 + 0.12416647223360826978e0 * t139 * t200 * t143 - 0.11116211740108914432e2 * t330 * t76 * t333 + 0.22478670955426118383e-2 * t350 * t50 - 0.22478670955426118383e-2 * t355 * t356 + 0.22478670955426118383e-2 * t152 * t132 - t186 + t191 - t193 - t198 - t203 + t211 - t228 + t234 - t236;
  t362 = t361 * t42;
  r->d2edrs2 = t186 - t191 + t193 + t198 + t203 - t211 + t228 - t234 + t236 + 0.58482236226346462082e0 * t298 * t46 + t362 * t45;
  t364 = pow(t36, -0.6666666666666666667e0);
  t366 = pow(t39, -0.6666666666666666667e0);
  t368 = 0.85496046708068280875e0 * t364 + 0.85496046708068280875e0 * t366;
  t369 = t35 * t368;
  t376 = t65 * t368;
  r->d2edz2 = 0.58482236226346462082e0 * t369 * t46 - 0.46785788981077169666e1 * t163 * t166 - 0.70178683471615754499e1 * t43 * t44 + t376 * t45 + 0.8e1 * t169 * t166 + 0.12e2 * t66 * t44;
  t382 = t124 * t162;
  t387 = t155 * t162;
  r->d2edrsz = 0.58482236226346462082e0 * t382 * t46 - 0.23392894490538584833e1 * t125 * t166 + t387 * t45 + 0.4e1 * t156 * t166;

  if(r->order < 3) return;

  t393 = 0.621814e-1 * t183 * t188 * t3;
  t395 = 0.1e1 / t187 / r->rs;
  t398 = 0.621814e-1 * t75 * t395 * t3;
  t401 = 0.71578342215048186322e0 * t195 * t188 * t85;
  t403 = 0.1e1 / t1 / t187;
  t406 = 0.17894585553762046581e0 * t81 * t403 * t85;
  t409 = 0.19380455423088748428e-2 * t225 * t230 * t232;
  t411 = 0.19380455423088748428e-2 * t231 * t215;
  t412 = t15 * t15;
  t417 = 0.14535341567316561321e-2 * t92 / t412 * t3 * t76;
  t422 = t68 * t68;
  t423 = 0.1e1 / t422;
  t425 = t178 * t73;
  t434 = 0.310907e-1 * (0.6e1 * t176 * t178 + 0.13977900000000000000e1 * t69 * t200 - 0.6e1 * r->rs * t423 * t425 - 0.55911600000000000000e1 * t71 * t176 * t73) * t76 * t3;
  t436 = 0.621814e-1 * t184 * t73;
  t438 = 0.28972179702000000000e-1 * t75 * t403;
  t441 = 0.621814e-1 * t189 * t73;
  t445 = 0.14315668443009637264e1 / t204 * t200 * t85;
  t450 = 0.12642116092335724638e3 / t204 / t80 * t200 * t209;
  t453 = 0.27090248769290838510e2 * t206 * t188 * t209;
  t454 = t204 * t204;
  t460 = 0.27340917403095972916e4 / t454 * t200 / t208 / t84;
  t470 = t200 * t73;
  t487 = 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t188 * t4 - 0.3e1 / 0.2e1 * t76 * t69 * t73 + 0.6e1 * t14 * t176 * t71 * t178 + 0.3e1 / 0.2e1 * t214 * t470 + 0.27955800000000000000e1 * t214 * t188 + 0.3e1 / 0.4e1 * t88 * t403 - 0.6e1 * t15 * t423 * t425 - 0.55911600000000000000e1 * t220 * t470 - 0.13977900000000000000e1 * t90 * t403) * t93 * t3;
  t489 = 0.19380455423088748428e-2 * t226 * t73;
  t491 = 0.90299355952797405550e-3 * t94 * t200;
  t509 = t31 * t31;
  t521 = t97 * t97;
  t522 = 0.1e1 / t521;
  t524 = t242 * t101;
  t550 = t264 * t264;
  t566 = t200 * t101;
  t591 = 0.33773727880779257146e-1 * t247 * t188 * t20 - 0.33773727880779257146e-1 * t103 * t395 * t20 + 0.11464840078108824358e0 * t257 * t188 * t112 + 0.28662100195272060894e-1 * t108 * t403 * t112 + 0.13983464701528925944e-4 * t285 * t290 * t292 + 0.13983464701528925944e-4 * t291 * t275 - 0.10487598526146694458e-4 * t119 / t509 * t20 * t76 + 0.47750562992641242975e-2 * t103 * t403 - 0.16886863940389628573e-1 * (0.6e1 * t240 * t242 + 0.42415125000000000000e0 * t98 * t200 - 0.6e1 * r->rs * t522 * t524 - 0.16966050000000000000e1 * t71 * t240 * t101) * t76 * t20 - 0.33773727880779257146e-1 * t248 * t101 + 0.33773727880779257146e-1 * t251 * t101 + 0.22929680156217648715e0 / t264 * t200 * t112 - 0.27146506775964584373e2 / t264 / t107 * t200 * t269 - 0.58171085948495537943e1 * t266 * t188 * t269 + 0.78707310754695732959e3 / t550 * t200 / t268 / t111 - 0.69917323507644629720e-5 * (-0.3e1 / 0.4e1 * t188 * t21 - 0.3e1 / 0.2e1 * t76 * t98 * t101 + 0.6e1 * t30 * t240 * t71 * t242 + 0.3e1 / 0.2e1 * t274 * t566 + 0.84830250000000000000e0 * t274 * t188 + 0.3e1 / 0.4e1 * t115 * t403 - 0.6e1 * t31 * t522 * t524 - 0.16966050000000000000e1 * t280 * t566 - 0.42415125000000000000e0 * t117 * t403) * t120 * t20 - 0.13983464701528925944e-4 * t286 * t101 + 0.19770346774947902834e-5 * t121 * t200 - 0.34958661753822314860e-5 * t291 * t20 * t200;
  t600 = t61 * t61;
  t608 = 0.48451138557721871070e-3 * t231 * t3 * t200;
  t612 = t409 + t411 - t417 - 0.44957341910852236766e-2 * t349 * t354 * t356 - 0.44957341910852236766e-2 * t355 * t339 + 0.33718006433139177574e-2 * t150 / t600 * t50 * t76 - t608 + 0.11239335477713059192e-2 * t355 * t50 * t200 + t393 - t398 + t401 + t406 - t434 - t436 + t441 + t445 - t450 - t453 + t460;
  t629 = t128 * t128;
  t630 = 0.1e1 / t629;
  t632 = t306 * t132;
  t658 = t328 * t328;
  t674 = t200 * t132;
  t698 = -t487 - t489 + t491 - 0.3109070e-1 * t311 * t188 * t50 + 0.3109070e-1 * t134 * t395 * t50 - 0.74499883340164961868e0 * t321 * t188 * t143 - 0.18624970835041240467e0 * t139 * t403 * t143 + 0.1554535e-1 * (0.6e1 * t304 * t306 + 0.26476575000000000000e1 * t129 * t200 - 0.6e1 * r->rs * t630 * t632 - 0.10590630000000000000e2 * t71 * t304 * t132) * t76 * t50 + 0.3109070e-1 * t312 * t132 - 0.3109070e-1 * t315 * t132 - 0.14899976668032992374e1 / t328 * t200 * t143 + 0.77813482180762401024e2 / t328 / t138 * t200 * t333 + 0.16674317610163371648e2 * t330 * t188 * t333 - 0.99519750563943615951e3 / t658 * t200 / t332 / t142 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t188 * t51 - 0.3e1 / 0.2e1 * t76 * t129 * t132 + 0.6e1 * t60 * t304 * t71 * t306 + 0.3e1 / 0.2e1 * t338 * t674 + 0.52953150000000000000e1 * t338 * t188 + 0.3e1 / 0.4e1 * t146 * t403 - 0.6e1 * t61 * t630 * t632 - 0.10590630000000000000e2 * t344 * t674 - 0.26476575000000000000e1 * t148 * t403) * t151 * t50 + 0.44957341910852236766e-2 * t350 * t132 - 0.39677214496777418688e-2 * t152 * t200 + t438 - 0.27439175011750000000e-1 * t134 * t403;
  t702 = -t441 - t445 + t450 + t453 - t460 + t487 + t489 - t491 + 0.58482236226346462082e0 * t591 * t42 * t46 + (t612 + t698) * t42 * t45 + t608;
  r->d3edrs3 = -t393 + t398 - t401 - t406 - t409 - t411 + t417 + t434 + t436 - t438 + t702;
  t703 = pow(t36, -0.16666666666666666667e1);
  t705 = pow(t39, -0.16666666666666666667e1);
  t707 = -0.56997364472045520586e0 * t703 + 0.56997364472045520586e0 * t705;
  r->d3edz3 = 0.58482236226346462082e0 * t35 * t707 * t46 - 0.70178683471615754499e1 * t369 * t166 - 0.21053605041484726350e2 * t163 * t44 - 0.14035736694323150900e2 * t43 * r->zeta + t65 * t707 * t45 + 0.12e2 * t376 * t166 + 0.36e2 * t169 * t44 + 0.24e2 * t66 * r->zeta;
  r->d3edrs2z = 0.58482236226346462082e0 * t297 * t162 * t46 - 0.23392894490538584833e1 * t298 * t166 + t361 * t162 * t45 + 0.4e1 * t362 * t166;
  r->d3edrsz2 = 0.58482236226346462082e0 * t124 * t368 * t46 - 0.46785788981077169666e1 * t382 * t166 - 0.70178683471615754499e1 * t125 * t44 + t155 * t368 * t45 + 0.8e1 * t387 * t166 + 0.12e2 * t156 * t44;

  if(r->order < 4) return;


}

void 
XC(lda_c_vwn_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_vwn_func)
