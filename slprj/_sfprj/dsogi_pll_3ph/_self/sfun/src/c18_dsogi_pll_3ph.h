#ifndef __c18_dsogi_pll_3ph_h__
#define __c18_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc18_dsogi_pll_3phInstanceStruct
#define typedef_SFc18_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c18_sfEvent;
  boolean_T c18_doneDoubleBufferReInit;
  uint8_T c18_is_active_c18_dsogi_pll_3ph;
  uint8_T c18_JITStateAnimation[1];
  uint8_T c18_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c18_emlrtLocationLoggingDataTables[4];
  int32_T c18_IsDebuggerActive;
  int32_T c18_IsSequenceViewerPresent;
  int32_T c18_SequenceViewerOptimization;
  int32_T c18_IsHeatMapPresent;
  void *c18_RuntimeVar;
  emlrtLocationLoggingHistogramType c18_emlrtLocLogHistTables[4];
  boolean_T c18_emlrtLocLogSimulated;
  uint32_T c18_mlFcnLineNumber;
  void *c18_fcnDataPtrs[3];
  char_T *c18_dataNames[3];
  uint32_T c18_numFcnVars;
  uint32_T c18_ssIds[3];
  uint32_T c18_statuses[3];
  void *c18_outMexFcns[3];
  void *c18_inMexFcns[3];
  CovrtStateflowInstance *c18_covrtInstance;
  void *c18_fEmlrtCtx;
  real_T *c18_a;
  real_T *c18_c;
  real_T *c18_b;
} SFc18_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc18_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c18_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c18_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c18_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
