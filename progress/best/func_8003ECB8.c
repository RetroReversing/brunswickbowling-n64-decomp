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

M2C_UNK func_80036F08(M2C_UNK *, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8003E99C();                            /* extern */
extern M2C_UNK D_80078EF8;
extern M2C_UNK D_8008BCD0;
extern M2C_UNK D_8008C250;

void func_8003ECB8(s32 *arg0, s32 arg1) {
    void *temp_s0;
    M2C_UNK *__base_D_80078EF8;

    __base_D_80078EF8 = &D_80078EF8;

    if (*arg0 != 2) {
        do { func_8003E99C(); } while (0);
    }
    temp_s0 = (void *) (((arg1 + (arg1 * 3))) + (s32) arg0);
    func_80036F08(&D_8008C250, M2C_FIELD(temp_s0, s32 *, 0x34), __base_D_80078EF8, 0);
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_80078EF8 & 0x10000) {
if ((unsigned long)__base_D_80078EF8 & 0x100) {
func_80036F08(&D_8008BCD0, M2C_FIELD(temp_s0, s32 *, 0x34), __base_D_80078EF8, 0);
} else {
func_80036F08(&D_8008BCD0, M2C_FIELD(temp_s0, s32 *, 0x34), __base_D_80078EF8, 0);
}
} else {
if ((unsigned long)__base_D_80078EF8 & 0x100) {
func_80036F08(&D_8008BCD0, M2C_FIELD(temp_s0, s32 *, 0x34), __base_D_80078EF8, 0);
} else {
func_80036F08(&D_8008BCD0, M2C_FIELD(temp_s0, s32 *, 0x34), __base_D_80078EF8, 0);
}
}
}
