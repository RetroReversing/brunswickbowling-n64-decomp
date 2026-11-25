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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80036DA4();
extern s32 D_80075A20;
extern u8 D_8008BA90[];
extern s32 D_8008BAA8;
extern s32 D_8008BAE8;

void func_80036CB0(void) {
    u8 *base_D_8008BA90;
    void *temp_v0;
    s32 *__base_D_80075A20;
    s32 **temp;
    s32 *__base_D_8008BAA8;

    __base_D_8008BAA8 = &D_8008BAA8;
    do { base_D_8008BA90 = D_8008BA90; } while (0);

    temp = (s32 **)(base_D_8008BA90 + 0x10);
    __base_D_80075A20 = &D_80075A20;

    do { temp_v0 = base_D_8008BA90 + 8; } while (0);
    (*temp) = __base_D_80075A20;
    (*(void **)((s8 *)temp_v0 + 4)) = temp_v0;
    (*(void **)(base_D_8008BA90 + 8)) = temp_v0;
    (*(s32 **)(base_D_8008BA90 + 0x10)) = __base_D_80075A20;
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_80075A20 & 0x10000) {
if ((unsigned long)__base_D_80075A20 & 0x100) {
func_80036DA4(__base_D_8008BAA8);
} else {
func_80036DA4(__base_D_8008BAA8);
}
} else {
if ((unsigned long)__base_D_80075A20 & 0x100) {
func_80036DA4(__base_D_8008BAA8);
} else {
func_80036DA4(__base_D_8008BAA8);
}
}
    func_80036DA4(&D_8008BAE8);
}
