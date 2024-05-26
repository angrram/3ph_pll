#ifndef __c19_dsogi_pll_3ph_h__
#define __c19_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc19_dsogi_pll_3phInstanceStruct
#define typedef_SFc19_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c19_sfEvent;
  boolean_T c19_doneDoubleBufferReInit;
  uint8_T c19_is_active_c19_dsogi_pll_3ph;
  uint8_T c19_JITStateAnimation[1];
  uint8_T c19_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c19_emlrtLocationLoggingDataTables[4];
  int32_T c19_IsDebuggerActive;
  int32_T c19_IsSequenceViewerPresent;
  int32_T c19_SequenceViewerOptimization;
  int32_T c19_IsHeatMapPresent;
  void *c19_RuntimeVar;
  emlrtLocationLoggingHistogramType c19_emlrtLocLogHistTables[4];
  boolean_T c19_emlrtLocLogSimulated;
  uint32_T c19_mlFcnLineNumber;
  void *c19_fcnDataPtrs[3];
  char_T *c19_dataNames[3];
  uint32_T c19_numFcnVars;
  uint32_T c19_ssIds[3];
  uint32_T c19_statuses[3];
  void *c19_outMexFcns[3];
  void *c19_inMexFcns[3];
  CovrtStateflowInstance *c19_covrtInstance;
  void *c19_fEmlrtCtx;
  real_T *c19_a;
  real_T *c19_c;
  real_T *c19_b;
} SFc19_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc19_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c19_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c19_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c19_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
