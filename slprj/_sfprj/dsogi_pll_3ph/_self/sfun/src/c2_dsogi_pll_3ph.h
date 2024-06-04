#ifndef __c2_dsogi_pll_3ph_h__
#define __c2_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc2_dsogi_pll_3phInstanceStruct
#define typedef_SFc2_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_dsogi_pll_3ph;
  uint8_T c2_JITStateAnimation[1];
  uint8_T c2_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c2_emlrtLocationLoggingDataTables[72];
  int32_T c2_IsDebuggerActive;
  int32_T c2_IsSequenceViewerPresent;
  int32_T c2_SequenceViewerOptimization;
  int32_T c2_IsHeatMapPresent;
  void *c2_RuntimeVar;
  emlrtLocationLoggingHistogramType c2_emlrtLocLogHistTables[72];
  boolean_T c2_emlrtLocLogSimulated;
  uint32_T c2_mlFcnLineNumber;
  void *c2_fcnDataPtrs[22];
  char_T *c2_dataNames[22];
  uint32_T c2_numFcnVars;
  uint32_T c2_ssIds[22];
  uint32_T c2_statuses[22];
  void *c2_outMexFcns[22];
  void *c2_inMexFcns[22];
  CovrtStateflowInstance *c2_covrtInstance;
  void *c2_fEmlrtCtx;
  real_T *c2_v_ct_alpha;
  real_T *c2_vd_sogi_alpha;
  real_T *c2_v_ct_alpha_k_1;
  real_T *c2_v_ct_alpha_k_2;
  real_T *c2_vd_sogi_alpha_k_1;
  real_T *c2_vd_sogi_alpha_k_2;
  real_T *c2_vq_sogi_alpha_k_1;
  real_T *c2_vq_sogi_alpha_k_2;
  real_T *c2_wolp;
  real_T *c2_vq_sogi_alpha;
} SFc2_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc2_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c2_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
