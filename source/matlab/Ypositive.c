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
#include "Ypositive.h"
#include "libmatlbm.h"

static mxChar _array1_[136] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'Y', 'p', 'o', 's', 'i',
                                't', 'i', 'v', 'e', ' ', 'L', 'i', 'n', 'e',
                                ':', ' ', '1', ' ', 'C', 'o', 'l', 'u', 'm',
                                'n', ':', ' ', '1', ' ', 'T', 'h', 'e', ' ',
                                'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ',
                                '"', 'Y', 'p', 'o', 's', 'i', 't', 'i', 'v',
                                'e', '"', ' ', 'w', 'a', 's', ' ', 'c', 'a',
                                'l', 'l', 'e', 'd', ' ', 'w', 'i', 't', 'h',
                                ' ', 'm', 'o', 'r', 'e', ' ', 't', 'h', 'a',
                                'n', ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c',
                                'l', 'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm',
                                'b', 'e', 'r', ' ', 'o', 'f', ' ', 'o', 'u',
                                't', 'p', 'u', 't', 's', ' ', '(', '1', ')',
                                '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[135] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'Y', 'p', 'o', 's', 'i',
                                't', 'i', 'v', 'e', ' ', 'L', 'i', 'n', 'e',
                                ':', ' ', '1', ' ', 'C', 'o', 'l', 'u', 'm',
                                'n', ':', ' ', '1', ' ', 'T', 'h', 'e', ' ',
                                'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ',
                                '"', 'Y', 'p', 'o', 's', 'i', 't', 'i', 'v',
                                'e', '"', ' ', 'w', 'a', 's', ' ', 'c', 'a',
                                'l', 'l', 'e', 'd', ' ', 'w', 'i', 't', 'h',
                                ' ', 'm', 'o', 'r', 'e', ' ', 't', 'h', 'a',
                                'n', ' ', 't', 'h', 'e', ' ', 'd', 'e', 'c',
                                'l', 'a', 'r', 'e', 'd', ' ', 'n', 'u', 'm',
                                'b', 'e', 'r', ' ', 'o', 'f', ' ', 'i', 'n',
                                'p', 'u', 't', 's', ' ', '(', '4', ')', '.' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

void InitializeModule_Ypositive(void) {
    _mxarray0_ = mclInitializeString(136, _array1_);
    _mxarray2_ = mclInitializeString(135, _array3_);
    _mxarray4_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray5_ = mclInitializeDouble(1.0);
    _mxarray6_ = mclInitializeDouble(-1.0);
}

