/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c22_dsogi_pll_3ph.h"
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
static void initialize_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c22_update_jit_animation_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void c22_do_animation_call_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_st);
static void initSimStructsc22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c22_emlrt_update_log_1(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c22_in, emlrtLocationLoggingDataType c22_table[],
  int32_T c22_index);
static void c22_emlrtInitVarDataTables(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c22_dataTables[3],
  emlrtLocationLoggingHistogramType c22_histTables[3]);
static real_T c22_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_b_c, const char_T *c22_identifier);
static real_T c22_b_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static uint8_T c22_c_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_b_is_active_c22_dsogi_pll_3ph, const char_T
  *c22_identifier);
static uint8_T c22_d_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static void c22_slStringInitializeDynamicBuffers
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance);
static void c22_chart_data_browse_helper(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c22_ssIdNumber, const mxArray **c22_mxData, uint8_T
  *c22_isValueTooBig);
static void init_dsm_address_info(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c22_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c22_is_active_c22_dsogi_pll_3ph = 0U;
  chartInstance->c22_emlrtLocLogSimulated = false;
  c22_emlrtInitVarDataTables(chartInstance,
    chartInstance->c22_emlrtLocationLoggingDataTables,
    chartInstance->c22_emlrtLocLogHistTables);
}

static void initialize_params_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c22_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:482",              /* mexFileName */
    "Sun May 26 15:34:39 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c22_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      3                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c22_emlrtLocationInfo[4] = { { 1,/* MxInfoID */
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
      26,                              /* TextStart */
      3,                               /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c22_emlrtLocationLoggingFieldCounts[3] = { 0, 0, 0 };

  if (chartInstance->c22_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:482");
    emlrtLocationLoggingPushLog(&c22_emlrtLocationLoggingFileInfo,
      &c22_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c22_emlrtLocationLoggingDataTables[0],
      &c22_emlrtLocationInfo[0], NULL, 0U, &c22_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:482");
  }
}

static void mdl_setup_runtime_resources_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c22_decisionTxtEndIdx = 0U;
  static const uint32_T c22_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c22_chart_data_browse_helper);
  chartInstance->c22_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c22_RuntimeVar,
    &chartInstance->c22_IsDebuggerActive,
    &chartInstance->c22_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c22_mlFcnLineNumber, &chartInstance->c22_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c22_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c22_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c22_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c22_decisionTxtStartIdx, &c22_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c22_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c22_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c22_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 35);
}

static void mdl_cleanup_runtime_resources_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c22_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c22_covrtInstance);
}

static void enable_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c22_b_a;
  real_T c22_b_b;
  real_T c22_b_c;
  chartInstance->c22_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c22_covrtInstance, 1U, *chartInstance->c22_b);
  covrtSigUpdateFcn(chartInstance->c22_covrtInstance, 0U, *chartInstance->c22_a);
  chartInstance->c22_sfEvent = CALL_EVENT;
  c22_b_a = *chartInstance->c22_a;
  c22_b_b = *chartInstance->c22_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c22_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c22_emlrt_update_log_1(chartInstance, c22_b_a,
    chartInstance->c22_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c22_emlrt_update_log_1(chartInstance, c22_b_b,
    chartInstance->c22_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c22_covrtInstance, 4U, 0, 0);
  c22_b_c = c22_emlrt_update_log_1(chartInstance, c22_b_a - c22_b_b,
    chartInstance->c22_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c22_c = c22_b_c;
  c22_do_animation_call_c22_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c22_covrtInstance, 2U, *chartInstance->c22_c);
}

static void ext_mode_exec_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c22_update_jit_animation_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c22_do_animation_call_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c22_b_y = NULL;
  const mxArray *c22_c_y = NULL;
  const mxArray *c22_st;
  const mxArray *c22_y = NULL;
  c22_st = NULL;
  c22_st = NULL;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_createcellmatrix(2, 1), false);
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", chartInstance->c22_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c22_y, 0, c22_b_y);
  c22_c_y = NULL;
  sf_mex_assign(&c22_c_y, sf_mex_create("y",
    &chartInstance->c22_is_active_c22_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c22_y, 1, c22_c_y);
  sf_mex_assign(&c22_st, c22_y, false);
  return c22_st;
}

