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

s32 func_80011BEC();
s32 func_80011CA4();
s32 func_80023FBC();
s32 func_8002E700();
s32 func_800386FC();
extern s32 D_8007DA40;
extern char D_8007DA48[];
extern s32 D_8007E4E0;
extern char D_8007F618[];
extern char D_80089C70[];
extern char D_8008AD48[];
extern char D_8008CB50[];
extern u8 D_8008E9D0;
extern s32 D_80092788;

void func_8002B078(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a2;
    void *temp_v0;

    if (arg2 >= 0x209) {
        if (arg2 >= 0x20B) {
            if (arg2 == 0x20B) {
                if (arg0 == D_80089C70) {
                    D_8007DA40 -= 1;
                    D_8007E4E0 -= 1;
                } else {
                    temp_a2 = (D_8007E4E0 * 0x1C4) + D_8007DA48;
                    temp_v0 = M2C_FIELD(temp_a2, void **, 4);
                    M2C_FIELD(temp_v0, s32 (**)(void *, s32, void *), 0xC)(temp_a2 + M2C_FIELD(temp_v0, s16 *, 8), M2C_FIELD(temp_a2, s32 *, 0), temp_a2);
                    func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
                }
                goto block_9;
            }
        } else {
            M2C_FIELD(((D_8007E4E0 * 0x1C4) + D_8007DA48), u8 *, 0x1B8) = (u8) D_8008E9D0;
            func_80011CA4((D_8007E4E0 * 0x5C) + D_8007F618, (D_8007E4E0 * 0x1C4) + D_8007DA48, 1);
            if (arg0 == D_80089C70) {
                func_8002E700((D_8007E4E0 * 0x2C) + D_8008AD48);
                func_80011BEC((D_8007E4E0 * 0x1C4) + D_8007DA48);
            }
block_9:
            D_80092788 = 1;
            func_800386FC(D_8008CB50);
        }
    }
    func_80023FBC(arg0, arg1 & 0xFF, arg2, arg3);
}
