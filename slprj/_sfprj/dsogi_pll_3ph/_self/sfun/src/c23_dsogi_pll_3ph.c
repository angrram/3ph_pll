/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c23_dsogi_pll_3ph.h"
#include <math.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c23_update_jit_animation_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void c23_do_animation_call_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_st);
static void initSimStructsc23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c23_emlrt_update_log_1(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c23_in, emlrtLocationLoggingDataType c23_table[],
  int32_T c23_index);
static void c23_emlrtInitVarDataTables(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c23_dataTables[19],
  emlrtLocationLoggingHistogramType c23_histTables[19]);
static real_T c23_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_b_cos_th, const char_T *c23_identifier);
static real_T c23_b_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static uint8_T c23_c_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_b_is_active_c23_dsogi_pll_3ph, const char_T
  *c23_identifier);
static uint8_T c23_d_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void c23_slStringInitializeDynamicBuffers
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance);
static void c23_chart_data_browse_helper(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c23_ssIdNumber, const mxArray **c23_mxData, uint8_T
  *c23_isValueTooBig);
static void init_dsm_address_info(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c23_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c23_is_active_c23_dsogi_pll_3ph = 0U;
  chartInstance->c23_emlrtLocLogSimulated = false;
  c23_emlrtInitVarDataTables(chartInstance,
    chartInstance->c23_emlrtLocationLoggingDataTables,
    chartInstance->c23_emlrtLocLogHistTables);
}

static void initialize_params_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c23_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:486",              /* mexFileName */
    "Sun May 26 15:34:39 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c23_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      19                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c23_emlrtLocationInfo[27] = { { 1,/* MxInfoID */
      33,                              /* TextStart */
      8,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      42,                              /* TextStart */
      8,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      51,                              /* TextStart */
      4,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      56,                              /* TextStart */
      2,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      92,                              /* TextStart */
      4,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      111,                             /* TextStart */
      7,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      119,                             /* TextStart */
      6,                               /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      191,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      198,                             /* TextStart */
      32,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      208,                             /* TextStart */
      21,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      208,                             /* TextStart */
      13,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      267,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      274,                             /* TextStart */
      32,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      284,                             /* TextStart */
      21,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      284,                             /* TextStart */
      13,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      325,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      332,                             /* TextStart */
      16,                              /* TextLength */
      3,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      358,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      365,                             /* TextStart */
      16,                              /* TextLength */
      3,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      392,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      399,                             /* TextStart */
      15,                              /* TextLength */
      3,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      424,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      431,                             /* TextStart */
      15,                              /* TextLength */
      3,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      457,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      460,                             /* TextStart */
      19,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      466,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      530,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c23_emlrtLocationLoggingFieldCounts[19] = { 0 };

  if (chartInstance->c23_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:486");
    emlrtLocationLoggingPushLog(&c23_emlrtLocationLoggingFileInfo,
      &c23_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c23_emlrtLocationLoggingDataTables[0],
      &c23_emlrtLocationInfo[0], NULL, 0U, &c23_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:486");
  }
}

static void mdl_setup_runtime_resources_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const int32_T c23_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c23_condTxtEndIdx[2] = { 504, 517 };

  static const int32_T c23_condTxtStartIdx[2] = { 493, 508 };

  static const uint32_T c23_decisionTxtEndIdx = 0U;
  static const uint32_T c23_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c23_chart_data_browse_helper);
  chartInstance->c23_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c23_RuntimeVar,
    &chartInstance->c23_IsDebuggerActive,
    &chartInstance->c23_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c23_mlFcnLineNumber, &chartInstance->c23_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c23_covrtInstance, 1U, 0U, 1U,
    70U);
  covrtChartInitFcn(chartInstance->c23_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c23_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c23_decisionTxtStartIdx, &c23_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c23_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c23_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c23_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 612);
  covrtEmlIfInitFcn(chartInstance->c23_covrtInstance, 4U, 0U, 0U, 490, 517, -1,
                    601, false);
  covrtEmlMCDCInitFcn(chartInstance->c23_covrtInstance, 4U, 0U, 0U, 493, 517, 2U,
                      0U, c23_condTxtStartIdx, c23_condTxtEndIdx, 3U,
                      c23_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c23_covrtInstance, 4U, 0U, 0U, 493,
    504, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c23_covrtInstance, 4U, 0U, 1U, 508,
    517, -1, 3U);
}

static void mdl_cleanup_runtime_resources_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c23_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c23_covrtInstance);
}

