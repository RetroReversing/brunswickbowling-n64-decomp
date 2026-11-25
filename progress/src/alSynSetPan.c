/* identical to alSynSetPan in Glover (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800587D0 in GEX: ENTER THE GECKO (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in Gex 3 Deep Cover Gec (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80018650 in Forsaken (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in FIFA 99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in EARTHWORM JIM 3D (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in DR.MARIO 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in DESTRUCT DERBY (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in CyberTiger (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in Clayfighter SC (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in CHARLIE BLAST'S (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in CARMAGEDDON64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80073B70 in Bust A Move 2 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800A1610 in Bust A Move '99 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in A Bug's Life (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in BLUES BROTHERS 2000 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80048B40 in BATTLEZONE (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in Asteroids Hyper 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to alSynSetPan in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
void *__allocParam();

/* Queues a pan change for a voice. If the voice has a handler and a parameter block can be
 * allocated, the block gets type 0xC, the pan value (low byte), a time of the synth's time
 * (+0x1C) plus the voice object's +0xD8 field, and no next link. The voice's object at +0xC
 * then gets it through its handler (msg 3). */
void alSynSetPan(void *synth, void *voice, s32 pan)
{
  s32 (*handler)(void *, s32, void *);
  s32 time;
  s32 panValue;
  void *param;
  void *obj;
  void *voicePtr;
  void *synthPtr;

  voicePtr = voice;
  handler = *((s32 (**)(void *, s32, void *)) (((char *) voicePtr) + 8));
  synthPtr = synth;
  panValue = pan;
  if (handler != NULL)
  {
    param = __allocParam();
    if (param != NULL)
    {
      handler = *((s32 (**)(void *, s32, void *)) (((char *) voicePtr) + 8));
      time = *((s32 *) (((char *) synthPtr) + 0x1C));
      obj = *((void **) (((char *) handler) + 0xD8));
      handler = (s32 (*)(void *, s32, void *)) 0xC;
      *((s16 *) (((char *) param) + 8)) = 0xC;
      do
      {
#ifdef PORT
        *((s32 *) (((char *) param) + 0xC)) = panValue & 0xFF;
        *((s32 *) (((char *) param) + 0)) = 0;
        time += *((s32 *) (((char *) handler) + 0xD8));
#else
        handler = (s32 (*)(void *, s32, void *)) (panValue & 0xFF);
        do { *((s32 (**)(void *, s32, void *)) (((char *) param) + 0xC)) = handler; *((s32 *) (((char *) param) + 0)) = 0; } while (0);
        time += obj;
#endif
        *((s32 *) (((char *) param) + 4)) = time;
      }
      while (0);
      handler = *((s32 (**)(void *, s32, void *)) (((char *) voicePtr) + 8));
      obj = *((void **) (((char *) handler) + 0xC));
      handler = *((s32 (**)(void *, s32, void *)) (((char *) obj) + 8));
      handler(obj, 3, param);
    }
  }
}
