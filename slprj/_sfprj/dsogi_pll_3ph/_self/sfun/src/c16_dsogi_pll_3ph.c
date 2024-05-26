/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c16_dsogi_pll_3ph.h"
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
static void initialize_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c16_update_jit_animation_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void c16_do_animation_call_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_st);
static void initSimStructsc16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c16_emlrt_update_log_1(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c16_in, emlrtLocationLoggingDataType c16_table[],
  int32_T c16_index);
static void c16_emlrtInitVarDataTables(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c16_dataTables[60],
  emlrtLocationLoggingHistogramType c16_histTables[60]);
static real_T c16_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_b_vd_sogi_alpha, const char_T
  *c16_identifier);
static real_T c16_b_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId);
static uint8_T c16_c_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_b_is_active_c16_dsogi_pll_3ph, const char_T
  *c16_identifier);
static uint8_T c16_d_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId);
static void c16_slStringInitializeDynamicBuffers
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance);
static void c16_chart_data_browse_helper(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c16_ssIdNumber, const mxArray **c16_mxData, uint8_T
  *c16_isValueTooBig);
static void init_dsm_address_info(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c16_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c16_is_active_c16_dsogi_pll_3ph = 0U;
  chartInstance->c16_emlrtLocLogSimulated = false;
  c16_emlrtInitVarDataTables(chartInstance,
    chartInstance->c16_emlrtLocationLoggingDataTables,
    chartInstance->c16_emlrtLocLogHistTables);
}

static void initialize_params_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c16_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:476",              /* mexFileName */
    "Sun May 26 15:34:38 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c16_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      60                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c16_emlrtLocationInfo[69] = { { 1,/* MxInfoID */
      44,                              /* TextStart */
      10,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      55,                              /* TextStart */
      14,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      70,                              /* TextStart */
      14,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      85,                              /* TextStart */
      17,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      103,                             /* TextStart */
      17,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      121,                             /* TextStart */
      17,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      139,                             /* TextStart */
      17,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      157,                             /* TextStart */
      4,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      164,                             /* TextStart */
      7,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      176,                             /* TextStart */
      4,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      190,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      199,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      210,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      223,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      238,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      251,                             /* TextStart */
      39,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      251,                             /* TextStart */
      21,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      252,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      259,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      274,                             /* TextStart */
      15,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      274,                             /* TextStart */
      10,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      274,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      293,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      306,                             /* TextStart */
      21,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      307,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      307,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      322,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      330,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      386,                             /* TextStart */
      13,                              /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      401,                             /* TextStart */
      111,                             /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      403,                             /* TextStart */
      97,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      403,                             /* TextStart */
      67,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      403,                             /* TextStart */
      37,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      414,                             /* TextStart */
      25,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      442,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      472,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      516,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      527,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      527,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      547,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      558,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      558,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      558,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      580,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      591,                             /* TextStart */
      41,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      591,                             /* TextStart */
      29,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      592,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      592,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      602,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      602,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      602,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      622,                             /* TextStart */
      9,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      635,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      646,                             /* TextStart */
      23,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      647,                             /* TextStart */
      11,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      647,                             /* TextStart */
      6,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      661,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      661,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      672,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      728,                             /* TextStart */
      13,                              /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      743,                             /* TextStart */
      139,                             /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      744,                             /* TextStart */
      127,                             /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      744,                             /* TextStart */
      97,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      745,                             /* TextStart */
      64,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      745,                             /* TextStart */
      37,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      756,                             /* TextStart */
      25,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      784,                             /* TextStart */
      24,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      813,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      843,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c16_emlrtLocationLoggingFieldCounts[60] = { 0 };

  if (chartInstance->c16_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:476");
    emlrtLocationLoggingPushLog(&c16_emlrtLocationLoggingFileInfo,
      &c16_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c16_emlrtLocationLoggingDataTables[0],
      &c16_emlrtLocationInfo[0], NULL, 0U, &c16_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:476");
  }
}

