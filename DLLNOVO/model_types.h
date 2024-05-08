//
// File: model_types.h
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
#ifndef RTW_HEADER_model_types_h_
#define RTW_HEADER_model_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_bus_2_
#define DEFINED_TYPEDEF_FOR_bus_2_

struct bus_2
{
	real_T Level;
	real_T Protok;
	real_T Constant1[97];
};

#endif

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_sG8JZ69axY52WWR6RKyApQC_model_T
#define struct_sG8JZ69axY52WWR6RKyApQC_model_T

struct sG8JZ69axY52WWR6RKyApQC_model_T
{
	real_T penaltyParam;
	real_T threshold;
	int32_T nPenaltyDecreases;
	real_T linearizedConstrViol;
	real_T initFval;
	real_T initConstrViolationEq;
	real_T initConstrViolationIneq;
	real_T phi;
	real_T phiPrimePlus;
	real_T phiFullStep;
	real_T feasRelativeFactor;
	real_T nlpPrimalFeasError;
	real_T nlpDualFeasError;
	real_T nlpComplError;
	real_T firstOrderOpt;
	boolean_T hasObjective;
};

#endif                                // struct_sG8JZ69axY52WWR6RKyApQC_model_T

#ifndef struct_s7RdrPWkr8UPAUyTdDJkLaG_model_T
#define struct_s7RdrPWkr8UPAUyTdDJkLaG_model_T

struct s7RdrPWkr8UPAUyTdDJkLaG_model_T
{
	boolean_T gradOK;
	boolean_T fevalOK;
	boolean_T done;
	boolean_T stepAccepted;
	boolean_T failedLineSearch;
	int32_T stepType;
};

#endif                                // struct_s7RdrPWkr8UPAUyTdDJkLaG_model_T

#ifndef struct_s1TgE9KstXgkd2qJxO1bF4F_model_T
#define struct_s1TgE9KstXgkd2qJxO1bF4F_model_T

struct s1TgE9KstXgkd2qJxO1bF4F_model_T
{
	char_T SolverName[7];
	int32_T MaxIterations;
	real_T StepTolerance;
	real_T OptimalityTolerance;
	real_T ConstraintTolerance;
	real_T ObjectiveLimit;
	real_T PricingTolerance;
	real_T ConstrRelTolFactor;
	real_T ProbRelTolFactor;
	boolean_T RemainFeasible;
	boolean_T IterDisplayQP;
};

#endif                                // struct_s1TgE9KstXgkd2qJxO1bF4F_model_T

#ifndef struct_s2Sdh1LWFf6aTBwZ8BHQ75D_model_T
#define struct_s2Sdh1LWFf6aTBwZ8BHQ75D_model_T

struct s2Sdh1LWFf6aTBwZ8BHQ75D_model_T
{
	real_T iterations;
	real_T funcCount;
	char_T algorithm[3];
	real_T constrviolation;
	real_T stepsize;
	real_T lssteplength;
	real_T firstorderopt;
};

#endif                                // struct_s2Sdh1LWFf6aTBwZ8BHQ75D_model_T

#ifndef struct_cell_0_model_T
#define struct_cell_0_model_T

struct cell_0_model_T
{
	real_T f1;
	real_T f2;
	real_T f3[97];
};

#endif                                 // struct_cell_0_model_T

#ifndef struct_emxArray_real_T_1156x386_mode_T
#define struct_emxArray_real_T_1156x386_mode_T

struct emxArray_real_T_1156x386_mode_T
{
	real_T data[446216];
	int32_T size[2];
};

#endif                                // struct_emxArray_real_T_1156x386_mode_T

#ifndef struct_emxArray_real_T_1156x96_model_T
#define struct_emxArray_real_T_1156x96_model_T

struct emxArray_real_T_1156x96_model_T
{
	real_T data[110976];
	int32_T size[2];
};

#endif                                // struct_emxArray_real_T_1156x96_model_T

#ifndef struct_emxArray_real_T_2215x1156_mod_T
#define struct_emxArray_real_T_2215x1156_mod_T

struct emxArray_real_T_2215x1156_mod_T
{
	real_T data[2560540];
	int32_T size[2];
};

#endif                                // struct_emxArray_real_T_2215x1156_mod_T

#ifndef struct_emxArray_real_T_2215x2215_mod_T
#define struct_emxArray_real_T_2215x2215_mod_T

struct emxArray_real_T_2215x2215_mod_T
{
	real_T data[4906225];
	int32_T size[2];
};

