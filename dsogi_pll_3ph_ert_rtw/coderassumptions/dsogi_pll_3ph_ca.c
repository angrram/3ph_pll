/*
 * File: dsogi_pll_3ph_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "dsogi_pll_3ph_ca.h"

CA_HWImpl_TestResults CA_dsogi_pll_3ph_HWRes;
CA_PWS_TestResults CA_dsogi_pll_3ph_PWSRes;
const CA_HWImpl CA_dsogi_pll_3ph_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  64,                                  /* BitPerPointer */
  64,                                  /* BitPerSizeT */
  64,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "Intel->x86-64 (Windows64)",         /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

CA_HWImpl CA_dsogi_pll_3ph_ActHW = {
  0,                                   /* BitPerChar */
  0,                                   /* BitPerShort */
  0,                                   /* BitPerInt */
  0,                                   /* BitPerLong */
  0,                                   /* BitPerLongLong */
  0,                                   /* BitPerFloat */
  0,                                   /* BitPerDouble */
  0,                                   /* BitPerPointer */
  0,                                   /* BitPerSizeT */
  0,                                   /* BitPerPtrDiffT */
  CA_UNSPECIFIED,                      /* Endianess */
  CA_UNDEFINED,                        /* IntDivRoundTo */
  0,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "",                                  /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

void dsogi_pll_3ph_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_dsogi_pll_3ph_ActHW, &CA_dsogi_pll_3ph_ExpHW,
    &CA_dsogi_pll_3ph_PWSRes);
  caVerifyHWImpl(&CA_dsogi_pll_3ph_ActHW, &CA_dsogi_pll_3ph_ExpHW,
                 &CA_dsogi_pll_3ph_HWRes);
}
