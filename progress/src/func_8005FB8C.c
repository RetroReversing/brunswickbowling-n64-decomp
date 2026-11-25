/* identical to func_8006DD6C in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80090D28 in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
void func_8005FB8C(u8 *arg0, u8 *arg1, s32 arg2) {
    if (arg1 < arg0) {
        arg0 += arg2;
        arg1 += arg2;
        while (--arg2 != -1) {
            *--arg0 = *--arg1;
        }
    } else {
        while (--arg2 != -1) {
            *arg0++ = *arg1++;
        }
    }
}

