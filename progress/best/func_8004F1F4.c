void func_8004F1F4(void *arg0, char arg1, s32 arg2, u32 arg3, s32 arg4)
{
  *((s16 *) (((char *) arg0) + 0x38)) = (s16) ((arg4 & 1) | (((arg3 >> 2) & 0x3E) | ((((s16) (arg1 << 8)) & (~0x7FF)) | ((arg2 * 8) & 0x7C0))));
}

