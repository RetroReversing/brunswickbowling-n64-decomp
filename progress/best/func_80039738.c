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

extern unsigned char D_8008CCDA;
extern unsigned char D_8008CCD9;
extern unsigned char D_8008CCD8;
extern unsigned short D_8008D8EA;
s32 func_80039BC4();
s32 func_80051188();
extern s32 D_8008C5D0;
extern char D_8008CCB0[];
extern char D_8008CCF0[];
extern char D_8008CD30[];
extern char D_8008CD70[];
extern char D_8008CDB0[];
extern char D_8008CDF0[];
extern char D_8008CE30[];
extern char D_8008CE70[];
extern char D_8008D8E8[];

void func_80039738(void *arg0, u32 arg1, s32 arg2, s16 arg3, u16 arg4, u8 *arg5) {
    s32 *var_s0;
    s16 temp_a0;
    s16 var_s2;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s8 var_s3;
    char *var_s4;
    u8 temp_v0;
    u8 var_v0;
    u8 var_v0_2;
    void *temp_a1;

    var_s4 = arg5;
    var_s2 = arg3;
    switch (arg1) {                                 /* switch 1 */
    case 2:                                         /* switch 1 */
        var_s3 = 0;
        var_v0 = 0xE6;
block_16:
        D_8008CCDA = var_v0;
        D_8008CCD9 = var_v0;
        D_8008CCD8 = var_v0;
        break;
    case 3:                                         /* switch 1 */
        var_s3 = 1;
        var_v0 = 0xE6;
        goto block_16;
    case 4:                                         /* switch 1 */
        var_s3 = 3;
        var_v0_2 = 8;
block_10:
        D_8008CCD8 = var_v0_2;
        D_8008CCD9 = var_v0_2;
        D_8008CCDA = var_v0_2;
        break;
    case 5:                                         /* switch 1 */
        var_s3 = 2;
        D_8008CCD8 = 0xC8U;
        D_8008CCD9 = 0xC8U;
        D_8008CCDA = 0xE6U;
        D_8008CCD9 = 0xE6U;
        D_8008CCD8 = 0xE6U;
        break;
    case 6:                                         /* switch 1 */
        var_s3 = 3;
        var_v0_2 = 0xC8;
        goto block_10;
    case 9:                                         /* switch 1 */
        var_s3 = 2;
block_9:
        var_v0_2 = 0x80;
        goto block_10;
    case 10:                                        /* switch 1 */
        var_s3 = 3;
        goto block_9;
    case 7:                                         /* switch 1 */
        var_s3 = 2;
block_13:
        D_8008CCD8 = 0xD8U;
        D_8008CCD9 = 0xD8U;
        D_8008CCDA = 8U;
        break;
    case 8:                                         /* switch 1 */
        var_s3 = 3;
        goto block_13;
    case 1:                                         /* switch 1 */
        var_s3 = 1;
        var_v0 = 0xC8;
        goto block_16;
    default:                                        /* switch 1 */
        var_s3 = 0;
        var_v0 = 0xC0;
        goto block_16;
    }
    switch (arg2) {                                 /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        var_v0_3 = func_80039BC4(arg0, var_s4) >> 1;
block_23:
        var_s2 -= var_v0_3;
        break;
    case 2:                                         /* switch 2 */
        var_v0_3 = func_80039BC4(arg0, var_s4);
        goto block_23;
    }
loop_25:
    temp_v0 = *(u8 *)var_s4;
    switch (temp_v0) {                              /* switch 3; irregular */
    case 1:                                         /* switch 3 */
        var_s0 = D_8008CD70;
block_36:
        if (var_s0 != NULL) {
            M2C_FIELD(var_s0, s16 *, 0x10) = var_s2;
            temp_a0 = arg4 + (M2C_FIELD(arg0, u16 *, 0xA) - (M2C_FIELD(var_s0, u16 *, 0x18) - 4));
            M2C_FIELD(var_s0, s16 *, 0x12) = temp_a0;
            if (M2C_FIELD(arg0, s32 *, 8) == 0xE) {
                M2C_FIELD(var_s0, s16 *, 0x12) = (s16) (temp_a0 - 3);
            }
            func_80051188(var_s0 + 0xC);
            var_s2 += M2C_FIELD(var_s0, u16 *, 0x16);
        } else {
            temp_a3 = *(u8 *)var_s4 - 0x20;
            temp_a2 = (temp_a3 & 0xFFFF) * 8;
            temp_a1 = temp_a2 + M2C_FIELD(arg0, s32 *, 0);
            var_v0_4 = temp_a3 & 0xFFFF;
            if (M2C_FIELD(temp_a1, s16 *, 0) != -1) {
                var_v0_5 = var_s3 & 1;
                if ((u16) M2C_FIELD(arg0, u16 *, 0x38) < 0x300U) {
                    *(s32 *)((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)) = var_s2 + M2C_FIELD(temp_a1, u8 *, 5);
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), s16 *, 2) = (s16) (arg4 + M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0)), u8 *, 4));
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u16 *, 4) = (u16) *(u16 *)(temp_a2 + M2C_FIELD(arg0, s32 *, 0));
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 9) = (u8) M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0)), u8 *, 6);
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 0xA) = (u8) M2C_FIELD((temp_a2 + M2C_FIELD(arg0, s32 *, 0)), u8 *, 7);
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 0xB) = (u8) D_8008CCD8;
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 0xC) = (u8) D_8008CCD9;
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u8 *, 0xD) = (u8) D_8008CCDA;
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), s8 *, 8) = var_s3;
                    M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0x38) * 0xE) + M2C_FIELD(arg0, s32 *, 0x34)), u16 *, 6) = (u16) D_8008D8EA;
                    M2C_FIELD(arg0, u16 *, 0x38) += 1;
                    var_v0_5 = var_s3 & 1;
                }
                if (var_v0_5 != 0) {
                    D_8008C5D0 += 1;
                }
                var_v0_4 = temp_a3 & 0xFFFF;
            }
            var_s2 += M2C_FIELD(((var_v0_4 * 8) + M2C_FIELD(arg0, s32 *, 0)), u8 *, 3);
        }
        var_s4 += 1;
        goto loop_25;
    case 2:                                         /* switch 3 */
        var_s0 = D_8008CDF0;
        goto block_36;
    case 3:                                         /* switch 3 */
        var_s0 = D_8008CE30;
        goto block_36;
    case 4:                                         /* switch 3 */
        var_s0 = D_8008CDB0;
        goto block_36;
    case 5:                                         /* switch 3 */
        var_s0 = D_8008CCF0;
        goto block_36;
    case 6:                                         /* switch 3 */
        var_s0 = D_8008CD30;
        goto block_36;
    case 7:                                         /* switch 3 */
        var_s0 = D_8008CE70;
        goto block_36;
    default:                                        /* switch 3 */
        var_s0 = NULL;
        goto block_36;
    }
}
