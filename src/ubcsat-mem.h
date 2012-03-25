/*

      ##  ##  #####    #####   $$$$$   $$$$   $$$$$$    
      ##  ##  ##  ##  ##      $$      $$  $$    $$      
      ##  ##  #####   ##       $$$$   $$$$$$    $$      
      ##  ##  ##  ##  ##          $$  $$  $$    $$      
       ####   #####    #####  $$$$$   $$  $$    $$      
  ======================================================
  SLS SAT Solver from The University of British Columbia
  ======================================================
  ...... Developed & Maintained by Dave Tompkins .......
  ------------------------------------------------------
  ...... consult legal.txt for legal information .......
  ------------------------------------------------------
  .... project website: http://ubcsat.dtompkins.com ....
  ------------------------------------------------------
  source repository: https://github.com/dtompkins/ubcsat
  ------------------------------------------------------
  ..... contact us at ubcsat [@] googlegroups.com ......
  ------------------------------------------------------

*/

#ifndef UBCSAT_MEM_H
#define UBCSAT_MEM_H

#include "ubcsat-types.h"

#ifdef __cplusplus 
namespace ubcsat {
#endif


void *AllocateRAM( size_t size );
void AdjustLastRAM( size_t size );
void PrintMemUsage();
void SetString(char **sNew, const char *sSrc);
void FreeRAM();

extern UINT32 iNumHeap;


#ifdef __cplusplus
}
#endif
#endif
