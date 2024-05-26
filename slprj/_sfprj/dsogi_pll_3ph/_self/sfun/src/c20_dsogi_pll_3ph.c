/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c20_dsogi_pll_3ph.h"
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
static void initialize_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c20_update_jit_animation_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void c20_do_animation_call_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_st);
static void initSimStructsc20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c20_emlrt_update_log_1(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c20_in, emlrtLocationLoggingDataType c20_table[],
  int32_T c20_index);
static void c20_emlrtInitVarDataTables(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c20_dataTables[4],
  emlrtLocationLoggingHistogramType c20_histTables[4]);
static real_T c20_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_b_c, const char_T *c20_identifier);
static real_T c20_b_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static uint8_T c20_c_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_b_is_active_c20_dsogi_pll_3ph, const char_T
  *c20_identifier);
static uint8_T c20_d_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static void c20_slStringInitializeDynamicBuffers
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance);
static void c20_chart_data_browse_helper(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c20_ssIdNumber, const mxArray **c20_mxData, uint8_T
  *c20_isValueTooBig);
static void init_dsm_address_info(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c20_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c20_is_active_c20_dsogi_pll_3ph = 0U;
  chartInstance->c20_emlrtLocLogSimulated = false;
  c20_emlrtInitVarDataTables(chartInstance,
    chartInstance->c20_emlrtLocationLoggingDataTables,
    chartInstance->c20_emlrtLocLogHistTables);
}

static void initialize_params_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c20_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:478",              /* mexFileName */
    "Sun May 26 15:34:39 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c20_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      4                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c20_emlrtLocationInfo[5] = { { 1,/* MxInfoID */
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

  const int32_T c20_emlrtLocationLoggingFieldCounts[4] = { 0, 0, 0, 0 };

  if (chartInstance->c20_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:478");
    emlrtLocationLoggingPushLog(&c20_emlrtLocationLoggingFileInfo,
      &c20_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c20_emlrtLocationLoggingDataTables[0],
      &c20_emlrtLocationInfo[0], NULL, 0U, &c20_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:478");
  }
}

static void mdl_setup_runtime_resources_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c20_decisionTxtEndIdx = 0U;
  static const uint32_T c20_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c20_chart_data_browse_helper);
  chartInstance->c20_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c20_RuntimeVar,
    &chartInstance->c20_IsDebuggerActive,
    &chartInstance->c20_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c20_mlFcnLineNumber, &chartInstance->c20_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c20_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c20_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c20_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c20_decisionTxtStartIdx, &c20_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c20_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c20_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c20_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 39);
}

static void mdl_cleanup_runtime_resources_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c20_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c20_covrtInstance);
}

static void enable_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c20_b_a;
  real_T c20_b_b;
  real_T c20_b_c;
  chartInstance->c20_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c20_covrtInstance, 1U, *chartInstance->c20_b);
  covrtSigUpdateFcn(chartInstance->c20_covrtInstance, 0U, *chartInstance->c20_a);
  chartInstance->c20_sfEvent = CALL_EVENT;
  c20_b_a = *chartInstance->c20_a;
  c20_b_b = *chartInstance->c20_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c20_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c20_emlrt_update_log_1(chartInstance, c20_b_a,
    chartInstance->c20_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c20_emlrt_update_log_1(chartInstance, c20_b_b,
    chartInstance->c20_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c20_covrtInstance, 4U, 0, 0);
  c20_b_c = c20_emlrt_update_log_1(chartInstance, 0.5 * c20_emlrt_update_log_1
    (chartInstance, c20_b_a + c20_b_b,
     chartInstance->c20_emlrtLocationLoggingDataTables, 3),
    chartInstance->c20_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c20_c = c20_b_c;
  c20_do_animation_call_c20_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c20_covrtInstance, 2U, *chartInstance->c20_c);
}

