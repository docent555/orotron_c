/*
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "orotron.h"
#include "orotron_emxAPI.h"
#include "orotron_terminate.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static double argInit_real_T(void);
static void main_orotron(void);

/* Function Definitions */
static double argInit_real_T(double Ne, double Lz, double Tend, double Delta, double Ic, double dz, double dt, double tol)
{
  return 0.0;
}

static void main_orotron(double Ne, double Lz, double Tend, double Delta, double Ic, double dz, double dt, double tol)
{
  emxArray_real_T *OUTBvsZ;
  emxArray_real_T *OUTBvsT;
  emxArray_real_T *OUTJvsZ;
  emxArray_real_T *OUTJvsT;
  emxArray_real_T *OUTZAxis;
  emxArray_real_T *OUTTAxis;
  emxInitArray_real_T(&OUTBvsZ, 2);
  emxInitArray_real_T(&OUTBvsT, 2);
  emxInitArray_real_T(&OUTJvsZ, 2);
  emxInitArray_real_T(&OUTJvsT, 2);
  emxInitArray_real_T(&OUTZAxis, 1);
  emxInitArray_real_T(&OUTTAxis, 1);  

  /* Call the entry-point 'orotron'. */
  orotron(Ne, Lz, Tend, Delta, Ic, dz, dt, tol,
          OUTBvsZ, OUTBvsT, OUTJvsZ, OUTJvsT, OUTZAxis, OUTTAxis);
  emxDestroyArray_real_T(OUTTAxis);
  emxDestroyArray_real_T(OUTZAxis);
  emxDestroyArray_real_T(OUTJvsT);
  emxDestroyArray_real_T(OUTJvsZ);
  emxDestroyArray_real_T(OUTBvsT);
  emxDestroyArray_real_T(OUTBvsZ);
}

int main(int argc, const char * const argv[])
{
  double Ne, Lz, Tend, Delta, Ic, dz, dt, tol;
  
  if (argc != 9) {
      printf("Expected 8 arguments: Ne, Lz, Tend, Delta, Ic, dz, dt, tol\n");
      exit(-1);
}

    Ne = atof(argv[1]);
    Lz = atof(argv[2]);
    Tend = atof(argv[3]);
    Delta = atof(argv[4]);
    Ic = atof(argv[5]);
    dz = atof(argv[6]);
    dt = atof(argv[7]);
    tol = atof(argv[8]);

  /* The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_orotron(Ne, Lz, Tend, Delta, Ic, dz, dt, tol);

  /* Terminate the application.
     You do not need to do this more than one time. */
  orotron_terminate();
  return 0;
}

/* End of code generation (main.c) */
