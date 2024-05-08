//
// File: model.h
//
// Code generated for Simulink model 'model'.
//
// Model version                  : 1.154
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue Apr 16 01:12:13 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-32 (Windows32)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_model_h_
#define RTW_HEADER_model_h_
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "model_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

//
//  Exported Global Parameters
//
//  Note: Exported global parameters are tunable parameters with an exported
//  global storage class designation.  Code generation will declare the memory for
//  these parameters and exports their symbols.
//

extern real_T PumpOff;                 // Variable: PumpOff
//  Referenced by: '<S1>/Constant4'

extern real_T PumpOn;                  // Variable: PumpOn
//  Referenced by: '<S1>/Constant3'

extern real_T Tf[97];                  // Variable: Tf
//  Referenced by: '<S1>/Constant1'

extern real_T breakPoints[97];         // Variable: breakPoints
//  Referenced by: '<S1>/Lookup Table ref'

extern real_T elseDown;                // Variable: elseDown
//  Referenced by: '<S3>/Constant23'

extern real_T elseUp;                  // Variable: elseUp
//  Referenced by: '<S3>/Constant2'

extern real_T ifDown;                  // Variable: ifDown
//  Referenced by: '<S3>/Constant22'

extern real_T ifUp;                    // Variable: ifUp
//  Referenced by: '<S3>/Constant1'

extern real_T resetDown;               // Variable: resetDown
//  Referenced by: '<S28>/Constant'

extern real_T resetUp;                 // Variable: resetUp
//  Referenced by: '<S30>/Constant'

extern real_T setDown;                 // Variable: setDown
//  Referenced by: '<S27>/Constant'

extern real_T setUp;                   // Variable: setUp
//  Referenced by: '<S29>/Constant'

extern real_T tableData[97];           // Variable: tableData
//  Referenced by: '<S1>/Lookup Table ref'


// Class declaration for model model
class modelModelClass {
    // public data and function members
public:
    // Block signals (default storage)
    struct B_model_T {
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T QRManager;
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T CholManager;
        real_T b_data[4906225];
        real_T y_data[4906225];
        real_T b_data_m[4906225];
        real_T b_data_c[4906225];
        real_T b_data_k[4906225];
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T WorkingSet;
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T b_WorkingSet;
        s_hLeLYpQstaGtKO7KoN11BF_mode_T memspace;
        real_T B_data[2560540];
        real_T c_data[2560540];
        real_T b_rhs_data[2560540];
        real_T e_data[2560540];
        s_4PJjBY6NtHkFemjansM2s_model_T TrialState;
        real_T varargout_3_data[74498];
        real_T varargout_3_data_c[74498];
        real_T A_data[74112];
        real_T unusedExpr[37249];
        real_T Jc_data[37056];
        real_T Au[36864];
        real_T Auf_data[36864];
        real_T tmp_data[36864];
        real_T Jx[18624];
        real_T Ju[18624];
        real_T Ju_b[18624];
        real_T varargout_4[18528];
        real_T varargout_4_p[18528];
        real_T Jx_c[18432];
        real_T Jx_data[18432];
        real_T tmp_data_f[18432];
        real_T varargin_1_data[18432];
        real_T varargin_2_data[18432];
        real_T Jx_g[9216];
        real_T Jmv[9216];
        real_T Jmv_g[9216];
        s_AtPELYDMULP2d8RTGmYMLB_mode_T FcnEvaluator;
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T QPObjective;
        real_T b_y_data[2215];
        real_T y_data_m[2215];
        real_T work_data[2215];
        real_T work_data_n[2215];
        real_T vn1_data[2215];
        real_T vn2_data[2215];
        real_T work_data_p[2215];
        real_T y_data_l[2215];
        real_T y_data_j[2215];
        real_T y_data_d[2215];
        real_T y_data_g[2215];
        real_T y_data_ld[2215];
        real_T y_data_dh[2215];
        real_T y_data_dy[2215];
        s_iMrk9lYy4GSFeZiuOV2cXH_mode_T runtimedata;
        real_T PulseGenerator;             // '<S1>/Pulse Generator'
        real_T mv;                         // '<S4>/NLMPC'
    };

    // Block states (default storage) for system '<Root>'
    struct DW_model_T {
        real_T Delay_DSTATE[900];          // '<S1>/Delay'
        real_T mv_Delay_DSTATE[97];        // '<S5>/mv_Delay'
        real_T x_Delay_DSTATE[97];         // '<S5>/x_Delay'
        real_T slack_delay_DSTATE;         // '<S5>/slack_delay'
        int32_T clockTickCounter;          // '<S1>/Pulse Generator'
        boolean_T UnitDelay_DSTATE;        // '<S33>/Unit Delay'
        boolean_T UnitDelay_DSTATE_c;      // '<S34>/Unit Delay'
        boolean_T icLoad;                  // '<S5>/mv_Delay'
        boolean_T icLoad_i;                // '<S5>/x_Delay'
        boolean_T icLoad_j;                // '<S5>/slack_delay'
    };

