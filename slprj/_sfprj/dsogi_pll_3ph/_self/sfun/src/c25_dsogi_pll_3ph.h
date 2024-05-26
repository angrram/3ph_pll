#ifndef __c25_dsogi_pll_3ph_h__
#define __c25_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc25_dsogi_pll_3phInstanceStruct
#define typedef_SFc25_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c25_sfEvent;
  boolean_T c25_doneDoubleBufferReInit;
  uint8_T c25_is_active_c25_dsogi_pll_3ph;
  uint8_T c25_JITStateAnimation[1];
  uint8_T c25_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c25_emlrtLocationLoggingDataTables[20];
  int32_T c25_IsDebuggerActive;
  int32_T c25_IsSequenceViewerPresent;
  int32_T c25_SequenceViewerOptimization;
  int32_T c25_IsHeatMapPresent;
  void *c25_RuntimeVar;
  emlrtLocationLoggingHistogramType c25_emlrtLocLogHistTables[20];
  boolean_T c25_emlrtLocLogSimulated;
  uint32_T c25_mlFcnLineNumber;
  void *c25_fcnDataPtrs[13];
  char_T *c25_dataNames[13];
  uint32_T c25_numFcnVars;
  uint32_T c25_ssIds[13];
  uint32_T c25_statuses[13];
  void *c25_outMexFcns[13];
  void *c25_inMexFcns[13];
  CovrtStateflowInstance *c25_covrtInstance;
  void *c25_fEmlrtCtx;
  real_T *c25_vq_park;
  real_T *c25_w_pi;
  real_T *c25_vq_park_k_1;
  real_T *c25_w_pi_k_1;
} SFc25_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc25_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c25_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c25_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c25_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
