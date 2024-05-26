/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c24_dsogi_pll_3ph.h"
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
static void initialize_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c24_update_jit_animation_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void c24_do_animation_call_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_st);
static void initSimStructsc24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c24_emlrt_update_log_1(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c24_in, emlrtLocationLoggingDataType c24_table[],
  int32_T c24_index);
static void c24_emlrtInitVarDataTables(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c24_dataTables[10],
  emlrtLocationLoggingHistogramType c24_histTables[10]);
static real_T c24_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_b_vd_park, const char_T *c24_identifier);
static real_T c24_b_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static uint8_T c24_c_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_b_is_active_c24_dsogi_pll_3ph, const char_T
  *c24_identifier);
static uint8_T c24_d_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_slStringInitializeDynamicBuffers
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance);
static void c24_chart_data_browse_helper(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c24_ssIdNumber, const mxArray **c24_mxData, uint8_T
  *c24_isValueTooBig);
static void init_dsm_address_info(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c24_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c24_is_active_c24_dsogi_pll_3ph = 0U;
  chartInstance->c24_emlrtLocLogSimulated = false;
  c24_emlrtInitVarDataTables(chartInstance,
    chartInstance->c24_emlrtLocationLoggingDataTables,
    chartInstance->c24_emlrtLocLogHistTables);
}

static void initialize_params_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c24_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:483",              /* mexFileName */
    "Sun May 26 16:51:41 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c24_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      10                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c24_emlrtLocationInfo[12] = { { 1,/* MxInfoID */
      34,                              /* TextStart */
      8,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      43,                              /* TextStart */
      8,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      52,                              /* TextStart */
      10,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      63,                              /* TextStart */
      10,                              /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      76,                              /* TextStart */
      7,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      85,                              /* TextStart */
      39,                              /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      85,                              /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      105,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      171,                             /* TextStart */
      7,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      180,                             /* TextStart */
      39,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      180,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      200,                             /* TextStart */
      19,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c24_emlrtLocationLoggingFieldCounts[10] = { 0 };

  if (chartInstance->c24_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:483");
    emlrtLocationLoggingPushLog(&c24_emlrtLocationLoggingFileInfo,
      &c24_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c24_emlrtLocationLoggingDataTables[0],
      &c24_emlrtLocationInfo[0], NULL, 0U, &c24_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:483");
  }
}

static void mdl_setup_runtime_resources_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c24_decisionTxtEndIdx = 0U;
  static const uint32_T c24_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c24_chart_data_browse_helper);
  chartInstance->c24_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c24_RuntimeVar,
    &chartInstance->c24_IsDebuggerActive,
    &chartInstance->c24_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c24_mlFcnLineNumber, &chartInstance->c24_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c24_covrtInstance, 1U, 0U, 1U,
    69U);
  covrtChartInitFcn(chartInstance->c24_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c24_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c24_decisionTxtStartIdx, &c24_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c24_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c24_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c24_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 229);
}

static void mdl_cleanup_runtime_resources_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c24_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c24_covrtInstance);
}

