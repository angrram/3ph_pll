/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c21_dsogi_pll_3ph.h"
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
static void initialize_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c21_update_jit_animation_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void c21_do_animation_call_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_st);
static void initSimStructsc21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c21_emlrt_update_log_1(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c21_in, emlrtLocationLoggingDataType c21_table[],
  int32_T c21_index);
static void c21_emlrtInitVarDataTables(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c21_dataTables[3],
  emlrtLocationLoggingHistogramType c21_histTables[3]);
static real_T c21_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_b_c, const char_T *c21_identifier);
static real_T c21_b_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static uint8_T c21_c_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_dsogi_pll_3ph, const char_T
  *c21_identifier);
static uint8_T c21_d_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_slStringInitializeDynamicBuffers
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance);
static void c21_chart_data_browse_helper(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c21_ssIdNumber, const mxArray **c21_mxData, uint8_T
  *c21_isValueTooBig);
static void init_dsm_address_info(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_is_active_c21_dsogi_pll_3ph = 0U;
  chartInstance->c21_emlrtLocLogSimulated = false;
  c21_emlrtInitVarDataTables(chartInstance,
    chartInstance->c21_emlrtLocationLoggingDataTables,
    chartInstance->c21_emlrtLocLogHistTables);
}

static void initialize_params_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c21_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:481",              /* mexFileName */
    "Sun May 26 15:34:39 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c21_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      3                                /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c21_emlrtLocationInfo[4] = { { 1,/* MxInfoID */
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

  const int32_T c21_emlrtLocationLoggingFieldCounts[3] = { 0, 0, 0 };

  if (chartInstance->c21_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:481");
    emlrtLocationLoggingPushLog(&c21_emlrtLocationLoggingFileInfo,
      &c21_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c21_emlrtLocationLoggingDataTables[0],
      &c21_emlrtLocationInfo[0], NULL, 0U, &c21_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:481");
  }
}

static void mdl_setup_runtime_resources_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c21_decisionTxtEndIdx = 0U;
  static const uint32_T c21_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c21_chart_data_browse_helper);
  chartInstance->c21_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c21_RuntimeVar,
    &chartInstance->c21_IsDebuggerActive,
    &chartInstance->c21_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c21_mlFcnLineNumber, &chartInstance->c21_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c21_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c21_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c21_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c21_decisionTxtStartIdx, &c21_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c21_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c21_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 35);
}

static void mdl_cleanup_runtime_resources_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c21_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c21_covrtInstance);
}

static void enable_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  real_T c21_b_a;
  real_T c21_b_b;
  real_T c21_b_c;
  chartInstance->c21_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 1U, *chartInstance->c21_b);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 0U, *chartInstance->c21_a);
  chartInstance->c21_sfEvent = CALL_EVENT;
  c21_b_a = *chartInstance->c21_a;
  c21_b_b = *chartInstance->c21_b;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  /* logging input variable 'b' for function 'eML_blk_kernel' */
  chartInstance->c21_emlrtLocLogSimulated = true;

  /* logging input variable 'a' for function 'eML_blk_kernel' */
  c21_emlrt_update_log_1(chartInstance, c21_b_a,
    chartInstance->c21_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'b' for function 'eML_blk_kernel' */
  c21_emlrt_update_log_1(chartInstance, c21_b_b,
    chartInstance->c21_emlrtLocationLoggingDataTables, 1);
  covrtEmlFcnEval(chartInstance->c21_covrtInstance, 4U, 0, 0);
  c21_b_c = c21_emlrt_update_log_1(chartInstance, c21_b_a - c21_b_b,
    chartInstance->c21_emlrtLocationLoggingDataTables, 2);
  *chartInstance->c21_c = c21_b_c;
  c21_do_animation_call_c21_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 2U, *chartInstance->c21_c);
}

static void ext_mode_exec_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c21_update_jit_animation_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c21_do_animation_call_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c21_b_y = NULL;
  const mxArray *c21_c_y = NULL;
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(2, 1), false);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", chartInstance->c21_c, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y",
    &chartInstance->c21_is_active_c21_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  chartInstance->c21_doneDoubleBufferReInit = true;
  c21_u = sf_mex_dup(c21_st);
  *chartInstance->c21_c = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_u, 0)), "c");
  chartInstance->c21_is_active_c21_dsogi_pll_3ph = c21_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c21_u, 1)),
     "is_active_c21_dsogi_pll_3ph");
  sf_mex_destroy(&c21_u);
  sf_mex_destroy(&c21_st);
}

