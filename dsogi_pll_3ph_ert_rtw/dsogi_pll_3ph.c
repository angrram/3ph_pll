/*
 * File: dsogi_pll_3ph.c
 *
 * Code generated for Simulink model 'dsogi_pll_3ph'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Jun  2 13:09:45 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "dsogi_pll_3ph.h"
#include "rtwtypes.h"
#include "dsogi_pll_3ph_private.h"
#include <math.h>
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_dsogi_pll_3ph_T dsogi_pll_3ph_B;

/* Block states (default storage) */
DW_dsogi_pll_3ph_T dsogi_pll_3ph_DW;

/* External inputs (root inport signals with default storage) */
ExtU_dsogi_pll_3ph_T dsogi_pll_3ph_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_dsogi_pll_3ph_T dsogi_pll_3ph_Y;

/* Real-time model */
static RT_MODEL_dsogi_pll_3ph_T dsogi_pll_3ph_M_;
RT_MODEL_dsogi_pll_3ph_T *const dsogi_pll_3ph_M = &dsogi_pll_3ph_M_;

/*
 * Output and update for atomic system:
 *    '<S10>/alpha_sogi'
 *    '<S12>/alpha_sogi'
 */
void dsogi_pll_3ph_alpha_sogi(real_T rtu_v_ct_alpha, real_T rtu_v_ct_alpha_k_1,
  real_T rtu_v_ct_alpha_k_2, real_T rtu_vd_sogi_alpha_k_1, real_T
  rtu_vd_sogi_alpha_k_2, real_T rtu_vq_sogi_alpha_k_1, real_T
  rtu_vq_sogi_alpha_k_2, real_T *rty_vd_sogi_alpha, real_T *rty_vq_sogi_alpha)
{
  *rty_vd_sogi_alpha = (((rtu_v_ct_alpha - rtu_v_ct_alpha_k_2) *
    157.07963267948966 - rtu_vd_sogi_alpha_k_1 * -39990.130395598913) -
                        rtu_vd_sogi_alpha_k_2 * 19847.855169521055) /
    20162.014434880031;
  *rty_vq_sogi_alpha = ((((rtu_v_ct_alpha_k_2 + rtu_v_ct_alpha) *
    49348.022005446794 + 98696.044010893587 * rtu_v_ct_alpha_k_1) -
    rtu_vq_sogi_alpha_k_2 * 3.9695710339042109E+8) - rtu_vq_sogi_alpha_k_1 *
                        -7.9980260791197824E+8) / 4.0324028869760066E+8;
}

/*
 * Output and update for atomic system:
 *    '<S17>/a-b'
 *    '<S18>/a-b1'
 */
void dsogi_pll_3ph_ab(real_T rtu_a, real_T rtu_b, real_T *rty_c)
{
  *rty_c = (rtu_a - rtu_b) * 0.5;
}

/*
 * Output and update for atomic system:
 *    '<S17>/sum'
 *    '<S18>/sum1'
 */
void dsogi_pll_3ph_sum(real_T rtu_a, real_T rtu_b, real_T *rty_c)
{
  *rty_c = (rtu_a + rtu_b) * 0.5;
}

/*
 * Output and update for atomic system:
 *    '<S5>/sum'
 *    '<S5>/sum1'
 */
void dsogi_pll_3ph_sum_e(real_T rtu_a, real_T rtu_b, real_T *rty_c)
{
  *rty_c = rtu_a - rtu_b;
}

