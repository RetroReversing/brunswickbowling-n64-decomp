/* identical to func_80049F90 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800BBA10 in ALL STAR TENNIS '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to cordicAtanVectoring in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* CORDIC vectoring-mode arctangent: drives y toward zero and accumulates the angle in z. */
extern s64 D_80097250[]; extern f64 D_80079F30; extern f64 func_80057AC0(s64);
void cordicAtanVectoring(s64 xin, s64 yin, f64 *out) {
    s64 x = xin, z = 0, next;
    s32 i = 0;
    do {
        if (yin >= 0) {
            next = x + (yin >> i);
            yin -= x >> i;
            z += D_80097250[i];
        } else {
            next = x - (yin >> i);
            yin += x >> i;
            z -= D_80097250[i];
        }
        x = next;
        i++;
    } while (i < 52);
    *out = func_80057AC0(z) / D_80079F30;
}
