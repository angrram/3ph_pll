#ifndef __c20_dsogi_pll_3ph_h__
#define __c20_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc20_dsogi_pll_3phInstanceStruct
#define typedef_SFc20_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c20_sfEvent;
  boolean_T c20_doneDoubleBufferReInit;
  uint8_T c20_is_active_c20_dsogi_pll_3ph;
  uint8_T c20_JITStateAnimation[1];
  uint8_T c20_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c20_emlrtLocationLoggingDataTables[4];
  int32_T c20_IsDebuggerActive;
  int32_T c20_IsSequenceViewerPresent;
  int32_T c20_SequenceViewerOptimization;
  int32_T c20_IsHeatMapPresent;
  void *c20_RuntimeVar;
  emlrtLocationLoggingHistogramType c20_emlrtLocLogHistTables[4];
  boolean_T c20_emlrtLocLogSimulated;
  uint32_T c20_mlFcnLineNumber;
  void *c20_fcnDataPtrs[3];
  char_T *c20_dataNames[3];
  uint32_T c20_numFcnVars;
  uint32_T c20_ssIds[3];
  uint32_T c20_statuses[3];
  void *c20_outMexFcns[3];
  void *c20_inMexFcns[3];
  CovrtStateflowInstance *c20_covrtInstance;
  void *c20_fEmlrtCtx;
  real_T *c20_a;
  real_T *c20_c;
  real_T *c20_b;
} SFc20_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc20_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c20_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c20_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c20_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
