/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "MBD_Assignment"
   ARXML schema: "R20-11"
   File generated on: "13-Jul-2023 12:47:20"  */

#ifndef Rte_MBD_Assignment_h
#define Rte_MBD_Assignment_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_enablestate_userinputs_DataElement2 Rte_IRead_MBD_Assignment_enablestate_userinputs_DataElement2

SInt8 Rte_IRead_enablestate_userinputs_DataElement2(void);

#define Rte_IRead_enablestate_enginedata_DataElement1 Rte_IRead_MBD_Assignment_enablestate_enginedata_DataElement1

CurrentGear Rte_IRead_enablestate_enginedata_DataElement1(void);

#define Rte_IRead_enablestate_enginedata_DataElement2 Rte_IRead_MBD_Assignment_enablestate_enginedata_DataElement2

UInt32 Rte_IRead_enablestate_enginedata_DataElement2(void);

#define Rte_IRead_enablestate_prerequisites_DataElement1 Rte_IRead_MBD_Assignment_enablestate_prerequisites_DataElement1

Boolean Rte_IRead_enablestate_prerequisites_DataElement1(void);

#define Rte_IRead_enablestate_prerequisites_DataElement2 Rte_IRead_MBD_Assignment_enablestate_prerequisites_DataElement2

StandPos Rte_IRead_enablestate_prerequisites_DataElement2(void);

#define Rte_IRead_ignition_userinputs_DataElement1 Rte_IRead_MBD_Assignment_ignition_userinputs_DataElement1

Boolean Rte_IRead_ignition_userinputs_DataElement1(void);

#define Rte_IWrite_ignition_outputdata_DataElement1 Rte_IWrite_MBD_Assignment_ignition_outputdata_DataElement1

void Rte_IWrite_ignition_outputdata_DataElement1(Double u);

#define Rte_IWriteRef_ignition_outputdata_DataElement1 Rte_IWriteRef_MBD_Assignment_ignition_outputdata_DataElement1

Double* Rte_IWriteRef_ignition_outputdata_DataElement1(void);

#define Rte_IWrite_ignition_outputdata_DataElement2 Rte_IWrite_MBD_Assignment_ignition_outputdata_DataElement2

void Rte_IWrite_ignition_outputdata_DataElement2(Boolean u);

#define Rte_IWriteRef_ignition_outputdata_DataElement2 Rte_IWriteRef_MBD_Assignment_ignition_outputdata_DataElement2

Boolean* Rte_IWriteRef_ignition_outputdata_DataElement2(void);

/* IRV functions */
#define Rte_IrvIWrite_enablestate_startenable Rte_IrvIWrite_MBD_Assignment_enablestate_startenable

void Rte_IrvIWrite_enablestate_startenable(Boolean u);

#define Rte_IrvIRead_ignition_startenable Rte_IrvIRead_MBD_Assignment_ignition_startenable

Boolean Rte_IrvIRead_ignition_startenable(void);

/* Entry point functions */
extern FUNC(void, MBD_Assignment_CODE) enablestate(void);
extern FUNC(void, MBD_Assignment_CODE) ignition(void);
extern FUNC(void, MBD_Assignment_CODE) initialization(void);

#endif
