/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c26_dsogi_pll_3ph.h"
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
static void initialize_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c26_update_jit_animation_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void c26_do_animation_call_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_st);
static void initSimStructsc26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c26_emlrt_update_log_1(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c26_in, emlrtLocationLoggingDataType c26_table[],
  int32_T c26_index);
static void c26_emlrtInitVarDataTables(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c26_dataTables[3],
  emlrtLocationLoggingHistogramType c26_histTables[3]);
static real_T c26_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_b_c, const char_T *c26_identifier);
static real_T c26_b_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId);
static uint8_T c26_c_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_b_is_active_c26_dsogi_pll_3ph, const char_T
  *c26_identifier);
static uint8_T c26_d_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId);
static void c26_slStringInitializeDynamicBuffers
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance);
static void c26_chart_data_browse_helper(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c26_ssIdNumber, const mxArray **c26_mxData, uint8_T
  *c26_isValueTooBig);
static void init_dsm_address_info(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c26_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c26_is_active_c26_dsogi_pll_3ph = 0U;
  chartInstance->c26_emlrtLocLogSimulated = false;
  c26_emlrtInitVarDataTables(chartInstance,
    chartInstance->c26_emlrtLocationLoggingDataTables,
    chartInstance->c26_emlrtLocLogHistTables);
}

static void initialize_params_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c26_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:485",              /* mexFileName */
    "Sun May 26 16:51:41 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c26_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      3                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c26_emlrtLocationInfo[4] = { { 1,/* MxInfoID */
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
      3,                               /* TextLength */
      5,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c26_emlrtLocationLoggingFieldCounts[3] = { 0, 0, 0 };

  if (chartInstance->c26_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:485");
    emlrtLocationLoggingPushLog(&c26_emlrtLocationLoggingFileInfo,
      &c26_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c26_emlrtLocationLoggingDataTables[0],
      &c26_emlrtLocationInfo[0], NULL, 0U, &c26_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:485");
  }
}

static void mdl_setup_runtime_resources_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c26_decisionTxtEndIdx = 0U;
  static const uint32_T c26_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c26_chart_data_browse_helper);
  chartInstance->c26_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c26_RuntimeVar,
    &chartInstance->c26_IsDebuggerActive,
    &chartInstance->c26_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c26_mlFcnLineNumber, &chartInstance->c26_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c26_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c26_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c26_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c26_decisionTxtStartIdx, &c26_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c26_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c26_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c26_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 33);
}

static void mdl_cleanup_runtime_resources_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c26_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c26_covrtInstance);
}

static void enable_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c26_b_a;
  real_T c26_b_b;
  real_T c26_b_c;
  chartInstance->c26_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c26_covrtInstance, 1U, *chartInstance->c26_b);
  covrtSigUpdateFcn(chartInstance->c26_covrtInstance, 0U, *chartInstance->c26_a);
  chartInstance->c26_sfEvent = CALL_EVENT;
  c26_b_a = *chartInstance->c26_a;
  c26_b_b = *chartInstance->c26_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c26_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c26_emlrt_update_log_1(chartInstance, c26_b_a,
    chartInstance->c26_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c26_emlrt_update_log_1(chartInstance, c26_b_b,
    chartInstance->c26_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c26_covrtInstance, 4U, 0, 0);
  c26_b_c = c26_emlrt_update_log_1(chartInstance, c26_b_a + c26_b_b,
    chartInstance->c26_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c26_c = c26_b_c;
  c26_do_animation_call_c26_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c26_covrtInstance, 2U, *chartInstance->c26_c);
}

