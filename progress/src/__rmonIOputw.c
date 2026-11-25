/* identical to __rmonIOputw in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
extern s32 func_8005FEB0(void*, s32, s32);
/* Same-name source lead: __rmonIOputw in 1080 SNOWBOARDING; verified ROM source. Destination verification required. */
void __rmonIOputw(s32 arg0) {
    s32 totalRecv;
    char* p;
    totalRecv = 0;
    p = (char*)&arg0;
    do {
        register s32 recv = func_8005FEB0(p + totalRecv, 4 - totalRecv, 8);
        totalRecv += recv;
    } while (totalRecv < 4);
}
