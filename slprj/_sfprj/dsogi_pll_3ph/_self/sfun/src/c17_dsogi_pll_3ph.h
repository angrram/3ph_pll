#ifndef __c17_dsogi_pll_3ph_h__
#define __c17_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc17_dsogi_pll_3phInstanceStruct
#define typedef_SFc17_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c17_sfEvent;
  boolean_T c17_doneDoubleBufferReInit;
  uint8_T c17_is_active_c17_dsogi_pll_3ph;
  uint8_T c17_JITStateAnimation[1];
  uint8_T c17_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c17_emlrtLocationLoggingDataTables[4];
  int32_T c17_IsDebuggerActive;
  int32_T c17_IsSequenceViewerPresent;
  int32_T c17_SequenceViewerOptimization;
  int32_T c17_IsHeatMapPresent;
  void *c17_RuntimeVar;
  emlrtLocationLoggingHistogramType c17_emlrtLocLogHistTables[4];
  boolean_T c17_emlrtLocLogSimulated;
  uint32_T c17_mlFcnLineNumber;
  void *c17_fcnDataPtrs[3];
  char_T *c17_dataNames[3];
  uint32_T c17_numFcnVars;
  uint32_T c17_ssIds[3];
  uint32_T c17_statuses[3];
  void *c17_outMexFcns[3];
  void *c17_inMexFcns[3];
  CovrtStateflowInstance *c17_covrtInstance;
  void *c17_fEmlrtCtx;
  real_T *c17_a;
  real_T *c17_c;
  real_T *c17_b;
} SFc17_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc17_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c17_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c17_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c17_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
