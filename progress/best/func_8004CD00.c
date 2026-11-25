/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_8004C8E8(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK D_8009C798;
extern s32 D_8009C8A0;
extern M2C_UNK D_8009C8A8;

void *func_8004CD00(s32 arg0, M2C_UNK arg1) {
    void *temp_s0;

    temp_s0 = (D_8009C8A0 * 0xC) + &D_8009C8A8;
    func_8004C8E8(temp_s0, arg0, arg1);
    (&D_8009C798)[D_8009C8A0] = temp_s0;
    D_8009C8A0 += 1;
    return temp_s0;
}
