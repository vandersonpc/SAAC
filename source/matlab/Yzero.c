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
#include "Yzero.h"
#include "libmatlbm.h"

static mxChar _array1_[128] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'Y', 'z', 'e', 'r', 'o',
                                ' ', 'L', 'i', 'n', 'e', ':', ' ', '1', ' ',
                                'C', 'o', 'l', 'u', 'm', 'n', ':', ' ', '1',
                                ' ', 'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c',
                                't', 'i', 'o', 'n', ' ', '"', 'Y', 'z', 'e',
                                'r', 'o', '"', ' ', 'w', 'a', 's', ' ', 'c',
                                'a', 'l', 'l', 'e', 'd', ' ', 'w', 'i', 't',
                                'h', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'h',
                                'a', 'n', ' ', 't', 'h', 'e', ' ', 'd', 'e',
                                'c', 'l', 'a', 'r', 'e', 'd', ' ', 'n', 'u',
                                'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'o',
                                'u', 't', 'p', 'u', 't', 's', ' ', '(', '1',
                                ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[127] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'Y', 'z', 'e', 'r', 'o',
                                ' ', 'L', 'i', 'n', 'e', ':', ' ', '1', ' ',
                                'C', 'o', 'l', 'u', 'm', 'n', ':', ' ', '1',
                                ' ', 'T', 'h', 'e', ' ', 'f', 'u', 'n', 'c',
                                't', 'i', 'o', 'n', ' ', '"', 'Y', 'z', 'e',
                                'r', 'o', '"', ' ', 'w', 'a', 's', ' ', 'c',
                                'a', 'l', 'l', 'e', 'd', ' ', 'w', 'i', 't',
                                'h', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'h',
                                'a', 'n', ' ', 't', 'h', 'e', ' ', 'd', 'e',
                                'c', 'l', 'a', 'r', 'e', 'd', ' ', 'n', 'u',
                                'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'i',
                                'n', 'p', 'u', 't', 's', ' ', '(', '5', ')',
                                '.' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;
static mxArray * _mxarray15_;

void InitializeModule_Yzero(void) {
    _mxarray0_ = mclInitializeString(128, _array1_);
    _mxarray2_ = mclInitializeString(127, _array3_);
    _mxarray4_ = mclInitializeDouble(1e-10);
    _mxarray5_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray6_ = mclInitializeDouble(1.0);
    _mxarray7_ = mclInitializeDouble(0.0);
    _mxarray8_ = mclInitializeDouble(-1.0);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeDouble(3.0);
    _mxarray11_ = mclInitializeDouble(4.0);
    _mxarray12_ = mclInitializeDouble(5.0);
    _mxarray13_ = mclInitializeDouble(6.0);
    _mxarray14_ = mclInitializeDouble(7.0);
    _mxarray15_ = mclInitializeDouble(8.0);
}

