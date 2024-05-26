#ifndef __c16_dsogi_pll_3ph_h__
#define __c16_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc16_dsogi_pll_3phInstanceStruct
#define typedef_SFc16_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c16_sfEvent;
  boolean_T c16_doneDoubleBufferReInit;
  uint8_T c16_is_active_c16_dsogi_pll_3ph;
  uint8_T c16_JITStateAnimation[1];
  uint8_T c16_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c16_emlrtLocationLoggingDataTables[60];
  int32_T c16_IsDebuggerActive;
  int32_T c16_IsSequenceViewerPresent;
  int32_T c16_SequenceViewerOptimization;
  int32_T c16_IsHeatMapPresent;
  void *c16_RuntimeVar;
  emlrtLocationLoggingHistogramType c16_emlrtLocLogHistTables[60];
  boolean_T c16_emlrtLocLogSimulated;
  uint32_T c16_mlFcnLineNumber;
  void *c16_fcnDataPtrs[23];
  char_T *c16_dataNames[23];
  uint32_T c16_numFcnVars;
  uint32_T c16_ssIds[23];
  uint32_T c16_statuses[23];
  void *c16_outMexFcns[23];
  void *c16_inMexFcns[23];
  CovrtStateflowInstance *c16_covrtInstance;
  void *c16_fEmlrtCtx;
  real_T *c16_v_ct_alpha;
  real_T *c16_vd_sogi_alpha;
  real_T *c16_v_ct_alpha_k_1;
  real_T *c16_v_ct_alpha_k_2;
  real_T *c16_vd_sogi_alpha_k_1;
  real_T *c16_vd_sogi_alpha_k_2;
  real_T *c16_vq_sogi_alpha_k_1;
  real_T *c16_vq_sogi_alpha_k_2;
  real_T *c16_wolp;
  real_T *c16_vq_sogi_alpha;
} SFc16_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc16_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c16_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c16_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
