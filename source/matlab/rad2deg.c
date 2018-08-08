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
#include "rad2deg.h"
#include "libmatlbm.h"

static mxChar _array1_[132] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'r', 'a', 'd', '2', 'd',
                                'e', 'g', ' ', 'L', 'i', 'n', 'e', ':', ' ',
                                '1', ' ', 'C', 'o', 'l', 'u', 'm', 'n', ':',
                                ' ', '1', ' ', 'T', 'h', 'e', ' ', 'f', 'u',
                                'n', 'c', 't', 'i', 'o', 'n', ' ', '"', 'r',
                                'a', 'd', '2', 'd', 'e', 'g', '"', ' ', 'w',
                                'a', 's', ' ', 'c', 'a', 'l', 'l', 'e', 'd',
                                ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o', 'r',
                                'e', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h',
                                'e', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e',
                                'd', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'o', 'u', 't', 'p', 'u', 't',
                                's', ' ', '(', '1', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[131] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'r', 'a', 'd', '2', 'd',
                                'e', 'g', ' ', 'L', 'i', 'n', 'e', ':', ' ',
                                '1', ' ', 'C', 'o', 'l', 'u', 'm', 'n', ':',
                                ' ', '1', ' ', 'T', 'h', 'e', ' ', 'f', 'u',
                                'n', 'c', 't', 'i', 'o', 'n', ' ', '"', 'r',
                                'a', 'd', '2', 'd', 'e', 'g', '"', ' ', 'w',
                                'a', 's', ' ', 'c', 'a', 'l', 'l', 'e', 'd',
                                ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o', 'r',
                                'e', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h',
                                'e', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e',
                                'd', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'i', 'n', 'p', 'u', 't', 's',
                                ' ', '(', '1', ')', '.' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

void InitializeModule_rad2deg(void) {
    _mxarray0_ = mclInitializeString(132, _array1_);
    _mxarray2_ = mclInitializeString(131, _array3_);
    _mxarray4_ = mclInitializeDouble(3.141592653589793);
    _mxarray5_ = mclInitializeDouble(180.0);
}

void TerminateModule_rad2deg(void) {
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mrad2deg(int nargout_, mxArray * angle);

_mexLocalFunctionTable _local_function_table_rad2deg
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfRad2deg" contains the normal interface for the "rad2deg"
 * M-function from file "C:\Projeto Final\Source new\rad2deg.m" (lines 1-4).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfRad2deg(mxArray * angle) {
    int nargout = 1;
    mxArray * deg = mclGetUninitializedArray();
    mlfEnterNewContext(0, 1, angle);
    deg = Mrad2deg(nargout, angle);
    mlfRestorePreviousContext(0, 1, angle);
    return mlfReturnValue(deg);
}

/*
 * The function "mlxRad2deg" contains the feval interface for the "rad2deg"
 * M-function from file "C:\Projeto Final\Source new\rad2deg.m" (lines 1-4).
 * The feval function calls the implementation version of rad2deg through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxRad2deg(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 1) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mrad2deg(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mrad2deg" is the implementation version of the "rad2deg"
 * M-function from file "C:\Projeto Final\Source new\rad2deg.m" (lines 1-4). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [deg] = rad2deg(angle)
 */
static mxArray * Mrad2deg(int nargout_, mxArray * angle) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_rad2deg);
    mxArray * deg = mclGetUninitializedArray();
    mclCopyArray(&angle);
    /*
     * 
     * deg = (angle / pi) * 180;
     */
    mlfAssign(
      &deg,
      mclMtimes(mclMrdivide(mclVa(angle, "angle"), _mxarray4_), _mxarray5_));
    mclValidateOutput(deg, 1, nargout_, "deg", "rad2deg");
    mxDestroyArray(angle);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return deg;
}
