/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MBD_Assignment.c
 *
 * Code generated for Simulink model 'MBD_Assignment'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jul 13 12:47:04 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MBD_Assignment.h"
#include "rtwtypes.h"
#include "Rte_Type.h"

/* Model step function for TID1 */
void ignition(void)                    /* Explicit Task: Runnable_SS1 */
{
  sint32 tmp;
  boolean rtb_IRV_StartEn;

  /* DataTransferBlock generated from: '<S1>/Function-Call Subsystem' */
  rtb_IRV_StartEn = Rte_IrvIRead_ignition_startenable();

  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS1' incorporates:
   *  SubSystem: '<S1>/Function-Call Subsystem1'
   */
  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Inport: '<Root>/RPort_Starter'
   *  Logic: '<S3>/AND'
   *  SignalConversion generated from: '<S3>/EngineStartEnable'
   */
  if (rtb_IRV_StartEn && Rte_IRead_ignition_userinputs_DataElement1()) {
    tmp = 5;
  } else {
    tmp = 0;
  }

  /* Outport: '<Root>/PPort_EngineSparkPlugVoltage' incorporates:
   *  Switch: '<S3>/Switch'
   */
  Rte_IWrite_ignition_outputdata_DataElement1(tmp);

  /* Outport: '<Root>/PPort_Enablestarter' incorporates:
   *  SignalConversion generated from: '<S3>/EngineStartEnable'
   */
  Rte_IWrite_ignition_outputdata_DataElement2(rtb_IRV_StartEn);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS1' */
}

/* Model step function for TID2 */
void enablestate(void)                 /* Explicit Task: Runnable_SS2 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS2' incorporates:
   *  SubSystem: '<S1>/Function-Call Subsystem'
   */

  /* DataTransferBlock generated from: '<S1>/Function-Call Subsystem' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Inport: '<Root>/RPort_ClutchPedalPos'
   *  Inport: '<Root>/RPort_CurrentGear'
   *  Inport: '<Root>/RPort_EngineRPM'
   *  Inport: '<Root>/RPort_Keyswitch'
   *  Inport: '<Root>/RPort_SideStandPos'
   *  Logic: '<S2>/AND'
   *  Logic: '<S2>/NOT'
   *  Logic: '<S2>/OR'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  RelationalOperator: '<S8>/Compare'
   */
  Rte_IrvIWrite_enablestate_startenable
    (Rte_IRead_enablestate_prerequisites_DataElement1() &&
     ((Rte_IRead_enablestate_enginedata_DataElement1() <= neutral) ||
      (Rte_IRead_enablestate_userinputs_DataElement2() != 0)) &&
     (Rte_IRead_enablestate_prerequisites_DataElement2() == stowed) &&
     (Rte_IRead_enablestate_enginedata_DataElement2() <= 0U));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable_SS2' */
}

/* Model initialize function */
void initialization(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
