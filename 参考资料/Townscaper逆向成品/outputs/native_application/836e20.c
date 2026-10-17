// RVA 0x836e20 | Os.Utils.ExtraMath$$Rotate2D
// PDB: ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
// Body: [[10836e20, 10836f53]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10198250 _libm_sse2_cos_precise
// 10198410 _libm_sse2_sin_precise

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
          (float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,float param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar5;

  if (DAT_1151f3c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f3c3 = '\x01';
  }
  fVar2 = param_2 * __real_3c8efa35;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  if (`float___cdecl_math_cos_m210EFB3DFB9561CDEEF523635CF60E1406678424_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
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
  dVar3 = (double)fVar2;
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
  dVar4 = (double)fVar2;
  _libm_sse2_sin_precise();
  fVar5.___y_1 = (float)dVar4 * param_1.___x_0 + param_1.___y_1 * (float)dVar3;
  fVar5.___x_0 = param_1.___x_0 * (float)dVar3 - (float)dVar4 * param_1.___y_1;
  return fVar5;
}
