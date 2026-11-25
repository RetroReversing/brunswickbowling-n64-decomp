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

M2C_UNK func_80025568();                            /* extern */
M2C_UNK func_80029978(void *);                      /* extern */
M2C_UNK func_80037310(void *);                      /* extern */
M2C_UNK func_80047370(void *);                      /* extern */
M2C_UNK func_80047458(void *, f32);                 /* extern */
M2C_UNK func_80051120();                            /* extern */
extern f64 D_80078EE8;
extern f64 D_80078EF0;
extern void *D_80082780;
extern void *D_80082F94;
extern u8 D_8008E9A0;
extern M2C_UNK D_800900A8;
extern M2C_UNK D_80090174;
extern M2C_UNK D_800926E8;

void func_8003E544(void *arg0) {
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_a1 != NULL) {
        var_v0 = 0;
        if (D_80082F94 != NULL) {
            var_v0 = M2C_FIELD(D_80082F94, s32 *, 0x18) != 0;
        }
        if (var_v0 == 0) {
            temp_v0 = M2C_FIELD(temp_a1, void **, 0);
            temp_v0_2 = M2C_FIELD(temp_v0, s32 (**)(void *, void *), 0xC)(temp_a1 + M2C_FIELD(temp_v0, s16 *, 8), temp_a1);
            switch (temp_v0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if (D_8008E9A0 == 0) {
                    temp_a0 = M2C_FIELD(arg0, void **, 0x6C);
                    if (temp_a0 != &D_800926E8) {
                        func_80047458(temp_a0, (f32) ((f64) M2C_FIELD(temp_a0, f32 *, 0x90) + D_80078EE8));
                    }
                    func_80047370(M2C_FIELD(arg0, void **, 0x6C));
                    func_80051120();
                }
                break;
            case 1:                                 /* switch 1 */
                func_80037310(M2C_FIELD(arg0, void **, 0x6C));
                break;
            case 2:                                 /* switch 1 */
                func_80029978(M2C_FIELD(arg0, void **, 0x6C) + 4);
                break;
            }
            temp_v1 = M2C_FIELD(arg0, void **, 0x70);
            if (temp_v1 != NULL) {
                temp_v0_3 = M2C_FIELD(temp_v1, void **, 0);
                temp_v0_4 = M2C_FIELD(temp_v0_3, s32 (**)(void *), 0xC)(temp_v1 + M2C_FIELD(temp_v0_3, s16 *, 8));
                switch (temp_v0_4) {                /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    temp_a0_2 = M2C_FIELD(arg0, void **, 0x70);
                    if ((temp_a0_2 != &D_80090174) && (temp_a0_2 != &D_800900A8)) {
                        func_80047458(temp_a0_2, (f32) ((f64) M2C_FIELD(temp_a0_2, f32 *, 0x90) + D_80078EF0));
                    }
                    func_80047370(M2C_FIELD(arg0, void **, 0x70));
                    break;
                case 1:                             /* switch 2 */
                    func_80037310(M2C_FIELD(arg0, void **, 0x70));
                    break;
                case 2:                             /* switch 2 */
                    func_80029978(M2C_FIELD(arg0, void **, 0x70) + 4);
                    break;
                }
            }
            if (M2C_FIELD(D_80082780, s32 *, 0x20) != 0) {
                func_80025568();
            }
        }
    }
}
