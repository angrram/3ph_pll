/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c2_dsogi_pll_3ph.h"
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
static void initialize_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct *
  chartInstance);
static void mdl_start_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c2_update_jit_animation_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void initSimStructsc2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c2_emlrt_update_log_1(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c2_in, emlrtLocationLoggingDataType c2_table[], int32_T
  c2_index);
static void c2_emlrtInitVarDataTables(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c2_dataTables[72],
  emlrtLocationLoggingHistogramType c2_histTables[72]);
static real_T c2_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_b_vd_sogi_alpha, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_c_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_dsogi_pll_3ph, const char_T
  *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c2_chart_data_browse_helper(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static void init_dsm_address_info(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_dsogi_pll_3ph = 0U;
  chartInstance->c2_emlrtLocLogSimulated = false;
  c2_emlrtInitVarDataTables(chartInstance,
    chartInstance->c2_emlrtLocationLoggingDataTables,
    chartInstance->c2_emlrtLocLogHistTables);
}

static void initialize_params_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c2_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:535:2",            /* mexFileName */
    "Tue Jun  4 19:57:55 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c2_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      72                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c2_emlrtLocationInfo[84] = { { 1,/* MxInfoID */
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
      192,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      201,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      204,                             /* TextStart */
      4,                               /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      212,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      225,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      240,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      253,                             /* TextStart */
      39,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      253,                             /* TextStart */
      21,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      254,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      261,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      276,                             /* TextStart */
      15,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      276,                             /* TextStart */
      10,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      276,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      295,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      308,                             /* TextStart */
      21,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      309,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      309,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      324,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      332,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      345,                             /* TextStart */
      39,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      345,                             /* TextStart */
      21,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      346,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      353,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      368,                             /* TextStart */
      15,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      368,                             /* TextStart */
      10,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      368,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      388,                             /* TextStart */
      13,                              /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      403,                             /* TextStart */
      111,                             /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      405,                             /* TextStart */
      97,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      405,                             /* TextStart */
      67,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      405,                             /* TextStart */
      37,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      416,                             /* TextStart */
      25,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      444,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      474,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      518,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      529,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      529,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      549,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      560,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      560,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      560,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      582,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      593,                             /* TextStart */
      41,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      593,                             /* TextStart */
      29,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      594,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      594,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      604,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      604,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      604,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      624,                             /* TextStart */
      9,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      637,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      648,                             /* TextStart */
      23,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      649,                             /* TextStart */
      11,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      649,                             /* TextStart */
      6,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      663,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      663,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      674,                             /* TextStart */
      9,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      685,                             /* TextStart */
      41,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      685,                             /* TextStart */
      29,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      686,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      686,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      696,                             /* TextStart */
      17,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      696,                             /* TextStart */
      12,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      696,                             /* TextStart */
      4,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      716,                             /* TextStart */
      9,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      730,                             /* TextStart */
      13,                              /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      745,                             /* TextStart */
      139,                             /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      746,                             /* TextStart */
      127,                             /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      746,                             /* TextStart */
      97,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      747,                             /* TextStart */
      64,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      747,                             /* TextStart */
      37,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      758,                             /* TextStart */
      25,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      786,                             /* TextStart */
      24,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      815,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      845,                             /* TextStart */
      27,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c2_emlrtLocationLoggingFieldCounts[72] = { 0 };

  if (chartInstance->c2_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:535:2");
    emlrtLocationLoggingPushLog(&c2_emlrtLocationLoggingFileInfo,
      &c2_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c2_emlrtLocationLoggingDataTables[0],
      &c2_emlrtLocationInfo[0], NULL, 0U, &c2_emlrtLocationLoggingFieldCounts[0],
      NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:535:2");
  }
}

static void mdl_setup_runtime_resources_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    73U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 893);
}

