/* identical to func_80035F38 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
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

extern s32 D_800A5A54;
extern void *D_800A5A5C;

typedef struct { int field_0; unsigned char pad_4[64]; int field_44; } __repair_record_var_v1;
void func_8005DE18(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *var_v1;

    var_v1 = D_800A5A5C;
    var_a3 = 0;
    if (var_a3 < D_800A5A54) {
        do {
            var_a3 += 1;
            if (((__repair_record_var_v1*)var_v1)->field_44 == arg0) {
                ((__repair_record_var_v1*)var_v1)->field_0 = (s32) ((((__repair_record_var_v1*)var_v1)->field_0 & arg1) | arg2);
            }
            var_v1 += 0x13C;
        } while (var_a3 < D_800A5A54);
    }
}
