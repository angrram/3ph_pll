/*
 * File: xil_interface.c
 *
 * SIL generated interface for code: "dsogi_pll_3ph"
 *
 */

#include <stddef.h>
#include "dsogi_pll_3ph.h"
#include "dsogi_pll_3ph_private.h"
#include "xil_interface.h"

/* Functions with a C call interface */
#ifdef __cplusplus

extern "C"
{

#endif

#include "xil_data_stream.h"
#ifdef __cplusplus

}

#endif

static XILIOData xil_fcnid0_task1_output_u[4];
static XILIOData xil_fcnid0_task1_y[5];
static XILIOData xil_fcnid0_init_y[3];

/* In-the-Loop Interface functions - see xil_interface.h */
XIL_INTERFACE_ERROR_CODE xilProcessParams(uint32_T xilFcnId)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetDataTypeInfo(void)
{
  {
    /* send response id code */
    MemUnit_T memUnitData = XIL_RESPONSE_TYPE_SIZE;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* send type id */
    memUnitData = 0;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* PIL_DOUBLE_SIZE should only be already defined for MathWorks testing */
#ifndef PIL_DOUBLE_SIZE
#define PIL_DOUBLE_SIZE                sizeof(double)
#endif

    /* send size in bytes */
    memUnitData = (MemUnit_T) PIL_DOUBLE_SIZE;

#ifndef HOST_WORD_ADDRESSABLE_TESTING

    /* convert MemUnits to bytes */
    memUnitData *= MEM_UNIT_BYTES;

#endif

    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilInitialize(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  {
  }

  /* initialize output storage owned by In-the-Loop */
  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    dsogi_pll_3ph_initialize();
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilPause(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  if (xilFcnId == 0) {
    /* Nothing to do */
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }                                    /* if */

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilSystemInitialize(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    /* No Function to Call */
    /* No Function to Call */
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilSystemReset(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    /* No Function to Call */
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilGetHostToTargetData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  *xilIOData = 0;

  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }

  switch (xilCommandType) {
   case XIL_OUTPUT_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_U.Input);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_U.Input1);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_U.Input2);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 0;
        xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      *xilIOData = &xil_fcnid0_task1_output_u[0];
      break;
    }

   case XIL_DISABLE_COMMAND:
    {
      errorCode = xilGetHostToTargetData(xilFcnId, XIL_OUTPUT_COMMAND,
        xilCommandIdx, xilIOData);
      return errorCode;
    }

   default:
    errorCode = XIL_INTERFACE_UNKNOWN_TID;
    break;
  }

  UNUSED_PARAMETER(xilCommandIdx);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostPreData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  *xilIOData = 0;
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }                                    /* if */

  errorCode = XIL_INTERFACE_UNKNOWN_TID;
  UNUSED_PARAMETER(xilCommandType);
  UNUSED_PARAMETER(xilCommandIdx);
  UNUSED_PARAMETER(responseId);
  UNUSED_PARAMETER(serverFcnId);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilOutput(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  switch (xilTID) {
   case 1:
    Input3();
    break;

   default:
    return XIL_INTERFACE_UNKNOWN_TID;
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilUpdate(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  /* No Update Function */
  UNUSED_PARAMETER(xilTID);
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  *xilIOData = 0;
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }

  switch (xilCommandType) {
   case XIL_INITIALIZE_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_Y.angle);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_Y.angle1);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        xil_fcnid0_init_y[tableIdx].memUnitLength = 0;
        xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      {
        if (xilWriteData(&responseId, sizeof(responseId)) !=
            XIL_DATA_STREAM_SUCCESS) {
          return XIL_INTERFACE_COMMS_FAILURE;
        }                              /* if */

        if (responseId == XIL_RESPONSE_CS_REQUEST_SERVICE) {
          if (xilWriteData((MemUnit_T *) &serverFcnId, sizeof(serverFcnId)) !=
              XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
          }                            /* if */
        }                              /* if */
      }

      *xilIOData = &xil_fcnid0_init_y[0];
      break;
    }

   case XIL_OUTPUT_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_Y.angle);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(dsogi_pll_3ph_Y.angle1);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          /* Logging address access:  */
          void * dataAddress = (void*)(&dsogi_pll_3ph_Y.angle1);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          /* Logging address access: angle */
          void * dataAddress = (void*)(&dsogi_pll_3ph_Y.angle);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        xil_fcnid0_task1_y[tableIdx].memUnitLength = 0;
        xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      {
        if (xilWriteData(&responseId, sizeof(responseId)) !=
            XIL_DATA_STREAM_SUCCESS) {
          return XIL_INTERFACE_COMMS_FAILURE;
        }                              /* if */

        if (responseId == XIL_RESPONSE_CS_REQUEST_SERVICE) {
          if (xilWriteData((MemUnit_T *) &serverFcnId, sizeof(serverFcnId)) !=
              XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
          }                            /* if */
        }                              /* if */
      }

      *xilIOData = &xil_fcnid0_task1_y[0];
      break;
    }

   case XIL_DISABLE_COMMAND:
    {
      MemUnit_T lResponseId = XIL_RESPONSE_OUTPUT_DATA;
      uint32_T lServerFcnId = 0;
      errorCode = xilGetTargetToHostData(xilFcnId, XIL_OUTPUT_COMMAND,
        xilCommandIdx, xilIOData, lResponseId, lServerFcnId);
      return errorCode;
    }

   default:
    errorCode = XIL_INTERFACE_UNKNOWN_TID;
    break;
  }

  UNUSED_PARAMETER(xilCommandIdx);
  UNUSED_PARAMETER(responseId);
  UNUSED_PARAMETER(serverFcnId);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilTerminate(uint32_T xilFcnId)
{
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }                                    /* if */

  /* Invoke any terminate Function */
  dsogi_pll_3ph_terminate();

  /* Free Opaque Region Based Data */
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilInitTargetData()
{
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilEnable(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  UNUSED_PARAMETER(xilTID);

  /* No Enable Function - this function should never be called */
  return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilDisable(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  UNUSED_PARAMETER(xilTID);

  /* No Disable Function - this function should never be called */
  return XIL_INTERFACE_UNKNOWN_TID;
}
