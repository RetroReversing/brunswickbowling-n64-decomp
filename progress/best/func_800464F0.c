/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern int D_800891B0;
s32 func_80022B18();
s32 func_80023FBC();

void func_800464F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 >= 0x209) {
        if (arg2 < 0x20B) {
            M2C_FIELD(*(s32 *)(void * *)((*(s32 *)&D_800891B0) + 4), s32 (**)(void *, s32, s32 *), 0xC)(M2C_FIELD(*(s32 *)(void * *)((*(s32 *)&D_800891B0) + 4), s16 *, 8) + &D_800891B0, (*(s32 *)&D_800891B0), &D_800891B0);

            func_80022B18(&D_800891B0);
        }
        else {
if (arg2 == 0x20B) {
            M2C_FIELD(*(s32 *)(void * *)((*(s32 *)&D_800891B0) + 4), s32 (**)(void *, s32, s32 *), 0xC)(M2C_FIELD(*(s32 *)(void * *)((*(s32 *)&D_800891B0) + 4), s16 *, 8) + &D_800891B0, (*(s32 *)&D_800891B0), &D_800891B0);

            func_80022B18(&D_800891B0);
        }
}
    }
    loop_goto_1:
    {
 arg1 &= 0xFF;
    }
    if (0)
    {
        goto loop_goto_1;
    }
    do { func_80023FBC(arg0, arg1, arg2, arg3); } while (0);
}