static void mdl_setup_runtime_resources_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c16_decisionTxtEndIdx = 0U;
  static const uint32_T c16_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c16_chart_data_browse_helper);
  chartInstance->c16_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c16_RuntimeVar,
    &chartInstance->c16_IsDebuggerActive,
    &chartInstance->c16_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c16_mlFcnLineNumber, &chartInstance->c16_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c16_covrtInstance, 1U, 0U, 1U,
    73U);
  covrtChartInitFcn(chartInstance->c16_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c16_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c16_decisionTxtStartIdx, &c16_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c16_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c16_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c16_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 891);
}

static void mdl_cleanup_runtime_resources_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c16_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c16_covrtInstance);
}

static void enable_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c16_b_v_ct_alpha;
  real_T c16_b_v_ct_alpha_k_1;
  real_T c16_b_v_ct_alpha_k_2;
  real_T c16_b_vd_sogi_alpha;
  real_T c16_b_vd_sogi_alpha_k_1;
  real_T c16_b_vd_sogi_alpha_k_2;
  real_T c16_b_vq_sogi_alpha;
  real_T c16_b_vq_sogi_alpha_k_1;
  real_T c16_b_vq_sogi_alpha_k_2;
  real_T c16_b_wolp;
  real_T c16_c_wolp;
  real_T c16_d_sogi_d1;
  real_T c16_d_sogi_d2;
  real_T c16_d_sogi_n1;
  real_T c16_fs;
  real_T c16_k_sogi1;
  real_T c16_q_sogi_d1;
  real_T c16_q_sogi_d2;
  real_T c16_q_sogi_n1;
  real_T c16_q_sogi_n2;
  real_T c16_ts;
  chartInstance->c16_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 7U,
                    *chartInstance->c16_wolp);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 6U,
                    *chartInstance->c16_vq_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 5U,
                    *chartInstance->c16_vq_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 4U,
                    *chartInstance->c16_vd_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 3U,
                    *chartInstance->c16_vd_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 2U,
                    *chartInstance->c16_v_ct_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 1U,
                    *chartInstance->c16_v_ct_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 0U,
                    *chartInstance->c16_v_ct_alpha);
  chartInstance->c16_sfEvent = CALL_EVENT;
  c16_b_v_ct_alpha = *chartInstance->c16_v_ct_alpha;
  c16_b_v_ct_alpha_k_1 = *chartInstance->c16_v_ct_alpha_k_1;
  c16_b_v_ct_alpha_k_2 = *chartInstance->c16_v_ct_alpha_k_2;
  c16_b_vd_sogi_alpha_k_1 = *chartInstance->c16_vd_sogi_alpha_k_1;
  c16_b_vd_sogi_alpha_k_2 = *chartInstance->c16_vd_sogi_alpha_k_2;
  c16_b_vq_sogi_alpha_k_1 = *chartInstance->c16_vq_sogi_alpha_k_1;
  c16_b_vq_sogi_alpha_k_2 = *chartInstance->c16_vq_sogi_alpha_k_2;
  c16_b_wolp = *chartInstance->c16_wolp;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  chartInstance->c16_emlrtLocLogSimulated = true;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_v_ct_alpha,
    chartInstance->c16_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_v_ct_alpha_k_1,
    chartInstance->c16_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_v_ct_alpha_k_2,
    chartInstance->c16_emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_vd_sogi_alpha_k_1,
    chartInstance->c16_emlrtLocationLoggingDataTables, 3);

  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_vd_sogi_alpha_k_2,
    chartInstance->c16_emlrtLocationLoggingDataTables, 4);

  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_vq_sogi_alpha_k_1,
    chartInstance->c16_emlrtLocationLoggingDataTables, 5);

  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_vq_sogi_alpha_k_2,
    chartInstance->c16_emlrtLocationLoggingDataTables, 6);

  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  c16_emlrt_update_log_1(chartInstance, c16_b_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 7);
  covrtEmlFcnEval(chartInstance->c16_covrtInstance, 4U, 0, 0);
  c16_k_sogi1 = c16_emlrt_update_log_1(chartInstance, 0.5,
    chartInstance->c16_emlrtLocationLoggingDataTables, 8);
  c16_c_wolp = c16_emlrt_update_log_1(chartInstance, 314.15926535897933,
    chartInstance->c16_emlrtLocationLoggingDataTables, 9);
  c16_fs = c16_emlrt_update_log_1(chartInstance, 10000.0,
    chartInstance->c16_emlrtLocationLoggingDataTables, 10);
  c16_ts = c16_emlrt_update_log_1(chartInstance, 0.0001,
    chartInstance->c16_emlrtLocationLoggingDataTables, 11);
  c16_d_sogi_n1 = c16_emlrt_update_log_1(chartInstance, c16_k_sogi1 * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 12);
  c16_d_sogi_d1 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_emlrt_update_log_1(chartInstance, 2.0 * c16_fs,
    chartInstance->c16_emlrtLocationLoggingDataTables, 15) -
     c16_emlrt_update_log_1(chartInstance, c16_k_sogi1 * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 16),
     chartInstance->c16_emlrtLocationLoggingDataTables, 14) +
    c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, c16_ts * 0.5,
    chartInstance->c16_emlrtLocationLoggingDataTables, 19) * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 18) * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 17),
    chartInstance->c16_emlrtLocationLoggingDataTables, 13);
  c16_d_sogi_d2 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_emlrt_update_log_1(chartInstance, c16_ts * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 22) * c16_c_wolp,
     chartInstance->c16_emlrtLocationLoggingDataTables, 21) -
    c16_emlrt_update_log_1(chartInstance, 4.0 * c16_fs,
    chartInstance->c16_emlrtLocationLoggingDataTables, 23),
    chartInstance->c16_emlrtLocationLoggingDataTables, 20);
  c16_emlrt_update_log_1(chartInstance, 20162.014434880031,
    chartInstance->c16_emlrtLocationLoggingDataTables, 24);
  c16_b_vd_sogi_alpha = c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, c16_d_sogi_n1 * c16_emlrt_update_log_1
    (chartInstance, c16_b_v_ct_alpha - c16_b_v_ct_alpha_k_2,
     chartInstance->c16_emlrtLocationLoggingDataTables, 29),
    chartInstance->c16_emlrtLocationLoggingDataTables, 28) -
    c16_emlrt_update_log_1(chartInstance, c16_b_vd_sogi_alpha_k_1 *
    c16_d_sogi_d2, chartInstance->c16_emlrtLocationLoggingDataTables, 30),
    chartInstance->c16_emlrtLocationLoggingDataTables, 27) -
    c16_emlrt_update_log_1(chartInstance, c16_b_vd_sogi_alpha_k_2 *
    c16_d_sogi_d1, chartInstance->c16_emlrtLocationLoggingDataTables, 31),
    chartInstance->c16_emlrtLocationLoggingDataTables, 26) / 20162.014434880031,
    chartInstance->c16_emlrtLocationLoggingDataTables, 25);
  c16_q_sogi_n1 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_k_sogi1 * c16_c_wolp,
     chartInstance->c16_emlrtLocationLoggingDataTables, 33) * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 32);
  c16_q_sogi_n2 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_emlrt_update_log_1(chartInstance, c16_k_sogi1 *
    c16_c_wolp, chartInstance->c16_emlrtLocationLoggingDataTables, 36) *
     c16_c_wolp, chartInstance->c16_emlrtLocationLoggingDataTables, 35) * 2.0,
    chartInstance->c16_emlrtLocationLoggingDataTables, 34);
  c16_q_sogi_d2 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, 4.0 * c16_fs,
     chartInstance->c16_emlrtLocationLoggingDataTables, 40) * c16_fs,
    chartInstance->c16_emlrtLocationLoggingDataTables, 39) -
     c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, 2.0 * c16_fs,
    chartInstance->c16_emlrtLocationLoggingDataTables, 43) * c16_k_sogi1,
    chartInstance->c16_emlrtLocationLoggingDataTables, 42) * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 41),
     chartInstance->c16_emlrtLocationLoggingDataTables, 38) +
    c16_emlrt_update_log_1(chartInstance, c16_c_wolp * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 44),
    chartInstance->c16_emlrtLocationLoggingDataTables, 37);
  c16_q_sogi_d1 = c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1
    (chartInstance, c16_emlrt_update_log_1(chartInstance, 2.0 * c16_c_wolp,
    chartInstance->c16_emlrtLocationLoggingDataTables, 47) * c16_c_wolp,
     chartInstance->c16_emlrtLocationLoggingDataTables, 46) -
    c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    8.0 * c16_fs, chartInstance->c16_emlrtLocationLoggingDataTables, 49) *
    c16_fs, chartInstance->c16_emlrtLocationLoggingDataTables, 48),
    chartInstance->c16_emlrtLocationLoggingDataTables, 45);
  c16_emlrt_update_log_1(chartInstance, 4.0324028869760066E+8,
    chartInstance->c16_emlrtLocationLoggingDataTables, 50);
  c16_b_vq_sogi_alpha = c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    c16_emlrt_update_log_1(chartInstance, c16_emlrt_update_log_1(chartInstance,
    c16_q_sogi_n1 * c16_emlrt_update_log_1(chartInstance, c16_b_v_ct_alpha_k_2 +
    c16_b_v_ct_alpha, chartInstance->c16_emlrtLocationLoggingDataTables, 56),
    chartInstance->c16_emlrtLocationLoggingDataTables, 55) +
    c16_emlrt_update_log_1(chartInstance, c16_q_sogi_n2 * c16_b_v_ct_alpha_k_1,
    chartInstance->c16_emlrtLocationLoggingDataTables, 57),
    chartInstance->c16_emlrtLocationLoggingDataTables, 54) -
    c16_emlrt_update_log_1(chartInstance, c16_b_vq_sogi_alpha_k_2 *
    c16_q_sogi_d2, chartInstance->c16_emlrtLocationLoggingDataTables, 58),
    chartInstance->c16_emlrtLocationLoggingDataTables, 53) -
    c16_emlrt_update_log_1(chartInstance, c16_b_vq_sogi_alpha_k_1 *
    c16_q_sogi_d1, chartInstance->c16_emlrtLocationLoggingDataTables, 59),
    chartInstance->c16_emlrtLocationLoggingDataTables, 52) /
    4.0324028869760066E+8, chartInstance->c16_emlrtLocationLoggingDataTables, 51);
  *chartInstance->c16_vd_sogi_alpha = c16_b_vd_sogi_alpha;
  *chartInstance->c16_vq_sogi_alpha = c16_b_vq_sogi_alpha;
  c16_do_animation_call_c16_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 8U,
                    *chartInstance->c16_vd_sogi_alpha);
  covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 9U,
                    *chartInstance->c16_vq_sogi_alpha);
}