static void enable_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c23_varargin_1[2];
  real_T c23_b_cos_th;
  real_T c23_b_cos_th_1;
  real_T c23_b_maxval;
  real_T c23_b_minval;
  real_T c23_b_sin_th;
  real_T c23_b_sin_th_1;
  real_T c23_b_th;
  real_T c23_b_th_1;
  real_T c23_b_wo;
  real_T c23_b_x;
  real_T c23_c_x;
  real_T c23_d_x;
  real_T c23_maxval;
  real_T c23_minval;
  real_T c23_tsample;
  real_T c23_wout;
  real_T c23_x;
  boolean_T c23_b;
  boolean_T c23_b_b;
  boolean_T c23_c_b;
  boolean_T c23_d_b;
  chartInstance->c23_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 3U, *chartInstance->c23_wo);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 2U,
                    *chartInstance->c23_th_1);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 1U,
                    *chartInstance->c23_sin_th_1);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 0U,
                    *chartInstance->c23_cos_th_1);
  chartInstance->c23_sfEvent = CALL_EVENT;
  c23_b_cos_th_1 = *chartInstance->c23_cos_th_1;
  c23_b_sin_th_1 = *chartInstance->c23_sin_th_1;
  c23_b_th_1 = *chartInstance->c23_th_1;
  c23_b_wo = *chartInstance->c23_wo;

  /* logging input variable 'cos_th_1' for function 'eML_blk_kernel' */
  /* logging input variable 'sin_th_1' for function 'eML_blk_kernel' */
  /* logging input variable 'th_1' for function 'eML_blk_kernel' */
  /* logging input variable 'wo' for function 'eML_blk_kernel' */
  chartInstance->c23_emlrtLocLogSimulated = true;

  /* logging input variable 'cos_th_1' for function 'eML_blk_kernel' */
  c23_emlrt_update_log_1(chartInstance, c23_b_cos_th_1,
    chartInstance->c23_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'sin_th_1' for function 'eML_blk_kernel' */
  c23_emlrt_update_log_1(chartInstance, c23_b_sin_th_1,
    chartInstance->c23_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'th_1' for function 'eML_blk_kernel' */
  c23_emlrt_update_log_1(chartInstance, c23_b_th_1,
    chartInstance->c23_emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'wo' for function 'eML_blk_kernel' */
  c23_emlrt_update_log_1(chartInstance, c23_b_wo,
    chartInstance->c23_emlrtLocationLoggingDataTables, 3);
  covrtEmlFcnEval(chartInstance->c23_covrtInstance, 4U, 0, 0);
  c23_wout = c23_emlrt_update_log_1(chartInstance, c23_b_wo,
    chartInstance->c23_emlrtLocationLoggingDataTables, 4);
  c23_tsample = c23_emlrt_update_log_1(chartInstance, 0.0001,
    chartInstance->c23_emlrtLocationLoggingDataTables, 5);
  c23_b_sin_th = c23_emlrt_update_log_1(chartInstance, c23_b_sin_th_1 +
    c23_emlrt_update_log_1(chartInstance, c23_emlrt_update_log_1(chartInstance,
    c23_b_cos_th_1 * c23_wout, chartInstance->c23_emlrtLocationLoggingDataTables,
    8) * c23_tsample, chartInstance->c23_emlrtLocationLoggingDataTables, 7),
    chartInstance->c23_emlrtLocationLoggingDataTables, 6);
  c23_b_cos_th = c23_emlrt_update_log_1(chartInstance, c23_b_cos_th_1 -
    c23_emlrt_update_log_1(chartInstance, c23_emlrt_update_log_1(chartInstance,
    c23_b_sin_th_1 * c23_wout, chartInstance->c23_emlrtLocationLoggingDataTables,
    11) * c23_tsample, chartInstance->c23_emlrtLocationLoggingDataTables, 10),
    chartInstance->c23_emlrtLocationLoggingDataTables, 9);
  c23_varargin_1[0] = c23_b_sin_th;
  c23_varargin_1[1] = -1.0;
  if (c23_varargin_1[0] < c23_varargin_1[1]) {
    c23_maxval = c23_varargin_1[1];
  } else {
    c23_x = c23_varargin_1[0];
    c23_b = muDoubleScalarIsNaN(c23_x);
    if (c23_b) {
      c23_maxval = c23_varargin_1[1];
    } else {
      c23_maxval = c23_varargin_1[0];
    }
  }

  c23_b_sin_th = c23_emlrt_update_log_1(chartInstance, c23_maxval,
    chartInstance->c23_emlrtLocationLoggingDataTables, 12);
  c23_varargin_1[0] = c23_b_cos_th;
  c23_varargin_1[1] = -1.0;
  if (c23_varargin_1[0] < c23_varargin_1[1]) {
    c23_b_maxval = c23_varargin_1[1];
  } else {
    c23_b_x = c23_varargin_1[0];
    c23_b_b = muDoubleScalarIsNaN(c23_b_x);
    if (c23_b_b) {
      c23_b_maxval = c23_varargin_1[1];
    } else {
      c23_b_maxval = c23_varargin_1[0];
    }
  }

  c23_b_cos_th = c23_emlrt_update_log_1(chartInstance, c23_b_maxval,
    chartInstance->c23_emlrtLocationLoggingDataTables, 13);
  c23_varargin_1[0] = c23_b_sin_th;
  c23_varargin_1[1] = 1.0;
  if (c23_varargin_1[0] > c23_varargin_1[1]) {
    c23_minval = c23_varargin_1[1];
  } else {
    c23_c_x = c23_varargin_1[0];
    c23_c_b = muDoubleScalarIsNaN(c23_c_x);
    if (c23_c_b) {
      c23_minval = c23_varargin_1[1];
    } else {
      c23_minval = c23_varargin_1[0];
    }
  }

  c23_b_sin_th = c23_emlrt_update_log_1(chartInstance, c23_minval,
    chartInstance->c23_emlrtLocationLoggingDataTables, 14);
  c23_varargin_1[0] = c23_b_cos_th;
  c23_varargin_1[1] = 1.0;
  if (c23_varargin_1[0] > c23_varargin_1[1]) {
    c23_b_minval = c23_varargin_1[1];
  } else {
    c23_d_x = c23_varargin_1[0];
    c23_d_b = muDoubleScalarIsNaN(c23_d_x);
    if (c23_d_b) {
      c23_b_minval = c23_varargin_1[1];
    } else {
      c23_b_minval = c23_varargin_1[0];
    }
  }

  c23_b_cos_th = c23_emlrt_update_log_1(chartInstance, c23_b_minval,
    chartInstance->c23_emlrtLocationLoggingDataTables, 15);
  c23_b_th = c23_emlrt_update_log_1(chartInstance, c23_b_th_1 +
    c23_emlrt_update_log_1(chartInstance, c23_wout * c23_tsample,
    chartInstance->c23_emlrtLocationLoggingDataTables, 17),
    chartInstance->c23_emlrtLocationLoggingDataTables, 16);
  if (covrtEmlCondEval(chartInstance->c23_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c23_covrtInstance, 4U, 0U, 0U,
                        c23_b_sin_th_1, 0.0, -1, 5U, c23_b_sin_th_1 >= 0.0)) &&
      covrtEmlCondEval(chartInstance->c23_covrtInstance, 4U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c23_covrtInstance, 4U, 0U, 1U,
                        c23_b_sin_th, 0.0, -1, 3U, c23_b_sin_th <= 0.0))) {
    covrtEmlMcdcEval(chartInstance->c23_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c23_covrtInstance, 4U, 0, 0, true);
    c23_b_th = c23_emlrt_update_log_1(chartInstance, -3.1415926535897931,
      chartInstance->c23_emlrtLocationLoggingDataTables, 18);
  } else {
    covrtEmlMcdcEval(chartInstance->c23_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c23_covrtInstance, 4U, 0, 0, false);
  }

  *chartInstance->c23_th = c23_b_th;
  *chartInstance->c23_sin_th = c23_b_sin_th;
  *chartInstance->c23_cos_th = c23_b_cos_th;
  c23_do_animation_call_c23_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 4U, *chartInstance->c23_th);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 5U,
                    *chartInstance->c23_sin_th);
  covrtSigUpdateFcn(chartInstance->c23_covrtInstance, 6U,
                    *chartInstance->c23_cos_th);
}