static void ext_mode_exec_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c26_update_jit_animation_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c26_do_animation_call_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c26_b_y = NULL;
  const mxArray *c26_c_y = NULL;
  const mxArray *c26_st;
  const mxArray *c26_y = NULL;
  c26_st = NULL;
  c26_st = NULL;
  c26_y = NULL;
  sf_mex_assign(&c26_y, sf_mex_createcellmatrix(2, 1), false);
  c26_b_y = NULL;
  sf_mex_assign(&c26_b_y, sf_mex_create("y", chartInstance->c26_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c26_y, 0, c26_b_y);
  c26_c_y = NULL;
  sf_mex_assign(&c26_c_y, sf_mex_create("y",
    &chartInstance->c26_is_active_c26_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c26_y, 1, c26_c_y);
  sf_mex_assign(&c26_st, c26_y, false);
  return c26_st;
}

static void set_sim_state_c26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_st)
{
  const mxArray *c26_u;
  chartInstance->c26_doneDoubleBufferReInit = true;
  c26_u = sf_mex_dup(c26_st);
  *chartInstance->c26_c = c26_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c26_u, 0)), "c");
  chartInstance->c26_is_active_c26_dsogi_pll_3ph = c26_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c26_u, 1)),
     "is_active_c26_dsogi_pll_3ph");
  sf_mex_destroy(&c26_u);
  sf_mex_destroy(&c26_st);
}

static void initSimStructsc26_dsogi_pll_3ph(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc26_dsogi_pll_3ph
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c26_emlrt_update_log_1(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c26_in, emlrtLocationLoggingDataType c26_table[],
  int32_T c26_index)
{
  emlrtLocationLoggingDataType *c26_b_table;
  emlrtLocationLoggingHistogramType *c26_histTable;
  real_T c26_inDouble;
  real_T c26_localMax;
  real_T c26_localMin;
  real_T c26_significand;
  int32_T c26_exponent;
  boolean_T c26_isLoggingEnabledHere;
  (void)chartInstance;
  c26_isLoggingEnabledHere = (c26_index >= 0);
  if (c26_isLoggingEnabledHere) {
    c26_b_table = (emlrtLocationLoggingDataType *)&c26_table[c26_index];
    c26_localMin = c26_b_table[0U].SimMin;
    c26_localMax = c26_b_table[0U].SimMax;
    c26_histTable = c26_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c26_in < c26_localMin) {
      c26_localMin = c26_in;
    }

    if (c26_in > c26_localMax) {
      c26_localMax = c26_in;
    }

    /* Histogram logging. */
    c26_inDouble = c26_in;
    c26_histTable->TotalNumberOfValues++;
    if (c26_inDouble == 0.0) {
      c26_histTable->NumberOfZeros++;
    } else {
      c26_histTable->SimSum += c26_inDouble;
      if ((!muDoubleScalarIsInf(c26_inDouble)) && (!muDoubleScalarIsNaN
           (c26_inDouble))) {
        c26_significand = frexp(c26_inDouble, &c26_exponent);
        if (c26_exponent > 128) {
          c26_exponent = 128;
        }

        if (c26_exponent < -127) {
          c26_exponent = -127;
        }

        if (c26_significand < 0.0) {
          c26_histTable->NumberOfNegativeValues++;
          c26_histTable->HistogramOfNegativeValues[127 + c26_exponent]++;
        } else {
          c26_histTable->NumberOfPositiveValues++;
          c26_histTable->HistogramOfPositiveValues[127 + c26_exponent]++;
        }
      }
    }

    c26_b_table[0U].SimMin = c26_localMin;
    c26_b_table[0U].SimMax = c26_localMax;

    /* IsAlwaysInteger logging. */
    if (c26_in != muDoubleScalarFloor(c26_in)) {
      c26_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c26_in;
}

static void c26_emlrtInitVarDataTables(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c26_dataTables[3],
  emlrtLocationLoggingHistogramType c26_histTables[3])
{
  int32_T c26_i;
  int32_T c26_iH;
  (void)chartInstance;
  for (c26_i = 0; c26_i < 3; c26_i++) {
    c26_dataTables[c26_i].SimMin = rtInf;
    c26_dataTables[c26_i].SimMax = rtMinusInf;
    c26_dataTables[c26_i].OverflowWraps = 0;
    c26_dataTables[c26_i].Saturations = 0;
    c26_dataTables[c26_i].IsAlwaysInteger = true;
    c26_dataTables[c26_i].HistogramTable = &c26_histTables[c26_i];
    c26_histTables[c26_i].NumberOfZeros = 0.0;
    c26_histTables[c26_i].NumberOfPositiveValues = 0.0;
    c26_histTables[c26_i].NumberOfNegativeValues = 0.0;
    c26_histTables[c26_i].TotalNumberOfValues = 0.0;
    c26_histTables[c26_i].SimSum = 0.0;
    for (c26_iH = 0; c26_iH < 256; c26_iH++) {
      c26_histTables[c26_i].HistogramOfPositiveValues[c26_iH] = 0.0;
      c26_histTables[c26_i].HistogramOfNegativeValues[c26_iH] = 0.0;
    }
  }
}

const mxArray *sf_c26_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c26_nameCaptureInfo = NULL;
  c26_nameCaptureInfo = NULL;
  sf_mex_assign(&c26_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c26_nameCaptureInfo;
}

static real_T c26_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_b_c, const char_T *c26_identifier)
{
  emlrtMsgIdentifier c26_thisId;
  real_T c26_y;
  c26_thisId.fIdentifier = (const char_T *)c26_identifier;
  c26_thisId.fParent = NULL;
  c26_thisId.bParentIsCell = false;
  c26_y = c26_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c26_b_c), &c26_thisId);
  sf_mex_destroy(&c26_b_c);
  return c26_y;
}

