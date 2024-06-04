/*
 * File: dsogi_pll_3ph_private.h
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

#ifndef RTW_HEADER_dsogi_pll_3ph_private_h_
#define RTW_HEADER_dsogi_pll_3ph_private_h_
#include "rtwtypes.h"
#include "dsogi_pll_3ph_types.h"
#include "dsogi_pll_3ph.h"

extern void dsogi_pll_3ph_alpha_sogi(real_T rtu_v_ct_alpha, real_T
  rtu_v_ct_alpha_k_1, real_T rtu_v_ct_alpha_k_2, real_T rtu_vd_sogi_alpha_k_1,
  real_T rtu_vd_sogi_alpha_k_2, real_T rtu_vq_sogi_alpha_k_1, real_T
  rtu_vq_sogi_alpha_k_2, real_T *rty_vd_sogi_alpha, real_T *rty_vq_sogi_alpha);
extern void dsogi_pll_3ph_ab(real_T rtu_a, real_T rtu_b, real_T *rty_c);
extern void dsogi_pll_3ph_sum(real_T rtu_a, real_T rtu_b, real_T *rty_c);
extern void dsogi_pll_3ph_sum_e(real_T rtu_a, real_T rtu_b, real_T *rty_c);

#endif                                 /* RTW_HEADER_dsogi_pll_3ph_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