static void enable_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c24_b_cos_th_k_1;
  real_T c24_b_sin_th_k_1;
  real_T c24_b_vd_park;
  real_T c24_b_vp_alpha;
  real_T c24_b_vp_betha;
  real_T c24_b_vq_park;
  chartInstance->c24_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 3U,
                    *chartInstance->c24_cos_th_k_1);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 2U,
                    *chartInstance->c24_sin_th_k_1);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 1U,
                    *chartInstance->c24_vp_betha);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 0U,
                    *chartInstance->c24_vp_alpha);
  chartInstance->c24_sfEvent = CALL_EVENT;
  c24_b_vp_alpha = *chartInstance->c24_vp_alpha;
  c24_b_vp_betha = *chartInstance->c24_vp_betha;
  c24_b_sin_th_k_1 = *chartInstance->c24_sin_th_k_1;
  c24_b_cos_th_k_1 = *chartInstance->c24_cos_th_k_1;

  /* logging input variable 'vp_alpha' for function 'eML_blk_kernel' */
  /* logging input variable 'vp_betha' for function 'eML_blk_kernel' */
  /* logging input variable 'sin_th_k_1' for function 'eML_blk_kernel' */
  /* logging input variable 'cos_th_k_1' for function 'eML_blk_kernel' */
  chartInstance->c24_emlrtLocLogSimulated = true;

  /* logging input variable 'vp_alpha' for function 'eML_blk_kernel' */
  c24_emlrt_update_log_1(chartInstance, c24_b_vp_alpha,
    chartInstance->c24_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'vp_betha' for function 'eML_blk_kernel' */
  c24_emlrt_update_log_1(chartInstance, c24_b_vp_betha,
    chartInstance->c24_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'sin_th_k_1' for function 'eML_blk_kernel' */
  c24_emlrt_update_log_1(chartInstance, c24_b_sin_th_k_1,
    chartInstance->c24_emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'cos_th_k_1' for function 'eML_blk_kernel' */
  c24_emlrt_update_log_1(chartInstance, c24_b_cos_th_k_1,
    chartInstance->c24_emlrtLocationLoggingDataTables, 3);
  covrtEmlFcnEval(chartInstance->c24_covrtInstance, 4U, 0, 0);
  c24_b_vq_park = c24_emlrt_update_log_1(chartInstance, c24_emlrt_update_log_1
    (chartInstance, c24_b_sin_th_k_1 * c24_b_vp_betha,
     chartInstance->c24_emlrtLocationLoggingDataTables, 5) +
    c24_emlrt_update_log_1(chartInstance, c24_b_cos_th_k_1 * c24_b_vp_alpha,
    chartInstance->c24_emlrtLocationLoggingDataTables, 6),
    chartInstance->c24_emlrtLocationLoggingDataTables, 4);
  c24_b_vd_park = c24_emlrt_update_log_1(chartInstance, c24_emlrt_update_log_1
    (chartInstance, c24_b_sin_th_k_1 * c24_b_vp_alpha,
     chartInstance->c24_emlrtLocationLoggingDataTables, 8) -
    c24_emlrt_update_log_1(chartInstance, c24_b_cos_th_k_1 * c24_b_vp_betha,
    chartInstance->c24_emlrtLocationLoggingDataTables, 9),
    chartInstance->c24_emlrtLocationLoggingDataTables, 7);
  *chartInstance->c24_vd_park = c24_b_vd_park;
  *chartInstance->c24_vq_park = c24_b_vq_park;
  c24_do_animation_call_c24_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 4U,
                    *chartInstance->c24_vd_park);
  covrtSigUpdateFcn(chartInstance->c24_covrtInstance, 5U,
                    *chartInstance->c24_vq_park);
}

static void ext_mode_exec_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c24_update_jit_animation_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c24_do_animation_call_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c24_b_y = NULL;
  const mxArray *c24_c_y = NULL;
  const mxArray *c24_d_y = NULL;
  const mxArray *c24_st;
  const mxArray *c24_y = NULL;
  c24_st = NULL;
  c24_st = NULL;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_createcellmatrix(3, 1), false);
  c24_b_y = NULL;
  sf_mex_assign(&c24_b_y, sf_mex_create("y", chartInstance->c24_vd_park, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c24_y, 0, c24_b_y);
  c24_c_y = NULL;
  sf_mex_assign(&c24_c_y, sf_mex_create("y", chartInstance->c24_vq_park, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c24_y, 1, c24_c_y);
  c24_d_y = NULL;
  sf_mex_assign(&c24_d_y, sf_mex_create("y",
    &chartInstance->c24_is_active_c24_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c24_y, 2, c24_d_y);
  sf_mex_assign(&c24_st, c24_y, false);
  return c24_st;
}

static void set_sim_state_c24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_st)
{
  const mxArray *c24_u;
  chartInstance->c24_doneDoubleBufferReInit = true;
  c24_u = sf_mex_dup(c24_st);
  *chartInstance->c24_vd_park = c24_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 0)), "vd_park");
  *chartInstance->c24_vq_park = c24_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 1)), "vq_park");
  chartInstance->c24_is_active_c24_dsogi_pll_3ph = c24_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c24_u, 2)),
     "is_active_c24_dsogi_pll_3ph");
  sf_mex_destroy(&c24_u);
  sf_mex_destroy(&c24_st);
}