static void set_sim_state_c22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_st)
{
  const mxArray *c22_u;
  chartInstance->c22_doneDoubleBufferReInit = true;
  c22_u = sf_mex_dup(c22_st);
  *chartInstance->c22_c = c22_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c22_u, 0)), "c");
  chartInstance->c22_is_active_c22_dsogi_pll_3ph = c22_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c22_u, 1)),
     "is_active_c22_dsogi_pll_3ph");
  sf_mex_destroy(&c22_u);
  sf_mex_destroy(&c22_st);
}

static void initSimStructsc22_dsogi_pll_3ph(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc22_dsogi_pll_3ph
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c22_emlrt_update_log_1(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c22_in, emlrtLocationLoggingDataType c22_table[],
  int32_T c22_index)
{
  emlrtLocationLoggingDataType *c22_b_table;
  emlrtLocationLoggingHistogramType *c22_histTable;
  real_T c22_inDouble;
  real_T c22_localMax;
  real_T c22_localMin;
  real_T c22_significand;
  int32_T c22_exponent;
  boolean_T c22_isLoggingEnabledHere;
  (void)chartInstance;
  c22_isLoggingEnabledHere = (c22_index >= 0);
  if (c22_isLoggingEnabledHere) {
    c22_b_table = (emlrtLocationLoggingDataType *)&c22_table[c22_index];
    c22_localMin = c22_b_table[0U].SimMin;
    c22_localMax = c22_b_table[0U].SimMax;
    c22_histTable = c22_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c22_in < c22_localMin) {
      c22_localMin = c22_in;
    }

    if (c22_in > c22_localMax) {
      c22_localMax = c22_in;
    }

    /* Histogram logging. */
    c22_inDouble = c22_in;
    c22_histTable->TotalNumberOfValues++;
    if (c22_inDouble == 0.0) {
      c22_histTable->NumberOfZeros++;
    } else {
      c22_histTable->SimSum += c22_inDouble;
      if ((!muDoubleScalarIsInf(c22_inDouble)) && (!muDoubleScalarIsNaN
           (c22_inDouble))) {
        c22_significand = frexp(c22_inDouble, &c22_exponent);
        if (c22_exponent > 128) {
          c22_exponent = 128;
        }

        if (c22_exponent < -127) {
          c22_exponent = -127;
        }

        if (c22_significand < 0.0) {
          c22_histTable->NumberOfNegativeValues++;
          c22_histTable->HistogramOfNegativeValues[127 + c22_exponent]++;
        } else {
          c22_histTable->NumberOfPositiveValues++;
          c22_histTable->HistogramOfPositiveValues[127 + c22_exponent]++;
        }
      }
    }

    c22_b_table[0U].SimMin = c22_localMin;
    c22_b_table[0U].SimMax = c22_localMax;

    /* IsAlwaysInteger logging. */
    if (c22_in != muDoubleScalarFloor(c22_in)) {
      c22_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c22_in;
}

static void c22_emlrtInitVarDataTables(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c22_dataTables[3],
  emlrtLocationLoggingHistogramType c22_histTables[3])
{
  int32_T c22_i;
  int32_T c22_iH;
  (void)chartInstance;
  for (c22_i = 0; c22_i < 3; c22_i++) {
    c22_dataTables[c22_i].SimMin = rtInf;
    c22_dataTables[c22_i].SimMax = rtMinusInf;
    c22_dataTables[c22_i].OverflowWraps = 0;
    c22_dataTables[c22_i].Saturations = 0;
    c22_dataTables[c22_i].IsAlwaysInteger = true;
    c22_dataTables[c22_i].HistogramTable = &c22_histTables[c22_i];
    c22_histTables[c22_i].NumberOfZeros = 0.0;
    c22_histTables[c22_i].NumberOfPositiveValues = 0.0;
    c22_histTables[c22_i].NumberOfNegativeValues = 0.0;
    c22_histTables[c22_i].TotalNumberOfValues = 0.0;
    c22_histTables[c22_i].SimSum = 0.0;
    for (c22_iH = 0; c22_iH < 256; c22_iH++) {
      c22_histTables[c22_i].HistogramOfPositiveValues[c22_iH] = 0.0;
      c22_histTables[c22_i].HistogramOfNegativeValues[c22_iH] = 0.0;
    }
  }
}

const mxArray *sf_c22_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c22_nameCaptureInfo = NULL;
  c22_nameCaptureInfo = NULL;
  sf_mex_assign(&c22_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c22_nameCaptureInfo;
}

static real_T c22_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_b_c, const char_T *c22_identifier)
{
  emlrtMsgIdentifier c22_thisId;
  real_T c22_y;
  c22_thisId.fIdentifier = (const char_T *)c22_identifier;
  c22_thisId.fParent = NULL;
  c22_thisId.bParentIsCell = false;
  c22_y = c22_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_b_c), &c22_thisId);
  sf_mex_destroy(&c22_b_c);
  return c22_y;
}

