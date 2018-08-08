/*
 * MATLAB Compiler: 2.1
 * Date: Wed Nov 01 12:30:43 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-h" "-v" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "-B" "sgl" "-m" "-W" "main" "-L" "C" "-t" "-T"
 * "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg" "libmwsglm.mlib" "soma.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __soma_h
#define __soma_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_soma(void);
extern void TerminateModule_soma(void);
extern _mexLocalFunctionTable _local_function_table_soma;

extern void mlfSoma(mxArray * finput,
                    mxArray * fout,
                    mxArray * a,
                    mxArray * metodo,
                    mxArray * Vibus);
extern void mlxSoma(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
