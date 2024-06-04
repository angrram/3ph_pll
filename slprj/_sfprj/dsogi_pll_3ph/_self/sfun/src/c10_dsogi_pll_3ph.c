/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c10_dsogi_pll_3ph.h"
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
static emlrtMCInfo c10_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRSInfo c10_emlrtRSI = { 13,/* lineNo */
  "pll_dsogi_system/Clark Transform/clark_trafo",/* fcnName */
  "#dsogi_pll_3ph:519"                 /* pathName */
};

/* Function Declarations */
static void initialize_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initialize_params_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_start_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_terminate_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void enable_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void disable_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void sf_gateway_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void ext_mode_exec_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void c10_update_jit_animation_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void c10_do_animation_call_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void set_sim_state_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_st);
static void initSimStructsc10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static real_T c10_emlrt_update_log_1(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c10_in, emlrtLocationLoggingDataType c10_table[],
  int32_T c10_index);
static void c10_emlrtInitVarDataTables(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c10_dataTables[15],
  emlrtLocationLoggingHistogramType c10_histTables[15]);
static real_T c10_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_b_valpha, const char_T *c10_identifier);
static real_T c10_b_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static uint8_T c10_c_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_b_is_active_c10_dsogi_pll_3ph, const char_T
  *c10_identifier);
static uint8_T c10_d_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_slStringInitializeDynamicBuffers
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance);
static void c10_chart_data_browse_helper(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c10_ssIdNumber, const mxArray **c10_mxData, uint8_T
  *c10_isValueTooBig);
static void init_dsm_address_info(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c10_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c10_is_active_c10_dsogi_pll_3ph = 0U;
  chartInstance->c10_emlrtLocLogSimulated = false;
  c10_emlrtInitVarDataTables(chartInstance,
    chartInstance->c10_emlrtLocationLoggingDataTables,
    chartInstance->c10_emlrtLocLogHistTables);
}

static void initialize_params_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  const emlrtLocationLoggingFileInfoType c10_emlrtLocationLoggingFileInfo = {
    "#dsogi_pll_3ph:519",              /* mexFileName */
    "Tue Jun  4 19:57:56 2024",        /* timestamp */
    "",                                /* buildDir */
    1,                                 /* numFcns */
    256                                /* numHistogramBins */
  };

  const emlrtLocationLoggingFunctionInfoType
    c10_emlrtLocationLoggingFunctionInfoTable[1] = { { "eML_blk_kernel",/* fcnName */
      1,                               /* fcnId */
      15                               /* numInstrPoints */
    } };

  const emlrtLocationLoggingLocationType c10_emlrtLocationInfo[17] = { { 1,/* MxInfoID */
      39,                              /* TextStart */
      2,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      42,                              /* TextStart */
      2,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      45,                              /* TextStart */
      2,                               /* TextLength */
      1,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      333,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      341,                             /* TextStart */
      26,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      342,                             /* TextStart */
      3,                               /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      348,                             /* TextStart */
      18,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      348,                             /* TextStart */
      10,                              /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      352,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      360,                             /* TextStart */
      5,                               /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      370,                             /* TextStart */
      6,                               /* TextLength */
      2,                               /* Reason */
      true                             /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      379,                             /* TextStart */
      28,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      380,                             /* TextStart */
      18,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      381,                             /* TextStart */
      3,                               /* TextLength */
      8,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      387,                             /* TextStart */
      10,                              /* TextLength */
      7,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      387,                             /* TextStart */
      7,                               /* TextLength */
      3,                               /* Reason */
      false                            /* MoreLocations */
    }, { 1,                            /* MxInfoID */
      401,                             /* TextStart */
      5,                               /* TextLength */
      6,                               /* Reason */
      false                            /* MoreLocations */
    } };

  const int32_T c10_emlrtLocationLoggingFieldCounts[15] = { 0 };

  if (chartInstance->c10_emlrtLocLogSimulated) {
    emlrtLocationLoggingClearLog("#dsogi_pll_3ph:519");
    emlrtLocationLoggingPushLog(&c10_emlrtLocationLoggingFileInfo,
      &c10_emlrtLocationLoggingFunctionInfoTable[0],
      &chartInstance->c10_emlrtLocationLoggingDataTables[0],
      &c10_emlrtLocationInfo[0], NULL, 0U, &c10_emlrtLocationLoggingFieldCounts
      [0], NULL);
    addResultsToFPTRepository("#dsogi_pll_3ph:519");
  }
}