static void ext_mode_exec_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c23_update_jit_animation_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c23_do_animation_call_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c23_b_y = NULL;
  const mxArray *c23_c_y = NULL;
  const mxArray *c23_d_y = NULL;
  const mxArray *c23_e_y = NULL;
  const mxArray *c23_st;
  const mxArray *c23_y = NULL;
  c23_st = NULL;
  c23_st = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_createcellmatrix(4, 1), false);
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", chartInstance->c23_cos_th, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c23_y, 0, c23_b_y);
  c23_c_y = NULL;
  sf_mex_assign(&c23_c_y, sf_mex_create("y", chartInstance->c23_sin_th, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c23_y, 1, c23_c_y);
  c23_d_y = NULL;
  sf_mex_assign(&c23_d_y, sf_mex_create("y", chartInstance->c23_th, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c23_y, 2, c23_d_y);
  c23_e_y = NULL;
  sf_mex_assign(&c23_e_y, sf_mex_create("y",
    &chartInstance->c23_is_active_c23_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c23_y, 3, c23_e_y);
  sf_mex_assign(&c23_st, c23_y, false);
  return c23_st;
}

static void set_sim_state_c23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_st)
{
  const mxArray *c23_u;
  chartInstance->c23_doneDoubleBufferReInit = true;
  c23_u = sf_mex_dup(c23_st);
  *chartInstance->c23_cos_th = c23_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c23_u, 0)), "cos_th");
  *chartInstance->c23_sin_th = c23_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c23_u, 1)), "sin_th");
  *chartInstance->c23_th = c23_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c23_u, 2)), "th");
  chartInstance->c23_is_active_c23_dsogi_pll_3ph = c23_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c23_u, 3)),
     "is_active_c23_dsogi_pll_3ph");
  sf_mex_destroy(&c23_u);
  sf_mex_destroy(&c23_st);
}

