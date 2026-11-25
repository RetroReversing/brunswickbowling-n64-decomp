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

void *_loadOutputBuffer();
void *_loadBuffer();
void *_saveBuffer();
void *_filterBuffer();

void *alFxPull(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 sp1E;                                       /* compiler-managed */
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 var_s5;
    s16 var_s6;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_s7;
    u32 temp_a0_2;
    u32 temp_fp;
    u32 temp_s3;
    u32 temp_v0_8;
    void *temp_a0;
    void *temp_s1;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_7;
    void *var_t3;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    sp1E = 0;
    var_s6 = 0;
    var_s5 = 0x140;
    temp_v0 = M2C_FIELD(temp_a0, void *(**)(void *, s32), 4)(temp_a0, arg4);
    temp_t3 = temp_v0 + 8;
    temp_t3_2 = temp_t3 + 8;
    temp_s0 = arg2 * 2;
    M2C_FIELD(temp_v0, s32 *, 0) = 0x08000000;
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (temp_s0 & 0xFFFF);
    M2C_FIELD(temp_v0, s32 *, 8) = 0x0C00DA83;
    M2C_FIELD(temp_t3, s32 *, 4) = 0x06C006C0;
    M2C_FIELD(temp_t3, s32 *, 8) = 0x0C005A82;
    M2C_FIELD(temp_t3_2, s32 *, 4) = 0x080006C0;
    temp_v0_2 = _saveBuffer(arg0, M2C_FIELD(arg0, u32 *, 0x18), 0x6C0, arg2, temp_t3_2 + 8);
    M2C_FIELD(temp_v0_2, s32 *, 0) = 0x02000800;
    M2C_FIELD(temp_v0_2, s32 *, 4) = temp_s0;
    var_s7 = 0;
    var_t3 = temp_v0_2 + 8;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x24) > 0) {
        do {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x20) + ((s16) sp1E * 0x28);
            temp_a0_2 = M2C_FIELD(arg0, u32 *, 0x18);
            temp_s3 = temp_a0_2 - (M2C_FIELD(temp_s1, s32 *, 0) * 2);
            temp_fp = temp_a0_2 - (M2C_FIELD(temp_s1, s32 *, 4) * 2);
            if (temp_s3 == var_s7) {
                temp_v0_4 = var_s5;
                var_s5 = var_s6;
                var_s6 = temp_v0_4;
            } else {
                var_t3 = _loadBuffer(arg0, temp_s3, var_s6, arg2, var_t3);
            }
            temp_v1 = M2C_FIELD(temp_s1, s16 *, 8);
            var_t3 = _loadOutputBuffer(arg0, temp_s1, var_s5, arg2, var_t3);
            if (temp_v1 != 0) {
                M2C_FIELD(var_t3, s32 *, 0) = (s32) ((temp_v1 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(var_t3, s32 *, 4) = (s32) ((var_s6 << 0x10) | (var_s5 & 0xFFFF));
                var_t3 += 8;
                if ((M2C_FIELD(temp_s1, s32 *, 0x24) == 0) && (M2C_FIELD(temp_s1, s32 *, 0x20) == 0)) {
                    var_t3 = _saveBuffer(arg0, temp_fp, var_s5, arg2, var_t3);
                }
            }
            temp_v0_5 = M2C_FIELD(temp_s1, s16 *, 0xA);
            if (temp_v0_5 != 0) {
                M2C_FIELD(var_t3, s32 *, 0) = (s32) ((temp_v0_5 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(var_t3, s32 *, 4) = (s32) ((var_s5 << 0x10) | (var_s6 & 0xFFFF));
                var_t3 = _saveBuffer(arg0, temp_s3, var_s6, arg2, var_t3 + 8);
            }
            temp_a0_3 = M2C_FIELD(temp_s1, s32 *, 0x20);
            if (temp_a0_3 != 0) {
                var_t3 = _filterBuffer(temp_a0_3, var_s5, arg2, var_t3);
            }
            if (M2C_FIELD(temp_s1, s32 *, 0x24) == 0) {
                var_t3 = _saveBuffer(arg0, temp_fp, var_s5, arg2, var_t3);
            }
            temp_v0_6 = M2C_FIELD(temp_s1, s16 *, 0xC);
            if (temp_v0_6 != 0) {
                temp_v0_7 = var_t3;
                var_t3 += 8;
                M2C_FIELD(temp_v0_7, s32 *, 0) = (s32) ((temp_v0_6 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(temp_v0_7, s32 *, 4) = (s32) ((var_s5 << 0x10) | 0x800);
            }
            temp_v0_3 = sp1E + 1;
            var_s7 = M2C_FIELD(arg0, u32 *, 0x18) + (M2C_FIELD(temp_s1, s32 *, 4) * 2);
            sp1E = temp_v0_3;
        } while (temp_v0_3 < (s32) M2C_FIELD(arg0, u8 *, 0x24));
    }
    temp_a2 = arg2 * 2;
    temp_v0_8 = M2C_FIELD(arg0, u32 *, 0x18) + temp_a2;
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x1C) * 2;
    M2C_FIELD(arg0, u32 *, 0x18) = temp_v0_8;
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x14) + temp_a0_4) < temp_v0_8) {
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) (temp_v0_8 - temp_a0_4);
    }
    M2C_FIELD(var_t3, s32 *, 0) = (s32) (((u32) (0x800 << 0x10) >> 0x10) | 0x0A000000);
    M2C_FIELD(var_t3, s32 *, 4) = (s32) ((temp_a2 & 0xFFFF) | 0x06C00000);
    return var_t3 + 8;
}
