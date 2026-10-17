// RVA 0xe1fc50 | Placemaker.GridGenerator$$.cctor
// PDB: GridGenerator__cctor_m9D2163196389DAD0C0DD6D6E53EA27CC120AB36D
// Body: [[10e1fc50, 10e1fcd5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196010 _libm_sse2_sqrt_precise

void __cdecl GridGenerator__cctor_m9D2163196389DAD0C0DD6D6E53EA27CC120AB36D(MethodInfo *param_1)

{
  double dVar1;

  if (DAT_1152267a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1152267a = '\x01';
  }
  if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
  }
  dVar1 = __real_4000000000000000;
  _libm_sse2_sqrt_precise();
  *(float *)GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            static_fields = (float)dVar1 * __real_3f000000;
  return;
}
