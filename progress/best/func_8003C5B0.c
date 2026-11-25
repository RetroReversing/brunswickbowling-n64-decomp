extern int D_8008E744;
s32 func_800235F0();
s32 func_80023634();
s32 func_8005978C();
extern char D_80078818[];
extern char D_8008E740[];
extern char D_8009C0E0[];
void func_8003C5B0(void *arg0)
{
  volatile unsigned char pad;
  func_8005978C(D_8009C0E0, D_80078818);
  func_800235F0(arg0);
  *((s32 *) (((char *) arg0) + 0x54)) = 0;
  func_80023634(arg0, D_8009C0E0, D_8008E740, 2);
  *((s32 *) (((char *) arg0) + 0x58)) = 0;
  *((s32 *) (((char *) arg0) + 0x5C)) = 0;
}

