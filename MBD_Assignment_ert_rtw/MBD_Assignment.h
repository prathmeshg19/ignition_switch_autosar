/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MBD_Assignment.h
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

#ifndef RTW_HEADER_MBD_Assignment_h_
#define RTW_HEADER_MBD_Assignment_h_
#ifndef MBD_Assignment_COMMON_INCLUDES_
#define MBD_Assignment_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* MBD_Assignment_COMMON_INCLUDES_ */

#include "MBD_Assignment_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  boolean_T AND;                       /* '<S2>/AND' */
} B_MBD_Assignment_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T RPort_Starter;             /* '<Root>/RPort_Starter' */
  boolean_T RPort_Keyswitch;           /* '<Root>/RPort_Keyswitch' */
  CurrentGear RPort_CurrentGear;       /* '<Root>/RPort_CurrentGear' */
  int8_T RPort_ClutchPedalPos;         /* '<Root>/RPort_ClutchPedalPos' */
  StandPos RPort_SideStandPos;         /* '<Root>/RPort_SideStandPos' */
  uint32_T RPort_EngineRPM;            /* '<Root>/RPort_EngineRPM' */
} ExtU_MBD_Assignment_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T PPort_EngineSparkPlugVoltage;
                                     /* '<Root>/PPort_EngineSparkPlugVoltage' */
  boolean_T PPort_Enablestarter;       /* '<Root>/PPort_Enablestarter' */
} ExtY_MBD_Assignment_T;

/* Real-time Model Data Structure */
struct tag_RTM_MBD_Assignment_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_MBD_Assignment_T MBD_Assignment_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_MBD_Assignment_T MBD_Assignment_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MBD_Assignment_T MBD_Assignment_Y;

/* Model entry point functions */
extern void MBD_Assignment_initialize(void);
extern void MBD_Assignment_terminate(void);

/* Exported entry point function */
extern void Runnable_SS1(void);

/* Exported entry point function */
extern void Runnable_SS2(void);

/* Real-time Model object */
extern RT_MODEL_MBD_Assignment_T *const MBD_Assignment_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'MBD_Assignment'
 * '<S1>'   : 'MBD_Assignment/Subsystem'
 * '<S2>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem'
 * '<S3>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem1'
 * '<S4>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem/Compare To Constant'
 * '<S5>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem/Subsystem'
 * '<S6>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem/Subsystem1'
 * '<S7>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem/Subsystem2'
 * '<S8>'   : 'MBD_Assignment/Subsystem/Function-Call Subsystem/Subsystem1/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_MBD_Assignment_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
