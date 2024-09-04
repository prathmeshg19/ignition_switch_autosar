/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'MBD_Assignment'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jul 13 10:44:48 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include "MBD_Assignment.h"            /* Model header file */

/* Example use case for call to exported function: Runnable_SS1 */
extern void sample_usage_Runnable_SS1(void);
void sample_usage_Runnable_SS1(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Runnable_SS1();

  /* Read function outputs here */
}

/* Example use case for call to exported function: Runnable_SS2 */
extern void sample_usage_Runnable_SS2(void);
void sample_usage_Runnable_SS2(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Runnable_SS2();

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
  MBD_Assignment_initialize();
  while (rtmGetErrorStatus(MBD_Assignment_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  MBD_Assignment_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
