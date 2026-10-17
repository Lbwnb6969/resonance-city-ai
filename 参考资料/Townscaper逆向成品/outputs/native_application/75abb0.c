// RVA 0x75abb0 | Placemaker.PropPlacer$$ChangeHideCount
// PDB: PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
// Body: [[1075abb0, 1075ac48]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,bool param_3,
          MethodInfo *param_4)

{
  String_t *pSVar1;

  if (DAT_1151ec44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral65532634876CECD3DE790249E964571564780C75);
    DAT_1151ec44 = '\x01';
  }
  if (param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) {
    if (param_3) {
      param_2->___hideCount_9 = param_2->___hideCount_9 + '\x01';
    }
    else {
      param_2->___hideCount_9 = param_2->___hideCount_9 + 0xff;
    }
    if (param_2->___hideCount_9 == 0xff) {
      pSVar1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                          (MethodInfo *)0x0);
      pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                         (_stringLiteral65532634876CECD3DE790249E964571564780C75,pSVar1,
                          (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                ((Il2CppObject *)pSVar1,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                 (MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
