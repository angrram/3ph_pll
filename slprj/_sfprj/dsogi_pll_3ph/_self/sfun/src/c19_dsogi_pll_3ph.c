/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c19_dsogi_pll_3ph.h"
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
static void initialize_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c19_update_jit_animation_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void c19_do_animation_call_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_st);
static void initSimStructsc19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c19_emlrt_update_log_1(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c19_in, emlrtLocationLoggingDataType c19_table[],
  int32_T c19_index);
static void c19_emlrtInitVarDataTables(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c19_dataTables[4],
  emlrtLocationLoggingHistogramType c19_histTables[4]);
static real_T c19_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_b_c, const char_T *c19_identifier);
static real_T c19_b_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static uint8_T c19_c_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_b_is_active_c19_dsogi_pll_3ph, const char_T
  *c19_identifier);
static uint8_T c19_d_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_slStringInitializeDynamicBuffers
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance);
static void c19_chart_data_browse_helper(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c19_ssIdNumber, const mxArray **c19_mxData, uint8_T
  *c19_isValueTooBig);
static void init_dsm_address_info(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c19_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c19_is_active_c19_dsogi_pll_3ph = 0U;
  chartInstance->c19_emlrtLocLogSimulated = false;
  c19_emlrtInitVarDataTables(chartInstance,
    chartInstance->c19_emlrtLocationLoggingDataTables,
    chartInstance->c19_emlrtLocLogHistTables);
}

static void initialize_params_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c19_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:477",              /* mexFileName */
    "Tue Jun  4 19:57:57 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c19_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      4                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c19_emlrtLocationInfo[5] = { { 1,/* MxInfoID */
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

  const int32_T c19_emlrtLocationLoggingFieldCounts[4] = { 0, 0, 0, 0 };

  if (chartInstance->c19_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:477");
    emlrtLocationLoggingPushLog(&c19_emlrtLocationLoggingFileInfo,
      &c19_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c19_emlrtLocationLoggingDataTables[0],
      &c19_emlrtLocationInfo[0], NULL, 0U, &c19_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:477");
  }
}

static void mdl_setup_runtime_resources_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c19_decisionTxtEndIdx = 0U;
  static const uint32_T c19_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c19_chart_data_browse_helper);
  chartInstance->c19_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c19_RuntimeVar,
    &chartInstance->c19_IsDebuggerActive,
    &chartInstance->c19_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c19_mlFcnLineNumber, &chartInstance->c19_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c19_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c19_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c19_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c19_decisionTxtStartIdx, &c19_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c19_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c19_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 39);
}

static void mdl_cleanup_runtime_resources_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c19_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c19_covrtInstance);
}

static void enable_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c19_b_a;
  real_T c19_b_b;
  real_T c19_b_c;
  chartInstance->c19_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 1U, *chartInstance->c19_b);
  covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 0U, *chartInstance->c19_a);
  chartInstance->c19_sfEvent = CALL_EVENT;
  c19_b_a = *chartInstance->c19_a;
  c19_b_b = *chartInstance->c19_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c19_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c19_emlrt_update_log_1(chartInstance, c19_b_a,
    chartInstance->c19_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c19_emlrt_update_log_1(chartInstance, c19_b_b,
    chartInstance->c19_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c19_covrtInstance, 4U, 0, 0);
  c19_b_c = c19_emlrt_update_log_1(chartInstance, 0.5 * c19_emlrt_update_log_1
    (chartInstance, c19_b_a - c19_b_b,
     chartInstance->c19_emlrtLocationLoggingDataTables, 3),
    chartInstance->c19_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c19_c = c19_b_c;
  c19_do_animation_call_c19_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 2U, *chartInstance->c19_c);
}

