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
#include "subt.h"
#include "libmatlbm.h"

static mxChar _array1_[126] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'u', 'b', 't', ' ',
                                'L', 'i', 'n', 'e', ':', ' ', '1', ' ', 'C',
                                'o', 'l', 'u', 'm', 'n', ':', ' ', '1', ' ',
                                'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c', 't',
                                'i', 'o', 'n', ' ', '"', 's', 'u', 'b', 't',
                                '"', ' ', 'w', 'a', 's', ' ', 'c', 'a', 'l',
                                'l', 'e', 'd', ' ', 'w', 'i', 't', 'h', ' ',
                                'm', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n',
                                ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c', 'l',
                                'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm', 'b',
                                'e', 'r', ' ', 'o', 'f', ' ', 'o', 'u', 't',
                                'p', 'u', 't', 's', ' ', '(', '1', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[125] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'u', 'b', 't', ' ',
                                'L', 'i', 'n', 'e', ':', ' ', '1', ' ', 'C',
                                'o', 'l', 'u', 'm', 'n', ':', ' ', '1', ' ',
                                'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c', 't',
                                'i', 'o', 'n', ' ', '"', 's', 'u', 'b', 't',
                                '"', ' ', 'w', 'a', 's', ' ', 'c', 'a', 'l',
                                'l', 'e', 'd', ' ', 'w', 'i', 't', 'h', ' ',
                                'm', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n',
                                ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c', 'l',
                                'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm', 'b',
                                'e', 'r', ' ', 'o', 'f', ' ', 'i', 'n', 'p',
                                'u', 't', 's', ' ', '(', '2', ')', '.' };
static mxArray * _mxarray2_;

void InitializeModule_subt(void) {
    _mxarray0_ = mclInitializeString(126, _array1_);
    _mxarray2_ = mclInitializeString(125, _array3_);
}

void TerminateModule_subt(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Msubt(int nargout_, mxArray * a, mxArray * b);

_mexLocalFunctionTable _local_function_table_subt
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfSubt" contains the normal interface for the "subt"
 * M-function from file "C:\Projeto Final\Source new\subt.m" (lines 1-6). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfSubt(mxArray * a, mxArray * b) {
    int nargout = 1;
    mxArray * c = mclGetUninitializedArray();
    mlfEnterNewContext(0, 2, a, b);
    c = Msubt(nargout, a, b);
    mlfRestorePreviousContext(0, 2, a, b);
    return mlfReturnValue(c);
}

/*
 * The function "mlxSubt" contains the feval interface for the "subt"
 * M-function from file "C:\Projeto Final\Source new\subt.m" (lines 1-6). The
 * feval function calls the implementation version of subt through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxSubt(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 2) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Msubt(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Msubt" is the implementation version of the "subt" M-function
 * from file "C:\Projeto Final\Source new\subt.m" (lines 1-6). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function c=subt(a,b)
 */
static mxArray * Msubt(int nargout_, mxArray * a, mxArray * b) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_subt);
    mxArray * c = mclGetUninitializedArray();
    mclCopyArray(&a);
    mclCopyArray(&b);
    /*
     * 
     * 
     * c = a-b;
     */
    mlfAssign(&c, mclMinus(mclVa(a, "a"), mclVa(b, "b")));
    mclValidateOutput(c, 1, nargout_, "c", "subt");
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return c;
    /*
     * 
     * return
     */
}
