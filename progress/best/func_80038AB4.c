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

M2C_UNK func_80038BD8(void *);                      /* extern */
void **func_80050988(s32, M2C_UNK *);               /* extern */
M2C_UNK func_80050DE8(s8 *, M2C_UNK *);             /* extern */
M2C_UNK func_8005ACC0(s8 *, s32, M2C_UNK);          /* extern */
extern M2C_UNK D_80078050;
extern void **D_8008CC70;
extern s8 D_8009C0B0;

s16 func_80038AB4(s32 arg0, void *arg1) {
    s16 var_v0;
    void **temp_v0;

    if (D_8008CC70 != NULL) {
        func_80050DE8(&D_8009C0B0, &D_80078050);
        D_8009C0B0 = 0;
        D_8008CC70 = NULL;
    }
    temp_v0 = func_80050988(arg0, &D_80078050);
    D_8008CC70 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg1, void **, 0x3C) = (void *) *temp_v0;
    func_8005ACC0(&D_8009C0B0, arg0, 0x1F);
    var_v0 = -1;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), s32 *, 0) == 0x43324144) {
        func_80038BD8(arg1);
        var_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x3C), s16 *, 8);
    }
    return var_v0;
}
