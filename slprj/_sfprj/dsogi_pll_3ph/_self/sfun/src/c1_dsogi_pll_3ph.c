/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c1_dsogi_pll_3ph.h"
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
static void initialize_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct *
  chartInstance);
static void mdl_start_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c1_update_jit_animation_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c1_emlrt_update_log_1(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c1_in, emlrtLocationLoggingDataType c1_table[], int32_T
  c1_index);
static void c1_emlrtInitVarDataTables(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c1_dataTables[72],
  emlrtLocationLoggingHistogramType c1_histTables[72]);
static real_T c1_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_b_vd_sogi_alpha, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_c_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_dsogi_pll_3ph, const char_T
  *c1_identifier);
static uint8_T c1_d_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static void init_dsm_address_info(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_dsogi_pll_3ph = 0U;
  chartInstance->c1_emlrtLocLogSimulated = false;
  c1_emlrtInitVarDataTables(chartInstance,
    chartInstance->c1_emlrtLocationLoggingDataTables,
    chartInstance->c1_emlrtLocLogHistTables);
}

static void initialize_params_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c1_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:547:2",            /* mexFileName */
    "Tue Jun  4 19:57:54 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c1_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      72                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c1_emlrtLocationInfo[84] = { { 1,/* MxInfoID */
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

  const int32_T c1_emlrtLocationLoggingFieldCounts[72] = { 0 };

  if (chartInstance->c1_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:547:2");
    emlrtLocationLoggingPushLog(&c1_emlrtLocationLoggingFileInfo,
      &c1_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c1_emlrtLocationLoggingDataTables[0],
      &c1_emlrtLocationInfo[0], NULL, 0U, &c1_emlrtLocationLoggingFieldCounts[0],
      NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:547:2");
  }
}

static void mdl_setup_runtime_resources_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    73U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 893);
}

