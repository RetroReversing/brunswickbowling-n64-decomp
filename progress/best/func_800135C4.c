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

M2C_UNK func_8003792C(M2C_UNK *, s32);              /* extern */
M2C_UNK func_800382D8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80045DE0(M2C_UNK *, s32);              /* extern */
extern f32 D_80073D68;
extern s32 D_800891FC;
extern M2C_UNK D_8008C5E0;
extern M2C_UNK D_8008C5F8;
extern M2C_UNK D_8008C610;
extern M2C_UNK D_8008C628;
extern M2C_UNK D_8008C640;
extern M2C_UNK D_8008C658;
extern M2C_UNK D_8008C670;
extern M2C_UNK D_8008C688;
extern M2C_UNK D_8008C6A0;
extern M2C_UNK D_8008C84C;
extern M2C_UNK D_8008C9CC;
extern M2C_UNK D_8008F2F0;

void func_800135C4(void) {
    s32 temp_ft0;

    temp_ft0 = (s32) ((f32) D_800891FC * D_80073D68);
    func_8003792C(&D_8008C84C, temp_ft0);
    func_8003792C(&D_8008C5E0, temp_ft0);
    func_8003792C(&D_8008C5F8, temp_ft0);
    func_8003792C(&D_8008C610, temp_ft0);
    func_8003792C(&D_8008C628, temp_ft0);
    func_8003792C(&D_8008C640, temp_ft0);
    func_8003792C(&D_8008C658, temp_ft0);
    func_8003792C(&D_8008C670, temp_ft0);
    func_8003792C(&D_8008C688, temp_ft0);
    func_8003792C(&D_8008C6A0, temp_ft0);
    func_800382D8(&D_8008C9CC, temp_ft0);
    func_80045DE0(&D_8008F2F0, temp_ft0);
}
