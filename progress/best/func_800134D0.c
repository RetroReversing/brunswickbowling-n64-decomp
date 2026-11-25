/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
extern int D_800891EC;
s32 func_8003792C();
extern f32 D_80073D64;
extern char D_800891E8[];
extern char D_8008C864[];
extern char D_8008C87C[];
extern char D_8008C894[];
extern char D_8008C8AC[];
extern char D_8008C8C4[];
extern char D_8008C8DC[];

void func_800134D0(void) {
    f32 temp_fs0;

    temp_fs0 = D_80073D64;
    func_8003792C(D_8008C864, (s32) ((f32) D_800891EC * temp_fs0));
    func_8003792C(D_8008C87C, (s32) ((f32) D_800891EC * temp_fs0));
    func_8003792C(D_8008C894, (s32) ((f32) D_800891EC * temp_fs0));
    func_8003792C(D_8008C8C4, (s32) ((f32) D_800891EC * temp_fs0));
    func_8003792C(D_8008C8AC, (s32) ((f32) D_800891EC * temp_fs0));
    func_8003792C(D_8008C8DC, (s32) ((f32) D_800891EC * temp_fs0));
}
