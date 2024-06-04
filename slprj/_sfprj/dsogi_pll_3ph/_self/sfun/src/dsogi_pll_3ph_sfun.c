/* Include files */

#include "dsogi_pll_3ph_sfun.h"
#include "c1_dsogi_pll_3ph.h"
#include "c2_dsogi_pll_3ph.h"
#include "c10_dsogi_pll_3ph.h"
#include "c17_dsogi_pll_3ph.h"
#include "c18_dsogi_pll_3ph.h"
#include "c19_dsogi_pll_3ph.h"
#include "c20_dsogi_pll_3ph.h"
#include "c21_dsogi_pll_3ph.h"
#include "c22_dsogi_pll_3ph.h"
#include "c23_dsogi_pll_3ph.h"
#include "c24_dsogi_pll_3ph.h"
#include "c25_dsogi_pll_3ph.h"
#include "c26_dsogi_pll_3ph.h"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void dsogi_pll_3ph_initializer(void)
{
}

void dsogi_pll_3ph_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_dsogi_pll_3ph_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==25) {
    c25_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==26) {
    c26_dsogi_pll_3ph_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_dsogi_pll_3ph_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3464292551U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(7643941U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3098045400U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2166275517U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c1_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c2_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c10_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c17_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c18_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c19_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c20_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c21_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c22_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 23:
        {
          extern void sf_c23_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c23_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c24_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 25:
        {
          extern void sf_c25_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c25_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       case 26:
        {
          extern void sf_c26_dsogi_pll_3ph_get_check_sum(mxArray *plhs[]);
          sf_c26_dsogi_pll_3ph_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211484093U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(405444128U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1542987301U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(616093678U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(801337900U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4031975218U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2665590648U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2463815596U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_dsogi_pll_3ph_get_eml_resolved_functions_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(instanceChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern const mxArray
            *sf_c1_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c1_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 2:
      {
        if (strcmp(instanceChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern const mxArray
            *sf_c2_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 10:
      {
        if (strcmp(instanceChksum, "sThyxhwvWPbWNQVHyO5rVaF") == 0) {
          extern const mxArray
            *sf_c10_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c10_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 17:
      {
        if (strcmp(instanceChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern const mxArray
            *sf_c17_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c17_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 18:
      {
        if (strcmp(instanceChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern const mxArray
            *sf_c18_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c18_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 19:
      {
        if (strcmp(instanceChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern const mxArray
            *sf_c19_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c19_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 20:
      {
        if (strcmp(instanceChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern const mxArray
            *sf_c20_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c20_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 21:
      {
        if (strcmp(instanceChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern const mxArray
            *sf_c21_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c21_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 22:
      {
        if (strcmp(instanceChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern const mxArray
            *sf_c22_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c22_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 23:
      {
        if (strcmp(instanceChksum, "s9v1EmOXQuy9mfH1NU06NIE") == 0) {
          extern const mxArray
            *sf_c23_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c23_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 24:
      {
        if (strcmp(instanceChksum, "sT855z1ZyIs3fiRAIDjjHQE") == 0) {
          extern const mxArray
            *sf_c24_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c24_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 25:
      {
        if (strcmp(instanceChksum, "skGEY06fXlFnapgL0QqkUID") == 0) {
          extern const mxArray
            *sf_c25_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c25_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 26:
      {
        if (strcmp(instanceChksum, "sWtUC374OiNNEius16XhAv") == 0) {
          extern const mxArray
            *sf_c26_dsogi_pll_3ph_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c26_dsogi_pll_3ph_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_dsogi_pll_3ph_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c1_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c1_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c2_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c2_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sThyxhwvWPbWNQVHyO5rVaF") == 0) {
          extern mxArray *sf_c10_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c10_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c17_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c17_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c18_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c18_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c19_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c19_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c20_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c20_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c21_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c21_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c22_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c22_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "s9v1EmOXQuy9mfH1NU06NIE") == 0) {
          extern mxArray *sf_c23_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c23_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sT855z1ZyIs3fiRAIDjjHQE") == 0) {
          extern mxArray *sf_c24_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c24_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 25:
      {
        if (strcmp(tpChksum, "skGEY06fXlFnapgL0QqkUID") == 0) {
          extern mxArray *sf_c25_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c25_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "sWtUC374OiNNEius16XhAv") == 0) {
          extern mxArray *sf_c26_dsogi_pll_3ph_third_party_uses_info(void);
          plhs[0] = sf_c26_dsogi_pll_3ph_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dsogi_pll_3ph_jit_fallback_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c1_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c1_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c2_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c2_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sThyxhwvWPbWNQVHyO5rVaF") == 0) {
          extern mxArray *sf_c10_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c10_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c17_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c17_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c18_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c18_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c19_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c19_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c20_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c20_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c21_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c21_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c22_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c22_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "s9v1EmOXQuy9mfH1NU06NIE") == 0) {
          extern mxArray *sf_c23_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c23_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sT855z1ZyIs3fiRAIDjjHQE") == 0) {
          extern mxArray *sf_c24_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c24_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 25:
      {
        if (strcmp(tpChksum, "skGEY06fXlFnapgL0QqkUID") == 0) {
          extern mxArray *sf_c25_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c25_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "sWtUC374OiNNEius16XhAv") == 0) {
          extern mxArray *sf_c26_dsogi_pll_3ph_jit_fallback_info(void);
          plhs[0] = sf_c26_dsogi_pll_3ph_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dsogi_pll_3ph_get_post_codegen_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          const char *sf_c1_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c1_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          const char *sf_c2_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c2_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sThyxhwvWPbWNQVHyO5rVaF") == 0) {
          const char *sf_c10_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c10_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          const char *sf_c17_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c17_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          const char *sf_c18_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c18_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          const char *sf_c19_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c19_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          const char *sf_c20_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c20_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          const char *sf_c21_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c21_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          const char *sf_c22_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c22_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "s9v1EmOXQuy9mfH1NU06NIE") == 0) {
          const char *sf_c23_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c23_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sT855z1ZyIs3fiRAIDjjHQE") == 0) {
          const char *sf_c24_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c24_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 25:
      {
        if (strcmp(tpChksum, "skGEY06fXlFnapgL0QqkUID") == 0) {
          const char *sf_c25_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c25_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "sWtUC374OiNNEius16XhAv") == 0) {
          const char *sf_c26_dsogi_pll_3ph_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c26_dsogi_pll_3ph_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_dsogi_pll_3ph_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c1_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sWXESLLNAGkCvPPROZtYiBB") == 0) {
          extern mxArray *sf_c2_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sThyxhwvWPbWNQVHyO5rVaF") == 0) {
          extern mxArray *sf_c10_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c10_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c17_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c17_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c18_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c18_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "su4OXMJlU3BlFOe9WJLTAvG") == 0) {
          extern mxArray *sf_c19_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c19_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sp2UtPyDFWO34oXowIos8PB") == 0) {
          extern mxArray *sf_c20_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c20_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c21_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c21_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "smRes4pCJSih7Y3rw6EiNnG") == 0) {
          extern mxArray *sf_c22_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c22_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "s9v1EmOXQuy9mfH1NU06NIE") == 0) {
          extern mxArray *sf_c23_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c23_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sT855z1ZyIs3fiRAIDjjHQE") == 0) {
          extern mxArray *sf_c24_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c24_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 25:
      {
        if (strcmp(tpChksum, "skGEY06fXlFnapgL0QqkUID") == 0) {
          extern mxArray *sf_c25_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c25_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "sWtUC374OiNNEius16XhAv") == 0) {
          extern mxArray *sf_c26_dsogi_pll_3ph_updateBuildInfo_args_info(void);
          plhs[0] = sf_c26_dsogi_pll_3ph_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void dsogi_pll_3ph_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_dsogi_pll_3ph_optimization_info(void);
mxArray* load_dsogi_pll_3ph_optimization_info(boolean_T isRtwGen, boolean_T
  isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_dsogi_pll_3ph_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("dsogi_pll_3ph",
      "dsogi_pll_3ph");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_dsogi_pll_3ph_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
