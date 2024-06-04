/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'dsogi_pll_3ph'.
 *
 * Model version                  : 1.85
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Jun  2 13:09:45 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include "dsogi_pll_3ph.h"             /* Model header file */

/* Example use case for call to exported function: Input3 */
extern void sample_usage_Input3(void);
void sample_usage_Input3(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Input3();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  dsogi_pll_3ph_initialize();
  while (rtmGetErrorStatus(dsogi_pll_3ph_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  dsogi_pll_3ph_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