static real_T c26_b_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId)
{
  real_T c26_d;
  real_T c26_y;
  (void)chartInstance;
  sf_mex_import(c26_parentId, sf_mex_dup(c26_u), &c26_d, 1, 0, 0U, 0, 0U, 0);
  c26_y = c26_d;
  sf_mex_destroy(&c26_u);
  return c26_y;
}

static uint8_T c26_c_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_b_is_active_c26_dsogi_pll_3ph, const char_T
  *c26_identifier)
{
  emlrtMsgIdentifier c26_thisId;
  uint8_T c26_y;
  c26_thisId.fIdentifier = (const char_T *)c26_identifier;
  c26_thisId.fParent = NULL;
  c26_thisId.bParentIsCell = false;
  c26_y = c26_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c26_b_is_active_c26_dsogi_pll_3ph), &c26_thisId);
  sf_mex_destroy(&c26_b_is_active_c26_dsogi_pll_3ph);
  return c26_y;
}

static uint8_T c26_d_emlrt_marshallIn(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId)
{
  uint8_T c26_b_u;
  uint8_T c26_y;
  (void)chartInstance;
  sf_mex_import(c26_parentId, sf_mex_dup(c26_u), &c26_b_u, 1, 3, 0U, 0, 0U, 0);
  c26_y = c26_b_u;
  sf_mex_destroy(&c26_u);
  return c26_y;
}

