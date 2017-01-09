
void XC(gga_x_lag_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t2, t4, t5, t7, t11, t12, t16;
  double t18, t21, t25, t26, t30, t32, t35, t39;
  double t43, t44;


  if(order < 0) return;

  t1 = X2S * x;
  t2 = pow(t1, 0.2626712e1);
  t4 = 0.10e1 + 0.92070e-1 * t2;
  t5 = pow(t4, -0.657946e0);

  *f = 0.41106e-1 * t2 * t5;

  if(order < 0+1) return;

  t7 = pow(t1, 0.1626712e1);
  t11 = pow(t1, 0.4253424e1);
  t12 = pow(t4, -0.1657946e1);

  *dfdx = 0.107973623472e0 * t7 * t5 * X2S - 0.65407277144964066998e-2 * t11 * t12 * X2S;

  if(order < 1+1) return;

  t16 = pow(t1, 0.626712e0);
  t18 = X2S * X2S;
  t21 = pow(t1, 0.3253424e1);
  t25 = pow(t1, 0.5880136e1);
  t26 = pow(t4, -0.2657946e1);

  *d2fdx2 = 0.175641988985384064e0 * t16 * t5 * t18 - 0.45001096214704449606e-1 * t21 * t12 * t18 + 0.26225697814468100489e-2 * t25 * t26 * t18;

  if(order < 2+1) return;

  t30 = pow(t1, -0.373288e0);
  t32 = t18 * X2S;
  t35 = pow(t1, 0.2253424e1);
  t39 = pow(t1, 0.4880136e1);
  t43 = pow(t1, 0.7506848e1);
  t44 = pow(t4, -0.3657946e1);

  *d3fdx3 = 0.11007694220100801752e0 * t30 * t5 * t32 - 0.17435554761373467037e0 * t35 * t12 * t32 + 0.33464703750241849756e-1 * t39 * t26 * t32 - 0.16857912969353958325e-2 * t43 * t44 * t32;

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_x_lag_enhance)
