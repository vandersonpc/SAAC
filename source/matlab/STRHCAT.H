/*
 * MATLAB Compiler: 2.1
 * Date: Mon Dec 18 22:35:59 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-h" "-v" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "-B" "sgl" "-m" "-W" "main" "-L" "C" "-t" "-T"
 * "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg" "libmwsglm.mlib" "sacc.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __strhcat_h
#define __strhcat_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_strhcat(void);
extern void TerminateModule_strhcat(void);
extern _mexLocalFunctionTable _local_function_table_strhcat;

extern mxArray * mlfStrhcat(mxArray * synthetic_varargin_argument, ...);
extern void mlxStrhcat(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
