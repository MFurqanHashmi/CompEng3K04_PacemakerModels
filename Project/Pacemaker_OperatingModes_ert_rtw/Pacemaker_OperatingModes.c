/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Pacemaker_OperatingModes.c
 *
 * Code generated for Simulink model 'Pacemaker_OperatingModes'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Oct 23 16:30:17 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Pacemaker_OperatingModes.h"
#include "Pacemaker_OperatingModes_private.h"

/* Named constants for Chart: '<Root>/Operating_Modes' */
#define Pacemaker_Op_IN_AAI_Pace_SENSED ((uint8_T)3U)
#define Pacemaker_Op_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Pacemaker_Op_IN_VVI_Pace_SENSED ((uint8_T)3U)
#define Pacemaker_Opera_IN_AAI_Pace_OFF ((uint8_T)1U)
#define Pacemaker_Opera_IN_AOO_Pace_OFF ((uint8_T)1U)
#define Pacemaker_Opera_IN_VOO_Pace_OFF ((uint8_T)1U)
#define Pacemaker_Opera_IN_VVI_Pace_OFF ((uint8_T)1U)
#define Pacemaker_Operat_IN_AAI_Pace_ON ((uint8_T)2U)
#define Pacemaker_Operat_IN_AOO_Pace_ON ((uint8_T)2U)
#define Pacemaker_Operat_IN_VOO_Pace_ON ((uint8_T)2U)
#define Pacemaker_Operat_IN_VVI_Pace_ON ((uint8_T)2U)
#define Pacemaker_OperatingMod_IN_Start ((uint8_T)3U)
#define Pacemaker_OperatingModes_IN_AAI ((uint8_T)1U)
#define Pacemaker_OperatingModes_IN_AOO ((uint8_T)2U)
#define Pacemaker_OperatingModes_IN_VOO ((uint8_T)4U)
#define Pacemaker_OperatingModes_IN_VVI ((uint8_T)5U)

/* Block signals (default storage) */
B_Pacemaker_OperatingModes_T Pacemaker_OperatingModes_B;

/* Block states (default storage) */
DW_Pacemaker_OperatingModes_T Pacemaker_OperatingModes_DW;

/* Real-time model */
RT_MODEL_Pacemaker_OperatingM_T Pacemaker_OperatingModes_M_;
RT_MODEL_Pacemaker_OperatingM_T *const Pacemaker_OperatingModes_M =
  &Pacemaker_OperatingModes_M_;

/* Forward declaration for local functions */
static void Pacemaker_Op_SystemCore_release(const
  freedomk64f_DigitalRead_Pacem_T *obj);
static void Pacemaker_Ope_SystemCore_delete(const
  freedomk64f_DigitalRead_Pacem_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalRead_Pacem_T *obj);
static void Pacemaker_SystemCore_release_nt(const
  freedomk64f_DigitalWrite_Pace_T *obj);
static void Pacemaker__SystemCore_delete_nt(const
  freedomk64f_DigitalWrite_Pace_T *obj);
static void matlabCodegenHandle_matlabCo_nt(freedomk64f_DigitalWrite_Pace_T *obj);
static void Pacemaker_Op_SystemCore_release(const
  freedomk64f_DigitalRead_Pacem_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Pacemaker_Ope_SystemCore_delete(const
  freedomk64f_DigitalRead_Pacem_T *obj)
{
  Pacemaker_Op_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalRead_Pacem_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Pacemaker_Ope_SystemCore_delete(obj);
  }
}

static void Pacemaker_SystemCore_release_nt(const
  freedomk64f_DigitalWrite_Pace_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Pacemaker__SystemCore_delete_nt(const
  freedomk64f_DigitalWrite_Pace_T *obj)
{
  Pacemaker_SystemCore_release_nt(obj);
}

static void matlabCodegenHandle_matlabCo_nt(freedomk64f_DigitalWrite_Pace_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Pacemaker__SystemCore_delete_nt(obj);
  }
}

