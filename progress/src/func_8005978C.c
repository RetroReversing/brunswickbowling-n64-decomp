/* adapted from similar verified C in format_to_buffer in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern char D_8009EDD0[];
#ifdef PORT
s32 func_80058AF0(char *, const char *, va_list);
#else
s32 func_80058AF0(char *, s32, s32 *);
#endif
/* sprintf-style formatter: writes the formatted text into dst through the shared print state, then NUL-terminates it. */
void func_8005978C(char *dst, const char *fmt, ...) {
    /* print state: remaining-count = -1 (unbounded), buffer start and cursor = dst */
    *(s32 *)(D_8009EDD0+0x6B10)=-1;
    *(char **)(D_8009EDD0+0x6B1C)=dst;
    *(char **)(D_8009EDD0+0x6B18)=dst;
#ifdef PORT
    {
        va_list ap;
        va_start(ap, fmt);
        dst+=func_80058AF0(dst,fmt,ap);
        va_end(ap);
    }
#else
    {
        s32 *ap;
        ap=(s32 *)__builtin_next_arg(fmt);
        dst+=func_80058AF0(dst,(s32)fmt,ap);
    }
#endif
    *dst=0;
}
