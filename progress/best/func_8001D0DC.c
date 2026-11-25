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

M2C_UNK func_800235F0();                            /* extern */
M2C_UNK func_80023634(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_80074E14;
extern s32 D_80081B60;
extern M2C_UNK D_80083110;
extern M2C_UNK D_80083260;
extern M2C_UNK D_80083300;
extern M2C_UNK *D_800835E4;
extern s32 D_800835E8;

void func_8001D0DC(s32 arg0) {
    D_80081B60 = 2;
    func_800235F0();
    func_80023634(arg0, &D_80074E14, &D_80083260, 2, &D_80083300, 0);
    D_800835E8 = arg0;
    D_800835E4 = &D_80083110;
}
