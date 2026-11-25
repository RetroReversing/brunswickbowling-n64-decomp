/* Partial candidate from function #137438953698 in project #32; rechecked locally. */
static inline int __repair_pointer_bits(void *value)
{
  return (int)value;
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

u8 func_800549E4(s32);                              /* extern */
s8 func_80054BDC(s32);                              /* extern */
s32 osPiStartDma(s32 *, s32, s32, s32, s32, u32, s32 *); /* extern */
s32 func_80067FC0(s32 *, s32, s32);    /* extern */
extern s32 D_8006DE20;
extern s32 D_80084B00;
extern s32 D_80084B20;

void func_80054CF0(s32 arg0, s8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 *var_s0;
    u32 var_s1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    var_s2 = arg0;
    var_s1 = arg2;
    var_s0 = arg1;
    var_s3 = 0;
    if (D_8006DE20 == 0) {
        var_s3 = -1;
    }
    var_v0 = var_s1 < 4U;
    if (var_s1 != 0) {
loop_3:
        temp_a0 = var_s2;
        if (var_s2 & 3) {
            var_s2 += 1;
            *var_s0 = func_80054BDC(temp_a0);
            var_s1 -= 1;
            var_s0 += 1;
            if (var_s1 != 0) {
                goto loop_3;
            }
        }
        var_v0 = var_s1 < 4U;
    }
    if (var_v0 == 0) {
        var_v0_2 = var_s1 < 0x10U;
        do {
            if ((var_v0_2 == 0) && !(__repair_pointer_bits(var_s0) & 0xF) && (var_s3 != -1)) {
                var_s3 = osPiStartDma(&D_80084B20, 1, 0, var_s2, __repair_pointer_bits(var_s0), var_s1, &D_80084B00);
                var_v0_3 = var_s1 < 4U;
                if (var_s3 != -1) {
                    func_80067FC0(&D_80084B00, 0, 1);
                    var_s1 = 0;
                    goto block_14;
                }
            } else {
                do { temp_v0 = func_800549E4(var_s2); } while (0);
                (*(s8 *)((char *)(var_s0) + 0)) = (s8) (temp_v0 >> 0x18);
                temp_s0 = var_s0 + 1;
                (*(s8 *)((char *)(var_s0) + 1)) = (s8) (temp_v0 >> 0x10);
                temp_s0_2 = temp_s0 + 1;
                (*(s8 *)((char *)(temp_s0) + 1)) = (s8) (temp_v0 >> 8);
                (*(u8 *)((char *)(temp_s0_2) + 1)) = temp_v0;
                var_s2 += 4;
                var_s0 = temp_s0_2 + 1 + 1;
                var_s1 -= 4;
block_14:
                var_v0_3 = var_s1 < 4U;
            }
            var_v0_2 = var_s1 < 0x10U;
        } while (var_v0_3 == 0);
    }
    if (var_s1 != 0) {
        do {
            temp_a0_2 = var_s2;
            var_s2 += 1;
            *var_s0 = func_80054BDC(temp_a0_2);
            var_s1 -= 1;
            var_s0 += 1;
        } while (var_s1 != 0);
    }
}
