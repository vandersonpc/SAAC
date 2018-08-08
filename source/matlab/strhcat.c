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
#include "strhcat.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[132] = { 'R', 'u', 'n', '-', 't', 'i', 'm', 'e', ' ',
                                'E', 'r', 'r', 'o', 'r', ':', ' ', 'F', 'i',
                                'l', 'e', ':', ' ', 's', 't', 'r', 'h', 'c',
                                'a', 't', ' ', 'L', 'i', 'n', 'e', ':', ' ',
                                '1', ' ', 'C', 'o', 'l', 'u', 'm', 'n', ':',
                                ' ', '1', ' ', 'T', 'h', 'e', ' ', 'f', 'u',
                                'n', 'c', 't', 'i', 'o', 'n', ' ', '"', 's',
                                't', 'r', 'h', 'c', 'a', 't', '"', ' ', 'w',
                                'a', 's', ' ', 'c', 'a', 'l', 'l', 'e', 'd',
                                ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o', 'r',
                                'e', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h',
                                'e', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e',
                                'd', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ',
                                'o', 'f', ' ', 'o', 'u', 't', 'p', 'u', 't',
                                's', ' ', '(', '1', ')', '.' };
static mxArray * _mxarray0_;

static mxChar _array3_[27] = { 'N', 'o', 't', ' ', 'e', 'n', 'o', 'u', 'g',
                               'h', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'a',
                               'r', 'g', 'u', 'm', 'e', 'n', 't', 's', '.' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static mxChar _array8_[39] = { 'A', 'l', 'l', ' ', 't', 'h', 'e', ' ', 'i', 'n',
                               'p', 'u', 't', 's', ' ', 'm', 'u', 's', 't', ' ',
                               'b', 'e', ' ', 't', 'w', 'o', ' ', 'd', 'i', 'm',
                               'e', 'n', 's', 'i', 'o', 'n', 'a', 'l', '.' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;

static mxChar _array12_[65] = { 'A', 'l', 'l', ' ', 't', 'h', 'e', ' ', 'i',
                                'n', 'p', 'u', 't', 's', ' ', 'm', 'u', 's',
                                't', ' ', 'h', 'a', 'v', 'e', ' ', 't', 'h',
                                'e', ' ', 's', 'a', 'm', 'e', ' ', 'n', 'u',
                                'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'r',
                                'o', 'w', 's', ' ', 'o', 'r', ' ', 'a', ' ',
                                's', 'i', 'n', 'g', 'l', 'e', ' ', 'r', 'o',
                                'w', '.' };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;

void InitializeModule_strhcat(void) {
    _mxarray0_ = mclInitializeString(132, _array1_);
    _mxarray2_ = mclInitializeString(27, _array3_);
    _mxarray4_ = mclInitializeDouble(-1.0);
    _mxarray5_ = mclInitializeDouble(1.0);
    _mxarray6_ = mclInitializeDouble(2.0);
    _mxarray7_ = mclInitializeString(39, _array8_);
    _mxarray9_ = mclInitializeDouble(0.0);
    _mxarray10_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray11_ = mclInitializeString(65, _array12_);
    _mxarray13_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
}

void TerminateModule_strhcat(void) {
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mstrhcat(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_strhcat
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfStrhcat" contains the normal interface for the "strhcat"
 * M-function from file "C:\Projeto Final\Source new\STRHCAT.M" (lines 1-60).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfStrhcat(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * t = mclGetUninitializedArray();
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    t = Mstrhcat(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(t);
}

/*
 * The function "mlxStrhcat" contains the feval interface for the "strhcat"
 * M-function from file "C:\Projeto Final\Source new\STRHCAT.M" (lines 1-60).
 * The feval function calls the implementation version of strhcat through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxStrhcat(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(_mxarray0_);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mstrhcat(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mstrhcat" is the implementation version of the "strhcat"
 * M-function from file "C:\Projeto Final\Source new\STRHCAT.M" (lines 1-60).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function t = strhcat(varargin)
 */
static mxArray * Mstrhcat(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_strhcat);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * t = mclGetUninitializedArray();
    mxArray * j = mclGetUninitializedArray();
    mxArray * s = mclGetUninitializedArray();
    mxArray * n = mclGetUninitializedArray();
    mxArray * k = mclGetUninitializedArray();
    mxArray * twod = mclGetUninitializedArray();
    mxArray * rows = mclGetUninitializedArray();
    mxArray * i = mclGetUninitializedArray();
    mxArray * ans = mclGetUninitializedArray();
    mclCopyArray(&varargin);
    /*
     * %STRCAT Concatenate strings.
     * %   T = STRHCAT(S1,S2,S3,...) horizontally concatenates corresponding
     * %   rows of the character arrays S1, S2, S3 etc.  The trailing
     * %   padding is ignored.  All the inputs must have the same number of
     * %   rows (or any can be a single string).  When the inputs are all 
     * %   character arrays, the output is also a character array.
     * %   
     * %   T = STRHCAT(S1,S2,...), when any of the inputs is a cell array of 
     * %   strings, returns a cell array of strings formed by concatenating
     * %   corresponding elements of S1,S2, etc.  The inputs must all have
     * %   the same size (or any can be a scalar). Any of the inputs can 
     * %   also be character arrays.
     * %
     * %   Example
     * %       strcat({'Red','Yellow'},{'Green','Blue'})
     * %   returns
     * %       'RedGreen'    'YellowBlue'
     * %
     * %   See also STRVCAT, CAT, CELLSTR.
     * 
     * %   Copyright 1984-2000 The MathWorks, Inc. 
     * %   $Revision: 1.13 $  $Date: 2000/06/01 15:23:35 $
     * 
     * %   The cell array implementation is in @cell/strcat.m
     * 
     * if nargin<1, error('Not enough input arguments.'); end
     */
    if (nargin_ < 1) {
        mlfError(_mxarray2_);
    }
    /*
     * 
     * for i=nargin:-1:1,
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(&viter__, mlfScalar(nargin_), _mxarray4_, _mxarray5_);
             mclForNext(&viter__, &i);
             ) {
            /*
             * rows(i) = size(varargin{i},1);
             */
            mclArrayAssign1(
              &rows,
              mclFeval(
                mclValueVarargout(),
                mlxSize,
                mclVe(
                  mlfIndexRef(
                    mclVsa(varargin, "varargin"), "{?}", mclVsv(i, "i"))),
                _mxarray5_,
                NULL),
              mclVsv(i, "i"));
            /*
             * twod(i) = ndims(varargin{i})==2;
             */
            mclArrayAssign1(
              &twod,
              mclEq(
                mclVe(
                  mclFeval(
                    mclValueVarargout(),
                    mlxNdims,
                    mclVe(
                      mlfIndexRef(
                        mclVsa(varargin, "varargin"), "{?}", mclVsv(i, "i"))),
                    NULL)),
                _mxarray6_),
              mclVsv(i, "i"));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * if ~all(twod), error('All the inputs must be two dimensional.'); end
     */
    if (mclNotBool(mclVe(mlfAll(mclVv(twod, "twod"), NULL)))) {
        mlfError(_mxarray7_);
    }
    /*
     * 
     * % Remove empty inputs
     * k = (rows == 0);
     */
    mlfAssign(&k, mclEq(mclVv(rows, "rows"), _mxarray9_));
    /*
     * varargin(k) = [];
     */
    mlfIndexDelete(&varargin, "(?)", mclVsv(k, "k"));
    /*
     * rows(k) = [];
     */
    mlfIndexDelete(&rows, "(?)", mclVsv(k, "k"));
    /*
     * 
     * % Scalar expansion
     * for i=1:length(varargin),
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(
                   mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray10_);
        } else {
            /*
             * if rows(i)==1 & rows(i)<max(rows),
             * varargin{i} = varargin{i}(ones(1,max(rows)),:);
             * rows(i) = max(rows);
             * end
             * end
             */
            for (; ; ) {
                mxArray * a_ = mclInitialize(
                                 mclEq(
                                   mclVe(
                                     mclIntArrayRef1(mclVsv(rows, "rows"), v_)),
                                   _mxarray5_));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(
                           a_,
                           mclLt(
                             mclVe(mclIntArrayRef1(mclVsv(rows, "rows"), v_)),
                             mclVe(
                               mlfMax(
                                 NULL, mclVv(rows, "rows"), NULL, NULL)))))) {
                    mxDestroyArray(a_);
                    mlfIndexAssign(
                      &varargin,
                      "{?}",
                      mlfScalar(v_),
                      mlfIndexRef(
                        mclVsa(varargin, "varargin"),
                        "{?}(?,?)",
                        mlfScalar(v_),
                        mlfOnes(
                          _mxarray5_,
                          mclVe(mlfMax(NULL, mclVv(rows, "rows"), NULL, NULL)),
                          NULL),
                        mlfCreateColonIndex()));
                    mclIntArrayAssign1(
                      &rows, mlfMax(NULL, mclVv(rows, "rows"), NULL, NULL), v_);
                } else {
                    mxDestroyArray(a_);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * 
     * if any(rows~=rows(1)),  
     */
    if (mlfTobool(
          mclVe(
            mlfAny(
              mclNe(
                mclVv(rows, "rows"),
                mclVe(mclIntArrayRef1(mclVsv(rows, "rows"), 1))),
              NULL)))) {
        /*
         * error('All the inputs must have the same number of rows or a single row.');
         */
        mlfError(_mxarray11_);
    /*
     * end
     */
    }
    /*
     * 
     * n = rows(1);
     */
    mlfAssign(&n, mclIntArrayRef1(mclVsv(rows, "rows"), 1));
    /*
     * t = '';
     */
    mlfAssign(&t, _mxarray13_);
    /*
     * for i=1:n,
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(n, "n"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray10_);
        } else {
            /*
             * s = (varargin{1}(i,:));
             * for j=2:length(varargin),
             * s = [s (varargin{j}(i,:))];
             * end
             * t = strvcat(t,s);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &s,
                  mlfIndexRef(
                    mclVsa(varargin, "varargin"),
                    "{?}(?,?)",
                    _mxarray5_,
                    mlfScalar(v_),
                    mlfCreateColonIndex()));
                {
                    int v_0 = mclForIntStart(2);
                    int e_0 = mclForIntEnd(
                                mlfScalar(
                                  mclLengthInt(mclVa(varargin, "varargin"))));
                    if (v_0 > e_0) {
                        mlfAssign(&j, _mxarray10_);
                    } else {
                        for (; ; ) {
                            mlfAssign(
                              &s,
                              mlfHorzcat(
                                mclVv(s, "s"),
                                mclVe(
                                  mlfIndexRef(
                                    mclVsa(varargin, "varargin"),
                                    "{?}(?,?)",
                                    mlfScalar(v_0),
                                    mlfScalar(v_),
                                    mlfCreateColonIndex())),
                                NULL));
                            if (v_0 == e_0) {
                                break;
                            }
                            ++v_0;
                        }
                        mlfAssign(&j, mlfScalar(v_0));
                    }
                }
                mlfAssign(&t, mlfStrvcat(mclVv(t, "t"), mclVv(s, "s"), NULL));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    mclValidateOutput(t, 1, nargout_, "t", "strhcat");
    mxDestroyArray(ans);
    mxDestroyArray(i);
    mxDestroyArray(rows);
    mxDestroyArray(twod);
    mxDestroyArray(k);
    mxDestroyArray(n);
    mxDestroyArray(s);
    mxDestroyArray(j);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return t;
}
