//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
// Generated via jshost -GenerateValidPointersMapHeader
// Target platform: 64bit - amd64 & arm64
#if USE_STATIC_VPM

const ushort HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::validPointersBuffer[HeapConstants::BucketCount][HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::rowSize] =
{
};
const BVUnit HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::invalidBitsData[HeapConstants::BucketCount][SmallHeapBlockT<SmallAllocationBlockAttributes>::SmallHeapBlockBitVector::wordCount] = {
};
// The following is used to construct the InvalidBitsTable statically without forcing BVStatic to be an aggregate
const HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::InvalidBitsTable * const HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::invalidBitsBuffers =
    reinterpret_cast<const HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::InvalidBitsTable *>(&HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::invalidBitsData);
const SmallHeapBlockT<SmallAllocationBlockAttributes>::BlockInfo  HeapInfo::ValidPointersMap<SmallAllocationBlockAttributes>::blockInfoBuffer[SmallAllocationBlockAttributes::BucketCount][SmallAllocationBlockAttributes::PageCount] = {
};
const ushort HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::validPointersBuffer[MediumAllocationBlockAttributes::BucketCount][HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::rowSize] =
{
};
const BVUnit HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::invalidBitsData[MediumAllocationBlockAttributes::BucketCount][SmallHeapBlockT<MediumAllocationBlockAttributes>::SmallHeapBlockBitVector::wordCount] = {
};
// The following is used to construct the InvalidBitsTable statically without forcing BVStatic to be an aggregate
const HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::InvalidBitsTable * const HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::invalidBitsBuffers =
    reinterpret_cast<const HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::InvalidBitsTable *>(&HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::invalidBitsData);
const SmallHeapBlockT<MediumAllocationBlockAttributes>::BlockInfo  HeapInfo::ValidPointersMap<MediumAllocationBlockAttributes>::blockInfoBuffer[MediumAllocationBlockAttributes::BucketCount][MediumAllocationBlockAttributes::PageCount] = {
};
#endif // USE_STATIC_VPM
