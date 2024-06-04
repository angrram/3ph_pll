/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c25_dsogi_pll_3ph.h"
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
static void initialize_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c25_update_jit_animation_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void c25_do_animation_call_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_st);
static void initSimStructsc25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c25_emlrt_update_log_1(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c25_in, emlrtLocationLoggingDataType c25_table[],
  int32_T c25_index);
static void c25_emlrtInitVarDataTables(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c25_dataTables[20],
  emlrtLocationLoggingHistogramType c25_histTables[20]);
static real_T c25_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_b_w_pi, const char_T *c25_identifier);
static real_T c25_b_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static uint8_T c25_c_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_dsogi_pll_3ph, const char_T
  *c25_identifier);
static uint8_T c25_d_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_slStringInitializeDynamicBuffers
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance);
static void c25_chart_data_browse_helper(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c25_ssIdNumber, const mxArray **c25_mxData, uint8_T
  *c25_isValueTooBig);
static void init_dsm_address_info(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c25_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c25_is_active_c25_dsogi_pll_3ph = 0U;
  chartInstance->c25_emlrtLocLogSimulated = false;
  c25_emlrtInitVarDataTables(chartInstance,
    chartInstance->c25_emlrtLocationLoggingDataTables,
    chartInstance->c25_emlrtLocLogHistTables);
}

static void initialize_params_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c25_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:708",              /* mexFileName */
    "Tue Jun  4 19:57:58 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c25_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      20                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c25_emlrtLocationInfo[26] = { { 1,/* MxInfoID */
      24,                              /* TextStart */
      7,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      32,                              /* TextStart */
      11,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      44,                              /* TextStart */
      8,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      55,                              /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      63,                              /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      66,                              /* TextStart */
      4,                               /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      72,                              /* TextStart */
      5,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      78,                              /* TextStart */
      8,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      78,                              /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      99,                              /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      115,                             /* TextStart */
      11,                              /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      136,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      140,                             /* TextStart */
      26,                              /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      140,                             /* TextStart */
      14,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      140,                             /* TextStart */
      7,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      168,                             /* TextStart */
      2,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      173,                             /* TextStart */
      29,                              /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      205,                             /* TextStart */
      5,                               /* TextLength */
      2,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      215,                             /* TextStart */
      5,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      221,                             /* TextStart */
      10,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      222,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      235,                             /* TextStart */
      4,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      241,                             /* TextStart */
      44,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      241,                             /* TextStart */
      35,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      241,                             /* TextStart */
      15,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      257,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c25_emlrtLocationLoggingFieldCounts[20] = { 0 };

  if (chartInstance->c25_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:708");
    emlrtLocationLoggingPushLog(&c25_emlrtLocationLoggingFileInfo,
      &c25_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c25_emlrtLocationLoggingDataTables[0],
      &c25_emlrtLocationInfo[0], NULL, 0U, &c25_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:708");
  }
}

static void mdl_setup_runtime_resources_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c25_decisionTxtEndIdx = 0U;
  static const uint32_T c25_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c25_chart_data_browse_helper);
  chartInstance->c25_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c25_RuntimeVar,
    &chartInstance->c25_IsDebuggerActive,
    &chartInstance->c25_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c25_mlFcnLineNumber, &chartInstance->c25_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c25_covrtInstance, 1U, 0U, 1U,
    67U);
  covrtChartInitFcn(chartInstance->c25_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c25_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c25_decisionTxtStartIdx, &c25_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c25_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c25_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c25_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 292);
}

static void mdl_cleanup_runtime_resources_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c25_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c25_covrtInstance);
}

