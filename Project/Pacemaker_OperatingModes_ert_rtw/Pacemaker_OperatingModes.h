/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Pacemaker_OperatingModes.h
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

#ifndef RTW_HEADER_Pacemaker_OperatingModes_h_
#define RTW_HEADER_Pacemaker_OperatingModes_h_
#include <math.h>
#include <stddef.h>
#ifndef Pacemaker_OperatingModes_COMMON_INCLUDES_
# define Pacemaker_OperatingModes_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#endif                           /* Pacemaker_OperatingModes_COMMON_INCLUDES_ */

#include "Pacemaker_OperatingModes_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T PACING_REF_PWM;               /* '<Root>/Operating_Modes' */
  boolean_T FRONTEND_CTRL;             /* '<Root>/Operating_Modes' */
  boolean_T PACE_CHARGE_CTRL;          /* '<Root>/Operating_Modes' */
  boolean_T ATR_PACE_CTRL;             /* '<Root>/Operating_Modes' */
  boolean_T VENT_PACE_CTRL;            /* '<Root>/Operating_Modes' */
  boolean_T ATR_GND_CTRL;              /* '<Root>/Operating_Modes' */
  boolean_T VENT_GND_CTRL;             /* '<Root>/Operating_Modes' */
  boolean_T PACE_GND_CTRL;             /* '<Root>/Operating_Modes' */
  boolean_T Z_ATR_CTRL;                /* '<Root>/Operating_Modes' */
  boolean_T Z_VENT_CTRL;               /* '<Root>/Operating_Modes' */
} B_Pacemaker_OperatingModes_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_DigitalRead_Pacem_T obj; /* '<S1>/FRDM-K64F Pin D0' */
  freedomk64f_DigitalRead_Pacem_T obj_o;/* '<S1>/FRDM-K64F Pin D1' */
  freedomk64f_DigitalWrite_Pace_T obj_i;/* '<S3>/Digital Write to D13' */
  freedomk64f_DigitalWrite_Pace_T obj_n;/* '<S3>/Digital Write to D5' */
  freedomk64f_DigitalWrite_Pace_T obj_e;/* '<S3>/Digital Write to D2' */
  freedomk64f_DigitalWrite_Pace_T obj_if;/* '<S3>/Digital Write to D8' */
  freedomk64f_DigitalWrite_Pace_T obj_p;/* '<S3>/Digital Write to D9' */
  freedomk64f_DigitalWrite_Pace_T obj_m;/* '<S3>/Digital Write to D11' */
  freedomk64f_DigitalWrite_Pace_T obj_mm;/* '<S3>/Digital Write to D12' */
  freedomk64f_DigitalWrite_Pace_T obj_ir;/* '<S3>/Digital Write to D10' */
  freedomk64f_DigitalWrite_Pace_T obj_b;/* '<S3>/Digital Write to D4' */
  freedomk64f_DigitalWrite_Pace_T obj_d;/* '<S3>/Digital Write to D7' */
  freedomk64f_DigitalWrite_Pace_T obj_mz;/* '<S3>/Digital Write to D6' */
  freedomk64f_DigitalWrite_Pace_T obj_bn;/* '<S3>/Digital Write to D3' */
  uint32_T temporalCounter_i1;         /* '<Root>/Operating_Modes' */
  uint8_T is_active_c3_Pacemaker_Operatin;/* '<Root>/Operating_Modes' */
  uint8_T is_c3_Pacemaker_OperatingModes;/* '<Root>/Operating_Modes' */
  uint8_T is_AOO;                      /* '<Root>/Operating_Modes' */
  uint8_T is_AAI;                      /* '<Root>/Operating_Modes' */
  uint8_T is_VVI;                      /* '<Root>/Operating_Modes' */
  uint8_T is_VOO;                      /* '<Root>/Operating_Modes' */
} DW_Pacemaker_OperatingModes_T;

/* Parameters (default storage) */
struct P_Pacemaker_OperatingModes_T_ {
  real_T FRDMK64FPinD1_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/FRDM-K64F Pin D1'
                                        */
  real_T FRDMK64FPinD0_SampleTime;     /* Expression: SampleTime
                                        * Referenced by: '<S1>/FRDM-K64F Pin D0'
                                        */
  real_T DCM_PACING_MODE_Value;        /* Expression: 1
                                        * Referenced by: '<S1>/DCM_PACING_MODE'
                                        */
  real_T DCM_ATR_DUTY_CYC_Value;       /* Expression: 1
                                        * Referenced by: '<S1>/DCM_ATR_DUTY_CYC'
                                        */
  real_T DCM_VENT_DUTY_CYC_Value;      /* Expression: 1
                                        * Referenced by: '<S1>/DCM_VENT_DUTY_CYC'
                                        */
  real_T DCM_ATR_PULSE_PERIOD_Value;   /* Expression: 1
                                        * Referenced by: '<S1>/DCM_ATR_PULSE_PERIOD '
                                        */
  real_T DCM_VENT_PULSE_PERIOD_Value;  /* Expression: 1
                                        * Referenced by: '<S1>/DCM_VENT_PULSE_PERIOD '
                                        */
  real_T One_Minute_Value;             /* Expression: 60000
                                        * Referenced by: '<S4>/One_Minute'
                                        */
  real_T DCM_LOWER_RATE_LIMIT_Value;   /* Expression: 60
                                        * Referenced by: '<S1>/DCM_LOWER_RATE_LIMIT'
                                        */
  real_T DCM_ATR_REF_PER_Value;        /* Expression: 1
                                        * Referenced by: '<S1>/DCM_ATR_REF_PER'
                                        */
  real_T DCM_VENT_REF_PER_Value;       /* Expression: 1
                                        * Referenced by: '<S1>/DCM_VENT_REF_PER'
                                        */
  real_T DCM_ATR_CMP_REF_PWM_Value;    /* Expression: 1
                                        * Referenced by: '<S3>/DCM_ATR_CMP_REF_PWM'
                                        */
  real_T DCM_VENT_CMP_REF_PWM_Value;   /* Expression: 1
                                        * Referenced by: '<S3>/DCM_VENT_CMP_REF_PWM'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Pacemaker_OperatingMo_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Pacemaker_OperatingModes_T Pacemaker_OperatingModes_P;

/* Block signals (default storage) */
extern B_Pacemaker_OperatingModes_T Pacemaker_OperatingModes_B;

/* Block states (default storage) */
extern DW_Pacemaker_OperatingModes_T Pacemaker_OperatingModes_DW;

/* Model entry point functions */
extern void Pacemaker_OperatingModes_initialize(void);
extern void Pacemaker_OperatingModes_step(void);
extern void Pacemaker_OperatingModes_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Pacemaker_OperatingM_T *const Pacemaker_OperatingModes_M;

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
 * '<Root>' : 'Pacemaker_OperatingModes'
 * '<S1>'   : 'Pacemaker_OperatingModes/Input_Subsystem'
 * '<S2>'   : 'Pacemaker_OperatingModes/Operating_Modes'
 * '<S3>'   : 'Pacemaker_OperatingModes/Output_Subsystem'
 * '<S4>'   : 'Pacemaker_OperatingModes/Input_Subsystem/Pacing Interval Calculations'
 */
#endif                              /* RTW_HEADER_Pacemaker_OperatingModes_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
