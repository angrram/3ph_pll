/*
 * File: dsogi_pll_3ph_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef DSOGI_PLL_3PH_CA_H
#define DSOGI_PLL_3PH_CA_H

/* preprocessor validation checks */
#include "dsogi_pll_3ph_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_dsogi_pll_3ph_HWRes;
extern CA_PWS_TestResults CA_dsogi_pll_3ph_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_dsogi_pll_3ph_ExpHW;
extern CA_HWImpl CA_dsogi_pll_3ph_ActHW;

/* entry point function to run tests */
void dsogi_pll_3ph_caRunTests(void);

#endif                                 /* DSOGI_PLL_3PH_CA_H */
