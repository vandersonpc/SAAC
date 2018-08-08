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
#include "sysload.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "strhcat.h"

static mxChar _array1_[132] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'y', 's', 'l', 'o',
                                'a', 'd', ' ', 'L', 'i', 'n', 'e', ':', ' ',
                                '1', ' ', 'C', 'o', 'l', 'u', 'm', 'n', ':',
                                ' ', '1', ' ', 'T', 'h', 'e', ' ', 'f', 'u',
                                'n', 'c', 't', 'i', 'o', 'n', ' ', '"', 's',
                                'y', 's', 'l', 'o', 'a', 'd', '"', ' ', 'w',
                                'a', 's', ' ', 'c', 'a', 'l', 'l', 'e', 'd',
                                ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o', 'r',
                                'e', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h',
                                'e', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e',
                                'd', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'o', 'u', 't', 'p', 'u', 't',
                                's', ' ', '(', '5', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[131] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 'y', 's', 'l', 'o',
                                'a', 'd', ' ', 'L', 'i', 'n', 'e', ':', ' ',
                                '1', ' ', 'C', 'o', 'l', 'u', 'm', 'n', ':',
                                ' ', '1', ' ', 'T', 'h', 'e', ' ', 'f', 'u',
                                'n', 'c', 't', 'i', 'o', 'n', ' ', '"', 's',
                                'y', 's', 'l', 'o', 'a', 'd', '"', ' ', 'w',
                                'a', 's', ' ', 'c', 'a', 'l', 'l', 'e', 'd',
                                ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o', 'r',
                                'e', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h',
                                'e', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e',
                                'd', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'i', 'n', 'p', 'u', 't', 's',
                                ' ', '(', '1', ')', '.' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;

