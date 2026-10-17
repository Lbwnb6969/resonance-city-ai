// RVA 0x10d2d70 | FuryStudios.FurySDK.Utils.SystemMatch$$IsSatisfied
// PDB: SystemMatch_IsSatisfied_m8F6575DC4707FF889D5C4521BFC496399A2E3B26
// Body: [[110d2d70, 110d2ed5]]
// Direct callees:
// 1003e420 Invoke
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

bool __cdecl
SystemMatch_IsSatisfied_m8F6575DC4707FF889D5C4521BFC496399A2E3B26
          (SystemMatch_t7071B19C24C19DF6BB49AE835850091587523C89 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  String_t *pSVar2;
  int *piVar3;
  uint uVar4;

  if (DAT_11523ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MatchMode_t31DAAB3F690A2D0293850AB0774C4FE9496D4299_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF65948CD2D5DB309EB062269C3C7EE901EB57F2E);
    DAT_11523ab1 = '\x01';
  }
  if (param_1->___match_1 == 0) {
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields !=
        (Il2CppObject *)0x0) {
      uVar4 = InterfaceFuncInvoker0<int>::Invoke
                        (0,
                         IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                         *(Il2CppObject **)
                          Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                          static_fields);
      return (param_1->___systemId_0 & uVar4) != 0;
    }
  }
  else if (param_1->___match_1 == 1) {
    if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
      `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if (*(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields !=
        (Il2CppObject *)0x0) {
      uVar4 = InterfaceFuncInvoker0<int>::Invoke
                        (0,
                         IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,
                         *(Il2CppObject **)
                          Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                          static_fields);
      return (param_1->___systemId_0 & uVar4) == param_1->___systemId_0;
    }
  }
  else {
    pIVar1 = il2cpp_value_box(MatchMode_t31DAAB3F690A2D0293850AB0774C4FE9496D4299_il2cpp_TypeInfo_var
                              ,&param_1->___match_1);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pSVar2 = (String_t *)
               (**(code **)&(pIVar1->field0_0x0).klass[1].byval_arg.attrs)
                         (pIVar1,(pIVar1->field0_0x0).klass[1].this_arg.data.dummy);
      piVar3 = il2cpp_object_unbox(pIVar1);
      param_1->___match_1 = *piVar3;
      pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (_stringLiteralF65948CD2D5DB309EB062269C3C7EE901EB57F2E,pSVar2,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