static void mdl_setup_runtime_resources_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  static const uint32_T c10_decisionTxtEndIdx = 0U;
  static const uint32_T c10_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c10_chart_data_browse_helper);
  chartInstance->c10_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c10_RuntimeVar,
    &chartInstance->c10_IsDebuggerActive,
    &chartInstance->c10_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c10_mlFcnLineNumber, &chartInstance->c10_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c10_covrtInstance, 1U, 0U, 1U,
    68U);
  covrtChartInitFcn(chartInstance->c10_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c10_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c10_decisionTxtStartIdx, &c10_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c10_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c10_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 415);
}

static void mdl_cleanup_runtime_resources_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c10_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c10_covrtInstance);
}

static void enable_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  emlrtStack c10_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c10_b_va;
  real_T c10_b_valpha;
  real_T c10_b_vb;
  real_T c10_b_vbetha;
  real_T c10_b_vc;
  c10_st.tls = chartInstance->c10_fEmlrtCtx;
  chartInstance->c10_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 2U, *chartInstance->c10_vc);
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 1U, *chartInstance->c10_vb);
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 0U, *chartInstance->c10_va);
  chartInstance->c10_sfEvent = CALL_EVENT;
  c10_b_va = *chartInstance->c10_va;
  c10_b_vb = *chartInstance->c10_vb;
  c10_b_vc = *chartInstance->c10_vc;

  /* logging input variable 'va' for function 'eML_blk_kernel' */
  /* logging input variable 'vb' for function 'eML_blk_kernel' */
  /* logging input variable 'vc' for function 'eML_blk_kernel' */
  chartInstance->c10_emlrtLocLogSimulated = true;

  /* logging input variable 'va' for function 'eML_blk_kernel' */
  c10_emlrt_update_log_1(chartInstance, c10_b_va,
    chartInstance->c10_emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'vb' for function 'eML_blk_kernel' */
  c10_emlrt_update_log_1(chartInstance, c10_b_vb,
    chartInstance->c10_emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'vc' for function 'eML_blk_kernel' */
  c10_emlrt_update_log_1(chartInstance, c10_b_vc,
    chartInstance->c10_emlrtLocationLoggingDataTables, 2);
  covrtEmlFcnEval(chartInstance->c10_covrtInstance, 4U, 0, 0);
  sf_mex_printf("%s =\\n", "ans");
  sf_mex_call(&c10_st, NULL, "disp", 0U, 1U, 14, sf_mex_create("disp", NULL, 6,
    0U, 1U, 0U, 2, 0, 0));
  c10_b_valpha = c10_emlrt_update_log_1(chartInstance, c10_emlrt_update_log_1
    (chartInstance, 0.66666666666666663,
     chartInstance->c10_emlrtLocationLoggingDataTables, 4) *
    c10_emlrt_update_log_1(chartInstance, c10_emlrt_update_log_1(chartInstance,
    c10_b_va - c10_emlrt_update_log_1(chartInstance, 0.5 * c10_b_vb,
    chartInstance->c10_emlrtLocationLoggingDataTables, 7),
    chartInstance->c10_emlrtLocationLoggingDataTables, 6) -
    c10_emlrt_update_log_1(chartInstance, 0.5 * c10_b_vc,
    chartInstance->c10_emlrtLocationLoggingDataTables, 8),
    chartInstance->c10_emlrtLocationLoggingDataTables, 5),
    chartInstance->c10_emlrtLocationLoggingDataTables, 3);
  c10_b_vbetha = c10_emlrt_update_log_1(chartInstance, c10_emlrt_update_log_1
    (chartInstance, c10_emlrt_update_log_1(chartInstance, 0.66666666666666663,
    chartInstance->c10_emlrtLocationLoggingDataTables, 11) *
     c10_emlrt_update_log_1(chartInstance, c10_emlrt_update_log_1(chartInstance,
    1.7320508075688772, chartInstance->c10_emlrtLocationLoggingDataTables, 13) *
    0.5, chartInstance->c10_emlrtLocationLoggingDataTables, 12),
     chartInstance->c10_emlrtLocationLoggingDataTables, 10) *
    c10_emlrt_update_log_1(chartInstance, c10_b_vb - c10_b_vc,
    chartInstance->c10_emlrtLocationLoggingDataTables, 14),
    chartInstance->c10_emlrtLocationLoggingDataTables, 9);
  *chartInstance->c10_valpha = c10_b_valpha;
  *chartInstance->c10_vbetha = c10_b_vbetha;
  c10_do_animation_call_c10_dsogi_pll_3ph(chartInstance);
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 3U,
                    *chartInstance->c10_valpha);
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 4U,
                    *chartInstance->c10_vbetha);
}

