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

s32 func_8001135C();
s32 func_80043A2C();
s32 func_80044990();
extern s32 D_8007D700;
extern s32 D_80082E70;
extern s32 D_80082F50;
extern s32 D_8008ED80;

void func_800164C8(void *arg0) {

    func_80043A2C(&D_8008ED80);
    if ((*(s32 *)((s8 *)D_8007D700 + 4)) != 0) {
      s32 temp_v1;
        do
        {
          temp_v1 = (*(s32 *)((s8 *)arg0 + 0x14));
        }
        while (0);
        if ((temp_v1 != &D_80082E70) && (temp_v1 != &D_80082F50)) {
            func_8001135C();
        }
    }
    if ((*(s32 *)((s8 *)arg0 + 0x18)) != 0) {
        func_80044990(&D_8008ED80);
        (*(s32 *)((s8 *)arg0 + 0x18)) = (s32) ((*(s32 *)((s8 *)arg0 + 0x18)) - 1);
    }
}
