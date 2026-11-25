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

s32 func_80052A5C();
s32 func_8005B998();
s32 func_8005B9F0();
s32 func_8005BD34();
extern char D_8008C9CC[];

void func_800377A0(void *arg0) {
    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0xE);
    if ((temp_v1 != -1) && (func_8005B998(M2C_FIELD(((temp_v1 * 4) + D_8008C9CC), s32 *, 0x140)) != 0)) {
loop_2:
        if (func_8005B9F0(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0xE) * 4) + D_8008C9CC), s32 *, 0x140), 0) == 0) {
            func_80052A5C(1);
            goto loop_2;
        }
        func_80052A5C(3);
loop_5:
        if (func_8005BD34(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0xE) * 4) + D_8008C9CC), s32 *, 0x140)) == 0) {
            func_80052A5C(1);
            goto loop_5;
        }
    }
}