static void ext_mode_exec_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c10_update_jit_animation_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c10_do_animation_call_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  const mxArray *c10_b_y = NULL;
  const mxArray *c10_c_y = NULL;
  const mxArray *c10_d_y = NULL;
  const mxArray *c10_st;
  const mxArray *c10_y = NULL;
  c10_st = NULL;
  c10_st = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_createcellmatrix(3, 1), false);
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", chartInstance->c10_valpha, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c10_y, 0, c10_b_y);
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", chartInstance->c10_vbetha, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c10_y, 1, c10_c_y);
  c10_d_y = NULL;
  sf_mex_assign(&c10_d_y, sf_mex_create("y",
    &chartInstance->c10_is_active_c10_dsogi_pll_3ph, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c10_y, 2, c10_d_y);
  sf_mex_assign(&c10_st, c10_y, false);
  return c10_st;
}

static void set_sim_state_c10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_st)
{
  const mxArray *c10_u;
  chartInstance->c10_doneDoubleBufferReInit = true;
  c10_u = sf_mex_dup(c10_st);
  *chartInstance->c10_valpha = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c10_u, 0)), "valpha");
  *chartInstance->c10_vbetha = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c10_u, 1)), "vbetha");
  chartInstance->c10_is_active_c10_dsogi_pll_3ph = c10_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 2)),
     "is_active_c10_dsogi_pll_3ph");
  sf_mex_destroy(&c10_u);
  sf_mex_destroy(&c10_st);
}

