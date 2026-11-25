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

s32 func_80024280();
s32 func_800375C0();
s32 func_80037744();
s32 func_80046014();
s32 func_80046188();
extern char D_80081CE8[];
extern s32 D_80082780;
extern char D_8008C8F4[];
extern char D_8008F2F0[];

void func_8002B7B8(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    void *temp_v1;

    temp_s0 = D_80082780;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_s0 != temp_a0) {
        temp_v1 = (M2C_FIELD(arg0, s16 *, 0x3C) << 6) + D_80081CE8;
        if (temp_s0 == temp_v1) {
            func_80037744(D_8008C8F4);
            func_80046014(D_8008F2F0, 3, 0xB);
            M2C_FIELD(arg0, s32 *, 0x38) = temp_s0;
        } else {
            if (temp_a0 == temp_v1) {
                func_80046188(D_8008F2F0);
                func_800375C0(D_8008C8F4, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x38) = temp_s0;
        }
    }
    func_80024280(arg0);
}
