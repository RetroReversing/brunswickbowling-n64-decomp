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

M2C_UNK func_8005978C(s32, M2C_UNK *, s32, s8 *);   /* extern */
extern M2C_UNK D_8007608C;
extern M2C_UNK D_80076090;

void func_80025084(s32 arg0, s32 arg1) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s32 temp_v1;
    s8 var_v0;
    s8 var_v0_2;

    sp10 = M2C_FIELD(&D_8007608C, s8 *, 0);
    sp11 = M2C_FIELD(&D_8007608C, s8 *, 1);
    sp12 = M2C_FIELD(&D_8007608C, s8 *, 2);
    temp_v1 = arg1 % 10;
    if ((u32) ((arg1 % 100) - 0xA) >= 0xBU) {
        switch (temp_v1) {                          /* irregular */
        case 1:
            sp10 = 0x73;
            var_v0 = 0x74;
block_11:
            sp11 = var_v0;
            break;
        case 2:
            var_v0_2 = 0x6E;
block_10:
            sp10 = var_v0_2;
            var_v0 = 0x64;
            goto block_11;
        case 3:
            var_v0_2 = 0x72;
            goto block_10;
        }
    }
    func_8005978C(arg0, &D_80076090, arg1, &sp10);
}