static void initSimStructsc10_dsogi_pll_3ph(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc10_dsogi_pll_3ph
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c10_emlrt_update_log_1(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, real_T c10_in, emlrtLocationLoggingDataType c10_table[],
  int32_T c10_index)
{
  emlrtLocationLoggingDataType *c10_b_table;
  emlrtLocationLoggingHistogramType *c10_histTable;
  real_T c10_inDouble;
  real_T c10_localMax;
  real_T c10_localMin;
  real_T c10_significand;
  int32_T c10_exponent;
  boolean_T c10_isLoggingEnabledHere;
  (void)chartInstance;
  c10_isLoggingEnabledHere = (c10_index >= 0);
  if (c10_isLoggingEnabledHere) {
    c10_b_table = (emlrtLocationLoggingDataType *)&c10_table[c10_index];
    c10_localMin = c10_b_table[0U].SimMin;
    c10_localMax = c10_b_table[0U].SimMax;
    c10_histTable = c10_b_table[0U].HistogramTable;

    /* Simulation Min-Max logging. */
    if (c10_in < c10_localMin) {
      c10_localMin = c10_in;
    }

    if (c10_in > c10_localMax) {
      c10_localMax = c10_in;
    }

    /* Histogram logging. */
    c10_inDouble = c10_in;
    c10_histTable->TotalNumberOfValues++;
    if (c10_inDouble == 0.0) {
      c10_histTable->NumberOfZeros++;
    } else {
      c10_histTable->SimSum += c10_inDouble;
      if ((!muDoubleScalarIsInf(c10_inDouble)) && (!muDoubleScalarIsNaN
           (c10_inDouble))) {
        c10_significand = frexp(c10_inDouble, &c10_exponent);
        if (c10_exponent > 128) {
          c10_exponent = 128;
        }

        if (c10_exponent < -127) {
          c10_exponent = -127;
        }

        if (c10_significand < 0.0) {
          c10_histTable->NumberOfNegativeValues++;
          c10_histTable->HistogramOfNegativeValues[127 + c10_exponent]++;
        } else {
          c10_histTable->NumberOfPositiveValues++;
          c10_histTable->HistogramOfPositiveValues[127 + c10_exponent]++;
        }
      }
    }

    c10_b_table[0U].SimMin = c10_localMin;
    c10_b_table[0U].SimMax = c10_localMax;

    /* IsAlwaysInteger logging. */
    if (c10_in != muDoubleScalarFloor(c10_in)) {
      c10_b_table[0U].IsAlwaysInteger = false;
    }
  }

  return c10_in;
}

static void c10_emlrtInitVarDataTables(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, emlrtLocationLoggingDataType c10_dataTables[15],
  emlrtLocationLoggingHistogramType c10_histTables[15])
{
  int32_T c10_i;
  int32_T c10_iH;
  (void)chartInstance;
  for (c10_i = 0; c10_i < 15; c10_i++) {
    c10_dataTables[c10_i].SimMin = rtInf;
    c10_dataTables[c10_i].SimMax = rtMinusInf;
    c10_dataTables[c10_i].OverflowWraps = 0;
    c10_dataTables[c10_i].Saturations = 0;
    c10_dataTables[c10_i].IsAlwaysInteger = true;
    c10_dataTables[c10_i].HistogramTable = &c10_histTables[c10_i];
    c10_histTables[c10_i].NumberOfZeros = 0.0;
    c10_histTables[c10_i].NumberOfPositiveValues = 0.0;
    c10_histTables[c10_i].NumberOfNegativeValues = 0.0;
    c10_histTables[c10_i].TotalNumberOfValues = 0.0;
    c10_histTables[c10_i].SimSum = 0.0;
    for (c10_iH = 0; c10_iH < 256; c10_iH++) {
      c10_histTables[c10_i].HistogramOfPositiveValues[c10_iH] = 0.0;
      c10_histTables[c10_i].HistogramOfNegativeValues[c10_iH] = 0.0;
    }
  }
}

const mxArray *sf_c10_dsogi_pll_3ph_get_eml_resolved_functions_info(void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_nameCaptureInfo = NULL;
  sf_mex_assign(&c10_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c10_nameCaptureInfo;
}

static real_T c10_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_b_valpha, const char_T *c10_identifier)
{
  emlrtMsgIdentifier c10_thisId;
  real_T c10_y;
  c10_thisId.fIdentifier = (const char_T *)c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_valpha),
    &c10_thisId);
  sf_mex_destroy(&c10_b_valpha);
  return c10_y;
}

static real_T c10_b_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  real_T c10_d;
  real_T c10_y;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_d, 1, 0, 0U, 0, 0U, 0);
  c10_y = c10_d;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static uint8_T c10_c_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_b_is_active_c10_dsogi_pll_3ph, const char_T
  *c10_identifier)
{
  emlrtMsgIdentifier c10_thisId;
  uint8_T c10_y;
  c10_thisId.fIdentifier = (const char_T *)c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c10_b_is_active_c10_dsogi_pll_3ph), &c10_thisId);
  sf_mex_destroy(&c10_b_is_active_c10_dsogi_pll_3ph);
  return c10_y;
}