static void enable_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c25_b_vq_park;
  real_T c25_b_vq_park_k_1;
  real_T c25_b_w_pi;
  real_T c25_b_w_pi_k_1;
  real_T c25_ki;
  real_T c25_kp;
  real_T c25_pi_n1;
  real_T c25_pi_n2;
  real_T c25_sig_pi;
  real_T c25_ts;
  real_T c25_vac_peak_pi;
  real_T c25_wn_pi;
  chartInstance->c25_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c25_covrtInstance, 2U,
                    *chartInstance->c25_w_pi_k_1);
  covrtSigUpdateFcn(chartInstance->c25_covrtInstance, 1U,
                    *chartInstance->c25_vq_park_k_1);
  covrtSigUpdateFcn(chartInstance->c25_covrtInstance, 0U,
                    *chartInstance->c25_vq_park);
  chartInstance->c25_sfEvent = CALL_EVENT;
  c25_b_vq_park = *chartInstance->c25_vq_park;
  c25_b_vq_park_k_1 = *chartInstance->c25_vq_park_k_1;
  c25_b_w_pi_k_1 = *chartInstance->c25_w_pi_k_1;

  /* logging input variable 'vq_park' for function 'eML_blk_kernel' */
  /* logging input variable 'vq_park_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'w_pi_k_1' for function 'eML_blk_kernel' */
  chartInstance->c25_emlrtLocLogSimulated = true;

  /* logging input variable 'vq_park' for function 'eML_blk_kernel' */
  c25_emlrt_update_log_1(chartInstance, c25_b_vq_park,
    chartInstance->c25_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'vq_park_k_1' for function 'eML_blk_kernel' */
  c25_emlrt_update_log_1(chartInstance, c25_b_vq_park_k_1,
    chartInstance->c25_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'w_pi_k_1' for function 'eML_blk_kernel' */
  c25_emlrt_update_log_1(chartInstance, c25_b_w_pi_k_1,
    chartInstance->c25_emlrtLocationLoggingDataTables, 2);
  covrtEmlFcnEval(chartInstance->c25_covrtInstance, 4U, 0, 0);
  c25_emlrt_update_log_1(chartInstance, 10000.0,
    chartInstance->c25_emlrtLocationLoggingDataTables, 3);
  c25_ts = c25_emlrt_update_log_1(chartInstance, 0.0001,
    chartInstance->c25_emlrtLocationLoggingDataTables, 4);
  c25_wn_pi = c25_emlrt_update_log_1(chartInstance, c25_emlrt_update_log_1
    (chartInstance, 200.0, chartInstance->c25_emlrtLocationLoggingDataTables, 6)
    * 3.1415926535897931, chartInstance->c25_emlrtLocationLoggingDataTables, 5);
  c25_sig_pi = c25_emlrt_update_log_1(chartInstance, 0.5,
    chartInstance->c25_emlrtLocationLoggingDataTables, 7);
  c25_vac_peak_pi = c25_emlrt_update_log_1(chartInstance, 0.98999999999999988,
    chartInstance->c25_emlrtLocationLoggingDataTables, 8);
  c25_kp = c25_emlrt_update_log_1(chartInstance, c25_emlrt_update_log_1
    (chartInstance, c25_emlrt_update_log_1(chartInstance, 2.0 * c25_wn_pi,
    chartInstance->c25_emlrtLocationLoggingDataTables, 11) * c25_sig_pi,
     chartInstance->c25_emlrtLocationLoggingDataTables, 10) /
    0.98999999999999988, chartInstance->c25_emlrtLocationLoggingDataTables, 9);
  c25_ki = c25_emlrt_update_log_1(chartInstance, c25_vac_peak_pi,
    chartInstance->c25_emlrtLocationLoggingDataTables, 12);
  c25_pi_n1 = c25_emlrt_update_log_1(chartInstance, c25_kp,
    chartInstance->c25_emlrtLocationLoggingDataTables, 13);
  c25_pi_n2 = c25_emlrt_update_log_1(chartInstance, c25_emlrt_update_log_1
    (chartInstance, c25_ki * c25_ts,
     chartInstance->c25_emlrtLocationLoggingDataTables, 15) - c25_kp,
    chartInstance->c25_emlrtLocationLoggingDataTables, 14);
  c25_b_w_pi = c25_emlrt_update_log_1(chartInstance, c25_emlrt_update_log_1
    (chartInstance, c25_emlrt_update_log_1(chartInstance, c25_b_vq_park *
    c25_pi_n1, chartInstance->c25_emlrtLocationLoggingDataTables, 18) +
     c25_emlrt_update_log_1(chartInstance, c25_b_vq_park_k_1 * c25_pi_n2,
    chartInstance->c25_emlrtLocationLoggingDataTables, 19),
     chartInstance->c25_emlrtLocationLoggingDataTables, 17) + c25_b_w_pi_k_1,
    chartInstance->c25_emlrtLocationLoggingDataTables, 16);
  *chartInstance->c25_w_pi = c25_b_w_pi;
  c25_do_animation_call_c25_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c25_covrtInstance, 3U,
                    *chartInstance->c25_w_pi);
}