static void ext_mode_exec_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c20_update_jit_animation_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c20_do_animation_call_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c20_b_y = NULL;
  const mxArray *c20_c_y = NULL;
  const mxArray *c20_st;
  const mxArray *c20_y = NULL;
  c20_st = NULL;
  c20_st = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_createcellmatrix(2, 1), false);
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", chartInstance->c20_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c20_y, 0, c20_b_y);
  c20_c_y = NULL;
  sf_mex_assign(&c20_c_y, sf_mex_create("y",
    &chartInstance->c20_is_active_c20_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c20_y, 1, c20_c_y);
  sf_mex_assign(&c20_st, c20_y, false);
  return c20_st;
}

static void set_sim_state_c20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_st)
{
  const mxArray *c20_u;
  chartInstance->c20_doneDoubleBufferReInit = true;
  c20_u = sf_mex_dup(c20_st);
  *chartInstance->c20_c = c20_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c20_u, 0)), "c");
  chartInstance->c20_is_active_c20_dsogi_pll_3ph = c20_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c20_u, 1)),
     "is_active_c20_dsogi_pll_3ph");
  sf_mex_destroy(&c20_u);
  sf_mex_destroy(&c20_st);
}

static void initSimStructsc20_dsogi_pll_3ph(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc20_dsogi_pll_3ph
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c20_emlrt_update_log_1(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c20_in, emlrtLocationLoggingDataType c20_table[],
  int32_T c20_index)
{
  emlrtLocationLoggingDataType *c20_b_table;
  emlrtLocationLoggingHistogramType *c20_histTable;
  real_T c20_inDouble;
  real_T c20_localMax;
  real_T c20_localMin;
  real_T c20_significand;
  int32_T c20_exponent;
  boolean_T c20_isLoggingEnabledHere;
  (void)chartInstance;
  c20_isLoggingEnabledHere = (c20_index >= 0);
  if (c20_isLoggingEnabledHere) {
    c20_b_table = (emlrtLocationLoggingDataType *)&c20_table[c20_index];
    c20_localMin = c20_b_table[0U].SimMin;
    c20_localMax = c20_b_table[0U].SimMax;
    c20_histTable = c20_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c20_in < c20_localMin) {
      c20_localMin = c20_in;
    }

    if (c20_in > c20_localMax) {
      c20_localMax = c20_in;
    }

    /* Histogram logging. */
    c20_inDouble = c20_in;
    c20_histTable->TotalNumberOfValues++;
    if (c20_inDouble == 0.0) {
      c20_histTable->NumberOfZeros++;
    } else {
      c20_histTable->SimSum += c20_inDouble;
      if ((!muDoubleScalarIsInf(c20_inDouble)) && (!muDoubleScalarIsNaN
           (c20_inDouble))) {
        c20_significand = frexp(c20_inDouble, &c20_exponent);
        if (c20_exponent > 128) {
          c20_exponent = 128;
        }

        if (c20_exponent < -127) {
          c20_exponent = -127;
        }

        if (c20_significand < 0.0) {
          c20_histTable->NumberOfNegativeValues++;
          c20_histTable->HistogramOfNegativeValues[127 + c20_exponent]++;
        } else {
          c20_histTable->NumberOfPositiveValues++;
          c20_histTable->HistogramOfPositiveValues[127 + c20_exponent]++;
        }
      }
    }

    c20_b_table[0U].SimMin = c20_localMin;
    c20_b_table[0U].SimMax = c20_localMax;

    /* IsAlwaysInteger logging. */
    if (c20_in != muDoubleScalarFloor(c20_in)) {
      c20_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c20_in;
}

static void c20_emlrtInitVarDataTables(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c20_dataTables[4],
  emlrtLocationLoggingHistogramType c20_histTables[4])
{
  int32_T c20_i;
  int32_T c20_iH;
  (void)chartInstance;
  for (c20_i = 0; c20_i < 4; c20_i++) {
    c20_dataTables[c20_i].SimMin = rtInf;
    c20_dataTables[c20_i].SimMax = rtMinusInf;
    c20_dataTables[c20_i].OverflowWraps = 0;
    c20_dataTables[c20_i].Saturations = 0;
    c20_dataTables[c20_i].IsAlwaysInteger = true;
    c20_dataTables[c20_i].HistogramTable = &c20_histTables[c20_i];
    c20_histTables[c20_i].NumberOfZeros = 0.0;
    c20_histTables[c20_i].NumberOfPositiveValues = 0.0;
    c20_histTables[c20_i].NumberOfNegativeValues = 0.0;
    c20_histTables[c20_i].TotalNumberOfValues = 0.0;
    c20_histTables[c20_i].SimSum = 0.0;
    for (c20_iH = 0; c20_iH < 256; c20_iH++) {
      c20_histTables[c20_i].HistogramOfPositiveValues[c20_iH] = 0.0;
      c20_histTables[c20_i].HistogramOfNegativeValues[c20_iH] = 0.0;
    }
  }
}

const mxArray *sf_c20_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c20_nameCaptureInfo = NULL;
  c20_nameCaptureInfo = NULL;
  sf_mex_assign(&c20_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c20_nameCaptureInfo;
}

static real_T c20_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_b_c, const char_T *c20_identifier)
{
  emlrtMsgIdentifier c20_thisId;
  real_T c20_y;
  c20_thisId.fIdentifier = (const char_T *)c20_identifier;
  c20_thisId.fParent = NULL;
  c20_thisId.bParentIsCell = false;
  c20_y = c20_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_b_c), &c20_thisId);
  sf_mex_destroy(&c20_b_c);
  return c20_y;
}