/* Model step function */
void Pacemaker_OperatingModes_step(void)
{
  boolean_T rtb_FRDMK64FPinD0_0;
  boolean_T rtb_FRDMK64FPinD1_0;
  real_T rtb_Subtract;
  real_T rtb_Divide;

  /* MATLABSystem: '<S1>/FRDM-K64F Pin D0' */
  if (Pacemaker_OperatingModes_DW.obj.SampleTime !=
      Pacemaker_OperatingModes_P.FRDMK64FPinD0_SampleTime) {
    Pacemaker_OperatingModes_DW.obj.SampleTime =
      Pacemaker_OperatingModes_P.FRDMK64FPinD0_SampleTime;
  }

  rtb_FRDMK64FPinD0_0 = MW_digitalIO_read
    (Pacemaker_OperatingModes_DW.obj.MW_DIGITALIO_HANDLE);

  /* MATLABSystem: '<S1>/FRDM-K64F Pin D1' */
  if (Pacemaker_OperatingModes_DW.obj_o.SampleTime !=
      Pacemaker_OperatingModes_P.FRDMK64FPinD1_SampleTime) {
    Pacemaker_OperatingModes_DW.obj_o.SampleTime =
      Pacemaker_OperatingModes_P.FRDMK64FPinD1_SampleTime;
  }

  rtb_FRDMK64FPinD1_0 = MW_digitalIO_read
    (Pacemaker_OperatingModes_DW.obj_o.MW_DIGITALIO_HANDLE);

  /* Product: '<S4>/Divide' incorporates:
   *  Constant: '<S1>/DCM_LOWER_RATE_LIMIT'
   *  Constant: '<S4>/One_Minute'
   */
  rtb_Divide = Pacemaker_OperatingModes_P.One_Minute_Value /
    Pacemaker_OperatingModes_P.DCM_LOWER_RATE_LIMIT_Value;

  /* Sum: '<S4>/Subtract' incorporates:
   *  Constant: '<S1>/DCM_ATR_PULSE_PERIOD '
   */
  rtb_Subtract = rtb_Divide -
    Pacemaker_OperatingModes_P.DCM_ATR_PULSE_PERIOD_Value;

  /* Sum: '<S4>/Subtract1' incorporates:
   *  Constant: '<S1>/DCM_VENT_PULSE_PERIOD '
   */
  rtb_Divide -= Pacemaker_OperatingModes_P.DCM_VENT_PULSE_PERIOD_Value;

  /* Chart: '<Root>/Operating_Modes' incorporates:
   *  Constant: '<S1>/DCM_ATR_DUTY_CYC'
   *  Constant: '<S1>/DCM_ATR_PULSE_PERIOD '
   *  Constant: '<S1>/DCM_ATR_REF_PER'
   *  Constant: '<S1>/DCM_PACING_MODE'
   *  Constant: '<S1>/DCM_VENT_DUTY_CYC'
   *  Constant: '<S1>/DCM_VENT_PULSE_PERIOD '
   *  Constant: '<S1>/DCM_VENT_REF_PER'
   *  MATLABSystem: '<S1>/FRDM-K64F Pin D0'
   *  MATLABSystem: '<S1>/FRDM-K64F Pin D1'
   */
  if (Pacemaker_OperatingModes_DW.temporalCounter_i1 < MAX_uint32_T) {
    Pacemaker_OperatingModes_DW.temporalCounter_i1++;
  }

  if (Pacemaker_OperatingModes_DW.is_active_c3_Pacemaker_Operatin == 0U) {
    Pacemaker_OperatingModes_DW.is_active_c3_Pacemaker_Operatin = 1U;
    Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
      Pacemaker_OperatingMod_IN_Start;
  } else {
    switch (Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes) {
     case Pacemaker_OperatingModes_IN_AAI:
      if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value != 3.0) {
        Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Op_IN_NO_ACTIVE_CHILD;
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingMod_IN_Start;
      } else {
        switch (Pacemaker_OperatingModes_DW.is_AAI) {
         case Pacemaker_Opera_IN_AAI_Pace_OFF:
          if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
              (rtb_Subtract)) {
            Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Operat_IN_AAI_Pace_ON;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else if (rtb_FRDMK64FPinD0_0) {
            Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Op_IN_AAI_Pace_SENSED;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.PACING_REF_PWM =
              Pacemaker_OperatingModes_P.DCM_ATR_DUTY_CYC_Value;
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = true;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = true;
          }
          break;

         case Pacemaker_Operat_IN_AAI_Pace_ON:
          if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
              (Pacemaker_OperatingModes_P.DCM_ATR_PULSE_PERIOD_Value)) {
            Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Opera_IN_AAI_Pace_OFF;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = false;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = true;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
          }
          break;

         default:
          /* case IN_AAI_Pace_SENSED: */
          if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
              (Pacemaker_OperatingModes_P.DCM_ATR_REF_PER_Value)) {
            Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Opera_IN_AAI_Pace_OFF;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = true;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
          }
          break;
        }
      }
      break;

     case Pacemaker_OperatingModes_IN_AOO:
      if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value != 1.0) {
        Pacemaker_OperatingModes_DW.is_AOO = Pacemaker_Op_IN_NO_ACTIVE_CHILD;
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingMod_IN_Start;
      } else if (Pacemaker_OperatingModes_DW.is_AOO ==
                 Pacemaker_Opera_IN_AOO_Pace_OFF) {
        if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
            (rtb_Subtract)) {
          Pacemaker_OperatingModes_DW.is_AOO = Pacemaker_Operat_IN_AOO_Pace_ON;
          Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
        } else {
          Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.PACING_REF_PWM =
            Pacemaker_OperatingModes_P.DCM_ATR_DUTY_CYC_Value;
          Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
          Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
          Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
          Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
          Pacemaker_OperatingModes_B.ATR_GND_CTRL = true;
          Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
          Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
        }
      } else {
        /* case IN_AOO_Pace_ON: */
        if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
            (Pacemaker_OperatingModes_P.DCM_ATR_PULSE_PERIOD_Value)) {
          Pacemaker_OperatingModes_DW.is_AOO = Pacemaker_Opera_IN_AOO_Pace_OFF;
          Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
        } else {
          Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = false;
          Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
          Pacemaker_OperatingModes_B.ATR_PACE_CTRL = true;
          Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
          Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
          Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
        }
      }
      break;

     case Pacemaker_OperatingMod_IN_Start:
      if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value == 1.0) {
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingModes_IN_AOO;
        Pacemaker_OperatingModes_DW.is_AOO = Pacemaker_Opera_IN_AOO_Pace_OFF;
        Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
      } else if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value == 2.0) {
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingModes_IN_VOO;
        Pacemaker_OperatingModes_DW.is_VOO = Pacemaker_Opera_IN_VOO_Pace_OFF;
        Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
      } else if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value == 3.0) {
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingModes_IN_AAI;
        Pacemaker_OperatingModes_DW.is_AAI = Pacemaker_Opera_IN_AAI_Pace_OFF;
        Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
      } else {
        if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value == 4.0) {
          Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
            Pacemaker_OperatingModes_IN_VVI;
          Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Opera_IN_VVI_Pace_OFF;
          Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
        }
      }
      break;

     case Pacemaker_OperatingModes_IN_VOO:
      if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value != 2.0) {
        Pacemaker_OperatingModes_DW.is_VOO = Pacemaker_Op_IN_NO_ACTIVE_CHILD;
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingMod_IN_Start;
      } else if (Pacemaker_OperatingModes_DW.is_VOO ==
                 Pacemaker_Opera_IN_VOO_Pace_OFF) {
        if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
            (rtb_Divide)) {
          Pacemaker_OperatingModes_DW.is_VOO = Pacemaker_Operat_IN_VOO_Pace_ON;
          Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
        } else {
          Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.PACING_REF_PWM =
            Pacemaker_OperatingModes_P.DCM_VENT_DUTY_CYC_Value;
          Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
          Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
          Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
          Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
          Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_GND_CTRL = true;
          Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
        }
      } else {
        /* case IN_VOO_Pace_ON: */
        if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
            (Pacemaker_OperatingModes_P.DCM_VENT_PULSE_PERIOD_Value)) {
          Pacemaker_OperatingModes_DW.is_VOO = Pacemaker_Opera_IN_VOO_Pace_OFF;
          Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
        } else {
          Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = false;
          Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
          Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
          Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
          Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
          Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
          Pacemaker_OperatingModes_B.VENT_PACE_CTRL = true;
          Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
        }
      }
      break;

     default:
      /* case IN_VVI: */
      if (Pacemaker_OperatingModes_P.DCM_PACING_MODE_Value != 4.0) {
        Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Op_IN_NO_ACTIVE_CHILD;
        Pacemaker_OperatingModes_DW.is_c3_Pacemaker_OperatingModes =
          Pacemaker_OperatingMod_IN_Start;
      } else {
        switch (Pacemaker_OperatingModes_DW.is_VVI) {
         case Pacemaker_Opera_IN_VVI_Pace_OFF:
          if (rtb_FRDMK64FPinD1_0) {
            Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Op_IN_VVI_Pace_SENSED;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)
                     ceil(rtb_Divide)) {
            Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Operat_IN_VVI_Pace_ON;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.PACING_REF_PWM =
              Pacemaker_OperatingModes_P.DCM_VENT_DUTY_CYC_Value;
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = true;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = true;
          }
          break;

         case Pacemaker_Operat_IN_VVI_Pace_ON:
          if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
              (Pacemaker_OperatingModes_P.DCM_VENT_PULSE_PERIOD_Value)) {
            Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Opera_IN_VVI_Pace_OFF;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = false;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = true;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
          }
          break;

         default:
          /* case IN_VVI_Pace_SENSED: */
          if (Pacemaker_OperatingModes_DW.temporalCounter_i1 >= (uint32_T)ceil
              (Pacemaker_OperatingModes_P.DCM_VENT_REF_PER_Value)) {
            Pacemaker_OperatingModes_DW.is_VVI = Pacemaker_Opera_IN_VVI_Pace_OFF;
            Pacemaker_OperatingModes_DW.temporalCounter_i1 = 0U;
          } else {
            Pacemaker_OperatingModes_B.ATR_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_PACE_CTRL = false;
            Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL = true;
            Pacemaker_OperatingModes_B.PACE_GND_CTRL = true;
            Pacemaker_OperatingModes_B.Z_ATR_CTRL = false;
            Pacemaker_OperatingModes_B.Z_VENT_CTRL = false;
            Pacemaker_OperatingModes_B.ATR_GND_CTRL = false;
            Pacemaker_OperatingModes_B.VENT_GND_CTRL = true;
            Pacemaker_OperatingModes_B.FRONTEND_CTRL = false;
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Operating_Modes' */

  /* MATLABSystem: '<S3>/Digital Write to D13' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_i.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.FRONTEND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D5' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_n.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.PACING_REF_PWM != 0.0);

  /* MATLABSystem: '<S3>/Digital Write to D2' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_e.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.PACE_CHARGE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D8' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_if.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.ATR_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D9' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_p.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.VENT_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D11' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_m.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.ATR_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D12' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_mm.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.VENT_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D10' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_ir.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.PACE_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D4' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_b.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.Z_ATR_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D7' */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_d.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_B.Z_VENT_CTRL);

  /* MATLABSystem: '<S3>/Digital Write to D6' incorporates:
   *  Constant: '<S3>/DCM_ATR_CMP_REF_PWM'
   */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_mz.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_P.DCM_ATR_CMP_REF_PWM_Value != 0.0);

  /* MATLABSystem: '<S3>/Digital Write to D3' incorporates:
   *  Constant: '<S3>/DCM_VENT_CMP_REF_PWM'
   */
  MW_digitalIO_write(Pacemaker_OperatingModes_DW.obj_bn.MW_DIGITALIO_HANDLE,
                     Pacemaker_OperatingModes_P.DCM_VENT_CMP_REF_PWM_Value !=
                     0.0);
}

