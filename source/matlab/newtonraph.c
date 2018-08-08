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
#include "newtonraph.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[138] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'n', 'e', 'w', 't', 'o',
                                'n', 'r', 'a', 'p', 'h', ' ', 'L', 'i', 'n',
                                'e', ':', ' ', '1', ' ', 'C', 'o', 'l', 'u',
                                'm', 'n', ':', ' ', '1', ' ', 'T', 'h', 'e',
                                ' ', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n',
                                ' ', '"', 'n', 'e', 'w', 't', 'o', 'n', 'r',
                                'a', 'p', 'h', '"', ' ', 'w', 'a', 's', ' ',
                                'c', 'a', 'l', 'l', 'e', 'd', ' ', 'w', 'i',
                                't', 'h', ' ', 'm', 'o', 'r', 'e', ' ', 't',
                                'h', 'a', 'n', ' ', 't', 'h', 'e', ' ', 'd',
                                'e', 'c', 'l', 'a', 'r', 'e', 'd', ' ', 'n',
                                'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ',
                                'o', 'u', 't', 'p', 'u', 't', 's', ' ', '(',
                                '3', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[137] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 'n', 'e', 'w', 't', 'o',
                                'n', 'r', 'a', 'p', 'h', ' ', 'L', 'i', 'n',
                                'e', ':', ' ', '1', ' ', 'C', 'o', 'l', 'u',
                                'm', 'n', ':', ' ', '1', ' ', 'T', 'h', 'e',
                                ' ', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n',
                                ' ', '"', 'n', 'e', 'w', 't', 'o', 'n', 'r',
                                'a', 'p', 'h', '"', ' ', 'w', 'a', 's', ' ',
                                'c', 'a', 'l', 'l', 'e', 'd', ' ', 'w', 'i',
                                't', 'h', ' ', 'm', 'o', 'r', 'e', ' ', 't',
                                'h', 'a', 'n', ' ', 't', 'h', 'e', ' ', 'd',
                                'e', 'c', 'l', 'a', 'r', 'e', 'd', ' ', 'n',
                                'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ',
                                'i', 'n', 'p', 'u', 't', 's', ' ', '(', '3',
                                ')', '.' };
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
static mxArray * _mxarray16_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;
static mxArray * _mxarray19_;
static double _ieee_plusinf_;
static mxArray * _mxarray20_;

static mxChar _array22_[47] = { 0x005c, 'n', 'O', ' ', 'm', 'e', 't', 'o',
                                'd', 'o', ' ', 'n', 'a', 'o', ' ', 'c',
                                'o', 'n', 'v', 'e', 'r', 'g', 'i', 'u',
                                ' ', 'e', 'm', ' ', '%', '2', 'd', ' ',
                                'i', 't', 'e', 'r', 'a', 'c', 'o', 'e',
                                's', '.', ' ', 0x005c, 'n', 0x005c, 'n' };
static mxArray * _mxarray21_;

static mxChar _array24_[43] = { 0x005c, 'n', 'O', ' ', 'm', 'e', 't', 'o', 'd',
                                'o', ' ', 'c', 'o', 'n', 'v', 'e', 'r', 'g',
                                'i', 'u', ' ', 'e', 'm', ' ', '%', '2', 'd',
                                ' ', 'i', 't', 'e', 'r', 'a', 'c', 'o', 'e',
                                's', '.', ' ', 0x005c, 'n', 0x005c, 'n' };
static mxArray * _mxarray23_;

void InitializeModule_newtonraph(void) {
    _mxarray0_ = mclInitializeString(138, _array1_);
    _mxarray2_ = mclInitializeString(137, _array3_);
    _mxarray4_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray5_ = mclInitializeDouble(1e-05);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDouble(30.0);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeDouble(2.0);
    _mxarray10_ = mclInitializeDouble(3.0);
    _mxarray11_ = mclInitializeDouble(4.0);
    _mxarray12_ = mclInitializeDouble(5.0);
    _mxarray13_ = mclInitializeDouble(6.0);
    _mxarray14_ = mclInitializeDouble(7.0);
    _mxarray15_ = mclInitializeDouble(8.0);
    _mxarray16_ = mclInitializeDouble(3.141592653589793);
    _mxarray17_ = mclInitializeDouble(180.0);
    _mxarray18_ = mclInitializeDouble(9.0);
    _mxarray19_ = mclInitializeDouble(-1.0);
    _ieee_plusinf_ = mclGetInf();
    _mxarray20_ = mclInitializeDouble(_ieee_plusinf_);
    _mxarray21_ = mclInitializeString(47, _array22_);
    _mxarray23_ = mclInitializeString(43, _array24_);
}

