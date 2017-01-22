/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Important: This file is automatically generated by the utility gen_code.
 *            Any modification will be lost on next execution of gen_code.
 *
 * The goal of this file is to provide the functionality TA_SetRetCodeInfo.
 *
 * This function is a convenient way for the user to translate a TA_RetCode into
 * a human readable string.
 */
#include <ta_common.h>

typedef struct 
{
   TA_RetCode retCode;
   const char * const enumStr;
   const char * const infoStr;
} TA_InternalRetCodeInfo;

static TA_InternalRetCodeInfo retCodeInfoTable[] = {
         {(TA_RetCode)0,"TA_SUCCESS","No error"},
         {(TA_RetCode)1,"TA_LIB_NOT_INITIALIZE","TA_Initialize was not sucessfully called"},
         {(TA_RetCode)2,"TA_BAD_PARAM","A parameter is out of range"},
         {(TA_RetCode)3,"TA_ALLOC_ERR","Possibly out-of-memory"},
         {(TA_RetCode)4,"TA_GROUP_NOT_FOUND","No Info"},
         {(TA_RetCode)5,"TA_FUNC_NOT_FOUND","No Info"},
         {(TA_RetCode)6,"TA_INVALID_HANDLE","No Info"},
         {(TA_RetCode)7,"TA_INVALID_PARAM_HOLDER","No Info"},
         {(TA_RetCode)8,"TA_INVALID_PARAM_HOLDER_TYPE","No Info"},
         {(TA_RetCode)9,"TA_INVALID_PARAM_FUNCTION","No Info"},
         {(TA_RetCode)10,"TA_INPUT_NOT_ALL_INITIALIZE","No Info"},
         {(TA_RetCode)11,"TA_OUTPUT_NOT_ALL_INITIALIZE","No Info"},
         {(TA_RetCode)12,"TA_OUT_OF_RANGE_START_INDEX","No Info"},
         {(TA_RetCode)13,"TA_OUT_OF_RANGE_END_INDEX","No Info"},
         {(TA_RetCode)14,"TA_INVALID_LIST_TYPE","No Info"},
         {(TA_RetCode)15,"TA_BAD_OBJECT","No Info"},
         {(TA_RetCode)16,"TA_NOT_SUPPORTED","No Info"},
         {(TA_RetCode)5000,"TA_INTERNAL_ERROR","No Info"},
         {(TA_RetCode)0xFFFF,"TA_UNKNOWN_ERR","Unknown Error"}
};

#define NB_RET_CODE_INFO (sizeof(retCodeInfoTable)/sizeof(TA_InternalRetCodeInfo))

void TA_SetRetCodeInfo( TA_RetCode theRetCode, TA_RetCodeInfo *retCodeInfo )
{
   unsigned int i;
   
   /* Trap internal error code */
   if( (theRetCode >= 5000) && (theRetCode <= 5999) )
   {
      retCodeInfo->enumStr = "TA_INTERNAL_ERROR";
      retCodeInfo->infoStr = "Unexpected Internal Error - Contact TA-Lib.org";
      return;
   }
   
   /* Check among all the error code defined in ta_common.h */
   for( i=0; i < (NB_RET_CODE_INFO-1); i++ )
   {
      if( theRetCode == retCodeInfoTable[i].retCode )
      {
         /* Error code found. */
         retCodeInfo->enumStr = retCodeInfoTable[i].enumStr;
         retCodeInfo->infoStr = retCodeInfoTable[i].infoStr;
         return;
      }
   }

   /* Error code not found. */

   /* "TA_UNKNOWN_ERR" is ALWAYS the last entry in the table. */
   retCodeInfo->enumStr = retCodeInfoTable[i].enumStr;
   retCodeInfo->infoStr = retCodeInfoTable[i].infoStr;
}

/***************/
/* End of File */
/***************/
