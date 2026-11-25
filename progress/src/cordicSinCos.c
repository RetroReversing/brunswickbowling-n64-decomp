/* identical to func_8004A4E0 in CruisnExotica (local match library) (matched), with its names changed by decompdecomp */
/* identical to cordicSinCos in TWINE (local match library) (matched), with its names changed by decompdecomp */
extern s64 func_80057B50(f64);
extern f64 func_80057AC0(s64);
extern s64 D_80097250[];
extern f64 D_8007A0F0, D_8007A0F8;

// CORDIC sin/cos: angle is in radians; writes sin to *sinOut and cos to *cosOut.
/* CORDIC sin/cos: rotates a fixed-point vector by atan steps; writes sin and cos as doubles. */ void cordicSinCos(f64 angle, f64 *sinOut, f64 *cosOut) {
    s64 cosFix = 0x09B74EDA8435E580LL;
    s64 sinFix = 0;
    s64 angleLeft = func_80057B50(angle * D_8007A0F0);
    s64 nextCos;
    int i;
    for (i = 0; i < 52; i++) {
        if (angleLeft >= 0) {
            nextCos = cosFix - (sinFix >> i);
            sinFix += cosFix >> i;
            angleLeft -= D_80097250[i];
        } else {
            nextCos = cosFix + (sinFix >> i);
            sinFix -= cosFix >> i;
            angleLeft += D_80097250[i];
        }
        cosFix = nextCos;
    }
    { f64 sinValue = func_80057AC0(sinFix);
    f64 outScale = D_8007A0F8;
    *sinOut = sinValue / outScale;
    *cosOut = func_80057AC0(cosFix) / outScale; }
}
