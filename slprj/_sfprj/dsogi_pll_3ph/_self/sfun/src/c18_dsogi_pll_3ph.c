/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c18_dsogi_pll_3ph.h"
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
static void initialize_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c18_update_jit_animation_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void c18_do_animation_call_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_st);
static void initSimStructsc18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c18_emlrt_update_log_1(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c18_in, emlrtLocationLoggingDataType c18_table[],
  int32_T c18_index);
static void c18_emlrtInitVarDataTables(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c18_dataTables[4],
  emlrtLocationLoggingHistogramType c18_histTables[4]);
static real_T c18_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_b_c, const char_T *c18_identifier);
static real_T c18_b_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static uint8_T c18_c_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_dsogi_pll_3ph, const char_T
  *c18_identifier);
static uint8_T c18_d_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_slStringInitializeDynamicBuffers
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance);
static void c18_chart_data_browse_helper(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c18_ssIdNumber, const mxArray **c18_mxData, uint8_T
  *c18_isValueTooBig);
static void init_dsm_address_info(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c18_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c18_is_active_c18_dsogi_pll_3ph = 0U;
  chartInstance->c18_emlrtLocLogSimulated = false;
  c18_emlrtInitVarDataTables(chartInstance,
    chartInstance->c18_emlrtLocationLoggingDataTables,
    chartInstance->c18_emlrtLocLogHistTables);
}

static void initialize_params_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c18_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:479",              /* mexFileName */
    "Sun May 26 15:34:38 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c18_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      4                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c18_emlrtLocationInfo[5] = { { 1,/* MxInfoID */
      17,                              /* TextStart */
      1,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      19,                              /* TextStart */
      1,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      23,                              /* TextStart */
      1,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      25,                              /* TextStart */
      9,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      30,                              /* TextStart */
      3,                               /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c18_emlrtLocationLoggingFieldCounts[4] = { 0, 0, 0, 0 };

  if (chartInstance->c18_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:479");
    emlrtLocationLoggingPushLog(&c18_emlrtLocationLoggingFileInfo,
      &c18_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c18_emlrtLocationLoggingDataTables[0],
      &c18_emlrtLocationInfo[0], NULL, 0U, &c18_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:479");
  }
}

static void mdl_setup_runtime_resources_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c18_decisionTxtEndIdx = 0U;
  static const uint32_T c18_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c18_chart_data_browse_helper);
  chartInstance->c18_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c18_RuntimeVar,
    &chartInstance->c18_IsDebuggerActive,
    &chartInstance->c18_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c18_mlFcnLineNumber, &chartInstance->c18_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c18_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c18_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c18_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c18_decisionTxtStartIdx, &c18_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c18_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c18_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 39);
}

static void mdl_cleanup_runtime_resources_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c18_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c18_covrtInstance);
}

static void enable_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c18_b_a;
  real_T c18_b_b;
  real_T c18_b_c;
  chartInstance->c18_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 1U, *chartInstance->c18_b);
  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 0U, *chartInstance->c18_a);
  chartInstance->c18_sfEvent = CALL_EVENT;
  c18_b_a = *chartInstance->c18_a;
  c18_b_b = *chartInstance->c18_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c18_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c18_emlrt_update_log_1(chartInstance, c18_b_a,
    chartInstance->c18_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c18_emlrt_update_log_1(chartInstance, c18_b_b,
    chartInstance->c18_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c18_covrtInstance, 4U, 0, 0);
  c18_b_c = c18_emlrt_update_log_1(chartInstance, 0.5 * c18_emlrt_update_log_1
    (chartInstance, c18_b_a + c18_b_b,
     chartInstance->c18_emlrtLocationLoggingDataTables, 3),
    chartInstance->c18_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c18_c = c18_b_c;
  c18_do_animation_call_c18_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 2U, *chartInstance->c18_c);
}

