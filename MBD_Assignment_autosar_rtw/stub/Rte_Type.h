/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "MBD_Assignment"
   ARXML schema: "R20-11"
   File generated on: "13-Jul-2023 12:47:20"  */

#ifndef Rte_Type_h
#define Rte_Type_h
#include "rtwtypes.h"
#include "Std_Types.h"

/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
typedef boolean Boolean;
typedef float64 Double;
typedef sint8 SInt8;
typedef uint32 UInt32;

/* AUTOSAR Enumeration Types */
typedef sint32 CurrentGear;

#ifndef neutral
#define neutral                        (0)
#endif

#ifndef first
#define first                          (1)
#endif

#ifndef second
#define second                         (2)
#endif

#ifndef third
#define third                          (3)
#endif

#ifndef fourth
#define fourth                         (4)
#endif

#ifndef fifth
#define fifth                          (5)
#endif

#ifndef sixth
#define sixth                          (6)
#endif

typedef sint32 StandPos;

#ifndef stowed
#define stowed                         (0)
#endif

#ifndef unstowed
#define unstowed                       (1)
#endif

typedef void* Rte_Instance;

#endif
