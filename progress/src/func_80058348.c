/* adapted from similar verified C in roundDigitString in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* Rounds the decimal digit string buf to len digits. The digit at buf[len] decides it: below
   '5' the string is cut there and value is returned. Otherwise the last kept digit is
   incremented, carrying leftwards through any '9's. If every digit carries, the string
   becomes "10" and value + 1 is returned. */
/* Rounds the decimal digit string digits to keepDigits digits. The digit at digits[keepDigits] decides it: below '5' the string is cut there and intPart is returned. Otherwise the last kept digit is incremented, carrying leftwards through any '9's. If every digit carries, the string becomes "10" and intPart + 1 is returned. */ s32 func_80058348(s8 *digits, s32 intPart, s32 keepDigits)
{
  s8 *cut;
  s8 *cutTail;
  s32 idx;
  s8 digit;
  cut = digits + keepDigits;
  if ((*cut) < 0x35)
  {
    *cut = 0;
    return intPart;
  }
  if (digit)
  {
    cutTail = cut;
    idx = keepDigits - 1;
    *cutTail = 0;
  }
  else
  {
    cutTail = cut;
    idx = keepDigits - 1;
    *cutTail = 0;
  }
  if (idx < 0)
  {
    goto end;
  }
  do
  {
    cut--;
    digit = *cut;
    if (digit != 0x39)
    {
      *cut = digit + 1;
      return intPart;
    }
    *cut = 0x30;
    idx--;
  } while (idx >= 0);
end:
  *cut = 0x31;
  cutTail[0] = 0x30;
  cutTail[1] = 0;
  return intPart + 1;
}
