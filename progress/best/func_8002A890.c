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

M2C_UNK func_8001C210(void *, s32 *);               /* extern */
M2C_UNK func_8005978C(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK D_800765C0;
extern s32 D_8008E9E0;

void func_8002A890(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *sp18;
    void *sp20;
    void *sp28;
    void *sp30;
    s32 sp38;

    M2C_FIELD(arg0, void **, 0x124) = arg1;
    M2C_FIELD(arg0, s32 *, 0x11C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) D_8008E9E0;
    func_8005978C(arg0 + 0x14, &D_800765C0, arg3);
    func_8005978C(arg0 + 0x54, &D_800765C0, arg4);
    func_8005978C(arg0 + 0x94, &D_800765C0, arg5);
    func_8005978C(arg0 + 0xD4, &D_800765C0, arg6);
    M2C_FIELD(arg0, s32 *, 0x114) = 1;
    sp18 = arg0;
    sp30 = arg0;
    sp28 = arg0;
    sp38 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), s32 *, 8);
    func_8001C210(arg0, &sp38);
    sp20 = sp28;
    M2C_FIELD(arg0, s32 *, 0x118) = arg7;
}
