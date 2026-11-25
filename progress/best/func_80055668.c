/* Partial candidate from function #137438953708 in project #32; rechecked locally. */
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

M2C_UNK func_800549B0(s32, s32);                    /* extern */
s32 func_800549E4(s32);                             /* extern */
M2C_UNK func_80054A1C(M2C_UNK);                     /* extern */

void func_80055668(void) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_v1;
    u32 var_s0;

    temp_s4 = func_800549E4(0xB1FFFFF4) & 0xB1FFFFFC;
    temp_s1 = func_800549E4(0xB1FFFFF8) & 0x01FFFFFC;
    func_800549B0(0xB1FFFFFC, 0);
    for (;;) {
        temp_v1 = temp_s1 >> 2;
        if (func_800549E4(0xB0000010) != 0) {
            break;
        }
        func_80054A1C(0x1F4);
    }
    var_s0 = 0;
    if (temp_v1 != 0) {
        var_s2 = temp_s4 & 0xB07FFFFF;
        var_s1 = temp_s4;
        do {
            func_800549B0(var_s2, func_800549E4(var_s1));
            var_s2 += 4;
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < temp_v1);
    }
    func_80054A1C(0x7D0);/*__repair_call_balance*/if(var_s0){
    func_800549B0(0xB1FFFFF4, 0);}else{
    func_800549B0(0xB1FFFFF4, 0);}
}
