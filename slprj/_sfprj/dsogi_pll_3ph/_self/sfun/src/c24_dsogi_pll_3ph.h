#ifndef __c24_dsogi_pll_3ph_h__
#define __c24_dsogi_pll_3ph_h__

/* Forward Declarations */

/* Type Definitions */
#ifndef typedef_SFc24_dsogi_pll_3phInstanceStruct
#define typedef_SFc24_dsogi_pll_3phInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c24_sfEvent;
  boolean_T c24_doneDoubleBufferReInit;
  uint8_T c24_is_active_c24_dsogi_pll_3ph;
  uint8_T c24_JITStateAnimation[1];
  uint8_T c24_JITTransitionAnimation[1];
  emlrtLocationLoggingDataType c24_emlrtLocationLoggingDataTables[10];
  int32_T c24_IsDebuggerActive;
  int32_T c24_IsSequenceViewerPresent;
  int32_T c24_SequenceViewerOptimization;
  int32_T c24_IsHeatMapPresent;
  void *c24_RuntimeVar;
  emlrtLocationLoggingHistogramType c24_emlrtLocLogHistTables[10];
  boolean_T c24_emlrtLocLogSimulated;
  uint32_T c24_mlFcnLineNumber;
  void *c24_fcnDataPtrs[6];
  char_T *c24_dataNames[6];
  uint32_T c24_numFcnVars;
  uint32_T c24_ssIds[6];
  uint32_T c24_statuses[6];
  void *c24_outMexFcns[6];
  void *c24_inMexFcns[6];
  CovrtStateflowInstance *c24_covrtInstance;
  void *c24_fEmlrtCtx;
  real_T *c24_vd_park;
  real_T *c24_vp_alpha;
  real_T *c24_vq_park;
  real_T *c24_vp_betha;
  real_T *c24_sin_th_k_1;
  real_T *c24_cos_th_k_1;
} SFc24_dsogi_pll_3phInstanceStruct;

#endif                                 /* typedef_SFc24_dsogi_pll_3phInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c24_dsogi_pll_3ph_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c24_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
extern void c24_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
