/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c17_dsogi_pll_3ph.h"
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
static void initialize_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c17_update_jit_animation_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void c17_do_animation_call_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_st);
static void initSimStructsc17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c17_emlrt_update_log_1(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c17_in, emlrtLocationLoggingDataType c17_table[],
  int32_T c17_index);
static void c17_emlrtInitVarDataTables(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c17_dataTables[4],
  emlrtLocationLoggingHistogramType c17_histTables[4]);
static real_T c17_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_b_c, const char_T *c17_identifier);
static real_T c17_b_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static uint8_T c17_c_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_b_is_active_c17_dsogi_pll_3ph, const char_T
  *c17_identifier);
static uint8_T c17_d_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId);
static void c17_slStringInitializeDynamicBuffers
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance);
static void c17_chart_data_browse_helper(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c17_ssIdNumber, const mxArray **c17_mxData, uint8_T
  *c17_isValueTooBig);
static void init_dsm_address_info(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c17_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c17_is_active_c17_dsogi_pll_3ph = 0U;
  chartInstance->c17_emlrtLocLogSimulated = false;
  c17_emlrtInitVarDataTables(chartInstance,
    chartInstance->c17_emlrtLocationLoggingDataTables,
    chartInstance->c17_emlrtLocLogHistTables);
}

static void initialize_params_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c17_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:480",              /* mexFileName */
    "Tue Jun  4 19:57:56 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c17_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      4                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c17_emlrtLocationInfo[5] = { { 1,/* MxInfoID */
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
      6,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c17_emlrtLocationLoggingFieldCounts[4] = { 0, 0, 0, 0 };

  if (chartInstance->c17_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:480");
    emlrtLocationLoggingPushLog(&c17_emlrtLocationLoggingFileInfo,
      &c17_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c17_emlrtLocationLoggingDataTables[0],
      &c17_emlrtLocationInfo[0], NULL, 0U, &c17_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:480");
  }
}

static void mdl_setup_runtime_resources_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c17_decisionTxtEndIdx = 0U;
  static const uint32_T c17_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c17_chart_data_browse_helper);
  chartInstance->c17_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c17_RuntimeVar,
    &chartInstance->c17_IsDebuggerActive,
    &chartInstance->c17_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c17_mlFcnLineNumber, &chartInstance->c17_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c17_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c17_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c17_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c17_decisionTxtStartIdx, &c17_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c17_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c17_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c17_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 39);
}

static void mdl_cleanup_runtime_resources_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c17_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c17_covrtInstance);
}

static void enable_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c17_b_a;
  real_T c17_b_b;
  real_T c17_b_c;
  chartInstance->c17_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c17_covrtInstance, 1U, *chartInstance->c17_b);
  covrtSigUpdateFcn(chartInstance->c17_covrtInstance, 0U, *chartInstance->c17_a);
  chartInstance->c17_sfEvent = CALL_EVENT;
  c17_b_a = *chartInstance->c17_a;
  c17_b_b = *chartInstance->c17_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c17_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c17_emlrt_update_log_1(chartInstance, c17_b_a,
    chartInstance->c17_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c17_emlrt_update_log_1(chartInstance, c17_b_b,
    chartInstance->c17_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c17_covrtInstance, 4U, 0, 0);
  c17_b_c = c17_emlrt_update_log_1(chartInstance, 0.5 * c17_emlrt_update_log_1
    (chartInstance, c17_b_a - c17_b_b,
     chartInstance->c17_emlrtLocationLoggingDataTables, 3),
    chartInstance->c17_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c17_c = c17_b_c;
  c17_do_animation_call_c17_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c17_covrtInstance, 2U, *chartInstance->c17_c);
}