static uint8_T c10_d_emlrt_marshallIn(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  uint8_T c10_b_u;
  uint8_T c10_y;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_b_u, 1, 3, 0U, 0, 0U, 0);
  c10_y = c10_b_u;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_slStringInitializeDynamicBuffers
  (SFc10_dsogi_pll_3phInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c10_chart_data_browse_helper(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance, int32_T c10_ssIdNumber, const mxArray **c10_mxData, uint8_T
  *c10_isValueTooBig)
{
  real_T c10_d;
  real_T c10_d1;
  real_T c10_d2;
  real_T c10_d3;
  real_T c10_d4;
  *c10_mxData = NULL;
  *c10_mxData = NULL;
  *c10_isValueTooBig = 0U;
  switch (c10_ssIdNumber) {
   case 4U:
    c10_d = *chartInstance->c10_va;
    sf_mex_assign(c10_mxData, sf_mex_create("mxData", &c10_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c10_d1 = *chartInstance->c10_valpha;
    sf_mex_assign(c10_mxData, sf_mex_create("mxData", &c10_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c10_d2 = *chartInstance->c10_vb;
    sf_mex_assign(c10_mxData, sf_mex_create("mxData", &c10_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c10_d3 = *chartInstance->c10_vc;
    sf_mex_assign(c10_mxData, sf_mex_create("mxData", &c10_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c10_d4 = *chartInstance->c10_vbetha;
    sf_mex_assign(c10_mxData, sf_mex_create("mxData", &c10_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc10_dsogi_pll_3phInstanceStruct
  *chartInstance)
{
  chartInstance->c10_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c10_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c10_va = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c10_valpha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_vb = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_vc = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_vbetha = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c10_dsogi_pll_3ph_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1726395252U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3507591523U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1370649978U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4109323310U);
}

mxArray *sf_c10_dsogi_pll_3ph_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c10_dsogi_pll_3ph_jit_fallback_info(void)
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

mxArray *sf_c10_dsogi_pll_3ph_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c10_dsogi_pll_3ph(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4oOtnwaKfDUm/AJRflphTkJEICR9YOA2cPx"
    "TI90dSagn1/IHpDtL0Q+wPIOAPaTR/gPiZxfGJySWZZanxyYYG8SnF+emZ8QU5OfHGBRlwc0EAA"
    "MoTIZU="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_dsogi_pll_3ph_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sThyxhwvWPbWNQVHyO5rVaF";
}

static void sf_opaque_initialize_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  initialize_params_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  initialize_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  enable_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  disable_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  sf_gateway_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c10_dsogi_pll_3ph(SimStruct* S)
{
  return get_sim_state_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c10_dsogi_pll_3ph(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c10_dsogi_pll_3ph(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_dsogi_pll_3phInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_dsogi_pll_3ph_optimization_info();
    }

    mdl_cleanup_runtime_resources_c10_dsogi_pll_3ph
      ((SFc10_dsogi_pll_3phInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_start_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc10_dsogi_pll_3phInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c10_dsogi_pll_3ph(void *chartInstanceVar)
{
  mdl_terminate_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_dsogi_pll_3ph(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc10_dsogi_pll_3ph((SFc10_dsogi_pll_3phInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c10_dsogi_pll_3ph_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWN2O20QUdrLLqhVlVSSkShSJXnCBhJC2rSpxAXR380Mj7XYDzmYlbsLEPolHGc+485MfxDP",
    "wFLwFL4B4AniCXgJ3iCvOOE42dULiyba0RVjKesf2d75zjs/f2Cs1Tj089vH3zbuet4fna/gre9",
    "PjjWxdWvhNr+96n2br7970vECE0Afum16Pjj23g5u4SSSJled+cBLDV6AEM5oK3uA9URxLeQ8k8",
    "AAFJEJqJ15FY8MoH9QNDyyzuohoEPmRMCw8RoEkPONs8k+8idFNZKxSCYGuA4Q6ksL0ozoj/fVe",
    "kHpUiSAYKBM7+0qB9k1iTVWnhmmaMKiNIWhwpQl6QW2w19dEQ0WP3Zxs7VX+DC3ihFHCi/s6Isq",
    "HBKNDw3kS4t8zo9F7hbBBRKQ+hogMQZ3QQcouOBRipwqf7lJOtJCUsFrMKlZaQXubDG08xZRgru",
    "8I7T2WQAaJoFw7JoRfRz/XOOkyqELX9B15fXhibDa0KYxAur3fXkUMQZI+nHE3ndN3VBunQTnPp",
    "YJYTWNoE3kUYOwqCN3qBiad8gmGI7RQjBMWUhc3VEvSIcaGa61r2PTfqtaZeBr9aitsylsbgnNc",
    "zXnrAa8QxpQbtiWSExgCS/mrRJMtsFN+B7BSNGwJjA5bbRwrluEUMyHDVgQPafGoHOZQaWN7jE2",
    "qAJzGNg0gRDfPVZ8L2pRHRmkRV7DkVE9OCvItYxtcg+yRAAr3GEmoAlQ4jStH3pAqm0iIRi/p1M",
    "rCEqY5uBXUUz3DqyMhB+hj12Z26SubCW5oCPtYmDWkRa6G0d0mzBTUOVZ9zB8Mj3OFVdaNF7E2f",
    "7YCBySIILSdkzI4xTqLAoq+YmVb/hFaO6R6UgUVSJoUzSSDBR2brvVSa5LAOR9wMeJ1KWI/m7zW",
    "xBUAVg0iOeX9Y2zhclJH5YtpLeFJK63urkOO9TPRjHRtbHwBHLuhtdVODSTArKpxHJFRoatgffo",
    "tDjFcUaWxUU+mrX7a9+z8/si7nN93V8zvby/M7zezdXD3oBMq0aedhLHO/STK7lt5BwvybhTYDx",
    "TBeUu4S77Z+cMFfGkFr7dwzvNdLz/7/E6Or4xXSqVSijtcwL2V49nN4fYyn/3wwR8fff/zZ/zpr",
    "z96v916+tcm/tISfyn93+LGO277rf1s/d5sbppX6eFSISsSD7dy8WDXqhVNxtFoeNHsXjz+sv1o",
    "cvZAtkk9lfdTeb2+Ozl9Z9fv2FkNkzitCTJohNm+za6Jme4nrPxPFvTd2+CP6wvx5Hm/P7wa/p3",
    "DPH6Vv/Zy/tpL+z1LIvJs/L48O+5sb0cX9POzY1kPN/yUv7nBjts5O26ne5EOsR0HOqsr237Bur",
    "Eub11x3r+Me130/N8vL96+In17Z0tc+QXOCc8Td1X7XOeR1/35gzV118s9f/MVtmNdvXeZS181u",
    "37x3ObG97P15/PvIpWIsnDFziy7jZun3qq7/5H4/tPRf7M5uWb9l31A//r+ESdsglux6VY3u9yU",
    "9jvo/JYEolbvd19GP5mdDzfMVTdy+W3XI8pDMVIf37334N5V+tPfzYwi4A==",
    ""
  };

  static char newstr [1561] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c10_dsogi_pll_3ph(SimStruct *S)
{
  const char* newstr = sf_c10_dsogi_pll_3ph_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(737223844U));
  ssSetChecksum1(S,(1849543310U));
  ssSetChecksum2(S,(12311015U));
  ssSetChecksum3(S,(4209448943U));
}

static void mdlRTW_c10_dsogi_pll_3ph(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c10_dsogi_pll_3ph(SimStruct *S)
{
  SFc10_dsogi_pll_3phInstanceStruct *chartInstance;
  chartInstance = (SFc10_dsogi_pll_3phInstanceStruct *)utMalloc(sizeof
    (SFc10_dsogi_pll_3phInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc10_dsogi_pll_3phInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_dsogi_pll_3ph;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c10_dsogi_pll_3ph;
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
    chartInstance->c10_JITStateAnimation,
    chartInstance->c10_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c10_dsogi_pll_3ph(chartInstance);
}

void c10_dsogi_pll_3ph_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c10_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_dsogi_pll_3ph(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_dsogi_pll_3ph(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_dsogi_pll_3ph_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