void TerminateModule_Yzero(void) {
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * MYzero(int nargout_,
                        mxArray * nbus,
                        mxArray * x,
                        mxArray * y,
                        mxArray * z,
                        mxArray * dtype);

_mexLocalFunctionTable _local_function_table_Yzero
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfYzero" contains the normal interface for the "Yzero"
 * M-function from file "C:\Projeto Final\Source new\Yzero.m" (lines 1-133).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfYzero(mxArray * nbus,
                   mxArray * x,
                   mxArray * y,
                   mxArray * z,
                   mxArray * dtype) {
    int nargout = 1;
    mxArray * Yz = mclGetUninitializedArray();
    mlfEnterNewContext(0, 5, nbus, x, y, z, dtype);
    Yz = MYzero(nargout, nbus, x, y, z, dtype);
    mlfRestorePreviousContext(0, 5, nbus, x, y, z, dtype);
    return mlfReturnValue(Yz);
}

/*
 * The function "mlxYzero" contains the feval interface for the "Yzero"
 * M-function from file "C:\Projeto Final\Source new\Yzero.m" (lines 1-133).
 * The feval function calls the implementation version of Yzero through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxYzero(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 5) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mplhs[0] = MYzero(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "MYzero" is the implementation version of the "Yzero"
 * M-function from file "C:\Projeto Final\Source new\Yzero.m" (lines 1-133). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function Yz=Yzero(nbus,x,y,z,dtype)
 */
static mxArray * MYzero(int nargout_,
                        mxArray * nbus,
                        mxArray * x,
                        mxArray * y,
                        mxArray * z,
                        mxArray * dtype) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_Yzero);
    mxArray * Yz = mclGetUninitializedArray();
    mxArray * i = mclGetUninitializedArray();
    mxArray * nbr = mclGetUninitializedArray();
    mxArray * tol = mclGetUninitializedArray();
    mclCopyArray(&nbus);
    mclCopyArray(&x);
    mclCopyArray(&y);
    mclCopyArray(&z);
    mclCopyArray(&dtype);
    /*
     * 
     * %
     * %    FUNCAO: Yzero.m - Gera a matrix de admitancia para sequencia
     * %                      zero.  
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
     * %   dtype   - Tipo de dispositivo conforme abaixo
     * %
     * %                  Para Trafo:    0 - Estrela Aterrado/Estrela Aterrado 
     * %        	                      1 - Estrela Aterrado/Estrela
     * %              	                  2 - Estrela Aterrado/Delta 
     * %                                 3 - Estrela/Estrela Aterrado;
     * %                                 4 - Estrela/Estrela;
     * %	                              5 - Estrela/Delta;
     * %       	                      6 - Delta/Estrela Aterrado;
     * %                                 7 - Delta/Estrela;
     * %                           	  8 - Delta/Delta; 
     * %
     * %
     * %                  Para carga:    0 - Estrela;
     * %             	                  1 - Estrela Aterrado
     * %
     * %
     * % Veriaveis de saida
     * %
     * %   Yz    - Matriz de admitancia de sequewncia zero.
     * %
     * %
     * %       VERSÃO: 1.30 - 26/out/2006                                      
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
     * tol = 1e-10;
     */
    mlfAssign(&tol, _mxarray4_);
    /*
     * nbr=length(x);
     */
    mlfAssign(&nbr, mlfScalar(mclLengthInt(mclVa(x, "x"))));
    /*
     * Yz=zeros(nbus);
     */
    mlfAssign(&Yz, mlfZeros(mclVa(nbus, "nbus"), NULL));
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
            mlfAssign(&i, _mxarray5_);
        } else {
            /*
             * if dtype == 1
             * Yz(x(i),x(i))=Yz(x(i),x(i)) +  (1/z(i)); 
             * else
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;  
             * end   
             * end
             */
            for (; ; ) {
                if (mclEqBool(mclVa(dtype, "dtype"), _mxarray6_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclMrdivide(
                          _mxarray6_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                } else {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
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
         * 
         * for i=1:length(x)
         */
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mlfScalar(mclLengthInt(mclVa(x, "x"))));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray5_);
        } else {
            /*
             * if dtype(i)==0 %Estrela aterrado/estrela Aterrado
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + 1/z(i);
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + 1/z(i);
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + (-1)*1/z(i);
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + (-1)*1/z(i);
             * end
             * 
             * if  dtype(i)==1 %Estrela aterrado/estrela
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==2 %Estrela aterrado/delta
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + 1/z(i);
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==3 %estrela/estrela aterrado
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==4 %Estrela/estrela
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==5 %Estrela/delta
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==6 %Delta/estrela aterrado
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + 1/z(i);
             * end
             * 
             * if  dtype(i)==7 %Delta/Estrela
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * 
             * if  dtype(i)==8 %Delta/Delta
             * Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
             * Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
             * Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
             * Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
             * end
             * end
             */
            for (; ; ) {
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray7_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclMrdivide(
                          _mxarray6_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclMrdivide(
                          _mxarray6_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclMrdivide(
                          _mxarray8_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclMrdivide(
                          _mxarray8_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray6_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray9_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclMrdivide(
                          _mxarray6_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray10_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray11_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray12_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray13_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclMrdivide(
                          _mxarray6_,
                          mclVe(mclIntArrayRef1(mclVsa(z, "z"), v_)))),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray14_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
                if (mclEqBool(
                      mclVe(mclIntArrayRef1(mclVsa(dtype, "dtype"), v_)),
                      _mxarray15_)) {
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(x, "x"), v_),
                            mclIntArrayRef1(mclVsa(y, "y"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(x, "x"), v_),
                      mclIntArrayRef1(mclVsa(y, "y"), v_));
                    mclArrayAssign2(
                      &Yz,
                      mclPlus(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(Yz, "Yz"),
                            mclIntArrayRef1(mclVsa(y, "y"), v_),
                            mclIntArrayRef1(mclVsa(x, "x"), v_))),
                        mclVv(tol, "tol")),
                      mclIntArrayRef1(mclVsa(y, "y"), v_),
                      mclIntArrayRef1(mclVsa(x, "x"), v_));
                }
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
     * Yz = (Yz);
     */
    mlfAssign(&Yz, mclVsv(Yz, "Yz"));
    mclValidateOutput(Yz, 1, nargout_, "Yz", "Yzero");
    mxDestroyArray(tol);
    mxDestroyArray(nbr);
    mxDestroyArray(i);
    mxDestroyArray(dtype);
    mxDestroyArray(z);
    mxDestroyArray(y);
    mxDestroyArray(x);
    mxDestroyArray(nbus);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return Yz;
    /*
     * 
     */
}