static void initSimStructsc24_dsogi_pll_3ph(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc24_dsogi_pll_3ph
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c24_emlrt_update_log_1(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c24_in, emlrtLocationLoggingDataType c24_table[],
  int32_T c24_index)
{
  emlrtLocationLoggingDataType *c24_b_table;
  emlrtLocationLoggingHistogramType *c24_histTable;
  real_T c24_inDouble;
  real_T c24_localMax;
  real_T c24_localMin;
  real_T c24_significand;
  int32_T c24_exponent;
  boolean_T c24_isLoggingEnabledHere;
  (void)chartInstance;
  c24_isLoggingEnabledHere = (c24_index >= 0);
  if (c24_isLoggingEnabledHere) {
    c24_b_table = (emlrtLocationLoggingDataType *)&c24_table[c24_index];
    c24_localMin = c24_b_table[0U].SimMin;
    c24_localMax = c24_b_table[0U].SimMax;
    c24_histTable = c24_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c24_in < c24_localMin) {
      c24_localMin = c24_in;
    }

    if (c24_in > c24_localMax) {
      c24_localMax = c24_in;
    }

    /* Histogram logging. */
    c24_inDouble = c24_in;
    c24_histTable->TotalNumberOfValues++;
    if (c24_inDouble == 0.0) {
      c24_histTable->NumberOfZeros++;
    } else {
      c24_histTable->SimSum += c24_inDouble;
      if ((!muDoubleScalarIsInf(c24_inDouble)) && (!muDoubleScalarIsNaN
           (c24_inDouble))) {
        c24_significand = frexp(c24_inDouble, &c24_exponent);
        if (c24_exponent > 128) {
          c24_exponent = 128;
        }

        if (c24_exponent < -127) {
          c24_exponent = -127;
        }

        if (c24_significand < 0.0) {
          c24_histTable->NumberOfNegativeValues++;
          c24_histTable->HistogramOfNegativeValues[127 + c24_exponent]++;
        } else {
          c24_histTable->NumberOfPositiveValues++;
          c24_histTable->HistogramOfPositiveValues[127 + c24_exponent]++;
        }
      }
    }

    c24_b_table[0U].SimMin = c24_localMin;
    c24_b_table[0U].SimMax = c24_localMax;

    /* IsAlwaysInteger logging. */
    if (c24_in != muDoubleScalarFloor(c24_in)) {
      c24_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c24_in;
}

static void c24_emlrtInitVarDataTables(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c24_dataTables[10],
  emlrtLocationLoggingHistogramType c24_histTables[10])
{
  int32_T c24_i;
  int32_T c24_iH;
  (void)chartInstance;
  for (c24_i = 0; c24_i < 10; c24_i++) {
    c24_dataTables[c24_i].SimMin = rtInf;
    c24_dataTables[c24_i].SimMax = rtMinusInf;
    c24_dataTables[c24_i].OverflowWraps = 0;
    c24_dataTables[c24_i].Saturations = 0;
    c24_dataTables[c24_i].IsAlwaysInteger = true;
    c24_dataTables[c24_i].HistogramTable = &c24_histTables[c24_i];
    c24_histTables[c24_i].NumberOfZeros = 0.0;
    c24_histTables[c24_i].NumberOfPositiveValues = 0.0;
    c24_histTables[c24_i].NumberOfNegativeValues = 0.0;
    c24_histTables[c24_i].TotalNumberOfValues = 0.0;
    c24_histTables[c24_i].SimSum = 0.0;
    for (c24_iH = 0; c24_iH < 256; c24_iH++) {
      c24_histTables[c24_i].HistogramOfPositiveValues[c24_iH] = 0.0;
      c24_histTables[c24_i].HistogramOfNegativeValues[c24_iH] = 0.0;
    }
  }
}

const mxArray *sf_c24_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c24_nameCaptureInfo = NULL;
  c24_nameCaptureInfo = NULL;
  sf_mex_assign(&c24_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c24_nameCaptureInfo;
}

static real_T c24_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_b_vd_park, const char_T *c24_identifier)
{
  emlrtMsgIdentifier c24_thisId;
  real_T c24_y;
  c24_thisId.fIdentifier = (const char_T *)c24_identifier;
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_vd_park),
    &c24_thisId);
  sf_mex_destroy(&c24_b_vd_park);
  return c24_y;
}