static void ext_mode_exec_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c17_update_jit_animation_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c17_do_animation_call_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c17_b_y = NULL;
  const mxArray *c17_c_y = NULL;
  const mxArray *c17_st;
  const mxArray *c17_y = NULL;
  c17_st = NULL;
  c17_st = NULL;
  c17_y = NULL;
  sf_mex_assign(&c17_y, sf_mex_createcellmatrix(2, 1), false);
  c17_b_y = NULL;
  sf_mex_assign(&c17_b_y, sf_mex_create("y", chartInstance->c17_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c17_y, 0, c17_b_y);
  c17_c_y = NULL;
  sf_mex_assign(&c17_c_y, sf_mex_create("y",
    &chartInstance->c17_is_active_c17_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c17_y, 1, c17_c_y);
  sf_mex_assign(&c17_st, c17_y, false);
  return c17_st;
}

static void set_sim_state_c17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_st)
{
  const mxArray *c17_u;
  chartInstance->c17_doneDoubleBufferReInit = true;
  c17_u = sf_mex_dup(c17_st);
  *chartInstance->c17_c = c17_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c17_u, 0)), "c");
  chartInstance->c17_is_active_c17_dsogi_pll_3ph = c17_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c17_u, 1)),
     "is_active_c17_dsogi_pll_3ph");
  sf_mex_destroy(&c17_u);
  sf_mex_destroy(&c17_st);
}

static void initSimStructsc17_dsogi_pll_3ph(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc17_dsogi_pll_3ph
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c17_emlrt_update_log_1(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c17_in, emlrtLocationLoggingDataType c17_table[],
  int32_T c17_index)
{
  emlrtLocationLoggingDataType *c17_b_table;
  emlrtLocationLoggingHistogramType *c17_histTable;
  real_T c17_inDouble;
  real_T c17_localMax;
  real_T c17_localMin;
  real_T c17_significand;
  int32_T c17_exponent;
  boolean_T c17_isLoggingEnabledHere;
  (void)chartInstance;
  c17_isLoggingEnabledHere = (c17_index >= 0);
  if (c17_isLoggingEnabledHere) {
    c17_b_table = (emlrtLocationLoggingDataType *)&c17_table[c17_index];
    c17_localMin = c17_b_table[0U].SimMin;
    c17_localMax = c17_b_table[0U].SimMax;
    c17_histTable = c17_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c17_in < c17_localMin) {
      c17_localMin = c17_in;
    }

    if (c17_in > c17_localMax) {
      c17_localMax = c17_in;
    }

    /* Histogram logging. */
    c17_inDouble = c17_in;
    c17_histTable->TotalNumberOfValues++;
    if (c17_inDouble == 0.0) {
      c17_histTable->NumberOfZeros++;
    } else {
      c17_histTable->SimSum += c17_inDouble;
      if ((!muDoubleScalarIsInf(c17_inDouble)) && (!muDoubleScalarIsNaN
           (c17_inDouble))) {
        c17_significand = frexp(c17_inDouble, &c17_exponent);
        if (c17_exponent > 128) {
          c17_exponent = 128;
        }

        if (c17_exponent < -127) {
          c17_exponent = -127;
        }

        if (c17_significand < 0.0) {
          c17_histTable->NumberOfNegativeValues++;
          c17_histTable->HistogramOfNegativeValues[127 + c17_exponent]++;
        } else {
          c17_histTable->NumberOfPositiveValues++;
          c17_histTable->HistogramOfPositiveValues[127 + c17_exponent]++;
        }
      }
    }

    c17_b_table[0U].SimMin = c17_localMin;
    c17_b_table[0U].SimMax = c17_localMax;

    /* IsAlwaysInteger logging. */
    if (c17_in != muDoubleScalarFloor(c17_in)) {
      c17_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c17_in;
}

static void c17_emlrtInitVarDataTables(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c17_dataTables[4],
  emlrtLocationLoggingHistogramType c17_histTables[4])
{
  int32_T c17_i;
  int32_T c17_iH;
  (void)chartInstance;
  for (c17_i = 0; c17_i < 4; c17_i++) {
    c17_dataTables[c17_i].SimMin = rtInf;
    c17_dataTables[c17_i].SimMax = rtMinusInf;
    c17_dataTables[c17_i].OverflowWraps = 0;
    c17_dataTables[c17_i].Saturations = 0;
    c17_dataTables[c17_i].IsAlwaysInteger = true;
    c17_dataTables[c17_i].HistogramTable = &c17_histTables[c17_i];
    c17_histTables[c17_i].NumberOfZeros = 0.0;
    c17_histTables[c17_i].NumberOfPositiveValues = 0.0;
    c17_histTables[c17_i].NumberOfNegativeValues = 0.0;
    c17_histTables[c17_i].TotalNumberOfValues = 0.0;
    c17_histTables[c17_i].SimSum = 0.0;
    for (c17_iH = 0; c17_iH < 256; c17_iH++) {
      c17_histTables[c17_i].HistogramOfPositiveValues[c17_iH] = 0.0;
      c17_histTables[c17_i].HistogramOfNegativeValues[c17_iH] = 0.0;
    }
  }
}

const mxArray *sf_c17_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c17_nameCaptureInfo = NULL;
  c17_nameCaptureInfo = NULL;
  sf_mex_assign(&c17_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c17_nameCaptureInfo;
}

static real_T c17_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_b_c, const char_T *c17_identifier)
{
  emlrtMsgIdentifier c17_thisId;
  real_T c17_y;
  c17_thisId.fIdentifier = (const char_T *)c17_identifier;
  c17_thisId.fParent = NULL;
  c17_thisId.bParentIsCell = false;
  c17_y = c17_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c17_b_c), &c17_thisId);
  sf_mex_destroy(&c17_b_c);
  return c17_y;
}