static real_T c20_b_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  real_T c20_d;
  real_T c20_y;
  (void)chartInstance;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_d, 1, 0, 0U, 0, 0U, 0);
  c20_y = c20_d;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static uint8_T c20_c_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_b_is_active_c20_dsogi_pll_3ph, const char_T
  *c20_identifier)
{
  emlrtMsgIdentifier c20_thisId;
  uint8_T c20_y;
  c20_thisId.fIdentifier = (const char_T *)c20_identifier;
  c20_thisId.fParent = NULL;
  c20_thisId.bParentIsCell = false;
  c20_y = c20_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c20_b_is_active_c20_dsogi_pll_3ph), &c20_thisId);
  sf_mex_destroy(&c20_b_is_active_c20_dsogi_pll_3ph);
  return c20_y;
}

static uint8_T c20_d_emlrt_marshallIn(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  uint8_T c20_b_u;
  uint8_T c20_y;
  (void)chartInstance;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_b_u, 1, 3, 0U, 0, 0U, 0);
  c20_y = c20_b_u;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void c20_slStringInitializeDynamicBuffers
  (SFc20_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c20_chart_data_browse_helper(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c20_ssIdNumber, const mxArray **c20_mxData, uint8_T
  *c20_isValueTooBig)
{
  real_T c20_d;
  real_T c20_d1;
  real_T c20_d2;
  *c20_mxData = NULL;
  *c20_mxData = NULL;
  *c20_isValueTooBig = 0U;
  switch (c20_ssIdNumber) {
   case 4U:
    c20_d = *chartInstance->c20_a;
    sf_mex_assign(c20_mxData, sf_mex_create("mxData", &c20_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c20_d1 = *chartInstance->c20_c;
    sf_mex_assign(c20_mxData, sf_mex_create("mxData", &c20_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c20_d2 = *chartInstance->c20_b;
    sf_mex_assign(c20_mxData, sf_mex_create("mxData", &c20_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc20_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c20_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c20_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c20_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c20_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c20_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c20_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4034689114U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2296780797U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3221964355U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2676711006U);
}

mxArray *sf_c20_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c20_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c20_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c20_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9sZBCfUpyfnhlfkJMTb1yQATcXBAAv7xoJ"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c20_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s1SPIvEujhfLCHB268xhWDF";
}

static void sf_opaque_initialize_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c20_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c20_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c20_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc20_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c20_dsogi_pll_3ph
      ((SFc20_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc20_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c20_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c20_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc20_dsogi_pll_3ph((SFc20_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c20_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWE2P20QYdqJlRUVZLRIIoSKoOHFBarcC9YBgN180UpYNdXYrcYlm7TfxkPGMOx/5QFy4ceT",
    "ML+AncOdP9MRv4NgT4h3byQZvSDwJhRbVK68ztp953ved92vsVdqnHh4HeP74juft4/VVPKtedr",
    "ySjytLZ3Z/z/s0H3/3mucFIoQhcN8MBnTquR3cxF0iSaw894OTGB6CEsxoKnibD0R5LOUDkMADn",
    "CARUjvxKhobRvmoZXhgmdWjiAaRHwnDwhpOSMIzzmZ/x5sY3UXGBpUQ6BZAqCMpzDBqMTJcbwWp",
    "J/UIgpEysbOtFGjfJFZVdWqYpgmD5hSCNleaoBXUBn19TTTU9dTNyFZf5c/RIk4YJby8rSOifEj",
    "QOzScJyH+PzMarVcKG0RE6hpEZAyqQ0cpu+BQip0qfPuScqKFpIQ1Y1a3s5XUt8tQx1MMCea6Rq",
    "hvTQIZJYJy7RgQfgvt3OTkkkEDLs3QkdeHx8ZGwwWFCUi39R3UxRgkGcIZd5M5XaPmNHXKRSyVx",
    "GoawwWRJwH6roLQLW9g0CmfoDtCD6dxwkJq4rbqSTpG33DNdW0b/lvlOhNn3q+2wqa8zTE4+9WC",
    "txXwOmFMuWF7IunAGFjK3yCabIHN+B3AStGwJ9A7bLZxzFiGU4yEHFsXPKTlvXJcQKWF7UssUiX",
    "gNLZhACGaeSH6YqJNcWSUFnEdU06j0ynJdx3b5hrkgARQusZIQhWgwKlfOfKGVNlAQjRaSadalp",
    "4hi8GtoJ4aGN6YCDlCG7sWsytb2UhwQ0M4xMSsIU1yTfTuC8JMSZljNcT4Qfc4V5hl3XgRa+NnK",
    "3BAgghCWzkpg1PMszhB2SVWtuSfoLZjqmcNUIGkSdlIMpjQsehaK/VmCZzzERcT3pIi9vPOa41f",
    "AWDWIJJTPqxhCZezFgpfTmoJj3tpdndtcqydiWbk0vrGF8CxGlpdbddAAoyqJscWGQXaBevTb7G",
    "J4YoqjYV6lpX6rO7Z/v2Bd9W/763o399Y6t8P83FwdKcfKjGk/YSx/r0kyp/b+e4szXezxH6gDM",
    "67hrvim18/XMJXVvB6S9ci343qX9+vFviq+FepZLjjJdzrBZ69Am4/t1nyw8M/3mM/ffXrW/4H3",
    "z/57ZdN/JVr/JX0t8X9XHXbbx3k43fnfdMiS4+vJbIy/vB2wR/sWN31u+1x03wTDTr1B7WjT+5P",
    "o0eNVjrf08p6easFeef3b9teDYM4zQkyaIf5vs2Oicn2E3b++0vy7m+wx40lf/K83z/fDf/mcXE",
    "d9zbgD/FXUPDb7flvH++Gz/i7G+S/VVjvW2nv3ic2Q0N/dSY4KBln6/zcFef9y7gXRc6Xdnn2+p",
    "Wpc9UtcZVnWFf/Sdyu+rnW7xf9/XV1wyu8f/gc67Eu37v0cc+bXk88tz7r/Xz82eI7Qj2iLFyxk",
    "8kf42ZjsOrp/8S/nzrab95XNq398g/OX9874YTNcOuSbQ3z211pvxsuHkkgavX+8L+oJ/Pr8Ya+",
    "6mYhvu14QnkoJuqju0cfH+1Sn/4EC2MZUA==",
    ""
  };

  static char newstr [1537] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c20_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c20_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4266821744U));
  ssSetChecksum1(S,(1369074718U));
  ssSetChecksum2(S,(575870403U));
  ssSetChecksum3(S,(3101612161U));
}

static void mdlRTW_c20_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c20_dsogi_pll_3ph(SimStruct *S)
{
  SFc20_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc20_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc20_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc20_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c20_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c20_dsogi_pll_3ph;
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
    chartInstance->c20_JITStateAnimation,
    chartInstance->c20_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c20_dsogi_pll_3ph(chartInstance);
}

void c20_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c20_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c20_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c20_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c20_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