static real_T c24_b_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  real_T c24_d;
  real_T c24_y;
  (void)chartInstance;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_d, 1, 0, 0U, 0, 0U, 0);
  c24_y = c24_d;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static uint8_T c24_c_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_b_is_active_c24_dsogi_pll_3ph, const char_T
  *c24_identifier)
{
  emlrtMsgIdentifier c24_thisId;
  uint8_T c24_y;
  c24_thisId.fIdentifier = (const char_T *)c24_identifier;
  c24_thisId.fParent = NULL;
  c24_thisId.bParentIsCell = false;
  c24_y = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c24_b_is_active_c24_dsogi_pll_3ph), &c24_thisId);
  sf_mex_destroy(&c24_b_is_active_c24_dsogi_pll_3ph);
  return c24_y;
}

static uint8_T c24_d_emlrt_marshallIn(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  uint8_T c24_b_u;
  uint8_T c24_y;
  (void)chartInstance;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_b_u, 1, 3, 0U, 0, 0U, 0);
  c24_y = c24_b_u;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_slStringInitializeDynamicBuffers
  (SFc24_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c24_chart_data_browse_helper(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c24_ssIdNumber, const mxArray **c24_mxData, uint8_T
  *c24_isValueTooBig)
{
  real_T c24_d;
  real_T c24_d1;
  real_T c24_d2;
  real_T c24_d3;
  real_T c24_d4;
  real_T c24_d5;
  *c24_mxData = NULL;
  *c24_mxData = NULL;
  *c24_isValueTooBig = 0U;
  switch (c24_ssIdNumber) {
   case 9U:
    c24_d = *chartInstance->c24_vd_park;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    c24_d1 = *chartInstance->c24_vp_alpha;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c24_d2 = *chartInstance->c24_vq_park;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c24_d3 = *chartInstance->c24_vp_betha;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c24_d4 = *chartInstance->c24_sin_th_k_1;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c24_d5 = *chartInstance->c24_cos_th_k_1;
    sf_mex_assign(c24_mxData, sf_mex_create("mxData", &c24_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc24_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c24_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c24_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c24_vd_park = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c24_vp_alpha = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c24_vq_park = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c24_vp_betha = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c24_sin_th_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c24_cos_th_k_1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c24_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3828122805U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2888584883U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1247164685U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1149295867U);
}

mxArray *sf_c24_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c24_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c24_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c24_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Cs5oOtnwaKfHUm/AJRflhJfkFiUDXY/LJwGzh"
    "8i5PujkJr+UHCgTD/E/gAC/pBG8weIn1kcn5hcklmWGp9sZBKfUpyfnhlfkJMTb1yQATcXBAACd"
    "CKF"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c24_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sru64mBTO8ThPJw61ql2WiE";
}

static void sf_opaque_initialize_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c24_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c24_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c24_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc24_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c24_dsogi_pll_3ph
      ((SFc24_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc24_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c24_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c24_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc24_dsogi_pll_3ph((SFc24_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c24_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWMuP20QYd9Jly4qyKhISEkWi4sQF0W5L1UNFd/OCoF0S4exWcAmz9pd4lPGMdx55IP4B/jP",
    "+AtQbZ27c4Mg3jpNNvSHxJC1tUUdynLH9+17+nvZKzRMP1z4eP37oebt4fhuPsjddb2X70sIxvb",
    "7jPcr2P7/jeYEIoQ/cN70eHXtui5u4TSSJlee+OInhO1CCGU0Fb/KeKI6lvAcSeIAEEiG1E19FY",
    "8MoHzQMDyxn9SSiQeRHwrCwggRJ2OJs8m98E6PbyLFGJQS6ARDqSArTjxqM9FdbQepRNYJgoEzs",
    "bCsF2jeJVVWdGKZpwqA+hqDJlSZoBbVGX18TDVU9djOy1Vf5M7SIE0YJL27riCgfEvQODadJiL8",
    "to9F6hbBBRKSuQESGoI7pIOUuOBTiThU+fU450UJSwuoxq1pqBfVtM9TxBEOCub4j1LcigQwSQb",
    "l2DAi/gXauc3LOoAbnpu/I14cLY6PhjMIIpNv77VXFECTpQ4u7yZy+o/o4dcp5LBXEahrDGZFHA",
    "fqugtAtb2DQKZ+gO0IHyThhITVxU3UkHaJvuOa6pg3/jXKdiaferzbCpnzrQ3D2qznfRsCrhDHl",
    "hu2I5BiGwFL+NaLJBtgpfwewUjTsCPQOm20cM5bhFCMhw1YFD2lxrxzmUGlh+xaLVAE4jW0YQIh",
    "mnos+J7QujozSIq5iyqkdHxfkdxXb5BpkjwRQuMZIQhWgwKlfOfINqbKBhGi0kk61LExhGoMbQT",
    "3VM7w2EnKANnYtZpe2spHghoawj4lZQ5rk6ujdZ4SZgjLHqo/xg+5xqjDLuvFFrI2fjcABCSIIb",
    "eWkDE4wzyKBoq9Y2ZJ/hNoOqZ7UQAWSJkUjyWBCx6JrrdSZJHDKB1yMeEOK2M86rxV+BYBZg0hO",
    "eb+CJVxOGih8MaklXHTS7O7a5Fg7E83IufWNr4BjNbS62q6BBBhVdY4tMgq0DdanP2ETwxVVGgv",
    "1ZFrqp3XP9u9fe5f9+86S/v29hf79ZrYPDu53QyX6tJsw1r2XRNl9S+/OAr0bBeaBIjjvCu6S3+",
    "z86QK+tISvt3DO89srP/v8To5fGa+UcFnc4QLuXW81bjez2dO/Wnufx7+c/V767XH7+z/21vEvX",
    "eFfSv9b3Pia27y1n+0/mvVN8yw9vJLIivjDBzl/sHslzYP7caXTetiJ2t+MHty9YAdPaD2l92t5",
    "tbzXcvLOrt+2vRoGcZoTZNAMs7nN7omZzhOW/sMFeXfX2GNvwZ8878/H2+E/Oczjl9nres5edj8",
    "MuzidDJ7x35enx/ub63HxPPW4fbgdfsq/vUaPWzk9bqWzSJfYigPd5Zltv2DeWBW3rjjvP8a9Ln",
    "K+scuL169I3d7ZEFd+gX3C88Rtq59rP/K6P39nRd71cs/ffIX1WJXvXfrSV02vp55b3/hxtv9y/",
    "l2kGlEWLpnMsts4PPWW3f2f+Pffjvab9cl1a7/sA/oP9444YRMcxaajbna5Le130PktCUQtn3df",
    "Rj2ZnQ/X9FU3cvFt9yPKQzFSn909+OJgm/r0D5lhINs=",
    ""
  };

  static char newstr [1545] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c24_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c24_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(156235736U));
  ssSetChecksum1(S,(1451846959U));
  ssSetChecksum2(S,(1070989791U));
  ssSetChecksum3(S,(166287696U));
}

static void mdlRTW_c24_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c24_dsogi_pll_3ph(SimStruct *S)
{
  SFc24_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc24_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc24_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc24_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c24_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c24_dsogi_pll_3ph;
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
    chartInstance->c24_JITStateAnimation,
    chartInstance->c24_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c24_dsogi_pll_3ph(chartInstance);
}

void c24_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c24_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c24_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c24_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c24_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
