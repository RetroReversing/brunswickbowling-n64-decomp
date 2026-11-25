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

M2C_UNK func_80042CB4(s32 *, s32, s32, s32, s32, f32); /* extern */
f32 func_80042DA0(s32, s32, s32, s32, s32, s32);    /* extern */

void *func_80042E00(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    union {
        unsigned char bytes[48];
        struct { s32 value; } view_sp28;
        struct { unsigned char pad[4]; s32 value; } view_sp2C;
        struct { unsigned char pad[8]; s32 value; } view_sp30;
        struct { unsigned char pad[12]; s32 value; } view_sp34;
        struct { unsigned char pad[16]; s32 value; } view_sp38;
        struct { unsigned char pad[20]; s32 value; } view_sp3C;
        struct { unsigned char pad[24]; s32 value; } view_sp40;
        struct { unsigned char pad[28]; s32 value; } view_sp44;
        struct { unsigned char pad[32]; s32 value; } view_sp48;
        struct { unsigned char pad[36]; s32 value; } view_sp4C;
        struct { unsigned char pad[40]; s32 value; } view_sp50;
        struct { unsigned char pad[44]; s32 value; } view_sp54;
    } m2c_initial_frame;

             
             
             
             
             
             
             

    func_80042CB4(&m2c_initial_frame.view_sp40.value, arg4, arg5, arg6, arg7, func_80042DA0(arg2, arg3, arg4, arg5, arg6, arg7));
    m2c_initial_frame.view_sp28.value = m2c_initial_frame.view_sp40.value;
    m2c_initial_frame.view_sp2C.value = m2c_initial_frame.view_sp44.value;
    m2c_initial_frame.view_sp30.value = m2c_initial_frame.view_sp48.value;
    m2c_initial_frame.view_sp34.value = m2c_initial_frame.view_sp4C.value;
    m2c_initial_frame.view_sp38.value = m2c_initial_frame.view_sp50.value;
    m2c_initial_frame.view_sp3C.value = m2c_initial_frame.view_sp54.value;
    M2C_FIELD(arg0, s32 *, 0) = m2c_initial_frame.view_sp40.value;
    M2C_FIELD(arg0, s32 *, 4) = m2c_initial_frame.view_sp44.value;
    M2C_FIELD(arg0, s32 *, 8) = m2c_initial_frame.view_sp48.value;
    M2C_FIELD(arg0, s32 *, 0xC) = m2c_initial_frame.view_sp4C.value;
    M2C_FIELD(arg0, s32 *, 0x10) = m2c_initial_frame.view_sp50.value;
    M2C_FIELD(arg0, s32 *, 0x14) = m2c_initial_frame.view_sp54.value;
    return arg0;
}
