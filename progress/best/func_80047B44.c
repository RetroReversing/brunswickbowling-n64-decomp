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

s32 func_80038BF4(void *, s32, s32, s32 *, M2C_UNK *); /* extern */
extern s32 D_80095B14;

s32 func_80047B44(void *arg0) {
    s32 *__base_D_80095B14;
    s32 sp18;
    M2C_UNK sp1C;
    s32 temp_a0;
    s32 temp_a0_2;
    
    u16 temp_v1;
    u32 var_a2;
    union { void * pointer; s32 value; } __repair_phase_storage;
    
    void *temp_v0_2;
    void *temp_v1_2;

    
    for (var_a2 = 0; var_a2 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), u32 *, 4); var_a2 += 1) {

            temp_a0 = var_a2 * 0x10;
            __repair_phase_storage.pointer = temp_a0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x20);
            temp_v1 = M2C_FIELD(__repair_phase_storage.pointer, u16 *, 6);
            if (temp_v1 & 2) {
                M2C_FIELD(__repair_phase_storage.pointer, u16 *, 6) = (u16) (temp_v1 & 0xFFFD);
                __base_D_80095B14 = &D_80095B14;
                temp_v1_2 = temp_a0 + (*__base_D_80095B14);
                __repair_phase_storage.pointer = temp_a0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x20);
                do { M2C_FIELD(temp_v1_2, s32 *, 0) = (s32) M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0); } while (0);
                M2C_FIELD(temp_v1_2, s16 *, 4) = (s16) M2C_FIELD(__repair_phase_storage.pointer, s16 *, 4);
            }
}
    __repair_phase_storage.value = func_80038BF4(M2C_FIELD(arg0, void **, 0xC8), (*__base_D_80095B14), M2C_FIELD(M2C_FIELD(arg0, void **, 0xC8), s32 *, 0x18), &sp18, &sp1C) == 0;
    if (sp18 != 0) {
        temp_v0_2 = M2C_FIELD(arg0, void **, 0xC8);
        temp_a0_2 = M2C_FIELD(temp_v0_2, s32 *, 0x20);
        M2C_FIELD(temp_v0_2, s32 *, 0x20) = (s32) (*__base_D_80095B14);
        (*__base_D_80095B14) = temp_a0_2;
    }
    return __repair_phase_storage.value;
}
