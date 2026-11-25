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

M2C_UNK func_8001154C(); /* extern */
M2C_UNK func_800115D4(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_80011664(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_8002E8F0(s32);                         /* extern */
extern M2C_UNK D_80083BA8;

void func_80011A4C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    void *temp_a1;

    M2C_FIELD(arg0, s32 *, 0x1C0) = 1;
    func_8001154C(&D_80083BA8, arg0 + 8, 2);
    temp_a1 = arg0 + 0x14;
    func_8001154C(&D_80083BA8, temp_a1, 0x18, temp_a1);
    func_80011664(&D_80083BA8, arg0 + 0x11C, 6);
    func_80011664(&D_80083BA8, arg0 + 0x12C, 3);
    func_80011664(&D_80083BA8, arg0 + 0x13C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x14C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x15C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x16C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x17C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x18C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x19C, 2);
    func_80011664(&D_80083BA8, arg0 + 0x1AC, 1);
    func_800115D4(&D_80083BA8, arg0 + 0x1B9, 4);
    func_800115D4(&D_80083BA8, arg0 + 0x1BA, 6);
    func_800115D4(&D_80083BA8, arg0 + 0x1BB, 3);
    func_800115D4(&D_80083BA8, arg0 + 0x1BC, 2);
    func_800115D4(&D_80083BA8, arg0 + 0x1BD, 8);
    func_800115D4(&D_80083BA8, arg1 + 0x20, 3);
    func_800115D4(&D_80083BA8, arg1 + 0x1F, 3);
    temp_a0 = M2C_FIELD((arg1 + (arg2 * 4)), s32 *, 0x48);
    if (temp_a0 != 0) {
        func_8002E8F0(temp_a0);
    }
}