static real_T c22_b_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  real_T c22_d;
  real_T c22_y;
  (void)chartInstance;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_d, 1, 0, 0U, 0, 0U, 0);
  c22_y = c22_d;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static uint8_T c22_c_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_b_is_active_c22_dsogi_pll_3ph, const char_T
  *c22_identifier)
{
  emlrtMsgIdentifier c22_thisId;
  uint8_T c22_y;
  c22_thisId.fIdentifier = (const char_T *)c22_identifier;
  c22_thisId.fParent = NULL;
  c22_thisId.bParentIsCell = false;
  c22_y = c22_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c22_b_is_active_c22_dsogi_pll_3ph), &c22_thisId);
  sf_mex_destroy(&c22_b_is_active_c22_dsogi_pll_3ph);
  return c22_y;
}

static uint8_T c22_d_emlrt_marshallIn(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  uint8_T c22_b_u;
  uint8_T c22_y;
  (void)chartInstance;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_b_u, 1, 3, 0U, 0, 0U, 0);
  c22_y = c22_b_u;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void c22_slStringInitializeDynamicBuffers
  (SFc22_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c22_chart_data_browse_helper(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c22_ssIdNumber, const mxArray **c22_mxData, uint8_T
  *c22_isValueTooBig)
{
  real_T c22_d;
  real_T c22_d1;
  real_T c22_d2;
  *c22_mxData = NULL;
  *c22_mxData = NULL;
  *c22_isValueTooBig = 0U;
  switch (c22_ssIdNumber) {
   case 4U:
    c22_d = *chartInstance->c22_a;
    sf_mex_assign(c22_mxData, sf_mex_create("mxData", &c22_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c22_d1 = *chartInstance->c22_c;
    sf_mex_assign(c22_mxData, sf_mex_create("mxData", &c22_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c22_d2 = *chartInstance->c22_b;
    sf_mex_assign(c22_mxData, sf_mex_create("mxData", &c22_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc22_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c22_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c22_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c22_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c22_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c22_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c22_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3209809220U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2340480658U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1189901613U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3949055942U);
}

mxArray *sf_c22_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c22_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c22_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c22_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9sZBSfUpyfnhlfkJMTb1yQATcXBAAwJxoL"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c22_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sSSqk4AEasmNCG7ghwjQpnC";
}

static void sf_opaque_initialize_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c22_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c22_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c22_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc22_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c22_dsogi_pll_3ph
      ((SFc22_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc22_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c22_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c22_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc22_dsogi_pll_3ph((SFc22_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c22_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWN1u40QUdqJSsWKpisSPYJFYiRtukKDLir1AbFsnWSK124DTIi0X1dQ+sYeMZ9z5SRrEQyC",
    "eYh+JV+COG6S95IztpMENiSdhYRfhynXG9jffOWfO39hrdI89PHbw/Oldz9vG66t4Nr3ieKUcN+",
    "bO4v6W90U5/vE1zwtFBDHwwAwG9MpzO7hJe0SSVHnuBycpfANKMKOp4F0+EPWxlA9AAg9xgkxI7",
    "cSraGoY5cOO4aFlVt8mNEyCRBgWHeKEJDrhbPJXvJnRPWRsUQmh7gBEOpHCxEmHkXi5FaQe+wmE",
    "Q2VSZ1sp0IHJrKrq2DBNMwbtKwi7XGmCVlAr9A000eDrKzcjW31VMEWLNGOU8Pq2TogKIEPv0HC",
    "aRfj/xGi0Xi1smBCpDyEhI1BHdJizCw612KnCty8oJ1pISlg7Zb6draa+PYY6HmNIMNc1Qn0PJZ",
    "BhJijXjgERdNDObU4uGLTgwsSOvAFcGhsNZxTGIN3Wd+CLEUgSwwl3kzlfo/ZV7pSzWKqJ1TSFM",
    "yIPQvRdBZFb3sCgUwFBd4Q+TuOEhdzEXdWXdIS+4Zrrujb818p1Ji28X62FzXnbI3D2qxlvJ+Q+",
    "YUy5YfsiO4IRsJy/RTRZA1vwO4CVolFfoHfYbOOYsQynGAkl1hc8ovW9clRB5YXtMRapGnCa2jC",
    "ACM08E3020ao4MkqL1MeU0zo6qsl3E9vlGuSAhFC7xkhCFaDAuV858kZU2UBCNFpJ51rWnqGIwb",
    "WgnhoY3hoLOUQbuxaza1vZSHBDQxRjYtaQJ7k2evcZYaamzKmKMX7QPU4VZlk3XsTa+FkLHJIwg",
    "chWTsrgGPMsTlB3iZUt+Qeo7YjqSQtUKGlWN5IMJnQsutZK/UkGp3zIxZh3pEiDsvNa4lcAmDWI",
    "5JTHh1jC5aSDwteTWsJlP8/urk2OtTPRjFxY33gEHKuh1dV2DSTEqGpzbJFRoE2wAf0BmxiuqNJ",
    "YqCdFqS/qnu3fv/Ku+/etBf37G3P9+245Dvf2ziMlYnqeMXZ+L0vK53a+T+bmu11jP1AH593AXf",
    "NNrx/N4RsLeL25a5XvVvPP7zcrfE38azQK3P4c7vUKz1YFt13a7P572w+evvXdw99//vDt7Nfmk",
    "1X8jRv8jfy3xT1tuu23dsrx+9O+aZalRzcSWR1/eKfiD3asguBy+NlBm6j0sf/o8zgZf/91xv18",
    "vmeN5fI2K/JO79+1vRoGcZ4TZNiNyn2bHRNT7Cfs/A/m5N1eYY9bc/7keb893Az/5n51HbdW4Hf",
    "xV1jx2/X57+5vhi/4eyvkv1NZ7zt5735ObIaG88WZYKdmnC3zc1ec9w/jXhY5/7fL89evTp1rro",
    "lrPMe6+nfiNtXPtX6/7O8vqxte5f3dF1iPZfnepY970fT6xXPrsz4ox1/OviP4CWXRgp1M+Rg3G",
    "4NFT/8j/v3M0X7TvrJt7Vd+cH5y74ATNsGtS7E1LG/3pP1uOHskgajF+8N/o55Mr/sr+qrblfi2",
    "4zHlkRirjz/du7+3SX36A4F7F2M=",
    ""
  };

  static char newstr [1529] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c22_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c22_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(939924021U));
  ssSetChecksum1(S,(1062933928U));
  ssSetChecksum2(S,(371430133U));
  ssSetChecksum3(S,(1510140272U));
}

static void mdlRTW_c22_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c22_dsogi_pll_3ph(SimStruct *S)
{
  SFc22_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc22_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc22_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc22_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c22_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c22_dsogi_pll_3ph;
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
    chartInstance->c22_JITStateAnimation,
    chartInstance->c22_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c22_dsogi_pll_3ph(chartInstance);
}

void c22_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c22_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c22_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c22_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c22_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
