/*****************************************************/
/* File   : SecOC.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "SecOC.h"

#include "SecOC_EcuM.h"
#include "SecOCRx_SchM.h"
#include "SecOCTx_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_SecOC_EcuM SecOC_EcuM;
class_EcuM_Client *EcuM_Client_ptr_SecOC = &SecOC_EcuM;
class_SecOCRx_SchM SecOCRx_SchM;
class_SchM_Client *SchM_Client_ptr_SecOCRx = &SecOCRx_SchM;
class_SecOCTx_SchM SecOCTx_SchM;
class_SchM_Client *SchM_Client_ptr_SecOCTx = &SecOCTx_SchM;
class_SecOC SecOC;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SECOC_CODE) class_SecOC_EcuM::InitFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOC_EcuM::DeInitFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOCRx_SchM::MainFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOCTx_SchM::MainFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOC::GetVersionInfo(void){
}

FUNC(void, SECOC_CODE) class_SecOC::IfTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::TpTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CancelReceive(void){
}

FUNC(void, SECOC_CODE) class_SecOC::IfCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::TpCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::ChangeParameter(void){
}

FUNC(void, SECOC_CODE) class_SecOC::AssociateKey(void){
}

FUNC(void, SECOC_CODE) class_SecOC::FreshnessValueRead(void){
}

FUNC(void, SECOC_CODE) class_SecOC::FreshnessValueWrite(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbIfRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTpRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbIfTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTpTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTriggerTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbCopyRxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbCopyTxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbStartOfReception(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetRxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetRxFreshnessAuchData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetTxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetTxFreshnessTruncData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutSPduTxConfirmation(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

