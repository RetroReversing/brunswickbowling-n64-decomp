/* adapted from similar verified C in formatDigitsToBuffer in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern char D_8009EDD0[];
s32 func_80058348(void *, s32, s32);
s32 func_8005852C(s32, s32, s32, s32 *, s32);

/* Formats a number into a 40-digit buffer: converts it to 20 digits, then either pads the fraction with zeros or
 * rounds the digits and returns the shared result string in D_8009EDD0. */
void *func_80058844(s32 value, s32 ndigits, s32 scale, s32 *decpt, s32 sign)
{
    s8 *digits;
    s32 exponent;
    s32 pad;

#ifdef PORT
    digits = (s8 *)(unsigned long)(u32)func_8005852C(value, ndigits, 0x14, decpt, sign);
#else
    digits = (s8 *) func_8005852C(value, ndigits, 0x14, decpt, sign);
#endif
    exponent = *decpt;
    if (exponent != 0x7FFFFFFF) {
        pad = exponent + scale;
        if (pad >= 0) {
            if (pad < 0x14) {
                *decpt = func_80058348(&D_8009EDD0[0x6B28], exponent, pad);
            } else {
                if (pad >= 0x29) {
                    pad = 0x28;
                }
                pad -= 0x14;
                digits += 0x14;
                if (pad > 0) {
                    do {
                        *digits = 0x30;
                        pad -= 1;
                        digits += 1;
                    } while (pad > 0);
                }
            }
        }
    }
    return &D_8009EDD0[0x6B28];
}