#endif                                // struct_emxArray_real_T_2215x2215_mod_T

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_s_QpTiCKBiUSXrsbbsJa2mqG_mode_T
#define struct_s_QpTiCKBiUSXrsbbsJa2mqG_mode_T

struct s_QpTiCKBiUSXrsbbsJa2mqG_mode_T
{
	emxArray_real_T_2215x2215_mod_T FMat;
	int32_T ldm;
	int32_T ndims;
	int32_T info;
	real_T scaleFactor;
	boolean_T ConvexCheck;
	real_T regTol_;
	real_T workspace_;
	real_T workspace2_;
};

#endif                                // struct_s_QpTiCKBiUSXrsbbsJa2mqG_mode_T

#ifndef struct_s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
#define struct_s_iMrk9lYy4GSFeZiuOV2cXH_mode_T

struct s_iMrk9lYy4GSFeZiuOV2cXH_mode_T
{
	real_T x;
	real_T lastMV;
	real_T ref[96];
	real_T OutputWeights[96];
	real_T MVWeights[96];
	real_T MVRateWeights[96];
	real_T ECRWeight;
	real_T OutputMin[96];
	real_T OutputMax[96];
	real_T StateMin[96];
	real_T StateMax[96];
	real_T MVMin[96];
	real_T MVMax[96];
	real_T MVRateMin[96];
	real_T MVRateMax[96];
	real_T MVScaledTarget[96];
	cell_0_model_T Parameters;
};

#endif                                // struct_s_iMrk9lYy4GSFeZiuOV2cXH_mode_T

#ifndef struct_sHwyw6iy4my0aQg5J32XtHE_model_T
#define struct_sHwyw6iy4my0aQg5J32XtHE_model_T

struct sHwyw6iy4my0aQg5J32XtHE_model_T
{
	real_T Ts;
	real_T CurrentStates;
	real_T LastMV;
	real_T References[96];
	real_T MVTarget[96];
	real_T PredictionHorizon;
	real_T NumOfStates;
	real_T NumOfOutputs;
	real_T NumOfInputs;
	real_T MVIndex;
};

#endif                                // struct_sHwyw6iy4my0aQg5J32XtHE_model_T

#ifndef struct_s_qBnnXreEguDYSvUMDbZDMH_mode_T
#define struct_s_qBnnXreEguDYSvUMDbZDMH_mode_T

struct s_qBnnXreEguDYSvUMDbZDMH_mode_T
{
	s_iMrk9lYy4GSFeZiuOV2cXH_mode_T runtimedata;
	sHwyw6iy4my0aQg5J32XtHE_model_T userdata;
};

#endif                                // struct_s_qBnnXreEguDYSvUMDbZDMH_mode_T

#ifndef struct_anonymous_function_model_T
#define struct_anonymous_function_model_T

struct anonymous_function_model_T
{
	s_qBnnXreEguDYSvUMDbZDMH_mode_T workspace;
};

#endif                                 // struct_anonymous_function_model_T

#ifndef struct_s_AtPELYDMULP2d8RTGmYMLB_mode_T
#define struct_s_AtPELYDMULP2d8RTGmYMLB_mode_T

struct s_AtPELYDMULP2d8RTGmYMLB_mode_T
{
	anonymous_function_model_T objfun;
	anonymous_function_model_T nonlcon;
	int32_T nVar;
	int32_T mCineq;
	int32_T mCeq;
	boolean_T NonFiniteSupport;
	boolean_T SpecifyObjectiveGradient;
	boolean_T SpecifyConstraintGradient;
	boolean_T ScaleProblem;
};

#endif                                // struct_s_AtPELYDMULP2d8RTGmYMLB_mode_T

#ifndef struct_emxArray_real_T_770_model_T
#define struct_emxArray_real_T_770_model_T

