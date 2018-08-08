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
#include "soma.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "subt.h"

static mxChar _array1_[126] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'o', 'm', 'a', ' ',
                                'L', 'i', 'n', 'e', ':', ' ', '1', ' ', 'C',
                                'o', 'l', 'u', 'm', 'n', ':', ' ', '1', ' ',
                                'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c', 't',
                                'i', 'o', 'n', ' ', '"', 's', 'o', 'm', 'a',
                                '"', ' ', 'w', 'a', 's', ' ', 'c', 'a', 'l',
                                'l', 'e', 'd', ' ', 'w', 'i', 't', 'h', ' ',
                                'm', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n',
                                ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c', 'l',
                                'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm', 'b',
                                'e', 'r', ' ', 'o', 'f', ' ', 'o', 'u', 't',
                                'p', 'u', 't', 's', ' ', '(', '0', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[125] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'o', 'm', 'a', ' ',
                                'L', 'i', 'n', 'e', ':', ' ', '1', ' ', 'C',
                                'o', 'l', 'u', 'm', 'n', ':', ' ', '1', ' ',
                                'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c', 't',
                                'i', 'o', 'n', ' ', '"', 's', 'o', 'm', 'a',
                                '"', ' ', 'w', 'a', 's', ' ', 'c', 'a', 'l',
                                'l', 'e', 'd', ' ', 'w', 'i', 't', 'h', ' ',
                                'm', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n',
                                ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c', 'l',
                                'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm', 'b',
                                'e', 'r', ' ', 'o', 'f', ' ', 'i', 'n', 'p',
                                'u', 't', 's', ' ', '(', '5', ')', '.' };
static mxArray * _mxarray2_;

static mxChar _array5_[4] = { '.', 'd', 'a', 't' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;

static mxChar _array8_[3] = { ' ', '-', ' ' };
static mxArray * _mxarray7_;

static mxChar _array10_[16] = { ' ', 'R', 'e', 's', 'u', 'l', 't', 'a',
                                'd', 'o', ' ', '%', '2', '.', '3', 'f' };
static mxArray * _mxarray9_;

void InitializeModule_soma(void) {
    _mxarray0_ = mclInitializeString(126, _array1_);
    _mxarray2_ = mclInitializeString(125, _array3_);
    _mxarray4_ = mclInitializeString(4, _array5_);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeString(3, _array8_);
    _mxarray9_ = mclInitializeString(16, _array10_);
}

void TerminateModule_soma(void) {
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static void Msoma(mxArray * finput,
                  mxArray * fout,
                  mxArray * a,
                  mxArray * metodo,
                  mxArray * Vibus);

_mexLocalFunctionTable _local_function_table_soma
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfSoma" contains the normal interface for the "soma"
 * M-function from file "C:\Projeto Final\Source new\soma.m" (lines 1-12). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlfSoma(mxArray * finput,
             mxArray * fout,
             mxArray * a,
             mxArray * metodo,
             mxArray * Vibus) {
    mlfEnterNewContext(0, 5, finput, fout, a, metodo, Vibus);
    Msoma(finput, fout, a, metodo, Vibus);
    mlfRestorePreviousContext(0, 5, finput, fout, a, metodo, Vibus);
}

/*
 * The function "mlxSoma" contains the feval interface for the "soma"
 * M-function from file "C:\Projeto Final\Source new\soma.m" (lines 1-12). The
 * feval function calls the implementation version of soma through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxSoma(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    int i;
    if (nlhs > 0) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 5) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    Msoma(mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
}

/*
 * The function "Msoma" is the implementation version of the "soma" M-function
 * from file "C:\Projeto Final\Source new\soma.m" (lines 1-12). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function soma(finput, fout, a, metodo, Vibus)
 */
static void Msoma(mxArray * finput,
                  mxArray * fout,
                  mxArray * a,
                  mxArray * metodo,
                  mxArray * Vibus) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_soma);
    mxArray * ans = mclGetUninitializedArray();
    mxArray * d = mclGetUninitializedArray();
    mclCopyArray(&finput);
    mclCopyArray(&fout);
    mclCopyArray(&a);
    mclCopyArray(&metodo);
    mclCopyArray(&Vibus);
    /*
     * 
     * a = str2num(a);
     */
    mlfAssign(&a, mlfStr2num(mclVa(a, "a")));
    /*
     * metodo = str2num(metodo);
     */
    mlfAssign(&metodo, mlfStr2num(mclVa(metodo, "metodo")));
    /*
     * Vibus = str2num(Vibus);
     */
    mlfAssign(&Vibus, mlfStr2num(mclVa(Vibus, "Vibus")));
    /*
     * d = a * subt(metodo,Vibus);
     */
    mlfAssign(
      &d,
      mclMtimes(
        mclVa(a, "a"),
        mclVe(mlfSubt(mclVa(metodo, "metodo"), mclVa(Vibus, "Vibus")))));
    /*
     * 
     * finput = [finput,'.dat'];
     */
    mlfAssign(&finput, mlfHorzcat(mclVa(finput, "finput"), _mxarray4_, NULL));
    /*
     * fprintf(1,[finput, ' - ' , fout,' Resultado %2.3f'],d);
     */
    mclAssignAns(
      &ans,
      mlfNFprintf(
        0,
        _mxarray6_,
        mlfHorzcat(
          mclVa(finput, "finput"),
          _mxarray7_,
          mclVa(fout, "fout"),
          _mxarray9_,
          NULL),
        mclVv(d, "d"),
        NULL));
    mxDestroyArray(d);
    mxDestroyArray(ans);
    mxDestroyArray(Vibus);
    mxDestroyArray(metodo);
    mxDestroyArray(a);
    mxDestroyArray(fout);
    mxDestroyArray(finput);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * 
     * return
     */
}
