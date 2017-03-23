//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: task2simulink.h
//
// Code generated for Simulink model 'task2simulink'.
//
// Model version                  : 1.65
// Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
// C/C++ source code generated on : Wed Mar 15 18:08:02 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_task2simulink_h_
#define RTW_HEADER_task2simulink_h_
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef task2simulink_COMMON_INCLUDES_
# define task2simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // task2simulink_COMMON_INCLUDES_

#include "task2simulink_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_task2simulink_sensor_msgs_LaserScan In1;// '<S7>/In1'
  SL_Bus_task2simulink_sensor_msgs_LaserScan varargout_2;
  SL_Bus_task2simulink_geometry_msgs_PolygonStamped BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_task2simulink_rosgraph_msgs_Clock In1_g;// '<S6>/In1'
} B_task2simulink_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S4>/SourceBlock'
  void *SourceBlock_PWORK_f;           // '<S3>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  uint32_T seq;                        // '<Root>/box_detection1'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
  robotics_slros_internal_blo_h_T obj_n;// '<S4>/SourceBlock'
  robotics_slros_internal_blo_h_T obj_o;// '<S3>/SourceBlock'
} DW_task2simulink_T;

// Parameters (auto storage)
struct P_task2simulink_T_ {
  SL_Bus_task2simulink_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S7>/Out1'

  SL_Bus_task2simulink_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S4>/Constant'

  SL_Bus_task2simulink_geometry_msgs_PolygonStamped Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                     //  Referenced by: '<S1>/Constant'

  SL_Bus_task2simulink_rosgraph_msgs_Clock Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                     //  Referenced by: '<S6>/Out1'

  SL_Bus_task2simulink_rosgraph_msgs_Clock Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                            //  Referenced by: '<S3>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_task2simulink_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_task2simulink_T task2simulink_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_task2simulink_T task2simulink_B;

// Block states (auto storage)
extern DW_task2simulink_T task2simulink_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void task2simulink_initialize(void);
  extern void task2simulink_step(void);
  extern void task2simulink_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_task2simulink_T *const task2simulink_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'task2simulink'
//  '<S1>'   : 'task2simulink/Blank Message'
//  '<S2>'   : 'task2simulink/Publish'
//  '<S3>'   : 'task2simulink/Subscribe'
//  '<S4>'   : 'task2simulink/Subscribe1'
//  '<S5>'   : 'task2simulink/box_detection1'
//  '<S6>'   : 'task2simulink/Subscribe/Enabled Subsystem'
//  '<S7>'   : 'task2simulink/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_task2simulink_h_

//
// File trailer for generated code.
//
// [EOF]
//