void TerminateModule_newtonraph(void) {
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
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

static mxArray * Mnewtonraph(mxArray * * erro,
                             mxArray * * niter,
                             int nargout_,
                             mxArray * Ybus,
                             mxArray * Busnames,
                             mxArray * Busdata);

_mexLocalFunctionTable _local_function_table_newtonraph
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNewtonraph" contains the normal interface for the
 * "newtonraph" M-function from file "C:\Projeto Final\Source new\newtonraph.m"
 * (lines 1-200). This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
mxArray * mlfNewtonraph(mxArray * * erro,
                        mxArray * * niter,
                        mxArray * Ybus,
                        mxArray * Busnames,
                        mxArray * Busdata) {
    int nargout = 1;
    mxArray * newbusdata = mclGetUninitializedArray();
    mxArray * erro__ = mclGetUninitializedArray();
    mxArray * niter__ = mclGetUninitializedArray();
    mlfEnterNewContext(2, 3, erro, niter, Ybus, Busnames, Busdata);
    if (erro != NULL) {
        ++nargout;
    }
    if (niter != NULL) {
        ++nargout;
    }
    newbusdata
      = Mnewtonraph(&erro__, &niter__, nargout, Ybus, Busnames, Busdata);
    mlfRestorePreviousContext(2, 3, erro, niter, Ybus, Busnames, Busdata);
    if (erro != NULL) {
        mclCopyOutputArg(erro, erro__);
    } else {
        mxDestroyArray(erro__);
    }
    if (niter != NULL) {
        mclCopyOutputArg(niter, niter__);
    } else {
        mxDestroyArray(niter__);
    }
    return mlfReturnValue(newbusdata);
}

/*
 * The function "mlxNewtonraph" contains the feval interface for the
 * "newtonraph" M-function from file "C:\Projeto Final\Source new\newtonraph.m"
 * (lines 1-200). The feval function calls the implementation version of
 * newtonraph through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
void mlxNewtonraph(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 3) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 3; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mnewtonraph(&mplhs[1], &mplhs[2], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mnewtonraph" is the implementation version of the "newtonraph"
 * M-function from file "C:\Projeto Final\Source new\newtonraph.m" (lines
 * 1-200). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [newbusdata,erro,niter] = newtonraph(Ybus,Busnames,Busdata);
 */
static mxArray * Mnewtonraph(mxArray * * erro,
                             mxArray * * niter,
                             int nargout_,
                             mxArray * Ybus,
                             mxArray * Busnames,
                             mxArray * Busdata) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_newtonraph);
    mxArray * newbusdata = mclGetUninitializedArray();
    mxArray * VTemp = mclGetUninitializedArray();
    mxArray * dx = mclGetUninitializedArray();
    mxArray * Jac = mclGetUninitializedArray();
    mxArray * L = mclGetUninitializedArray();
    mxArray * J = mclGetUninitializedArray();
    mxArray * N = mclGetUninitializedArray();
    mxArray * H = mclGetUninitializedArray();
    mxArray * dSbus_dVa = mclGetUninitializedArray();
    mxArray * dSbus_dVm = mclGetUninitializedArray();
    mxArray * diagVnorm = mclGetUninitializedArray();
    mxArray * diagIbus = mclGetUninitializedArray();
    mxArray * diagV = mclGetUninitializedArray();
    mxArray * ans = mclGetUninitializedArray();
    mxArray * normF = mclGetUninitializedArray();
    mxArray * F = mclGetUninitializedArray();
    mxArray * Sbus = mclGetUninitializedArray();
    mxArray * Ibus = mclGetUninitializedArray();
    mxArray * n = mclGetUninitializedArray();
    mxArray * V = mclGetUninitializedArray();
    mxArray * jota = mclGetUninitializedArray();
    mxArray * Dab = mclGetUninitializedArray();
    mxArray * j = mclGetUninitializedArray();
    mxArray * i = mclGetUninitializedArray();
    mxArray * DQ = mclGetUninitializedArray();
    mxArray * DP = mclGetUninitializedArray();
    mxArray * Qcalc = mclGetUninitializedArray();
    mxArray * Pcalc = mclGetUninitializedArray();
    mxArray * x = mclGetUninitializedArray();
    mxArray * nlb = mclGetUninitializedArray();
    mxArray * ngb = mclGetUninitializedArray();
    mxArray * lbusidx = mclGetUninitializedArray();
    mxArray * gerbusidx = mclGetUninitializedArray();
    mxArray * swbusidx = mclGetUninitializedArray();
    mxArray * Qesp = mclGetUninitializedArray();
    mxArray * Pesp = mclGetUninitializedArray();
    mxArray * bcol = mclGetUninitializedArray();
    mxArray * nbus = mclGetUninitializedArray();
    mxArray * B = mclGetUninitializedArray();
    mxArray * G = mclGetUninitializedArray();
    mxArray * isconv = mclGetUninitializedArray();
    mxArray * max_iter = mclGetUninitializedArray();
    mxArray * iter = mclGetUninitializedArray();
    mxArray * error = mclGetUninitializedArray();
    mxArray * Bus = mclGetUninitializedArray();
    mclCopyArray(&Ybus);
    mclCopyArray(&Busnames);
    mclCopyArray(&Busdata);
    /*
     * 
     * %
     * %    FUNCAO: NEWTONRAPH.m - Faz analise de fluxo de potencias atraves 
     * %                           do metodo de Newton-Raphson
     * %
     * % Variaveis de entrada:
     * %
     * %   Ybus    - Matriz admitencia de sequencia positiva.
     * %  
     * %   Busdata - Matriz de dados dos barramentos
     * %
     * % Veriaveis de saida
     * %
     * %   newbusdata  - Matriz com os novos dados do barramento
     * %
     * %   erro        - Tolerancia maxima para os calculos
     * %
     * %   niter       - Numero de iteracoes necessarias para os calculos
     * %
     * %       VERSÃO: 1.70 - 21/out/2006                                      
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
     * % Estrutura dos barramentos
     * 
     * Bus.number = []; % No do barramento
     */
    mlfIndexAssign(&Bus, ".number", _mxarray4_);
    /*
     * Bus.names  = [];  
     */
    mlfIndexAssign(&Bus, ".names", _mxarray4_);
    /*
     * Bus.type   = []; % Tipo de Barramento
     */
    mlfIndexAssign(&Bus, ".type", _mxarray4_);
    /*
     * Bus.Pg     = [];
     */
    mlfIndexAssign(&Bus, ".Pg", _mxarray4_);
    /*
     * Bus.Pc     = [];
     */
    mlfIndexAssign(&Bus, ".Pc", _mxarray4_);
    /*
     * Bus.Qg     = [];
     */
    mlfIndexAssign(&Bus, ".Qg", _mxarray4_);
    /*
     * Bus.Qc     = [];
     */
    mlfIndexAssign(&Bus, ".Qc", _mxarray4_);
    /*
     * Bus.Vmag   = [];
     */
    mlfIndexAssign(&Bus, ".Vmag", _mxarray4_);
    /*
     * Bus.Vdeg   = []; 
     */
    mlfIndexAssign(&Bus, ".Vdeg", _mxarray4_);
    /*
     * Bus.Vbase  = []; % Tensao base do barramento
     */
    mlfIndexAssign(&Bus, ".Vbase", _mxarray4_);
    /*
     * 
     * %Bus.fault  = [];
     * 
     * error = 10e-6;  % Erro maximo admissivel
     */
    mlfAssign(&error, _mxarray5_);
    /*
     * iter      = 0;  % Contador do numero de iteracoes
     */
    mlfAssign(&iter, _mxarray6_);
    /*
     * max_iter  = 30; % Numero maximo de iteracoes
     */
    mlfAssign(&max_iter, _mxarray7_);
    /*
     * isconv    = 0;  % Flag de convergencia
     */
    mlfAssign(&isconv, _mxarray6_);
    /*
     * 
     * G = real(Ybus); %Condutancia
     */
    mlfAssign(&G, mlfReal(mclVa(Ybus, "Ybus")));
    /*
     * B = imag(Ybus); %Susceptancia
     */
    mlfAssign(&B, mlfImag(mclVa(Ybus, "Ybus")));
    /*
     * 
     * [nbus,bcol] = size(Busdata);
     */
    mlfSize(mlfVarargout(&nbus, &bcol, NULL), mclVa(Busdata, "Busdata"), NULL);
    /*
     * 
     * Pesp  = zeros(nbus,1); % Potencia ativa especificada
     */
    mlfAssign(&Pesp, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
    /*
     * Qesp  = zeros(nbus,1); % Potencia reativa especificada
     */
    mlfAssign(&Qesp, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
    /*
     * 
     * 
     * %for x=1:nbus,
     * Bus.names  = Busnames(1,:);
     */
    mlfIndexAssign(
      &Bus,
      ".names",
      mclArrayRef2(
        mclVsa(Busnames, "Busnames"), _mxarray8_, mlfCreateColonIndex()));
    /*
     * Bus.number = Busdata(:,1)'; % No do barramento
     */
    mlfIndexAssign(
      &Bus,
      ".number",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray8_))));
    /*
     * Bus.type   = Busdata(:,2)'; % Tipo de Barramento
     */
    mlfIndexAssign(
      &Bus,
      ".type",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray9_))));
    /*
     * Bus.Pg     = Busdata(:,3)';
     */
    mlfIndexAssign(
      &Bus,
      ".Pg",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray10_))));
    /*
     * Bus.Qg     = Busdata(:,4)';
     */
    mlfIndexAssign(
      &Bus,
      ".Qg",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray11_))));
    /*
     * Bus.Pc     = Busdata(:,5)';
     */
    mlfIndexAssign(
      &Bus,
      ".Pc",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray12_))));
    /*
     * Bus.Qc     = Busdata(:,6)';
     */
    mlfIndexAssign(
      &Bus,
      ".Qc",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray13_))));
    /*
     * Bus.Vmag   = Busdata(:,7)';
     */
    mlfIndexAssign(
      &Bus,
      ".Vmag",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray14_))));
    /*
     * Bus.Vdeg   = Busdata(:,8)' .* pi/180 ; % Angulo da tensao convertidos em raianos 
     */
    mlfIndexAssign(
      &Bus,
      ".Vdeg",
      mclMrdivide(
        mclTimes(
          mlfCtranspose(
            mclVe(
              mclArrayRef2(
                mclVsa(Busdata, "Busdata"),
                mlfCreateColonIndex(),
                _mxarray15_))),
          _mxarray16_),
        _mxarray17_));
    /*
     * Bus.Vbase  = Busdata(:,9)'; % Tensao base do barramento
     */
    mlfIndexAssign(
      &Bus,
      ".Vbase",
      mlfCtranspose(
        mclVe(
          mclArrayRef2(
            mclVsa(Busdata, "Busdata"), mlfCreateColonIndex(), _mxarray18_))));
    /*
     * Pesp       = Bus.Pg - Bus.Pc; 
     */
    mlfAssign(
      &Pesp,
      mclFeval(
        mclValueVarargout(),
        mlxMinus,
        mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".Pg")),
        mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".Pc")),
        NULL));
    /*
     * Qesp       = Bus.Qg - Bus.Qc; 
     */
    mlfAssign(
      &Qesp,
      mclFeval(
        mclValueVarargout(),
        mlxMinus,
        mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".Qg")),
        mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".Qc")),
        NULL));
    /*
     * 
     * %end;    
     * 
     * swbusidx  = find(Bus.type==1)'; % Obtem o indice da barra swing.
     */
    mlfAssign(
      &swbusidx,
      mlfCtranspose(
        mclVe(
          mlfFind(
            NULL,
            NULL,
            mclFeval(
              mclValueVarargout(),
              mlxEq,
              mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".type")),
              _mxarray8_,
              NULL)))));
    /*
     * gerbusidx = find(Bus.type==2)'; % Obtem o indice da barra geracao.
     */
    mlfAssign(
      &gerbusidx,
      mlfCtranspose(
        mclVe(
          mlfFind(
            NULL,
            NULL,
            mclFeval(
              mclValueVarargout(),
              mlxEq,
              mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".type")),
              _mxarray9_,
              NULL)))));
    /*
     * lbusidx   = find(Bus.type==3)'; % Obtem o indice da barra carga.
     */
    mlfAssign(
      &lbusidx,
      mlfCtranspose(
        mclVe(
          mlfFind(
            NULL,
            NULL,
            mclFeval(
              mclValueVarargout(),
              mlxEq,
              mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".type")),
              _mxarray10_,
              NULL)))));
    /*
     * 
     * ngb       = length(gerbusidx);
     */
    mlfAssign(&ngb, mlfScalar(mclLengthInt(mclVv(gerbusidx, "gerbusidx"))));
    /*
     * nlb       = length(lbusidx); 
     */
    mlfAssign(&nlb, mlfScalar(mclLengthInt(mclVv(lbusidx, "lbusidx"))));
    /*
     * 
     * %% Definicao das condicoes iniciais 
     * %% 
     * for x=1:nbus,   
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(nbus, "nbus"));
        if (v_ > e_) {
            mlfAssign(&x, _mxarray4_);
        } else {
            /*
             * if Bus.type(x) == 2 % Barra de Geracao
             * Bus.Vdeg(x) = 0;
             * 
             * end   
             * 
             * if Bus.type(x) == 3 % Barra de Carga
             * Bus.Vmag(x) = 1; 
             * Bus.Vdeg(x) = 0; 
             * end
             * 
             * end    
             */
            for (; ; ) {
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxEq,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".type(?)", mlfScalar(v_))),
                        _mxarray9_,
                        NULL))) {
                    mlfIndexAssign(&Bus, ".Vdeg(?)", mlfScalar(v_), _mxarray6_);
                }
                if (mlfTobool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxEq,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".type(?)", mlfScalar(v_))),
                        _mxarray10_,
                        NULL))) {
                    mlfIndexAssign(&Bus, ".Vmag(?)", mlfScalar(v_), _mxarray8_);
                    mlfIndexAssign(&Bus, ".Vdeg(?)", mlfScalar(v_), _mxarray6_);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&x, mlfScalar(v_));
        }
    }
    /*
     * %% Fim =======
     * 
     * while (~isconv & iter < max_iter)
     */
    for (;;) {
        mxArray * a_ = mclInitialize(mclNot(mclVv(isconv, "isconv")));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclLt(mclVv(iter, "iter"), mclVv(max_iter, "max_iter"))))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        /*
         * 
         * Pcalc = zeros(nbus,1); % Potencia ativa calculada
         */
        mlfAssign(&Pcalc, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
        /*
         * Qcalc = zeros(nbus,1); % Potencia reativa calculada
         */
        mlfAssign(&Qcalc, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
        /*
         * DP    = zeros(nbus,1); % Mismatches de potencia ativa
         */
        mlfAssign(&DP, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
        /*
         * DQ    = zeros(nbus,1); % Mismatches de potencia reativa
         */
        mlfAssign(&DQ, mlfZeros(mclVv(nbus, "nbus"), _mxarray8_, NULL));
        /*
         * 
         * % Calcula as potencia nas barras de geracao
         * 
         * for x=1:length(gerbusidx),
         */
        {
            int v_ = mclForIntStart(1);
            int e_ = mclForIntEnd(
                       mlfScalar(mclLengthInt(mclVv(gerbusidx, "gerbusidx"))));
            if (v_ > e_) {
                mlfAssign(&x, _mxarray4_);
            } else {
                /*
                 * i = gerbusidx(1,x);
                 * for j=1:nbus,
                 * Dab = Bus.Vdeg(i) - Bus.Vdeg(j);
                 * Pcalc(i) = Pcalc(i) + (Bus.Vmag(j) * ( G(i,j) * cos(Dab) + B(i,j) * sin(Dab)) );
                 * Qcalc(i) = Qcalc(i) + (Bus.Vmag(j) * ( G(i,j) * sin(Dab) - B(i,j) * cos(Dab)) );
                 * end;
                 * Pcalc(i) = Bus.Vmag(i) * Pcalc(i);
                 * Qcalc(i) = Bus.Vmag(i) * Qcalc(i);
                 * DP(i) = Pesp(i) - Pcalc(i); % Calcula mismatche de potencia ativa 
                 * DQ(i) = Qesp(i) - Qcalc(i); % Calcula mismatche de potencia reativa      
                 * end;       
                 */
                for (; ; ) {
                    mlfAssign(
                      &i,
                      mclIntArrayRef2(mclVsv(gerbusidx, "gerbusidx"), 1, v_));
                    {
                        int v_0 = mclForIntStart(1);
                        int e_0 = mclForIntEnd(mclVv(nbus, "nbus"));
                        if (v_0 > e_0) {
                            mlfAssign(&j, _mxarray4_);
                        } else {
                            for (; ; ) {
                                mlfAssign(
                                  &Dab,
                                  mclFeval(
                                    mclValueVarargout(),
                                    mlxMinus,
                                    mclVe(
                                      mlfIndexRef(
                                        mclVsv(Bus, "Bus"),
                                        ".Vdeg(?)",
                                        mclVsv(i, "i"))),
                                    mclVe(
                                      mlfIndexRef(
                                        mclVsv(Bus, "Bus"),
                                        ".Vdeg(?)",
                                        mlfScalar(v_0))),
                                    NULL));
                                mclArrayAssign1(
                                  &Pcalc,
                                  mclPlus(
                                    mclVe(
                                      mclArrayRef1(
                                        mclVsv(Pcalc, "Pcalc"),
                                        mclVsv(i, "i"))),
                                    mclFeval(
                                      mclValueVarargout(),
                                      mlxMtimes,
                                      mclVe(
                                        mlfIndexRef(
                                          mclVsv(Bus, "Bus"),
                                          ".Vmag(?)",
                                          mlfScalar(v_0))),
                                      mclPlus(
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(G, "G"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_0))),
                                          mclVe(mlfCos(mclVv(Dab, "Dab")))),
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(B, "B"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_0))),
                                          mclVe(mlfSin(mclVv(Dab, "Dab"))))),
                                      NULL)),
                                  mclVsv(i, "i"));
                                mclArrayAssign1(
                                  &Qcalc,
                                  mclPlus(
                                    mclVe(
                                      mclArrayRef1(
                                        mclVsv(Qcalc, "Qcalc"),
                                        mclVsv(i, "i"))),
                                    mclFeval(
                                      mclValueVarargout(),
                                      mlxMtimes,
                                      mclVe(
                                        mlfIndexRef(
                                          mclVsv(Bus, "Bus"),
                                          ".Vmag(?)",
                                          mlfScalar(v_0))),
                                      mclMinus(
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(G, "G"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_0))),
                                          mclVe(mlfSin(mclVv(Dab, "Dab")))),
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(B, "B"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_0))),
                                          mclVe(mlfCos(mclVv(Dab, "Dab"))))),
                                      NULL)),
                                  mclVsv(i, "i"));
                                if (v_0 == e_0) {
                                    break;
                                }
                                ++v_0;
                            }
                            mlfAssign(&j, mlfScalar(v_0));
                        }
                    }
                    mclArrayAssign1(
                      &Pcalc,
                      mclFeval(
                        mclValueVarargout(),
                        mlxMtimes,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".Vmag(?)", mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(mclVsv(Pcalc, "Pcalc"), mclVsv(i, "i"))),
                        NULL),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &Qcalc,
                      mclFeval(
                        mclValueVarargout(),
                        mlxMtimes,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".Vmag(?)", mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(mclVsv(Qcalc, "Qcalc"), mclVsv(i, "i"))),
                        NULL),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &DP,
                      mclMinus(
                        mclVe(
                          mclArrayRef1(mclVsv(Pesp, "Pesp"), mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(
                            mclVsv(Pcalc, "Pcalc"), mclVsv(i, "i")))),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &DQ,
                      mclMinus(
                        mclVe(
                          mclArrayRef1(mclVsv(Qesp, "Qesp"), mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(
                            mclVsv(Qcalc, "Qcalc"), mclVsv(i, "i")))),
                      mclVsv(i, "i"));
                    if (v_ == e_) {
                        break;
                    }
                    ++v_;
                }
                mlfAssign(&x, mlfScalar(v_));
            }
        }
        /*
         * 
         * % Calcula as potencia nas barras de carga
         * 
         * for x=1:length(lbusidx),
         */
        {
            int v_ = mclForIntStart(1);
            int e_ = mclForIntEnd(
                       mlfScalar(mclLengthInt(mclVv(lbusidx, "lbusidx"))));
            if (v_ > e_) {
                mlfAssign(&x, _mxarray4_);
            } else {
                /*
                 * i = lbusidx(x,1);
                 * for j=1:nbus,
                 * Dab = Bus.Vdeg(i) - Bus.Vdeg(j);
                 * Pcalc(i) = Pcalc(i) + (Bus.Vmag(j) * ( G(i,j) * cos(Dab) + B(i,j) * sin(Dab)) );
                 * Qcalc(i) = Qcalc(i) + (Bus.Vmag(j) * ( G(i,j) * sin(Dab) - B(i,j) * cos(Dab)) );
                 * end;
                 * Pcalc(i) = Bus.Vmag(i) * Pcalc(i);
                 * Qcalc(i) = Bus.Vmag(i) * Qcalc(i);
                 * DP(i) = Pesp(i) - Pcalc(i); % Calcula mismatche de potencia ativa 
                 * DQ(i) = Qesp(i) - Qcalc(i); % Calcula mismatche de potencia reativa      
                 * end;      
                 */
                for (; ; ) {
                    mlfAssign(
                      &i, mclIntArrayRef2(mclVsv(lbusidx, "lbusidx"), v_, 1));
                    {
                        int v_1 = mclForIntStart(1);
                        int e_1 = mclForIntEnd(mclVv(nbus, "nbus"));
                        if (v_1 > e_1) {
                            mlfAssign(&j, _mxarray4_);
                        } else {
                            for (; ; ) {
                                mlfAssign(
                                  &Dab,
                                  mclFeval(
                                    mclValueVarargout(),
                                    mlxMinus,
                                    mclVe(
                                      mlfIndexRef(
                                        mclVsv(Bus, "Bus"),
                                        ".Vdeg(?)",
                                        mclVsv(i, "i"))),
                                    mclVe(
                                      mlfIndexRef(
                                        mclVsv(Bus, "Bus"),
                                        ".Vdeg(?)",
                                        mlfScalar(v_1))),
                                    NULL));
                                mclArrayAssign1(
                                  &Pcalc,
                                  mclPlus(
                                    mclVe(
                                      mclArrayRef1(
                                        mclVsv(Pcalc, "Pcalc"),
                                        mclVsv(i, "i"))),
                                    mclFeval(
                                      mclValueVarargout(),
                                      mlxMtimes,
                                      mclVe(
                                        mlfIndexRef(
                                          mclVsv(Bus, "Bus"),
                                          ".Vmag(?)",
                                          mlfScalar(v_1))),
                                      mclPlus(
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(G, "G"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_1))),
                                          mclVe(mlfCos(mclVv(Dab, "Dab")))),
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(B, "B"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_1))),
                                          mclVe(mlfSin(mclVv(Dab, "Dab"))))),
                                      NULL)),
                                  mclVsv(i, "i"));
                                mclArrayAssign1(
                                  &Qcalc,
                                  mclPlus(
                                    mclVe(
                                      mclArrayRef1(
                                        mclVsv(Qcalc, "Qcalc"),
                                        mclVsv(i, "i"))),
                                    mclFeval(
                                      mclValueVarargout(),
                                      mlxMtimes,
                                      mclVe(
                                        mlfIndexRef(
                                          mclVsv(Bus, "Bus"),
                                          ".Vmag(?)",
                                          mlfScalar(v_1))),
                                      mclMinus(
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(G, "G"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_1))),
                                          mclVe(mlfSin(mclVv(Dab, "Dab")))),
                                        mclMtimes(
                                          mclVe(
                                            mclArrayRef2(
                                              mclVsv(B, "B"),
                                              mclVsv(i, "i"),
                                              mlfScalar(v_1))),
                                          mclVe(mlfCos(mclVv(Dab, "Dab"))))),
                                      NULL)),
                                  mclVsv(i, "i"));
                                if (v_1 == e_1) {
                                    break;
                                }
                                ++v_1;
                            }
                            mlfAssign(&j, mlfScalar(v_1));
                        }
                    }
                    mclArrayAssign1(
                      &Pcalc,
                      mclFeval(
                        mclValueVarargout(),
                        mlxMtimes,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".Vmag(?)", mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(mclVsv(Pcalc, "Pcalc"), mclVsv(i, "i"))),
                        NULL),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &Qcalc,
                      mclFeval(
                        mclValueVarargout(),
                        mlxMtimes,
                        mclVe(
                          mlfIndexRef(
                            mclVsv(Bus, "Bus"), ".Vmag(?)", mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(mclVsv(Qcalc, "Qcalc"), mclVsv(i, "i"))),
                        NULL),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &DP,
                      mclMinus(
                        mclVe(
                          mclArrayRef1(mclVsv(Pesp, "Pesp"), mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(
                            mclVsv(Pcalc, "Pcalc"), mclVsv(i, "i")))),
                      mclVsv(i, "i"));
                    mclArrayAssign1(
                      &DQ,
                      mclMinus(
                        mclVe(
                          mclArrayRef1(mclVsv(Qesp, "Qesp"), mclVsv(i, "i"))),
                        mclVe(
                          mclArrayRef1(
                            mclVsv(Qcalc, "Qcalc"), mclVsv(i, "i")))),
                      mclVsv(i, "i"));
                    if (v_ == e_) {
                        break;
                    }
                    ++v_;
                }
                mlfAssign(&x, mlfScalar(v_));
            }
        }
        /*
         * 
         * %% Incia calculo mtriz jacobiana
         * 
         * 
         * iter = iter + 1; % contador de iteracoes
         */
        mlfAssign(&iter, mclPlus(mclVv(iter, "iter"), _mxarray8_));
        /*
         * 
         * jota = sqrt(-1);
         */
        mlfAssign(&jota, mlfSqrt(_mxarray19_));
        /*
         * 
         * V = Bus.Vmag';
         */
        mlfAssign(
          &V,
          mclFeval(
            mclValueVarargout(),
            mlxCtranspose,
            mclVe(mlfIndexRef(mclVsv(Bus, "Bus"), ".Vmag")),
            NULL));
        /*
         * n = length(V);
         */
        mlfAssign(&n, mlfScalar(mclLengthInt(mclVv(V, "V"))));
        /*
         * 
         * Ibus = Ybus * V;
         */
        mlfAssign(&Ibus, mclMtimes(mclVa(Ybus, "Ybus"), mclVv(V, "V")));
        /*
         * Sbus = DP + jota * DQ;
         */
        mlfAssign(
          &Sbus,
          mclPlus(
            mclVv(DP, "DP"), mclMtimes(mclVv(jota, "jota"), mclVv(DQ, "DQ"))));
        /*
         * 
         * F    = [real(Sbus([gerbusidx;lbusidx])); imag(Sbus(lbusidx))];
         */
        mlfAssign(
          &F,
          mlfVertcat(
            mclVe(
              mlfReal(
                mclVe(
                  mclArrayRef1(
                    mclVsv(Sbus, "Sbus"),
                    mlfVertcat(
                      mclVv(gerbusidx, "gerbusidx"),
                      mclVv(lbusidx, "lbusidx"),
                      NULL))))),
            mclVe(
              mlfImag(
                mclVe(
                  mclArrayRef1(
                    mclVsv(Sbus, "Sbus"), mclVsv(lbusidx, "lbusidx"))))),
            NULL));
        /*
         * 
         * normF = norm(F,inf);
         */
        mlfAssign(&normF, mlfNorm(mclVv(F, "F"), _mxarray20_));
        /*
         * if normF < error
         */
        if (mclLtBool(mclVv(normF, "normF"), mclVv(error, "error"))) {
            /*
             * isconv = 1;   
             */
            mlfAssign(&isconv, _mxarray8_);
            /*
             * if ~isconv
             */
            if (mclNotBool(mclVv(isconv, "isconv"))) {
                /*
                 * fprintf(1,'\nO metodo nao convergiu em %2d iteracoes. \n\n',iter);
                 */
                mclAssignAns(
                  &ans,
                  mlfNFprintf(
                    0, _mxarray8_, _mxarray21_, mclVv(iter, "iter"), NULL));
            /*
             * else
             */
            } else {
                /*
                 * fprintf(1,'\nO metodo convergiu em %2d iteracoes. \n\n',iter);
                 */
                mclAssignAns(
                  &ans,
                  mlfNFprintf(
                    0, _mxarray8_, _mxarray23_, mclVv(iter, "iter"), NULL));
            /*
             * end;
             */
            }
            /*
             * niter = iter;
             */
            mlfAssign(niter, mclVsv(iter, "iter"));
            /*
             * erro  = error;
             */
            mlfAssign(erro, mclVsv(error, "error"));
            /*
             * Bus.Vdeg(gerbusidx) = Bus.Vdeg(gerbusidx) .* 180/pi;
             */
            mlfIndexAssign(
              &Bus,
              ".Vdeg(?)",
              mclVsv(gerbusidx, "gerbusidx"),
              mclMrdivide(
                mclFeval(
                  mclValueVarargout(),
                  mlxTimes,
                  mclVe(
                    mlfIndexRef(
                      mclVsv(Bus, "Bus"),
                      ".Vdeg(?)",
                      mclVsv(gerbusidx, "gerbusidx"))),
                  _mxarray17_,
                  NULL),
                _mxarray16_));
            /*
             * Bus.Vdeg(lbusidx) = Bus.Vdeg(lbusidx) .* 180/pi;
             */
            mlfIndexAssign(
              &Bus,
              ".Vdeg(?)",
              mclVsv(lbusidx, "lbusidx"),
              mclMrdivide(
                mclFeval(
                  mclValueVarargout(),
                  mlxTimes,
                  mclVe(
                    mlfIndexRef(
                      mclVsv(Bus, "Bus"),
                      ".Vdeg(?)",
                      mclVsv(lbusidx, "lbusidx"))),
                  _mxarray17_,
                  NULL),
                _mxarray16_));
            /*
             * break;
             */
            break;
        /*
         * end   
         */
        }
        /*
         * 
         * if issparse(Ybus)
         */
        if (mlfTobool(mclVe(mlfIssparse(mclVa(Ybus, "Ybus"))))) {
            /*
             * diagV     = spdiags(V,0,n,n); 
             */
            mlfAssign(
              &diagV,
              mlfSpdiags(
                NULL, mclVv(V, "V"), _mxarray6_, mclVv(n, "n"), mclVv(n, "n")));
            /*
             * diagIbus  = spdiags(Ibus,0,n,n);
             */
            mlfAssign(
              &diagIbus,
              mlfSpdiags(
                NULL,
                mclVv(Ibus, "Ibus"),
                _mxarray6_,
                mclVv(n, "n"),
                mclVv(n, "n")));
            /*
             * diagVnorm = spdiags(V./abs(V),0,n,n); 
             */
            mlfAssign(
              &diagVnorm,
              mlfSpdiags(
                NULL,
                mclRdivide(mclVv(V, "V"), mclVe(mlfAbs(mclVv(V, "V")))),
                _mxarray6_,
                mclVv(n, "n"),
                mclVv(n, "n")));
        /*
         * else
         */
        } else {
            /*
             * diagV     = diag(V);
             */
            mlfAssign(&diagV, mlfDiag(mclVv(V, "V"), NULL));
            /*
             * diagIbus  = diag(Ibus);
             */
            mlfAssign(&diagIbus, mlfDiag(mclVv(Ibus, "Ibus"), NULL));
            /*
             * diagVnorm = diag(V./abs(V));
             */
            mlfAssign(
              &diagVnorm,
              mlfDiag(
                mclRdivide(mclVv(V, "V"), mclVe(mlfAbs(mclVv(V, "V")))), NULL));
        /*
         * end;
         */
        }
        /*
         * 
         * dSbus_dVm = diagV * conj(Ybus * diagVnorm) + conj(diagIbus) * diagVnorm;
         */
        mlfAssign(
          &dSbus_dVm,
          mclPlus(
            mclMtimes(
              mclVv(diagV, "diagV"),
              mclVe(
                mlfConj(
                  mclMtimes(
                    mclVa(Ybus, "Ybus"), mclVv(diagVnorm, "diagVnorm"))))),
            mclMtimes(
              mclVe(mlfConj(mclVv(diagIbus, "diagIbus"))),
              mclVv(diagVnorm, "diagVnorm"))));
        /*
         * dSbus_dVa = jota * diagV * conj(diagIbus - Ybus * diagV);
         */
        mlfAssign(
          &dSbus_dVa,
          mclMtimes(
            mclMtimes(mclVv(jota, "jota"), mclVv(diagV, "diagV")),
            mclVe(
              mlfConj(
                mclMinus(
                  mclVv(diagIbus, "diagIbus"),
                  mclMtimes(mclVa(Ybus, "Ybus"), mclVv(diagV, "diagV")))))));
        /*
         * 
         * H = - real(dSbus_dVa([gerbusidx;lbusidx],[gerbusidx;lbusidx])); 
         */
        mlfAssign(
          &H,
          mclUminus(
            mclVe(
              mlfReal(
                mclVe(
                  mclArrayRef2(
                    mclVsv(dSbus_dVa, "dSbus_dVa"),
                    mlfVertcat(
                      mclVv(gerbusidx, "gerbusidx"),
                      mclVv(lbusidx, "lbusidx"),
                      NULL),
                    mlfVertcat(
                      mclVv(gerbusidx, "gerbusidx"),
                      mclVv(lbusidx, "lbusidx"),
                      NULL)))))));
        /*
         * N = - real(dSbus_dVm([gerbusidx;lbusidx],lbusidx)); 
         */
        mlfAssign(
          &N,
          mclUminus(
            mclVe(
              mlfReal(
                mclVe(
                  mclArrayRef2(
                    mclVsv(dSbus_dVm, "dSbus_dVm"),
                    mlfVertcat(
                      mclVv(gerbusidx, "gerbusidx"),
                      mclVv(lbusidx, "lbusidx"),
                      NULL),
                    mclVsv(lbusidx, "lbusidx")))))));
        /*
         * J = - imag(dSbus_dVa(lbusidx,[gerbusidx,lbusidx']));
         */
        mlfAssign(
          &J,
          mclUminus(
            mclVe(
              mlfImag(
                mclVe(
                  mclArrayRef2(
                    mclVsv(dSbus_dVa, "dSbus_dVa"),
                    mclVsv(lbusidx, "lbusidx"),
                    mlfHorzcat(
                      mclVv(gerbusidx, "gerbusidx"),
                      mlfCtranspose(mclVv(lbusidx, "lbusidx")),
                      NULL)))))));
        /*
         * L = - imag(dSbus_dVm(lbusidx,lbusidx));
         */
        mlfAssign(
          &L,
          mclUminus(
            mclVe(
              mlfImag(
                mclVe(
                  mclArrayRef2(
                    mclVsv(dSbus_dVm, "dSbus_dVm"),
                    mclVsv(lbusidx, "lbusidx"),
                    mclVsv(lbusidx, "lbusidx")))))));
        /*
         * 
         * Jac = [H N;J L;];
         */
        mlfAssign(
          &Jac,
          mlfVertcat(
            mlfHorzcat(mclVv(H, "H"), mclVv(N, "N"), NULL),
            mlfHorzcat(mclVv(J, "J"), mclVv(L, "L"), NULL),
            NULL));
        /*
         * dx  = -inv(Jac) * F;
         */
        mlfAssign(
          &dx,
          mclMtimes(
            mclUminus(mclVe(mlfInv(mclVv(Jac, "Jac")))), mclVv(F, "F")));
        /*
         * 
         * if ~isempty(gerbusidx)
         */
        if (mclNotBool(mclVe(mlfIsempty(mclVv(gerbusidx, "gerbusidx"))))) {
            /*
             * Bus.Vdeg(gerbusidx) = Bus.Vdeg(gerbusidx) + dx(1:ngb);
             */
            mlfIndexAssign(
              &Bus,
              ".Vdeg(?)",
              mclVsv(gerbusidx, "gerbusidx"),
              mclFeval(
                mclValueVarargout(),
                mlxPlus,
                mclVe(
                  mlfIndexRef(
                    mclVsv(Bus, "Bus"),
                    ".Vdeg(?)",
                    mclVsv(gerbusidx, "gerbusidx"))),
                mclVe(
                  mclArrayRef1(
                    mclVsv(dx, "dx"),
                    mlfColon(_mxarray8_, mclVv(ngb, "ngb"), NULL))),
                NULL));
        /*
         * end
         */
        }
        /*
         * VTemp(lbusidx) = dx(ngb + 1 : ngb + nlb);
         */
        mclArrayAssign1(
          &VTemp,
          mclArrayRef1(
            mclVsv(dx, "dx"),
            mlfColon(
              mclPlus(mclVv(ngb, "ngb"), _mxarray8_),
              mclPlus(mclVv(ngb, "ngb"), mclVv(nlb, "nlb")),
              NULL)),
          mclVsv(lbusidx, "lbusidx"));
        /*
         * Bus.Vdeg(lbusidx) = Bus.Vdeg(lbusidx) + VTemp(lbusidx);
         */
        mlfIndexAssign(
          &Bus,
          ".Vdeg(?)",
          mclVsv(lbusidx, "lbusidx"),
          mclFeval(
            mclValueVarargout(),
            mlxPlus,
            mclVe(
              mlfIndexRef(
                mclVsv(Bus, "Bus"), ".Vdeg(?)", mclVsv(lbusidx, "lbusidx"))),
            mclVe(
              mclArrayRef1(mclVsv(VTemp, "VTemp"), mclVsv(lbusidx, "lbusidx"))),
            NULL));
        /*
         * VTemp(lbusidx) = dx(ngb + nlb + 1:ngb + 2*nlb);
         */
        mclArrayAssign1(
          &VTemp,
          mclArrayRef1(
            mclVsv(dx, "dx"),
            mlfColon(
              mclPlus(
                mclPlus(mclVv(ngb, "ngb"), mclVv(nlb, "nlb")), _mxarray8_),
              mclPlus(
                mclVv(ngb, "ngb"), mclMtimes(_mxarray9_, mclVv(nlb, "nlb"))),
              NULL)),
          mclVsv(lbusidx, "lbusidx"));
        /*
         * Bus.Vmag(lbusidx') = Bus.Vmag(lbusidx') + VTemp(lbusidx);
         */
        mlfIndexAssign(
          &Bus,
          ".Vmag(?)",
          mlfCtranspose(mclVv(lbusidx, "lbusidx")),
          mclFeval(
            mclValueVarargout(),
            mlxPlus,
            mclVe(
              mlfIndexRef(
                mclVsv(Bus, "Bus"),
                ".Vmag(?)",
                mlfCtranspose(mclVv(lbusidx, "lbusidx")))),
            mclVe(
              mclArrayRef1(mclVsv(VTemp, "VTemp"), mclVsv(lbusidx, "lbusidx"))),
            NULL));
    /*
     * end 
     */
    }
    /*
     * 
     * newbusdata = Bus;
     */
    mlfAssign(&newbusdata, mclVsv(Bus, "Bus"));
    mclValidateOutput(newbusdata, 1, nargout_, "newbusdata", "newtonraph");
    mclValidateOutput(*erro, 2, nargout_, "erro", "newtonraph");
    mclValidateOutput(*niter, 3, nargout_, "niter", "newtonraph");
    mxDestroyArray(Bus);
    mxDestroyArray(error);
    mxDestroyArray(iter);
    mxDestroyArray(max_iter);
    mxDestroyArray(isconv);
    mxDestroyArray(G);
    mxDestroyArray(B);
    mxDestroyArray(nbus);
    mxDestroyArray(bcol);
    mxDestroyArray(Pesp);
    mxDestroyArray(Qesp);
    mxDestroyArray(swbusidx);
    mxDestroyArray(gerbusidx);
    mxDestroyArray(lbusidx);
    mxDestroyArray(ngb);
    mxDestroyArray(nlb);
    mxDestroyArray(x);
    mxDestroyArray(Pcalc);
    mxDestroyArray(Qcalc);
    mxDestroyArray(DP);
    mxDestroyArray(DQ);
    mxDestroyArray(i);
    mxDestroyArray(j);
    mxDestroyArray(Dab);
    mxDestroyArray(jota);
    mxDestroyArray(V);
    mxDestroyArray(n);
    mxDestroyArray(Ibus);
    mxDestroyArray(Sbus);
    mxDestroyArray(F);
    mxDestroyArray(normF);
    mxDestroyArray(ans);
    mxDestroyArray(diagV);
    mxDestroyArray(diagIbus);
    mxDestroyArray(diagVnorm);
    mxDestroyArray(dSbus_dVm);
    mxDestroyArray(dSbus_dVa);
    mxDestroyArray(H);
    mxDestroyArray(N);
    mxDestroyArray(J);
    mxDestroyArray(L);
    mxDestroyArray(Jac);
    mxDestroyArray(dx);
    mxDestroyArray(VTemp);
    mxDestroyArray(Busdata);
    mxDestroyArray(Busnames);
    mxDestroyArray(Ybus);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return newbusdata;
    /*
     * return;
     */
}
