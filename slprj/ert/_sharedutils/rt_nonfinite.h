/*
 * File: rt_nonfinite.h
 *
 * Code generated for Simulink model 'dsogi_pll_3ph'.
 *
 * Model version                  : 1.106
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jul  2 18:47:56 2024
 */

#ifndef RTW_HEADER_rt_nonfinite_h_
#define RTW_HEADER_rt_nonfinite_h_
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#define NOT_USING_NONFINITE_LITERALS   1

extern double rtInf;
extern double rtMinusInf;
extern double rtNaN;
extern float rtInfF;
extern float rtMinusInfF;
extern float rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern bool rtIsInf(double value);
extern bool rtIsInfF(float value);
extern bool rtIsNaN(double value);
extern bool rtIsNaNF(float value);
typedef struct {
  struct {
    uint32_t wordH;
    uint32_t wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_t wordL;
    uint32_t wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    float wordLreal;
    uint32_t wordLuint;
  } wordL;
} IEEESingle;

#endif                                 /* RTW_HEADER_rt_nonfinite_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