static void ext_mode_exec_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c16_update_jit_animation_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c16_do_animation_call_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c16_b_y = NULL;
  const mxArray *c16_c_y = NULL;
  const mxArray *c16_d_y = NULL;
  const mxArray *c16_st;
  const mxArray *c16_y = NULL;
  c16_st = NULL;
  c16_st = NULL;
  c16_y = NULL;
  sf_mex_assign(&c16_y, sf_mex_createcellmatrix(3, 1), false);
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", chartInstance->c16_vd_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_y, 0, c16_b_y);
  c16_c_y = NULL;
  sf_mex_assign(&c16_c_y, sf_mex_create("y", chartInstance->c16_vq_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_y, 1, c16_c_y);
  c16_d_y = NULL;
  sf_mex_assign(&c16_d_y, sf_mex_create("y",
    &chartInstance->c16_is_active_c16_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_y, 2, c16_d_y);
  sf_mex_assign(&c16_st, c16_y, false);
  return c16_st;
}

static void set_sim_state_c16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_st)
{
  const mxArray *c16_u;
  chartInstance->c16_doneDoubleBufferReInit = true;
  c16_u = sf_mex_dup(c16_st);
  *chartInstance->c16_vd_sogi_alpha = c16_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c16_u, 0)), "vd_sogi_alpha");
  *chartInstance->c16_vq_sogi_alpha = c16_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c16_u, 1)), "vq_sogi_alpha");
  chartInstance->c16_is_active_c16_dsogi_pll_3ph = c16_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c16_u, 2)),
     "is_active_c16_dsogi_pll_3ph");
  sf_mex_destroy(&c16_u);
  sf_mex_destroy(&c16_st);
}

