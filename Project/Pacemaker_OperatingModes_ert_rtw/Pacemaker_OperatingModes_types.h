/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Pacemaker_OperatingModes_types.h
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

#ifndef RTW_HEADER_Pacemaker_OperatingModes_types_h_
#define RTW_HEADER_Pacemaker_OperatingModes_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<S3>/Digital Write to D13' */
#include "MW_SVD.h"
#ifndef struct_tag_bvK2L41g8z1P0jzpdjsJhE
#define struct_tag_bvK2L41g8z1P0jzpdjsJhE

struct tag_bvK2L41g8z1P0jzpdjsJhE
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_bvK2L41g8z1P0jzpdjsJhE*/

#ifndef typedef_b_freedomk64f_Hardware_Pacema_T
#define typedef_b_freedomk64f_Hardware_Pacema_T

typedef struct tag_bvK2L41g8z1P0jzpdjsJhE b_freedomk64f_Hardware_Pacema_T;

#endif                               /*typedef_b_freedomk64f_Hardware_Pacema_T*/

#ifndef struct_tag_gY1zYXXyNHJpvdqiHJr34G
#define struct_tag_gY1zYXXyNHJpvdqiHJr34G

struct tag_gY1zYXXyNHJpvdqiHJr34G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Pacema_T Hw;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
  real_T SampleTime;
};

#endif                                 /*struct_tag_gY1zYXXyNHJpvdqiHJr34G*/

#ifndef typedef_freedomk64f_DigitalRead_Pacem_T
#define typedef_freedomk64f_DigitalRead_Pacem_T

typedef struct tag_gY1zYXXyNHJpvdqiHJr34G freedomk64f_DigitalRead_Pacem_T;

#endif                               /*typedef_freedomk64f_DigitalRead_Pacem_T*/

#ifndef struct_tag_62aCTDKRGQaAsT8vVipI2D
#define struct_tag_62aCTDKRGQaAsT8vVipI2D

struct tag_62aCTDKRGQaAsT8vVipI2D
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Pacema_T Hw;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /*struct_tag_62aCTDKRGQaAsT8vVipI2D*/

#ifndef typedef_freedomk64f_DigitalWrite_Pace_T
#define typedef_freedomk64f_DigitalWrite_Pace_T

typedef struct tag_62aCTDKRGQaAsT8vVipI2D freedomk64f_DigitalWrite_Pace_T;

#endif                               /*typedef_freedomk64f_DigitalWrite_Pace_T*/

/* Parameters (default storage) */
typedef struct P_Pacemaker_OperatingModes_T_ P_Pacemaker_OperatingModes_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Pacemaker_OperatingMo_T RT_MODEL_Pacemaker_OperatingM_T;

#endif                        /* RTW_HEADER_Pacemaker_OperatingModes_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
