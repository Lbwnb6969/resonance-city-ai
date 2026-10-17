// RVA 0x873e10 | Placemaker.AudioSourcePool$$Start
// PDB: AudioSourcePool_Start_mFE4B61DCAA3418077837E2D30F6D3CFD9AC29247
// Body: [[10873e10, 10873ebe]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared

void __cdecl
AudioSourcePool_Start_mFE4B61DCAA3418077837E2D30F6D3CFD9AC29247
          (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;

  if (DAT_1151f59b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m05C2600C9D0934EB81B45A2566FCC7C4C41C7142_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f59b = '\x01';
  }
  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pTVar1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(pTVar1,0,(MethodInfo *)0x0);
  iVar3 = 1;
  if (1 < param_1->___count_5) {
    do {
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                ((Il2CppObject *)pTVar1,pTVar2,
                 Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m05C2600C9D0934EB81B45A2566FCC7C4C41C7142_RuntimeMethod_var
                );
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1->___count_5);
  }
  return;
}
