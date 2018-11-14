#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _rmdal0_rmdal0();

static const R_CallMethodDef CallEntries[] = {
    {"_rmdal0_rmdal0", (DL_FUNC) &_rmdal0_rmdal0, 0},
    {NULL, NULL, 0}
};

void R_init_rmdal0(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
