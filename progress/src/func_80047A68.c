/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (((struct { __typeof__(*(type_ptr)0) v; } *)((s8 *)(expr) + (offset)))->v)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_80038BD8(void *);                      /* extern */
M2C_UNK func_80047B44(void *);                      /* extern */
M2C_UNK func_80057FA0(s32, s32, s32);               /* extern */
extern s32 *D_80095B10;
extern s32 D_80095B14;

typedef struct { unsigned char pad[200]; void * value; } __repair_field_C8;
void func_80047A68(void *arg0) {
    u32 var_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    var_a2 = 0;
    M2C_FIELD(((__repair_field_C8 *)arg0)->value, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0xC4);
    D_80095B14 = *D_80095B10;
    for (var_a2 = 0; var_a2 < (u32) M2C_FIELD(((__repair_field_C8 *)arg0)->value, u32 *, 4); var_a2 += 1) {

            temp_v1 = (var_a2 * 0x10) + M2C_FIELD(((__repair_field_C8 *)arg0)->value, s32 *, 0x20);
            M2C_FIELD(temp_v1, u16 *, 6) = (u16) (M2C_FIELD(temp_v1, u16 *, 6) & 0xFFFD);
}
    temp_v0 = ((__repair_field_C8 *)arg0)->value;
    func_80057FA0(D_80095B14, M2C_FIELD(temp_v0, s32 *, 0x20), M2C_FIELD(temp_v0, u32 *, 4) * 0x10);
    func_80038BD8(((__repair_field_C8 *)arg0)->value);
    func_80047B44(arg0);
    temp_v0_2 = ((__repair_field_C8 *)arg0)->value;
    func_80057FA0(D_80095B14, M2C_FIELD(temp_v0_2, s32 *, 0x20), M2C_FIELD(temp_v0_2, u32 *, 4) * 0x10);
    func_80038BD8(((__repair_field_C8 *)arg0)->value);
}