static void initSimStructsc23_dsogi_pll_3ph(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc23_dsogi_pll_3ph
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c23_emlrt_update_log_1(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c23_in, emlrtLocationLoggingDataType c23_table[],
  int32_T c23_index)
{
  emlrtLocationLoggingDataType *c23_b_table;
  emlrtLocationLoggingHistogramType *c23_histTable;
  real_T c23_inDouble;
  real_T c23_localMax;
  real_T c23_localMin;
  real_T c23_significand;
  int32_T c23_exponent;
  boolean_T c23_isLoggingEnabledHere;
  (void)chartInstance;
  c23_isLoggingEnabledHere = (c23_index >= 0);
  if (c23_isLoggingEnabledHere) {
    c23_b_table = (emlrtLocationLoggingDataType *)&c23_table[c23_index];
    c23_localMin = c23_b_table[0U].SimMin;
    c23_localMax = c23_b_table[0U].SimMax;
    c23_histTable = c23_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c23_in < c23_localMin) {
      c23_localMin = c23_in;
    }

    if (c23_in > c23_localMax) {
      c23_localMax = c23_in;
    }

    /* Histogram logging. */
    c23_inDouble = c23_in;
    c23_histTable->TotalNumberOfValues++;
    if (c23_inDouble == 0.0) {
      c23_histTable->NumberOfZeros++;
    } else {
      c23_histTable->SimSum += c23_inDouble;
      if ((!muDoubleScalarIsInf(c23_inDouble)) && (!muDoubleScalarIsNaN
           (c23_inDouble))) {
        c23_significand = frexp(c23_inDouble, &c23_exponent);
        if (c23_exponent > 128) {
          c23_exponent = 128;
        }

        if (c23_exponent < -127) {
          c23_exponent = -127;
        }

        if (c23_significand < 0.0) {
          c23_histTable->NumberOfNegativeValues++;
          c23_histTable->HistogramOfNegativeValues[127 + c23_exponent]++;
        } else {
          c23_histTable->NumberOfPositiveValues++;
          c23_histTable->HistogramOfPositiveValues[127 + c23_exponent]++;
        }
      }
    }

    c23_b_table[0U].SimMin = c23_localMin;
    c23_b_table[0U].SimMax = c23_localMax;

    /* IsAlwaysInteger logging. */
    if (c23_in != muDoubleScalarFloor(c23_in)) {
      c23_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c23_in;
}

static void c23_emlrtInitVarDataTables(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c23_dataTables[19],
  emlrtLocationLoggingHistogramType c23_histTables[19])
{
  int32_T c23_i;
  int32_T c23_iH;
  (void)chartInstance;
  for (c23_i = 0; c23_i < 19; c23_i++) {
    c23_dataTables[c23_i].SimMin = rtInf;
    c23_dataTables[c23_i].SimMax = rtMinusInf;
    c23_dataTables[c23_i].OverflowWraps = 0;
    c23_dataTables[c23_i].Saturations = 0;
    c23_dataTables[c23_i].IsAlwaysInteger = true;
    c23_dataTables[c23_i].HistogramTable = &c23_histTables[c23_i];
    c23_histTables[c23_i].NumberOfZeros = 0.0;
    c23_histTables[c23_i].NumberOfPositiveValues = 0.0;
    c23_histTables[c23_i].NumberOfNegativeValues = 0.0;
    c23_histTables[c23_i].TotalNumberOfValues = 0.0;
    c23_histTables[c23_i].SimSum = 0.0;
    for (c23_iH = 0; c23_iH < 256; c23_iH++) {
      c23_histTables[c23_i].HistogramOfPositiveValues[c23_iH] = 0.0;
      c23_histTables[c23_i].HistogramOfNegativeValues[c23_iH] = 0.0;
    }
  }
}

const mxArray *sf_c23_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c23_nameCaptureInfo = NULL;
  c23_nameCaptureInfo = NULL;
  sf_mex_assign(&c23_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c23_nameCaptureInfo;
}

static real_T c23_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_b_cos_th, const char_T *c23_identifier)
{
  emlrtMsgIdentifier c23_thisId;
  real_T c23_y;
  c23_thisId.fIdentifier = (const char_T *)c23_identifier;
  c23_thisId.fParent = NULL;
  c23_thisId.bParentIsCell = false;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_b_cos_th),
    &c23_thisId);
  sf_mex_destroy(&c23_b_cos_th);
  return c23_y;
}

