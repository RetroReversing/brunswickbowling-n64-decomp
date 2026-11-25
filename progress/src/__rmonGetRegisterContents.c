/* identical to __rmonGetRegisterContents in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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

s32 __rmonGetTCB(M2C_UNK);                          /* extern */
s32 rmonGetRcpRegister(s32);                        /* extern */

s32 __rmonGetRegisterContents(s32 arg0, M2C_UNK arg1, s32 arg2_in_in) {
  s32 arg2_in;
  s32 arg2;
int __repair_literal;

    s32 temp_v0;
    u32 temp_v1;
  arg2_in = arg2_in_in;
  arg2_in_in = 0;
    
  arg2 = arg2_in;

    if (arg0 == 0) {
        u32 temp;
        temp_v1 = arg2 - 1;
        if (temp_v1 < 0x19U) {
            arg2_in = temp_v1;
            goto block_4;
        }
        temp = (u32) (arg2 - 0x1C);
        arg2_in = arg2 - 3;
        if (temp < 4U) {
block_4:
            temp_v0 = __rmonGetTCB(arg1);
            if (temp_v0 == 0) {
                {
return 0;
}
            }
__repair_literal = 4;

            return M2C_FIELD((temp_v0 + (arg2_in * __repair_literal)), s32 *, 0x20);
        }

        return 0;
    }
    return rmonGetRcpRegister(arg2);
}