static void initSimStructsc16_dsogi_pll_3ph(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc16_dsogi_pll_3ph
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c16_emlrt_update_log_1(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c16_in, emlrtLocationLoggingDataType c16_table[],
  int32_T c16_index)
{
  emlrtLocationLoggingDataType *c16_b_table;
  emlrtLocationLoggingHistogramType *c16_histTable;
  real_T c16_inDouble;
  real_T c16_localMax;
  real_T c16_localMin;
  real_T c16_significand;
  int32_T c16_exponent;
  boolean_T c16_isLoggingEnabledHere;
  (void)chartInstance;
  c16_isLoggingEnabledHere = (c16_index >= 0);
  if (c16_isLoggingEnabledHere) {
    c16_b_table = (emlrtLocationLoggingDataType *)&c16_table[c16_index];
    c16_localMin = c16_b_table[0U].SimMin;
    c16_localMax = c16_b_table[0U].SimMax;
    c16_histTable = c16_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c16_in < c16_localMin) {
      c16_localMin = c16_in;
    }

    if (c16_in > c16_localMax) {
      c16_localMax = c16_in;
    }

    /* Histogram logging. */
    c16_inDouble = c16_in;
    c16_histTable->TotalNumberOfValues++;
    if (c16_inDouble == 0.0) {
      c16_histTable->NumberOfZeros++;
    } else {
      c16_histTable->SimSum += c16_inDouble;
      if ((!muDoubleScalarIsInf(c16_inDouble)) && (!muDoubleScalarIsNaN
           (c16_inDouble))) {
        c16_significand = frexp(c16_inDouble, &c16_exponent);
        if (c16_exponent > 128) {
          c16_exponent = 128;
        }

        if (c16_exponent < -127) {
          c16_exponent = -127;
        }

        if (c16_significand < 0.0) {
          c16_histTable->NumberOfNegativeValues++;
          c16_histTable->HistogramOfNegativeValues[127 + c16_exponent]++;
        } else {
          c16_histTable->NumberOfPositiveValues++;
          c16_histTable->HistogramOfPositiveValues[127 + c16_exponent]++;
        }
      }
    }

    c16_b_table[0U].SimMin = c16_localMin;
    c16_b_table[0U].SimMax = c16_localMax;

    /* IsAlwaysInteger logging. */
    if (c16_in != muDoubleScalarFloor(c16_in)) {
      c16_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c16_in;
}

static void c16_emlrtInitVarDataTables(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c16_dataTables[60],
  emlrtLocationLoggingHistogramType c16_histTables[60])
{
  int32_T c16_i;
  int32_T c16_iH;
  (void)chartInstance;
  for (c16_i = 0; c16_i < 60; c16_i++) {
    c16_dataTables[c16_i].SimMin = rtInf;
    c16_dataTables[c16_i].SimMax = rtMinusInf;
    c16_dataTables[c16_i].OverflowWraps = 0;
    c16_dataTables[c16_i].Saturations = 0;
    c16_dataTables[c16_i].IsAlwaysInteger = true;
    c16_dataTables[c16_i].HistogramTable = &c16_histTables[c16_i];
    c16_histTables[c16_i].NumberOfZeros = 0.0;
    c16_histTables[c16_i].NumberOfPositiveValues = 0.0;
    c16_histTables[c16_i].NumberOfNegativeValues = 0.0;
    c16_histTables[c16_i].TotalNumberOfValues = 0.0;
    c16_histTables[c16_i].SimSum = 0.0;
    for (c16_iH = 0; c16_iH < 256; c16_iH++) {
      c16_histTables[c16_i].HistogramOfPositiveValues[c16_iH] = 0.0;
      c16_histTables[c16_i].HistogramOfNegativeValues[c16_iH] = 0.0;
    }
  }
}

const mxArray *sf_c16_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c16_nameCaptureInfo = NULL;
  c16_nameCaptureInfo = NULL;
  sf_mex_assign(&c16_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c16_nameCaptureInfo;
}

static real_T c16_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_b_vd_sogi_alpha, const char_T
  *c16_identifier)
{
  emlrtMsgIdentifier c16_thisId;
  real_T c16_y;
  c16_thisId.fIdentifier = (const char_T *)c16_identifier;
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_y = c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_b_vd_sogi_alpha),
    &c16_thisId);
  sf_mex_destroy(&c16_b_vd_sogi_alpha);
  return c16_y;
}