static void mdl_cleanup_runtime_resources_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c2_b_v_ct_alpha;
  real_T c2_b_v_ct_alpha_k_1;
  real_T c2_b_v_ct_alpha_k_2;
  real_T c2_b_vd_sogi_alpha;
  real_T c2_b_vd_sogi_alpha_k_1;
  real_T c2_b_vd_sogi_alpha_k_2;
  real_T c2_b_vq_sogi_alpha;
  real_T c2_b_vq_sogi_alpha_k_1;
  real_T c2_b_vq_sogi_alpha_k_2;
  real_T c2_b_wolp;
  real_T c2_d_sogi_d1;
  real_T c2_d_sogi_d2;
  real_T c2_d_sogi_d3;
  real_T c2_d_sogi_n1;
  real_T c2_fs;
  real_T c2_k_sogi1;
  real_T c2_q_sogi_d0;
  real_T c2_q_sogi_d1;
  real_T c2_q_sogi_d2;
  real_T c2_q_sogi_n1;
  real_T c2_q_sogi_n2;
  real_T c2_ts;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 7U, *chartInstance->c2_wolp);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 6U,
                    *chartInstance->c2_vq_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U,
                    *chartInstance->c2_vq_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U,
                    *chartInstance->c2_vd_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U,
                    *chartInstance->c2_vd_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                    *chartInstance->c2_v_ct_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                    *chartInstance->c2_v_ct_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U,
                    *chartInstance->c2_v_ct_alpha);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_b_v_ct_alpha = *chartInstance->c2_v_ct_alpha;
  c2_b_v_ct_alpha_k_1 = *chartInstance->c2_v_ct_alpha_k_1;
  c2_b_v_ct_alpha_k_2 = *chartInstance->c2_v_ct_alpha_k_2;
  c2_b_vd_sogi_alpha_k_1 = *chartInstance->c2_vd_sogi_alpha_k_1;
  c2_b_vd_sogi_alpha_k_2 = *chartInstance->c2_vd_sogi_alpha_k_2;
  c2_b_vq_sogi_alpha_k_1 = *chartInstance->c2_vq_sogi_alpha_k_1;
  c2_b_vq_sogi_alpha_k_2 = *chartInstance->c2_vq_sogi_alpha_k_2;
  c2_b_wolp = *chartInstance->c2_wolp;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  chartInstance->c2_emlrtLocLogSimulated = true;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_v_ct_alpha,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_v_ct_alpha_k_1,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_v_ct_alpha_k_2,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_vd_sogi_alpha_k_1,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 3);

  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_vd_sogi_alpha_k_2,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 4);

  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_vq_sogi_alpha_k_1,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 5);

  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_vq_sogi_alpha_k_2,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 6);

  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  c2_emlrt_update_log_1(chartInstance, c2_b_wolp,
                        chartInstance->c2_emlrtLocationLoggingDataTables, 7);
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_k_sogi1 = c2_emlrt_update_log_1(chartInstance, 0.5,
    chartInstance->c2_emlrtLocationLoggingDataTables, 8);
  c2_fs = c2_emlrt_update_log_1(chartInstance, 10000.0,
    chartInstance->c2_emlrtLocationLoggingDataTables, 9);
  c2_ts = c2_emlrt_update_log_1(chartInstance, 0.0001,
    chartInstance->c2_emlrtLocationLoggingDataTables, 10);
  c2_d_sogi_n1 = c2_emlrt_update_log_1(chartInstance, c2_k_sogi1 * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 11);
  c2_d_sogi_d1 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, 2.0 * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 14) -
     c2_emlrt_update_log_1(chartInstance, c2_k_sogi1 * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 15),
     chartInstance->c2_emlrtLocationLoggingDataTables, 13) +
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_ts * 0.5,
    chartInstance->c2_emlrtLocationLoggingDataTables, 18) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 17) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 16),
    chartInstance->c2_emlrtLocationLoggingDataTables, 12);
  c2_d_sogi_d2 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, c2_ts * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 21) * c2_b_wolp,
     chartInstance->c2_emlrtLocationLoggingDataTables, 20) -
    c2_emlrt_update_log_1(chartInstance, 4.0 * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 22),
    chartInstance->c2_emlrtLocationLoggingDataTables, 19);
  c2_d_sogi_d3 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, 2.0 * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 25) +
     c2_emlrt_update_log_1(chartInstance, c2_k_sogi1 * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 26),
     chartInstance->c2_emlrtLocationLoggingDataTables, 24) +
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_ts * 0.5,
    chartInstance->c2_emlrtLocationLoggingDataTables, 29) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 28) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 27),
    chartInstance->c2_emlrtLocationLoggingDataTables, 23);
  c2_b_vd_sogi_alpha = c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_d_sogi_n1 * c2_emlrt_update_log_1
    (chartInstance, c2_b_v_ct_alpha - c2_b_v_ct_alpha_k_2,
     chartInstance->c2_emlrtLocationLoggingDataTables, 34),
    chartInstance->c2_emlrtLocationLoggingDataTables, 33) -
    c2_emlrt_update_log_1(chartInstance, c2_b_vd_sogi_alpha_k_1 * c2_d_sogi_d2,
    chartInstance->c2_emlrtLocationLoggingDataTables, 35),
    chartInstance->c2_emlrtLocationLoggingDataTables, 32) -
    c2_emlrt_update_log_1(chartInstance, c2_b_vd_sogi_alpha_k_2 * c2_d_sogi_d1,
    chartInstance->c2_emlrtLocationLoggingDataTables, 36),
    chartInstance->c2_emlrtLocationLoggingDataTables, 31) / c2_d_sogi_d3,
    chartInstance->c2_emlrtLocationLoggingDataTables, 30);
  c2_q_sogi_n1 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_k_sogi1 * c2_b_wolp,
     chartInstance->c2_emlrtLocationLoggingDataTables, 38) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 37);
  c2_q_sogi_n2 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, c2_k_sogi1 * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 41) * c2_b_wolp,
     chartInstance->c2_emlrtLocationLoggingDataTables, 40) * 2.0,
    chartInstance->c2_emlrtLocationLoggingDataTables, 39);
  c2_q_sogi_d2 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, 4.0 * c2_fs,
     chartInstance->c2_emlrtLocationLoggingDataTables, 45) * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 44) -
     c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, 2.0 * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 48) * c2_k_sogi1,
    chartInstance->c2_emlrtLocationLoggingDataTables, 47) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 46),
     chartInstance->c2_emlrtLocationLoggingDataTables, 43) +
    c2_emlrt_update_log_1(chartInstance, c2_b_wolp * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 49),
    chartInstance->c2_emlrtLocationLoggingDataTables, 42);
  c2_q_sogi_d1 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, 2.0 * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 52) * c2_b_wolp,
     chartInstance->c2_emlrtLocationLoggingDataTables, 51) -
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    8.0 * c2_fs, chartInstance->c2_emlrtLocationLoggingDataTables, 54) * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 53),
    chartInstance->c2_emlrtLocationLoggingDataTables, 50);
  c2_q_sogi_d0 = c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1
    (chartInstance, 4.0 * c2_fs,
     chartInstance->c2_emlrtLocationLoggingDataTables, 58) * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 57) +
     c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, 2.0 * c2_fs,
    chartInstance->c2_emlrtLocationLoggingDataTables, 61) * c2_k_sogi1,
    chartInstance->c2_emlrtLocationLoggingDataTables, 60) * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 59),
     chartInstance->c2_emlrtLocationLoggingDataTables, 56) +
    c2_emlrt_update_log_1(chartInstance, c2_b_wolp * c2_b_wolp,
    chartInstance->c2_emlrtLocationLoggingDataTables, 62),
    chartInstance->c2_emlrtLocationLoggingDataTables, 55);
  c2_b_vq_sogi_alpha = c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_emlrt_update_log_1(chartInstance, c2_emlrt_update_log_1(chartInstance,
    c2_q_sogi_n1 * c2_emlrt_update_log_1(chartInstance, c2_b_v_ct_alpha_k_2 +
    c2_b_v_ct_alpha, chartInstance->c2_emlrtLocationLoggingDataTables, 68),
    chartInstance->c2_emlrtLocationLoggingDataTables, 67) +
    c2_emlrt_update_log_1(chartInstance, c2_q_sogi_n2 * c2_b_v_ct_alpha_k_1,
    chartInstance->c2_emlrtLocationLoggingDataTables, 69),
    chartInstance->c2_emlrtLocationLoggingDataTables, 66) -
    c2_emlrt_update_log_1(chartInstance, c2_b_vq_sogi_alpha_k_2 * c2_q_sogi_d2,
    chartInstance->c2_emlrtLocationLoggingDataTables, 70),
    chartInstance->c2_emlrtLocationLoggingDataTables, 65) -
    c2_emlrt_update_log_1(chartInstance, c2_b_vq_sogi_alpha_k_1 * c2_q_sogi_d1,
    chartInstance->c2_emlrtLocationLoggingDataTables, 71),
    chartInstance->c2_emlrtLocationLoggingDataTables, 64) / c2_q_sogi_d0,
    chartInstance->c2_emlrtLocationLoggingDataTables, 63);
  *chartInstance->c2_vd_sogi_alpha = c2_b_vd_sogi_alpha;
  *chartInstance->c2_vq_sogi_alpha = c2_b_vq_sogi_alpha;
  c2_do_animation_call_c2_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 8U,
                    *chartInstance->c2_vd_sogi_alpha);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 9U,
                    *chartInstance->c2_vq_sogi_alpha);
}

