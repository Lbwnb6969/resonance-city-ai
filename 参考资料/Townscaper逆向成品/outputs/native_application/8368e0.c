// RVA 0x8368e0 | Os.Utils.ExtraMath$$GetRotate2DFactors
// PDB: ExtraMath_GetRotate2DFactors_m458C108ADB384D923CEC596B6FE29697BF73F3E9
// Body: [[108368e0, 108369a3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10198250 _libm_sse2_cos_precise
// 10198410 _libm_sse2_sin_precise

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
ExtraMath_GetRotate2DFactors_m458C108ADB384D923CEC596B6FE29697BF73F3E9
          (float param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  double dVar2;
  double dVar3;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar4;

  if (!`float___cdecl_math_cos_m210EFB3DFB9561CDEEF523635CF60E1406678424_inline(float,MethodInfo_const*)'
       ::__l2::s_Il2CppMethodInitialized) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    `float___cdecl_math_cos_m210EFB3DFB9561CDEEF523635CF60E1406678424_inline(float,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
  }
  pIVar1 = Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
  dVar2 = (double)param_1;
  _libm_sse2_cos_precise();
  if (`float___cdecl_math_sin_mFE9768BE04BEBBD19B08FB6694319C9FECCC95FE_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    `float___cdecl_math_sin_mFE9768BE04BEBBD19B08FB6694319C9FECCC95FE_inline(float,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
    pIVar1 = Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
  }
  if ((pIVar1->has_cctor != '\0') && (pIVar1->cctor_finished == 0)) {
    il2cpp_runtime_class_init(pIVar1);
  }
  dVar3 = (double)param_1;
  _libm_sse2_sin_precise();
  fVar4.___y_1 = (float)dVar3;
  fVar4.___x_0 = (float)dVar2;
  return fVar4;
}
