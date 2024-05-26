#ifndef __c21_dsogi_pll_3ph_h__
#define __c21_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc21_dsogi_pll_3phInstanceStruct
#define typedef_SFc21_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c21_sfEvent;
  boolean_T c21_doneDoubleBufferReInit;
  uint8_T c21_is_active_c21_dsogi_pll_3ph;
  uint8_T c21_JITStateAnimation[1];
  uint8_T c21_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c21_emlrtLocationLoggingDataTables[3];
  int32_T c21_IsDebuggerActive;
  int32_T c21_IsSequenceViewerPresent;
  int32_T c21_SequenceViewerOptimization;
  int32_T c21_IsHeatMapPresent;
  void *c21_RuntimeVar;
  emlrtLocationLoggingHistogramType c21_emlrtLocLogHistTables[3];
  boolean_T c21_emlrtLocLogSimulated;
  uint32_T c21_mlFcnLineNumber;
  void *c21_fcnDataPtrs[3];
  char_T *c21_dataNames[3];
  uint32_T c21_numFcnVars;
  uint32_T c21_ssIds[3];
  uint32_T c21_statuses[3];
  void *c21_outMexFcns[3];
  void *c21_inMexFcns[3];
  CovrtStateflowInstance *c21_covrtInstance;
  void *c21_fEmlrtCtx;
  real_T *c21_a;
  real_T *c21_c;
  real_T *c21_b;
} SFc21_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc21_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c21_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c21_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c21_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
