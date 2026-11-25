/* identical to osViSetMode in Bottom of the 9th (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetMode in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViSetMode in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8005FEF0();
s32 func_8005FF60();
extern void *D_80097E54;

/* Makes `mode` the current VI mode: stores it in the VI context (+8), flags the context for update
 * (+0), and copies the mode's control word (mode+4) into the context at +0xC. Restores the interrupt state. */
void osViSetMode(void *mode)
{
  void *modePtr;
  void **modeSlot;
  char *ctx;
  s32 savedInt;
  void *temp_a1;
  savedInt = func_8005FEF0();
  ctx = (char *) D_80097E54;
  *((void **) (((char *) D_80097E54) + 8)) = mode;
  ;
  modeSlot = (void **) (((char *) D_80097E54) + 8);
  *((s16 *) (ctx + 0)) = 1;
  modePtr = *modeSlot;
  *((s32 *) (ctx + 0xC)) = (s32) (*((s32 *) (((char *) (*modeSlot)) + 4)));
  func_8005FF60(savedInt, modePtr);
}
