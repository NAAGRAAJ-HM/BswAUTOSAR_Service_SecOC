/******************************************************************************/
/* File   : SecOC.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgSecOC.hpp"
#include "SecOC_core.hpp"
#include "infSecOC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SECOC_AR_RELEASE_VERSION_MAJOR                                         4
#define SECOC_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SECOC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SECOC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SECOC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SECOC_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SecOC:
      public abstract_module
   ,  public class_SecOC_Functionality
{
   public:
      module_SecOC(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SECOC_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SECOC_CONFIG_DATA, SECOC_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SECOC_CODE) DeInitFunction           (void);
      FUNC(void, SECOC_CODE) MainFunction             (void);
      SECOC_CORE_FUNCTIONALITIES

      FUNC(void, SECOC_CODE) MainFunctionRouteSignals (void);
      FUNC(void, SECOC_CODE) MainFunctionRx           (void);
      FUNC(void, SECOC_CODE) MainFunctionTx           (void);
};

extern VAR(module_SecOC, SECOC_VAR) SecOC;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, SECOC_VAR, SECOC_CONST) gptrinfEcuMClient_SecOC = &SecOC;
CONSTP2VAR(infDcmClient,  SECOC_VAR, SECOC_CONST) gptrinfDcmClient_SecOC  = &SecOC;
CONSTP2VAR(infSchMClient, SECOC_VAR, SECOC_CONST) gptrinfSchMClient_SecOC = &SecOC;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SecOC, SECOC_VAR) SecOC(
   {
         SECOC_AR_RELEASE_VERSION_MAJOR
      ,  SECOC_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SECOC_CODE) module_SecOC::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, SECOC_CONFIG_DATA, SECOC_APPL_CONST) lptrCfgModule
){
#if(STD_ON == SecOC_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == SecOC_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == SecOC_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgSecOC;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == SecOC_InitCheck)
   }
#endif
}

FUNC(void, SECOC_CODE) module_SecOC::DeInitFunction(void){
#if(STD_ON == SecOC_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SecOC_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == SecOC_InitCheck)
   }
#endif
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunction(void){
#if(STD_ON == SecOC_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SecOC_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == SecOC_InitCheck)
   }
#endif
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRouteSignals(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRx(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionTx(void){
}

FUNC(void, SECOC_CODE) module_SecOC::IfTransmit(void){
}

FUNC(void, SECOC_CODE) module_SecOC::TpTransmit(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CancelReceive(void){
}

FUNC(void, SECOC_CODE) module_SecOC::IfCancelTransmit(void){
}

FUNC(void, SECOC_CODE) module_SecOC::TpCancelTransmit(void){
}

FUNC(void, SECOC_CODE) module_SecOC::ChangeParameter(void){
}

FUNC(void, SECOC_CODE) module_SecOC::AssociateKey(void){
}

FUNC(void, SECOC_CODE) module_SecOC::FreshnessValueRead(void){
}

FUNC(void, SECOC_CODE) module_SecOC::FreshnessValueWrite(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbIfRxIndication(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbTpRxIndication(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbIfTxConfirmation(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbTpTxConfirmation(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbTriggerTransmit(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbCopyRxData(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbCopyTxData(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CbStartOfReception(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CalloutGetRxFreshness(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CalloutGetRxFreshnessAuchData(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CalloutGetTxFreshness(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CalloutGetTxFreshnessTruncData(void){
}

FUNC(void, SECOC_CODE) module_SecOC::CalloutSPduTxConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

