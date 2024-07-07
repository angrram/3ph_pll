/*
 * File: dsogi_pll_3ph_top.c
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

#include "dsogi_pll_3ph_top.h"
#define dsogi_pll_3ph_MDLREF_HIDE_CHILD_
#include "dsogi_pll_3ph.h"

/* External inputs (root inport signals with default storage) */
ExtU_dsogi_pll_3ph_top_T dsogi_pll_3ph_top_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_dsogi_pll_3ph_top_T dsogi_pll_3ph_top_Y;

/* Real-time model */
static RT_MODEL_dsogi_pll_3ph_top_T dsogi_pll_3ph_top_M_;
RT_MODEL_dsogi_pll_3ph_top_T *const dsogi_pll_3ph_top_M = &dsogi_pll_3ph_top_M_;

/* Model step function */
void trigger(void)
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/trigger' */

  /* ModelReference generated from: '<Root>/dsogi_pll_3ph_model_top' incorporates:
   *  Inport: '<Root>/va'
   *  Inport: '<Root>/vb'
   *  Inport: '<Root>/vc'
   *  Outport: '<Root>/angle'
   *  Outport: '<Root>/phase_swap '
   *  Outport: '<Root>/wo'
   */
  dsogi_pll_3ph(&dsogi_pll_3ph_top_U.va, &dsogi_pll_3ph_top_U.vb,
                &dsogi_pll_3ph_top_U.vc, &dsogi_pll_3ph_top_Y.angle,
                &dsogi_pll_3ph_top_Y.phase_swap, &dsogi_pll_3ph_top_Y.wo);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/trigger' */
}

/* Model initialize function */
void dsogi_pll_3ph_top_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/dsogi_pll_3ph_model_top' */
  dsogi_pll_3ph_initialize(rtmGetErrorStatusPointer(dsogi_pll_3ph_top_M));

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/trigger' */

  /* SystemInitialize for ModelReference generated from: '<Root>/dsogi_pll_3ph_model_top' incorporates:
   *  Inport: '<Root>/va'
   *  Inport: '<Root>/vb'
   *  Inport: '<Root>/vc'
   *  Outport: '<Root>/angle'
   *  Outport: '<Root>/phase_swap '
   *  Outport: '<Root>/wo'
   */
  dsogi_pll_3ph_Init();

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/trigger' */
}

/* Model terminate function */
void dsogi_pll_3ph_top_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
