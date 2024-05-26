#ifndef __c10_dsogi_pll_3ph_h__
#define __c10_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc10_dsogi_pll_3phInstanceStruct
#define typedef_SFc10_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c10_sfEvent;
  boolean_T c10_doneDoubleBufferReInit;
  uint8_T c10_is_active_c10_dsogi_pll_3ph;
  uint8_T c10_JITStateAnimation[1];
  uint8_T c10_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c10_emlrtLocationLoggingDataTables[15];
  int32_T c10_IsDebuggerActive;
  int32_T c10_IsSequenceViewerPresent;
  int32_T c10_SequenceViewerOptimization;
  int32_T c10_IsHeatMapPresent;
  void *c10_RuntimeVar;
  emlrtLocationLoggingHistogramType c10_emlrtLocLogHistTables[15];
  boolean_T c10_emlrtLocLogSimulated;
  uint32_T c10_mlFcnLineNumber;
  void *c10_fcnDataPtrs[5];
  char_T *c10_dataNames[5];
  uint32_T c10_numFcnVars;
  uint32_T c10_ssIds[5];
  uint32_T c10_statuses[5];
  void *c10_outMexFcns[5];
  void *c10_inMexFcns[5];
  CovrtStateflowInstance *c10_covrtInstance;
  void *c10_fEmlrtCtx;
  real_T *c10_va;
  real_T *c10_valpha;
  real_T *c10_vb;
  real_T *c10_vc;
  real_T *c10_vbetha;
} SFc10_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc10_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c10_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c10_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c10_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
