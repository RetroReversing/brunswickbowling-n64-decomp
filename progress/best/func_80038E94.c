extern f64 D_80078058;
f32 func_80038E94(s32 arg0)
{
  f32 var_fv1;
  s32 temp2;
  f32 temp;
  temp = (f32) (((f64) ((f32) (arg0 & 0xFFF))) * D_80078058);
  var_fv1 = (((f32) (((unsigned short) ((u32) (arg0 & 0x7000))) >> 0xC))) + (temp);
  temp2 = arg0 & 0x8000;
  if (temp2)
  {
    var_fv1 = -var_fv1;
  }
  return var_fv1;
}

