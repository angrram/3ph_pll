/*
 * File: dsogi_pll_3ph.h
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

#ifndef RTW_HEADER_dsogi_pll_3ph_h_
#define RTW_HEADER_dsogi_pll_3ph_h_
#ifndef dsogi_pll_3ph_COMMON_INCLUDES_
#define dsogi_pll_3ph_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "complex_types.h"
#endif                                 /* dsogi_pll_3ph_COMMON_INCLUDES_ */

#include <stddef.h>
#include "dsogi_pll_3ph_types.h"
#include "rt_nonfinite.h"

/* Block signals for model 'dsogi_pll_3ph' */
#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

typedef struct {
  double sin_th;
  double valpha;                       /* '<S1>/clark_trafo' */
  double vbetha;                       /* '<S1>/clark_trafo' */
  double Memory1;                      /* '<S7>/Memory1' */
  double Memory3;                      /* '<S7>/Memory3' */
  double Memory4;                      /* '<S7>/Memory4' */
  double vd_sogi_alpha_o;              /* '<S9>/alpha_sogi' */
  double vq_sogi_alpha_o;              /* '<S9>/alpha_sogi' */
  double Memory1_f;                    /* '<S8>/Memory1' */
  double Memory3_a;                    /* '<S8>/Memory3' */
  double Memory4_i;                    /* '<S8>/Memory4' */
  double vd_sogi_alpha;                /* '<S11>/alpha_sogi' */
  double vq_sogi_alpha;                /* '<S11>/alpha_sogi' */
} B_dsogi_pll_3ph_c_T;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'dsogi_pll_3ph' */
#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

typedef struct {
  double Delay_DSTATE;                 /* '<S5>/Delay' */
  double Memory1_PreviousInput;        /* '<S7>/Memory1' */
  double Memory2_PreviousInput;        /* '<S7>/Memory2' */
  double Memory3_PreviousInput;        /* '<S7>/Memory3' */
  double Memory4_PreviousInput;        /* '<S7>/Memory4' */
  double Memory6_PreviousInput;        /* '<S7>/Memory6' */
  double Memory8_PreviousInput;        /* '<S7>/Memory8' */
  double Memory1_PreviousInput_h;      /* '<S8>/Memory1' */
  double Memory2_PreviousInput_o;      /* '<S8>/Memory2' */
  double Memory3_PreviousInput_k;      /* '<S8>/Memory3' */
  double Memory4_PreviousInput_e;      /* '<S8>/Memory4' */
  double Memory6_PreviousInput_h;      /* '<S8>/Memory6' */
  double Memory8_PreviousInput_j;      /* '<S8>/Memory8' */
  double Memory_PreviousInput;         /* '<S5>/Memory' */
  double Memory1_PreviousInput_g;      /* '<S5>/Memory1' */
  double Memory2_PreviousInput_g;      /* '<S5>/Memory2' */
  double Memory3_PreviousInput_d;      /* '<S5>/Memory3' */
  double Memory4_PreviousInput_p;      /* '<S5>/Memory4' */
} DW_dsogi_pll_3ph_f_T;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_dsogi_pll_3ph_T {
  const char **errorStatus;
};

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_dsogi_pll_3ph_T rtm;
} MdlrefDW_dsogi_pll_3ph_T;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

extern void dsogi_pll_3ph_Init(void);
extern void dsogi_pll_3ph(const double *rtu_va, const double *rtu_vb, const
  double *rtu_vc, double *rty_angle, bool *rty_phase_swap, double *rty_wo);

/* Model reference registration function */
extern void dsogi_pll_3ph_initialize(const char **rt_errorStatus);

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

extern void dsogi_pll_3ph_alpha_sogi(double rtu_v_ct_alpha, double
  rtu_v_ct_alpha_k_1, double rtu_v_ct_alpha_k_2, double rtu_vd_sogi_alpha_k_1,
  double rtu_vd_sogi_alpha_k_2, double rtu_vq_sogi_alpha_k_1, double
  rtu_vq_sogi_alpha_k_2, double rtu_wolp, double *rty_vd_sogi_alpha, double
  *rty_vq_sogi_alpha);