static real_T c16_b_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId)
{
  real_T c16_d;
  real_T c16_y;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), &c16_d, 1, 0, 0U, 0, 0U, 0);
  c16_y = c16_d;
  sf_mex_destroy(&c16_u);
  return c16_y;
}

static uint8_T c16_c_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_b_is_active_c16_dsogi_pll_3ph, const char_T
  *c16_identifier)
{
  emlrtMsgIdentifier c16_thisId;
  uint8_T c16_y;
  c16_thisId.fIdentifier = (const char_T *)c16_identifier;
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_y = c16_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c16_b_is_active_c16_dsogi_pll_3ph), &c16_thisId);
  sf_mex_destroy(&c16_b_is_active_c16_dsogi_pll_3ph);
  return c16_y;
}

static uint8_T c16_d_emlrt_marshallIn(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId)
{
  uint8_T c16_b_u;
  uint8_T c16_y;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), &c16_b_u, 1, 3, 0U, 0, 0U, 0);
  c16_y = c16_b_u;
  sf_mex_destroy(&c16_u);
  return c16_y;
}

static void c16_slStringInitializeDynamicBuffers
  (SFc16_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c16_chart_data_browse_helper(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c16_ssIdNumber, const mxArray **c16_mxData, uint8_T
  *c16_isValueTooBig)
{
  real_T c16_d;
  real_T c16_d1;
  real_T c16_d2;
  real_T c16_d3;
  real_T c16_d4;
  real_T c16_d5;
  real_T c16_d6;
  real_T c16_d7;
  real_T c16_d8;
  real_T c16_d9;
  *c16_mxData = NULL;
  *c16_mxData = NULL;
  *c16_isValueTooBig = 0U;
  switch (c16_ssIdNumber) {
   case 4U:
    c16_d = *chartInstance->c16_v_ct_alpha;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c16_d1 = *chartInstance->c16_vd_sogi_alpha;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c16_d2 = *chartInstance->c16_v_ct_alpha_k_1;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c16_d3 = *chartInstance->c16_v_ct_alpha_k_2;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c16_d4 = *chartInstance->c16_vd_sogi_alpha_k_1;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c16_d5 = *chartInstance->c16_vd_sogi_alpha_k_2;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c16_d6 = *chartInstance->c16_vq_sogi_alpha_k_1;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 11U:
    c16_d7 = *chartInstance->c16_vq_sogi_alpha_k_2;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d7, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c16_d8 = *chartInstance->c16_wolp;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d8, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 13U:
    c16_d9 = *chartInstance->c16_vq_sogi_alpha;
    sf_mex_assign(c16_mxData, sf_mex_create("mxData", &c16_d9, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc16_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c16_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c16_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c16_v_ct_alpha = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c16_vd_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c16_v_ct_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c16_v_ct_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c16_vd_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c16_vd_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c16_vq_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c16_vq_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c16_wolp = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c16_vq_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c16_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1266194378U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1427579315U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2586113651U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3878614652U);
}

mxArray *sf_c16_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c16_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c16_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c16_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPQ7IOlnwaKfF0m/AJRflhJfnJ+eGZ+YU5"
    "CRCA0nWHgNnH+0yPdPIS38o+BAmX6I/QEE/CON5h8QP7M4PjG5JLMsNT7Z0Cw+Bey3gpyceOOCD"
    "Li5IAAADAknmA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c16_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sTKqLrQKrSjF53fP0TbntfF";
}

static void sf_opaque_initialize_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c16_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c16_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c16_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc16_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c16_dsogi_pll_3ph
      ((SFc16_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc16_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c16_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c16_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc16_dsogi_pll_3ph((SFc16_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c16_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWN1uG0UUXjshSkUbFQkJiSLRS0CqlDYq4gJBEv8Uqw5xWSdI3Fjj3WPv4NmZzfz4B/UBeAD",
    "gFbjmbfoSSFxyyZn12jEb195xCG0RK63XszvfnHO+PX+zXqlx4uGxh+f4fc/bwesunmVveryVjU",
    "sL5/T+tvd5Nn7+tucFIoQ+cN/0enTsuR3cxC0iSaw894OTGL4BJZjRVPAG74niWMp7IIEHuEAip",
    "HaSq2hsGOWDuuGBlay+jWgQ+ZEwLDzGBUl4ytnkZXITo1sosUolBLoOEOpICtOP6oz0V7Mg9agS",
    "QTBQJnbmSoH2TWJNVSeGaZowqI0haHClCbKg1tjra6KhosduJFt7lT9DizhhlPDiXEdE+ZCgd2g",
    "4S0L8PTUa2SuEDSIi9TFEZAiqSQepdMGhkHSqcHaXcqKFpITVYlaxqxW0t8XQxhMMCeb6jtDeYw",
    "lkkAjKtWNA+HXkucZJl0EVuqbvKNeHC2Oj4ZzCCKTb++1VxBAk6cMpd9M5fUe1ceqU81gqiNU0h",
    "nMijwL0XQWhW97AoFM+QXeENi7jhIWU4oZqSzpE33DNdQ0b/hvlOhNPvV9thE3l1obg7FdzufWA",
    "Vwhjyg3bFkkThsBS+VWiyQbYqXwHsFI0bAv0DpttHDOW4RQjIcNWBA9pca8c5lBpYfsai1QBOI1",
    "tGECINM9Vny+0Lo6M0iKuYMqpNpsF5V3FNrgG2SMBFK4xklAFqHDqV45yQ6psICEaWdKplYVXmM",
    "bgRlBP9QyvjoQcIMeuxeySKxsJbmgI+5iYNaRJrobefU6YKahzrPoYP+geZwqzrJtcxNr42Qgck",
    "CCC0FZOyuAE8ywuUPQVK1vyj9DaIdWTKqhA0qRoJBlM6Fh0LUvtSQJnfMDFiNeliP2s81rhVwCY",
    "NYjklPePsYTLSR2VL6a1hIt2mt1dmxzLM9GMdK1vPAGO1dDaarsGEmBU1Ti2yKjQdbA+/QGbGK6",
    "o0lioJ9NSP617tn//yrvs37eX9O/vLPTvd7Nx8PDTTqhEn3YSxjoHSZQ9t+vtL6x3u8B+oAjOu4",
    "K7lDe7frSALy2R6y1c7fzPFubfKv99/m5OXnl2Lzss/nABfycnbzuH38m4e/Zb/deP4Zfno59+f",
    "7D1c/dJ3u68HqUrepTS/xb345bbvmsvG38w65/m2Xp4JaEV8Yv3cn5hx6r99KIpnz2V/vf1xwe9",
    "1n67y3Wvnq73orxa362cvrP7923PhsGc5gYZNMJs/2bHxEz3Ffn3ubOGj1sLfuV5f3x5Pfy7h3l",
    "/WMbXnRxfdjwMO2kUEZZEJOfPr86eTza35+Im7Ll/eD38VH5rjT33cvbcS/coHWIrEXSWZ7y9l+",
    "Q9lzh2xXn/Mu5N0fN/Xm7eviL1fHdDXPkG+4d/Endd+1z7lDd9/v6KvOvl5t99je1Yle9d+tXXz",
    "a4Xnlsf+WE2/mL+vaQSURYu2bFlj3FT1Vv29D/i33868jfrm2uWv+zD+ncHR5ywCW7Rplvg7HZL",
    "2u+j80cSiFq+D34V9WR2Xdcn3s7Ftx2PKA/FSD14+Ojxo+vUp78AvRcmRA==",
    ""
  };

  static char newstr [1561] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c16_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c16_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2806427985U));
  ssSetChecksum1(S,(2090231081U));
  ssSetChecksum2(S,(770544759U));
  ssSetChecksum3(S,(1197643011U));
}

static void mdlRTW_c16_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c16_dsogi_pll_3ph(SimStruct *S)
{
  SFc16_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc16_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc16_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc16_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c16_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c16_dsogi_pll_3ph;
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
    chartInstance->c16_JITStateAnimation,
    chartInstance->c16_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c16_dsogi_pll_3ph(chartInstance);
}

void c16_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c16_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c16_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c16_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c16_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