static void mdl_cleanup_runtime_resources_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c1_b_v_ct_alpha;
  real_T c1_b_v_ct_alpha_k_1;
  real_T c1_b_v_ct_alpha_k_2;
  real_T c1_b_vd_sogi_alpha;
  real_T c1_b_vd_sogi_alpha_k_1;
  real_T c1_b_vd_sogi_alpha_k_2;
  real_T c1_b_vq_sogi_alpha;
  real_T c1_b_vq_sogi_alpha_k_1;
  real_T c1_b_vq_sogi_alpha_k_2;
  real_T c1_b_wolp;
  real_T c1_d_sogi_d1;
  real_T c1_d_sogi_d2;
  real_T c1_d_sogi_d3;
  real_T c1_d_sogi_n1;
  real_T c1_fs;
  real_T c1_k_sogi1;
  real_T c1_q_sogi_d0;
  real_T c1_q_sogi_d1;
  real_T c1_q_sogi_d2;
  real_T c1_q_sogi_n1;
  real_T c1_q_sogi_n2;
  real_T c1_ts;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 7U, *chartInstance->c1_wolp);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U,
                    *chartInstance->c1_vq_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U,
                    *chartInstance->c1_vq_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                    *chartInstance->c1_vd_sogi_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                    *chartInstance->c1_vd_sogi_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U,
                    *chartInstance->c1_v_ct_alpha_k_2);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U,
                    *chartInstance->c1_v_ct_alpha_k_1);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U,
                    *chartInstance->c1_v_ct_alpha);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_b_v_ct_alpha = *chartInstance->c1_v_ct_alpha;
  c1_b_v_ct_alpha_k_1 = *chartInstance->c1_v_ct_alpha_k_1;
  c1_b_v_ct_alpha_k_2 = *chartInstance->c1_v_ct_alpha_k_2;
  c1_b_vd_sogi_alpha_k_1 = *chartInstance->c1_vd_sogi_alpha_k_1;
  c1_b_vd_sogi_alpha_k_2 = *chartInstance->c1_vd_sogi_alpha_k_2;
  c1_b_vq_sogi_alpha_k_1 = *chartInstance->c1_vq_sogi_alpha_k_1;
  c1_b_vq_sogi_alpha_k_2 = *chartInstance->c1_vq_sogi_alpha_k_2;
  c1_b_wolp = *chartInstance->c1_wolp;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  chartInstance->c1_emlrtLocLogSimulated = true;

  /* logging input variable 'v_ct_alpha' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_v_ct_alpha,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'v_ct_alpha_k_1' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_v_ct_alpha_k_1,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'v_ct_alpha_k_2' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_v_ct_alpha_k_2,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'vd_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_vd_sogi_alpha_k_1,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 3);

  /* logging input variable 'vd_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_vd_sogi_alpha_k_2,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 4);

  /* logging input variable 'vq_sogi_alpha_k_1' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_vq_sogi_alpha_k_1,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 5);

  /* logging input variable 'vq_sogi_alpha_k_2' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_vq_sogi_alpha_k_2,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 6);

  /* logging input variable 'wolp' for function 'eML_blk_kernel' */
  c1_emlrt_update_log_1(chartInstance, c1_b_wolp,
                        chartInstance->c1_emlrtLocationLoggingDataTables, 7);
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_k_sogi1 = c1_emlrt_update_log_1(chartInstance, 0.5,
    chartInstance->c1_emlrtLocationLoggingDataTables, 8);
  c1_fs = c1_emlrt_update_log_1(chartInstance, 10000.0,
    chartInstance->c1_emlrtLocationLoggingDataTables, 9);
  c1_ts = c1_emlrt_update_log_1(chartInstance, 0.0001,
    chartInstance->c1_emlrtLocationLoggingDataTables, 10);
  c1_d_sogi_n1 = c1_emlrt_update_log_1(chartInstance, c1_k_sogi1 * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 11);
  c1_d_sogi_d1 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, 2.0 * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 14) -
     c1_emlrt_update_log_1(chartInstance, c1_k_sogi1 * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 15),
     chartInstance->c1_emlrtLocationLoggingDataTables, 13) +
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_ts * 0.5,
    chartInstance->c1_emlrtLocationLoggingDataTables, 18) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 17) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 16),
    chartInstance->c1_emlrtLocationLoggingDataTables, 12);
  c1_d_sogi_d2 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, c1_ts * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 21) * c1_b_wolp,
     chartInstance->c1_emlrtLocationLoggingDataTables, 20) -
    c1_emlrt_update_log_1(chartInstance, 4.0 * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 22),
    chartInstance->c1_emlrtLocationLoggingDataTables, 19);
  c1_d_sogi_d3 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, 2.0 * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 25) +
     c1_emlrt_update_log_1(chartInstance, c1_k_sogi1 * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 26),
     chartInstance->c1_emlrtLocationLoggingDataTables, 24) +
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_ts * 0.5,
    chartInstance->c1_emlrtLocationLoggingDataTables, 29) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 28) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 27),
    chartInstance->c1_emlrtLocationLoggingDataTables, 23);
  c1_b_vd_sogi_alpha = c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_d_sogi_n1 * c1_emlrt_update_log_1
    (chartInstance, c1_b_v_ct_alpha - c1_b_v_ct_alpha_k_2,
     chartInstance->c1_emlrtLocationLoggingDataTables, 34),
    chartInstance->c1_emlrtLocationLoggingDataTables, 33) -
    c1_emlrt_update_log_1(chartInstance, c1_b_vd_sogi_alpha_k_1 * c1_d_sogi_d2,
    chartInstance->c1_emlrtLocationLoggingDataTables, 35),
    chartInstance->c1_emlrtLocationLoggingDataTables, 32) -
    c1_emlrt_update_log_1(chartInstance, c1_b_vd_sogi_alpha_k_2 * c1_d_sogi_d1,
    chartInstance->c1_emlrtLocationLoggingDataTables, 36),
    chartInstance->c1_emlrtLocationLoggingDataTables, 31) / c1_d_sogi_d3,
    chartInstance->c1_emlrtLocationLoggingDataTables, 30);
  c1_q_sogi_n1 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_k_sogi1 * c1_b_wolp,
     chartInstance->c1_emlrtLocationLoggingDataTables, 38) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 37);
  c1_q_sogi_n2 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, c1_k_sogi1 * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 41) * c1_b_wolp,
     chartInstance->c1_emlrtLocationLoggingDataTables, 40) * 2.0,
    chartInstance->c1_emlrtLocationLoggingDataTables, 39);
  c1_q_sogi_d2 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, 4.0 * c1_fs,
     chartInstance->c1_emlrtLocationLoggingDataTables, 45) * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 44) -
     c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, 2.0 * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 48) * c1_k_sogi1,
    chartInstance->c1_emlrtLocationLoggingDataTables, 47) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 46),
     chartInstance->c1_emlrtLocationLoggingDataTables, 43) +
    c1_emlrt_update_log_1(chartInstance, c1_b_wolp * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 49),
    chartInstance->c1_emlrtLocationLoggingDataTables, 42);
  c1_q_sogi_d1 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, 2.0 * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 52) * c1_b_wolp,
     chartInstance->c1_emlrtLocationLoggingDataTables, 51) -
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    8.0 * c1_fs, chartInstance->c1_emlrtLocationLoggingDataTables, 54) * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 53),
    chartInstance->c1_emlrtLocationLoggingDataTables, 50);
  c1_q_sogi_d0 = c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1
    (chartInstance, 4.0 * c1_fs,
     chartInstance->c1_emlrtLocationLoggingDataTables, 58) * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 57) +
     c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, 2.0 * c1_fs,
    chartInstance->c1_emlrtLocationLoggingDataTables, 61) * c1_k_sogi1,
    chartInstance->c1_emlrtLocationLoggingDataTables, 60) * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 59),
     chartInstance->c1_emlrtLocationLoggingDataTables, 56) +
    c1_emlrt_update_log_1(chartInstance, c1_b_wolp * c1_b_wolp,
    chartInstance->c1_emlrtLocationLoggingDataTables, 62),
    chartInstance->c1_emlrtLocationLoggingDataTables, 55);
  c1_b_vq_sogi_alpha = c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_emlrt_update_log_1(chartInstance, c1_emlrt_update_log_1(chartInstance,
    c1_q_sogi_n1 * c1_emlrt_update_log_1(chartInstance, c1_b_v_ct_alpha_k_2 +
    c1_b_v_ct_alpha, chartInstance->c1_emlrtLocationLoggingDataTables, 68),
    chartInstance->c1_emlrtLocationLoggingDataTables, 67) +
    c1_emlrt_update_log_1(chartInstance, c1_q_sogi_n2 * c1_b_v_ct_alpha_k_1,
    chartInstance->c1_emlrtLocationLoggingDataTables, 69),
    chartInstance->c1_emlrtLocationLoggingDataTables, 66) -
    c1_emlrt_update_log_1(chartInstance, c1_b_vq_sogi_alpha_k_2 * c1_q_sogi_d2,
    chartInstance->c1_emlrtLocationLoggingDataTables, 70),
    chartInstance->c1_emlrtLocationLoggingDataTables, 65) -
    c1_emlrt_update_log_1(chartInstance, c1_b_vq_sogi_alpha_k_1 * c1_q_sogi_d1,
    chartInstance->c1_emlrtLocationLoggingDataTables, 71),
    chartInstance->c1_emlrtLocationLoggingDataTables, 64) / c1_q_sogi_d0,
    chartInstance->c1_emlrtLocationLoggingDataTables, 63);
  *chartInstance->c1_vd_sogi_alpha = c1_b_vd_sogi_alpha;
  *chartInstance->c1_vq_sogi_alpha = c1_b_vq_sogi_alpha;
  c1_do_animation_call_c1_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 8U,
                    *chartInstance->c1_vd_sogi_alpha);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 9U,
                    *chartInstance->c1_vq_sogi_alpha);
}