static void initSimStructsc21_dsogi_pll_3ph(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc21_dsogi_pll_3ph
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c21_emlrt_update_log_1(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c21_in, emlrtLocationLoggingDataType c21_table[],
  int32_T c21_index)
{
  emlrtLocationLoggingDataType *c21_b_table;
  emlrtLocationLoggingHistogramType *c21_histTable;
  real_T c21_inDouble;
  real_T c21_localMax;
  real_T c21_localMin;
  real_T c21_significand;
  int32_T c21_exponent;
  boolean_T c21_isLoggingEnabledHere;
  (void)chartInstance;
  c21_isLoggingEnabledHere = (c21_index >= 0);
  if (c21_isLoggingEnabledHere) {
    c21_b_table = (emlrtLocationLoggingDataType *)&c21_table[c21_index];
    c21_localMin = c21_b_table[0U].SimMin;
    c21_localMax = c21_b_table[0U].SimMax;
    c21_histTable = c21_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c21_in < c21_localMin) {
      c21_localMin = c21_in;
    }

    if (c21_in > c21_localMax) {
      c21_localMax = c21_in;
    }

    /* Histogram logging. */
    c21_inDouble = c21_in;
    c21_histTable->TotalNumberOfValues++;
    if (c21_inDouble == 0.0) {
      c21_histTable->NumberOfZeros++;
    } else {
      c21_histTable->SimSum += c21_inDouble;
      if ((!muDoubleScalarIsInf(c21_inDouble)) && (!muDoubleScalarIsNaN
           (c21_inDouble))) {
        c21_significand = frexp(c21_inDouble, &c21_exponent);
        if (c21_exponent > 128) {
          c21_exponent = 128;
        }

        if (c21_exponent < -127) {
          c21_exponent = -127;
        }

        if (c21_significand < 0.0) {
          c21_histTable->NumberOfNegativeValues++;
          c21_histTable->HistogramOfNegativeValues[127 + c21_exponent]++;
        } else {
          c21_histTable->NumberOfPositiveValues++;
          c21_histTable->HistogramOfPositiveValues[127 + c21_exponent]++;
        }
      }
    }

    c21_b_table[0U].SimMin = c21_localMin;
    c21_b_table[0U].SimMax = c21_localMax;

    /* IsAlwaysInteger logging. */
    if (c21_in != muDoubleScalarFloor(c21_in)) {
      c21_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c21_in;
}

static void c21_emlrtInitVarDataTables(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c21_dataTables[3],
  emlrtLocationLoggingHistogramType c21_histTables[3])
{
  int32_T c21_i;
  int32_T c21_iH;
  (void)chartInstance;
  for (c21_i = 0; c21_i < 3; c21_i++) {
    c21_dataTables[c21_i].SimMin = rtInf;
    c21_dataTables[c21_i].SimMax = rtMinusInf;
    c21_dataTables[c21_i].OverflowWraps = 0;
    c21_dataTables[c21_i].Saturations = 0;
    c21_dataTables[c21_i].IsAlwaysInteger = true;
    c21_dataTables[c21_i].HistogramTable = &c21_histTables[c21_i];
    c21_histTables[c21_i].NumberOfZeros = 0.0;
    c21_histTables[c21_i].NumberOfPositiveValues = 0.0;
    c21_histTables[c21_i].NumberOfNegativeValues = 0.0;
    c21_histTables[c21_i].TotalNumberOfValues = 0.0;
    c21_histTables[c21_i].SimSum = 0.0;
    for (c21_iH = 0; c21_iH < 256; c21_iH++) {
      c21_histTables[c21_i].HistogramOfPositiveValues[c21_iH] = 0.0;
      c21_histTables[c21_i].HistogramOfNegativeValues[c21_iH] = 0.0;
    }
  }
}

const mxArray *sf_c21_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c21_nameCaptureInfo;
}

static real_T c21_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_b_c, const char_T *c21_identifier)
{
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  c21_thisId.fIdentifier = (const char_T *)c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_c), &c21_thisId);
  sf_mex_destroy(&c21_b_c);
  return c21_y;
}

static real_T c21_b_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_d;
  real_T c21_y;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static uint8_T c21_c_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_dsogi_pll_3ph, const char_T
  *c21_identifier)
{
  emlrtMsgIdentifier c21_thisId;
  uint8_T c21_y;
  c21_thisId.fIdentifier = (const char_T *)c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_is_active_c21_dsogi_pll_3ph), &c21_thisId);
  sf_mex_destroy(&c21_b_is_active_c21_dsogi_pll_3ph);
  return c21_y;
}

