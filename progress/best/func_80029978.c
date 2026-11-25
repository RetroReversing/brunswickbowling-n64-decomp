/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_80039738(s32, s32, s32, s16, s32, s32); /* extern */
M2C_UNK func_80045188(M2C_UNK *, s16, s16, s16, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8008CEEC;
extern M2C_UNK D_8008ED80;

void func_80029978(void *arg0) {
    s16 var_s3;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    u16 temp_v0;
    u16 var_s0;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;

    var_s4 = 0;
    var_s2 = 0;
    func_80045188(&D_8008ED80, M2C_FIELD(arg0, s16 *, 0), M2C_FIELD(arg0, s16 *, 2), M2C_FIELD(arg0, s16 *, 4), (s32) M2C_FIELD(arg0, s16 *, 6), (s32) M2C_FIELD(arg0, u8 *, 8), (s32) M2C_FIELD(arg0, u8 *, 9), (s32) M2C_FIELD(arg0, u8 *, 0xA), 1);
    var_s0 = M2C_FIELD(arg0, u16 *, 0x14);
loop_1:
    if (var_s4 < M2C_FIELD(arg0, s32 *, 0x10)) {
        temp_v1 = var_s2 + M2C_FIELD(arg0, s32 *, 0xC);
        if (M2C_FIELD(temp_v1, s32 *, 8) != 0) {
            temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 4);
            if (temp_v1_2 != 1) {
                if (temp_v1_2 < 2) {
                    var_v0 = var_s0 << 0x10;
                    if (temp_v1_2 != 0) {

                    } else {
                        var_s3 = (u16) M2C_FIELD(arg0, s16 *, 0) + 0xA;
                        goto block_12;
                    }
                } else {
                    var_v0 = var_s0 << 0x10;
                    if (temp_v1_2 != 2) {

                    } else {
                        var_s3 = (u16) M2C_FIELD(arg0, s16 *, 0) - 0xA;
                        goto block_12;
                    }
                }
            } else {
                var_s3 = (u16) M2C_FIELD(arg0, s16 *, 0) + ((s32) ((u16) M2C_FIELD(arg0, s16 *, 4) << 0x10) >> 0x11);
block_12:
                var_v0 = var_s0 << 0x10;
            }
            temp_v1_3 = var_s2 + M2C_FIELD(arg0, s32 *, 0xC);
            func_80039738(M2C_FIELD(temp_v1_3, s32 *, 8), M2C_FIELD(temp_v1_3, s32 *, 0), M2C_FIELD(temp_v1_3, s32 *, 4), var_s3, var_v0 >> 0x10, M2C_FIELD((var_s2 + M2C_FIELD(arg0, s32 *, 0xC)), s32 *, 0xC));
            temp_v1_4 = M2C_FIELD((var_s2 + M2C_FIELD(arg0, s32 *, 0xC)), void **, 8);
            temp_v0 = var_s0 + M2C_FIELD(temp_v1_4, s32 *, 8);
            var_s0 = temp_v0;
            if (temp_v1_4 == &D_8008CEEC) {
                var_s0 = temp_v0 - 3;
            }
        } else {
            var_s0 += 4;
        }
        var_s2 += 0x10;
        var_s4 += 1;
        goto loop_1;
    }
}