/* Model step function for TID1 */
void Input3(void)                      /* Explicit Task: Input3 */
{
  real_T rtb_Max;
  real_T rtb_Memory1;
  real_T rtb_Memory1_g;
  real_T rtb_Memory3;
  real_T rtb_Memory3_p;
  real_T rtb_Memory4;
  real_T rtb_Memory4_n;
  real_T rtb_c_b;
  real_T rtb_c_d;
  real_T rtb_c_f;
  real_T rtb_valpha;
  real_T rtb_vbetha;
  real_T rtb_vd_sogi_alpha;
  real_T rtb_vd_sogi_alpha_n;
  real_T rtb_vq_park;
  real_T rtb_vq_sogi_alpha;
  real_T rtb_vq_sogi_alpha_f;
  real_T sin_th;
  real_T x_idx_0;
  boolean_T rtb_LogicalOperator;

  /* RootInportFunctionCallGenerator generated from: '<Root>/Input3' incorporates:
   *  SubSystem: '<Root>/pll_dsogi_system'
   */
  /* Sum: '<S34>/Sum1' incorporates:
   *  Constant: '<S34>/Time constant'
   */
  rtb_Max = 0.0014285714285714286 - dsogi_pll_3ph_B.Probe[0];

  /* Logic: '<S34>/Logical Operator' incorporates:
   *  Constant: '<S34>/Time constant'
   *  Constant: '<S38>/Constant'
   *  RelationalOperator: '<S38>/Compare'
   *  Sum: '<S34>/Sum1'
   */
  rtb_LogicalOperator = ((0.0014285714285714286 - dsogi_pll_3ph_B.Probe[0] <=
    0.0) && dsogi_pll_3ph_ConstB.Compare);

  /* DiscreteIntegrator: '<S40>/Integrator' incorporates:
   *  Memory: '<S6>/Memory5'
   */
  if (dsogi_pll_3ph_DW.Integrator_IC_LOADING != 0) {
    dsogi_pll_3ph_DW.Integrator_DSTATE = dsogi_pll_3ph_DW.Memory5_PreviousInput;
  }

  if (rtb_LogicalOperator || (dsogi_pll_3ph_DW.Integrator_PrevResetState != 0))
  {
    dsogi_pll_3ph_DW.Integrator_DSTATE = dsogi_pll_3ph_DW.Memory5_PreviousInput;
  }

  /* MATLAB Function: '<S2>/clark_trafo' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   */
  rtb_valpha = ((dsogi_pll_3ph_U.Input - 0.5 * dsogi_pll_3ph_U.Input1) - 0.5 *
                dsogi_pll_3ph_U.Input2) * 0.66666666666666663;
  rtb_vbetha = (dsogi_pll_3ph_U.Input1 - dsogi_pll_3ph_U.Input2) *
    0.57735026918962573;

  /* Memory: '<S8>/Memory1' */
  rtb_Memory1 = dsogi_pll_3ph_DW.Memory1_PreviousInput;

  /* Memory: '<S8>/Memory3' */
  rtb_Memory3 = dsogi_pll_3ph_DW.Memory3_PreviousInput;

  /* Memory: '<S8>/Memory4' */
  rtb_Memory4 = dsogi_pll_3ph_DW.Memory4_PreviousInput;

  /* MATLAB Function: '<S10>/alpha_sogi' incorporates:
   *  Memory: '<S8>/Memory1'
   *  Memory: '<S8>/Memory2'
   *  Memory: '<S8>/Memory3'
   *  Memory: '<S8>/Memory4'
   *  Memory: '<S8>/Memory6'
   *  Memory: '<S8>/Memory8'
   */
  dsogi_pll_3ph_alpha_sogi(rtb_valpha, dsogi_pll_3ph_DW.Memory4_PreviousInput,
    dsogi_pll_3ph_DW.Memory6_PreviousInput,
    dsogi_pll_3ph_DW.Memory1_PreviousInput,
    dsogi_pll_3ph_DW.Memory2_PreviousInput,
    dsogi_pll_3ph_DW.Memory3_PreviousInput,
    dsogi_pll_3ph_DW.Memory8_PreviousInput, &rtb_vd_sogi_alpha_n,
    &rtb_vq_sogi_alpha_f);

  /* Memory: '<S9>/Memory1' */
  rtb_Memory1_g = dsogi_pll_3ph_DW.Memory1_PreviousInput_a;

  /* Memory: '<S9>/Memory3' */
  rtb_Memory3_p = dsogi_pll_3ph_DW.Memory3_PreviousInput_o;

  /* Memory: '<S9>/Memory4' */
  rtb_Memory4_n = dsogi_pll_3ph_DW.Memory4_PreviousInput_i;

  /* MATLAB Function: '<S12>/alpha_sogi' incorporates:
   *  Memory: '<S9>/Memory1'
   *  Memory: '<S9>/Memory2'
   *  Memory: '<S9>/Memory3'
   *  Memory: '<S9>/Memory4'
   *  Memory: '<S9>/Memory6'
   *  Memory: '<S9>/Memory8'
   */
  dsogi_pll_3ph_alpha_sogi(rtb_vbetha, dsogi_pll_3ph_DW.Memory4_PreviousInput_i,
    dsogi_pll_3ph_DW.Memory6_PreviousInput_n,
    dsogi_pll_3ph_DW.Memory1_PreviousInput_a,
    dsogi_pll_3ph_DW.Memory2_PreviousInput_d,
    dsogi_pll_3ph_DW.Memory3_PreviousInput_o,
    dsogi_pll_3ph_DW.Memory8_PreviousInput_k, &rtb_vd_sogi_alpha,
    &rtb_vq_sogi_alpha);

  /* MATLAB Function: '<S18>/a-b1' */
  dsogi_pll_3ph_ab(rtb_vd_sogi_alpha_n, rtb_vq_sogi_alpha, &rtb_c_d);

  /* MATLAB Function: '<S18>/sum1' */
  dsogi_pll_3ph_sum(rtb_vq_sogi_alpha_f, rtb_vd_sogi_alpha, &rtb_Max);

  /* MATLAB Function: '<S6>/park_tf' incorporates:
   *  Trigonometry: '<S25>/ReplicaOfSource'
   *  Trigonometry: '<S27>/ReplicaOfSource'
   */
  rtb_vq_park = sin(dsogi_pll_3ph_Y.angle) * rtb_Max + cos(dsogi_pll_3ph_Y.angle)
    * rtb_c_d;

  /* Outport: '<Root>/angle1' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Logic: '<S14>/AND'
   *  Logic: '<S15>/AND'
   *  Logic: '<S16>/AND'
   *  Logic: '<S4>/AND'
   *  RelationalOperator: '<S14>/Equal'
   *  RelationalOperator: '<S14>/Equal1'
   *  RelationalOperator: '<S15>/Equal'
   *  RelationalOperator: '<S15>/Equal1'
   *  RelationalOperator: '<S16>/Equal'
   *  RelationalOperator: '<S16>/Equal1'
   */
  dsogi_pll_3ph_Y.angle1 = ((rtb_vq_park <= 0.1) && (rtb_vq_park >= -0.1) &&
    ((rtb_Max <= 0.1) && (rtb_Max >= -0.1)) && ((rtb_c_d <= 0.1) && (rtb_c_d >=
    -0.1)));

  /* MATLAB Function: '<S6>/pi_ctrl' incorporates:
   *  Memory: '<S6>/Memory'
   *  Memory: '<S6>/Memory1'
   */
  dsogi_pll_3ph_DW.Memory1_PreviousInput_ab += rtb_vq_park * 634.66518254339269
    + dsogi_pll_3ph_DW.Memory_PreviousInput * -634.66508354339271;

  /* MATLAB Function: '<S6>/dco' incorporates:
   *  Constant: '<S6>/Constant'
   *  MATLAB Function: '<S6>/sum'
   *  Memory: '<S6>/Memory2'
   *  Memory: '<S6>/Memory3'
   */
  x_idx_0 = (dsogi_pll_3ph_DW.Memory1_PreviousInput_ab + 314.15926535897933) *
    dsogi_pll_3ph_DW.Memory2_PreviousInput_h * 0.0001 +
    dsogi_pll_3ph_DW.Memory3_PreviousInput_p;
  if (x_idx_0 < -1.0) {
    sin_th = -1.0;
  } else if (rtIsNaN(x_idx_0)) {
    sin_th = -1.0;
  } else {
    sin_th = x_idx_0;
  }

  x_idx_0 = dsogi_pll_3ph_DW.Memory2_PreviousInput_h -
    (dsogi_pll_3ph_DW.Memory1_PreviousInput_ab + 314.15926535897933) *
    dsogi_pll_3ph_DW.Memory3_PreviousInput_p * 0.0001;
  if (x_idx_0 < -1.0) {
    x_idx_0 = -1.0;
  } else if (rtIsNaN(x_idx_0)) {
    x_idx_0 = -1.0;
  }

  if (sin_th > 1.0) {
    sin_th = 1.0;
  }

  /* Outport: '<Root>/angle' incorporates:
   *  Constant: '<S6>/Constant'
   *  MATLAB Function: '<S6>/dco'
   *  MATLAB Function: '<S6>/sum'
   *  Memory: '<S6>/Memory4'
   */
  dsogi_pll_3ph_Y.angle = (dsogi_pll_3ph_DW.Memory1_PreviousInput_ab +
    314.15926535897933) * 0.0001 + dsogi_pll_3ph_DW.Memory4_PreviousInput_c;

  /* MATLAB Function: '<S6>/dco' incorporates:
   *  Memory: '<S6>/Memory3'
   */
  if ((dsogi_pll_3ph_DW.Memory3_PreviousInput_p >= 0.0) && (sin_th <= 0.0)) {
    /* Outport: '<Root>/angle' */
    dsogi_pll_3ph_Y.angle = -3.1415926535897931;
  }

  /* MATLAB Function: '<S17>/a-b' */
  dsogi_pll_3ph_ab(rtb_vd_sogi_alpha, rtb_vq_sogi_alpha_f, &rtb_c_f);

  /* MATLAB Function: '<S5>/sum1' */
  dsogi_pll_3ph_sum_e(rtb_Max, rtb_c_f, &rtb_c_b);

  /* MATLAB Function: '<S17>/sum' */
  dsogi_pll_3ph_sum(rtb_vd_sogi_alpha_n, rtb_vq_sogi_alpha, &rtb_Max);

  /* MATLAB Function: '<S5>/sum' */
  dsogi_pll_3ph_sum_e(rtb_c_d, rtb_Max, &rtb_c_f);

  /* Sum: '<S33>/Sum1' incorporates:
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Memory: '<S6>/Memory5'
   */
  rtb_Max = dsogi_pll_3ph_DW.Memory5_PreviousInput -
    dsogi_pll_3ph_DW.Integrator_DSTATE;

  /* Update for Memory: '<S6>/Memory5' incorporates:
   *  Constant: '<S6>/Constant'
   *  MATLAB Function: '<S6>/sum'
   */
  dsogi_pll_3ph_DW.Memory5_PreviousInput =
    dsogi_pll_3ph_DW.Memory1_PreviousInput_ab + 314.15926535897933;

  /* Update for DiscreteIntegrator: '<S40>/Integrator' incorporates:
   *  Constant: '<S34>/Time constant'
   *  MinMax: '<S34>/Max'
   *  Product: '<S33>/1//T'
   */
  dsogi_pll_3ph_DW.Integrator_IC_LOADING = 0U;
  dsogi_pll_3ph_DW.Integrator_DSTATE += 1.0 / fmax(dsogi_pll_3ph_B.Probe[0],
    0.0014285714285714286) * rtb_Max * 0.0001;
  dsogi_pll_3ph_DW.Integrator_PrevResetState = (int8_T)rtb_LogicalOperator;

  /* Update for Memory: '<S8>/Memory1' */
  dsogi_pll_3ph_DW.Memory1_PreviousInput = rtb_vd_sogi_alpha_n;

  /* Update for Memory: '<S8>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput = rtb_Memory1;

  /* Update for Memory: '<S8>/Memory3' */
  dsogi_pll_3ph_DW.Memory3_PreviousInput = rtb_vq_sogi_alpha_f;

  /* Update for Memory: '<S8>/Memory4' */
  dsogi_pll_3ph_DW.Memory4_PreviousInput = rtb_valpha;

  /* Update for Memory: '<S8>/Memory6' */
  dsogi_pll_3ph_DW.Memory6_PreviousInput = rtb_Memory4;

  /* Update for Memory: '<S8>/Memory8' */
  dsogi_pll_3ph_DW.Memory8_PreviousInput = rtb_Memory3;

  /* Update for Memory: '<S9>/Memory1' */
  dsogi_pll_3ph_DW.Memory1_PreviousInput_a = rtb_vd_sogi_alpha;

  /* Update for Memory: '<S9>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput_d = rtb_Memory1_g;

  /* Update for Memory: '<S9>/Memory3' */
  dsogi_pll_3ph_DW.Memory3_PreviousInput_o = rtb_vq_sogi_alpha;

  /* Update for Memory: '<S9>/Memory4' */
  dsogi_pll_3ph_DW.Memory4_PreviousInput_i = rtb_vbetha;

  /* Update for Memory: '<S9>/Memory6' */
  dsogi_pll_3ph_DW.Memory6_PreviousInput_n = rtb_Memory4_n;

  /* Update for Memory: '<S9>/Memory8' */
  dsogi_pll_3ph_DW.Memory8_PreviousInput_k = rtb_Memory3_p;

  /* Update for Memory: '<S6>/Memory' */
  dsogi_pll_3ph_DW.Memory_PreviousInput = rtb_vq_park;

  /* MATLAB Function: '<S6>/dco' */
  if (x_idx_0 > 1.0) {
    /* Update for Memory: '<S6>/Memory2' */
    dsogi_pll_3ph_DW.Memory2_PreviousInput_h = 1.0;
  } else {
    /* Update for Memory: '<S6>/Memory2' */
    dsogi_pll_3ph_DW.Memory2_PreviousInput_h = x_idx_0;
  }

  /* Update for Memory: '<S6>/Memory3' incorporates:
   *  MATLAB Function: '<S6>/dco'
   */
  dsogi_pll_3ph_DW.Memory3_PreviousInput_p = sin_th;

  /* Update for Memory: '<S6>/Memory4' incorporates:
   *  Outport: '<Root>/angle'
   */
  dsogi_pll_3ph_DW.Memory4_PreviousInput_c = dsogi_pll_3ph_Y.angle;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Input3' */
}

/* Model initialize function */
void dsogi_pll_3ph_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input3' incorporates:
   *  SubSystem: '<Root>/pll_dsogi_system'
   */
  /* Start for Probe: '<S34>/Probe' */
  dsogi_pll_3ph_B.Probe[0] = 0.0001;
  dsogi_pll_3ph_B.Probe[1] = 0.0;

  /* InitializeConditions for Memory: '<S6>/Memory5' */
  dsogi_pll_3ph_DW.Memory5_PreviousInput = 314.15926535897933;

  /* InitializeConditions for DiscreteIntegrator: '<S40>/Integrator' */
  dsogi_pll_3ph_DW.Integrator_IC_LOADING = 1U;

  /* InitializeConditions for Memory: '<S6>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput_h = 0.99;

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input3' */
}

/* Model terminate function */
void dsogi_pll_3ph_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