static void ext_mode_exec_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c25_update_jit_animation_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c25_do_animation_call_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c25_b_y = NULL;
  const mxArray *c25_c_y = NULL;
  const mxArray *c25_st;
  const mxArray *c25_y = NULL;
  c25_st = NULL;
  c25_st = NULL;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_createcellmatrix(2, 1), false);
  c25_b_y = NULL;
  sf_mex_assign(&c25_b_y, sf_mex_create("y", chartInstance->c25_w_pi, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c25_y, 0, c25_b_y);
  c25_c_y = NULL;
  sf_mex_assign(&c25_c_y, sf_mex_create("y",
    &chartInstance->c25_is_active_c25_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c25_y, 1, c25_c_y);
  sf_mex_assign(&c25_st, c25_y, false);
  return c25_st;
}

static void set_sim_state_c25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_st)
{
  const mxArray *c25_u;
  chartInstance->c25_doneDoubleBufferReInit = true;
  c25_u = sf_mex_dup(c25_st);
  *chartInstance->c25_w_pi = c25_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c25_u, 0)), "w_pi");
  chartInstance->c25_is_active_c25_dsogi_pll_3ph = c25_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c25_u, 1)),
     "is_active_c25_dsogi_pll_3ph");
  sf_mex_destroy(&c25_u);
  sf_mex_destroy(&c25_st);
}

static void initSimStructsc25_dsogi_pll_3ph(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc25_dsogi_pll_3ph
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c25_emlrt_update_log_1(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c25_in, emlrtLocationLoggingDataType c25_table[],
  int32_T c25_index)
{
  emlrtLocationLoggingDataType *c25_b_table;
  emlrtLocationLoggingHistogramType *c25_histTable;
  real_T c25_inDouble;
  real_T c25_localMax;
  real_T c25_localMin;
  real_T c25_significand;
  int32_T c25_exponent;
  boolean_T c25_isLoggingEnabledHere;
  (void)chartInstance;
  c25_isLoggingEnabledHere = (c25_index >= 0);
  if (c25_isLoggingEnabledHere) {
    c25_b_table = (emlrtLocationLoggingDataType *)&c25_table[c25_index];
    c25_localMin = c25_b_table[0U].SimMin;
    c25_localMax = c25_b_table[0U].SimMax;
    c25_histTable = c25_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c25_in < c25_localMin) {
      c25_localMin = c25_in;
    }

    if (c25_in > c25_localMax) {
      c25_localMax = c25_in;
    }

    /* Histogram logging. */
    c25_inDouble = c25_in;
    c25_histTable->TotalNumberOfValues++;
    if (c25_inDouble == 0.0) {
      c25_histTable->NumberOfZeros++;
    } else {
      c25_histTable->SimSum += c25_inDouble;
      if ((!muDoubleScalarIsInf(c25_inDouble)) && (!muDoubleScalarIsNaN
           (c25_inDouble))) {
        c25_significand = frexp(c25_inDouble, &c25_exponent);
        if (c25_exponent > 128) {
          c25_exponent = 128;
        }

        if (c25_exponent < -127) {
          c25_exponent = -127;
        }

        if (c25_significand < 0.0) {
          c25_histTable->NumberOfNegativeValues++;
          c25_histTable->HistogramOfNegativeValues[127 + c25_exponent]++;
        } else {
          c25_histTable->NumberOfPositiveValues++;
          c25_histTable->HistogramOfPositiveValues[127 + c25_exponent]++;
        }
      }
    }

    c25_b_table[0U].SimMin = c25_localMin;
    c25_b_table[0U].SimMax = c25_localMax;

    /* IsAlwaysInteger logging. */
    if (c25_in != muDoubleScalarFloor(c25_in)) {
      c25_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c25_in;
}

static void c25_emlrtInitVarDataTables(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c25_dataTables[20],
  emlrtLocationLoggingHistogramType c25_histTables[20])
{
  int32_T c25_i;
  int32_T c25_iH;
  (void)chartInstance;
  for (c25_i = 0; c25_i < 20; c25_i++) {
    c25_dataTables[c25_i].SimMin = rtInf;
    c25_dataTables[c25_i].SimMax = rtMinusInf;
    c25_dataTables[c25_i].OverflowWraps = 0;
    c25_dataTables[c25_i].Saturations = 0;
    c25_dataTables[c25_i].IsAlwaysInteger = true;
    c25_dataTables[c25_i].HistogramTable = &c25_histTables[c25_i];
    c25_histTables[c25_i].NumberOfZeros = 0.0;
    c25_histTables[c25_i].NumberOfPositiveValues = 0.0;
    c25_histTables[c25_i].NumberOfNegativeValues = 0.0;
    c25_histTables[c25_i].TotalNumberOfValues = 0.0;
    c25_histTables[c25_i].SimSum = 0.0;
    for (c25_iH = 0; c25_iH < 256; c25_iH++) {
      c25_histTables[c25_i].HistogramOfPositiveValues[c25_iH] = 0.0;
      c25_histTables[c25_i].HistogramOfNegativeValues[c25_iH] = 0.0;
    }
  }
}

const mxArray *sf_c25_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c25_nameCaptureInfo = NULL;
  c25_nameCaptureInfo = NULL;
  sf_mex_assign(&c25_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c25_nameCaptureInfo;
}

static real_T c25_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_b_w_pi, const char_T *c25_identifier)
{
  emlrtMsgIdentifier c25_thisId;
  real_T c25_y;
  c25_thisId.fIdentifier = (const char_T *)c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_b_w_pi),
    &c25_thisId);
  sf_mex_destroy(&c25_b_w_pi);
  return c25_y;
}

