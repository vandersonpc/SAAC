/*
 * MATLAB Compiler: 2.1
 * Date: Thu Nov 02 11:56:11 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-W" "lib:libtimefun"
 * "-L" "C" "etime" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __libtimefun_h
#define __libtimefun_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_libtimefun(void);
extern void TerminateModule_libtimefun(void);
extern mxArray * mlfEtime(mxArray * t1, mxArray * t0);
extern void mlxEtime(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);
extern void libtimefunInitialize(void);
extern void libtimefunTerminate(void);

#ifdef __cplusplus
}
#endif

#endif
