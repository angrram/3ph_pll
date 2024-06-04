#ifndef __c1_dsogi_pll_3ph_h__
#define __c1_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc1_dsogi_pll_3phInstanceStruct
#define typedef_SFc1_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_dsogi_pll_3ph;
  uint8_T c1_JITStateAnimation[1];
  uint8_T c1_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c1_emlrtLocationLoggingDataTables[72];
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  void *c1_RuntimeVar;
  emlrtLocationLoggingHistogramType c1_emlrtLocLogHistTables[72];
  boolean_T c1_emlrtLocLogSimulated;
  uint32_T c1_mlFcnLineNumber;
  void *c1_fcnDataPtrs[22];
  char_T *c1_dataNames[22];
  uint32_T c1_numFcnVars;
  uint32_T c1_ssIds[22];
  uint32_T c1_statuses[22];
  void *c1_outMexFcns[22];
  void *c1_inMexFcns[22];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  real_T *c1_v_ct_alpha;
  real_T *c1_vd_sogi_alpha;
  real_T *c1_v_ct_alpha_k_1;
  real_T *c1_v_ct_alpha_k_2;
  real_T *c1_vd_sogi_alpha_k_1;
  real_T *c1_vd_sogi_alpha_k_2;
  real_T *c1_vq_sogi_alpha_k_1;
  real_T *c1_vq_sogi_alpha_k_2;
  real_T *c1_wolp;
  real_T *c1_vq_sogi_alpha;
} SFc1_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc1_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c1_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