static void ext_mode_exec_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c18_update_jit_animation_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c18_do_animation_call_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c18_b_y = NULL;
  const mxArray *c18_c_y = NULL;
  const mxArray *c18_st;
  const mxArray *c18_y = NULL;
  c18_st = NULL;
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellmatrix(2, 1), false);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", chartInstance->c18_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y",
    &chartInstance->c18_is_active_c18_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c18_y, 1, c18_c_y);
  sf_mex_assign(&c18_st, c18_y, false);
  return c18_st;
}

static void set_sim_state_c18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_u;
  chartInstance->c18_doneDoubleBufferReInit = true;
  c18_u = sf_mex_dup(c18_st);
  *chartInstance->c18_c = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 0)), "c");
  chartInstance->c18_is_active_c18_dsogi_pll_3ph = c18_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 1)),
     "is_active_c18_dsogi_pll_3ph");
  sf_mex_destroy(&c18_u);
  sf_mex_destroy(&c18_st);
}

static void initSimStructsc18_dsogi_pll_3ph(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc18_dsogi_pll_3ph
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c18_emlrt_update_log_1(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c18_in, emlrtLocationLoggingDataType c18_table[],
  int32_T c18_index)
{
  emlrtLocationLoggingDataType *c18_b_table;
  emlrtLocationLoggingHistogramType *c18_histTable;
  real_T c18_inDouble;
  real_T c18_localMax;
  real_T c18_localMin;
  real_T c18_significand;
  int32_T c18_exponent;
  boolean_T c18_isLoggingEnabledHere;
  (void)chartInstance;
  c18_isLoggingEnabledHere = (c18_index >= 0);
  if (c18_isLoggingEnabledHere) {
    c18_b_table = (emlrtLocationLoggingDataType *)&c18_table[c18_index];
    c18_localMin = c18_b_table[0U].SimMin;
    c18_localMax = c18_b_table[0U].SimMax;
    c18_histTable = c18_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c18_in < c18_localMin) {
      c18_localMin = c18_in;
    }

    if (c18_in > c18_localMax) {
      c18_localMax = c18_in;
    }

    /* Histogram logging. */
    c18_inDouble = c18_in;
    c18_histTable->TotalNumberOfValues++;
    if (c18_inDouble == 0.0) {
      c18_histTable->NumberOfZeros++;
    } else {
      c18_histTable->SimSum += c18_inDouble;
      if ((!muDoubleScalarIsInf(c18_inDouble)) && (!muDoubleScalarIsNaN
           (c18_inDouble))) {
        c18_significand = frexp(c18_inDouble, &c18_exponent);
        if (c18_exponent > 128) {
          c18_exponent = 128;
        }

        if (c18_exponent < -127) {
          c18_exponent = -127;
        }

        if (c18_significand < 0.0) {
          c18_histTable->NumberOfNegativeValues++;
          c18_histTable->HistogramOfNegativeValues[127 + c18_exponent]++;
        } else {
          c18_histTable->NumberOfPositiveValues++;
          c18_histTable->HistogramOfPositiveValues[127 + c18_exponent]++;
        }
      }
    }

    c18_b_table[0U].SimMin = c18_localMin;
    c18_b_table[0U].SimMax = c18_localMax;

    /* IsAlwaysInteger logging. */
    if (c18_in != muDoubleScalarFloor(c18_in)) {
      c18_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c18_in;
}

static void c18_emlrtInitVarDataTables(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c18_dataTables[4],
  emlrtLocationLoggingHistogramType c18_histTables[4])
{
  int32_T c18_i;
  int32_T c18_iH;
  (void)chartInstance;
  for (c18_i = 0; c18_i < 4; c18_i++) {
    c18_dataTables[c18_i].SimMin = rtInf;
    c18_dataTables[c18_i].SimMax = rtMinusInf;
    c18_dataTables[c18_i].OverflowWraps = 0;
    c18_dataTables[c18_i].Saturations = 0;
    c18_dataTables[c18_i].IsAlwaysInteger = true;
    c18_dataTables[c18_i].HistogramTable = &c18_histTables[c18_i];
    c18_histTables[c18_i].NumberOfZeros = 0.0;
    c18_histTables[c18_i].NumberOfPositiveValues = 0.0;
    c18_histTables[c18_i].NumberOfNegativeValues = 0.0;
    c18_histTables[c18_i].TotalNumberOfValues = 0.0;
    c18_histTables[c18_i].SimSum = 0.0;
    for (c18_iH = 0; c18_iH < 256; c18_iH++) {
      c18_histTables[c18_i].HistogramOfPositiveValues[c18_iH] = 0.0;
      c18_histTables[c18_i].HistogramOfNegativeValues[c18_iH] = 0.0;
    }
  }
}

const mxArray *sf_c18_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  sf_mex_assign(&c18_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c18_nameCaptureInfo;
}

static real_T c18_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_b_c, const char_T *c18_identifier)
{
  emlrtMsgIdentifier c18_thisId;
  real_T c18_y;
  c18_thisId.fIdentifier = (const char_T *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_b_c), &c18_thisId);
  sf_mex_destroy(&c18_b_c);
  return c18_y;
}