static void ext_mode_exec_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(3, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_vd_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_vq_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_vd_sogi_alpha = c2_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 0)), "vd_sogi_alpha");
  *chartInstance->c2_vq_sogi_alpha = c2_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)), "vq_sogi_alpha");
  chartInstance->c2_is_active_c2_dsogi_pll_3ph = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 2)),
     "is_active_c2_dsogi_pll_3ph");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_dsogi_pll_3ph(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc2_dsogi_pll_3ph
  (SFc2_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c2_emlrt_update_log_1(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c2_in, emlrtLocationLoggingDataType c2_table[], int32_T
  c2_index)
{
  emlrtLocationLoggingDataType *c2_b_table;
  emlrtLocationLoggingHistogramType *c2_histTable;
  real_T c2_inDouble;
  real_T c2_localMax;
  real_T c2_localMin;
  real_T c2_significand;
  int32_T c2_exponent;
  boolean_T c2_isLoggingEnabledHere;
  (void)chartInstance;
  c2_isLoggingEnabledHere = (c2_index >= 0);
  if (c2_isLoggingEnabledHere) {
    c2_b_table = (emlrtLocationLoggingDataType *)&c2_table[c2_index];
    c2_localMin = c2_b_table[0U].SimMin;
    c2_localMax = c2_b_table[0U].SimMax;
    c2_histTable = c2_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c2_in < c2_localMin) {
      c2_localMin = c2_in;
    }

    if (c2_in > c2_localMax) {
      c2_localMax = c2_in;
    }

    /* Histogram logging. */
    c2_inDouble = c2_in;
    c2_histTable->TotalNumberOfValues++;
    if (c2_inDouble == 0.0) {
      c2_histTable->NumberOfZeros++;
    } else {
      c2_histTable->SimSum += c2_inDouble;
      if ((!muDoubleScalarIsInf(c2_inDouble)) && (!muDoubleScalarIsNaN
           (c2_inDouble))) {
        c2_significand = frexp(c2_inDouble, &c2_exponent);
        if (c2_exponent > 128) {
          c2_exponent = 128;
        }

        if (c2_exponent < -127) {
          c2_exponent = -127;
        }

        if (c2_significand < 0.0) {
          c2_histTable->NumberOfNegativeValues++;
          c2_histTable->HistogramOfNegativeValues[127 + c2_exponent]++;
        } else {
          c2_histTable->NumberOfPositiveValues++;
          c2_histTable->HistogramOfPositiveValues[127 + c2_exponent]++;
        }
      }
    }

    c2_b_table[0U].SimMin = c2_localMin;
    c2_b_table[0U].SimMax = c2_localMax;

    /* IsAlwaysInteger logging. */
    if (c2_in != muDoubleScalarFloor(c2_in)) {
      c2_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c2_in;
}

static void c2_emlrtInitVarDataTables(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c2_dataTables[72],
  emlrtLocationLoggingHistogramType c2_histTables[72])
{
  int32_T c2_i;
  int32_T c2_iH;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 72; c2_i++) {
    c2_dataTables[c2_i].SimMin = rtInf;
    c2_dataTables[c2_i].SimMax = rtMinusInf;
    c2_dataTables[c2_i].OverflowWraps = 0;
    c2_dataTables[c2_i].Saturations = 0;
    c2_dataTables[c2_i].IsAlwaysInteger = true;
    c2_dataTables[c2_i].HistogramTable = &c2_histTables[c2_i];
    c2_histTables[c2_i].NumberOfZeros = 0.0;
    c2_histTables[c2_i].NumberOfPositiveValues = 0.0;
    c2_histTables[c2_i].NumberOfNegativeValues = 0.0;
    c2_histTables[c2_i].TotalNumberOfValues = 0.0;
    c2_histTables[c2_i].SimSum = 0.0;
    for (c2_iH = 0; c2_iH < 256; c2_iH++) {
      c2_histTables[c2_i].HistogramOfPositiveValues[c2_iH] = 0.0;
      c2_histTables[c2_i].HistogramOfNegativeValues[c2_iH] = 0.0;
    }
  }
}

const mxArray *sf_c2_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_b_vd_sogi_alpha, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_vd_sogi_alpha),
    &c2_thisId);
  sf_mex_destroy(&c2_b_vd_sogi_alpha);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_d;
  real_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_dsogi_pll_3ph, const char_T
  *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_dsogi_pll_3ph), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_dsogi_pll_3ph);
  return c2_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_slStringInitializeDynamicBuffers(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d8;
  real_T c2_d9;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 4U:
    c2_d = *chartInstance->c2_v_ct_alpha;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c2_d1 = *chartInstance->c2_vd_sogi_alpha;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c2_d2 = *chartInstance->c2_v_ct_alpha_k_1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c2_d3 = *chartInstance->c2_v_ct_alpha_k_2;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c2_d4 = *chartInstance->c2_vd_sogi_alpha_k_1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c2_d5 = *chartInstance->c2_vd_sogi_alpha_k_2;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c2_d6 = *chartInstance->c2_vq_sogi_alpha_k_1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 11U:
    c2_d7 = *chartInstance->c2_vq_sogi_alpha_k_2;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d7, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c2_d8 = *chartInstance->c2_wolp;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d8, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 13U:
    c2_d9 = *chartInstance->c2_vq_sogi_alpha;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d9, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_v_ct_alpha = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_vd_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_v_ct_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_v_ct_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_vd_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_vd_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c2_vq_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c2_vq_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c2_wolp = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c2_vq_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(120943480U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1805335508U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1355877111U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3208575783U);
}

