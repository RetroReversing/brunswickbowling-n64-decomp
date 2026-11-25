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

M2C_UNK func_80050380(void *, void *, void *);      /* extern */
M2C_UNK func_800503F8(void *, f32 *, s32);          /* extern */

void func_80048A98(void *arg0, void *arg1) {
    f32 sp10[3];

             
    void *temp_s0;
    
    if (arg0 != NULL) {
        do {
            func_800503F8(arg1, sp10, arg0 + 0x30);
            temp_s0 = arg0 + 0x40;
            func_80050380(arg1, arg0, temp_s0);
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg1, f32 *, 0x30) + sp10[0]);
            M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg1, f32 *, 0x34) + sp10[1]);
            M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg1, f32 *, 0x38) + sp10[2]);
            func_80048A98(M2C_FIELD(arg0, void **, 0x88), temp_s0);
            arg0 = M2C_FIELD(arg0, void **, 0x84);
        } while (arg0 != NULL);
    }
}