static mxChar _array6_[42] = { 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n',
                               'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't',
                               'r', 'a', 'd', 'o', ' ', 'o', 'u', ' ', 'e',
                               'r', 'r', 'o', ' ', 'd', 'e', ' ', 'l', 'e',
                               'i', 't', 'u', 'r', 'a', '.' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static mxChar _array12_[3] = { 'E', 'N', 'D' };
static mxArray * _mxarray11_;

static mxChar _array14_[1] = { '%' };
static mxArray * _mxarray13_;

static mxChar _array16_[4] = { 'N', 'A', 'M', 'E' };
static mxArray * _mxarray15_;
static mxArray * _mxarray17_;

static mxChar _array19_[1] = { '=' };
static mxArray * _mxarray18_;

static mxChar _array21_[1] = { ';' };
static mxArray * _mxarray20_;

static mxChar _array23_[5] = { 'S', 'B', 'A', 'S', 'E' };
static mxArray * _mxarray22_;

static mxChar _array25_[8] = { 'B', 'U', 'S', 'N', 'A', 'M', 'E', 'S' };
static mxArray * _mxarray24_;

static mxChar _array27_[1] = { ',' };
static mxArray * _mxarray26_;

static mxChar _array29_[2] = { '%', 's' };
static mxArray * _mxarray28_;
static mxArray * _mxarray30_;

static mxChar _array32_[7] = { 'B', 'U', 'S', 'D', 'A', 'T', 'A' };
static mxArray * _mxarray31_;

static mxChar _array34_[7] = { 'S', 'Y', 'S', 'D', 'A', 'T', 'A' };
static mxArray * _mxarray33_;

void InitializeModule_sysload(void) {
    _mxarray0_ = mclInitializeString(132, _array1_);
    _mxarray2_ = mclInitializeString(131, _array3_);
    _mxarray4_ = mclInitializeDouble(-1.0);
    _mxarray5_ = mclInitializeString(42, _array6_);
    _mxarray7_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray8_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray9_ = mclInitializeDouble(0.0);
    _mxarray10_ = mclInitializeDouble(999.0);
    _mxarray11_ = mclInitializeString(3, _array12_);
    _mxarray13_ = mclInitializeString(1, _array14_);
    _mxarray15_ = mclInitializeString(4, _array16_);
    _mxarray17_ = mclInitializeDouble(1.0);
    _mxarray18_ = mclInitializeString(1, _array19_);
    _mxarray20_ = mclInitializeString(1, _array21_);
    _mxarray22_ = mclInitializeString(5, _array23_);
    _mxarray24_ = mclInitializeString(8, _array25_);
    _mxarray26_ = mclInitializeString(1, _array27_);
    _mxarray28_ = mclInitializeString(2, _array29_);
    _mxarray30_ = mclInitializeDouble(15.0);
    _mxarray31_ = mclInitializeString(7, _array32_);
    _mxarray33_ = mclInitializeString(7, _array34_);
}

void TerminateModule_sysload(void) {
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Msysload(mxArray * * sbase,
                          mxArray * * busnames,
                          mxArray * * busdata,
                          mxArray * * sysdata,
                          int nargout_,
                          mxArray * file);

_mexLocalFunctionTable _local_function_table_sysload
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfSysload" contains the normal interface for the "sysload"
 * M-function from file "C:\Projeto Final\Source new\SYSLOAD.M" (lines 1-139).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfSysload(mxArray * * sbase,
                     mxArray * * busnames,
                     mxArray * * busdata,
                     mxArray * * sysdata,
                     mxArray * file) {
    int nargout = 1;
    mxArray * name = mclGetUninitializedArray();
    mxArray * sbase__ = mclGetUninitializedArray();
    mxArray * busnames__ = mclGetUninitializedArray();
    mxArray * busdata__ = mclGetUninitializedArray();
    mxArray * sysdata__ = mclGetUninitializedArray();
    mlfEnterNewContext(4, 1, sbase, busnames, busdata, sysdata, file);
    if (sbase != NULL) {
        ++nargout;
    }
    if (busnames != NULL) {
        ++nargout;
    }
    if (busdata != NULL) {
        ++nargout;
    }
    if (sysdata != NULL) {
        ++nargout;
    }
    name
      = Msysload(&sbase__, &busnames__, &busdata__, &sysdata__, nargout, file);
    mlfRestorePreviousContext(4, 1, sbase, busnames, busdata, sysdata, file);
    if (sbase != NULL) {
        mclCopyOutputArg(sbase, sbase__);
    } else {
        mxDestroyArray(sbase__);
    }
    if (busnames != NULL) {
        mclCopyOutputArg(busnames, busnames__);
    } else {
        mxDestroyArray(busnames__);
    }
    if (busdata != NULL) {
        mclCopyOutputArg(busdata, busdata__);
    } else {
        mxDestroyArray(busdata__);
    }
    if (sysdata != NULL) {
        mclCopyOutputArg(sysdata, sysdata__);
    } else {
        mxDestroyArray(sysdata__);
    }
    return mlfReturnValue(name);
}

/*
 * The function "mlxSysload" contains the feval interface for the "sysload"
 * M-function from file "C:\Projeto Final\Source new\SYSLOAD.M" (lines 1-139).
 * The feval function calls the implementation version of sysload through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxSysload(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[5];
    int i;
    if (nlhs > 5) {
        mlfError(_mxarray0_);
    }
    if (nrhs > 1) {
        mlfError(_mxarray2_);
    }
    for (i = 0; i < 5; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0]
      = Msysload(&mplhs[1], &mplhs[2], &mplhs[3], &mplhs[4], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 5 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 5; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Msysload" is the implementation version of the "sysload"
 * M-function from file "C:\Projeto Final\Source new\SYSLOAD.M" (lines 1-139).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [name,sbase,busnames,busdata,sysdata] = sysload(file)
 */
static mxArray * Msysload(mxArray * * sbase,
                          mxArray * * busnames,
                          mxArray * * busdata,
                          mxArray * * sysdata,
                          int nargout_,
                          mxArray * file) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_sysload);
    mxArray * name = mclGetUninitializedArray();
    mxArray * x = mclGetUninitializedArray();
    mxArray * startidx = mclGetUninitializedArray();
    mxArray * totalidx = mclGetUninitializedArray();
    mxArray * endidx = mclGetUninitializedArray();
    mxArray * equalidx = mclGetUninitializedArray();
    mxArray * commaidx = mclGetUninitializedArray();
    mxArray * lnum = mclGetUninitializedArray();
    mxArray * max_lin = mclGetUninitializedArray();
    mxArray * loadsys = mclGetUninitializedArray();
    mxArray * loadbus = mclGetUninitializedArray();
    mxArray * sline = mclGetUninitializedArray();
    mxArray * ans = mclGetUninitializedArray();
    mxArray * fid = mclGetUninitializedArray();
    mclCopyArray(&file);
    /*
     * 
     * %
     * %       FUNCAO: sysload.m - Le o arquivo de dados que contem as 
     * %                           informacaoes do sistema de potencia.
     * %
     * % Variaveis de entrada:
     * %
     * %   file    - nome do arquivo de dados.
     * %
     * % Veriaveis de saida
     * %
     * %   name    - Nome do sistema a ser calculado.
     * %
     * %   sbase   - Potencia base do sistema.
     * %
     * %   busdata - Matriz que contem as informacoes dos barramentos. 
     * % 
     * %   sysdata - Matriz que contem os dados dos componentes do sistema.
     * %
     * %
     * %       VERSÃO: 1.00 - 21/out/2006                                      
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
     * %
     * % Abre o arquivo
     * %
     * 
     * fid = fopen(file);
     */
    mlfAssign(&fid, mlfFopen(NULL, NULL, mclVa(file, "file"), NULL, NULL));
    /*
     * if fid==-1
     */
    if (mclEqBool(mclVv(fid, "fid"), _mxarray4_)) {
        /*
         * error('Arquivo nao encontrado ou erro de leitura.');
         */
        mlfError(_mxarray5_);
    /*
     * end
     */
    }
    /*
     * 
     * %
     * % Inicializa variaveis
     * %
     * busdata = [];
     */
    mlfAssign(busdata, _mxarray7_);
    /*
     * sysdata = [];
     */
    mlfAssign(sysdata, _mxarray7_);
    /*
     * sline   = '';
     */
    mlfAssign(&sline, _mxarray8_);
    /*
     * loadbus = 0;
     */
    mlfAssign(&loadbus, _mxarray9_);
    /*
     * loadsys = 0;
     */
    mlfAssign(&loadsys, _mxarray9_);
    /*
     * max_lin = 0;
     */
    mlfAssign(&max_lin, _mxarray9_);
    /*
     * lnum    = 0;
     */
    mlfAssign(&lnum, _mxarray9_);
    /*
     * 
     * while max_lin ~= 999
     */
    while (mclNeBool(mclVv(max_lin, "max_lin"), _mxarray10_)) {
        /*
         * sline = fgetl(fid);    
         */
        mlfAssign(&sline, mlfFgetl(mclVv(fid, "fid")));
        /*
         * if ~isempty(sline)        
         */
        if (mclNotBool(mclVe(mlfIsempty(mclVv(sline, "sline"))))) {
            /*
             * if strcmp(upper(sline),'END')
             */
            if (mlfTobool(
                  mclVe(
                    mlfStrcmp(
                      mclVe(mlfUpper(mclVv(sline, "sline"))), _mxarray11_)))) {
                /*
                 * break;
                 */
                break;
            /*
             * end   
             */
            }
            /*
             * if isempty(findstr(sline,'%'))
             */
            if (mlfTobool(
                  mclVe(
                    mlfIsempty(
                      mclVe(
                        mlfFindstr(mclVv(sline, "sline"), _mxarray13_)))))) {
                /*
                 * 
                 * %
                 * %Le o nomoe do sistema
                 * %
                 * 
                 * if ~isempty(findstr(upper(sline),'NAME')) & min(findstr(upper(sline),'NAME')) == 1 
                 */
                mxArray * a_ = mclInitialize(
                                 mclNot(
                                   mclVe(
                                     mlfIsempty(
                                       mclVe(
                                         mlfFindstr(
                                           mclVe(
                                             mlfUpper(mclVv(sline, "sline"))),
                                           _mxarray15_))))));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(
                           a_,
                           mclEq(
                             mclVe(
                               mlfMin(
                                 NULL,
                                 mclVe(
                                   mlfFindstr(
                                     mclVe(mlfUpper(mclVv(sline, "sline"))),
                                     _mxarray15_)),
                                 NULL,
                                 NULL)),
                             _mxarray17_)))) {
                    mxDestroyArray(a_);
                    /*
                     * name  = sline(1,max(findstr(sline,'=')) + 1:findstr(sline,';') - 1 ); 
                     */
                    mlfAssign(
                      &name,
                      mclArrayRef2(
                        mclVsv(sline, "sline"),
                        _mxarray17_,
                        mlfColon(
                          mclPlus(
                            mclVe(
                              mlfMax(
                                NULL,
                                mclVe(
                                  mlfFindstr(
                                    mclVv(sline, "sline"), _mxarray18_)),
                                NULL,
                                NULL)),
                            _mxarray17_),
                          mclMinus(
                            mclVe(
                              mlfFindstr(mclVv(sline, "sline"), _mxarray20_)),
                            _mxarray17_),
                          NULL)));
                } else {
                    mxDestroyArray(a_);
                }
                /*
                 * end
                 * 
                 * %
                 * %Le a potencia base
                 * %
                 * 
                 * if ~isempty(findstr(upper(sline),'SBASE'))
                 */
                if (mclNotBool(
                      mclVe(
                        mlfIsempty(
                          mclVe(
                            mlfFindstr(
                              mclVe(mlfUpper(mclVv(sline, "sline"))),
                              _mxarray22_)))))) {
                    /*
                     * sbase = str2num(sline(1,max(findstr(sline,'=')) + 1:findstr(sline,';') - 1 )); 
                     */
                    mlfAssign(
                      sbase,
                      mlfStr2num(
                        mclVe(
                          mclArrayRef2(
                            mclVsv(sline, "sline"),
                            _mxarray17_,
                            mlfColon(
                              mclPlus(
                                mclVe(
                                  mlfMax(
                                    NULL,
                                    mclVe(
                                      mlfFindstr(
                                        mclVv(sline, "sline"), _mxarray18_)),
                                    NULL,
                                    NULL)),
                                _mxarray17_),
                              mclMinus(
                                mclVe(
                                  mlfFindstr(
                                    mclVv(sline, "sline"), _mxarray20_)),
                                _mxarray17_),
                              NULL)))));
                /*
                 * end
                 */
                }
                /*
                 * 
                 * %
                 * %Le os nomes dos barramentos
                 * %
                 * 
                 * if ~isempty(findstr(upper(sline),'BUSNAMES'))
                 */
                if (mclNotBool(
                      mclVe(
                        mlfIsempty(
                          mclVe(
                            mlfFindstr(
                              mclVe(mlfUpper(mclVv(sline, "sline"))),
                              _mxarray24_)))))) {
                    /*
                     * commaidx = findstr(sline , ',');
                     */
                    mlfAssign(
                      &commaidx,
                      mlfFindstr(mclVv(sline, "sline"), _mxarray26_));
                    /*
                     * equalidx = findstr(sline , '=');
                     */
                    mlfAssign(
                      &equalidx,
                      mlfFindstr(mclVv(sline, "sline"), _mxarray18_));
                    /*
                     * endidx   = findstr(sline , ';');
                     */
                    mlfAssign(
                      &endidx, mlfFindstr(mclVv(sline, "sline"), _mxarray20_));
                    /*
                     * totalidx = [ commaidx endidx ] - 1;
                     */
                    mlfAssign(
                      &totalidx,
                      mclMinus(
                        mlfHorzcat(
                          mclVv(commaidx, "commaidx"),
                          mclVv(endidx, "endidx"),
                          NULL),
                        _mxarray17_));
                    /*
                     * startidx = [ equalidx commaidx] + 1;
                     */
                    mlfAssign(
                      &startidx,
                      mclPlus(
                        mlfHorzcat(
                          mclVv(equalidx, "equalidx"),
                          mclVv(commaidx, "commaidx"),
                          NULL),
                        _mxarray17_));
                    /*
                     * 
                     * if ~isempty(commaidx) & ~isempty(equalidx)
                     */
                    {
                        mxArray * a_ = mclInitialize(
                                         mclNot(
                                           mclVe(
                                             mlfIsempty(
                                               mclVv(commaidx, "commaidx")))));
                        if (mlfTobool(a_)
                            && mlfTobool(
                                 mclAnd(
                                   a_,
                                   mclNot(
                                     mclVe(
                                       mlfIsempty(
                                         mclVv(equalidx, "equalidx"))))))) {
                            mxDestroyArray(a_);
                            /*
                             * for x=1:length(totalidx)
                             */
                            {
                                int v_ = mclForIntStart(1);
                                int e_ = mclForIntEnd(
                                           mlfScalar(
                                             mclLengthInt(
                                               mclVv(totalidx, "totalidx"))));
                                if (v_ > e_) {
                                    mlfAssign(&x, _mxarray7_);
                                } else {
                                    /*
                                     * busnames{x} = sscanf(sline(startidx(x):totalidx(x)),'%s',15);                          
                                     * end                  
                                     */
                                    for (; ; ) {
                                        mlfIndexAssign(
                                          busnames,
                                          "{?}",
                                          mlfScalar(v_),
                                          mlfSscanf(
                                            NULL,
                                            NULL,
                                            NULL,
                                            mclVe(
                                              mclArrayRef1(
                                                mclVsv(sline, "sline"),
                                                mlfColon(
                                                  mclVe(
                                                    mclIntArrayRef1(
                                                      mclVsv(
                                                        startidx, "startidx"),
                                                      v_)),
                                                  mclVe(
                                                    mclIntArrayRef1(
                                                      mclVsv(
                                                        totalidx, "totalidx"),
                                                      v_)),
                                                  NULL))),
                                            _mxarray28_,
                                            _mxarray30_));
                                        if (v_ == e_) {
                                            break;
                                        }
                                        ++v_;
                                    }
                                    mlfAssign(&x, mlfScalar(v_));
                                }
                            }
                            /*
                             * for x=1:length(totalidx)
                             */
                            {
                                int v_ = mclForIntStart(1);
                                int e_ = mclForIntEnd(
                                           mlfScalar(
                                             mclLengthInt(
                                               mclVv(totalidx, "totalidx"))));
                                if (v_ > e_) {
                                    mlfAssign(&x, _mxarray7_);
                                } else {
                                    /*
                                     * busnames{x} = char(strhcat(busnames{x},blanks(15 - length(busnames{x}))));                      
                                     * end    
                                     */
                                    for (; ; ) {
                                        mlfIndexAssign(
                                          busnames,
                                          "{?}",
                                          mlfScalar(v_),
                                          mlfChar(
                                            mclVe(
                                              mlfStrhcat(
                                                mclVe(
                                                  mlfIndexRef(
                                                    mclVsv(
                                                      *busnames, "busnames"),
                                                    "{?}",
                                                    mlfScalar(v_))),
                                                mclVe(
                                                  mlfBlanks(
                                                    mclMinus(
                                                      _mxarray30_,
                                                      mclVe(
                                                        mclFeval(
                                                          mclValueVarargout(),
                                                          mlxLength,
                                                          mclVe(
                                                            mlfIndexRef(
                                                              mclVsv(
                                                                *busnames,
                                                                "busnames"),
                                                              "{?}",
                                                              mlfScalar(v_))),
                                                          NULL))))),
                                                NULL)),
                                            NULL));
                                        if (v_ == e_) {
                                            break;
                                        }
                                        ++v_;
                                    }
                                    mlfAssign(&x, mlfScalar(v_));
                                }
                            }
                        } else {
                            mxDestroyArray(a_);
                        }
                    /*
                     * end                           
                     */
                    }
                /*
                 * end
                 */
                }
                /*
                 * 
                 * %
                 * %Le as informacoes dos barramentos
                 * %
                 * 
                 * if loadbus == 1
                 */
                if (mclEqBool(mclVv(loadbus, "loadbus"), _mxarray17_)) {
                    /*
                     * if isempty(findstr(sline,';'))
                     */
                    if (mlfTobool(
                          mclVe(
                            mlfIsempty(
                              mclVe(
                                mlfFindstr(
                                  mclVv(sline, "sline"), _mxarray20_)))))) {
                        /*
                         * lnum = lnum + 1; 
                         */
                        mlfAssign(
                          &lnum, mclPlus(mclVv(lnum, "lnum"), _mxarray17_));
                        /*
                         * busdata(lnum,:) = str2num(sline);
                         */
                        mclArrayAssign2(
                          busdata,
                          mlfStr2num(mclVv(sline, "sline")),
                          mclVsv(lnum, "lnum"),
                          mlfCreateColonIndex());
                    /*
                     * else
                     */
                    } else {
                        /*
                         * loadbus = 0;
                         */
                        mlfAssign(&loadbus, _mxarray9_);
                        /*
                         * lnum    = 0;
                         */
                        mlfAssign(&lnum, _mxarray9_);
                    /*
                     * end
                     */
                    }
                /*
                 * end
                 */
                }
                /*
                 * 
                 * if ~isempty(findstr(upper(sline),'BUSDATA'))
                 */
                if (mclNotBool(
                      mclVe(
                        mlfIsempty(
                          mclVe(
                            mlfFindstr(
                              mclVe(mlfUpper(mclVv(sline, "sline"))),
                              _mxarray31_)))))) {
                    /*
                     * loadbus = 1;
                     */
                    mlfAssign(&loadbus, _mxarray17_);
                /*
                 * end     
                 */
                }
                /*
                 * 
                 * %Le as informacoes do sistema
                 * 
                 * if loadsys == 1
                 */
                if (mclEqBool(mclVv(loadsys, "loadsys"), _mxarray17_)) {
                    /*
                     * if isempty(findstr(sline,';'))
                     */
                    if (mlfTobool(
                          mclVe(
                            mlfIsempty(
                              mclVe(
                                mlfFindstr(
                                  mclVv(sline, "sline"), _mxarray20_)))))) {
                        /*
                         * lnum = lnum + 1; 
                         */
                        mlfAssign(
                          &lnum, mclPlus(mclVv(lnum, "lnum"), _mxarray17_));
                        /*
                         * sysdata(lnum,:) = str2num(sline);
                         */
                        mclArrayAssign2(
                          sysdata,
                          mlfStr2num(mclVv(sline, "sline")),
                          mclVsv(lnum, "lnum"),
                          mlfCreateColonIndex());
                    /*
                     * else
                     */
                    } else {
                        /*
                         * loadsys = 0;
                         */
                        mlfAssign(&loadsys, _mxarray9_);
                        /*
                         * lnum    = 0;
                         */
                        mlfAssign(&lnum, _mxarray9_);
                    /*
                     * end
                     */
                    }
                /*
                 * end
                 */
                }
                /*
                 * 
                 * if ~isempty(findstr(upper(sline),'SYSDATA'))  
                 */
                if (mclNotBool(
                      mclVe(
                        mlfIsempty(
                          mclVe(
                            mlfFindstr(
                              mclVe(mlfUpper(mclVv(sline, "sline"))),
                              _mxarray33_)))))) {
                    /*
                     * loadsys = 1;
                     */
                    mlfAssign(&loadsys, _mxarray17_);
                /*
                 * end     
                 */
                }
            /*
             * end
             */
            }
        /*
         * end 
         */
        }
        /*
         * max_lin = max_lin + 1;
         */
        mlfAssign(&max_lin, mclPlus(mclVv(max_lin, "max_lin"), _mxarray17_));
    /*
     * end
     */
    }
    /*
     * fclose(fid);
     */
    mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
    mclValidateOutput(name, 1, nargout_, "name", "sysload");
    mclValidateOutput(*sbase, 2, nargout_, "sbase", "sysload");
    mclValidateOutput(*busnames, 3, nargout_, "busnames", "sysload");
    mclValidateOutput(*busdata, 4, nargout_, "busdata", "sysload");
    mclValidateOutput(*sysdata, 5, nargout_, "sysdata", "sysload");
    mxDestroyArray(fid);
    mxDestroyArray(ans);
    mxDestroyArray(sline);
    mxDestroyArray(loadbus);
    mxDestroyArray(loadsys);
    mxDestroyArray(max_lin);
    mxDestroyArray(lnum);
    mxDestroyArray(commaidx);
    mxDestroyArray(equalidx);
    mxDestroyArray(endidx);
    mxDestroyArray(totalidx);
    mxDestroyArray(startidx);
    mxDestroyArray(x);
    mxDestroyArray(file);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return name;
    /*
     * return
     * 
     */
}