static real_T c23_b_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  real_T c23_d;
  real_T c23_y;
  (void)chartInstance;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_d, 1, 0, 0U, 0, 0U, 0);
  c23_y = c23_d;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static uint8_T c23_c_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_b_is_active_c23_dsogi_pll_3ph, const char_T
  *c23_identifier)
{
  emlrtMsgIdentifier c23_thisId;
  uint8_T c23_y;
  c23_thisId.fIdentifier = (const char_T *)c23_identifier;
  c23_thisId.fParent = NULL;
  c23_thisId.bParentIsCell = false;
  c23_y = c23_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c23_b_is_active_c23_dsogi_pll_3ph), &c23_thisId);
  sf_mex_destroy(&c23_b_is_active_c23_dsogi_pll_3ph);
  return c23_y;
}

static uint8_T c23_d_emlrt_marshallIn(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  uint8_T c23_b_u;
  uint8_T c23_y;
  (void)chartInstance;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_b_u, 1, 3, 0U, 0, 0U, 0);
  c23_y = c23_b_u;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void c23_slStringInitializeDynamicBuffers
  (SFc23_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c23_chart_data_browse_helper(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c23_ssIdNumber, const mxArray **c23_mxData, uint8_T
  *c23_isValueTooBig)
{
  real_T c23_d;
  real_T c23_d1;
  real_T c23_d2;
  real_T c23_d3;
  real_T c23_d4;
  real_T c23_d5;
  real_T c23_d6;
  *c23_mxData = NULL;
  *c23_mxData = NULL;
  *c23_isValueTooBig = 0U;
  switch (c23_ssIdNumber) {
   case 8U:
    c23_d = *chartInstance->c23_cos_th_1;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c23_d1 = *chartInstance->c23_sin_th_1;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c23_d2 = *chartInstance->c23_th_1;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c23_d3 = *chartInstance->c23_th;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c23_d4 = *chartInstance->c23_sin_th;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    c23_d5 = *chartInstance->c23_wo;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c23_d6 = *chartInstance->c23_cos_th;
    sf_mex_assign(c23_mxData, sf_mex_create("mxData", &c23_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc23_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c23_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c23_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c23_cos_th_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c23_sin_th_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c23_th_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c23_th = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c23_sin_th = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c23_wo = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c23_cos_th = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c23_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(963003745U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(609824881U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1722737987U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3176822575U);
}

mxArray *sf_c23_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c23_dsogi_pll_3ph_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("fixpt_minmax_logging");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("chartInfo");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c23_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c23_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDuYGZgYAPSHEDMxAABrFA+IxCzQGmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+kUc0PWzYNHPhqRfAMpPzi+OL8mAhA8snAbOHz"
    "Jk+6M4M28Q+UMC7A8DAv5gQvEHEwP13K/gQJl+iP0BBNwvjRYPIH5mcXxicklmWWp8spFxfEpxf"
    "npmfEFOTrxxQQbcXBAAAIgJJUA="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c23_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "spKwZoiTQ5S72HV0UJck5P";
}

static void sf_opaque_initialize_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c23_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c23_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c23_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc23_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c23_dsogi_pll_3ph
      ((SFc23_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc23_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c23_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c23_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc23_dsogi_pll_3ph((SFc23_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c23_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWU9v40QUd7Kh2hVLtUgsIHUleuSCtLSq4ICgbf6wgZYGnBZpL9HUfolHGc9450/SID4AH4Y",
    "zfA0OHPgUiAMHjryx3TR1Q+JJdtkuwpLjjO3fvPd+8/5N4lXaxx4em3hub3neBl7v4ln1suO1fF",
    "yZObP7Ne+TfPz9654XiBAGwH3T79MLz+3gJu4QSWLluR+cxPANKMGMpoK3eV+Ux1LeBwk8wAkSI",
    "bWTXEVjwygftgwPrGT1bUSDyI+EYeEhTkjCE84m/yQ3MbqDEhtUQqBbAKGOpDCDqMXIYDELUo/r",
    "EQRDZWJnrhRo3yTWVHVsmKYJg+YFBG2uNEEW1BJ7fU001PWFG8nWXuVfokWcMEp4ea4jonxI0Ds",
    "0nCYhfp4YjeyVwgYRkfoQIjICdUSHqXTBoZR0qvDtc8qJFpIS1oxZ3c5W0t4OQxuPMSSY6xqhvY",
    "cSyDARlGvHgPBbyHOTk3MGDTg3A0e5PjwzNhrOKIxBuq1vvy5GIMkATribzukaNS9Sp5zGUkmsp",
    "jGcEXkQoO8qCN3yBgad8gm6I3RxGicspBS3VVfSEfqGa65r2/BfKdeZOPN+tRI2ldscgbNfTeW2",
    "Al4njCk3bFckRzAClspvEE1WwGbyHcBK0bAr0DtstnHMWIZTjIQcWxc8pOW9clRApYXtKyxSJeA",
    "0tmEAIdI8VX060bI4MkqLuI4pp3F0VFLeTWyba5B9EkDpGiMJVYAKp37lKDekygYSopElnVpZeo",
    "YsBleCeqpveGMs5BA5di1mV1zZSHBDQzjAxKwhTXJN9O4zwkxJnWM1wPhB9zhVmGXd5CLWxs9K4",
    "IAEEYS2clIGx5hncYKyS6xsyT9Aa0dUTxqgAkmTspFkMKFj0bUsdScJnPIhF2PekiL2885rgV8B",
    "YNYgklM+OMQSLictVL6c1hKeddPs7trkWJ6JZuTc+sbnwLEaWltt10ACjKomxxYZFVoH69PvsIn",
    "hiiqNhXqSlfqs7tn+/Yl31b/X5vTvb8707w/ycbCz2wuVGNBewlhvN4ny53a+xzPz3S+xHyiD82",
    "7gruRdXt+fwVfmyPVmrkV596rX368V5FXxTgUPi9ufwb3hLcZt5JzVHw5/jX453P359KedH/88+",
    "H2Z/MoN+ZX0u8V9XHPbb23m40eXfdM0S49uJLIy/vB2wR/sWCVfjp8K2v16z/9o58nZ49MvguFe",
    "J5vvhzuL9a0V9L28v217NQziNCfIoB3m+zY7JibbT6R8zOi7sYSPezP+5Hl/fLYe/q39In4eXxs",
    "Fvuw4EKqno+v++/LseLSyHYryW2THu/vFuJpnR/WaHVXv+em/vb8ePpPfWaL/VmEdttK9VI/Yig",
    "m9+Zl5s2TeW5R3XHHev4x7VfT8n5cXb1+ZvqO2Iu7OC+xzniduXftc+6lX/f1FdcMrvP/gFtuxK",
    "N+79NW3za7fPLe+9718/On0d516RFk4Z2eZP8bNX3/e0/+If//lyN87+bhp+cv/AHi6e8AJm+BW",
    "Mtuq57c70v6OO30kgaj5+/WXUU8ur/tL+qr7hfi24zHloRirDz7c2dtZpz79DfVrI4M=",
    ""
  };

  static char newstr [1569] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c23_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c23_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3563787587U));
  ssSetChecksum1(S,(860016744U));
  ssSetChecksum2(S,(850810295U));
  ssSetChecksum3(S,(3997299884U));
}

static void mdlRTW_c23_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c23_dsogi_pll_3ph(SimStruct *S)
{
  SFc23_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc23_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc23_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc23_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c23_dsogi_pll_3ph;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c23_JITStateAnimation,
    chartInstance->c23_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c23_dsogi_pll_3ph(chartInstance);
}

void c23_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c23_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c23_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c23_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c23_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
