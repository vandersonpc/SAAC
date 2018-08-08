/*
 * MATLAB Compiler: 2.1
 * Date: Thu Nov 02 11:56:18 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-h" "-v" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "-W" "lib:libtimefun" "-L" "C" "-B" "sgl" "-m"
 * "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W"
 * "mainhg" "libmwsglm.mlib" "sacc.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#include "libmatlb.h"
#include "libsgl.h"
#include "sacc.h"
#include "Ypositive.h"
#include "Yzero.h"
#include "deg2rad.h"
#include "newtonraph.h"
#include "rad2deg.h"
#include "sysload.h"
#include "strhcat.h"
#include "libmmfile.h"

static mexFunctionTableEntry function_table[8]
  = { { "sacc", mlxSacc, 5, 0, &_local_function_table_sacc },
      { "Ypositive", mlxYpositive, 4, 1, &_local_function_table_Ypositive },
      { "Yzero", mlxYzero, 5, 1, &_local_function_table_Yzero },
      { "deg2rad", mlxDeg2rad, 1, 1, &_local_function_table_deg2rad },
      { "newtonraph", mlxNewtonraph, 3, 3, &_local_function_table_newtonraph },
      { "rad2deg", mlxRad2deg, 1, 1, &_local_function_table_rad2deg },
      { "sysload", mlxSysload, 1, 5, &_local_function_table_sysload },
      { "strhcat", mlxStrhcat, -1, 1, &_local_function_table_strhcat } };

static _mexInitTermTableEntry init_term_table[9]
  = { { libmmfileInitialize, libmmfileTerminate },
      { InitializeModule_sacc, TerminateModule_sacc },
      { InitializeModule_Ypositive, TerminateModule_Ypositive },
      { InitializeModule_Yzero, TerminateModule_Yzero },
      { InitializeModule_deg2rad, TerminateModule_deg2rad },
      { InitializeModule_newtonraph, TerminateModule_newtonraph },
      { InitializeModule_rad2deg, TerminateModule_rad2deg },
      { InitializeModule_sysload, TerminateModule_sysload },
      { InitializeModule_strhcat, TerminateModule_strhcat } };

static _mex_information _main_info
  = { 1, 8, function_table, 0, NULL, 0, NULL, 9, init_term_table };

/*
 * The function "main" is a Compiler-generated main wrapper, suitable for
 * building a stand-alone application.  It calls a library function to perform
 * initialization, call the main function, and perform library termination.
 */
int main(int argc, const char * * argv) {
    return mclMainhg(argc, argv, mlxSacc, 0, &_main_info);
}
