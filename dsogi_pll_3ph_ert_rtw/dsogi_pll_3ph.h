/*
 * File: dsogi_pll_3ph.h
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

#ifndef RTW_HEADER_dsogi_pll_3ph_h_
#define RTW_HEADER_dsogi_pll_3ph_h_
#ifndef dsogi_pll_3ph_COMMON_INCLUDES_
#define dsogi_pll_3ph_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* dsogi_pll_3ph_COMMON_INCLUDES_ */

#include "dsogi_pll_3ph_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Probe[2];                     /* '<S34>/Probe' */
} B_dsogi_pll_3ph_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S40>/Integrator' */
  real_T Memory5_PreviousInput;        /* '<S6>/Memory5' */
  real_T Memory1_PreviousInput;        /* '<S8>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S8>/Memory2' */
  real_T Memory3_PreviousInput;        /* '<S8>/Memory3' */
  real_T Memory4_PreviousInput;        /* '<S8>/Memory4' */
  real_T Memory6_PreviousInput;        /* '<S8>/Memory6' */
  real_T Memory8_PreviousInput;        /* '<S8>/Memory8' */
  real_T Memory1_PreviousInput_a;      /* '<S9>/Memory1' */
  real_T Memory2_PreviousInput_d;      /* '<S9>/Memory2' */
  real_T Memory3_PreviousInput_o;      /* '<S9>/Memory3' */
  real_T Memory4_PreviousInput_i;      /* '<S9>/Memory4' */
  real_T Memory6_PreviousInput_n;      /* '<S9>/Memory6' */
  real_T Memory8_PreviousInput_k;      /* '<S9>/Memory8' */
  real_T Memory_PreviousInput;         /* '<S6>/Memory' */
  real_T Memory1_PreviousInput_ab;     /* '<S6>/Memory1' */
  real_T Memory2_PreviousInput_h;      /* '<S6>/Memory2' */
  real_T Memory3_PreviousInput_p;      /* '<S6>/Memory3' */
  real_T Memory4_PreviousInput_c;      /* '<S6>/Memory4' */
  int8_T Integrator_PrevResetState;    /* '<S40>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S40>/Integrator' */
} DW_dsogi_pll_3ph_T;

/* Invariant block signals (default storage) */
typedef struct {
  const boolean_T Compare;             /* '<S37>/Compare' */
} ConstB_dsogi_pll_3ph_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
} ExtU_dsogi_pll_3ph_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T angle;                        /* '<Root>/angle' */
  boolean_T angle1;                    /* '<Root>/angle1' */
} ExtY_dsogi_pll_3ph_T;

/* Real-time Model Data Structure */
struct tag_RTM_dsogi_pll_3ph_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_dsogi_pll_3ph_T dsogi_pll_3ph_B;

/* Block states (default storage) */
extern DW_dsogi_pll_3ph_T dsogi_pll_3ph_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_dsogi_pll_3ph_T dsogi_pll_3ph_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_dsogi_pll_3ph_T dsogi_pll_3ph_Y;
extern const ConstB_dsogi_pll_3ph_T dsogi_pll_3ph_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void dsogi_pll_3ph_initialize(void);
extern void dsogi_pll_3ph_terminate(void);

/* Exported entry point function */
extern void Input3(void);

/* Real-time Model object */
extern RT_MODEL_dsogi_pll_3ph_T *const dsogi_pll_3ph_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S6>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S40>/Saturation' : Eliminated Saturate block
 * Block '<S33>/K' : Eliminated nontunable gain of 1
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
 * '<S1>'   : 'dsogi_pll_3ph/pll_dsogi_system'
 * '<S2>'   : 'dsogi_pll_3ph/pll_dsogi_system/Clark Transform'
 * '<S3>'   : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI'
 * '<S4>'   : 'dsogi_pll_3ph/pll_dsogi_system/Phase Swap'
 * '<S5>'   : 'dsogi_pll_3ph/pll_dsogi_system/SC'
 * '<S6>'   : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco'
 * '<S7>'   : 'dsogi_pll_3ph/pll_dsogi_system/Clark Transform/clark_trafo'
 * '<S8>'   : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha'
 * '<S9>'   : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha1'
 * '<S10>'  : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha/dsogi'
 * '<S11>'  : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha/dsogi/alpha_sogi'
 * '<S12>'  : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha1/Subsystem Reference'
 * '<S13>'  : 'dsogi_pll_3ph/pll_dsogi_system/DSOGI/Dsogi alpha1/Subsystem Reference/alpha_sogi'
 * '<S14>'  : 'dsogi_pll_3ph/pll_dsogi_system/Phase Swap/Subsystem'
 * '<S15>'  : 'dsogi_pll_3ph/pll_dsogi_system/Phase Swap/Subsystem1'
 * '<S16>'  : 'dsogi_pll_3ph/pll_dsogi_system/Phase Swap/Subsystem2'
 * '<S17>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/NSC'
 * '<S18>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/PSC'
 * '<S19>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/sum'
 * '<S20>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/sum1'
 * '<S21>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/NSC/a-b'
 * '<S22>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/NSC/sum'
 * '<S23>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/PSC/a-b1'
 * '<S24>'  : 'dsogi_pll_3ph/pll_dsogi_system/SC/PSC/sum1'
 * '<S25>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/Cos'
 * '<S26>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF'
 * '<S27>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/Sin'
 * '<S28>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/dco'
 * '<S29>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/park_tf'
 * '<S30>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/pi_ctrl'
 * '<S31>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/sum'
 * '<S32>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)'
 * '<S33>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource'
 * '<S34>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Enable//disable time constant'
 * '<S35>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Initialization'
 * '<S36>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Integrator (Discrete or Continuous)'
 * '<S37>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Enable//disable time constant/Compare To Constant'
 * '<S38>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Enable//disable time constant/Compare To Zero'
 * '<S39>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Initialization/Init_u'
 * '<S40>'  : 'dsogi_pll_3ph/pll_dsogi_system/srf_pll_dco/LPF/Low-Pass Filter (Discrete or Continuous)/ReplicaOfSource/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                                 /* RTW_HEADER_dsogi_pll_3ph_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