mxArray *sf_c2_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c2_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPQ7IOlnwaKfF0m/AJRflhJfnJ+eGZ+YU5"
    "CRCA0nWHgNnH+0yPdPIS38o+BAmX6I/QEE/COF5h8QP7M4PjG5JLMsNT7ZKD4F7LWCnJx444IMh"
    "LkgAAALXCdh"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sWXESLLNAGkCvPPROZtYiBB";
}

static void sf_opaque_initialize_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_dsogi_pll_3ph(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_dsogi_pll_3ph
      ((SFc2_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc2_dsogi_pll_3ph((SFc2_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWMtvG0UYH6chSkRb5YCEFCHRIyAhlVRIHFCb+BUsJcTqOin0Yk12P3tHnp3ZzMOOEWfE34E",
    "4cuUP4IoQ5174Hzhy5Jv12jXrYO846gsx0no9u/Ob7zHfc0mldUJw3MUr3SNkC+/beG2QyXgrn1",
    "fmrsnzTfJ5Pv/2bUJCGUEfRGB7PXZF/IawSZsqmmjiPwRN4DFoya1hUrRET5bHMtEDBSLEDVKpj",
    "BddzRLLmRg0rQgdZf0kZmEcxNLyqIob0uhU8PG/0U2taSPFOlMQmiZAZGIlbT9uctpfrgVlRrUY",
    "woG2ibeuNJjApk5UfWK5YSmHxhWELaENRS3oFfIGhhqomSs/JTt5dTBFyyTljIryuo6pDiBF6zB",
    "wlkb4e2oNaq8UNoypMlWI6RD0MRtk1KWAUtSZxtUXTFAjFaO8kfCa262kvG2OMp6gS3DfM0J5qw",
    "roIJVMGE+HCJqo54agFxzqcGH7nnQDuLTOG84ZjED5nW+vJoegaB9OhR/P2Rk1rjKjnPlSSaxhC",
    "ZxTdRii7WqI/OIGOp0OKJojdHAbLyxkKm7pjmJDtA3fWNdy7r9WrLPJxPr1WtiMbmMI3nY1o9sM",
    "RY1yrv2wHZkewxB4Rr9ODV0DO6HvAdaaRR2J1uGijWfEsoKhJ+TYmhQRK2+VwwIqS2xfYpIqAWe",
    "JcwOIUM0z1mcbrfIjq41Mahhy6sfHJektYlvCgOrREErnGEWZBmQ4sytPuhHTzpEQjVoymZSld5",
    "j44FpQontW1EdSDVDHvsnsua6cJ/ihIepjYDaQBbkGWvc55bYkz4nuo/+geZxpjLJ+dBHr/Gctc",
    "EjDGCKXORmHE4yzuEHZI9Yu5R+itENmxnXQoWJpWU+yGNAx6TotdcYpnImBkCPRVDIJ8spriV0B",
    "YNSgSjDRr2IKV+MmMl+OawWXnSy6+xY5Ts/UcHrhbOMIBGZDJ6urGmiIXtUQWCIjQzfBBuwbLGK",
    "EZtpgoh5PUv0k77n6/YA8r983r6nfd+fq9938Cve7kZZ91k057z5IY7fP/bl9bpfoA6b0l+HIAo",
    "7McNP7B3P4yjV0ydzdrf9sbv3Oxj/XbxfobUyf5aOorzsFepsF/Faurw93fuj99McvW78e/f7bz",
    "9/9+Kgod5GPygIfley/w31/y6/fupvP35vWTbMoPVwIZG7tFyvs4d2CPbi5fvJVI8AMcng0qA3b",
    "7cenT83XrFrN9nu2sZzfWwV+p8/vuVoNnTiLCSpsRXnf5ubUTvqJ4nlurdDHzpxdEfLno5vh3zk",
    "o4z93Cvpy82HUzdyH8jSmBXt+dfJ8tL48ly9CnnsHN8NP6LdXyLNXkGcv60261GUg6BYj3WL8Wd",
    "ePfXHkJePeFD7/18uLl69MPt9eE7exJo68ZNxN5fOtU9709feXxF1SWL/7GsuxLN771Kuvm1zPi",
    "F8d+X4+fzj7TlKLGY+u6dTy19hM9a57+x+x77889TetmxtOf/kH9acPDgXlY2zNJq1v/rit3HfR",
    "2SsFVF/f/76KfFK2b7xd8G83HzERyZH++JP9T/dvkp/+BioGJuE=",
    ""
  };

  static char newstr [1553] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c2_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1721895209U));
  ssSetChecksum1(S,(113368492U));
  ssSetChecksum2(S,(3436070858U));
  ssSetChecksum3(S,(1067746997U));
}

static void mdlRTW_c2_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_dsogi_pll_3ph(SimStruct *S)
{
  SFc2_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc2_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc2_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_dsogi_pll_3ph;
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
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_dsogi_pll_3ph(chartInstance);
}

void c2_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
