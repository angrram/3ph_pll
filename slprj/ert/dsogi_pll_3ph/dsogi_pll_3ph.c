/*
 * File: dsogi_pll_3ph.c
 *
 * Code generated for Simulink model 'dsogi_pll_3ph'.
 *
 * Model version                  : 1.106
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Jul  2 20:51:47 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "dsogi_pll_3ph.h"
#include <stdbool.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "dsogi_pll_3ph_private.h"

MdlrefDW_dsogi_pll_3ph_T dsogi_pll_3ph_MdlrefDW;

/* Block signals (default storage) */
B_dsogi_pll_3ph_c_T dsogi_pll_3ph_B;

/* Block states (default storage) */
DW_dsogi_pll_3ph_f_T dsogi_pll_3ph_DW;

/*
 * Output and update for atomic system:
 *    '<S9>/alpha_sogi'
 *    '<S11>/alpha_sogi'
 */
void dsogi_pll_3ph_alpha_sogi(double rtu_v_ct_alpha, double rtu_v_ct_alpha_k_1,
  double rtu_v_ct_alpha_k_2, double rtu_vd_sogi_alpha_k_1, double
  rtu_vd_sogi_alpha_k_2, double rtu_vq_sogi_alpha_k_1, double
  rtu_vq_sogi_alpha_k_2, double rtu_wolp, double *rty_vd_sogi_alpha, double
  *rty_vq_sogi_alpha)
{
  double tmp;
  double tmp_0;
  tmp = 5.0E-5 * rtu_wolp * rtu_wolp;
  *rty_vd_sogi_alpha = ((0.5 * rtu_wolp * (rtu_v_ct_alpha - rtu_v_ct_alpha_k_2)
    - (0.0001 * rtu_wolp * rtu_wolp - 40000.0) * rtu_vd_sogi_alpha_k_1) -
                        ((20000.0 - 0.5 * rtu_wolp) + tmp) *
                        rtu_vd_sogi_alpha_k_2) / ((0.5 * rtu_wolp + 20000.0) +
    tmp);
  tmp = 0.5 * rtu_wolp * rtu_wolp;
  tmp_0 = rtu_wolp * rtu_wolp;
  *rty_vq_sogi_alpha = (((tmp * 2.0 * rtu_v_ct_alpha_k_1 + (rtu_v_ct_alpha_k_2 +
    rtu_v_ct_alpha) * tmp) - ((4.0E+8 - 10000.0 * rtu_wolp) + tmp_0) *
    rtu_vq_sogi_alpha_k_2) - (2.0 * rtu_wolp * rtu_wolp - 8.0E+8) *
                        rtu_vq_sogi_alpha_k_1) / ((10000.0 * rtu_wolp + 4.0E+8)
    + tmp_0);
}

/*
 * Output and update for atomic system:
 *    '<S16>/a-b'
 *    '<S17>/a-b1'
 */
void dsogi_pll_3ph_ab(double rtu_a, double rtu_b, double *rty_c)
{
  *rty_c = (rtu_a - rtu_b) * 0.5;
}

/*
 * Output and update for atomic system:
 *    '<S16>/sum'
 *    '<S17>/sum1'
 */
void dsogi_pll_3ph_sum(double rtu_a, double rtu_b, double *rty_c)
{
  *rty_c = (rtu_a + rtu_b) * 0.5;
}

/*
 * Output and update for atomic system:
 *    '<S4>/sum'
 *    '<S4>/sum1'
 */
void dsogi_pll_3ph_sum_l(double rtu_a, double rtu_b, double *rty_c)
{
  *rty_c = rtu_a - rtu_b;
}

