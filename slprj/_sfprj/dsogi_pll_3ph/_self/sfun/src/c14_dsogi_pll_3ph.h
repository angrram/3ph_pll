#ifndef __c14_dsogi_pll_3ph_h__
#define __c14_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc14_dsogi_pll_3phInstanceStruct
#define typedef_SFc14_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c14_sfEvent;
  boolean_T c14_doneDoubleBufferReInit;
  uint8_T c14_is_active_c14_dsogi_pll_3ph;
  uint8_T c14_JITStateAnimation[1];
  uint8_T c14_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c14_emlrtLocationLoggingDataTables[60];
  int32_T c14_IsDebuggerActive;
  int32_T c14_IsSequenceViewerPresent;
  int32_T c14_SequenceViewerOptimization;
  int32_T c14_IsHeatMapPresent;
  void *c14_RuntimeVar;
  emlrtLocationLoggingHistogramType c14_emlrtLocLogHistTables[60];
  boolean_T c14_emlrtLocLogSimulated;
  uint32_T c14_mlFcnLineNumber;
  void *c14_fcnDataPtrs[23];
  char_T *c14_dataNames[23];
  uint32_T c14_numFcnVars;
  uint32_T c14_ssIds[23];
  uint32_T c14_statuses[23];
  void *c14_outMexFcns[23];
  void *c14_inMexFcns[23];
  CovrtStateflowInstance *c14_covrtInstance;
  void *c14_fEmlrtCtx;
  real_T *c14_v_ct_alpha;
  real_T *c14_vd_sogi_alpha;
  real_T *c14_v_ct_alpha_k_1;
  real_T *c14_v_ct_alpha_k_2;
  real_T *c14_vd_sogi_alpha_k_1;
  real_T *c14_vd_sogi_alpha_k_2;
  real_T *c14_vq_sogi_alpha_k_1;
  real_T *c14_vq_sogi_alpha_k_2;
  real_T *c14_wolp;
  real_T *c14_vq_sogi_alpha;
} SFc14_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc14_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c14_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c14_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c14_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