    // Constant parameters (default storage)
    struct ConstP_model_T {
        // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
        //  Referenced by: '<S5>/Constant'

        real_T Constant_Value[95];

        // Expression: 2:max(2,PredictionHorizon)
        //  Referenced by: '<S5>/Constant1'

        real_T Constant1_Value[95];
    };

    // External inputs (root inport signals with default storage)
    struct ExtU_model_T {
        real_T Level;                      // '<Root>/Level'
        real_T Vrijeme;                    // '<Root>/Vrijeme'
        real_T Protok;                     // '<Root>/Protok'
        real_T PumpStatus;                 // '<Root>/PumpStatus'
        real_T watchdogRead;               // '<Root>/In17'
    };

    // External outputs (root outports fed by signals with default storage)
    struct ExtY_model_T {
        real_T nlpStatus;                  // '<Root>/nlpStatus'
        real_T pumpStatus;                 // '<Root>/pumpStatus'
        real_T Out8;                       // '<Root>/Out8'
    };

    // Real-time Model Data Structure
    struct RT_MODEL_model_T {
        const char_T* volatile errorStatus;

        //
        //  Timing:
        //  The following substructure contains information regarding
        //  the timing information for the model.

        struct {
            struct {
                uint16_T TID[3];
            } TaskCounters;
        } Timing;
    };

    // model initialize function
    void initialize();

    // model step function
    void step();

    // model terminate function
    void terminate();

    // Constructor
    modelModelClass();

    // Destructor
    ~modelModelClass();

    // Root-level structure-based inputs set method

    // Root inports set method
    void setExternalInputs(const ExtU_model_T* pExtU_model_T)
    {
        model_U = *pExtU_model_T;
    }

    // Root-level structure-based outputs get method

    // Root outports get method
    const modelModelClass::ExtY_model_T& getExternalOutputs() const
    {
        return model_Y;
    }

    // Real-Time Model get method
    modelModelClass::RT_MODEL_model_T* getRTM();

    // private data and function members
private:
    // Block signals
    B_model_T model_B;

    // Block states
    DW_model_T model_DW;

    // External inputs
    ExtU_model_T model_U;

    // External outputs
    ExtY_model_T model_Y;

    // Real-Time Model
    RT_MODEL_model_T model_M;