static void ext_mode_exec_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(3, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", chartInstance->c1_vd_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", chartInstance->c1_vq_sogi_alpha, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_vd_sogi_alpha = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 0)), "vd_sogi_alpha");
  *chartInstance->c1_vq_sogi_alpha = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)), "vq_sogi_alpha");
  chartInstance->c1_is_active_c1_dsogi_pll_3ph = c1_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
     "is_active_c1_dsogi_pll_3ph");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_dsogi_pll_3ph(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc1_dsogi_pll_3ph
  (SFc1_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c1_emlrt_update_log_1(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c1_in, emlrtLocationLoggingDataType c1_table[], int32_T
  c1_index)
{
  emlrtLocationLoggingDataType *c1_b_table;
  emlrtLocationLoggingHistogramType *c1_histTable;
  real_T c1_inDouble;
  real_T c1_localMax;
  real_T c1_localMin;
  real_T c1_significand;
  int32_T c1_exponent;
  boolean_T c1_isLoggingEnabledHere;
  (void)chartInstance;
  c1_isLoggingEnabledHere = (c1_index >= 0);
  if (c1_isLoggingEnabledHere) {
    c1_b_table = (emlrtLocationLoggingDataType *)&c1_table[c1_index];
    c1_localMin = c1_b_table[0U].SimMin;
    c1_localMax = c1_b_table[0U].SimMax;
    c1_histTable = c1_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c1_in < c1_localMin) {
      c1_localMin = c1_in;
    }

    if (c1_in > c1_localMax) {
      c1_localMax = c1_in;
    }

    /* Histogram logging. */
    c1_inDouble = c1_in;
    c1_histTable->TotalNumberOfValues++;
    if (c1_inDouble == 0.0) {
      c1_histTable->NumberOfZeros++;
    } else {
      c1_histTable->SimSum += c1_inDouble;
      if ((!muDoubleScalarIsInf(c1_inDouble)) && (!muDoubleScalarIsNaN
           (c1_inDouble))) {
        c1_significand = frexp(c1_inDouble, &c1_exponent);
        if (c1_exponent > 128) {
          c1_exponent = 128;
        }

        if (c1_exponent < -127) {
          c1_exponent = -127;
        }

        if (c1_significand < 0.0) {
          c1_histTable->NumberOfNegativeValues++;
          c1_histTable->HistogramOfNegativeValues[127 + c1_exponent]++;
        } else {
          c1_histTable->NumberOfPositiveValues++;
          c1_histTable->HistogramOfPositiveValues[127 + c1_exponent]++;
        }
      }
    }

    c1_b_table[0U].SimMin = c1_localMin;
    c1_b_table[0U].SimMax = c1_localMax;

    /* IsAlwaysInteger logging. */
    if (c1_in != muDoubleScalarFloor(c1_in)) {
      c1_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c1_in;
}

static void c1_emlrtInitVarDataTables(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c1_dataTables[72],
  emlrtLocationLoggingHistogramType c1_histTables[72])
{
  int32_T c1_i;
  int32_T c1_iH;
  (void)chartInstance;
  for (c1_i = 0; c1_i < 72; c1_i++) {
    c1_dataTables[c1_i].SimMin = rtInf;
    c1_dataTables[c1_i].SimMax = rtMinusInf;
    c1_dataTables[c1_i].OverflowWraps = 0;
    c1_dataTables[c1_i].Saturations = 0;
    c1_dataTables[c1_i].IsAlwaysInteger = true;
    c1_dataTables[c1_i].HistogramTable = &c1_histTables[c1_i];
    c1_histTables[c1_i].NumberOfZeros = 0.0;
    c1_histTables[c1_i].NumberOfPositiveValues = 0.0;
    c1_histTables[c1_i].NumberOfNegativeValues = 0.0;
    c1_histTables[c1_i].TotalNumberOfValues = 0.0;
    c1_histTables[c1_i].SimSum = 0.0;
    for (c1_iH = 0; c1_iH < 256; c1_iH++) {
      c1_histTables[c1_i].HistogramOfPositiveValues[c1_iH] = 0.0;
      c1_histTables[c1_i].HistogramOfNegativeValues[c1_iH] = 0.0;
    }
  }
}

const mxArray *sf_c1_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static real_T c1_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_b_vd_sogi_alpha, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_vd_sogi_alpha),
    &c1_thisId);
  sf_mex_destroy(&c1_b_vd_sogi_alpha);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_d;
  real_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_c_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_dsogi_pll_3ph, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_dsogi_pll_3ph), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_dsogi_pll_3ph);
  return c1_y;
}

