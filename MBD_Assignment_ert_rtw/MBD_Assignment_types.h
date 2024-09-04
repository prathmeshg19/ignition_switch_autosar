/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MBD_Assignment_types.h
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

#ifndef RTW_HEADER_MBD_Assignment_types_h_
#define RTW_HEADER_MBD_Assignment_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_CurrentGear_
#define DEFINED_TYPEDEF_FOR_CurrentGear_

typedef enum {
  neutral = 0,                         /* Default value */
  first,
  second,
  third,
  fourth,
  fifth,
  sixth
} CurrentGear;

#endif

#ifndef DEFINED_TYPEDEF_FOR_StandPos_
#define DEFINED_TYPEDEF_FOR_StandPos_

typedef enum {
  stowed = 0,                          /* Default value */
  unstowed
} StandPos;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_MBD_Assignment_T RT_MODEL_MBD_Assignment_T;

#endif                                 /* RTW_HEADER_MBD_Assignment_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
