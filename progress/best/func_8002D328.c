s32 func_8002C8A4(s32 *);
extern s32 D_80076A68;
extern s32 D_80076AB0;
extern s32 D_80089E00;
extern s32 *D_8008A328;
extern s32 *D_8008A3B8;
void func_8002D328(void)
{
  s32 **var_a0;
  s32 *var_s1;
  s32 var_s0;
  s32 var_v1;
  s32 var_v1_2;
  var_s1 = &D_80089E00;
  var_s0 = 5;
  do
  {
    func_8002C8A4(var_s1);
    var_s0 -= 1;
    var_s1 += 55;
  }
  while (var_s0 != (-1));
  var_a0 = &D_8008A328;
  var_v1 = 5;
  do
  {
    do { *var_a0 = &D_80076AB0;
    var_v1 -= 1;
    var_a0 += 0x18; } while (0);
  }
  while (var_v1 != (-1));
  var_a0 = &D_8008A3B8;
  var_v1_2 = 5;
  do
  {
 do { *var_a0 = &D_80076A68; } while (0);
    var_v1_2 -= 1;
    var_a0 += 0x11C;
  }
  while (var_v1_2 != (-1));
}
