/* Generated by Eclipse Common Lisp 1.1-HOSTED on cad0.
   Tuesday the twenty-sixth of May, 1998, 3:50:59 pm CDT. */
#include <eclipse.h>

clObject clCharpSimpleBaseString __P((clCharp)), clExtraArgs(clProto),
  clFboundp(clProto), clFuncall(clProto), clMakeKeyword(clProto),
  clMissingArgs(clProto), clSetFuncallableInstanceFunction(clProto),
  clSymbolFunction(clProto);

extern clObject clENCLOSE, clINTERPRETED_FUNCTION, clMAKE_INSTANCE,
  clMAKE_INTERPRETER;

static clObject I_1, keyENV, keyLAMBDA, keyNAME, STR_ENV__1,
  STR_LAMBDA__0, STR_NAME__2;

clObject clEnclose clVdecl(_ap)
{ clObject lambda, env, name;
  { clBeginParse(_ap);
    clSetq(lambda,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(env, (_clVp(_ap) ? clVpop(_ap) : clNIL));
    clSetq(name, (_clVp(_ap) ? clVpop(_ap) : clNIL));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject closure;
    { clObject L_6, L_4, L_2;
      clSetq(L_2, lambda);
      clSetq(L_4, env);
      clSetq(L_6, name);
      clSetq(closure,
             clFuncallFunction(clSymbolFunctionValue(clMAKE_INSTANCE),
                               clINTERPRETED_FUNCTION,
                               keyLAMBDA,
                               L_2,
                               keyENV,
                               L_4,
                               keyNAME,
                               L_6,
                               clEOA)); }
    if (clTrue(clFboundp(clMAKE_INTERPRETER, clEOA)))
      { clObject L_1;
        { clObject L_0__R1;
          clSetq(L_0__R1, clSymbolFunction(clMAKE_INTERPRETER, clEOA));
          clSetq(L_1, clFuncall(L_0__R1, closure, clEOA)); }
        clSetFuncallableInstanceFunction(closure, L_1, clEOA); }
    return(clValues1(closure)); } }

void clInitEnclose __P((void)) 
{ clDbind(clstarPACKAGEstar);
  clDbind(clstarREADTABLEstar);
  clDbind(clstarLOAD_TRUENAMEstar);
  clDbind(clstarLOAD_PATHNAMEstar);
  clSetq(I_1, clIntFixnum(1));
  clSetq(STR_LAMBDA__0, clCharpSimpleBaseString("LAMBDA"));
  clSetq(keyLAMBDA, clMakeKeyword(STR_LAMBDA__0, clEOA));
  clSetq(STR_ENV__1, clCharpSimpleBaseString("ENV"));
  clSetq(keyENV, clMakeKeyword(STR_ENV__1, clEOA));
  clSetq(STR_NAME__2, clCharpSimpleBaseString("NAME"));
  clSetq(keyNAME, clMakeKeyword(STR_NAME__2, clEOA));

  clSetSymbolFunctionValue(clENCLOSE,
                           clMakeClosure(0, clEnclose, clNULL_HOOK));
  (void) clENCLOSE;
  clUnwind(4); }
