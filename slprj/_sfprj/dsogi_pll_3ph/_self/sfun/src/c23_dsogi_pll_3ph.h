#ifndef __c23_dsogi_pll_3ph_h__
#define __c23_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc23_dsogi_pll_3phInstanceStruct
#define typedef_SFc23_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c23_sfEvent;
  boolean_T c23_doneDoubleBufferReInit;
  uint8_T c23_is_active_c23_dsogi_pll_3ph;
  uint8_T c23_JITStateAnimation[1];
  uint8_T c23_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c23_emlrtLocationLoggingDataTables[19];
  int32_T c23_IsDebuggerActive;
  int32_T c23_IsSequenceViewerPresent;
  int32_T c23_SequenceViewerOptimization;
  int32_T c23_IsHeatMapPresent;
  void *c23_RuntimeVar;
  emlrtLocationLoggingHistogramType c23_emlrtLocLogHistTables[19];
  boolean_T c23_emlrtLocLogSimulated;
  uint32_T c23_mlFcnLineNumber;
  void *c23_fcnDataPtrs[9];
  char_T *c23_dataNames[9];
  uint32_T c23_numFcnVars;
  uint32_T c23_ssIds[9];
  uint32_T c23_statuses[9];
  void *c23_outMexFcns[9];
  void *c23_inMexFcns[9];
  CovrtStateflowInstance *c23_covrtInstance;
  void *c23_fEmlrtCtx;
  real_T *c23_cos_th_1;
  real_T *c23_sin_th_1;
  real_T *c23_th_1;
  real_T *c23_th;
  real_T *c23_sin_th;
  real_T *c23_wo;
  real_T *c23_cos_th;
} SFc23_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc23_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c23_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c23_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c23_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
