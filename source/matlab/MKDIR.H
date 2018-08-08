/*
 * MATLAB Compiler: 2.1
 * Date: Sat Dec 16 20:22:48 2006
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

#ifndef __mkdir_h
#define __mkdir_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_mkdir(void);
extern void TerminateModule_mkdir(void);
extern _mexLocalFunctionTable _local_function_table_mkdir;

extern mxArray * mlfNMkdir(int nargout, mlfVarargoutList * varargout, ...);
extern mxArray * mlfMkdir(mlfVarargoutList * varargout, ...);
extern void mlfVMkdir(mxArray * synthetic_varargin_argument, ...);
extern void mlxMkdir(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
