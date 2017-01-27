/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_vwn_2.mpl
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
  double t95, t100, t101, t105, t106, t107, t124, t133;
  double t143, t144, t146, t172, t188;


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

  t124 = 0.1e1 / t1 / t62;
  t133 = t15 * t15;
  t143 = t19 * t19;
  t144 = 0.1e1 / t143;
  t146 = t53 * t24;
  t172 = t79 * t79;
  t188 = t75 * t24;
  r->d3edrs3 = -0.621814e-1 * t58 * t63 * t3 + 0.621814e-1 * t26 / t62 / r->rs * t3 - 0.71578342215048186322e0 * t70 * t63 * t36 - 0.17894585553762046581e0 * t32 * t124 * t36 - 0.19380455423088748428e-2 * t100 * t105 * t107 - 0.19380455423088748428e-2 * t106 * t90 + 0.14535341567316561321e-2 * t43 / t133 * t3 * t27 + 0.310907e-1 * (0.6e1 * t51 * t53 + 0.13977900000000000000e1 * t20 * t75 - 0.6e1 * r->rs * t144 * t146 - 0.55911600000000000000e1 * t22 * t51 * t24) * t27 * t3 + 0.621814e-1 * t59 * t24 - 0.621814e-1 * t64 * t24 - 0.14315668443009637264e1 / t79 * t75 * t36 + 0.12642116092335724638e3 / t79 / t31 * t75 * t84 + 0.27090248769290838510e2 * t81 * t63 * t84 - 0.27340917403095972916e4 / t172 * t75 / t83 / t35 + 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t63 * t4 - 0.3e1 / 0.2e1 * t27 * t20 * t24 + 0.6e1 * t14 * t51 * t22 * t53 + 0.3e1 / 0.2e1 * t89 * t188 + 0.27955800000000000000e1 * t89 * t63 + 0.3e1 / 0.4e1 * t39 * t124 - 0.6e1 * t15 * t144 * t146 - 0.55911600000000000000e1 * t95 * t188 - 0.13977900000000000000e1 * t41 * t124) * t44 * t3 + 0.19380455423088748428e-2 * t101 * t24 - 0.90299355952797405550e-3 * t45 * t75 - 0.28972179702000000000e-1 * t26 * t124 + 0.48451138557721871070e-3 * t106 * t3 * t75;
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
  double t51, t53, t55, t58, t60, t61, t63, t66;
  double t67, t69, t71, t74, t76, t77, t79, t81;
  double t82, t85, t86, t88, t90, t93, t95, t96;
  double t98, t100, t102, t103, t105, t107, t109, t110;
  double t111, t113, t114, t115, t118, t119, t121, t122;
  double t124, t126, t127, t128, t130, t131, t132, t135;
  double t137, t138, t141, t142, t145, t146, t149, t151;
  double t153, t154, t155, t158, t159, t162, t163, t166;
  double t168, t169, t172, t173, t176, t177, t180, t182;
  double t184, t185, t186, t189, t190, t193, t195, t196;
  double t199, t200, t203, t204, t207, t209, t211, t212;
  double t213, t216, t217, t219, t220, t223, t225, t226;
  double t229, t230, t233, t234, t237, t239, t241, t242;
  double t243, t246, t248, t250, t252, t253, t256, t259;
  double t267, t269, t274, t275, t277, t278, t279, t280;
  double t282, t284, t286, t289, t291, t294, t295, t297;
  double t299, t300, t302, t305, t306, t311, t316, t317;
  double t319, t321, t322, t323, t325, t327, t331, t333;
  double t338, t339, t342, t348, t355, t357, t359, t360;
  double t365, t366, t371, t376, t377, t381, t382, t383;
  double t388, t389, t395, t397, t402, t403, t406, t412;
  double t419, t421, t423, t424, t429, t430, t435, t440;
  double t441, t445, t446, t447, t455, t457, t462, t463;
  double t466, t472, t479, t481, t483, t484, t489, t490;
  double t495, t500, t501, t505, t506, t507, t512, t513;
  double t518, t520, t525, t526, t529, t535, t542, t544;
  double t546, t547, t552, t553, t558, t563, t564, t568;
  double t569, t570, t575, t577, t579, t581, t582, t589;
  double t596, t601, t608, t610, t613, t616, t618, t621;
  double t624, t626, t627, t632, t635, t640, t641, t643;
  double t652, t654, t656, t657, t661, t666, t669, t670;
  double t676, t686, t703, t705, t707, t725, t738, t739;
  double t741, t767, t783, t807, t839, t840, t842, t868;
  double t884, t910, t911, t913, t923, t940, t956, t987;
  double t998, t1010, t1015, t1032, t1033, t1035, t1045, t1062;
  double t1078, t1107, t1116, t1119, t1120, t1122, t1124;


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
  t20 = r->rs + 0.106835e1 * t1 + 0.114813e2;
  t21 = 0.1e1 / t20;
  t23 = log(r->rs * t21);
  t25 = t8 + 0.106835e1;
  t28 = atan(0.66920720466459414830e1 / t25);
  t30 = t1 + 0.228344e0;
  t31 = t30 * t30;
  t33 = log(t31 * t21);
  t35 = -0.16886863940389628573e-1 * t23 - 0.54584823586389677409e-2 * t28 - 0.36490335179177670236e-3 * t33;
  t36 = 0.10e1 + r->zeta;
  t37 = pow(t36, 0.13333333333333333333e1);
  t39 = 0.10e1 - r->zeta;
  t40 = pow(t39, 0.13333333333333333333e1);
  t42 = 0.19236610509315363199e1 * t37 + 0.19236610509315363199e1 * t40 - 0.38473221018630726398e1;
  t43 = t35 * t42;
  t44 = r->zeta * r->zeta;
  t45 = t44 * t44;
  t46 = 0.10e1 - t45;
  t50 = r->rs + 0.201231e2 * t1 + 0.101578e3;
  t51 = 0.1e1 / t50;
  t53 = log(r->rs * t51);
  t55 = t8 + 0.201231e2;
  t58 = atan(0.11716852777089929792e1 / t55);
  t60 = t1 + 0.743294e0;
  t61 = t60 * t60;
  t63 = log(t61 * t51);
  t66 = r->rs + 0.130720e2 * t1 + 0.427198e2;
  t67 = 0.1e1 / t66;
  t69 = log(r->rs * t67);
  t71 = t8 + 0.130720e2;
  t74 = atan(0.44899888641287296627e-1 / t71);
  t76 = t1 + 0.409286e0;
  t77 = t76 * t76;
  t79 = log(t77 * t67);
  t81 = 0.1554535e-1 * t53 + 0.61881802979060631482e0 * t58 + 0.26673100072733151594e-2 * t63 - 0.310907e-1 * t69 - 0.20521972937837502661e2 * t74 - 0.44313737677495382697e-2 * t79;
  t82 = t81 * t42;
  t85 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t86 = 0.1e1 / t85;
  t88 = log(r->rs * t86);
  t90 = t8 + 0.706042e1;
  t93 = atan(0.47309269095601128300e1 / t90);
  t95 = t1 + 0.32500e0;
  t96 = t95 * t95;
  t98 = log(t96 * t86);
  t100 = 0.1554535e-1 * t88 + 0.52491393169780936216e-1 * t93 + 0.22478670955426118383e-2 * t98 - t7 - t13 - t18;
  r->e = t7 + t13 + t18 + 0.58482236226346462082e0 * t43 * t46 - t82 * t46 + t100 * t42;

  if(r->order < 1) return;

  t102 = t3 * t3;
  t103 = 0.1e1 / t102;
  t105 = 0.1e1 / t1;
  t107 = 0.1e1 + 0.18637200000000000000e1 * t105;
  t109 = -r->rs * t103 * t107 + t4;
  t110 = 0.1e1 / r->rs;
  t111 = t109 * t110;
  t113 = 0.310907e-1 * t111 * t3;
  t114 = t9 * t9;
  t115 = 0.1e1 / t114;
  t118 = 0.37846991046400000000e2 * t115 + 0.1e1;
  t119 = 0.1e1 / t118;
  t121 = 0.23859447405016062107e0 * t115 * t105 * t119;
  t122 = t14 * t4;
  t124 = t15 * t103;
  t126 = t122 * t105 - t124 * t107;
  t127 = 0.1e1 / t15;
  t128 = t126 * t127;
  t130 = 0.96902277115443742139e-3 * t128 * t3;
  t131 = t20 * t20;
  t132 = 0.1e1 / t131;
  t135 = 0.1e1 + 0.53417500000000000000e0 * t105;
  t137 = -r->rs * t132 * t135 + t21;
  t138 = t137 * t110;
  t141 = t25 * t25;
  t142 = 0.1e1 / t141;
  t145 = 0.44783828277500000000e2 * t142 + 0.1e1;
  t146 = 0.1e1 / t145;
  t149 = t30 * t21;
  t151 = t31 * t132;
  t153 = t149 * t105 - t151 * t135;
  t154 = 0.1e1 / t31;
  t155 = t153 * t154;
  t158 = -0.16886863940389628573e-1 * t138 * t20 + 0.36528557209357842815e-1 * t142 * t105 * t146 - 0.36490335179177670236e-3 * t155 * t20;
  t159 = t158 * t42;
  t162 = t50 * t50;
  t163 = 0.1e1 / t162;
  t166 = 0.1e1 + 0.10061550000000000000e2 * t105;
  t168 = -r->rs * t163 * t166 + t51;
  t169 = t168 * t110;
  t172 = t55 * t55;
  t173 = 0.1e1 / t172;
  t176 = 0.13728463900000000000e1 * t173 + 0.1e1;
  t177 = 0.1e1 / t176;
  t180 = t60 * t51;
  t182 = t61 * t163;
  t184 = t180 * t105 - t182 * t166;
  t185 = 0.1e1 / t61;
  t186 = t184 * t185;
  t189 = t66 * t66;
  t190 = 0.1e1 / t189;
  t193 = 0.1e1 + 0.65360000000000000000e1 * t105;
  t195 = -r->rs * t190 * t193 + t67;
  t196 = t195 * t110;
  t199 = t71 * t71;
  t200 = 0.1e1 / t199;
  t203 = 0.20160000000000000000e-2 * t200 + 0.1e1;
  t204 = 0.1e1 / t203;
  t207 = t76 * t67;
  t209 = t77 * t190;
  t211 = t207 * t105 - t209 * t193;
  t212 = 0.1e1 / t77;
  t213 = t211 * t212;
  t216 = 0.1554535e-1 * t169 * t50 - 0.72505997508653845050e0 * t173 * t105 * t177 + 0.26673100072733151594e-2 * t186 * t50 - 0.310907e-1 * t196 * t66 + 0.92143429960841537844e0 * t200 * t105 * t204 - 0.44313737677495382697e-2 * t213 * t66;
  t217 = t216 * t42;
  t219 = t85 * t85;
  t220 = 0.1e1 / t219;
  t223 = 0.1e1 + 0.35302100000000000000e1 * t105;
  t225 = -r->rs * t220 * t223 + t86;
  t226 = t225 * t110;
  t229 = t90 * t90;
  t230 = 0.1e1 / t229;
  t233 = 0.22381669423600000000e2 * t230 + 0.1e1;
  t234 = 0.1e1 / t233;
  t237 = t95 * t86;
  t239 = t96 * t220;
  t241 = t237 * t105 - t239 * t223;
  t242 = 0.1e1 / t96;
  t243 = t241 * t242;
  t246 = 0.1554535e-1 * t226 * t85 - 0.24833294446721653956e0 * t230 * t105 * t234 + 0.22478670955426118383e-2 * t243 * t85 - t113 + t121 - t130;
  r->dedrs = t113 - t121 + t130 + 0.58482236226346462082e0 * t159 * t46 - t217 * t46 + t246 * t42;
  t248 = pow(t36, 0.3333333333333333333e0);
  t250 = pow(t39, 0.3333333333333333333e0);
  t252 = 0.25648814012420484265e1 * t248 - 0.25648814012420484265e1 * t250;
  t253 = t35 * t252;
  t256 = t44 * r->zeta;
  t259 = t81 * t252;
  r->dedz = 0.58482236226346462082e0 * t253 * t46 - 0.23392894490538584833e1 * t43 * t256 - t259 * t46 + 0.4e1 * t82 * t256 + t100 * t252;

  if(r->order < 2) return;

  t267 = 0.1e1 / t102 / t3;
  t269 = t107 * t107;
  t274 = -0.2e1 * t103 * t107 + 0.2e1 * r->rs * t267 * t269 + 0.93186000000000000000e0 * t105 * t103;
  t275 = t274 * t110;
  t277 = 0.310907e-1 * t275 * t3;
  t278 = r->rs * r->rs;
  t279 = 0.1e1 / t278;
  t280 = t109 * t279;
  t282 = 0.310907e-1 * t280 * t3;
  t284 = 0.310907e-1 * t111 * t107;
  t286 = 0.1e1 / t114 / t9;
  t289 = 0.47718894810032124214e0 * t286 * t110 * t119;
  t291 = 0.1e1 / t1 / r->rs;
  t294 = 0.11929723702508031054e0 * t115 * t291 * t119;
  t295 = t114 * t114;
  t297 = 0.1e1 / t295 / t9;
  t299 = t118 * t118;
  t300 = 0.1e1 / t299;
  t302 = 0.18060165846193892340e2 * t297 * t110 * t300;
  t305 = t14 * t103;
  t306 = t105 * t107;
  t311 = t15 * t267;
  t316 = t110 * t4 / 0.2e1 - 0.2e1 * t305 * t306 - t122 * t291 / 0.2e1 + 0.2e1 * t311 * t269 + 0.93186000000000000000e0 * t124 * t291;
  t317 = t316 * t127;
  t319 = 0.96902277115443742139e-3 * t317 * t3;
  t321 = 0.1e1 / t15 / t14;
  t322 = t126 * t321;
  t323 = t3 * t105;
  t325 = 0.96902277115443742139e-3 * t322 * t323;
  t327 = 0.96902277115443742139e-3 * t128 * t107;
  t331 = 0.1e1 / t131 / t20;
  t333 = t135 * t135;
  t338 = -0.2e1 * t132 * t135 + 0.2e1 * r->rs * t331 * t333 + 0.26708750000000000000e0 * t105 * t132;
  t339 = t338 * t110;
  t342 = t137 * t279;
  t348 = 0.1e1 / t141 / t25;
  t355 = t141 * t141;
  t357 = 0.1e1 / t355 / t25;
  t359 = t145 * t145;
  t360 = 0.1e1 / t359;
  t365 = t30 * t132;
  t366 = t105 * t135;
  t371 = t31 * t331;
  t376 = t110 * t21 / 0.2e1 - 0.2e1 * t365 * t366 - t149 * t291 / 0.2e1 + 0.2e1 * t371 * t333 + 0.26708750000000000000e0 * t151 * t291;
  t377 = t376 * t154;
  t381 = 0.1e1 / t31 / t30;
  t382 = t153 * t381;
  t383 = t20 * t105;
  t388 = -0.16886863940389628573e-1 * t339 * t20 + 0.16886863940389628573e-1 * t342 * t20 - 0.16886863940389628573e-1 * t138 * t135 - 0.73057114418715685630e-1 * t348 * t110 * t146 - 0.18264278604678921408e-1 * t142 * t291 * t146 + 0.32717772665774324973e1 * t357 * t110 * t360 - 0.36490335179177670236e-3 * t377 * t20 + 0.36490335179177670236e-3 * t382 * t383 - 0.36490335179177670236e-3 * t155 * t135;
  t389 = t388 * t42;
  t395 = 0.1e1 / t162 / t50;
  t397 = t166 * t166;
  t402 = -0.2e1 * t163 * t166 + 0.2e1 * r->rs * t395 * t397 + 0.50307750000000000000e1 * t105 * t163;
  t403 = t402 * t110;
  t406 = t168 * t279;
  t412 = 0.1e1 / t172 / t55;
  t419 = t172 * t172;
  t421 = 0.1e1 / t419 / t55;
  t423 = t176 * t176;
  t424 = 0.1e1 / t423;
  t429 = t60 * t163;
  t430 = t105 * t166;
  t435 = t61 * t395;
  t440 = t110 * t51 / 0.2e1 - 0.2e1 * t429 * t430 - t180 * t291 / 0.2e1 + 0.2e1 * t435 * t397 + 0.50307750000000000000e1 * t182 * t291;
  t441 = t440 * t185;
  t445 = 0.1e1 / t61 / t60;
  t446 = t184 * t445;
  t447 = t50 * t105;
  t455 = 0.1e1 / t189 / t66;
  t457 = t193 * t193;
  t462 = -0.2e1 * t190 * t193 + 0.2e1 * r->rs * t455 * t457 + 0.32680000000000000000e1 * t105 * t190;
  t463 = t462 * t110;
  t466 = t195 * t279;
  t472 = 0.1e1 / t199 / t71;
  t479 = t199 * t199;
  t481 = 0.1e1 / t479 / t71;
  t483 = t203 * t203;
  t484 = 0.1e1 / t483;
  t489 = t76 * t190;
  t490 = t105 * t193;
  t495 = t77 * t455;
  t500 = t110 * t67 / 0.2e1 - 0.2e1 * t489 * t490 - t207 * t291 / 0.2e1 + 0.2e1 * t495 * t457 + 0.32680000000000000000e1 * t209 * t291;
  t501 = t500 * t212;
  t505 = 0.1e1 / t77 / t76;
  t506 = t211 * t505;
  t507 = t66 * t105;
  t512 = 0.1554535e-1 * t403 * t50 - 0.1554535e-1 * t406 * t50 + 0.1554535e-1 * t169 * t166 + 0.14501199501730769010e1 * t412 * t110 * t177 + 0.36252998754326922525e0 * t173 * t291 * t177 - 0.19907919386620884987e1 * t421 * t110 * t424 + 0.26673100072733151594e-2 * t441 * t50 - 0.26673100072733151594e-2 * t446 * t447 + 0.26673100072733151594e-2 * t186 * t166 - 0.310907e-1 * t463 * t66 + 0.310907e-1 * t466 * t66 - 0.310907e-1 * t196 * t193 - 0.18428685992168307569e1 * t472 * t110 * t204 - 0.46071714980420768922e0 * t200 * t291 * t204 + 0.37152230960211308059e-2 * t481 * t110 * t484 - 0.44313737677495382697e-2 * t501 * t66 + 0.44313737677495382697e-2 * t506 * t507 - 0.44313737677495382697e-2 * t213 * t193;
  t513 = t512 * t42;
  t518 = 0.1e1 / t219 / t85;
  t520 = t223 * t223;
  t525 = -0.2e1 * t220 * t223 + 0.2e1 * r->rs * t518 * t520 + 0.17651050000000000000e1 * t105 * t220;
  t526 = t525 * t110;
  t529 = t225 * t279;
  t535 = 0.1e1 / t229 / t90;
  t542 = t229 * t229;
  t544 = 0.1e1 / t542 / t90;
  t546 = t233 * t233;
  t547 = 0.1e1 / t546;
  t552 = t95 * t220;
  t553 = t105 * t223;
  t558 = t96 * t518;
  t563 = t110 * t86 / 0.2e1 - 0.2e1 * t552 * t553 - t237 * t291 / 0.2e1 + 0.2e1 * t558 * t520 + 0.17651050000000000000e1 * t239 * t291;
  t564 = t563 * t242;
  t568 = 0.1e1 / t96 / t95;
  t569 = t241 * t568;
  t570 = t85 * t105;
  t575 = 0.1554535e-1 * t526 * t85 - 0.1554535e-1 * t529 * t85 + 0.1554535e-1 * t226 * t223 + 0.49666588893443307912e0 * t535 * t110 * t234 + 0.12416647223360826978e0 * t230 * t291 * t234 - 0.11116211740108914432e2 * t544 * t110 * t547 + 0.22478670955426118383e-2 * t564 * t85 - 0.22478670955426118383e-2 * t569 * t570 + 0.22478670955426118383e-2 * t243 * t223 - t277 + t282 - t284 - t289 - t294 + t302 - t319 + t325 - t327;
  r->d2edrs2 = t277 - t282 + t284 + t289 + t294 - t302 + t319 - t325 + t327 + 0.58482236226346462082e0 * t389 * t46 - t513 * t46 + t575 * t42;
  t577 = pow(t36, -0.6666666666666666667e0);
  t579 = pow(t39, -0.6666666666666666667e0);
  t581 = 0.85496046708068280875e0 * t577 + 0.85496046708068280875e0 * t579;
  t582 = t35 * t581;
  t589 = t81 * t581;
  r->d2edz2 = 0.58482236226346462082e0 * t582 * t46 - 0.46785788981077169666e1 * t253 * t256 - 0.70178683471615754499e1 * t43 * t44 - t589 * t46 + 0.8e1 * t259 * t256 + 0.12e2 * t82 * t44 + t100 * t581;
  t596 = t158 * t252;
  t601 = t216 * t252;
  r->d2edrsz = 0.58482236226346462082e0 * t596 * t46 - 0.23392894490538584833e1 * t159 * t256 - t601 * t46 + 0.4e1 * t217 * t256 + t246 * t252;

  if(r->order < 3) return;

  t608 = 0.621814e-1 * t274 * t279 * t3;
  t610 = 0.1e1 / t278 / r->rs;
  t613 = 0.621814e-1 * t109 * t610 * t3;
  t616 = 0.71578342215048186322e0 * t286 * t279 * t119;
  t618 = 0.1e1 / t1 / t278;
  t621 = 0.17894585553762046581e0 * t115 * t618 * t119;
  t624 = 0.19380455423088748428e-2 * t316 * t321 * t323;
  t626 = 0.19380455423088748428e-2 * t322 * t306;
  t627 = t15 * t15;
  t632 = 0.14535341567316561321e-2 * t126 / t627 * t3 * t110;
  t635 = 0.48451138557721871070e-3 * t322 * t3 * t291;
  t640 = t102 * t102;
  t641 = 0.1e1 / t640;
  t643 = t269 * t107;
  t652 = 0.310907e-1 * (0.6e1 * t267 * t269 + 0.13977900000000000000e1 * t103 * t291 - 0.6e1 * r->rs * t641 * t643 - 0.55911600000000000000e1 * t105 * t267 * t107) * t110 * t3;
  t654 = 0.621814e-1 * t275 * t107;
  t656 = 0.621814e-1 * t280 * t107;
  t657 = -t608 + t613 - t616 - t621 - t624 - t626 + t632 + t635 + t652 + t654 - t656;
  t661 = 0.14315668443009637264e1 / t295 * t291 * t119;
  t666 = 0.12642116092335724638e3 / t295 / t114 * t291 * t300;
  t669 = 0.27090248769290838510e2 * t297 * t279 * t300;
  t670 = t295 * t295;
  t676 = 0.27340917403095972916e4 / t670 * t291 / t299 / t118;
  t686 = t291 * t107;
  t703 = 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t279 * t4 - 0.3e1 / 0.2e1 * t110 * t103 * t107 + 0.6e1 * t14 * t267 * t105 * t269 + 0.3e1 / 0.2e1 * t305 * t686 + 0.27955800000000000000e1 * t305 * t279 + 0.3e1 / 0.4e1 * t122 * t618 - 0.6e1 * t15 * t641 * t643 - 0.55911600000000000000e1 * t311 * t686 - 0.13977900000000000000e1 * t124 * t618) * t127 * t3;
  t705 = 0.19380455423088748428e-2 * t317 * t107;
  t707 = 0.90299355952797405550e-3 * t128 * t291;
  t725 = t31 * t31;
  t738 = t131 * t131;
  t739 = 0.1e1 / t738;
  t741 = t333 * t135;
  t767 = t355 * t355;
  t783 = t291 * t135;
  t807 = 0.33773727880779257146e-1 * t338 * t279 * t20 - 0.33773727880779257146e-1 * t137 * t610 * t20 + 0.10958567162807352845e0 * t348 * t279 * t146 + 0.27396417907018382112e-1 * t142 * t618 * t146 + 0.72980670358355340472e-3 * t376 * t381 * t383 + 0.72980670358355340472e-3 * t382 * t366 - 0.54735502768766505354e-3 * t153 / t725 * t20 * t110 - 0.18245167589588835118e-3 * t382 * t20 * t291 - 0.16886863940389628573e-1 * (0.6e1 * t331 * t333 + 0.40063125000000000000e0 * t132 * t291 - 0.6e1 * r->rs * t739 * t741 - 0.16025250000000000000e1 * t105 * t331 * t135) * t110 * t20 - 0.33773727880779257146e-1 * t339 * t135 + 0.33773727880779257146e-1 * t342 * t135 + 0.21917134325614705689e0 / t355 * t291 * t146 - 0.22902440866042027481e2 / t355 / t141 * t291 * t360 - 0.49076658998661487460e1 * t357 * t279 * t360 + 0.58609084507452830846e3 / t767 * t291 / t359 / t145 - 0.36490335179177670236e-3 * (-0.3e1 / 0.4e1 * t279 * t21 - 0.3e1 / 0.2e1 * t110 * t132 * t135 + 0.6e1 * t30 * t331 * t105 * t333 + 0.3e1 / 0.2e1 * t365 * t783 + 0.80126250000000000000e0 * t365 * t279 + 0.3e1 / 0.4e1 * t149 * t618 - 0.6e1 * t31 * t739 * t741 - 0.16025250000000000000e1 * t371 * t783 - 0.40063125000000000000e0 * t151 * t618) * t154 * t20 - 0.72980670358355340472e-3 * t377 * t135 + 0.97461123971686159992e-4 * t155 * t291 + 0.45102702726788149215e-2 * t137 * t618;
  t839 = t162 * t162;
  t840 = 0.1e1 / t839;
  t842 = t397 * t166;
  t868 = t419 * t419;
  t884 = t291 * t166;
  t910 = t189 * t189;
  t911 = 0.1e1 / t910;
  t913 = t457 * t193;
  t923 = -0.3109070e-1 * t402 * t279 * t50 + 0.3109070e-1 * t168 * t610 * t50 - 0.21751799252596153515e1 * t412 * t279 * t177 - 0.54379498131490383788e0 * t173 * t618 * t177 + 0.621814e-1 * t462 * t279 * t66 - 0.621814e-1 * t195 * t610 * t66 + 0.27643028988252461353e1 * t472 * t279 * t204 + 0.69107572470631153383e0 * t200 * t618 * t204 + 0.1554535e-1 * (0.6e1 * t395 * t397 + 0.75461625000000000000e1 * t163 * t291 - 0.6e1 * r->rs * t840 * t842 - 0.30184650000000000000e2 * t105 * t395 * t166) * t110 * t50 + 0.3109070e-1 * t403 * t166 - 0.3109070e-1 * t406 * t166 - 0.43503598505192307030e1 / t419 * t291 * t177 + 0.13935543570634619491e2 / t419 / t172 * t291 * t424 + 0.29861879079931327481e1 * t421 * t279 * t424 - 0.10932206104933398501e2 / t868 * t291 / t423 / t176 + 0.26673100072733151594e-2 * (-0.3e1 / 0.4e1 * t279 * t51 - 0.3e1 / 0.2e1 * t110 * t163 * t166 + 0.6e1 * t60 * t395 * t105 * t397 + 0.3e1 / 0.2e1 * t429 * t884 + 0.15092325000000000000e2 * t429 * t279 + 0.3e1 / 0.4e1 * t180 * t618 - 0.6e1 * t61 * t840 * t842 - 0.30184650000000000000e2 * t435 * t884 - 0.75461625000000000000e1 * t182 * t618) * t185 * t50 + 0.53346200145466303188e-2 * t441 * t166 - 0.13418636501840412071e-1 * t186 * t291 - 0.310907e-1 * (0.6e1 * t455 * t457 + 0.49020000000000000000e1 * t190 * t291 - 0.6e1 * r->rs * t911 * t913 - 0.19608000000000000000e2 * t105 * t455 * t193) * t110 * t66;
  t940 = t479 * t479;
  t956 = t291 * t193;
  t987 = t61 * t61;
  t998 = t77 * t77;
  t1010 = -0.621814e-1 * t463 * t193 + 0.621814e-1 * t466 * t193 + 0.55286057976504922707e1 / t479 * t291 * t204 - 0.26006561672147915642e-1 / t479 / t199 * t291 * t484 - 0.55728346440316962088e-2 * t481 * t279 * t484 + 0.29959559046314398819e-4 / t940 * t291 / t483 / t203 - 0.44313737677495382697e-2 * (-0.3e1 / 0.4e1 * t279 * t67 - 0.3e1 / 0.2e1 * t110 * t190 * t193 + 0.6e1 * t76 * t455 * t105 * t457 + 0.3e1 / 0.2e1 * t489 * t956 + 0.98040000000000000000e1 * t489 * t279 + 0.3e1 / 0.4e1 * t207 * t618 - 0.6e1 * t77 * t911 * t913 - 0.19608000000000000000e2 * t495 * t956 - 0.49020000000000000000e1 * t209 * t618) * t212 * t66 - 0.88627475354990765394e-2 * t501 * t193 + 0.14481729473005491065e-1 * t213 * t291 - 0.78205158146250000000e-1 * t168 * t618 + 0.10160440760000000000e0 * t195 * t618 - 0.53346200145466303188e-2 * t440 * t445 * t447 - 0.53346200145466303188e-2 * t446 * t430 + 0.40009650109099727391e-2 * t184 / t987 * t50 * t110 + 0.88627475354990765394e-2 * t500 * t505 * t507 + 0.88627475354990765394e-2 * t506 * t490 - 0.66470606516243074046e-2 * t211 / t998 * t66 * t110 + 0.13336550036366575797e-2 * t446 * t50 * t291 - 0.22156868838747691348e-2 * t506 * t66 * t291;
  t1015 = 0.28972179702000000000e-1 * t109 * t618;
  t1032 = t219 * t219;
  t1033 = 0.1e1 / t1032;
  t1035 = t520 * t223;
  t1045 = t608 - t613 + t616 + t621 - t652 - t654 + t656 + t661 - t666 - t669 + t676 - t703 - t705 + t707 - 0.3109070e-1 * t525 * t279 * t85 + 0.3109070e-1 * t225 * t610 * t85 - 0.74499883340164961868e0 * t535 * t279 * t234 - 0.18624970835041240467e0 * t230 * t618 * t234 + 0.1554535e-1 * (0.6e1 * t518 * t520 + 0.26476575000000000000e1 * t220 * t291 - 0.6e1 * r->rs * t1033 * t1035 - 0.10590630000000000000e2 * t105 * t518 * t223) * t110 * t85;
  t1062 = t542 * t542;
  t1078 = t291 * t223;
  t1107 = t96 * t96;
  t1116 = 0.3109070e-1 * t526 * t223 - 0.3109070e-1 * t529 * t223 - 0.14899976668032992374e1 / t542 * t291 * t234 + 0.77813482180762401024e2 / t542 / t229 * t291 * t547 + 0.16674317610163371648e2 * t544 * t279 * t547 - 0.99519750563943615951e3 / t1062 * t291 / t546 / t233 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t279 * t86 - 0.3e1 / 0.2e1 * t110 * t220 * t223 + 0.6e1 * t95 * t518 * t105 * t520 + 0.3e1 / 0.2e1 * t552 * t1078 + 0.52953150000000000000e1 * t552 * t279 + 0.3e1 / 0.4e1 * t237 * t618 - 0.6e1 * t96 * t1033 * t1035 - 0.10590630000000000000e2 * t558 * t1078 - 0.26476575000000000000e1 * t239 * t618) * t242 * t85 + 0.44957341910852236766e-2 * t564 * t223 - 0.39677214496777418688e-2 * t243 * t291 + t1015 - 0.27439175011750000000e-1 * t225 * t618 + t624 + t626 - t632 - t635 - 0.44957341910852236766e-2 * t563 * t568 * t570 - 0.44957341910852236766e-2 * t569 * t553 + 0.33718006433139177574e-2 * t241 / t1107 * t85 * t110 + 0.11239335477713059192e-2 * t569 * t85 * t291;
  t1119 = -t661 + t666 + t669 - t676 + t703 + t705 - t707 + 0.58482236226346462082e0 * t807 * t42 * t46 - (t923 + t1010) * t42 * t46 - t1015 + (t1045 + t1116) * t42;
  r->d3edrs3 = t657 + t1119;
  t1120 = pow(t36, -0.16666666666666666667e1);
  t1122 = pow(t39, -0.16666666666666666667e1);
  t1124 = -0.56997364472045520586e0 * t1120 + 0.56997364472045520586e0 * t1122;
  r->d3edz3 = 0.58482236226346462082e0 * t35 * t1124 * t46 - 0.70178683471615754499e1 * t582 * t256 - 0.21053605041484726350e2 * t253 * t44 - 0.14035736694323150900e2 * t43 * r->zeta - t81 * t1124 * t46 + 0.12e2 * t589 * t256 + 0.36e2 * t259 * t44 + 0.24e2 * t82 * r->zeta + t100 * t1124;
  r->d3edrs2z = 0.58482236226346462082e0 * t388 * t252 * t46 - 0.23392894490538584833e1 * t389 * t256 - t512 * t252 * t46 + 0.4e1 * t513 * t256 + t575 * t252;
  r->d3edrsz2 = 0.58482236226346462082e0 * t158 * t581 * t46 - 0.46785788981077169666e1 * t596 * t256 - 0.70178683471615754499e1 * t159 * t44 - t216 * t581 * t46 + 0.8e1 * t601 * t256 + 0.12e2 * t217 * t44 + t246 * t581;

  if(r->order < 4) return;


}

void 
XC(lda_c_vwn_2_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_vwn_2_func)
