/*
 * MATLAB Compiler: 2.1
 * Date: Wed Nov 01 11:56:10 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-h" "-v" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "-B" "sgl" "-m" "-W" "main" "-L" "C" "-t" "-T"
 * "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg" "libmwsglm.mlib" "saccv20a.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __saccv20a_h
#define __saccv20a_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_saccv20a(void);
extern void TerminateModule_saccv20a(void);
extern _mexLocalFunctionTable _local_function_table_saccv20a;

extern void mlfSaccv20a(mxArray * finput,
                        mxArray * fout,
                        mxArray * Zf,
                        mxArray * metodo,
                        mxArray * Vibus);
extern void mlxSaccv20a(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