static void ext_mode_exec_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c19_update_jit_animation_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c19_do_animation_call_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c19_b_y = NULL;
  const mxArray *c19_c_y = NULL;
  const mxArray *c19_st;
  const mxArray *c19_y = NULL;
  c19_st = NULL;
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellmatrix(2, 1), false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", chartInstance->c19_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y",
    &chartInstance->c19_is_active_c19_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c19_y, 1, c19_c_y);
  sf_mex_assign(&c19_st, c19_y, false);
  return c19_st;
}

static void set_sim_state_c19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_st)
{
  const mxArray *c19_u;
  chartInstance->c19_doneDoubleBufferReInit = true;
  c19_u = sf_mex_dup(c19_st);
  *chartInstance->c19_c = c19_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c19_u, 0)), "c");
  chartInstance->c19_is_active_c19_dsogi_pll_3ph = c19_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 1)),
     "is_active_c19_dsogi_pll_3ph");
  sf_mex_destroy(&c19_u);
  sf_mex_destroy(&c19_st);
}

static void initSimStructsc19_dsogi_pll_3ph(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc19_dsogi_pll_3ph
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c19_emlrt_update_log_1(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c19_in, emlrtLocationLoggingDataType c19_table[],
  int32_T c19_index)
{
  emlrtLocationLoggingDataType *c19_b_table;
  emlrtLocationLoggingHistogramType *c19_histTable;
  real_T c19_inDouble;
  real_T c19_localMax;
  real_T c19_localMin;
  real_T c19_significand;
  int32_T c19_exponent;
  boolean_T c19_isLoggingEnabledHere;
  (void)chartInstance;
  c19_isLoggingEnabledHere = (c19_index >= 0);
  if (c19_isLoggingEnabledHere) {
    c19_b_table = (emlrtLocationLoggingDataType *)&c19_table[c19_index];
    c19_localMin = c19_b_table[0U].SimMin;
    c19_localMax = c19_b_table[0U].SimMax;
    c19_histTable = c19_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c19_in < c19_localMin) {
      c19_localMin = c19_in;
    }

    if (c19_in > c19_localMax) {
      c19_localMax = c19_in;
    }

    /* Histogram logging. */
    c19_inDouble = c19_in;
    c19_histTable->TotalNumberOfValues++;
    if (c19_inDouble == 0.0) {
      c19_histTable->NumberOfZeros++;
    } else {
      c19_histTable->SimSum += c19_inDouble;
      if ((!muDoubleScalarIsInf(c19_inDouble)) && (!muDoubleScalarIsNaN
           (c19_inDouble))) {
        c19_significand = frexp(c19_inDouble, &c19_exponent);
        if (c19_exponent > 128) {
          c19_exponent = 128;
        }

        if (c19_exponent < -127) {
          c19_exponent = -127;
        }

        if (c19_significand < 0.0) {
          c19_histTable->NumberOfNegativeValues++;
          c19_histTable->HistogramOfNegativeValues[127 + c19_exponent]++;
        } else {
          c19_histTable->NumberOfPositiveValues++;
          c19_histTable->HistogramOfPositiveValues[127 + c19_exponent]++;
        }
      }
    }

    c19_b_table[0U].SimMin = c19_localMin;
    c19_b_table[0U].SimMax = c19_localMax;

    /* IsAlwaysInteger logging. */
    if (c19_in != muDoubleScalarFloor(c19_in)) {
      c19_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c19_in;
}

static void c19_emlrtInitVarDataTables(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c19_dataTables[4],
  emlrtLocationLoggingHistogramType c19_histTables[4])
{
  int32_T c19_i;
  int32_T c19_iH;
  (void)chartInstance;
  for (c19_i = 0; c19_i < 4; c19_i++) {
    c19_dataTables[c19_i].SimMin = rtInf;
    c19_dataTables[c19_i].SimMax = rtMinusInf;
    c19_dataTables[c19_i].OverflowWraps = 0;
    c19_dataTables[c19_i].Saturations = 0;
    c19_dataTables[c19_i].IsAlwaysInteger = true;
    c19_dataTables[c19_i].HistogramTable = &c19_histTables[c19_i];
    c19_histTables[c19_i].NumberOfZeros = 0.0;
    c19_histTables[c19_i].NumberOfPositiveValues = 0.0;
    c19_histTables[c19_i].NumberOfNegativeValues = 0.0;
    c19_histTables[c19_i].TotalNumberOfValues = 0.0;
    c19_histTables[c19_i].SimSum = 0.0;
    for (c19_iH = 0; c19_iH < 256; c19_iH++) {
      c19_histTables[c19_i].HistogramOfPositiveValues[c19_iH] = 0.0;
      c19_histTables[c19_i].HistogramOfNegativeValues[c19_iH] = 0.0;
    }
  }
}

const mxArray *sf_c19_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  sf_mex_assign(&c19_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c19_nameCaptureInfo;
}

static real_T c19_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_b_c, const char_T *c19_identifier)
{
  emlrtMsgIdentifier c19_thisId;
  real_T c19_y;
  c19_thisId.fIdentifier = (const char_T *)c19_identifier;
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_c), &c19_thisId);
  sf_mex_destroy(&c19_b_c);
  return c19_y;
}