static real_T c17_b_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  real_T c17_d;
  real_T c17_y;
  (void)chartInstance;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_d, 1, 0, 0U, 0, 0U, 0);
  c17_y = c17_d;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static uint8_T c17_c_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_b_is_active_c17_dsogi_pll_3ph, const char_T
  *c17_identifier)
{
  emlrtMsgIdentifier c17_thisId;
  uint8_T c17_y;
  c17_thisId.fIdentifier = (const char_T *)c17_identifier;
  c17_thisId.fParent = NULL;
  c17_thisId.bParentIsCell = false;
  c17_y = c17_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c17_b_is_active_c17_dsogi_pll_3ph), &c17_thisId);
  sf_mex_destroy(&c17_b_is_active_c17_dsogi_pll_3ph);
  return c17_y;
}

static uint8_T c17_d_emlrt_marshallIn(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c17_u, const emlrtMsgIdentifier *c17_parentId)
{
  uint8_T c17_b_u;
  uint8_T c17_y;
  (void)chartInstance;
  sf_mex_import(c17_parentId, sf_mex_dup(c17_u), &c17_b_u, 1, 3, 0U, 0, 0U, 0);
  c17_y = c17_b_u;
  sf_mex_destroy(&c17_u);
  return c17_y;
}

static void c17_slStringInitializeDynamicBuffers
  (SFc17_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c17_chart_data_browse_helper(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c17_ssIdNumber, const mxArray **c17_mxData, uint8_T
  *c17_isValueTooBig)
{
  real_T c17_d;
  real_T c17_d1;
  real_T c17_d2;
  *c17_mxData = NULL;
  *c17_mxData = NULL;
  *c17_isValueTooBig = 0U;
  switch (c17_ssIdNumber) {
   case 4U:
    c17_d = *chartInstance->c17_a;
    sf_mex_assign(c17_mxData, sf_mex_create("mxData", &c17_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c17_d1 = *chartInstance->c17_c;
    sf_mex_assign(c17_mxData, sf_mex_create("mxData", &c17_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c17_d2 = *chartInstance->c17_b;
    sf_mex_assign(c17_mxData, sf_mex_create("mxData", &c17_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc17_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c17_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c17_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c17_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c17_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c17_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c17_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3070941657U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2761892949U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(759730568U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(746254965U);
}

mxArray *sf_c17_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c17_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c17_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c17_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9saB6fUpyfnhlfkJMTb1yQATcXBAAwlhoP"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c17_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "su4OXMJlU3BlFOe9WJLTAvG";
}

static void sf_opaque_initialize_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c17_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c17_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c17_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc17_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c17_dsogi_pll_3ph
      ((SFc17_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc17_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c17_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c17_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc17_dsogi_pll_3ph((SFc17_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c17_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWM1v40QUd6JSUbFURUJCq0ViuXFBYrcgPoSWNl+7WSW0wmkXcYmm9ks8ynjGOx9JgzjyB3D",
    "kyBEk/iDEnTvHPSHe2E4a3JB4EhZ2V7hynbH9m997b97X2Ku0ux4e+3h+d9PzdvH6Mp5VLzteys",
    "eVhTO7v+N9mo+/ecXzAhHCELhvBgN66bkd3MSnRJJYee4HJzF8AUowo6ngbT4Q5bGUD0ACD3CCR",
    "EjtxKtobBjlo5bhgWVWjyIaRH4kDAtrOCEJTzib/h1vYvQpMjaohEC3AEIdSWGGUYuR4WorSD2p",
    "RxCMlImdbaVA+yaxqqquYZomDJqXELS50gStoNbo62uioa4v3Yxs9VX+DC3ihFHCy9s6IsqHBL1",
    "Dw1kS4v8To9F6pbBBRKSuQUTGoDp0lLILDqXYqcK3LygnWkhKWDNmdTtbSX1PGerYxZBgrmuE+t",
    "YkkFEiKNeOAeG30M5NTi4YNODCDB15fXhsbDScU5iAdFvfQV2MQZIhnHA3mdM1al6mTjmPpZJYT",
    "WM4J/I4QN9VELrlDQw65RN0R+jhNE5YSE3cVj1Jx+gbrrmubcN/o1xn4sz71UbYlLc5Bme/mvO2",
    "Al4njCk3bE8kHRgDS/kbRJMNsBm/A1gpGvYEeofNNo4Zy3CKkZBj64KHtLxXjguotLB9jkWqBJz",
    "GNgwgRDPPRZ9PtC6OjNIirmPKaXQ6JfmuY9tcgxyQAErXGEmoAhQ49StH3pAqG0iIRivpVMvSM2",
    "QxuBHUUwPDGxMhR2hj12J2ZSsbCW5oCIeYmDWkSa6J3n1OmCkpc6yGGD/oHmcKs6wbL2Jt/GwED",
    "kgQQWgrJ2XQxTyLE5RdYmVL/jFqO6Z62gAVSJqUjSSDCR2LrrVSb5rAGR9xMeEtKWI/77xW+BUA",
    "Zg0iOeXDGpZwOW2h8OWklvC4l2Z31ybH2ploRi6sb9wHjtXQ6mq7BhJgVDU5tsgo0DZYn36NTQx",
    "XVGks1NOs1Gd1z/bvD7yr/n1nSf/+2kL/fpCPgzsf9kMlhrSfMNY/TKL8uZ3vvYX5bpTYD5TBed",
    "dwV3yz6zsL+MoSXm/hWuTbq/71/WqBr4p/lUqGO1rAvVrg2SngdnOb/frg+2/f/mNP/fbJD3s/y",
    "5/0Ov7KNf5K+tvifqy67bf28/Gbs75pnqXH1xJZGX94o+APdqzM+ydfdh+ys8Maa53Ax48ednrH",
    "4/vpfE8qq+WtFuSd3b9tezUM4jQnyKAd5vs2OyYm20/Y+T9akHd3jT32FvzJ837/bDv860fFddx",
    "Zgz/AX0HBbzfnv320HT7jP10j/63Cet9Ke/c+sRka+sszwX7JOFvl564471/GPS9y/m+Xp69fmT",
    "pX3RBXeYp19Z/Ebaufa/1+3t9fVTe8wvsHz7Aeq/K9Sx/3rOn1i+fWZ72Vj+/NvyPUI8rCJTuZ/",
    "DFuNgbLnr4g/v3E0X6zvrKZ9pPZB+evDo85YVPcumRbw/z2qbTfDeePJBC1fH/4X9ST2fVoTV91",
    "oxDfdjyhPBQT9e6dux/c3aY+/QkFRhk7",
    ""
  };

  static char newstr [1533] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c17_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c17_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2224572634U));
  ssSetChecksum1(S,(1930034721U));
  ssSetChecksum2(S,(161495781U));
  ssSetChecksum3(S,(1957261996U));
}

static void mdlRTW_c17_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c17_dsogi_pll_3ph(SimStruct *S)
{
  SFc17_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc17_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc17_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc17_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c17_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c17_dsogi_pll_3ph;
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
    chartInstance->c17_JITStateAnimation,
    chartInstance->c17_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c17_dsogi_pll_3ph(chartInstance);
}

void c17_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c17_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c17_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c17_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c17_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
