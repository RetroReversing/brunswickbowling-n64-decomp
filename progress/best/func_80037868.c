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
s32 func_8005B9F0();
s32 func_8005BD58();
extern char D_8008C9CC[];

void func_80037868(void *arg0) {
    u32 temp_a1;

    if (M2C_FIELD(arg0, s16 *, 0xE) != -1) {
        do {

        } while (func_8005BD58(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0xE) * 4) + D_8008C9CC), s32 *, 0x140)) == 0);
        func_80052A5C(2);
        temp_a1 = M2C_FIELD(arg0, s16 *, 0xA) + M2C_FIELD(arg0, s16 *, 0xC);
        func_8005B9F0(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0xE) * 4) + D_8008C9CC), s32 *, 0x140), (s32) (temp_a1 + (temp_a1 >> 0x1F)) >> 1);
    }
}