static real_T c19_b_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  real_T c19_d;
  real_T c19_y;
  (void)chartInstance;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_d, 1, 0, 0U, 0, 0U, 0);
  c19_y = c19_d;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static uint8_T c19_c_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_b_is_active_c19_dsogi_pll_3ph, const char_T
  *c19_identifier)
{
  emlrtMsgIdentifier c19_thisId;
  uint8_T c19_y;
  c19_thisId.fIdentifier = (const char_T *)c19_identifier;
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_is_active_c19_dsogi_pll_3ph), &c19_thisId);
  sf_mex_destroy(&c19_b_is_active_c19_dsogi_pll_3ph);
  return c19_y;
}

static uint8_T c19_d_emlrt_marshallIn(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint8_T c19_b_u;
  uint8_T c19_y;
  (void)chartInstance;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_b_u, 1, 3, 0U, 0, 0U, 0);
  c19_y = c19_b_u;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_slStringInitializeDynamicBuffers
  (SFc19_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c19_chart_data_browse_helper(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c19_ssIdNumber, const mxArray **c19_mxData, uint8_T
  *c19_isValueTooBig)
{
  real_T c19_d;
  real_T c19_d1;
  real_T c19_d2;
  *c19_mxData = NULL;
  *c19_mxData = NULL;
  *c19_isValueTooBig = 0U;
  switch (c19_ssIdNumber) {
   case 4U:
    c19_d = *chartInstance->c19_a;
    sf_mex_assign(c19_mxData, sf_mex_create("mxData", &c19_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c19_d1 = *chartInstance->c19_c;
    sf_mex_assign(c19_mxData, sf_mex_create("mxData", &c19_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c19_d2 = *chartInstance->c19_b;
    sf_mex_assign(c19_mxData, sf_mex_create("mxData", &c19_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc19_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c19_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c19_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c19_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c19_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c19_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c19_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3070941657U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2761892949U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(759730568U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(746254965U);
}

mxArray *sf_c19_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c19_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c19_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c19_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9saBmfUpyfnhlfkJMTb1yQATcXBAAwzhoR"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "su4OXMJlU3BlFOe9WJLTAvG";
}

static void sf_opaque_initialize_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c19_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c19_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c19_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c19_dsogi_pll_3ph
      ((SFc19_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc19_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c19_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc19_dsogi_pll_3ph((SFc19_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c19_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWM2P20QUd6JlxYqyWiQkVBWJcuOCRLsgUYTKbr7aVBs2wtkt4hLN2i/xKOMZdz6SDeLIH8C",
    "RI0eQ+IMQd+4ce0K8sZ1s8IbEk1BoK7zyOmP7N7/33ryvsVdpdzw89vH87qbn7eL1VTyrXna8ko",
    "8rC2d2f8f7NB9/85rnBSKEIXDfDAb00nM7uIm7RJJYee4HJzF8AUowo6ngbT4Q5bGUD0ACD3CCR",
    "EjtxKtobBjlo5bhgWVWjyMaRH4kDAtrOCEJTzmb/h1vYnQXGRtUQqBbAKGOpDDDqMXIcLUVpJ7U",
    "IwhGysTOtlKgfZNYVVXHME0TBs1LCNpcaYJWUGv09TXRUNeXbka2+ip/hhZxwijh5W0dEeVDgt6",
    "h4SwJ8f+p0Wi9UtggIlLXICJjUCd0lLILDqXYqcK3LygnWkhKWDNmdTtbSX27DHXsYEgw1zVCfW",
    "sSyCgRlGvHgPBbaOcmJxcMGnBhho68PjwxNhrOKUxAuq3voC7GIMkQTrmbzOkaNS9Tp5zHUkmsp",
    "jGcE3kcoO8qCN3yBgad8gm6I/RwGicspCZuq56kY/QN11zXtuG/Ua4zceb9aiNsytscg7NfzXlb",
    "Aa8TxpQbtieSExgDS/kbRJMNsBm/A1gpGvYEeofNNo4Zy3CKkZBj64KHtLxXjguotLB9jkWqBJz",
    "GNgwgRDPPRZ9PtC6OjNIirmPKaZyclOS7jm1zDXJAAihdYyShClDg1K8ceUOqbCAhGq2kUy1Lz5",
    "DF4EZQTw0Mb0yEHKGNXYvZla1sJLihIRxiYtaQJrkmevc5YaakzLEaYvyge5wpzLJuvIi18bMRO",
    "CBBBKGtnJRBB/MsTlB2iZUt+ceo7ZjqaQNUIGlSNpIMJnQsutZKvWkCZ3zExYS3pIj9vPNa4VcA",
    "mDWI5JQPa1jC5bSFwpeTWsKTXprdXZsca2eiGbmwvvEAOFZDq6vtGkiAUdXk2CKjQNtgffo1NjF",
    "cUaWxUE+zUp/VPdu/P/Su+vedJf37Gwv9+0E+Du7c64dKDGk/Yax/mET5czvfBwvz3SixHyiD86",
    "7hrvhm1/cW8JUlvN7Ctci3V/3r+9UCXxX/KpUMd7SAe73As1PA7eY2+/Xh99+++8ee+u2TH/Z+l",
    "j/pdfyVa/yV9LfF/Vh122/t5+O3Z33TPEuPryWyMv7wVsEf7FiZD0+/7DxiZ4c11jqFe48fnfSO",
    "xw/S+Z5WVstbLcg7u3/b9moYxGlOkEE7zPdtdkxMtp+w83+8IO/uGnvsLfiT5/3+2Xb4N4+K67i",
    "zBn+Av4KC327Of/toO3zG310j/63Cet9Ke/c+sRka+sszwX7JOFvl564471/GvShy/m+XZ69fmT",
    "pX3RBXeYZ19Z/Ebaufa/1+0d9fVTe8wvsHz7Eeq/K9Sx/3vOn1i+fWZ72Tj+/PvyPUI8rCJTuZ/",
    "DFuNgbLnr4k/v3U0X6zvrKZ9pPZB+evDo85YVPcumRbw/x2V9rvhvNHEohavj/8L+rJ7Hq0pq+6",
    "UYhvO55QHoqJev/O3Y/ublOf/gQzqhk/",
    ""
  };

  static char newstr [1533] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c19_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c19_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2224572634U));
  ssSetChecksum1(S,(1930034721U));
  ssSetChecksum2(S,(161495781U));
  ssSetChecksum3(S,(1957261996U));
}

static void mdlRTW_c19_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c19_dsogi_pll_3ph(SimStruct *S)
{
  SFc19_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc19_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc19_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc19_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c19_dsogi_pll_3ph;
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
    chartInstance->c19_JITStateAnimation,
    chartInstance->c19_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c19_dsogi_pll_3ph(chartInstance);
}

void c19_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c19_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