void TerminateModule_Ypositive(void) {
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * MYpositive(int nargout_,
                            mxArray * nbus,
                            mxArray * x,
                            mxArray * y,
                            mxArray * z);

_mexLocalFunctionTable _local_function_table_Ypositive
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfYpositive" contains the normal interface for the
 * "Ypositive" M-function from file "C:\Projeto Final\Source new\Ypositive.m"
 * (lines 1-54). This function processes any input arguments and passes them to
 * the implementation version of the function, appearing above.
 */
mxArray * mlfYpositive(mxArray * nbus, mxArray * x, mxArray * y, mxArray * z) {
    int nargout = 1;
    mxArray * Yp = mclGetUninitializedArray();
    mlfEnterNewContext(0, 4, nbus, x, y, z);
    Yp = MYpositive(nargout, nbus, x, y, z);
    mlfRestorePreviousContext(0, 4, nbus, x, y, z);
    return mlfReturnValue(Yp);
}

/*
 * The function "mlxYpositive" contains the feval interface for the "Ypositive"
 * M-function from file "C:\Projeto Final\Source new\Ypositive.m" (lines 1-54).
 * The feval function calls the implementation version of Ypositive through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxYpositive(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 4) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mplhs[0] = MYpositive(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "MYpositive" is the implementation version of the "Ypositive"
 * M-function from file "C:\Projeto Final\Source new\Ypositive.m" (lines 1-54).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function Yp=Ypositive(nbus,x,y,z)
 */
static mxArray * MYpositive(int nargout_,
                            mxArray * nbus,
                            mxArray * x,
                            mxArray * y,
                            mxArray * z) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_Ypositive);
    mxArray * Yp = mclGetUninitializedArray();
    mxArray * i = mclGetUninitializedArray();
    mxArray * nbr = mclGetUninitializedArray();
    mclCopyArray(&nbus);
    mclCopyArray(&x);
    mclCopyArray(&y);
    mclCopyArray(&z);
    /*
     * 
     * %
     * %    FUNCAO: Ypositive.m - Gera a matrix de admitancia para sequencia
     * %                          positiva e negativa.  
     * %
     * %
     * % Variaveis de entrada:
     * %
     * %   nbus    - Numero de barramentos do sistema
     * %  
     * %   x       - Barramento inicial    
     * %
     * %   y       - Barramento final
     * %
     * %   z       - Impedancia em pu
     * %
     * %
     * % Veriaveis de saida
     * %
     * %   Yp    - Matriz de admitancia de sequewncia positiva ou negativa.
     * %
     * %
     * %       VERSÃO: 1.20 - 21/out/2006                                      
     * %                                                       
     * % 
     * %  ESTE PROGRAMA E PARTE DO:
     * %
     * %  SACC - SISTEMA DE CALCULO DE CURTO CIRCUITO EM SISTEMA DE POTENCIA
     * %
     * %  POR:                                                                   
     * %                   Vanderson Pimenta Carvalho 
     * %                   Rogerio Fernandes de Sales  
     * %                   Julio Cesar Silva de Oliveira         
     * 
     * 
     * nbr=length(x);
     */
    mlfAssign(&nbr, mlfScalar(mclLengthInt(mclVa(x, "x"))));
    /*
     * Yp=zeros(nbus);
     */
    mlfAssign(&Yp, mlfZeros(mclVa(nbus, "nbus"), NULL));
    /*
     * 
     * if x == y 
     */
    if (mclEqBool(mclVa(x, "x"), mclVa(y, "y"))) {
        /*
         * for i=1:length(x)
         */
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mlfScalar(mclLengthInt(mclVa(x, "x"))));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray4_);
        } else {
            /*
             * Yp(x(i),x(i))=Yp(x(i),x(i))+(1/z(i));
             * end
             */
            for (; ; ) {
                mclArrayAssign2(
                  &Yp,
                  mclPlus(
                    mclVe(
                      mclArrayRef2(
                        mclVsv(Yp, "Yp"),
                        mclIntArrayRef1(mclVsa(x, "x"), v_),
                        mclIntArrayRef1(mclVsa(x, "x"), v_))),
                    mclMrdivide(
                      _mxarray5_, mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                  mclIntArrayRef1(mclVsa(x, "x"), v_),
                  mclIntArrayRef1(mclVsa(x, "x"), v_));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    /*
     * else
     */
    } else {
        /*
         * for i=1:nbr
         */
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(nbr, "nbr"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray4_);
        } else {
            /*
             * Yp(x(i),x(i))=Yp(x(i),x(i))+1/z(i);
             * Yp(y(i),y(i))=Yp(y(i),y(i))+1/z(i);
             * Yp(x(i),y(i))=Yp(x(i),y(i))+(-1)*1/z(i);
             * Yp(y(i),x(i))=Yp(y(i),x(i))+(-1)*1/z(i);
             * end
             */
            for (; ; ) {
                mclArrayAssign2(
                  &Yp,
                  mclPlus(
                    mclVe(
                      mclArrayRef2(
                        mclVsv(Yp, "Yp"),
                        mclIntArrayRef1(mclVsa(x, "x"), v_),
                        mclIntArrayRef1(mclVsa(x, "x"), v_))),
                    mclMrdivide(
                      _mxarray5_, mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                  mclIntArrayRef1(mclVsa(x, "x"), v_),
                  mclIntArrayRef1(mclVsa(x, "x"), v_));
                mclArrayAssign2(
                  &Yp,
                  mclPlus(
                    mclVe(
                      mclArrayRef2(
                        mclVsv(Yp, "Yp"),
                        mclIntArrayRef1(mclVsa(y, "y"), v_),
                        mclIntArrayRef1(mclVsa(y, "y"), v_))),
                    mclMrdivide(
                      _mxarray5_, mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                  mclIntArrayRef1(mclVsa(y, "y"), v_),
                  mclIntArrayRef1(mclVsa(y, "y"), v_));
                mclArrayAssign2(
                  &Yp,
                  mclPlus(
                    mclVe(
                      mclArrayRef2(
                        mclVsv(Yp, "Yp"),
                        mclIntArrayRef1(mclVsa(x, "x"), v_),
                        mclIntArrayRef1(mclVsa(y, "y"), v_))),
                    mclMrdivide(
                      _mxarray6_, mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                  mclIntArrayRef1(mclVsa(x, "x"), v_),
                  mclIntArrayRef1(mclVsa(y, "y"), v_));
                mclArrayAssign2(
                  &Yp,
                  mclPlus(
                    mclVe(
                      mclArrayRef2(
                        mclVsv(Yp, "Yp"),
                        mclIntArrayRef1(mclVsa(y, "y"), v_),
                        mclIntArrayRef1(mclVsa(x, "x"), v_))),
                    mclMrdivide(
                      _mxarray6_, mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                  mclIntArrayRef1(mclVsa(y, "y"), v_),
                  mclIntArrayRef1(mclVsa(x, "x"), v_));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    /*
     * end
     */
    }
    /*
     * Yp = (Yp);
     */
    mlfAssign(&Yp, mclVsv(Yp, "Yp"));
    mclValidateOutput(Yp, 1, nargout_, "Yp", "Ypositive");
    mxDestroyArray(nbr);
    mxDestroyArray(i);
    mxDestroyArray(z);
    mxDestroyArray(y);
    mxDestroyArray(x);
    mxDestroyArray(nbus);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return Yp;
    /*
     * 
     */
}