static real_T c18_b_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  real_T c18_d;
  real_T c18_y;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_d, 1, 0, 0U, 0, 0U, 0);
  c18_y = c18_d;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static uint8_T c18_c_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_dsogi_pll_3ph, const char_T
  *c18_identifier)
{
  emlrtMsgIdentifier c18_thisId;
  uint8_T c18_y;
  c18_thisId.fIdentifier = (const char_T *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_y = c18_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_b_is_active_c18_dsogi_pll_3ph), &c18_thisId);
  sf_mex_destroy(&c18_b_is_active_c18_dsogi_pll_3ph);
  return c18_y;
}

static uint8_T c18_d_emlrt_marshallIn(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  uint8_T c18_b_u;
  uint8_T c18_y;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_b_u, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_b_u;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_slStringInitializeDynamicBuffers
  (SFc18_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c18_chart_data_browse_helper(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c18_ssIdNumber, const mxArray **c18_mxData, uint8_T
  *c18_isValueTooBig)
{
  real_T c18_d;
  real_T c18_d1;
  real_T c18_d2;
  *c18_mxData = NULL;
  *c18_mxData = NULL;
  *c18_isValueTooBig = 0U;
  switch (c18_ssIdNumber) {
   case 4U:
    c18_d = *chartInstance->c18_a;
    sf_mex_assign(c18_mxData, sf_mex_create("mxData", &c18_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c18_d1 = *chartInstance->c18_c;
    sf_mex_assign(c18_mxData, sf_mex_create("mxData", &c18_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c18_d2 = *chartInstance->c18_b;
    sf_mex_assign(c18_mxData, sf_mex_create("mxData", &c18_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc18_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c18_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c18_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c18_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c18_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c18_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4034689114U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2296780797U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3221964355U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2676711006U);
}

mxArray *sf_c18_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c18_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c18_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c18_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9saBGfUpyfnhlfkJMTb1yQATcXBAAwshoQ"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s1SPIvEujhfLCHB268xhWDF";
}

static void sf_opaque_initialize_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c18_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c18_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c18_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c18_dsogi_pll_3ph
      ((SFc18_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc18_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c18_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc18_dsogi_pll_3ph((SFc18_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c18_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWE1v40QYdqJSsWKpigRaoUWw4sQFiXYF6gGxbb7YSCkN67QrcYmm9pt4yHjGOx/5QFy4ceT",
    "ML+AncOdP7InfwHFPiHdsJw1uSDwpC7sIV64ztp953ved92vsVdqnHh57eP7wtuft4vVVPKtedr",
    "ySjytLZ3Z/x/s0H3/7mucFIoQhcN8MBnTquR3cxF0iSaw894OTGB6BEsxoKnibD0R5LOUDkMADn",
    "CARUjvxKhobRvmoZXhgmdXjiAaRHwnDwhpOSMIzzmZ/xZsY3UXGBpUQ6BZAqCMpzDBqMTJcbwWp",
    "J/UIgpEysbOtFGjfJFZVdWqYpgmD5hSCNleaoBXUBn19TTTU9dTNyFZf5c/RIk4YJby8rSOifEj",
    "QOzScJyH+PzMarVcKG0RE6hpEZAyqQ0cpu+BQip0qfPuScqKFpIQ1Y1a3s5XUt8tQx1MMCea6Rq",
    "hvTQIZJYJy7RgQfgvt3OTkkkEDLs3QkdeHJ8ZGwwWFCUi39R3UxRgkGcIZd5M5XaPmNHXKRSyVx",
    "GoawwWRJwH6roLQLW9g0CmfoDtCD6dxwkJq4rbqSTpG33DNdW0b/lvlOhNn3q+2wqa8zTE4+9WC",
    "txXwOmFMuWF7IunAGFjK3yCabIHN+B3AStGwJ9A7bLZxzFiGU4yEHFsXPKTlvXJcQKWF7QssUiX",
    "gNLZhACGaeSH6YqJNcWSUFnEdU06j0ynJdx3b5hrkgARQusZIQhWgwKlfOfKGVNlAQjRaSadalp",
    "4hi8GtoJ4aGN6YCDlCG7sWsytb2UhwQ0M4xMSsIU1yTfTuC8JMSZljNcT4Qfc4V5hl3XgRa+NnK",
    "3BAgghCWzkpg1PMszhB2SVWtuSfoLZjqmcNUIGkSdlIMpjQsehaK/VmCZzzERcT3pIi9vPOa41f",
    "AWDWIJJTPqxhCZezFgpfTmoJT3ppdndtcqydiWbk0vrG58CxGlpdbddAAoyqJscWGQW6Cdan32A",
    "TwxVVGgv1LCv1Wd2z/ftD76p/31nRv7+x1L/v5+Pg4KgfKjGk/YSx/v0kyp/b+T5amu92if1AGZ",
    "x3DXfFN79+sISvrOD1lq5FvlvVP79fLfBV8a9SyXDHS7jXCzw7BdxubrPk+0e/v8t+/PKXt/z3v",
    "3v668+b+CvX+Cvpb4v7qeq239rLx+/M+6ZFlh5fS2Rl/OFOwR/sWB343fa4ab6OBp36w9rhJ0fT",
    "6HGjlc73rLJe3mpB3vn9e7ZXwyBOc4IM2mG+b7NjYrL9hJ3/aEne3Q32uLXkT57324Ob4d88Lq7",
    "jzgb8Pv4KCn67Pf+945vhM/7uBvnvFtb7btq794nN0NBfnQn2SsbZOj93xXn/MO5lkfN/uzx//c",
    "rUueqWuMpzrKt/J+6m+rnW75f9/XV1wyu8v/8C67Eu37v0cS+aXk89tz7rvXz82eI7Qj2iLFyxk",
    "8kf42ZjsOrpf8S/nznab95XNq398g/OX90/4YTNcOuSbQ3z211pvxsuHkkgavX+8N+oJ/Pr8Ya+",
    "6nYhvu14QnkoJurDg8OPD29Sn/4Arb8ZXg==",
    ""
  };

  static char newstr [1537] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c18_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c18_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4266821744U));
  ssSetChecksum1(S,(1369074718U));
  ssSetChecksum2(S,(575870403U));
  ssSetChecksum3(S,(3101612161U));
}

static void mdlRTW_c18_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c18_dsogi_pll_3ph(SimStruct *S)
{
  SFc18_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc18_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc18_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc18_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c18_dsogi_pll_3ph;
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
    chartInstance->c18_JITStateAnimation,
    chartInstance->c18_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c18_dsogi_pll_3ph(chartInstance);
}

void c18_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c18_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
