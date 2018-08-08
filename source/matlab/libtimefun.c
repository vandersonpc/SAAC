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

#include "libmatlb.h"
#include "etime.h"

static mexFunctionTableEntry function_table[1]
  = { { "etime", mlxEtime, 2, 1, &_local_function_table_etime } };

static _mexInitTermTableEntry init_term_table[1]
  = { { InitializeModule_etime, TerminateModule_etime } };

static _mex_information _lib_info
  = { 1, 1, function_table, 0, NULL, 0, NULL, 1, init_term_table };

static int _reference_count = 0;

/*
 * The function "libtimefunInitialize" is a Compiler-generated initialization
 * wrapper. It is used to initialize the state of Compiler-generated functions
 * so that those functions can be called from code not generated by the
 * Compiler. The function(s) initialized can be found in the function_table
 * variable, appearing above.
 */
void libtimefunInitialize(void) {
    mclLibInit(&_reference_count, &_lib_info);
}

/*
 * The function "libtimefunTerminate" is a Compiler-generated termination
 * wrapper. It is used to clean up the state that was set up by the
 * initialization wrapper function, also found in this file. Call this function
 * after having called the initialization wrapper function and after having
 * finished making all calls to the Compiler-generated function(s) found in the
 * function_table variable, appearing above.
 */
void libtimefunTerminate(void) {
    mclLibTerm(&_reference_count, &_lib_info);
}
