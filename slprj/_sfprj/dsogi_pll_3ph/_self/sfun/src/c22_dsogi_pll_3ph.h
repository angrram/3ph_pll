#ifndef __c22_dsogi_pll_3ph_h__
#define __c22_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc22_dsogi_pll_3phInstanceStruct
#define typedef_SFc22_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c22_sfEvent;
  boolean_T c22_doneDoubleBufferReInit;
  uint8_T c22_is_active_c22_dsogi_pll_3ph;
  uint8_T c22_JITStateAnimation[1];
  uint8_T c22_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c22_emlrtLocationLoggingDataTables[3];
  int32_T c22_IsDebuggerActive;
  int32_T c22_IsSequenceViewerPresent;
  int32_T c22_SequenceViewerOptimization;
  int32_T c22_IsHeatMapPresent;
  void *c22_RuntimeVar;
  emlrtLocationLoggingHistogramType c22_emlrtLocLogHistTables[3];
  boolean_T c22_emlrtLocLogSimulated;
  uint32_T c22_mlFcnLineNumber;
  void *c22_fcnDataPtrs[3];
  char_T *c22_dataNames[3];
  uint32_T c22_numFcnVars;
  uint32_T c22_ssIds[3];
  uint32_T c22_statuses[3];
  void *c22_outMexFcns[3];
  void *c22_inMexFcns[3];
  CovrtStateflowInstance *c22_covrtInstance;
  void *c22_fEmlrtCtx;
  real_T *c22_a;
  real_T *c22_c;
  real_T *c22_b;
} SFc22_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc22_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c22_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c22_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c22_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