/* System initialize for referenced model: 'dsogi_pll_3ph' */
void dsogi_pll_3ph_Init(void)
{
  /* InitializeConditions for Memory: '<S5>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput_g = 0.99;
}

/* Output and update for referenced model: 'dsogi_pll_3ph' */
void dsogi_pll_3ph(const double *rtu_va, const double *rtu_vb, const double
                   *rtu_vc, double *rty_angle, bool *rty_phase_swap, double
                   *rty_wo)
{
  double rtb_c;
  double rtb_c_d;
  double rtb_c_l;
  double rtb_c_og;
  double rtb_vq_park;
  double x_idx_0;

  /* MATLAB Function: '<S1>/clark_trafo' */
  dsogi_pll_3ph_B.valpha = ((*rtu_va - 0.5 * *rtu_vb) - 0.5 * *rtu_vc) *
    0.66666666666666663;
  dsogi_pll_3ph_B.vbetha = (*rtu_vb - *rtu_vc) * 0.57735026918962573;

  /* Memory: '<S7>/Memory1' */
  dsogi_pll_3ph_B.Memory1 = dsogi_pll_3ph_DW.Memory1_PreviousInput;

  /* Memory: '<S7>/Memory3' */
  dsogi_pll_3ph_B.Memory3 = dsogi_pll_3ph_DW.Memory3_PreviousInput;

  /* Memory: '<S7>/Memory4' */
  dsogi_pll_3ph_B.Memory4 = dsogi_pll_3ph_DW.Memory4_PreviousInput;

  /* MATLAB Function: '<S9>/alpha_sogi' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Memory: '<S7>/Memory1'
   *  Memory: '<S7>/Memory2'
   *  Memory: '<S7>/Memory3'
   *  Memory: '<S7>/Memory4'
   *  Memory: '<S7>/Memory6'
   *  Memory: '<S7>/Memory8'
   */
  dsogi_pll_3ph_alpha_sogi(dsogi_pll_3ph_B.valpha,
    dsogi_pll_3ph_DW.Memory4_PreviousInput,
    dsogi_pll_3ph_DW.Memory6_PreviousInput,
    dsogi_pll_3ph_DW.Memory1_PreviousInput,
    dsogi_pll_3ph_DW.Memory2_PreviousInput,
    dsogi_pll_3ph_DW.Memory3_PreviousInput,
    dsogi_pll_3ph_DW.Memory8_PreviousInput, 314.15926535897933,
    &dsogi_pll_3ph_B.vd_sogi_alpha_o, &dsogi_pll_3ph_B.vq_sogi_alpha_o);

  /* Memory: '<S8>/Memory1' */
  dsogi_pll_3ph_B.Memory1_f = dsogi_pll_3ph_DW.Memory1_PreviousInput_h;

  /* Memory: '<S8>/Memory3' */
  dsogi_pll_3ph_B.Memory3_a = dsogi_pll_3ph_DW.Memory3_PreviousInput_k;

  /* Memory: '<S8>/Memory4' */
  dsogi_pll_3ph_B.Memory4_i = dsogi_pll_3ph_DW.Memory4_PreviousInput_e;

  /* MATLAB Function: '<S11>/alpha_sogi' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Memory: '<S8>/Memory1'
   *  Memory: '<S8>/Memory2'
   *  Memory: '<S8>/Memory3'
   *  Memory: '<S8>/Memory4'
   *  Memory: '<S8>/Memory6'
   *  Memory: '<S8>/Memory8'
   */
  dsogi_pll_3ph_alpha_sogi(dsogi_pll_3ph_B.vbetha,
    dsogi_pll_3ph_DW.Memory4_PreviousInput_e,
    dsogi_pll_3ph_DW.Memory6_PreviousInput_h,
    dsogi_pll_3ph_DW.Memory1_PreviousInput_h,
    dsogi_pll_3ph_DW.Memory2_PreviousInput_o,
    dsogi_pll_3ph_DW.Memory3_PreviousInput_k,
    dsogi_pll_3ph_DW.Memory8_PreviousInput_j, 314.15926535897933,
    &dsogi_pll_3ph_B.vd_sogi_alpha, &dsogi_pll_3ph_B.vq_sogi_alpha);

  /* MATLAB Function: '<S17>/a-b1' */
  dsogi_pll_3ph_ab(dsogi_pll_3ph_B.vd_sogi_alpha_o,
                   dsogi_pll_3ph_B.vq_sogi_alpha, &rtb_c_og);

  /* MATLAB Function: '<S17>/sum1' */
  dsogi_pll_3ph_sum(dsogi_pll_3ph_B.vq_sogi_alpha_o,
                    dsogi_pll_3ph_B.vd_sogi_alpha, &rtb_c_l);

  /* MATLAB Function: '<S5>/park_tf' incorporates:
   *  Delay: '<S5>/Delay'
   *  Trigonometry: '<S5>/ReplicaOfSource'
   *  Trigonometry: '<S5>/ReplicaOfSource1'
   */
  rtb_vq_park = sin(dsogi_pll_3ph_DW.Delay_DSTATE) * rtb_c_l + cos
    (dsogi_pll_3ph_DW.Delay_DSTATE) * rtb_c_og;

  /* Logic: '<S3>/AND' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Logic: '<S13>/AND'
   *  Logic: '<S14>/AND'
   *  Logic: '<S15>/AND'
   *  RelationalOperator: '<S13>/Equal'
   *  RelationalOperator: '<S13>/Equal1'
   *  RelationalOperator: '<S14>/Equal'
   *  RelationalOperator: '<S14>/Equal1'
   *  RelationalOperator: '<S15>/Equal'
   *  RelationalOperator: '<S15>/Equal1'
   */
  *rty_phase_swap = ((rtb_vq_park <= 0.1) && (rtb_vq_park >= -0.1) && ((rtb_c_l <=
    0.1) && (rtb_c_l >= -0.1)) && ((rtb_c_og <= 0.1) && (rtb_c_og >= -0.1)));

  /* MATLAB Function: '<S5>/pi_ctrl' incorporates:
   *  Memory: '<S5>/Memory'
   *  Memory: '<S5>/Memory1'
   */
  dsogi_pll_3ph_DW.Memory1_PreviousInput_g += rtb_vq_park * 634.66518254339269 +
    dsogi_pll_3ph_DW.Memory_PreviousInput * -634.66508354339271;

  /* MATLAB Function: '<S5>/sum' incorporates:
   *  Constant: '<S5>/Constant'
   */
  *rty_wo = dsogi_pll_3ph_DW.Memory1_PreviousInput_g + 314.15926535897933;

  /* MATLAB Function: '<S5>/dco' incorporates:
   *  Memory: '<S5>/Memory2'
   *  Memory: '<S5>/Memory3'
   *  Memory: '<S5>/Memory4'
   */
  x_idx_0 = dsogi_pll_3ph_DW.Memory2_PreviousInput_g * *rty_wo * 0.0001 +
    dsogi_pll_3ph_DW.Memory3_PreviousInput_d;
  if (x_idx_0 < -1.0) {
    dsogi_pll_3ph_B.sin_th = -1.0;
  } else if (rtIsNaN(x_idx_0)) {
    dsogi_pll_3ph_B.sin_th = -1.0;
  } else {
    dsogi_pll_3ph_B.sin_th = x_idx_0;
  }

  x_idx_0 = dsogi_pll_3ph_DW.Memory2_PreviousInput_g -
    dsogi_pll_3ph_DW.Memory3_PreviousInput_d * *rty_wo * 0.0001;
  if (x_idx_0 < -1.0) {
    x_idx_0 = -1.0;
  } else if (rtIsNaN(x_idx_0)) {
    x_idx_0 = -1.0;
  }

  if (dsogi_pll_3ph_B.sin_th > 1.0) {
    dsogi_pll_3ph_B.sin_th = 1.0;
  }

  *rty_angle = *rty_wo * 0.0001 + dsogi_pll_3ph_DW.Memory4_PreviousInput_p;
  if ((dsogi_pll_3ph_DW.Memory3_PreviousInput_d >= 0.0) &&
      (dsogi_pll_3ph_B.sin_th <= 0.0)) {
    *rty_angle = -3.1415926535897931;
  }

  /* MATLAB Function: '<S16>/a-b' */
  dsogi_pll_3ph_ab(dsogi_pll_3ph_B.vd_sogi_alpha,
                   dsogi_pll_3ph_B.vq_sogi_alpha_o, &rtb_c_d);

  /* MATLAB Function: '<S4>/sum1' */
  dsogi_pll_3ph_sum_l(rtb_c_l, rtb_c_d, &rtb_c);

  /* MATLAB Function: '<S16>/sum' */
  dsogi_pll_3ph_sum(dsogi_pll_3ph_B.vd_sogi_alpha_o,
                    dsogi_pll_3ph_B.vq_sogi_alpha, &rtb_c_l);

  /* MATLAB Function: '<S4>/sum' */
  dsogi_pll_3ph_sum_l(rtb_c_og, rtb_c_l, &rtb_c_d);

  /* Update for Memory: '<S7>/Memory1' */
  dsogi_pll_3ph_DW.Memory1_PreviousInput = dsogi_pll_3ph_B.vd_sogi_alpha_o;

  /* Update for Memory: '<S7>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput = dsogi_pll_3ph_B.Memory1;

  /* Update for Memory: '<S7>/Memory3' */
  dsogi_pll_3ph_DW.Memory3_PreviousInput = dsogi_pll_3ph_B.vq_sogi_alpha_o;

  /* Update for Memory: '<S7>/Memory4' */
  dsogi_pll_3ph_DW.Memory4_PreviousInput = dsogi_pll_3ph_B.valpha;

  /* Update for Memory: '<S7>/Memory6' */
  dsogi_pll_3ph_DW.Memory6_PreviousInput = dsogi_pll_3ph_B.Memory4;

  /* Update for Memory: '<S7>/Memory8' */
  dsogi_pll_3ph_DW.Memory8_PreviousInput = dsogi_pll_3ph_B.Memory3;

  /* Update for Memory: '<S8>/Memory1' */
  dsogi_pll_3ph_DW.Memory1_PreviousInput_h = dsogi_pll_3ph_B.vd_sogi_alpha;

  /* Update for Memory: '<S8>/Memory2' */
  dsogi_pll_3ph_DW.Memory2_PreviousInput_o = dsogi_pll_3ph_B.Memory1_f;

  /* Update for Memory: '<S8>/Memory3' */
  dsogi_pll_3ph_DW.Memory3_PreviousInput_k = dsogi_pll_3ph_B.vq_sogi_alpha;

  /* Update for Memory: '<S8>/Memory4' */
  dsogi_pll_3ph_DW.Memory4_PreviousInput_e = dsogi_pll_3ph_B.vbetha;

  /* Update for Memory: '<S8>/Memory6' */
  dsogi_pll_3ph_DW.Memory6_PreviousInput_h = dsogi_pll_3ph_B.Memory4_i;

  /* Update for Memory: '<S8>/Memory8' */
  dsogi_pll_3ph_DW.Memory8_PreviousInput_j = dsogi_pll_3ph_B.Memory3_a;

  /* Update for Delay: '<S5>/Delay' */
  dsogi_pll_3ph_DW.Delay_DSTATE = *rty_angle;

  /* Update for Memory: '<S5>/Memory' */
  dsogi_pll_3ph_DW.Memory_PreviousInput = rtb_vq_park;

  /* MATLAB Function: '<S5>/dco' */
  if (x_idx_0 > 1.0) {
    /* Update for Memory: '<S5>/Memory2' */
    dsogi_pll_3ph_DW.Memory2_PreviousInput_g = 1.0;
  } else {
    /* Update for Memory: '<S5>/Memory2' */
    dsogi_pll_3ph_DW.Memory2_PreviousInput_g = x_idx_0;
  }

  /* Update for Memory: '<S5>/Memory3' incorporates:
   *  MATLAB Function: '<S5>/dco'
   */
  dsogi_pll_3ph_DW.Memory3_PreviousInput_d = dsogi_pll_3ph_B.sin_th;

  /* Update for Memory: '<S5>/Memory4' */
  dsogi_pll_3ph_DW.Memory4_PreviousInput_p = *rty_angle;
}

/* Model initialize function */
void dsogi_pll_3ph_initialize(const char **rt_errorStatus)
{
  RT_MODEL_dsogi_pll_3ph_T *const dsogi_pll_3ph_M = &(dsogi_pll_3ph_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(double));

  /* initialize error status */
  rtmSetErrorStatusPointer(dsogi_pll_3ph_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
