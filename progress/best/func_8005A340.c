s32 cordicSinCos(f64, f64 *, s32 *);
extern f64 D_8007A100;
extern f64 D_8007A108;
extern f64 D_8007A110;
extern f64 D_8007A118;
extern f64 D_8007A120;
extern f64 D_8007A128;
f64 func_8005A340(f64 arg0)
{
  f64 sp10;
  s32 sp18;
  f64 temp_fa0;
  f64 var_fv0;
  f64 var_fv0_2;
  f64 __repair_var_fv0_2_1;
  s32 temp_fv1;
  s32 var_v0;
  s32 var_v1;
  var_fv0_2 = D_8007A108;
  if (arg0 >= 0.0)
  {
    __repair_var_fv0_2_1 = D_8007A110;
  }
  temp_fv1 = (s32) (__repair_var_fv0_2_1 + (arg0 / D_8007A100));
  temp_fa0 = arg0 - (((f64) temp_fv1) * D_8007A118);
  var_v0 = 1;
  if (!(temp_fa0 < D_8007A120))
  {
    var_v0 = 0;
  }
  var_v1 = 1;
  if (!(D_8007A128 < temp_fa0))
  {
    var_v1 = 0;
  }
  var_fv0 = temp_fa0;
  if (!(var_v0 & var_v1))
  {
    cordicSinCos(temp_fa0, &sp10, &sp18);
    var_fv0 = sp10;
    if (temp_fv1 & 1)
    {
      var_fv0 = -var_fv0;
    }
  }
  return var_fv0;
}