static real_T c25_b_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  real_T c25_d;
  real_T c25_y;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_d, 1, 0, 0U, 0, 0U, 0);
  c25_y = c25_d;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static uint8_T c25_c_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_dsogi_pll_3ph, const char_T
  *c25_identifier)
{
  emlrtMsgIdentifier c25_thisId;
  uint8_T c25_y;
  c25_thisId.fIdentifier = (const char_T *)c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c25_b_is_active_c25_dsogi_pll_3ph), &c25_thisId);
  sf_mex_destroy(&c25_b_is_active_c25_dsogi_pll_3ph);
  return c25_y;
}

static uint8_T c25_d_emlrt_marshallIn(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  uint8_T c25_b_u;
  uint8_T c25_y;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_b_u, 1, 3, 0U, 0, 0U, 0);
  c25_y = c25_b_u;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_slStringInitializeDynamicBuffers
  (SFc25_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c25_chart_data_browse_helper(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c25_ssIdNumber, const mxArray **c25_mxData, uint8_T
  *c25_isValueTooBig)
{
  real_T c25_d;
  real_T c25_d1;
  real_T c25_d2;
  real_T c25_d3;
  *c25_mxData = NULL;
  *c25_mxData = NULL;
  *c25_isValueTooBig = 0U;
  switch (c25_ssIdNumber) {
   case 4U:
    c25_d = *chartInstance->c25_vq_park;
    sf_mex_assign(c25_mxData, sf_mex_create("mxData", &c25_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c25_d1 = *chartInstance->c25_w_pi;
    sf_mex_assign(c25_mxData, sf_mex_create("mxData", &c25_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c25_d2 = *chartInstance->c25_vq_park_k_1;
    sf_mex_assign(c25_mxData, sf_mex_create("mxData", &c25_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c25_d3 = *chartInstance->c25_w_pi_k_1;
    sf_mex_assign(c25_mxData, sf_mex_create("mxData", &c25_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc25_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c25_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c25_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c25_vq_park = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c25_w_pi = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c25_vq_park_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c25_w_pi_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c25_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(370364874U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2196201469U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3344761730U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2543486505U);
}

mxArray *sf_c25_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c25_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c25_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c25_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lmw6GdB0i8A5JXHF2TyQfmU2a/gQJ"
    "l+iP0BBNwvjeJ+CD+zOD4xuSSzLDU+2cg0PqU4Pz0zviAnJ964IANuLggAAGXeG2A="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c25_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "skGEY06fXlFnapgL0QqkUID";
}

static void sf_opaque_initialize_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c25_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c25_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c25_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc25_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c25_dsogi_pll_3ph
      ((SFc25_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc25_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c25_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c25_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc25_dsogi_pll_3ph((SFc25_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c25_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWN2O20QUdrJhRUVZFVGEqiLRS26QtlsVcYFKdvNTImXZUGeXn5to1j6JRxnPeOcn2SAegpd",
    "A4pIL7pC44Q244gF4AC57yRnHyabekHgSCi3CkuOM7W++c86cv7FXah17eOzh+e0dz9vF66t4lr",
    "3p8Uo2Li2c0/sV76Ns/M1rnheIEAbAfdPv00vP7eAm7hBJYuW5H5zE8ASUYEZTwVu8L4pjKe+DB",
    "B7gBImQ2olX0dgwyodNwwPLrD6PaBD5kTAsPMIJSXjC2eSveBOjO8hYpxIC3QQIdSSFGURNRgar",
    "rSD1uBZBMFQmdraVAu2bxKqqjg3TNGHQuISgxZUmaAW1Rl9fEw01felmZKuv8mdoESeMEl7c1hF",
    "RPiToHRpOkxB/T4xG6xXCBhGR+ggiMgLVpsOUXXAoxE4Vvn1OOdFCUsIaMavZ2Qrq22Go4zGGBH",
    "NdI9T3SAIZJoJy7RgQfhPt3ODknEEdzs3AkdeHC2Oj4YzCGKTb+vZrYgSSDOCEu8mcrlHjMnXKe",
    "SwVxGoawxmRhwH6roLQLW9g0CmfoDtCF6dxwkJq4pbqSjpC33DNdS0b/hvlOhNPvV9thE15GyNw",
    "9qs5bzPgNcKYcsN2RdKGEbCUv0402QA75XcAK0XDrkDvsNnGMWMZTjESMmxN8JAW98pRDpUWtk+",
    "xSBWA09iGAYRo5rno84nWxZFRWsQ1TDn1drsg33Vsi2uQfRJA4RojCVWAAqd+5cgbUmUDCdFoJZ",
    "1qWXiGaQxuBPVU3/D6WMgh2ti1mF3ZykaCGxrCASZmDWmSa6B3nxFmCsocqwHGD7rHqcIs68aLW",
    "Bs/G4EDEkQQ2spJGRxjnsUJii6xsiX/ELUdUT2pgwokTYpGksGEjkXXWqk7SeCUD7kY86YUsZ91",
    "Xiv8CgCzBpGc8sERlnA5aaLwxaSWcNFNs7trk2PtTDQj59Y3HgPHamh1tV0DCTCqGhxbZBRoG6x",
    "Pv8YmhiuqNBbqybTUT+ue7d8/8a7698qS/v2Nhf79VjYODh72QiUGtJcw1nuQRNlzO9/+wnw3C+",
    "wHiuC8a7grvtn1vQV8aQmvt3DN890oP/v+To6vjHdKpVKKqy7gXs/xVHK43cxm9+/8mHz35Pc33",
    "/p155effqj+vI6/dI2/lP63uO/LbvutvWz8zqxvmmfp0bVEVsQf3s75gx2r4ePGl/sf9L9gTU6S",
    "QXv/s4vhaauezve0tFreck7e2f17tlfDIE5zggxaYbZvs2NipvsJO/+HC/LurrHHjQV/8rw/Pt4",
    "Of7uaX8dl9qo8Y6+KN+4ldNFvN+e/V90OP+XvrJH/bm6976a9e4/YDA295Zlgr2CcrfJzV5z3D+",
    "NeFjn/t8vz169IndvZEFd6jnX178Rtq59r/X7Z319VN7zc+7deYD1W5XuXPu5F0+s3z63PejcbP",
    "5p/R6hFlIVLdjLZY9xs9Jc9/Y/491NH+836yoa1X/bB+asHh5ywCW5dplvD7HZH2u+G80cSiFq+",
    "P/w36snsWl3TV93MxbcdjykPxVi9f//g4cE29elPzpIagg==",
    ""
  };

  static char newstr [1549] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c25_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c25_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1890851121U));
  ssSetChecksum1(S,(333730469U));
  ssSetChecksum2(S,(3271807509U));
  ssSetChecksum3(S,(3191910587U));
}

static void mdlRTW_c25_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c25_dsogi_pll_3ph(SimStruct *S)
{
  SFc25_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc25_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc25_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc25_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c25_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c25_dsogi_pll_3ph;
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
    chartInstance->c25_JITStateAnimation,
    chartInstance->c25_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c25_dsogi_pll_3ph(chartInstance);
}

void c25_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c25_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c25_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c25_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c25_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