static uint8_T c21_d_emlrt_marshallIn(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_b_u;
  uint8_T c21_y;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_b_u, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_b_u;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_slStringInitializeDynamicBuffers
  (SFc21_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c21_chart_data_browse_helper(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c21_ssIdNumber, const mxArray **c21_mxData, uint8_T
  *c21_isValueTooBig)
{
  real_T c21_d;
  real_T c21_d1;
  real_T c21_d2;
  *c21_mxData = NULL;
  *c21_mxData = NULL;
  *c21_isValueTooBig = 0U;
  switch (c21_ssIdNumber) {
   case 4U:
    c21_d = *chartInstance->c21_a;
    sf_mex_assign(c21_mxData, sf_mex_create("mxData", &c21_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c21_d1 = *chartInstance->c21_c;
    sf_mex_assign(c21_mxData, sf_mex_create("mxData", &c21_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c21_d2 = *chartInstance->c21_b;
    sf_mex_assign(c21_mxData, sf_mex_create("mxData", &c21_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc21_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c21_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c21_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c21_a = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c21_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_b = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c21_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3209809220U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2340480658U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1189901613U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3949055942U);
}

mxArray *sf_c21_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c21_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c21_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c21_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAspKh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9sZBifUpyfnhlfkJMTb1yQATcXBAAwCxoK"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sSSqk4AEasmNCG7ghwjQpnC";
}

static void sf_opaque_initialize_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c21_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c21_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c21_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c21_dsogi_pll_3ph
      ((SFc21_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc21_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c21_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc21_dsogi_pll_3ph((SFc21_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c21_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWFuP20QUdqJlRUVZLRIXQZGoxAsvSHTbij5U7e7mUiLtdgPOLlJ5iGbtE3vIeMY7l2SD+BG",
    "IX9GfxF/gjRekPnLGdrLBGxJPQqFFeOV1xvY33zlnzm3s1TrHHh47eP70oedt4/VNPOtefrxRjG",
    "tzZ35/y3tYjH98y/MCEUIE3DeDAb303A5uki6RJFGe+8FJAt+AEsxoKniHD0R1LOUDkMADnCAVU",
    "jvxKpoYRvmwbXhgmdW3MQ1iPxaGhYc4IQlPOJv8FW9qdBcZm1RCoNsAoY6lMFHcZiRabgWpx40Y",
    "gqEyibOtFGjfpFZVdWyYpimD1iUEHa40QSuoFfr6mmho6Es3I1t9lT9FiyRllPDqto6J8iFF79B",
    "wmob4/8RotF4lbBATqQ8hJiNQR3SYsQsOldipwrfPKSdaSEpYK2ENO1tFfbsMdTzGkGCua4T6Hk",
    "ogw1RQrh0Dwm+jnVucnDNowrmJHHl9uDA2Gs4ojEG6re+gIUYgSQQn3E3mbI1al5lTzmKpIlbTB",
    "M6IPAjQdxWEbnkDg075BN0RejiNExYyE3dUT9IR+oZrruvY8F8r15kk9361FjbjbY3A2a9mvO2A",
    "Nwhjyg3bE+kRjIBl/E2iyRrYnN8BrBQNewK9w2Ybx4xlOMVIKLANwUNa3StHJVRW2J5ikaoAp4k",
    "NAwjRzDPRZxOtiiOjtEgamHKaR0cV+a5jO1yDHJAAKtcYSagCFDjzK0fekCobSIhGK+lMy8oz5D",
    "G4FtRTA8ObYyGHaGPXYnZlKxsJbmgII0zMGrIk10LvPiPMVJQ5URHGD7rHqcIs68aLWBs/a4EDE",
    "sQQ2spJGRxjnsUJqi6xsiX/ALUdUT1pggokTatGksGEjkXXWqk3SeGUD7kY87YUiV90Xkv8CgCz",
    "BpGc8ugQS7ictFH4alJLuOhl2d21ybF2JpqRc+sbT4BjNbS62q6BBBhVLY4tMgq0CdanP2ATwxV",
    "VGgv1JC/1ed2z/ftX3lX/vrWgf39nrn/fLcbB3p1+qERE+ylj/btpXDy3830xN9/NCvuBKjjvGu",
    "6Kb3r9bA5fW8DrzV3LfDfqf36/XuKr41+tluP253Bvl3i2Srjtwmb3P9p+8Py97x7//vOn76e/1",
    "p+t4q9d469lvy3ued1tv7VTjD+e9k2zLD26lsiq+MMHJX+wY+X7F8N7By2ikqeNJ19G8fj7r1Pe",
    "yOZ7UVsub70k7/T+bdurYRBnOUEGnbDYt9kxMfl+ws7/YE7e7RX2uDHnT5732+PN8O/ul9dxawV",
    "+F38FJb9dn//2/mb4nL+7Qv5bpfW+lfXufWIzNPQXZ4KdinG2zM9dcd4/jHtd5PzfLi9fvyp1rr",
    "4mrvYS6+rfidtUP9f6/bq/v6xueKX3d19hPZble5c+7lXT6xfPrc/6pBg/mn1HaMSUhQt2MsVj3",
    "GwMFj39j/j3C0f7TfvKlrVf8cH52d0DTtgEty751rC43ZX2u+HskQSiFu8P/416Mr3ur+irbpbi",
    "247HlIdirD6/s3d/b5P69AdqSRdh",
    ""
  };

  static char newstr [1529] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c21_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c21_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(939924021U));
  ssSetChecksum1(S,(1062933928U));
  ssSetChecksum2(S,(371430133U));
  ssSetChecksum3(S,(1510140272U));
}

static void mdlRTW_c21_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c21_dsogi_pll_3ph(SimStruct *S)
{
  SFc21_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc21_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc21_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc21_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c21_dsogi_pll_3ph;
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
    chartInstance->c21_JITStateAnimation,
    chartInstance->c21_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c21_dsogi_pll_3ph(chartInstance);
}

void c21_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c21_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