static uint8_T c1_d_emlrt_marshallIn(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d9;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 4U:
    c1_d = *chartInstance->c1_v_ct_alpha;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c1_d1 = *chartInstance->c1_vd_sogi_alpha;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c1_d2 = *chartInstance->c1_v_ct_alpha_k_1;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c1_d3 = *chartInstance->c1_v_ct_alpha_k_2;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c1_d4 = *chartInstance->c1_vd_sogi_alpha_k_1;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c1_d5 = *chartInstance->c1_vd_sogi_alpha_k_2;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c1_d6 = *chartInstance->c1_vq_sogi_alpha_k_1;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 11U:
    c1_d7 = *chartInstance->c1_vq_sogi_alpha_k_2;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d7, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c1_d8 = *chartInstance->c1_wolp;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d8, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 13U:
    c1_d9 = *chartInstance->c1_vq_sogi_alpha;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d9, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_v_ct_alpha = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_vd_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_v_ct_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_v_ct_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_vd_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_vd_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c1_vq_sogi_alpha_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c1_vq_sogi_alpha_k_2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c1_wolp = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c1_vq_sogi_alpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(120943480U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1805335508U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1355877111U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3208575783U);
}

mxArray *sf_c1_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c1_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPQ7IOlnwaKfF0m/AJRflhJfnJ+eGZ+YU5"
    "CRCA0nWHgNnH+0yPdPIS38o+BAmX6I/QEE/COF5h8QP7M4PjG5JLMsNT7ZMD4F7LWCnJx444IMh"
    "LkgAAALPydg"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sWXESLLNAGkCvPPROZtYiBB";
}

