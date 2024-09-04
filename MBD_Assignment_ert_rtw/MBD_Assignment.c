/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MBD_Assignment.c
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

#include "MBD_Assignment.h"
#include "MBD_Assignment_types.h"

/* Block signals (default storage) */
B_MBD_Assignment_T MBD_Assignment_B;

/* External inputs (root inport signals with default storage) */
ExtU_MBD_Assignment_T MBD_Assignment_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MBD_Assignment_T MBD_Assignment_Y;

/* Real-time model */
static RT_MODEL_MBD_Assignment_T MBD_Assignment_M_;
RT_MODEL_MBD_Assignment_T *const MBD_Assignment_M = &MBD_Assignment_M_;

/* Model step function for TID1 */
void Runnable_SS1(void)                /* Explicit Task: Runnable_SS1 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS1' incorporates:
   *  SubSystem: '<S1>/Function-Call Subsystem1'
   */
  /* Outport: '<Root>/PPort_Enablestarter' incorporates:
   *  SignalConversion generated from: '<S3>/EngineStartEnable'
   */
  MBD_Assignment_Y.PPort_Enablestarter = MBD_Assignment_B.AND;

  /* Switch: '<S3>/Switch' incorporates:
   *  Inport: '<Root>/RPort_Starter'
   *  Logic: '<S3>/AND'
   *  Outport: '<Root>/PPort_Enablestarter'
   */
  if (MBD_Assignment_Y.PPort_Enablestarter && MBD_Assignment_U.RPort_Starter) {
    /* Outport: '<Root>/PPort_EngineSparkPlugVoltage' incorporates:
     *  Constant: '<S3>/Constant'
     */
    MBD_Assignment_Y.PPort_EngineSparkPlugVoltage = 5.0;
  } else {
    /* Outport: '<Root>/PPort_EngineSparkPlugVoltage' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    MBD_Assignment_Y.PPort_EngineSparkPlugVoltage = 0.0;
  }

  /* End of Switch: '<S3>/Switch' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS1' */
}

/* Model step function for TID2 */
void Runnable_SS2(void)                /* Explicit Task: Runnable_SS2 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS2' incorporates:
   *  SubSystem: '<S1>/Function-Call Subsystem'
   */
  /* Logic: '<S2>/AND' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Inport: '<Root>/RPort_ClutchPedalPos'
   *  Inport: '<Root>/RPort_CurrentGear'
   *  Inport: '<Root>/RPort_EngineRPM'
   *  Inport: '<Root>/RPort_Keyswitch'
   *  Inport: '<Root>/RPort_SideStandPos'
   *  Logic: '<S2>/NOT'
   *  Logic: '<S2>/OR'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  RelationalOperator: '<S8>/Compare'
   */
  MBD_Assignment_B.AND = (MBD_Assignment_U.RPort_Keyswitch &&
    ((MBD_Assignment_U.RPort_CurrentGear <= neutral) ||
     (MBD_Assignment_U.RPort_ClutchPedalPos != 0)) &&
    (MBD_Assignment_U.RPort_SideStandPos == stowed) &&
    (MBD_Assignment_U.RPort_EngineRPM <= 0U));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS2' */
}

/* Model initialize function */
void MBD_Assignment_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void MBD_Assignment_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
