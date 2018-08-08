/*
 * MATLAB Compiler: 2.1
 * Date: Wed Nov 01 12:30:44 2006
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

#include "libmatlb.h"
#include "libsgl.h"
#include "soma.h"
#include "subt.h"
#include "libmmfile.h"

static mexFunctionTableEntry function_table[2]
  = { { "soma", mlxSoma, 5, 0, &_local_function_table_soma },
      { "subt", mlxSubt, 2, 1, &_local_function_table_subt } };

static _mexInitTermTableEntry init_term_table[3]
  = { { libmmfileInitialize, libmmfileTerminate },
      { InitializeModule_soma, TerminateModule_soma },
      { InitializeModule_subt, TerminateModule_subt } };

static _mex_information _main_info
  = { 1, 2, function_table, 0, NULL, 0, NULL, 3, init_term_table };

/*
 * The function "main" is a Compiler-generated main wrapper, suitable for
 * building a stand-alone application.  It calls a library function to perform
 * initialization, call the main function, and perform library termination.
 */
int main(int argc, const char * * argv) {
    return mclMainhg(argc, argv, mlxSoma, 0, &_main_info);
}
