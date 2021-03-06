/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/
#ifndef EbModeDecisionSegments_h
#define EbModeDecisionSegments_h

#include "EbTypes.h"

/**************************************
 * Mode Decision Segments
 **************************************/
typedef struct
{
    EB_U64                                completionMask;
    EB_HANDLE                             writeLockMutex;
    
    EB_U32                                totalCount;
    EB_U32                                columnCount;
    EB_U32                                rowCount;
    
    EB_BOOL                               inProgress;
    EB_U32                                currentRowIdx;

} MdSegments_t;

/**************************************
 * Extern Function Declarations
 **************************************/
extern void ModeDecisionSegmentsCtor(
    MdSegments_t **contextDblPtr);

extern void ModeDecisionSegmentsDtor(
    MdSegments_t *contextPtr);

#endif // EbModeDecisionSegments_h