static void sf_opaque_initialize_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_dsogi_pll_3ph(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_dsogi_pll_3ph
      ((SFc1_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_dsogi_pll_3ph((SFc1_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWMtvG0UYH6chSkRb5YCEFCHRIyAh9SEkDogmfgVLCbG6Tgq9WJPdz96RZ2c287DjqmfE34E",
    "4cuUP4IoQ5174Hzhy5Jv12jXrYO846gsx0no9u/Ob7zHfc0mldUxw3MYr3SNkC+/beG2QyXgnn1",
    "fmrsnzTfJFPn/2LiGhjKAPIrC9HrskfkPYpE0VTTTxH4Im8Ai05NYwKVqiJ8tjmeiBAhHiBqlUx",
    "ouuZonlTAyaVoSOsn4cszAOYml5VMUNaXQi+Pjf6KbWtJFinSkITRMgMrGSth83Oe0v14Iyo1oM",
    "4UDbxFtXGkxgUyeqPrbcsJRD4xLCltCGohb0CnkDQw3UzKWfkp28OpiiZZJyRkV5XcdUB5CidRg",
    "4TSP8PbEGtVcKG8ZUmSrEdAj6iA0y6lJAKepM4+pzJqiRilHeSHjN7VZS3jZHGY/RJbjvGaG8VQ",
    "V0kEomjKdDBE3Uc0PQcw51OLd9T7oBXFjnDWcMRqD8zrdXk0NQtA8nwo/n7Iwal5lRznypJNawB",
    "M6oOgjRdjVEfnEDnU4HFM0ROriNFxYyFbd0R7Eh2oZvrGs5918r1tlkYv16LWxGtzEEb7ua0W2G",
    "okY5137YjkyPYAg8o1+nhq6BndD3AGvNoo5E63DRxjNiWcHQE3JsTYqIlbfKYQGVJbavMUmVgLP",
    "EuQFEqOYZ67ONVvmR1UYmNQw59aOjkvQWsS1hQPVoCKVzjKJMAzKc2ZUn3Yhp50iIRi2ZTMrSO0",
    "x8cC0o0T0r6iOpBqhj32T2QlfOE/zQEPUxMBvIglwDrfuMcluS50T30X/QPE41Rlk/uoh1/rMWO",
    "KRhDJHLnIzDMcZZ3KDsEWuX8g9Q2iEz4zroULG0rCdZDOiYdJ2WOuMUTsVAyJFoKpkEeeW1xK4A",
    "MGpQJZjoVzGFq3ETmS/HtYKLThbdfYscp2dqOD13tnEIArOhk9VVDTREr2oILJGRoetgA/YUixi",
    "hmTaYqMeTVD/Je65+3ycv6vfNK+r33bn6fTe/wnvdSMs+66acdx+ksdvn7tw+N0v0AVP6y3BkAU",
    "dmuOn9ozl85Qq6ZO7u1n8+t35n45/rtwv0NqbP8lHU160Cvc0CfivX18c7P/R++uOXrV8Pf//t5",
    "+9+fFiUu8hHZYGPSvbf4b6/4ddv3c7nH0zrplmUHi4EMrf2qxX28H7BHtxcP/6mEWAGOTgc1Ibt",
    "9qOTJ+ZbVq1m+z3fWM7vjQK/0+d3XK2GTpzFBBW2orxvc3NqJ/1E8Ty3VuhjZ86uCPnz4fXw7+2",
    "X8Z9bBX25+TDqZu5DeRrTgj2/Pnk+WV+ei5chz5396+En9Nsr5NkryLOX9SZd6jIQdIuRbjH+rO",
    "vHvjjyinFvC5//6+Xly1cmn2+vidtYE0deMe668vnWKW/7+rtL4i4prN99g+VYFu996tU3Ta7nx",
    "K+O/DCffzn7TlKLGY+u6NTy19hM9a56+x+x77889TetmxtOf/kH9ScPDgTlY2zNJq1v/rit3HfR",
    "2SsFVF/d/76OfFK2b7xZ8G83HzERyZH+9N79z+5fJz/9DRHyJt8=",
    ""
  };

  static char newstr [1553] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c1_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1721895209U));
  ssSetChecksum1(S,(113368492U));
  ssSetChecksum2(S,(3436070858U));
  ssSetChecksum3(S,(1067746997U));
}

static void mdlRTW_c1_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_dsogi_pll_3ph(SimStruct *S)
{
  SFc1_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc1_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc1_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_dsogi_pll_3ph;
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
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_dsogi_pll_3ph(chartInstance);
}

void c1_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
