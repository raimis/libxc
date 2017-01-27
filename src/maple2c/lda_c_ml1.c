/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/lda_c_ml1.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t9, t12, t13, t14, t15;
  double t17, t18, t19, t24, t26, t28, t31, t33;
  double t34, t37, t39, t44, t53, t57, t64, t71;
  double t73, t75, t76, t77, t84, t88, t95, t107;
  double t109;

  lda_c_ml1_params *params;

  assert(p->params != NULL);
  params = (lda_c_ml1_params * )(p->params);

  t1 = r->rs * r->rs;
  t3 = 0.1e1 / t1 / r->rs;
  t4 = pow(0.10e1, params->q);
  t9 = 0.10e1 + 0.67458984800949555333e1 * params->fc * t4 / r->rs;
  t12 = 0.1e1 / params->fc;
  t13 = 0.1e1 / t4;
  t14 = t12 * t13;
  t15 = t14 * r->rs;
  t17 = 0.10e1 + 0.14823817394016341099e0 * t15;
  t18 = log(t17);
  t19 = t18 * t12;
  t24 = params->fc * params->fc;
  t26 = t4 * t4;
  t28 = 0.1e1 / t24 / t26;
  t31 = -0.2763169e1 / t9 + 0.45368772706640551755e0 * t19 * t13 * r->rs + 0.40960720149928872481e0 * t15 - 0.12797332303741745073e0 * t28 * t1;
  r->e = 0.29841551829730375458e-1 * t3 * t31;

  if(r->order < 1) return;

  t33 = t1 * t1;
  t34 = 0.1e1 / t33;
  t37 = t9 * t9;
  t39 = 0.1e1 / t37 * params->fc;
  t44 = 0.1e1 / t17;
  t53 = -0.18640057557345498186e2 * t39 * t4 / t1 + 0.67253840199387204602e-1 * t28 * t44 * r->rs + 0.45368772706640551755e0 * t19 * t13 + 0.40960720149928872481e0 * t14 - 0.25594664607483490146e0 * t28 * r->rs;
  r->dedrs = -0.89524655489191126374e-1 * t34 * t31 + 0.29841551829730375458e-1 * t3 * t53;
  r->dedz = 0;

  if(r->order < 2) return;

  t57 = 0.1e1 / t33 / r->rs;
  t64 = 0.1e1 / t37 / t9 * t24;
  t71 = t24 * params->fc;
  t73 = t26 * t4;
  t75 = 0.1e1 / t71 / t73;
  t76 = t17 * t17;
  t77 = 0.1e1 / t76;
  t84 = -0.25148787188995897132e3 * t64 * t26 * t34 + 0.37280115114690996372e2 * t39 * t4 * t3 - 0.99695864616207147338e-2 * t75 * t77 * r->rs + 0.13450768039877440920e0 * t28 * t44 - 0.25594664607483490146e0 * t28;
  r->d2edrs2 = 0.35809862195676450550e0 * t57 * t31 - 0.17904931097838225275e0 * t34 * t53 + 0.29841551829730375458e-1 * t3 * t84;
  r->d2edz2 = 0;
  r->d2edrsz = 0;

  if(r->order < 3) return;

  t88 = 0.1e1 / t33 / t1;
  t95 = t37 * t37;
  t107 = t24 * t24;
  t109 = t26 * t26;
  r->d3edrs3 = -0.17904931097838225275e1 * t88 * t31 + 0.10742958658702935165e1 * t57 * t53 - 0.26857396646757337912e0 * t34 * t84 + 0.29841551829730375458e-1 * t3 * (-0.50895349582343673507e4 / t95 * t71 * t73 * t88 + 0.15089272313397538279e4 * t64 * t26 * t57 - 0.11184034534407298912e3 * t39 * t4 * t34 + 0.29557465840184595700e-2 / t107 / t109 / t76 / t17 * r->rs - 0.29908759384862144201e-1 * t75 * t77);
  r->d3edz3 = 0;
  r->d3edrs2z = 0;
  r->d3edrsz2 = 0;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t17;
  double t18, t19, t20, t23, t26, t27, t28, t29;
  double t30, t31, t32, t33, t34, t36, t37, t38;
  double t39, t40, t41, t42, t46, t47, t48, t49;
  double t50, t51, t52, t53, t54, t55, t56, t59;
  double t61, t62, t63, t66, t67, t68, t69, t70;
  double t71, t72, t73, t76, t77, t78, t81, t86;
  double t89, t92, t95, t98, t101, t102, t103, t106;
  double t107, t110, t111, t112, t115, t116, t119, t120;
  double t121, t124, t127, t128, t129, t130, t131, t133;
  double t134, t135, t137, t138, t139, t140, t142, t143;
  double t144, t146, t147, t148, t152, t155, t156, t159;
  double t160, t163, t164, t171, t172, t173, t174, t175;
  double t176, t179, t180, t183, t184, t185, t188, t189;
  double t190, t193, t197, t198, t204, t205, t206, t207;
  double t208, t209, t210, t214, t215, t218, t219, t220;
  double t221, t222, t223, t224, t225, t226, t227, t228;
  double t229, t232, t235, t239, t246, t247, t248, t249;
  double t250, t251, t253, t254, t256, t257, t259, t260;
  double t262, t263, t264, t265, t268, t269, t270, t273;
  double t274, t275, t276, t278, t279, t280, t283, t284;
  double t285, t286, t287, t288, t291, t294, t297, t298;
  double t302, t305, t306, t307, t312, t313, t314, t317;
  double t318, t321, t326, t327, t330, t331, t334, t335;
  double t336, t339, t340, t342, t344, t346, t348, t349;
  double t350, t352, t353, t354, t356, t357, t358, t362;
  double t363, t364, t367, t368, t371, t372, t373, t376;
  double t377, t380, t387, t395, t398, t399, t402, t403;
  double t404, t405, t408, t409, t412, t415, t419, t420;
  double t421, t427, t431, t445, t446, t447, t460, t461;
  double t462, t463, t466, t468, t471, t478, t479, t480;
  double t481, t482, t485, t488, t489, t492, t493, t496;
  double t497, t498, t501, t502, t507, t510, t511, t512;
  double t515, t516, t517, t520, t521, t522, t525, t526;
  double t527, t528, t531, t534, t537, t540, t549, t554;
  double t557, t560, t561, t565, t573, t574, t577, t578;
  double t592, t596, t599, t623, t626, t634, t640, t667;
  double t704, t709, t727, t729, t750, t751, t754, t764;
  double t766, t769, t771, t773, t775, t777, t781, t783;
  double t786, t790, t794, t796, t798, t802, t804, t806;
  double t809, t811, t813, t815, t817, t819, t821, t822;
  double t824, t825, t827, t828, t830, t831, t833, t834;
  double t837, t838, t840, t858, t870, t879, t880, t891;
  double t892, t899, t910, t918, t922, t939, t951, t968;
  double t985, t1030, t1074, t1092, t1094, t1105, t1110, t1138;
  double t1144, t1148, t1149, t1154, t1190, t1204, t1217, t1220;
  double t1223, t1226, t1229, t1254, t1315, t1365, t1376, t1384;
  double t1413, t1418, t1435;

  lda_c_ml1_params *params;

  assert(p->params != NULL);
  params = (lda_c_ml1_params * )(p->params);

  t1 = r->rs * r->rs;
  t3 = 0.1e1 / t1 / r->rs;
  t4 = r->zeta * r->zeta;
  t5 = 0.10e1 - t4;
  t6 = t3 * t5;
  t7 = 0.10e1 + r->zeta;
  t8 = pow(t7, params->q);
  t9 = 0.10e1 - r->zeta;
  t10 = pow(t9, params->q);
  t11 = t8 + t10;
  t12 = params->fc * t11;
  t13 = pow(t7, 0.33333333333333333333e0);
  t14 = t12 * t13;
  t15 = pow(t9, 0.33333333333333333333e0);
  t16 = t13 + t15;
  t17 = 0.1e1 / t16;
  t18 = t15 * t17;
  t19 = 0.1e1 / r->rs;
  t20 = t18 * t19;
  t23 = 0.10e1 + 0.67458984800949555333e1 * t14 * t20;
  t26 = 0.1e1 / params->fc;
  t27 = 0.1e1 / t11;
  t28 = t26 * t27;
  t29 = pow(t7, -0.33333333333333333333e0);
  t30 = t28 * t29;
  t31 = pow(t9, -0.33333333333333333333e0);
  t32 = t31 * t16;
  t33 = t32 * r->rs;
  t34 = t30 * t33;
  t36 = 0.10e1 + 0.14823817394016341099e0 * t34;
  t37 = log(t36);
  t38 = t37 * t26;
  t39 = t38 * t27;
  t40 = t29 * t31;
  t41 = t16 * r->rs;
  t42 = t40 * t41;
  t46 = params->fc * params->fc;
  t47 = 0.1e1 / t46;
  t48 = t11 * t11;
  t49 = 0.1e1 / t48;
  t50 = t47 * t49;
  t51 = pow(t7, -0.66666666666666666666e0);
  t52 = t50 * t51;
  t53 = pow(t9, -0.66666666666666666666e0);
  t54 = t16 * t16;
  t55 = t53 * t54;
  t56 = t55 * t1;
  t59 = -0.2763169e1 / t23 + 0.45368772706640551755e0 * t39 * t42 + 0.40960720149928872481e0 * t34 - 0.12797332303741745073e0 * t52 * t56;
  r->e = 0.29841551829730375458e-1 * t6 * t59;

  if(r->order < 1) return;

  t61 = t1 * t1;
  t62 = 0.1e1 / t61;
  t63 = t62 * t5;
  t66 = t23 * t23;
  t67 = 0.1e1 / t66;
  t68 = t67 * params->fc;
  t69 = t68 * t11;
  t70 = t13 * t15;
  t71 = 0.1e1 / t1;
  t72 = t17 * t71;
  t73 = t70 * t72;
  t76 = 0.1e1 / t36;
  t77 = t76 * r->rs;
  t78 = t55 * t77;
  t81 = t40 * t16;
  t86 = t55 * r->rs;
  t89 = -0.18640057557345498186e2 * t69 * t73 + 0.67253840199387204602e-1 * t52 * t78 + 0.45368772706640551755e0 * t39 * t81 + 0.40960720149928872481e0 * t28 * t81 - 0.25594664607483490146e0 * t52 * t86;
  r->dedrs = -0.89524655489191126374e-1 * t63 * t59 + 0.29841551829730375458e-1 * t6 * t89;
  t92 = t3 * r->zeta;
  t95 = t8 * params->q;
  t98 = t10 * params->q;
  t101 = t95 / t7 - t98 / t9;
  t102 = params->fc * t101;
  t103 = t102 * t13;
  t106 = pow(t7, -0.66666666666666666667e0);
  t107 = t12 * t106;
  t110 = pow(t9, -0.66666666666666666667e0);
  t111 = t110 * t17;
  t112 = t111 * t19;
  t115 = 0.1e1 / t54;
  t116 = t15 * t115;
  t119 = 0.33333333333333333333e0 * t106 - 0.33333333333333333333e0 * t110;
  t120 = t19 * t119;
  t121 = t116 * t120;
  t124 = 0.67458984800949555333e1 * t103 * t20 + 0.22486328266983185111e1 * t107 * t20 - 0.22486328266983185111e1 * t14 * t112 - 0.67458984800949555333e1 * t14 * t121;
  t127 = t26 * t49;
  t128 = t127 * t29;
  t129 = r->rs * t101;
  t130 = t32 * t129;
  t131 = t128 * t130;
  t133 = pow(t7, -0.13333333333333333333e1);
  t134 = t28 * t133;
  t135 = t134 * t33;
  t137 = pow(t9, -0.13333333333333333333e1);
  t138 = t137 * t16;
  t139 = t138 * r->rs;
  t140 = t30 * t139;
  t142 = t31 * t119;
  t143 = t142 * r->rs;
  t144 = t30 * t143;
  t146 = -0.14823817394016341099e0 * t131 - 0.49412724646721136996e-1 * t135 + 0.49412724646721136996e-1 * t140 + 0.14823817394016341099e0 * t144;
  t147 = t146 * t76;
  t148 = t147 * t28;
  t152 = t38 * t49 * t29;
  t155 = t133 * t31;
  t156 = t155 * t41;
  t159 = t29 * t137;
  t160 = t159 * t41;
  t163 = t119 * r->rs;
  t164 = t40 * t163;
  t171 = t48 * t11;
  t172 = 0.1e1 / t171;
  t173 = t47 * t172;
  t174 = t173 * t51;
  t175 = t1 * t101;
  t176 = t55 * t175;
  t179 = pow(t7, -0.16666666666666666667e1);
  t180 = t50 * t179;
  t183 = pow(t9, -0.16666666666666666667e1);
  t184 = t183 * t54;
  t185 = t184 * t1;
  t188 = t53 * t16;
  t189 = t1 * t119;
  t190 = t188 * t189;
  t193 = 0.2763169e1 * t67 * t124 + 0.45368772706640551755e0 * t148 * t42 - 0.45368772706640551755e0 * t152 * t130 - 0.15122924235546850585e0 * t39 * t156 + 0.15122924235546850585e0 * t39 * t160 + 0.45368772706640551755e0 * t39 * t164 - 0.40960720149928872481e0 * t131 - 0.13653573383309624160e0 * t135 + 0.13653573383309624160e0 * t140 + 0.40960720149928872481e0 * t144 + 0.25594664607483490146e0 * t174 * t176 + 0.85315548691611633819e-1 * t180 * t56 - 0.85315548691611633819e-1 * t52 * t185 - 0.25594664607483490146e0 * t52 * t190;
  r->dedz = -0.59683103659460750916e-1 * t92 * t59 + 0.29841551829730375458e-1 * t6 * t193;

  if(r->order < 2) return;

  t197 = 0.1e1 / t61 / r->rs;
  t198 = t197 * t5;
  t204 = 0.1e1 / t66 / t23;
  t205 = t204 * t46;
  t206 = t205 * t48;
  t207 = pow(t7, 0.66666666666666666666e0);
  t208 = pow(t9, 0.66666666666666666666e0);
  t209 = t207 * t208;
  t210 = t115 * t62;
  t214 = t17 * t3;
  t215 = t70 * t214;
  t218 = t46 * params->fc;
  t219 = 0.1e1 / t218;
  t220 = t219 * t172;
  t221 = pow(t7, -0.99999999999999999999e0);
  t222 = t220 * t221;
  t223 = pow(t9, -0.99999999999999999999e0);
  t224 = t54 * t16;
  t225 = t223 * t224;
  t226 = t36 * t36;
  t227 = 0.1e1 / t226;
  t228 = t227 * r->rs;
  t229 = t225 * t228;
  t232 = t55 * t76;
  t235 = t51 * t53;
  t239 = -0.25148787188995897132e3 * t206 * t209 * t210 + 0.37280115114690996372e2 * t69 * t215 - 0.99695864616207147338e-2 * t222 * t229 + 0.13450768039877440920e0 * t52 * t232 - 0.25594664607483490146e0 * t50 * t235 * t54;
  r->d2edrs2 = 0.35809862195676450550e0 * t198 * t59 - 0.17904931097838225275e0 * t63 * t89 + 0.29841551829730375458e-1 * t6 * t239;
  t246 = t26 * t172;
  t247 = t246 * t29;
  t248 = t101 * t101;
  t249 = r->rs * t248;
  t250 = t32 * t249;
  t251 = t247 * t250;
  t253 = t127 * t133;
  t254 = t253 * t130;
  t256 = t138 * t129;
  t257 = t128 * t256;
  t259 = t142 * t129;
  t260 = t128 * t259;
  t262 = params->q * params->q;
  t263 = t8 * t262;
  t264 = t7 * t7;
  t265 = 0.1e1 / t264;
  t268 = t10 * t262;
  t269 = t9 * t9;
  t270 = 0.1e1 / t269;
  t273 = t263 * t265 - t95 * t265 + t268 * t270 - t98 * t270;
  t274 = r->rs * t273;
  t275 = t32 * t274;
  t276 = t128 * t275;
  t278 = pow(t7, -0.23333333333333333333e1);
  t279 = t278 * t31;
  t280 = t279 * t41;
  t283 = t48 * t48;
  t284 = 0.1e1 / t283;
  t285 = t47 * t284;
  t286 = t285 * t51;
  t287 = t1 * t248;
  t288 = t55 * t287;
  t291 = t173 * t179;
  t294 = t155 * t163;
  t297 = t133 * t137;
  t298 = t297 * t41;
  t302 = t159 * t163;
  t305 = pow(t9, -0.23333333333333333333e1);
  t306 = t29 * t305;
  t307 = t306 * t41;
  t312 = -0.22222222222222222222e0 * t179 - 0.22222222222222222222e0 * t183;
  t313 = t312 * r->rs;
  t314 = t40 * t313;
  t317 = t1 * t273;
  t318 = t55 * t317;
  t321 = t184 * t175;
  t326 = t183 * t16;
  t327 = t326 * t189;
  t330 = t1 * t312;
  t331 = t188 * t330;
  t334 = t147 * t127;
  t335 = t41 * t101;
  t336 = t40 * t335;
  t339 = t28 * t278;
  t340 = t339 * t33;
  t342 = t134 * t139;
  t344 = 0.30245848471093701170e0 * t39 * t302 + 0.20163898980729134113e0 * t39 * t307 + 0.45368772706640551755e0 * t39 * t314 + 0.25594664607483490146e0 * t174 * t318 + 0.34126219476644653528e0 * t174 * t321 + 0.34126219476644653528e0 * t180 * t190 - 0.34126219476644653528e0 * t52 * t327 - 0.25594664607483490146e0 * t52 * t331 - 0.90737545413281103510e0 * t334 * t336 + 0.18204764511079498880e0 * t340 - 0.91023822555397494400e-1 * t342;
  t346 = t134 * t143;
  t348 = t305 * t16;
  t349 = t348 * r->rs;
  t350 = t30 * t349;
  t352 = t137 * t119;
  t353 = t352 * r->rs;
  t354 = t30 * t353;
  t356 = t31 * t312;
  t357 = t356 * r->rs;
  t358 = t30 * t357;
  t362 = pow(t9, -0.26666666666666666667e1);
  t363 = t362 * t54;
  t364 = t363 * t1;
  t367 = pow(t7, -0.26666666666666666667e1);
  t368 = t50 * t367;
  t371 = t119 * t119;
  t372 = t53 * t371;
  t373 = t372 * t1;
  t376 = params->fc * t273;
  t377 = t376 * t13;
  t380 = t102 * t106;
  t387 = t12 * t179;
  t395 = t183 * t17 * t19;
  t398 = t110 * t115;
  t399 = t398 * t120;
  t402 = 0.1e1 / t224;
  t403 = t15 * t402;
  t404 = t19 * t371;
  t405 = t403 * t404;
  t408 = t19 * t312;
  t409 = t116 * t408;
  t412 = 0.67458984800949555333e1 * t377 * t20 + 0.44972656533966370222e1 * t380 * t20 - 0.44972656533966370222e1 * t103 * t112 - 0.13491796960189911067e2 * t103 * t121 - 0.14990885511322123407e1 * t387 * t20 - 0.14990885511322123407e1 * t107 * t112 - 0.44972656533966370222e1 * t107 * t121 - 0.14990885511322123407e1 * t14 * t395 + 0.44972656533966370222e1 * t14 * t399 + 0.13491796960189911067e2 * t14 * t405 - 0.67458984800949555333e1 * t14 * t409;
  t415 = t124 * t124;
  t419 = t146 * t146;
  t420 = t419 * t227;
  t421 = t420 * t28;
  t427 = t38 * t172 * t29;
  t431 = t38 * t49 * t133;
  t445 = 0.29647634788032682198e0 * t251 + 0.98825449293442273992e-1 * t254 - 0.98825449293442273992e-1 * t257 - 0.29647634788032682198e0 * t260 - 0.14823817394016341099e0 * t276 + 0.65883632862294849326e-1 * t340 - 0.32941816431147424664e-1 * t342 - 0.98825449293442273992e-1 * t346 + 0.65883632862294849326e-1 * t350 + 0.98825449293442273992e-1 * t354 + 0.14823817394016341099e0 * t358;
  t446 = t445 * t76;
  t447 = t446 * t28;
  t460 = t173 * t235;
  t461 = t16 * t1;
  t462 = t101 * t119;
  t463 = t461 * t462;
  t466 = -0.45368772706640551755e0 * t421 * t42 - 0.30245848471093701170e0 * t148 * t156 + 0.90737545413281103510e0 * t427 * t250 + 0.30245848471093701170e0 * t431 * t130 + 0.45368772706640551755e0 * t447 * t42 + 0.90737545413281103510e0 * t148 * t164 + 0.30245848471093701170e0 * t148 * t160 - 0.90737545413281103510e0 * t152 * t259 - 0.45368772706640551755e0 * t152 * t275 - 0.30245848471093701170e0 * t152 * t256 + 0.10237865842993396058e1 * t460 * t463;
  t468 = 0.81921440299857744962e0 * t251 + 0.27307146766619248320e0 * t254 - 0.27307146766619248320e0 * t257 - 0.81921440299857744962e0 * t260 - 0.40960720149928872481e0 * t276 + 0.20163898980729134113e0 * t39 * t280 - 0.76783993822450470438e0 * t286 * t288 - 0.34126219476644653528e0 * t291 * t176 - 0.30245848471093701170e0 * t39 * t294 - 0.10081949490364567057e0 * t39 * t298 + t344 - 0.27307146766619248320e0 * t346 + 0.18204764511079498880e0 * t350 + 0.27307146766619248320e0 * t354 + 0.40960720149928872481e0 * t358 + 0.11375406492214884509e0 * t180 * t185 - 0.14219258115268605637e0 * t52 * t364 - 0.14219258115268605637e0 * t368 * t56 - 0.25594664607483490146e0 * t52 * t373 + 0.2763169e1 * t67 * t412 - 0.5526338e1 * t204 * t415 + t466;
  r->d2edz2 = -0.59683103659460750916e-1 * t3 * t59 - 0.11936620731892150183e0 * t92 * t193 + 0.29841551829730375458e-1 * t6 * t468;
  t471 = t62 * r->zeta;
  t478 = t204 * params->fc;
  t479 = t11 * t13;
  t480 = t478 * t479;
  t481 = t71 * t124;
  t482 = t18 * t481;
  t485 = t68 * t101;
  t488 = t106 * t15;
  t489 = t488 * t72;
  t492 = t13 * t110;
  t493 = t492 * t72;
  t496 = t68 * t479;
  t497 = t71 * t119;
  t498 = t116 * t497;
  t501 = t54 * t76;
  t502 = t501 * t129;
  t507 = t184 * t77;
  t510 = t50 * t235;
  t511 = t16 * t76;
  t512 = t511 * t163;
  t515 = t54 * t227;
  t516 = r->rs * t146;
  t517 = t515 * t516;
  t520 = t147 * t26;
  t521 = t27 * t29;
  t522 = t521 * t32;
  t525 = 0.37280115114690996372e2 * t480 * t482 - 0.18640057557345498186e2 * t485 * t73 - 0.62133525191151660619e1 * t69 * t489 + 0.62133525191151660619e1 * t69 * t493 + 0.18640057557345498186e2 * t496 * t498 - 0.13450768039877440920e0 * t460 * t502 - 0.44835893466258136401e-1 * t180 * t78 + 0.44835893466258136401e-1 * t52 * t507 + 0.13450768039877440920e0 * t510 * t512 - 0.67253840199387204602e-1 * t510 * t517 + 0.45368772706640551755e0 * t520 * t522;
  t526 = t38 * t49;
  t527 = t16 * t101;
  t528 = t40 * t527;
  t531 = t155 * t16;
  t534 = t159 * t16;
  t537 = t40 * t119;
  t540 = t32 * t101;
  t549 = t55 * t129;
  t554 = t184 * r->rs;
  t557 = t188 * t163;
  t560 = -0.45368772706640551755e0 * t526 * t528 - 0.15122924235546850585e0 * t39 * t531 + 0.15122924235546850585e0 * t39 * t534 + 0.45368772706640551755e0 * t39 * t537 - 0.40960720149928872481e0 * t128 * t540 - 0.13653573383309624160e0 * t28 * t531 + 0.13653573383309624160e0 * t28 * t534 + 0.40960720149928872481e0 * t28 * t537 + 0.51189329214966980292e0 * t174 * t549 + 0.17063109738322326764e0 * t180 * t86 - 0.17063109738322326764e0 * t52 * t554 - 0.51189329214966980292e0 * t52 * t557;
  t561 = t525 + t560;
  r->d2edrsz = 0.17904931097838225275e0 * t471 * t59 - 0.89524655489191126374e-1 * t63 * t193 - 0.59683103659460750916e-1 * t92 * t89 + 0.29841551829730375458e-1 * t6 * t561;

  if(r->order < 3) return;

  t565 = 0.1e1 / t61 / t1;
  t573 = t66 * t66;
  t574 = 0.1e1 / t573;
  t577 = pow(t7, 0.99999999999999999999e0);
  t578 = pow(t9, 0.99999999999999999999e0);
  t592 = t46 * t46;
  t596 = t54 * t54;
  t599 = 0.1e1 / t226 / t36;
  r->d3edrs3 = -0.17904931097838225275e1 * t565 * t5 * t59 + 0.10742958658702935165e1 * t198 * t89 - 0.26857396646757337912e0 * t63 * t239 + 0.29841551829730375458e-1 * t6 * (-0.50895349582343673507e4 * t574 * t218 * t171 * t577 * t578 * t402 * t565 + 0.15089272313397538279e4 * t206 * t209 * t115 * t197 - 0.11184034534407298912e3 * t69 * t70 * t17 * t62 + 0.29557465840184595700e-2 / t592 * t284 * t133 * t137 * t596 * t599 * r->rs - 0.29908759384862144201e-1 * t222 * t225 * t227);
  t623 = t262 * params->q;
  t626 = 0.1e1 / t264 / t7;
  t634 = 0.1e1 / t269 / t9;
  t640 = -t10 * t623 * t634 + t8 * t623 * t626 - 0.3e1 * t263 * t626 + 0.3e1 * t268 * t634 + 0.2e1 * t95 * t626 - 0.2e1 * t98 * t634;
  t667 = 0.67458984800949555333e1 * t376 * t106 * t20 - 0.44972656533966370222e1 * t102 * t179 * t20 + 0.24984809185536872345e1 * t12 * t367 * t20 + 0.67458984800949555333e1 * params->fc * t640 * t13 * t20 - 0.67458984800949555333e1 * t377 * t112 - 0.44972656533966370221e1 * t380 * t112 - 0.44972656533966370222e1 * t103 * t395 + 0.14990885511322123407e1 * t387 * t112 - 0.14990885511322123407e1 * t107 * t395 - 0.24984809185536872345e1 * t14 * t362 * t17 * t19 + 0.40475390880569733201e2 * t12 * t70 * t402 * t19 * t119 * t312 + 0.40475390880569733201e2 * t103 * t405;
  t704 = 0.37037037037037037037e0 * t367 - 0.37037037037037037037e0 * t362;
  t709 = 0.13491796960189911067e2 * t107 * t405 - 0.13491796960189911067e2 * t14 * t110 * t402 * t404 - 0.40475390880569733201e2 * t14 * t15 / t596 * t19 * t371 * t119 - 0.20237695440284866600e2 * t377 * t121 - 0.13491796960189911067e2 * t380 * t121 + 0.13491796960189911067e2 * t103 * t399 - 0.20237695440284866600e2 * t103 * t409 + 0.44972656533966370222e1 * t387 * t121 + 0.44972656533966370221e1 * t107 * t399 - 0.67458984800949555333e1 * t107 * t409 + 0.44972656533966370222e1 * t14 * t183 * t115 * t120 + 0.67458984800949555333e1 * t14 * t398 * t408 - 0.67458984800949555333e1 * t14 * t116 * t19 * t704;
  t727 = t248 * t101;
  t729 = t32 * r->rs * t727;
  t750 = 0.2763169e1 * t67 * (t667 + t709) + 0.16579014e2 * t574 * t415 * t124 + 0.90737545413281103510e0 * t419 * t146 * t599 * t28 * t42 + 0.45368772706640551755e0 * t421 * t156 + 0.60491696942187402339e0 * t148 * t280 - 0.27221263623984331053e1 * t38 * t284 * t29 * t729 - 0.90737545413281103510e0 * t38 * t172 * t133 * t250 - 0.60491696942187402339e0 * t38 * t49 * t278 * t130 - 0.13610631811992165526e1 * t421 * t164 - 0.45368772706640551755e0 * t421 * t160 - 0.45368772706640551755e0 * t447 * t156 - 0.90737545413281103510e0 * t148 * t294 - 0.30245848471093701171e0 * t148 * t298;
  t751 = t142 * t249;
  t754 = t138 * t249;
  t764 = t101 * t273;
  t766 = t246 * t40 * t41 * t764;
  t769 = t339 * t143;
  t771 = t339 * t139;
  t773 = t134 * t353;
  t775 = t134 * t349;
  t777 = t134 * t357;
  t781 = t30 * t305 * t119 * r->rs;
  t783 = pow(t9, -0.33333333333333333333e1);
  t786 = t30 * t783 * t16 * r->rs;
  t790 = t30 * t137 * t312 * r->rs;
  t794 = t30 * t31 * t704 * r->rs;
  t796 = pow(t7, -0.33333333333333333333e1);
  t798 = t28 * t796 * t33;
  t802 = t26 * t284 * t29 * t729;
  t804 = 0.88942904364098046594e0 * t766 + 0.19765089858688454798e0 * t769 + 0.65883632862294849326e-1 * t771 - 0.98825449293442273992e-1 * t773 - 0.65883632862294849326e-1 * t775 - 0.14823817394016341099e0 * t777 + 0.19765089858688454798e0 * t781 + 0.15372847667868798176e0 * t786 + 0.14823817394016341099e0 * t790 + 0.14823817394016341099e0 * t794 - 0.15372847667868798176e0 * t798 - 0.88942904364098046594e0 * t802;
  t806 = t246 * t133 * t250;
  t809 = t127 * t278 * t130;
  t811 = t247 * t751;
  t813 = t247 * t754;
  t815 = t253 * t259;
  t817 = t253 * t275;
  t819 = t253 * t256;
  t821 = t352 * t129;
  t822 = t128 * t821;
  t824 = t138 * t274;
  t825 = t128 * t824;
  t827 = t348 * t129;
  t828 = t128 * t827;
  t830 = t356 * t129;
  t831 = t128 * t830;
  t833 = t142 * t274;
  t834 = t128 * t833;
  t837 = t32 * r->rs * t640;
  t838 = t128 * t837;
  t840 = -0.29647634788032682197e0 * t806 - 0.19765089858688454798e0 * t809 + 0.88942904364098046594e0 * t811 + 0.29647634788032682197e0 * t813 + 0.29647634788032682197e0 * t815 + 0.14823817394016341099e0 * t817 + 0.98825449293442273992e-1 * t819 - 0.29647634788032682197e0 * t822 - 0.14823817394016341099e0 * t825 - 0.19765089858688454798e0 * t828 - 0.44471452182049023297e0 * t831 - 0.44471452182049023297e0 * t834 - 0.14823817394016341099e0 * t838;
  t858 = 0.27221263623984331053e1 * t427 * t751 + 0.90737545413281103510e0 * t427 * t754 + 0.90737545413281103510e0 * t431 * t259 + 0.45368772706640551755e0 * t431 * t275 + 0.30245848471093701171e0 * t431 * t256 + 0.24576432089957323488e1 * t766 + 0.45368772706640551755e0 * (t804 + t840) * t76 * t28 * t42 + 0.13610631811992165526e1 * t447 * t164 + 0.45368772706640551755e0 * t447 * t160 + 0.13610631811992165526e1 * t148 * t314 + 0.90737545413281103510e0 * t148 * t302 + 0.60491696942187402339e0 * t148 * t307 - 0.13610631811992165526e1 * t152 * t830;
  t870 = t285 * t235;
  t879 = t179 * t53;
  t880 = t173 * t879;
  t891 = t51 * t183;
  t892 = t173 * t891;
  t899 = -0.13610631811992165526e1 * t152 * t833 - 0.90737545413281103510e0 * t152 * t821 - 0.45368772706640551755e0 * t152 * t837 - 0.45368772706640551755e0 * t152 * t824 - 0.60491696942187402339e0 * t152 * t827 - 0.46070396293470282262e1 * t870 * t461 * t248 * t119 - 0.23035198146735141132e1 * t870 * t54 * t1 * t764 - 0.20475731685986792117e1 * t880 * t463 + 0.15356798764490094087e1 * t460 * t461 * t273 * t119 + 0.15356798764490094087e1 * t460 * t461 * t101 * t312 + 0.20475731685986792117e1 * t892 * t463 - 0.16579014e2 * t204 * t412 * t124 + 0.54614293533238496639e0 * t769;
  t910 = pow(t9, -0.36666666666666666667e1);
  t918 = pow(t7, -0.36666666666666666667e1);
  t922 = 0.18204764511079498880e0 * t771 - 0.27307146766619248320e0 * t773 - 0.18204764511079498880e0 * t775 - 0.40960720149928872480e0 * t777 + 0.54614293533238496639e0 * t781 + 0.42477783859185497386e0 * t786 + 0.40960720149928872480e0 * t790 + 0.40960720149928872481e0 * t794 + 0.28438516230537211274e0 * t180 * t364 - 0.37918021640716281699e0 * t52 * t910 * t54 * t1 - 0.42477783859185497386e0 * t798 - 0.28438516230537211274e0 * t368 * t185 + 0.37918021640716281699e0 * t50 * t918 * t56;
  t939 = t146 * t227;
  t951 = t163 * t101;
  t968 = 0.51189329214966980292e0 * t180 * t373 - 0.51189329214966980292e0 * t52 * t183 * t371 * t1 + 0.27221263623984331053e1 * t147 * t246 * t40 * t41 * t248 + 0.90737545413281103510e0 * t334 * t155 * t335 - 0.13610631811992165526e1 * t939 * t28 * t40 * t41 * t445 + 0.13610631811992165526e1 * t420 * t127 * t336 - 0.13610631811992165526e1 * t446 * t127 * t336 - 0.27221263623984331053e1 * t334 * t40 * t951 - 0.13610631811992165526e1 * t334 * t40 * t41 * t273 - 0.90737545413281103510e0 * t334 * t159 * t335 + 0.27221263623984331053e1 * t427 * t32 * t129 * t273 - 0.24576432089957323489e1 * t802 - 0.81921440299857744960e0 * t806;
  t985 = -0.54614293533238496639e0 * t809 + 0.24576432089957323488e1 * t811 + 0.81921440299857744960e0 * t813 + 0.81921440299857744960e0 * t815 + 0.40960720149928872480e0 * t817 + 0.27307146766619248320e0 * t819 - 0.81921440299857744960e0 * t822 - 0.40960720149928872480e0 * t825 - 0.54614293533238496639e0 * t828 - 0.12288216044978661744e1 * t831 - 0.12288216044978661744e1 * t834 - 0.40960720149928872481e0 * t838 - 0.47049097621701312930e0 * t39 * t796 * t31 * t41;
  t1030 = 0.30713597528980188175e1 * t47 / t283 / t11 * t51 * t55 * t1 * t727 + 0.15356798764490094087e1 * t285 * t179 * t288 + 0.85315548691611633822e0 * t173 * t367 * t176 + 0.15356798764490094087e1 * t174 * t372 * t175 + 0.60491696942187402339e0 * t39 * t279 * t163 + 0.20163898980729134113e0 * t39 * t278 * t137 * t41 - 0.15356798764490094087e1 * t286 * t184 * t287 - 0.51189329214966980292e0 * t291 * t318 - 0.68252438953289307054e0 * t291 * t321 + 0.68252438953289307054e0 * t180 * t327 + 0.85315548691611633822e0 * t174 * t363 * t175 - 0.85315548691611633822e0 * t52 * t362 * t16 * t189 - 0.45368772706640551755e0 * t39 * t155 * t313;
  t1074 = -0.30245848471093701171e0 * t39 * t297 * t163 - 0.20163898980729134113e0 * t39 * t133 * t305 * t41 + 0.45368772706640551755e0 * t39 * t159 * t313 + 0.60491696942187402339e0 * t39 * t306 * t163 + 0.47049097621701312930e0 * t39 * t29 * t783 * t41 + 0.45368772706640551755e0 * t39 * t40 * t704 * r->rs + 0.25594664607483490146e0 * t174 * t55 * t1 * t640 + 0.51189329214966980292e0 * t174 * t184 * t317 - 0.85315548691611633822e0 * t368 * t190 + 0.51189329214966980292e0 * t180 * t331 - 0.51189329214966980292e0 * t52 * t326 * t330 - 0.76783993822450470438e0 * t52 * t53 * t119 * t330 - 0.25594664607483490146e0 * t52 * t188 * t1 * t704;
  r->d3edz3 = -0.17904931097838225275e0 * t3 * t193 - 0.17904931097838225275e0 * t92 * t468 + 0.29841551829730375458e-1 * t6 * (t750 + t858 + t899 + t922 + t968 + t985 + t1030 + t1074);
  t1092 = t48 * t207;
  t1094 = t208 * t115;
  t1105 = pow(t7, -0.33333333333333333334e0);
  t1110 = pow(t9, -0.33333333333333333334e0);
  t1138 = t221 * t223;
  t1144 = pow(t7, -0.20000000000000000000e1);
  t1148 = 0.75446361566987691396e3 * t574 * t46 * t1092 * t1094 * t62 * t124 - 0.50297574377991794264e3 * t205 * t11 * t207 * t1094 * t62 * t101 - 0.16765858125997264754e3 * t206 * t1105 * t208 * t210 + 0.16765858125997264754e3 * t206 * t207 * t1110 * t210 + 0.50297574377991794264e3 * t205 * t1092 * t208 * t402 * t62 * t119 - 0.74560230229381992744e2 * t480 * t18 * t3 * t124 + 0.37280115114690996372e2 * t485 * t215 + 0.12426705038230332124e2 * t69 * t488 * t214 - 0.12426705038230332124e2 * t69 * t492 * t214 - 0.37280115114690996372e2 * t496 * t116 * t3 * t119 + 0.29908759384862144201e-1 * t219 * t284 * t1138 * t224 * t227 * t129 + 0.99695864616207147337e-2 * t220 * t1144 * t229;
  t1149 = pow(t9, -0.20000000000000000000e1);
  t1154 = t220 * t1138;
  t1190 = -0.99695864616207147337e-2 * t222 * t1149 * t224 * t228 - 0.29908759384862144201e-1 * t1154 * t515 * t163 + 0.19939172923241429468e-1 * t1154 * t224 * t599 * t516 - 0.26901536079754881840e0 * t174 * t55 * t76 * t101 - 0.89671786932516272799e-1 * t180 * t232 + 0.89671786932516272799e-1 * t52 * t184 * t76 + 0.26901536079754881840e0 * t52 * t188 * t76 * t119 - 0.13450768039877440920e0 * t52 * t55 * t939 + 0.51189329214966980292e0 * t174 * t55 * t101 + 0.17063109738322326764e0 * t50 * t879 * t54 - 0.17063109738322326764e0 * t50 * t891 * t54 - 0.51189329214966980292e0 * t52 * t188 * t119;
  r->d3edrs2z = -0.71619724391352901100e0 * t197 * r->zeta * t59 + 0.35809862195676450550e0 * t198 * t193 + 0.35809862195676450550e0 * t471 * t89 - 0.17904931097838225275e0 * t63 * t561 - 0.59683103659460750916e-1 * t92 * t239 + 0.29841551829730375458e-1 * t6 * (t1148 + t1190);
  t1204 = t279 * t16;
  t1217 = t155 * t119;
  t1220 = t297 * t16;
  t1223 = t159 * t119;
  t1226 = t306 * t16;
  t1229 = t40 * t312;
  t1254 = 0.20163898980729134113e0 * t39 * t1204 + 0.81921440299857744962e0 * t247 * t32 * t248 + 0.27307146766619248320e0 * t253 * t540 - 0.28438516230537211274e0 * t368 * t86 - 0.51189329214966980292e0 * t52 * t372 * r->rs - 0.30245848471093701170e0 * t39 * t1217 - 0.10081949490364567057e0 * t39 * t1220 + 0.30245848471093701170e0 * t39 * t1223 + 0.20163898980729134113e0 * t39 * t1226 + 0.45368772706640551755e0 * t39 * t1229 - 0.81921440299857744962e0 * t128 * t142 * t101 - 0.40960720149928872481e0 * t128 * t32 * t273 - 0.27307146766619248320e0 * t128 * t138 * t101 + 0.22750812984429769018e0 * t180 * t554 - 0.28438516230537211274e0 * t52 * t363 * r->rs + 0.68252438953289307056e0 * t174 * t184 * t129 + 0.68252438953289307056e0 * t180 * t557 - 0.68252438953289307056e0 * t52 * t326 * t163;
  t1315 = -0.51189329214966980292e0 * t52 * t188 * t313 + 0.74726489110430227336e-1 * t52 * t363 * t77 + 0.45368772706640551755e0 * t446 * t26 * t522 + 0.90737545413281103510e0 * t520 * t521 * t142 + 0.30245848471093701170e0 * t520 * t521 * t138 - 0.90737545413281103510e0 * t526 * t40 * t462 - 0.45368772706640551755e0 * t526 * t40 * t16 * t273 - 0.30245848471093701170e0 * t526 * t159 * t527 + 0.51189329214966980292e0 * t174 * t55 * t274 - 0.30245848471093701170e0 * t520 * t27 * t133 * t32 + 0.90737545413281103510e0 * t38 * t172 * t40 * t16 * t248 + 0.30245848471093701170e0 * t526 * t155 * t527 - 0.15356798764490094088e1 * t286 * t55 * t249 - 0.68252438953289307056e0 * t291 * t549 - 0.18640057557345498186e2 * t68 * t273 * t73 + 0.12426705038230332124e2 * t485 * t493 + 0.41422350127434440412e1 * t69 * t106 * t110 * t72 + 0.41422350127434440413e1 * t69 * t13 * t183 * t72 - 0.59781191288344181868e-1 * t180 * t507;
  t1365 = t11 * t106;
  t1376 = 0.13450768039877440920e0 * t52 * t372 * t77 - 0.45368772706640551755e0 * t420 * t26 * t522 - 0.12426705038230332124e2 * t485 * t489 + 0.41422350127434440413e1 * t69 * t179 * t15 * t72 + 0.74726489110430227336e-1 * t368 * t78 - 0.27307146766619248320e0 * t28 * t1217 - 0.91023822555397494400e-1 * t28 * t1220 + 0.27307146766619248320e0 * t28 * t1223 + 0.18204764511079498880e0 * t28 * t1226 + 0.40960720149928872481e0 * t28 * t1229 + 0.18204764511079498880e0 * t28 * t1204 - 0.74560230229381992744e2 * t480 * t116 * t481 * t119 - 0.53803072159509763680e0 * t460 * t511 * t951 + 0.26901536079754881840e0 * t460 * t515 * t129 * t146 - 0.26901536079754881840e0 * t510 * t16 * t227 * t163 * t146 - 0.11184034534407298912e3 * t574 * params->fc * t479 * t18 * t71 * t415 + 0.24853410076460664248e2 * t478 * t1365 * t482 - 0.37280115114690996372e2 * t496 * t403 * t71 * t371 + 0.40352304119632322760e0 * t870 * t501 * t249;
  t1384 = t101 * t13;
  t1413 = t50 * t879;
  t1418 = t50 * t891;
  t1435 = 0.17934357386503254560e0 * t880 * t502 + 0.13450768039877440920e0 * t510 * t54 * t599 * r->rs * t419 + 0.74560230229381992744e2 * t478 * t1384 * t482 + 0.37280115114690996372e2 * t480 * t18 * t71 * t412 - 0.24853410076460664248e2 * t480 * t111 * t481 + 0.37280115114690996372e2 * t68 * t1384 * t498 + 0.12426705038230332124e2 * t68 * t1365 * t498 - 0.12426705038230332124e2 * t496 * t398 * t497 + 0.18640057557345498186e2 * t496 * t116 * t71 * t312 - 0.13450768039877440920e0 * t460 * t501 * t274 - 0.17934357386503254560e0 * t892 * t502 - 0.17934357386503254560e0 * t1413 * t512 + 0.89671786932516272802e-1 * t1413 * t517 + 0.17934357386503254560e0 * t1418 * t512 - 0.89671786932516272802e-1 * t1418 * t517 + 0.13450768039877440920e0 * t510 * t511 * t313 - 0.67253840199387204602e-1 * t510 * t515 * r->rs * t445 - 0.90737545413281103510e0 * t334 * t528 + 0.20475731685986792116e1 * t460 * t41 * t462;
  r->d3edrsz2 = 0.17904931097838225275e0 * t62 * t59 + 0.35809862195676450550e0 * t471 * t193 - 0.89524655489191126374e-1 * t63 * t468 - 0.59683103659460750916e-1 * t3 * t89 - 0.11936620731892150183e0 * t92 * t561 + 0.29841551829730375458e-1 * t6 * (t1254 + t1315 + t1376 + t1435);

  if(r->order < 4) return;


}

void 
XC(lda_c_ml1_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_ml1_func)
