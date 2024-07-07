/*
 * File: rt_nonfinite.c
 *
 * Code generated for Simulink model 'dsogi_pll_3ph'.
 *
 * Model version                  : 1.106
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jul  2 18:47:56 2024
 */

#include "rtGetNaN.h"
#include "rtGetInf.h"
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include "rt_nonfinite.h"
#define NumBitsPerChar                 8U

double rtInf;
double rtMinusInf;
double rtNaN;
float rtInfF;
float rtMinusInfF;
float rtNaNF;

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
bool rtIsInf(double value)
{
  return (bool)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
bool rtIsInfF(float value)
{
  return (bool)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
bool rtIsNaN(double value)
{
  bool result = (bool) 0;
  size_t bitsPerReal = sizeof(double) * (NumBitsPerChar);
  if (bitsPerReal == 32U) {
    result = rtIsNaNF((float)value);
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      double fltVal;
    } tmpVal;

    tmpVal.fltVal = value;
    result = (bool)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF00000 &&
                    ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
                     (tmpVal.bitVal.words.wordL != 0) ));
  }

  return result;
}

/* Test if single-precision value is not a number */
bool rtIsNaNF(float value)
{
  IEEESingle tmp;
  tmp.wordL.wordLreal = value;
  return (bool)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
