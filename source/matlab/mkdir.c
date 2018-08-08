/*
 * MATLAB Compiler: 2.1
 * Date: Sat Dec 16 20:22:48 2006
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-m" "-W" "main" "-L"
 * "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-h" "-v" "-O" "all" "-O"
 * "fold_scalar_mxarrays:on" "-O" "fold_non_scalar_mxarrays:on" "-O"
 * "optimize_integer_for_loops:on" "-O" "array_indexing:on" "-O"
 * "optimize_conditionals:on" "-B" "sgl" "-m" "-W" "main" "-L" "C" "-t" "-T"
 * "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg" "libmwsglm.mlib" "sacc.m" 
 */
#include "mkdir.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

static mxChar _array3_[3] = { 'd', 'i', 'r' };
static mxArray * _mxarray2_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

static mxChar _array7_[6] = { 'm', 'k', 'd', 'i', 'r', ' ' };
static mxArray * _mxarray6_;

static mxChar _array9_[2] = { 'c', 'd' };
static mxArray * _mxarray8_;

static mxChar _array11_[6] = { 'w', 'i', 'n', 'd', 'i', 'r' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;

static mxChar _array15_[7] = { 'm', 'k', 'd', 'i', 'r', ' ', '"' };
static mxArray * _mxarray14_;

static mxChar _array17_[1] = { '"' };
static mxArray * _mxarray16_;

static mxChar _array19_[23] = { 'A', ' ', 's', 'u', 'b', 'd', 'i', 'r',
                                'e', 'c', 't', 'o', 'r', 'y', ' ', 'o',
                                'r', ' ', 'f', 'i', 'l', 'e', ' ' };
static mxArray * _mxarray18_;

static mxChar _array21_[15] = { ' ', 'a', 'l', 'r', 'e', 'a', 'd', 'y',
                                ' ', 'e', 'x', 'i', 's', 't', 's' };
static mxArray * _mxarray20_;

static mxChar _array23_[32] = { 'v', 'o', 'l', 'u', 'm', 'e', ' ', 'l',
                                'a', 'b', 'e', 'l', ' ', 's', 'y', 'n',
                                't', 'a', 'x', ' ', 'i', 's', ' ', 'i',
                                'n', 'c', 'o', 'r', 'r', 'e', 'c', 't' };
static mxArray * _mxarray22_;
static mxArray * _mxarray24_;

static mxChar _array26_[22] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'm',
                                'a', 'k', 'e', ' ', 'd', 'i', 'r', 'e',
                                'c', 't', 'o', 'r', 'y', ' ' };
static mxArray * _mxarray25_;

static mxChar _array28_[16] = { ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e',
                                ' ', 'a', ' ', 'f', 'i', 'l', 'e', ' ' };
static mxArray * _mxarray27_;

static mxChar _array30_[3] = { 'i', 'n', ' ' };
static mxArray * _mxarray29_;

static mxChar _array32_[29] = { ' ', 'a', 'l', 'r', 'e', 'a', 'd', 'y',
                                ' ', 'e', 'x', 'i', 's', 't', 's', ' ',
                                'b', 'y', ' ', 't', 'h', 'a', 't', ' ',
                                'n', 'a', 'm', 'e', '.' };
static mxArray * _mxarray31_;

