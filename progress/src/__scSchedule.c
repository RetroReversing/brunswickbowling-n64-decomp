/* identical to __scSchedule in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scSchedule in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to __scSchedule in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
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

s32 func_8006CF10();                                /* extern */
s32 func_8006D060();                                /* extern */

s32 __scSchedule(void *arg0, s32 **arg1, s32 **arg2, s32 arg3) {
    s32 * __repair_hoisted;

    s32 *temp_s1;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v1;
    s32 *temp_v1_3;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_v0;

    var_s2 = arg3;
    temp_s6 = var_s2;
    temp_s1 = (*(s32 **)((s8 *)arg0 + 0x268));
    __repair_hoisted = (*(s32 **)((s8 *)arg0 + 0x264));
    if (((*(s32 *)((s8 *)arg0 + 0x280)) != 0) && (var_s2 & 2)) {
        if ((temp_s1 == NULL) || !((*(s32 *)((s8 *)temp_s1 + 8)) & 0x10)) {
            *arg1 = __repair_hoisted;
            (*(s32 *)((s8 *)arg0 + 0x280)) = 0;
            temp_v1 = *(*(s32 **)((s8 *)arg0 + 0x264));
            var_s2 &= ~2;
            (*(s32 **)((s8 *)arg0 + 0x264)) = temp_v1;
            if (temp_v1 == NULL) {
                (*(s32 *)((s8 *)arg0 + 0x26C)) = 0;
            }
        } else {
            goto block_24;
        }
    } else {
        if (temp_s1 != NULL) {
            temp_s0 = func_8006CF10();
            var_v0 = (s32) temp_s1 & -(temp_s0 == func_8006D060());
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            temp_v0 = (*(s32 *)((s8 *)temp_s1 + 8)) & 7;
            switch (temp_v0) {
            case 1:
            case 4:
            case 5:
                break;
            case 3:
                if ((*(s32 *)((s8 *)temp_s1 + 4)) & 0x20) {
                    if (var_s2 & 2) {
                        *arg1 = temp_s1;
                        var_s2 &= ~2;
                        if ((*(s32 *)((s8 *)temp_s1 + 4)) & 1) {
do {
                            *arg2 = temp_s1;
                            var_s2 &= ~1;
} while (0);
}
                        temp_v0_2 = (*(s32 **)((s8 *)(*(s32 **)((s8 *)arg0 + 0x268)) + 0));
                        (*(s32 **)((s8 *)arg0 + 0x268)) = temp_v0_2;
                        if (temp_v0_2 == NULL) {
                            (*(s32 *)((s8 *)arg0 + 0x270)) = 0;
                        }
                    }
                } else if (var_s2 == 3) {
                    *arg2 = temp_s1;
                    *arg1 = temp_s1;
                    temp_v0_3 = (*(s32 **)((s8 *)(*(s32 **)((s8 *)arg0 + 0x268)) + 0));
                    var_s2 = 0;
                    (*(s32 **)((s8 *)arg0 + 0x268)) = temp_v0_3;
                    if (temp_v0_3 == NULL) {
                        (*(s32 *)((s8 *)arg0 + 0x270)) = 0;
                    }
                }
                break;
            case 2:
            case 6:
            case 7:
                temp_v1_2 = (*(s32 *)((s8 *)temp_s1 + 4));
                if (temp_v1_2 & 2) {
                    if (var_s2 & 2) {
block_24:
                        *arg1 = temp_s1;
                        var_s2 &= ~2;
                    }
                } else if ((temp_v1_2 & 1) && (var_s2 & 1)) {
                    *arg2 = temp_s1;
                    temp_v1_3 = (*(s32 **)((s8 *)(*(s32 **)((s8 *)arg0 + 0x268)) + 0));
                    var_s2 &= ~1;
                    (*(s32 **)((s8 *)arg0 + 0x268)) = temp_v1_3;
                    if (temp_v1_3 == NULL) {
                        (*(s32 *)((s8 *)arg0 + 0x270)) = 0;
                    }
                }
                break;
            }
        }
    }
    if (var_s2 != temp_s6) {
        var_s2 = __scSchedule(arg0, arg1, arg2, var_s2);
    }
    return var_s2;
}
