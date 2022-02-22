#pragma once
/*****************************************************/
/* File   : SecOC_SchM.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_SecOC.h"

#include "SchM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_SecOC_SchM : public interface_SchM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, SECOC_CODE) MainFunction   (void);
      FUNC(void, SECOC_CODE) MainFunctionRx (void);
      FUNC(void, SECOC_CODE) MainFunctionTx (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_SecOC_SchM *SchM_Client_ptr_SecOC;

/*****************************************************/
/* EOF                                               */
/*****************************************************/
