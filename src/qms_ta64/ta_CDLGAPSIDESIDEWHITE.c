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

/* List of contributors:
 *
 *  Initial  Name/description
 *  ---
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  ---
 *  020605 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlGapSideSideWhiteLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlGapSideSideWhiteLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLGAPSIDESIDEWHITE_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return max( TA_CANDLEAVGPERIOD(Near), TA_CANDLEAVGPERIOD(Equal) ) + 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLGAPSIDESIDEWHITE - Up/Down-gap side-by-side white lines
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlGapSideSideWhite( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     SubArray<double>^ inOpen,
/* Generated */                                                     SubArray<double>^ inHigh,
/* Generated */                                                     SubArray<double>^ inLow,
/* Generated */                                                     SubArray<double>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlGapSideSideWhite( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     cli::array<double>^ inOpen,
/* Generated */                                                     cli::array<double>^ inHigh,
/* Generated */                                                     cli::array<double>^ inLow,
/* Generated */                                                     cli::array<double>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlGapSideSideWhite( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     double       inOpen[],
/* Generated */                                     double       inHigh[],
/* Generated */                                     double       inLow[],
/* Generated */                                     double       inClose[],
/* Generated */                                     MInteger     outBegIdx,
/* Generated */                                     MInteger     outNBElement,
/* Generated */                                     int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLGAPSIDESIDEWHITE( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                                          const double inOpen[],
/* Generated */                                                          const double inHigh[],
/* Generated */                                                          const double inLow[],
/* Generated */                                                          const double inClose[],
/* Generated */                                                          int          *outBegIdx,
/* Generated */                                                          int          *outNBElement,
/* Generated */                                                          int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double NearPeriodTotal, EqualPeriodTotal;
    int i, outIdx, NearTrailingIdx, EqualTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLGAPSIDESIDEWHITE)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   NearPeriodTotal = 0;
   EqualPeriodTotal = 0;
   NearTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Near);
   EqualTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Equal);
   
   i = NearTrailingIdx;
   while( i < startIdx ) {
        NearPeriodTotal += TA_CANDLERANGE( Near, i-1 );
        i++;
   }
   i = EqualTrailingIdx;
   while( i < startIdx ) {
        EqualPeriodTotal += TA_CANDLERANGE( Equal, i-1 );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - upside or downside gap (between the bodies)
    * - first candle after the window: white candlestick
    * - second candle after the window: white candlestick with similar size (near the same) and about the same 
    *   open (equal) of the previous candle
    * - the second candle does not close the window
    * The meaning of "near" and "equal" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100) or negative (-1 to -100): the user should consider that upside 
    * or downside gap side-by-side white lines is significant when it appears in a trend, while this function 
    * does not consider the trend
    */
   outIdx = 0;
   do
   {
        if( 
            ( // upside or downside gap between the 1st candle and both the next 2 candles
              ( TA_REALBODYGAPUP(i-1,i-2) && TA_REALBODYGAPUP(i,i-2) )
              ||
              ( TA_REALBODYGAPDOWN(i-1,i-2) && TA_REALBODYGAPDOWN(i,i-2) )
            ) &&
            TA_CANDLECOLOR(i-1) == 1 &&                                                                 // 2nd: white
            TA_CANDLECOLOR(i) == 1 &&                                                                   // 3rd: white
            TA_REALBODY(i) >= TA_REALBODY(i-1) - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-1 ) &&   // same size 2 and 3
            TA_REALBODY(i) <= TA_REALBODY(i-1) + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-1 ) &&
            inOpen[i] >= inOpen[i-1] - TA_CANDLEAVERAGE( Equal, EqualPeriodTotal, i-1 ) &&           // same open 2 and 3
            inOpen[i] <= inOpen[i-1] + TA_CANDLEAVERAGE( Equal, EqualPeriodTotal, i-1 )
          )
            outInteger[outIdx++] = ( TA_REALBODYGAPUP(i-1,i-2) ? 100 : -100 );
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        NearPeriodTotal += TA_CANDLERANGE( Near, i-1 ) - TA_CANDLERANGE( Near, NearTrailingIdx-1 );
        EqualPeriodTotal += TA_CANDLERANGE( Equal, i-1 ) - TA_CANDLERANGE( Equal, EqualTrailingIdx-1 );
        i++; 
        NearTrailingIdx++;
        EqualTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlGapSideSideWhite( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     SubArray<float>^ inOpen,
/* Generated */                                                     SubArray<float>^ inHigh,
/* Generated */                                                     SubArray<float>^ inLow,
/* Generated */                                                     SubArray<float>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlGapSideSideWhite( int    startIdx,
/* Generated */                                                     int    endIdx,
/* Generated */                                                     cli::array<float>^ inOpen,
/* Generated */                                                     cli::array<float>^ inHigh,
/* Generated */                                                     cli::array<float>^ inLow,
/* Generated */                                                     cli::array<float>^ inClose,
/* Generated */                                                     [Out]int%    outBegIdx,
/* Generated */                                                     [Out]int%    outNBElement,
/* Generated */                                                     cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlGapSideSideWhite( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     float        inOpen[],
/* Generated */                                     float        inHigh[],
/* Generated */                                     float        inLow[],
/* Generated */                                     float        inClose[],
/* Generated */                                     MInteger     outBegIdx,
/* Generated */                                     MInteger     outNBElement,
/* Generated */                                     int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLGAPSIDESIDEWHITE( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      const float  inOpen[],
/* Generated */                                      const float  inHigh[],
/* Generated */                                      const float  inLow[],
/* Generated */                                      const float  inClose[],
/* Generated */                                      int          *outBegIdx,
/* Generated */                                      int          *outNBElement,
/* Generated */                                      int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double NearPeriodTotal, EqualPeriodTotal;
/* Generated */     int i, outIdx, NearTrailingIdx, EqualTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLGAPSIDESIDEWHITE)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    NearPeriodTotal = 0;
/* Generated */    EqualPeriodTotal = 0;
/* Generated */    NearTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Near);
/* Generated */    EqualTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Equal);
/* Generated */    i = NearTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         NearPeriodTotal += TA_CANDLERANGE( Near, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = EqualTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         EqualPeriodTotal += TA_CANDLERANGE( Equal, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( 
/* Generated */             ( // upside or downside gap between the 1st candle and both the next 2 candles
/* Generated */               ( TA_REALBODYGAPUP(i-1,i-2) && TA_REALBODYGAPUP(i,i-2) )
/* Generated */               ||
/* Generated */               ( TA_REALBODYGAPDOWN(i-1,i-2) && TA_REALBODYGAPDOWN(i,i-2) )
/* Generated */             ) &&
/* Generated */             TA_CANDLECOLOR(i-1) == 1 &&                                                                 // 2nd: white
/* Generated */             TA_CANDLECOLOR(i) == 1 &&                                                                   // 3rd: white
/* Generated */             TA_REALBODY(i) >= TA_REALBODY(i-1) - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-1 ) &&   // same size 2 and 3
/* Generated */             TA_REALBODY(i) <= TA_REALBODY(i-1) + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-1 ) &&
/* Generated */             inOpen[i] >= inOpen[i-1] - TA_CANDLEAVERAGE( Equal, EqualPeriodTotal, i-1 ) &&           // same open 2 and 3
/* Generated */             inOpen[i] <= inOpen[i-1] + TA_CANDLEAVERAGE( Equal, EqualPeriodTotal, i-1 )
/* Generated */           )
/* Generated */             outInteger[outIdx++] = ( TA_REALBODYGAPUP(i-1,i-2) ? 100 : -100 );
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         NearPeriodTotal += TA_CANDLERANGE( Near, i-1 ) - TA_CANDLERANGE( Near, NearTrailingIdx-1 );
/* Generated */         EqualPeriodTotal += TA_CANDLERANGE( Equal, i-1 ) - TA_CANDLERANGE( Equal, EqualTrailingIdx-1 );
/* Generated */         i++; 
/* Generated */         NearTrailingIdx++;
/* Generated */         EqualTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