/* Model initialize function */
void Pacemaker_OperatingModes_initialize(void)
{
  {
    freedomk64f_DigitalRead_Pacem_T *obj;
    freedomk64f_DigitalWrite_Pace_T *obj_0;

    /* Start for MATLABSystem: '<S1>/FRDM-K64F Pin D0' */
    Pacemaker_OperatingModes_DW.obj.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj.SampleTime = -1.0;
    Pacemaker_OperatingModes_DW.obj.matlabCodegenIsDeleted = false;
    Pacemaker_OperatingModes_DW.obj.SampleTime =
      Pacemaker_OperatingModes_P.FRDMK64FPinD0_SampleTime;
    obj = &Pacemaker_OperatingModes_DW.obj;
    Pacemaker_OperatingModes_DW.obj.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(0U, 0);
    Pacemaker_OperatingModes_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/FRDM-K64F Pin D1' */
    Pacemaker_OperatingModes_DW.obj_o.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_o.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_o.SampleTime = -1.0;
    Pacemaker_OperatingModes_DW.obj_o.matlabCodegenIsDeleted = false;
    Pacemaker_OperatingModes_DW.obj_o.SampleTime =
      Pacemaker_OperatingModes_P.FRDMK64FPinD1_SampleTime;
    obj = &Pacemaker_OperatingModes_DW.obj_o;
    Pacemaker_OperatingModes_DW.obj_o.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_o.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(1U, 0);
    Pacemaker_OperatingModes_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D13' */
    Pacemaker_OperatingModes_DW.obj_i.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_i.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_i.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_i;
    Pacemaker_OperatingModes_DW.obj_i.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_i.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(13U, 1);
    Pacemaker_OperatingModes_DW.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D5' */
    Pacemaker_OperatingModes_DW.obj_n.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_n.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_n.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_n;
    Pacemaker_OperatingModes_DW.obj_n.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_n.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(5U, 1);
    Pacemaker_OperatingModes_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D2' */
    Pacemaker_OperatingModes_DW.obj_e.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_e.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_e.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_e;
    Pacemaker_OperatingModes_DW.obj_e.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_e.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(2U, 1);
    Pacemaker_OperatingModes_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D8' */
    Pacemaker_OperatingModes_DW.obj_if.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_if.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_if.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_if;
    Pacemaker_OperatingModes_DW.obj_if.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_if.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(8U, 1);
    Pacemaker_OperatingModes_DW.obj_if.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D9' */
    Pacemaker_OperatingModes_DW.obj_p.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_p.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_p.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_p;
    Pacemaker_OperatingModes_DW.obj_p.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_p.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(9U, 1);
    Pacemaker_OperatingModes_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D11' */
    Pacemaker_OperatingModes_DW.obj_m.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_m.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_m.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_m;
    Pacemaker_OperatingModes_DW.obj_m.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_m.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(11U, 1);
    Pacemaker_OperatingModes_DW.obj_m.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D12' */
    Pacemaker_OperatingModes_DW.obj_mm.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_mm.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_mm.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_mm;
    Pacemaker_OperatingModes_DW.obj_mm.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_mm.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(12U, 1);
    Pacemaker_OperatingModes_DW.obj_mm.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D10' */
    Pacemaker_OperatingModes_DW.obj_ir.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_ir.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_ir.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_ir;
    Pacemaker_OperatingModes_DW.obj_ir.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_ir.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(10U, 1);
    Pacemaker_OperatingModes_DW.obj_ir.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D4' */
    Pacemaker_OperatingModes_DW.obj_b.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_b.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_b.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_b;
    Pacemaker_OperatingModes_DW.obj_b.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_b.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(4U, 1);
    Pacemaker_OperatingModes_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D7' */
    Pacemaker_OperatingModes_DW.obj_d.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_d.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_d.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_d;
    Pacemaker_OperatingModes_DW.obj_d.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_d.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(7U, 1);
    Pacemaker_OperatingModes_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D6' */
    Pacemaker_OperatingModes_DW.obj_mz.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_mz.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_mz.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_mz;
    Pacemaker_OperatingModes_DW.obj_mz.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_mz.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(6U, 1);
    Pacemaker_OperatingModes_DW.obj_mz.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write to D3' */
    Pacemaker_OperatingModes_DW.obj_bn.matlabCodegenIsDeleted = true;
    Pacemaker_OperatingModes_DW.obj_bn.isInitialized = 0;
    Pacemaker_OperatingModes_DW.obj_bn.matlabCodegenIsDeleted = false;
    obj_0 = &Pacemaker_OperatingModes_DW.obj_bn;
    Pacemaker_OperatingModes_DW.obj_bn.isSetupComplete = false;
    Pacemaker_OperatingModes_DW.obj_bn.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(3U, 1);
    Pacemaker_OperatingModes_DW.obj_bn.isSetupComplete = true;
  }
}

/* Model terminate function */
void Pacemaker_OperatingModes_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/FRDM-K64F Pin D0' */
  matlabCodegenHandle_matlabCodeg(&Pacemaker_OperatingModes_DW.obj);

  /* Terminate for MATLABSystem: '<S1>/FRDM-K64F Pin D1' */
  matlabCodegenHandle_matlabCodeg(&Pacemaker_OperatingModes_DW.obj_o);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D13' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_i);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D5' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_n);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D2' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_e);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D8' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_if);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D9' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_p);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D11' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_m);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D12' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_mm);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D10' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_ir);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D4' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_b);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D7' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_d);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D6' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_mz);

  /* Terminate for MATLABSystem: '<S3>/Digital Write to D3' */
  matlabCodegenHandle_matlabCo_nt(&Pacemaker_OperatingModes_DW.obj_bn);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
