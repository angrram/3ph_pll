/*
 * File: dsogi_pll_3ph_top.h
 *
 * Code generated for Simulink model 'dsogi_pll_3ph_top'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jul  2 20:51:58 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dsogi_pll_3ph_top_h_
#define RTW_HEADER_dsogi_pll_3ph_top_h_
#ifndef dsogi_pll_3ph_top_COMMON_INCLUDES_
#define dsogi_pll_3ph_top_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "complex_types.h"
#endif                                 /* dsogi_pll_3ph_top_COMMON_INCLUDES_ */

#include <stddef.h>
#include "dsogi_pll_3ph_top_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char **)(&((rtm)->errorStatus)))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  double va;                           /* '<Root>/va' */
  double vb;                           /* '<Root>/vb' */
  double vc;                           /* '<Root>/vc' */
} ExtU_dsogi_pll_3ph_top_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  double angle;                        /* '<Root>/angle' */
  bool phase_swap;                     /* '<Root>/phase_swap ' */
  double wo;                           /* '<Root>/wo' */
} ExtY_dsogi_pll_3ph_top_T;

/* Real-time Model Data Structure */
struct tag_RTM_dsogi_pll_3ph_top_T {
  const char *errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_dsogi_pll_3ph_top_T dsogi_pll_3ph_top_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_dsogi_pll_3ph_top_T dsogi_pll_3ph_top_Y;

/* Model entry point functions */
extern void dsogi_pll_3ph_top_initialize(void);
extern void dsogi_pll_3ph_top_terminate(void);

/* Exported entry point function */
extern void trigger(void);

/* Real-time Model object */
extern RT_MODEL_dsogi_pll_3ph_top_T *const dsogi_pll_3ph_top_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dsogi_pll_3ph_top'
 */
#endif                                 /* RTW_HEADER_dsogi_pll_3ph_top_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