    // private member function(s) for subsystem '<Root>'
    void model_znlmpc_setDecisions(const real_T X[96], const real_T Umv[96],
        real_T e, real_T z[193]);
    void model_structConstructorHelper(real_T varargin_2, real_T varargin_4, const
        real_T varargin_6[96], const real_T varargin_10[96], const real_T
        varargin_12[96], const real_T varargin_14[96], const real_T varargin_18[96],
        const real_T varargin_20[96], const real_T varargin_22[96], const real_T
        varargin_24[96], const real_T varargin_26[96], const real_T varargin_28[96],
        const real_T varargin_30[96], const real_T varargin_32[96], const real_T
        varargin_34[96], const cell_0_model_T* varargin_36,
        s_iMrk9lYy4GSFeZiuOV2cXH_mode_T* s);
    void mode_znlmpc_generateRuntimeData(real_T x, real_T lastMV, real_T ref0,
        const cell_0_model_T* Parameters0, const real_T X0[95], const real_T MV0[95],
        real_T Slack0, s_iMrk9lYy4GSFeZiuOV2cXH_mode_T* runtimedata,
        sHwyw6iy4my0aQg5J32XtHE_model_T* userdata, real_T z0[193]);
    void model_znlmpc_getDecisions(const real_T z[193], real_T X[96], real_T Umv
        [96], real_T* e);
    void model_znlmpc_getXUe(const real_T z[193], real_T x, real_T X[97], real_T
        U[97], real_T* e);
    real_T model_customCostFunction(const real_T u[97]);
    void model_znlmpc_getZBounds(const s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
        * runtimedata, const real_T z0[193], real_T zLB[193], real_T zUB[193]);
    void model_mtimes(const real_T A_data[], const int32_T A_size[2], real_T
        C_data[], int32_T C_size[2]);
    void model_znlmpc_getUBounds(const s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
        * runtimedata, real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T*
        Bu_size);
    void mod_znlmpc_computeJacobianState(real_T parameters_f1, real_T
        parameters_f2, real_T f0, real_T x0, real_T u0, real_T* Jx, real_T* Jmv);
    void model_stateEvolution(const real_T X[97], const real_T U[97], real_T
        parameters_f1, real_T parameters_f2, real_T c[96], real_T J[18528]);
    boolean_T model_any(const boolean_T x[2]);
    void model_znlmpc_reformJacobian(const real_T Jx_data[], const int32_T
        Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
        * Je_size, real_T Jc_data[], int32_T Jc_size[2]);
    void model_outputBounds(const real_T runtimedata_OutputMin[96], const real_T
        runtimedata_OutputMax[96], const real_T X[97], real_T e, real_T c_data[],
        int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
    void mode_znlmpc_computeJacobianIneq(const real_T f0[194], real_T x0[97],
        const real_T u0[97], real_T e0, real_T Jx[18624], real_T Jmv[18624], real_T
        Je[194]);
    void model_anon(real_T runtimedata_x, const real_T runtimedata_OutputMin[96],
        const real_T runtimedata_OutputMax[96], real_T
        runtimedata_Parameters_f1, real_T runtimedata_Parameters_f2,
        const real_T z[193], real_T varargout_1_data[], int32_T
        * varargout_1_size, real_T varargout_2[96], real_T
        varargout_3_data[], int32_T varargout_3_size[2], real_T
        varargout_4[18528]);
    void model_factoryConstruct(int32_T nVarMax, int32_T mConstrMax, int32_T mIneq,
        int32_T mNonlinIneq, s_4PJjBY6NtHkFemjansM2s_model_T* obj);
    void model_factoryConstruct_hh1q(int32_T MaxVars, int32_T* obj_grad_size,
        int32_T* obj_Hx_size, boolean_T* obj_hasLinear, int32_T* obj_nvar, int32_T
        * obj_maxVar, real_T* obj_beta, real_T* obj_rho, int32_T* obj_objtype,
        int32_T* obj_prev_objtype, int32_T* obj_prev_nvar, boolean_T
        * obj_prev_hasLinear, real_T* obj_gammaScalar);
    void model_factoryConstruct_hh1q4(int32_T mIneqMax, int32_T nVarMax, int32_T
        mConstrMax, s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj);
    void model_loadProblem(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj, int32_T mIneq,
        int32_T mLinIneq, const real_T Aineq_data[], int32_T mLB, int32_T mUB,
        int32_T mFixed, int32_T mConstrMax);
    void model_quadraticObjective(real_T runtimedata_lastMV, const real_T
        runtimedata_ref[96], const real_T X[97], const real_T U[97], real_T e,
        real_T* f, real_T gfx[96], real_T gfu[96], real_T* gfe);
    void mode_znlmpc_computeJacobianCost(real_T f0, const real_T x0[97], real_T
        u0[97], real_T e0, real_T Jx[96], real_T Jmv[96], real_T* Je);
    void model_anon_p(real_T runtimedata_x, real_T runtimedata_lastMV, const
        real_T runtimedata_ref[96], const real_T z[193], real_T
        * varargout_1, real_T varargout_2[193]);
    int32_T model_checkVectorNonFinite(int32_T N, const real_T vec_data[], int32_T
        iv0);
    void computeObjectiveAndUserGradient(real_T obj_objfun_workspace_runtimedat,
        real_T obj_objfun_workspace_runtimed_0, const real_T
        obj_objfun_workspace_runtimed_1[96], const real_T x[193], real_T
        grad_workspace_data[], real_T* fval, int32_T* status);
    int32_T model_checkVectorNonFinite_h(const real_T vec[96]);
    int32_T model_checkMatrixNonFinite(int32_T ncols, const real_T mat_data[],
        int32_T col0, int32_T ldm);
    int32_T computeConstraintsAndUserJacobi(real_T obj_nonlcon_workspace_runtimeda,
        const real_T obj_nonlcon_workspace_runtime_0[96], const real_T
        obj_nonlcon_workspace_runtime_1[96], real_T obj_nonlcon_workspace_runtime_2,
        real_T obj_nonlcon_workspace_runtime_3, int32_T obj_mCineq, const real_T x
        [193], real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[96],
        real_T JacIneqTrans_workspace_data[], int32_T iJI_col, int32_T ldJI, real_T
        JacEqTrans_workspace_data[], int32_T ldJE);
    void evalObjAndConstrAndDerivatives(real_T obj_objfun_workspace_runtimedat,
        real_T obj_objfun_workspace_runtimed_0, const real_T
        obj_objfun_workspace_runtimed_1[96], real_T obj_nonlcon_workspace_runtimeda,
        const real_T obj_nonlcon_workspace_runtime_0[96], const real_T
        obj_nonlcon_workspace_runtime_1[96], real_T obj_nonlcon_workspace_runtime_2,
        real_T obj_nonlcon_workspace_runtime_3, int32_T obj_mCineq, const real_T x
        [193], real_T grad_workspace_data[], real_T Cineq_workspace_data[], int32_T
        ineq0, real_T Ceq_workspace[96], real_T JacIneqTrans_workspace_data[],
        int32_T iJI_col, int32_T ldJI, real_T JacEqTrans_workspace_data[], int32_T
        ldJE, real_T* fval, int32_T* status);
    void model_updateWorkingSetForNewQP(const real_T xk[193],
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet, int32_T mIneq, const real_T
        cIneq_data[], const real_T cEq[96], int32_T mLB, const real_T lb[193],
        int32_T mUB, const real_T ub[193], int32_T mFixed);
    void model_modifyOverheadPhaseOne_(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj);
    void model_setProblemType(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj, int32_T
        PROBLEM_TYPE);
    void model_initActiveSet(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj);
    void model_factoryConstruct_hh(int32_T maxRows, int32_T maxCols, int32_T
        * obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
        int32_T obj_jpvt_data[], int32_T* obj_jpvt_size, int32_T* obj_mrows, int32_T
        * obj_ncols, int32_T* obj_tau_size, int32_T* obj_minRowCol, boolean_T
        * obj_usedPivoting);
    void model_factoryConstruct_hh1(int32_T MaxDims, int32_T obj_FMat_size[2],
        int32_T* obj_ldm, int32_T* obj_ndims, int32_T* obj_info, real_T
        * obj_scaleFactor, boolean_T* obj_ConvexCheck, real_T* obj_regTol_, real_T
        * obj_workspace_, real_T* obj_workspace2_);
    void model_xgemv(int32_T m, int32_T n, const real_T A_data[], int32_T lda,
        const real_T x_data[], int32_T ix0, real_T y_data[]);
    void model_computeGradLag(real_T workspace_data[], int32_T ldA, int32_T nVar,
        const real_T grad_data[], int32_T mIneq, const real_T AineqTrans_data[],
        const real_T AeqTrans_data[], const int32_T finiteFixed_data[], int32_T
        mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
        finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
    real_T model_computePrimalFeasError(const real_T x[193], int32_T mLinIneq,
        int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[96], const
        int32_T finiteLB_data[], int32_T mLB, const real_T lb[193], const int32_T
        finiteUB_data[], int32_T mUB, const real_T ub[193]);
    void model_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
        boolean_T* gradOK, real_T* val);
    void model_saveJacobian(s_4PJjBY6NtHkFemjansM2s_model_T* obj, int32_T nVar,
        int32_T mIneq, const real_T JacCineqTrans_data[], int32_T ineqCol0, const
        real_T JacCeqTrans_data[], int32_T ldJ);
    void model_saveState(s_4PJjBY6NtHkFemjansM2s_model_T* obj);
    real_T model_computeComplError(const int32_T* fscales_lineq_constraint_size,
        const int32_T* fscales_cineq_constraint_size, const real_T xCurrent[193],
        int32_T mIneq, const real_T cIneq_data[], const int32_T finiteLB_data[],
        int32_T mLB, const real_T lb[193], const int32_T finiteUB_data[], int32_T
        mUB, const real_T ub[193], const real_T lambda_data[], int32_T iL0);
    void model_xgemv_i(int32_T m, int32_T n, const real_T A_data[], int32_T lda,
        const real_T x_data[], int32_T ix0, real_T y_data[]);
    void model_computeGradLag_n(real_T workspace_data[], int32_T ldA, int32_T nVar,
        const real_T grad_data[], int32_T mIneq, const real_T AineqTrans_data[],
        const real_T AeqTrans_data[], const int32_T finiteFixed_data[], int32_T
        mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
        finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
    void model_computeDualFeasError_j(int32_T nVar, const real_T gradLag_data[],
        boolean_T* gradOK, real_T* val);
    void mode_updateWorkingSetForNewQP_d(const real_T xk[193],
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet, int32_T mIneq, int32_T
        mNonlinIneq, const real_T cIneq_data[], const real_T cEq[96], int32_T mLB,
        const real_T lb[193], int32_T mUB, const real_T ub[193], int32_T mFixed);
    real_T model_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
    real_T model_xzlarfg(int32_T n, real_T* alpha1, real_T x_data[], int32_T ix0);
    void model_xgemv_i4(int32_T m, int32_T n, const real_T A_data[], int32_T ia0,
        int32_T lda, const real_T x_data[], int32_T ix0, real_T
        y_data[]);
    void model_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0, const
        real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
    void model_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T
        C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
    void model_qrf(real_T A_data[], const int32_T A_size[2], int32_T m, int32_T n,
        int32_T nfxd, real_T tau_data[]);
    void model_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
    void model_qrpf(real_T A_data[], const int32_T A_size[2], int32_T m, int32_T n,
        int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
    void model_xgeqp3(real_T A_data[], const int32_T A_size[2], int32_T m, int32_T
        n, int32_T jpvt_data[], real_T tau_data[], int32_T* tau_size);
    void model_factorQRE(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, const real_T
        A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
    void model_xorgqr(int32_T m, int32_T n, int32_T k, real_T A_data[], const
        int32_T A_size[2], int32_T lda, const real_T tau_data[]);
    void model_computeQ_(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, int32_T nrows);
    void model_xgemv_i4w(int32_T m, int32_T n, const real_T A_data[], int32_T lda,
        const real_T x_data[], real_T y_data[]);
    void model_xtrsv(int32_T n, const real_T A_data[], int32_T lda, real_T x_data[]);
    void model_sortLambdaQP(real_T lambda_data[], int32_T WorkingSet_nActiveConstr,
        const int32_T WorkingSet_sizes[5], const int32_T WorkingSet_isActiveIdx[6],
        const int32_T WorkingSet_Wid_data[], const int32_T
        WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
    int32_T model_ixamax(int32_T n, const real_T x_data[]);
    void model_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_model_T* Flags,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        sG8JZ69axY52WWR6RKyApQC_model_T* MeritFunction, const
        int32_T* fscales_lineq_constraint_size, const int32_T
        * fscales_cineq_constraint_size,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet,
        s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager, const real_T
        lb[193], const real_T ub[193]);
    void model_xgemv_i4wks12vozfw(int32_T m, int32_T n, const real_T A_data[],
        int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
    boolean_T model_BFGSUpdate(int32_T nvar, real_T Bk[37249], const real_T
        sk_data[], real_T yk_data[], real_T workspace_data[]);
    void model_factorQRE_j(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, int32_T mrows,
        int32_T ncols);
    void model_countsort(int32_T x_data[], int32_T xLen, int32_T workspace_data[],
        int32_T xMin, int32_T xMax);
    void model_removeConstr(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj, int32_T
        idx_global);
    int32_T model_RemoveDependentEq_(s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset, s_0DR0BN84H2zTEyVrtxAC8C_mode_T
        * qrmanager);
    void model_removeAllIneqConstr(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj);
    void model_RemoveDependentIneq_(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager, s_hLeLYpQstaGtKO7KoN11BF_mode_T*
        memspace);
    void model_xgeqrf(real_T A_data[], const int32_T A_size[2], int32_T m, int32_T
        n, real_T tau_data[], int32_T* tau_size);
    void model_factorQR_j(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, const real_T
        A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
    void model_factorQR(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, int32_T mrows,
        int32_T ncols);
    void model_xgemv_i4wks(int32_T m, int32_T n, const real_T A_data[], int32_T
        lda, const real_T x_data[], real_T y_data[]);
    void model_xgemv_i4wk(int32_T n, const real_T A_data[], int32_T lda, const
        real_T x_data[], real_T y_data[]);
    real_T model_maxConstraintViolation(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj,
        const real_T x_data[]);
    void model_xgemv_i4wks1(int32_T m, int32_T n, const real_T A_data[], int32_T
        lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
    real_T model_maxConstraintViolation_h(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj,
        const real_T x_data[], int32_T ix0);
    boolean_T model_feasibleX0ForWorkingSet(real_T workspace_data[], const int32_T
        workspace_size[2], real_T xCurrent_data[], s_yK2JoCuYdmZkt0peIhHCXB_mode_T
        * workingset, s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager);
    void model_RemoveDependentIneq__j(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager, s_hLeLYpQstaGtKO7KoN11BF_mode_T*
        memspace);
    void model_xgemv_i4wks12v(int32_T m, int32_T n, const real_T A_data[], int32_T
        lda, const real_T x_data[], real_T y_data[]);
    void model_xgemv_i4wks12(int32_T n, const real_T A_data[], int32_T lda, const
        real_T x_data[], real_T y_data[]);
    real_T model_maxConstraintViolation_ha(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj,
        const real_T x_data[]);
    void model_PresolveWorkingSet(s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace, s_yK2JoCuYdmZkt0peIhHCXB_mode_T
        * workingset, s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager);
    void model_xgemv_i4wks12vo(int32_T m, int32_T n, const real_T A[37249],
        int32_T lda, const real_T x_data[], real_T y_data[]);
    void model_computeGrad_StoreHx(s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* obj, const
        real_T H[37249], const real_T f_data[], const real_T x_data[]);
    real_T model_computeFval_ReuseHx(const s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* obj,
        real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
    void model_xrotg(real_T* a, real_T* b, real_T* c, real_T* s);
    void model_deleteColMoveEnd(s_0DR0BN84H2zTEyVrtxAC8C_mode_T* obj, int32_T idx);
    boolean_T model_strcmp(const char_T a[7]);
    void model_xgemm(int32_T m, int32_T n, int32_T k, const real_T A[37249],
        int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb,
        real_T C_data[], int32_T ldc);
    void model_xgemm_e(int32_T m, int32_T n, int32_T k, const real_T A_data[],
        int32_T ia0, int32_T lda, const real_T B_data[], int32_T
        ldb, real_T C_data[], int32_T ldc);
    int32_T model_ixamax_p(int32_T n, const real_T x_data[], int32_T incx);
    void model_fullColLDL2_(s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, int32_T
        LD_offset, int32_T NColsRemain);
    void model_partialColLDL3_(s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, int32_T
        LD_offset, int32_T NColsRemain);
    int32_T model_xpotrf(int32_T n, real_T A_data[], int32_T lda);
    void model_xgemv_i4wks12voz(int32_T m, int32_T n, const real_T A_data[],
        int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
    void model_factor(s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, const real_T A[37249],
        int32_T ndims, int32_T ldA);
    void model_solve(const s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, real_T rhs_data[]);
    void model_factor_i(s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, const real_T A[37249],
        int32_T ndims, int32_T ldA);
    void model_solve_f(const s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* obj, real_T
        rhs_data[]);
    void model_compute_deltax(const real_T H[37249],
        s_4PJjBY6NtHkFemjansM2s_model_T* solution, s_hLeLYpQstaGtKO7KoN11BF_mode_T
        * memspace, const s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* cholmanager, const
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective, boolean_T alwaysPositiveDef);
    real_T model_xnrm2_f(int32_T n, const real_T x_data[]);
    void model_xgemv_i4wks12vozf(int32_T m, int32_T n, const real_T A_data[],
        int32_T lda, const real_T x_data[], real_T y_data[]);
    void model_feasibleratiotest(const real_T solution_xstar_data[], const real_T
        solution_searchDir_data[], real_T workspace_data[], const int32_T
        workspace_size[2], int32_T workingset_nVar, int32_T workingset_ldA, const
        real_T workingset_Aineq_data[], const real_T workingset_bineq_data[], const
        real_T workingset_lb_data[], const real_T workingset_ub_data[], const
        int32_T workingset_indexLB_data[], const int32_T workingset_indexUB_data[],
        const int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6],
        const boolean_T workingset_isActiveConstr_data[], const int32_T
        workingset_nWConstr[5], boolean_T isPhaseOne, real_T* alpha, boolean_T
        * newBlocking, int32_T* constrType, int32_T* constrIdx);
    void model_checkUnboundedOrIllPosed(s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        const s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective);
    void mode_addBoundToActiveSetMatrix_(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj,
        int32_T TYPE, int32_T idx_local);
    void model_addAineqConstr(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj, int32_T
        idx_local);
    void mode_checkStoppingAndUpdateFval(int32_T* activeSetChangeID, const real_T
        f_data[], s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace, const
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective, s_yK2JoCuYdmZkt0peIhHCXB_mode_T*
        workingset, s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager, real_T
        options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
        updateFval);
    void model_iterate(const real_T H[37249], const real_T f_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* cholmanager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective, const char_T
        options_SolverName[7], real_T options_StepTolerance, real_T
        options_ObjectiveLimit, int32_T
        runTimeOptions_MaxIterations);
    void model_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar, real_T
        workspace_data[], const real_T H[37249], const real_T f_data[], const real_T
        x_data[]);
    real_T model_computeFval(const s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* obj, real_T
        workspace_data[], const real_T H[37249], const real_T f_data[], const real_T
        x_data[]);
    void model_phaseone(const real_T H[37249], const real_T f_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* cholmanager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective,
        s1TgE9KstXgkd2qJxO1bF4F_model_T* options, const
        s1TgE9KstXgkd2qJxO1bF4F_model_T* runTimeOptions);
    void model_driver_n(const real_T H[37249], const real_T f_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* solution,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* workingset,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* qrmanager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* cholmanager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* objective,
        s1TgE9KstXgkd2qJxO1bF4F_model_T* options,
        s1TgE9KstXgkd2qJxO1bF4F_model_T* runTimeOptions);
    void model_addAeqConstr(s_yK2JoCuYdmZkt0peIhHCXB_mode_T* obj, int32_T
        idx_local);
    boolean_T model_soc(const real_T Hessian[37249], const real_T grad_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* CholManager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* QPObjective, const
        s1TgE9KstXgkd2qJxO1bF4F_model_T* qpoptions);
    void model_normal(const real_T Hessian[37249], const real_T grad_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        sG8JZ69axY52WWR6RKyApQC_model_T* MeritFunction,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* CholManager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* QPObjective, const
        s1TgE9KstXgkd2qJxO1bF4F_model_T* qpoptions);
    void model_relaxed(const real_T Hessian[37249], const real_T grad_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        sG8JZ69axY52WWR6RKyApQC_model_T* MeritFunction,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* CholManager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* QPObjective,
        s1TgE9KstXgkd2qJxO1bF4F_model_T* qpoptions);
    boolean_T model_step_n(int32_T* STEP_TYPE, real_T Hessian[37249], const real_T
        lb[193], const real_T ub[193], s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        sG8JZ69axY52WWR6RKyApQC_model_T* MeritFunction,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace, s_yK2JoCuYdmZkt0peIhHCXB_mode_T
        * WorkingSet, s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* CholManager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* QPObjective,
        s1TgE9KstXgkd2qJxO1bF4F_model_T* qpoptions);
    real_T model_quadraticObjective_p(real_T runtimedata_lastMV, const real_T
        runtimedata_ref[96], const real_T X[97], const real_T U[97], real_T e);
    real_T model_anon_pa(real_T runtimedata_x, real_T runtimedata_lastMV, const
        real_T runtimedata_ref[96], const real_T z[193]);
    void model_computeObjective_(real_T obj_objfun_workspace_runtimedat, real_T
        obj_objfun_workspace_runtimed_0, const real_T
        obj_objfun_workspace_runtimed_1[96], const real_T x[193], real_T* fval,
        int32_T* status);
    void model_stateEvolution_h(const real_T X[97], const real_T U[97], real_T
        parameters_f1, real_T parameters_f2, real_T c[96]);
    void model_outputBounds_e(const real_T runtimedata_OutputMin[96], const real_T
        runtimedata_OutputMax[96], const real_T X[97], real_T e, real_T c_data[],
        int32_T c_size[2]);
    void model_anon_pau(real_T runtimedata_x, const real_T runtimedata_OutputMin
        [96], const real_T runtimedata_OutputMax[96], real_T
        runtimedata_Parameters_f1, real_T
        runtimedata_Parameters_f2, const real_T z[193], real_T
        varargout_1_data[], int32_T* varargout_1_size, real_T
        varargout_2[96]);
    int32_T model_computeConstraints_(real_T obj_nonlcon_workspace_runtimeda,
        const real_T obj_nonlcon_workspace_runtime_0[96], const real_T
        obj_nonlcon_workspace_runtime_1[96], real_T obj_nonlcon_workspace_runtime_2,
        real_T obj_nonlcon_workspace_runtime_3, int32_T obj_mCineq, const real_T x
        [193], real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[96]);
    void model_evalObjAndConstr(real_T obj_objfun_workspace_runtimedat, real_T
        obj_objfun_workspace_runtimed_0, const real_T
        obj_objfun_workspace_runtimed_1[96], real_T obj_nonlcon_workspace_runtimeda,
        const real_T obj_nonlcon_workspace_runtime_0[96], const real_T
        obj_nonlcon_workspace_runtime_1[96], real_T obj_nonlcon_workspace_runtime_2,
        real_T obj_nonlcon_workspace_runtime_3, int32_T obj_mCineq, const real_T x
        [193], real_T Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[96],
        real_T* fval, int32_T* status);
    void model_computeLinearResiduals(const real_T x[193], int32_T nVar, real_T
        workspaceIneq_data[], const int32_T* workspaceIneq_size, int32_T mLinIneq,
        const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
    real_T model_computeMeritFcn(real_T obj_penaltyParam, real_T fval, const
        real_T Cineq_workspace_data[], int32_T mIneq, const real_T Ceq_workspace[96],
        boolean_T evalWellDefined);
    void model_linesearch(boolean_T* evalWellDefined, const real_T bineq_data[],
        int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const
        real_T WorkingSet_Aineq_data[],
        s_4PJjBY6NtHkFemjansM2s_model_T* TrialState, real_T
        MeritFunction_penaltyParam, real_T MeritFunction_phi,
        real_T MeritFunction_phiPrimePlus, real_T
        MeritFunction_phiFullStep, real_T
        FcnEvaluator_objfun_workspace_r, real_T
        FcnEvaluator_objfun_workspace_0, const real_T
        FcnEvaluator_objfun_workspace_1[96], const
        s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
        * FcnEvaluator_nonlcon_workspace_, int32_T
        FcnEvaluator_mCineq, boolean_T socTaken, real_T* alpha,
        int32_T* exitflag);
    void model_driver(const real_T bineq_data[], const real_T lb[193], const
        real_T ub[193], s_4PJjBY6NtHkFemjansM2s_model_T* TrialState,
        sG8JZ69axY52WWR6RKyApQC_model_T* MeritFunction, const
        s_AtPELYDMULP2d8RTGmYMLB_mode_T* FcnEvaluator,
        s_hLeLYpQstaGtKO7KoN11BF_mode_T* memspace,
        s_yK2JoCuYdmZkt0peIhHCXB_mode_T* WorkingSet,
        s_0DR0BN84H2zTEyVrtxAC8C_mode_T* QRManager,
        s_QpTiCKBiUSXrsbbsJa2mqG_mode_T* CholManager,
        s_Nj0wGC8l1bxAgJt7zANBsB_mode_T* QPObjective, const int32_T*
        fscales_lineq_constraint_size, const int32_T
        * fscales_cineq_constraint_size, real_T Hessian[37249]);
    void model_fmincon(const s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
        * fun_workspace_runtimedata, const
        sHwyw6iy4my0aQg5J32XtHE_model_T* fun_workspace_userdata,
        const real_T x0[193], const real_T Aineq_data[], const
        real_T bineq_data[], const int32_T* bineq_size, const
        real_T lb[193], const real_T ub[193], const
        s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
        * nonlcon_workspace_runtimedata, const
        sHwyw6iy4my0aQg5J32XtHE_model_T* nonlcon_workspace_userdata,
        real_T x[193], real_T* fval, real_T* exitflag,
        s2Sdh1LWFf6aTBwZ8BHQ75D_model_T* output);
};

// Constant parameters (default storage)
extern const modelModelClass::ConstP_model_T model_ConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Constant2' : Unused code path elimination
//  Block '<S6>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S7>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S8>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S9>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S10>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S11>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S12>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S13>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S14>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S15>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S16>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S17>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S18>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S19>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S20>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S21>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S22>/Vector Dimension Check' : Unused code path elimination
//  Block '<S23>/Vector Dimension Check' : Unused code path elimination
//  Block '<S24>/Vector Dimension Check' : Unused code path elimination
//  Block '<S25>/Vector Dimension Check' : Unused code path elimination
//  Block '<S2>/mv.init_zero' : Unused code path elimination
//  Block '<S2>/x.init_zero' : Unused code path elimination
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S33>/Logical Operator3' : Unused code path elimination
//  Block '<S34>/Logical Operator3' : Unused code path elimination
//  Block '<S4>/Reshape' : Reshape block reduction
//  Block '<S4>/Reshape1' : Reshape block reduction
//  Block '<S4>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion1' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S4>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S5>/reshape_mv' : Reshape block reduction
//  Block '<S5>/reshape_x' : Reshape block reduction
//  Block '<S33>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S33>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S34>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S34>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S33>/Constant' : Unused code path elimination
//  Block '<S33>/Logical Operator1' : Unused code path elimination
//  Block '<S33>/Logical Operator2' : Unused code path elimination
//  Block '<S34>/Constant' : Unused code path elimination
//  Block '<S34>/Logical Operator1' : Unused code path elimination
//  Block '<S34>/Logical Operator2' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Note that this particular code originates from a subsystem build,
//  and has its own system numbers different from the parent model.
//  Refer to the system hierarchy for this subsystem below, and use the
//  MATLAB hilite_system command to trace the generated code back
//  to the parent model.  For example,
//
//  hilite_system('Vodovod_optim/model')    - opens subsystem Vodovod_optim/model
//  hilite_system('Vodovod_optim/model/Kp') - opens and selects block Kp
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Vodovod_optim'
//  '<S1>'   : 'Vodovod_optim/model'
//  '<S2>'   : 'Vodovod_optim/model/Nonlinear MPC'
//  '<S3>'   : 'Vodovod_optim/model/Triggers'
//  '<S4>'   : 'Vodovod_optim/model/Nonlinear MPC/MPC'
//  '<S5>'   : 'Vodovod_optim/model/Nonlinear MPC/xmvs_router'
//  '<S6>'   : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check'
//  '<S7>'   : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check1'
//  '<S8>'   : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check10'
//  '<S9>'   : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check11'
//  '<S10>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check12'
//  '<S11>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check13'
//  '<S12>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check14'
//  '<S13>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check15'
//  '<S14>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check16'
//  '<S15>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check3'
//  '<S16>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check4'
//  '<S17>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check5'
//  '<S18>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check6'
//  '<S19>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check7'
//  '<S20>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check8'
//  '<S21>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Preview Signal Check9'
//  '<S22>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Scalar Signal Check1'
//  '<S23>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Scalar Signal Check2'
//  '<S24>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Vector Signal Check1'
//  '<S25>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/MPC Vector Signal Check11'
//  '<S26>'  : 'Vodovod_optim/model/Nonlinear MPC/MPC/NLMPC'
//  '<S27>'  : 'Vodovod_optim/model/Triggers/Compare To Constant1'
//  '<S28>'  : 'Vodovod_optim/model/Triggers/Compare To Constant2'
//  '<S29>'  : 'Vodovod_optim/model/Triggers/Compare To Constant3'
//  '<S30>'  : 'Vodovod_optim/model/Triggers/Compare To Constant4'
//  '<S31>'  : 'Vodovod_optim/model/Triggers/Set-Reset Flip-Flop'
//  '<S32>'  : 'Vodovod_optim/model/Triggers/Set-Reset Flip-Flop1'
//  '<S33>'  : 'Vodovod_optim/model/Triggers/Set-Reset Flip-Flop/Discrete'
//  '<S34>'  : 'Vodovod_optim/model/Triggers/Set-Reset Flip-Flop1/Discrete'

#endif                                 // RTW_HEADER_model_h_

//
// File trailer for generated code.
//
// [EOF]
//
