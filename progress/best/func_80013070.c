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

s32 func_80011944();
s32 func_80011994();
s32 func_80011BEC();
s32 func_80016044();
s32 func_8002AB14();
extern char D_80073D54[];
extern s32 D_8007D704;
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007E4E4[];
extern u8 D_8008E9D0;

void func_80013070(void) {
    D_8007DA40 = 1;
    D_8007E4E0 = 0;
    if (D_8007D704 != 0) {
        func_80011994((D_8007E4E0 * 0x1C4) + D_8007DA48, (func_8002AB14(7) * 0x18) + D_8007E4E4, 2);
        return;
    }
    func_80011944(D_8007DA48);
    func_80016044((D_8007E4E0 * 0x1C4) + (D_8007DA48 + 0xC), D_80073D54);
    M2C_FIELD(((D_8007E4E0 * 0x1C4) + D_8007DA48), u8 *, 0x1B8) = (u8) D_8008E9D0;
    func_80011BEC((D_8007E4E0 * 0x1C4) + D_8007DA48);
}