struct emxArray_real_T_770_model_T
{
	real_T data[770];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_770_model_T

#ifndef struct_emxArray_real_T_1156_model_T
#define struct_emxArray_real_T_1156_model_T

struct emxArray_real_T_1156_model_T
{
	real_T data[1156];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_1156_model_T

#ifndef struct_emxArray_real_T_2215_model_T
#define struct_emxArray_real_T_2215_model_T

struct emxArray_real_T_2215_model_T
{
	real_T data[2215];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_2215_model_T

#ifndef struct_emxArray_int32_T_2215_model_T
#define struct_emxArray_int32_T_2215_model_T

struct emxArray_int32_T_2215_model_T
{
	int32_T data[2215];
	int32_T size;
};

#endif                                 // struct_emxArray_int32_T_2215_model_T

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_s_4PJjBY6NtHkFemjansM2s_model_T
#define struct_s_4PJjBY6NtHkFemjansM2s_model_T

struct s_4PJjBY6NtHkFemjansM2s_model_T
{
	int32_T nVarMax;
	int32_T mNonlinIneq;
	int32_T mNonlinEq;
	int32_T mIneq;
	int32_T mEq;
	int32_T iNonIneq0;
	int32_T iNonEq0;
	real_T sqpFval;
	real_T sqpFval_old;
	real_T xstarsqp[193];
	real_T xstarsqp_old[193];
	emxArray_real_T_770_model_T cIneq;
	emxArray_real_T_770_model_T cIneq_old;
	real_T cEq[96];
	real_T cEq_old[96];
	emxArray_real_T_1156_model_T grad;
	emxArray_real_T_1156_model_T grad_old;
	int32_T FunctionEvaluations;
	int32_T sqpIterations;
	int32_T sqpExitFlag;
	emxArray_real_T_2215_model_T lambdasqp;
	emxArray_real_T_2215_model_T lambdasqp_old;
	real_T steplength;
	emxArray_real_T_1156_model_T delta_x;
	emxArray_real_T_1156_model_T socDirection;
	emxArray_real_T_2215_model_T lambda_old;
	emxArray_int32_T_2215_model_T workingset_old;
	emxArray_real_T_1156x386_mode_T JacCineqTrans_old;
	emxArray_real_T_1156x96_model_T JacCeqTrans_old;
	emxArray_real_T_1156_model_T gradLag;
	emxArray_real_T_1156_model_T delta_gradLag;
	emxArray_real_T_1156_model_T xstar;
	real_T fstar;
	real_T firstorderopt;
	emxArray_real_T_2215_model_T lambda;
	int32_T state;
	real_T maxConstr;
	int32_T iterations;
	emxArray_real_T_1156_model_T searchDir;
};

#endif                                // struct_s_4PJjBY6NtHkFemjansM2s_model_T

#ifndef struct_emxArray_real_T_1155_model_T
#define struct_emxArray_real_T_1155_model_T

struct emxArray_real_T_1155_model_T
{
	real_T data[1155];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_1155_model_T

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_s_Nj0wGC8l1bxAgJt7zANBsB_mode_T
#define struct_s_Nj0wGC8l1bxAgJt7zANBsB_mode_T

struct s_Nj0wGC8l1bxAgJt7zANBsB_mode_T
{
	emxArray_real_T_1156_model_T grad;
	emxArray_real_T_1155_model_T Hx;
	boolean_T hasLinear;
	int32_T nvar;
	int32_T maxVar;
	real_T beta;
	real_T rho;
	int32_T objtype;
	int32_T prev_objtype;
	int32_T prev_nvar;
	boolean_T prev_hasLinear;
	real_T gammaScalar;
};

#endif                                // struct_s_Nj0wGC8l1bxAgJt7zANBsB_mode_T

#ifndef struct_s_hLeLYpQstaGtKO7KoN11BF_mode_T
#define struct_s_hLeLYpQstaGtKO7KoN11BF_mode_T

struct s_hLeLYpQstaGtKO7KoN11BF_mode_T
{
	emxArray_real_T_2215x1156_mod_T workspace_double;
	emxArray_int32_T_2215_model_T workspace_int;
	emxArray_int32_T_2215_model_T workspace_sort;
};

#endif                                // struct_s_hLeLYpQstaGtKO7KoN11BF_mode_T

#ifndef struct_emxArray_real_T_890120_model_T
#define struct_emxArray_real_T_890120_model_T

struct emxArray_real_T_890120_model_T
{
	real_T data[890120];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_890120_model_T

#ifndef struct_emxArray_real_T_110976_model_T
#define struct_emxArray_real_T_110976_model_T

struct emxArray_real_T_110976_model_T
{
	real_T data[110976];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_110976_model_T

#ifndef struct_emxArray_int32_T_1156_model_T
#define struct_emxArray_int32_T_1156_model_T

struct emxArray_int32_T_1156_model_T
{
	int32_T data[1156];
	int32_T size;
};

#endif                                 // struct_emxArray_int32_T_1156_model_T

#ifndef struct_emxArray_real_T_2560540_model_T
#define struct_emxArray_real_T_2560540_model_T

struct emxArray_real_T_2560540_model_T
{
	real_T data[2560540];
	int32_T size;
};

#endif                                // struct_emxArray_real_T_2560540_model_T

#ifndef struct_emxArray_boolean_T_2215_model_T
#define struct_emxArray_boolean_T_2215_model_T

struct emxArray_boolean_T_2215_model_T
{
	boolean_T data[2215];
	int32_T size;
};

#endif                                // struct_emxArray_boolean_T_2215_model_T

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_s_yK2JoCuYdmZkt0peIhHCXB_mode_T
#define struct_s_yK2JoCuYdmZkt0peIhHCXB_mode_T

struct s_yK2JoCuYdmZkt0peIhHCXB_mode_T
{
	int32_T mConstr;
	int32_T mConstrOrig;
	int32_T mConstrMax;
	int32_T nVar;
	int32_T nVarOrig;
	int32_T nVarMax;
	int32_T ldA;
	emxArray_real_T_890120_model_T Aineq;
	emxArray_real_T_770_model_T bineq;
	emxArray_real_T_110976_model_T Aeq;
	real_T beq[96];
	emxArray_real_T_1156_model_T lb;
	emxArray_real_T_1156_model_T ub;
	emxArray_int32_T_1156_model_T indexLB;
	emxArray_int32_T_1156_model_T indexUB;
	emxArray_int32_T_1156_model_T indexFixed;
	int32_T mEqRemoved;
	int32_T indexEqRemoved[96];
	emxArray_real_T_2560540_model_T ATwset;
	emxArray_real_T_2215_model_T bwset;
	int32_T nActiveConstr;
	emxArray_real_T_2215_model_T maxConstrWorkspace;
	int32_T sizes[5];
	int32_T sizesNormal[5];
	int32_T sizesPhaseOne[5];
	int32_T sizesRegularized[5];
	int32_T sizesRegPhaseOne[5];
	int32_T isActiveIdx[6];
	int32_T isActiveIdxNormal[6];
	int32_T isActiveIdxPhaseOne[6];
	int32_T isActiveIdxRegularized[6];
	int32_T isActiveIdxRegPhaseOne[6];
	emxArray_boolean_T_2215_model_T isActiveConstr;
	emxArray_int32_T_2215_model_T Wid;
	emxArray_int32_T_2215_model_T Wlocalidx;
	int32_T nWConstr[5];
	int32_T probType;
	real_T SLACK0;
};

#endif                                // struct_s_yK2JoCuYdmZkt0peIhHCXB_mode_T

#ifndef struct_s_0DR0BN84H2zTEyVrtxAC8C_mode_T
#define struct_s_0DR0BN84H2zTEyVrtxAC8C_mode_T

struct s_0DR0BN84H2zTEyVrtxAC8C_mode_T
{
	int32_T ldq;
	emxArray_real_T_2215x2215_mod_T QR;
	emxArray_real_T_2215x2215_mod_T Q;
	emxArray_int32_T_2215_model_T jpvt;
	int32_T mrows;
	int32_T ncols;
	emxArray_real_T_2215_model_T tau;
	int32_T minRowCol;
	boolean_T usedPivoting;
};

#endif                                // struct_s_0DR0BN84H2zTEyVrtxAC8C_mode_T

#ifndef struct_emxArray_real_T_386_model_T
#define struct_emxArray_real_T_386_model_T

struct emxArray_real_T_386_model_T
{
	real_T data[386];
	int32_T size;
};

#endif                                 // struct_emxArray_real_T_386_model_T

// Custom Type definition for MATLAB Function: '<S4>/NLMPC'
#ifndef struct_s_H4aaPf5V352U36XtGf6OzG_mode_T
#define struct_s_H4aaPf5V352U36XtGf6OzG_mode_T

struct s_H4aaPf5V352U36XtGf6OzG_mode_T
{
	anonymous_function_model_T objfun;
	anonymous_function_model_T nonlin;
	real_T f_1;
	emxArray_real_T_386_model_T cIneq_1;
	real_T cEq_1[96];
	real_T f_2;
	emxArray_real_T_386_model_T cIneq_2;
	real_T cEq_2[96];
	int32_T nVar;
	int32_T mIneq;
	int32_T mEq;
	int32_T numEvals;
	boolean_T SpecifyObjectiveGradient;
	boolean_T SpecifyConstraintGradient;
	boolean_T isEmptyNonlcon;
	boolean_T hasLB[193];
	boolean_T hasUB[193];
	boolean_T hasBounds;
	int32_T FiniteDifferenceType;
};

#endif                                // struct_s_H4aaPf5V352U36XtGf6OzG_mode_T
#endif                                 // RTW_HEADER_model_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
