extern s32 D_8008E9E0[];
typedef struct 
{
  u8 pad_0[0x2DC];
  s32 f2DC;
  s32 f2E0;
  s32 f2E4;
  u8 pad_2E8[0x12];
  s16 f2FA;
} PtrRec_arg0;
inline static int inline_fn(int arg0)
{
  return arg0;
}

void func_80032AB0(void *arg0, s16 arg1)
{
  ((PtrRec_arg0 *) arg0)->f2FA = arg1;
  ((PtrRec_arg0 *) arg0)->f2E4 = (s32) (D_8008E9E0[0] - inline_fn((((s32) (arg1 * ((PtrRec_arg0 *) arg0)->f2E0)) / ((s32) ((PtrRec_arg0 *) arg0)->f2DC)) + 8));
}