static void c26_slStringInitializeDynamicBuffers
  (SFc26_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c26_chart_data_browse_helper(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c26_ssIdNumber, const mxArray **c26_mxData, uint8_T
  *c26_isValueTooBig)
{
  real_T c26_d;
  real_T c26_d1;
  real_T c26_d2;
  *c26_mxData = NULL;
  *c26_mxData = NULL;
  *c26_isValueTooBig = 0U;
  switch (c26_ssIdNumber) {
   case 4U:
    c26_d = *chartInstance->c26_a;
    sf_mex_assign(c26_mxData, sf_mex_create("mxData", &c26_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c26_d1 = *chartInstance->c26_c;
    sf_mex_assign(c26_mxData, sf_mex_create("mxData", &c26_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c26_d2 = *chartInstance->c26_b;
    sf_mex_assign(c26_mxData, sf_mex_create("mxData", &c26_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc26_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c26_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c26_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c26_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c26_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c26_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c26_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2634541826U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2660772021U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3026964974U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(107184084U);
}

mxArray *sf_c26_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c26_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c26_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c26_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9sZBafUpyfnhlfkJMTb1yQATcXBAAwlxoP"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c26_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sp7sn5G6sblgmMxDSlHKcD";
}

static void sf_opaque_initialize_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c26_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c26_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c26_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc26_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c26_dsogi_pll_3ph
      ((SFc26_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc26_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c26_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c26_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc26_dsogi_pll_3ph((SFc26_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c26_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWN1u40QUdqJS7YqlKhICoSKxF1xwgwRdbZcLBG3z041oaITTIu1NNLFP4lHGM975yQ/iFZB",
    "4Aq644A7xALwHz8AVl3vJGdtNgxsST8LCLsKV64ztb75zzpy/sVdptT089vD87m3P28XrHTyrXn",
    "a8ko8rC2d2f8f7JB9/86rnBSKEIXDfDAZ06rkd3MQdIkmsPPeDkxi+BCWY0VTwFh+I8ljKByCBB",
    "zhBIqR24lU0NozyUdPwwDKrryIaRH4kDAtPcUISXnA2+yvexOgOMtaphEA3AUIdSWGGUZOR4Wor",
    "SD2pRRCMlImdbaVA+yaxqqq2YZomDBpTCFpcaYJWUGv09TXRUNNTNyNbfZV/jRZxwijh5W0dEeV",
    "Dgt6h4TIJ8f+F0Wi9UtggIlKfQkTGoM7pKGUXHEqxU4Vv9yknWkhKWCNmNTtbSX07DHVsY0gw1z",
    "VCfU8lkFEiKNeOAeE30c4NTvoM6tA3Q0deH54aGw1XFCYg3dZ3UBNjkGQIF9xN5nSNGtPUKeexV",
    "BKraQxXRJ4E6LsKQre8gUGnfILuCF2cxgkLqYlbqivpGH3DNde1bPhvlOtMnHm/2gib8jbG4OxX",
    "c95mwGuEMeWG7YrkHMbAUv460WQDbMbvAFaKhl2B3mGzjWPGMpxiJOTYmuAhLe+V4wIqLWxfYJE",
    "qAaexDQMI0cxz0ecTrYsjo7SIa5hy6ufnJfluY1tcgxyQAErXGEmoAhQ49StH3pAqG0iIRivpVM",
    "vSM2QxuBHUUwPD6xMhR2hj12J2YysbCW5oCIeYmDWkSa6B3n1FmCkpc6yGGD/oHpcKs6wbL2Jt/",
    "GwEDkgQQWgrJ2XQxjyLE5RdYmVL/glqO6Z6VgcVSJqUjSSDCR2LrrVSd5bAJR9xMeFNKWI/77xW",
    "+BUAZg0iOeXDUyzhctZE4ctJLeFpN83urk2OtTPRjPStb5wBx2podbVdAwkwqhocW2QUaBusT7/",
    "GJoYrqjQW6llW6rO6Z/v3x95N/76zpH9/faF/38/HweFRL1RiSHsJY70HSZQ/t/N9uDDfvRL7gT",
    "I47xbuhu/6+v4CvrKE11u4FvnuVv/8frXAV8W/SiXDHS/gXivw7BRwu7nNxj/8dPbLe98efH8k7",
    "8CTn39bx1+5xV9Jf1vcj1W3/dZePn7num+aZ+nxrURWxh/eLPiDHavkkeIPz45Unw3j9rTus8ef",
    "B/VsvmeV1fJWC/Je379vezUM4jQnyKAV5vs2OyYm20/Y+T9ekHd3jT3uLviT5/3+2Xb4N46L67i",
    "zBr+Pv4KC327Of/94O3zG31kj/0FhvQ/S3r1HbIaG3vJMsFcyzlb5uSvO+4dxL4uc/9vl+etXps",
    "5VN8RVnmNd/Ttx2+rnWr9f9vdX1Q2v8P7+C6zHqnzv0se9aHr96rn1We/m40/n3xFqEWXhkp1M/",
    "hg3G4NlT/8j/v3M0X5v5eOGtV/+wfnJgxNO2Ay3LtnWML/dkfa74fyRBKKW7w//jXpyfT1e01fd",
    "K8S3HU8oD8VEffDR4cPDberTH0tnGPQ=",
    ""
  };

  static char newstr [1533] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c26_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c26_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1202693238U));
  ssSetChecksum1(S,(462234813U));
  ssSetChecksum2(S,(141702814U));
  ssSetChecksum3(S,(3937491557U));
}

static void mdlRTW_c26_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c26_dsogi_pll_3ph(SimStruct *S)
{
  SFc26_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc26_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc26_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc26_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c26_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c26_dsogi_pll_3ph;
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
    chartInstance->c26_JITStateAnimation,
    chartInstance->c26_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c26_dsogi_pll_3ph(chartInstance);
}

void c26_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c26_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c26_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c26_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c26_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
