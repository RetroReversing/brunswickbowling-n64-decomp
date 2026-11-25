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

s16 func_80037A58();
s16 func_80037B94();
s32 func_80037BC8();
s32 func_80037C2C();
s32 func_8005B680();
s32 func_8005B8E4();
extern char D_8008C9CC[];

void func_800375C0(void *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_s0;
    s32 var_s0;
    u32 temp_a1_2;
    u32 temp_a1_3;

    M2C_FIELD(arg0, s16 *, 0x10) = -1;
    if (M2C_FIELD(arg0, s16 *, 0) != -1) {
        temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
        if (temp_a1 < 0) {
            goto block_7;
        }
        if ((arg1 == 0) && (func_80037BC8(D_8008C9CC, temp_a1) == 0)) {
            temp_s0 = M2C_FIELD(arg0, s16 *, 0xE);
            func_80037C2C(D_8008C9CC, temp_s0);
            M2C_FIELD(arg0, s16 *, 0xE) = func_80037B94(D_8008C9CC, arg0, temp_s0);
        } else {
block_7:
            M2C_FIELD(arg0, s16 *, 0xE) = func_80037A58(D_8008C9CC, arg0);
        }
        if (M2C_FIELD(arg0, s16 *, 0xE) != -1) {
            temp_a1_2 = M2C_FIELD(arg0, s16 *, 0xA) + M2C_FIELD(arg0, s16 *, 0xC);
            var_s0 = func_8005B680(M2C_FIELD(arg0, s16 *, 0), (s32) (temp_a1_2 + (temp_a1_2 >> 0x1F)) >> 1, 0x80, 0, (s32) M2C_FIELD(arg0, s16 *, 0x12));
            if (var_s0 == 0) {
                func_8005B8E4(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0xE) * 4) + D_8008C9CC), s32 *, 0x140), 1);
                temp_a1_3 = M2C_FIELD(arg0, s16 *, 0xA) + M2C_FIELD(arg0, s16 *, 0xC);
                var_s0 = func_8005B680(M2C_FIELD(arg0, s16 *, 0), (s32) (temp_a1_3 + (temp_a1_3 >> 0x1F)) >> 1, 0x80, 0, (s32) M2C_FIELD(arg0, s16 *, 0x12));
                if (var_s0 == 0) {
                    func_80037C2C(D_8008C9CC, M2C_FIELD(arg0, s16 *, 0xE));
                    M2C_FIELD(arg0, s16 *, 0xE) = -1;
                }
            }
            temp_a0 = M2C_FIELD(arg0, s16 *, 0xE);
            if (temp_a0 != -1) {
                M2C_FIELD(((temp_a0 * 4) + D_8008C9CC), s32 *, 0x140) = var_s0;
            }
        }
    }
}
