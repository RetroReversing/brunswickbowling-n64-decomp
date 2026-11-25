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

extern M2C_UNK D_80075A20;
extern M2C_UNK D_80077178;

void * func_8002FD74(void *arg0) {
    void *temp_v1;

    do { M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_80075A20; } while (0);
    do { temp_v1 = arg0 + 8; } while (0);
    M2C_FIELD(temp_v1, void **, 4) = temp_v1;
    M2C_FIELD(arg0, void **, 8) = temp_v1;
    do { do { do { M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_80077178; } while (0); } while (0); } while (0);
    do { do { do { M2C_FIELD(arg0, s32 *, 0x1C) = 0; } while (0); } while (0); } while (0);
    return arg0;
}
