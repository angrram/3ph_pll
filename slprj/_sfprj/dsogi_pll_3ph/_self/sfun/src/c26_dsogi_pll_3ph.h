#ifndef __c26_dsogi_pll_3ph_h__
#define __c26_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc26_dsogi_pll_3phInstanceStruct
#define typedef_SFc26_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c26_sfEvent;
  boolean_T c26_doneDoubleBufferReInit;
  uint8_T c26_is_active_c26_dsogi_pll_3ph;
  uint8_T c26_JITStateAnimation[1];
  uint8_T c26_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c26_emlrtLocationLoggingDataTables[3];
  int32_T c26_IsDebuggerActive;
  int32_T c26_IsSequenceViewerPresent;
  int32_T c26_SequenceViewerOptimization;
  int32_T c26_IsHeatMapPresent;
  void *c26_RuntimeVar;
  emlrtLocationLoggingHistogramType c26_emlrtLocLogHistTables[3];
  boolean_T c26_emlrtLocLogSimulated;
  uint32_T c26_mlFcnLineNumber;
  void *c26_fcnDataPtrs[3];
  char_T *c26_dataNames[3];
  uint32_T c26_numFcnVars;
  uint32_T c26_ssIds[3];
  uint32_T c26_statuses[3];
  void *c26_outMexFcns[3];
  void *c26_inMexFcns[3];
  CovrtStateflowInstance *c26_covrtInstance;
  void *c26_fEmlrtCtx;
  real_T *c26_a;
  real_T *c26_c;
  real_T *c26_b;
} SFc26_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc26_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c26_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c26_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c26_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