static mxChar _array34_[9] = { ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ' };
static mxArray * _mxarray33_;

static mxChar _array36_[16] = { ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o',
                                't', ' ', 'e', 'x', 'i', 's', 't', '.' };
static mxArray * _mxarray35_;

static mxChar _array38_[1] = { '.' };
static mxArray * _mxarray37_;

static mxChar _array40_[18] = { 'D', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y',
                                ' ', 'o', 'r', ' ', 'f', 'i', 'l', 'e', ' ' };
static mxArray * _mxarray39_;

static mxChar _array42_[19] = { ' ', 'a', 'l', 'r', 'e', 'a', 'd',
                                'y', ' ', 'e', 'x', 'i', 's', 't',
                                's', ' ', 'i', 'n', ' ' };
static mxArray * _mxarray41_;

void InitializeModule_mkdir(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDouble(2.0);
    _mxarray2_ = mclInitializeString(3, _array3_);
    _mxarray4_ = mclInitializeDouble(-1.0);
    _mxarray5_ = mclInitializeDouble(-2.0);
    _mxarray6_ = mclInitializeString(6, _array7_);
    _mxarray8_ = mclInitializeString(2, _array9_);
    _mxarray10_ = mclInitializeString(6, _array11_);
    _mxarray12_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray13_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray14_ = mclInitializeString(7, _array15_);
    _mxarray16_ = mclInitializeString(1, _array17_);
    _mxarray18_ = mclInitializeString(23, _array19_);
    _mxarray20_ = mclInitializeString(15, _array21_);
    _mxarray22_ = mclInitializeString(32, _array23_);
    _mxarray24_ = mclInitializeDouble(0.0);
    _mxarray25_ = mclInitializeString(22, _array26_);
    _mxarray27_ = mclInitializeString(16, _array28_);
    _mxarray29_ = mclInitializeString(3, _array30_);
    _mxarray31_ = mclInitializeString(29, _array32_);
    _mxarray33_ = mclInitializeString(9, _array34_);
    _mxarray35_ = mclInitializeString(16, _array36_);
    _mxarray37_ = mclInitializeString(1, _array38_);
    _mxarray39_ = mclInitializeString(18, _array40_);
    _mxarray41_ = mclInitializeString(19, _array42_);
}

void TerminateModule_mkdir(void) {
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmkdir(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_mkdir
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNMkdir" contains the nargout interface for the "mkdir"
 * M-function from file "C:\matlabR12\toolbox\matlab\general\mkdir.m" (lines
 * 1-148). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNMkdir(int nargout, mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mmkdir(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfMkdir" contains the normal interface for the "mkdir"
 * M-function from file "C:\matlabR12\toolbox\matlab\general\mkdir.m" (lines
 * 1-148). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMkdir(mlfVarargoutList * varargout, ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, varargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout) = Mmkdir(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVMkdir" contains the void interface for the "mkdir"
 * M-function from file "C:\matlabR12\toolbox\matlab\general\mkdir.m" (lines
 * 1-148). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVMkdir(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    varargout = Mmkdir(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxMkdir" contains the feval interface for the "mkdir"
 * M-function from file "C:\matlabR12\toolbox\matlab\general\mkdir.m" (lines
 * 1-148). The feval function calls the implementation version of mkdir through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxMkdir(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    for (i = 0; i < 1; ++i) {
        mplhs[i] = mclGetUninitializedArray();
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mmkdir(nlhs, mprhs[0]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mmkdir" is the implementation version of the "mkdir"
 * M-function from file "C:\matlabR12\toolbox\matlab\general\mkdir.m" (lines
 * 1-148). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout=mkdir(varargin)
 */
static mxArray * Mmkdir(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_ = mclSetCurrentLocalFunctionTable(
                                                         &_local_function_table_mkdir);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * varargout = mclGetUninitializedArray();
    mxArray * ErrMsg = mclGetUninitializedArray();
    mxArray * OldDir = mclGetUninitializedArray();
    mxArray * result = mclGetUninitializedArray();
    mxArray * c = mclGetUninitializedArray();
    mxArray * Files = mclGetUninitializedArray();
    mxArray * NewDirectory = mclGetUninitializedArray();
    mxArray * NewDirName = mclGetUninitializedArray();
    mxArray * DirName = mclGetUninitializedArray();
    mxArray * Status = mclGetUninitializedArray();
    mxArray * ans = mclGetUninitializedArray();
    mclCopyArray(&varargin);
    /*
     * %MKDIR Make directory.
     * %   MKDIR('DIRNAME') will create the directory DIRNAME in the current
     * %   directory.
     * %
     * %   MKDIR('PARENTDIR','NEWDIR') will create the directory NEWDIR in the
     * %   already existing directory PARENTDIR.
     * %
     * %   STATUS = MKDIR(...) will return 1 if the new directory is created
     * %   successfully, 2 if it already exists, and 0 otherwise.
     * %
     * %   [STATUS,MSG] = MKDIR(...) will return a non-empty error
     * %   message string if an error occurred.
     * %
     * %   See also COPYFILE.
     * 
     * %   Loren Dean
     * %   Copyright 1984-2000 The MathWorks, Inc. 
     * %   $Revision: 1.18 $ $Date: 2000/08/03 19:31:21 $
     * 
     * error(nargchk(1,2,nargin))
     */
    mlfError(mclVe(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_))));
    /*
     * 
     * Status = 1;
     */
    mlfAssign(&Status, _mxarray0_);
    /*
     * if nargin==1,
     */
    if (nargin_ == 1) {
        /*
         * DirName = pwd;
         */
        mlfAssign(&DirName, mlfPwd());
        /*
         * NewDirName = varargin{1};
         */
        mlfAssign(
          &NewDirName,
          mlfIndexRef(mclVsa(varargin, "varargin"), "{?}", _mxarray0_));
    /*
     * 
     * elseif nargin == 2,
     */
    } else if (nargin_ == 2) {
        /*
         * DirName = varargin{1};
         */
        mlfAssign(
          &DirName,
          mlfIndexRef(mclVsa(varargin, "varargin"), "{?}", _mxarray0_));
        /*
         * NewDirName = varargin{2};
         */
        mlfAssign(
          &NewDirName,
          mlfIndexRef(mclVsa(varargin, "varargin"), "{?}", _mxarray1_));
    /*
     * 
     * end % if nargin
     */
    }
    /*
     * 
     * NewDirectory = fullfile(DirName, NewDirName);
     */
    mlfAssign(
      &NewDirectory,
      mlfFullfile(
        mclVv(DirName, "DirName"), mclVv(NewDirName, "NewDirName"), NULL));
    /*
     * 
     * %% Check to see if the parent directory exists
     * if ~exist(DirName,'dir'), 
     */
    if (mclNotBool(mclVe(mlfExist(mclVv(DirName, "DirName"), _mxarray2_)))) {
        /*
         * % The directory does not exist
         * Status = -1;
         */
        mlfAssign(&Status, _mxarray4_);
    /*
     * 
     * else,
     */
    } else {
        /*
         * 
         * %% Check to see if the directory to be created exists as a
         * %% directory or file
         * Files = dir(DirName);
         */
        mlfAssign(&Files, mlfNDir(1, mclVv(DirName, "DirName")));
        /*
         * if any(strcmp({Files.name},NewDirName)),
         */
        if (mlfTobool(
              mclVe(
                mlfAny(
                  mclVe(
                    mlfStrcmp(
                      mlfCellhcat(
                        mclVe(mlfIndexRef(mclVsv(Files, "Files"), ".name")),
                        NULL),
                      mclVv(NewDirName, "NewDirName"))),
                  NULL)))) {
            /*
             * if ~any(strcmp({Files([Files.isdir]).name},NewDirName)),
             */
            if (mclNotBool(
                  mclVe(
                    mlfAny(
                      mclVe(
                        mlfStrcmp(
                          mlfCellhcat(
                            mclVe(
                              mlfIndexRef(
                                mclVsv(Files, "Files"),
                                "(?).name",
                                mlfHorzcat(
                                  mclVe(
                                    mlfIndexRef(
                                      mclVsv(Files, "Files"), ".isdir")),
                                  NULL))),
                            NULL),
                          mclVv(NewDirName, "NewDirName"))),
                      NULL)))) {
                /*
                 * Status=-2;
                 */
                mlfAssign(&Status, _mxarray5_);
            /*
             * else,
             */
            } else {
                /*
                 * Status = 2;
                 */
                mlfAssign(&Status, _mxarray1_);
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
     * end % if ~exist
     */
    }
    /*
     * 
     * % if Status is 1 then everything is good up to this point.
     * if Status == 1,
     */
    if (mclEqBool(mclVv(Status, "Status"), _mxarray0_)) {
        /*
         * c=computer;
         */
        mlfAssign(&c, mlfComputer(NULL));
        /*
         * if isunix ,
         */
        if (mlfTobool(mclVe(mlfIsunix()))) {
            /*
             * [Status, result] = unix(['mkdir ' fullfile(DirName,NewDirName)]);
             */
            mlfAssign(
              &Status,
              mlfUnix(
                &result,
                mlfHorzcat(
                  _mxarray6_,
                  mclVe(
                    mlfFullfile(
                      mclVv(DirName, "DirName"),
                      mclVv(NewDirName, "NewDirName"),
                      NULL)),
                  NULL)));
        /*
         * 
         * elseif ispc
         */
        } else if (mlfTobool(mclVe(mlfIspc()))) {
            /*
             * % This is to check and see if the dos command is working.  In Win95
             * % if the current directory is a deeply nested directory or sometimes
             * % for TAS served file systems, the output pipe does not work.  The 
             * % solution is to make the current directory safe, %windir% and put it back
             * % when we are done.  The test is the cd command, which should always
             * % return something.
             * 
             * [Status, result] = dos('cd');
             */
            mlfAssign(&Status, mlfDos(&result, _mxarray8_, NULL));
            /*
             * if isempty(result)
             */
            if (mlfTobool(mclVe(mlfIsempty(mclVv(result, "result"))))) {
                /*
                 * OldDir = pwd;
                 */
                mlfAssign(&OldDir, mlfPwd());
                /*
                 * cd(getenv('windir'))
                 */
                mclPrintAns(&ans, mlfNCd(0, mclVe(mlfGetenv(_mxarray10_))));
            /*
             * else
             */
            } else {
                /*
                 * OldDir = [];
                 */
                mlfAssign(&OldDir, _mxarray12_);
            /*
             * end
             */
            }
            /*
             * 
             * % DOS returns a zero status if the shell executed successfully which does
             * % not necessarily mean that the command given to DOS was successful.  The
             * % better indicate of the success of the MKDIR command is the second output
             * % argument to DOS which is the result.  We should use RESULT to determine 
             * % status of MKDIR on the PC instead of relying on STATUS.
             * 
             * result = '';
             */
            mlfAssign(&result, _mxarray13_);
            /*
             * [Status, result] = dos(['mkdir "' fullfile(DirName,NewDirName) '"']);
             */
            mlfAssign(
              &Status,
              mlfDos(
                &result,
                mlfHorzcat(
                  _mxarray14_,
                  mclVe(
                    mlfFullfile(
                      mclVv(DirName, "DirName"),
                      mclVv(NewDirName, "NewDirName"),
                      NULL)),
                  _mxarray16_,
                  NULL),
                NULL));
            /*
             * if ~isempty(OldDir)
             */
            if (mclNotBool(mclVe(mlfIsempty(mclVv(OldDir, "OldDir"))))) {
                /*
                 * cd(OldDir);
                 */
                mclAssignAns(&ans, mlfNCd(0, mclVv(OldDir, "OldDir")));
            /*
             * end
             */
            }
            /*
             * 
             * if (~isempty(result))
             */
            if (mclNotBool(mclVe(mlfIsempty(mclVv(result, "result"))))) {
                /*
                 * if (~isempty(findstr(result, ...
                 */
                if (mclNotBool(
                      mclVe(
                        mlfIsempty(
                          mclVe(
                            mlfFindstr(
                              mclVv(result, "result"),
                              mlfHorzcat(
                                _mxarray18_,
                                mclVe(
                                  mlfFullfile(
                                    mclVv(DirName, "DirName"),
                                    mclVv(NewDirName, "NewDirName"),
                                    NULL)),
                                _mxarray20_,
                                NULL))))))) {
                    /*
                     * ['A subdirectory or file ' fullfile(DirName, NewDirName) ' already exists'])))
                     * Status = 2;
                     */
                    mlfAssign(&Status, _mxarray1_);
                /*
                 * elseif (~isempty(findstr(result, 'volume label syntax is incorrect')))
                 */
                } else if (mclNotBool(
                             mclVe(
                               mlfIsempty(
                                 mclVe(
                                   mlfFindstr(
                                     mclVv(result, "result"),
                                     _mxarray22_)))))) {
                    /*
                     * Status = 1;
                     */
                    mlfAssign(&Status, _mxarray0_);
                /*
                 * else
                 */
                } else {
                    /*
                     * Status = 0;
                     */
                    mlfAssign(&Status, _mxarray24_);
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
         * end % if computer type
         */
        }
        /*
         * 
         * % A Status of 0 indicates success for the UNIX and PC operating systems and
         * % therefore, this status has to be flipped to 1 to mean success in MATLAB.
         * % However, a non-zero number indicates failure on UNIX (not PC) so we need
         * % to preserve the failure status to have MKDIR return the correct result on
         * % the PC and therefore using "Status = (Status==0)" does not always do the
         * % "right" thing on the PC.
         * 
         * if (Status == 0)
         */
        if (mclEqBool(mclVv(Status, "Status"), _mxarray24_)) {
            /*
             * Status = 1;
             */
            mlfAssign(&Status, _mxarray0_);
        /*
         * elseif (Status == 1)
         */
        } else if (mclEqBool(mclVv(Status, "Status"), _mxarray0_)) {
            /*
             * Status = 0;
             */
            mlfAssign(&Status, _mxarray24_);
        /*
         * end
         */
        }
    /*
     * 
     * end % if Status == 1
     */
    }
    /*
     * 
     * 
     * % Check to see if output arguments are to be returned.  If an arg.
     * % is not returned then cause errors if necessary.
     * ErrMsg='';
     */
    mlfAssign(&ErrMsg, _mxarray13_);
    /*
     * switch Status,
     */
    {
        mxArray * v_ = mclInitialize(mclVv(Status, "Status"));
        if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * case -2,
             * ErrMsg = ['Cannot make directory ' NewDirName ' because a file ' ...
             */
            mlfAssign(
              &ErrMsg,
              mlfHorzcat(
                _mxarray25_,
                mclVv(NewDirName, "NewDirName"),
                _mxarray27_,
                _mxarray29_,
                mclVv(DirName, "DirName"),
                _mxarray31_,
                NULL));
        /*
         * 'in ' DirName ' already exists by that name.'];
         * case -1,
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            /*
             * ErrMsg = ['Cannot make directory ' NewDirName ' because ' DirName ...
             */
            mlfAssign(
              &ErrMsg,
              mlfHorzcat(
                _mxarray25_,
                mclVv(NewDirName, "NewDirName"),
                _mxarray33_,
                mclVv(DirName, "DirName"),
                _mxarray35_,
                NULL));
        /*
         * ' does not exist.'];
         * 
         * case 0,
         */
        } else if (mclSwitchCompare(v_, _mxarray24_)) {
            /*
             * ErrMsg = ['Cannot make directory ' NewDirName '.'];
             */
            mlfAssign(
              &ErrMsg,
              mlfHorzcat(
                _mxarray25_,
                mclVv(NewDirName, "NewDirName"),
                _mxarray37_,
                NULL));
        /*
         * 
         * case 2,
         */
        } else if (mclSwitchCompare(v_, _mxarray1_)) {
            /*
             * ErrMsg = ['Directory or file ' NewDirName ' already exists in ' ...
             */
            mlfAssign(
              &ErrMsg,
              mlfHorzcat(
                _mxarray39_,
                mclVv(NewDirName, "NewDirName"),
                _mxarray41_,
                mclVv(DirName, "DirName"),
                NULL));
        /*
         * DirName];
         * 
         * end % if Status checking
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * if nargout == 0,
     */
    if (nargout_ == 0) {
        /*
         * error(ErrMsg)
         */
        mlfError(mclVv(ErrMsg, "ErrMsg"));
    /*
     * 
     * else,
     */
    } else {
        /*
         * if Status==-1|Status==-2,Status=0;end
         */
        mxArray * a_ = mclInitialize(
                         mclEq(mclVv(Status, "Status"), _mxarray4_));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(a_, mclEq(mclVv(Status, "Status"), _mxarray5_)))) {
            mxDestroyArray(a_);
            mlfAssign(&Status, _mxarray24_);
        } else {
            mxDestroyArray(a_);
        }
        /*
         * varargout{1} = Status;
         */
        mlfIndexAssign(&varargout, "{?}", _mxarray0_, mclVsv(Status, "Status"));
        /*
         * varargout{2} = ErrMsg;
         */
        mlfIndexAssign(&varargout, "{?}", _mxarray1_, mclVsv(ErrMsg, "ErrMsg"));
    /*
     * 
     * end % if nargout
     */
    }
    mxDestroyArray(ans);
    mxDestroyArray(Status);
    mxDestroyArray(DirName);
    mxDestroyArray(NewDirName);
    mxDestroyArray(NewDirectory);
    mxDestroyArray(Files);
    mxDestroyArray(c);
    mxDestroyArray(result);
    mxDestroyArray(OldDir);
    mxDestroyArray(ErrMsg);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
}
