/* adapted from similar verified C in formatFloatExp in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern void func_80057FA0(void *, void *, s32);
extern u8 D_80097476;
extern s8 D_8009EDD0[];

/* Formats a fixed-point value as "d.ddd<E><sign>dd" into dst: the first digit, a
   point, the remaining fraction digits, and a signed exponent. Trailing zeros and a
   bare point are dropped unless the global trim flag is clear. */
void func_800583CC(u8 *digits, s32 digitCount, s32 exponent, s8 *dst)
{
    s32 fracLen;
    s32 expAbs;
    s8 *cursor;
    u8 *srcDigits;
    u8 first;
    fracLen = digitCount - 1;
    expAbs = exponent;
    cursor = dst;
    srcDigits = digits;
    first = *srcDigits;
    *cursor = first;
    cursor++;
    *cursor = '.';
    cursor++;
    srcDigits++;
    func_80057FA0(cursor, srcDigits, fracLen);
    cursor += fracLen;
    if (D_8009EDD0[0x6b24] == 0) {
        if (cursor[-1] == '0') {
            do { cursor--; } while (cursor[-1] == '0');
        }
        cursor -= (cursor[-1] == '.');
    }
    *cursor = D_80097476;
    cursor++;
    if (expAbs < 0) { expAbs = -expAbs; *cursor = '-'; }
    else *cursor = '+';
    cursor++;
    if (expAbs >= 100) {
        *cursor++ = expAbs / 100 + '0';
        expAbs %= 100;
    }
    *cursor++ = expAbs / 10 + '0';
    {
        s32 rem = expAbs % 10;
        expAbs = rem;
        cursor[0] = expAbs + '0';
        cursor[1] = 0;
    }
}