extern void dsogi_pll_3ph_ab(double rtu_a, double rtu_b, double *rty_c);
extern void dsogi_pll_3ph_sum(double rtu_a, double rtu_b, double *rty_c);
extern void dsogi_pll_3ph_sum_l(double rtu_a, double rtu_b, double *rty_c);

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

extern MdlrefDW_dsogi_pll_3ph_T dsogi_pll_3ph_MdlrefDW;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_dsogi_pll_3ph_c_T dsogi_pll_3ph_B;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

#ifndef dsogi_pll_3ph_MDLREF_HIDE_CHILD_

/* Block states (default storage) */
extern DW_dsogi_pll_3ph_f_T dsogi_pll_3ph_DW;

#endif                                 /*dsogi_pll_3ph_MDLREF_HIDE_CHILD_*/

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S5>/Manual Switch' : Eliminated due to constant selection input
 * Block '<S24>/Delay' : Unused code path elimination
 * Block '<S24>/Gain' : Unused code path elimination
 * Block '<S24>/Sum' : Unused code path elimination
 * Block '<S24>/Sum1' : Unused code path elimination
 * Block '<S5>/Memory5' : Unused code path elimination
 */

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
 * '<Root>' : 'dsogi_pll_3ph'
 * '<S1>'   : 'dsogi_pll_3ph/Clark Transform'
 * '<S2>'   : 'dsogi_pll_3ph/DSOGI'
 * '<S3>'   : 'dsogi_pll_3ph/Phase Swap'
 * '<S4>'   : 'dsogi_pll_3ph/SC'
 * '<S5>'   : 'dsogi_pll_3ph/srf_pll_dco'
 * '<S6>'   : 'dsogi_pll_3ph/Clark Transform/clark_trafo'
 * '<S7>'   : 'dsogi_pll_3ph/DSOGI/Dsogi alpha'
 * '<S8>'   : 'dsogi_pll_3ph/DSOGI/Dsogi alpha1'
 * '<S9>'   : 'dsogi_pll_3ph/DSOGI/Dsogi alpha/dsogi'
 * '<S10>'  : 'dsogi_pll_3ph/DSOGI/Dsogi alpha/dsogi/alpha_sogi'
 * '<S11>'  : 'dsogi_pll_3ph/DSOGI/Dsogi alpha1/Subsystem Reference'
 * '<S12>'  : 'dsogi_pll_3ph/DSOGI/Dsogi alpha1/Subsystem Reference/alpha_sogi'
 * '<S13>'  : 'dsogi_pll_3ph/Phase Swap/Subsystem'
 * '<S14>'  : 'dsogi_pll_3ph/Phase Swap/Subsystem1'
 * '<S15>'  : 'dsogi_pll_3ph/Phase Swap/Subsystem2'
 * '<S16>'  : 'dsogi_pll_3ph/SC/NSC'
 * '<S17>'  : 'dsogi_pll_3ph/SC/PSC'
 * '<S18>'  : 'dsogi_pll_3ph/SC/sum'
 * '<S19>'  : 'dsogi_pll_3ph/SC/sum1'
 * '<S20>'  : 'dsogi_pll_3ph/SC/NSC/a-b'
 * '<S21>'  : 'dsogi_pll_3ph/SC/NSC/sum'
 * '<S22>'  : 'dsogi_pll_3ph/SC/PSC/a-b1'
 * '<S23>'  : 'dsogi_pll_3ph/SC/PSC/sum1'
 * '<S24>'  : 'dsogi_pll_3ph/srf_pll_dco/LPF'
 * '<S25>'  : 'dsogi_pll_3ph/srf_pll_dco/dco'
 * '<S26>'  : 'dsogi_pll_3ph/srf_pll_dco/park_tf'
 * '<S27>'  : 'dsogi_pll_3ph/srf_pll_dco/pi_ctrl'
 * '<S28>'  : 'dsogi_pll_3ph/srf_pll_dco/sum'
 */
#endif                                 /* RTW_HEADER_dsogi_pll_3ph_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
