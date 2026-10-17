// RVA 0x3d8870 | Placemaker.ModuleBuilder$$GetModuleContainer
// PDB: ModuleBuilder_GetModuleContainer_m0505431E29DC7C5BE931F50AFED953F069503121
// Body: [[103d8870, 103d891a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3dd50 GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9

ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 * __cdecl
ModuleBuilder_GetModuleContainer_m0505431E29DC7C5BE931F50AFED953F069503121
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,MethodInfo *param_2)

{
  int iVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *pMVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;

  if (DAT_1151c872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m0ED0B6F2BF90B430FFA63DA371C00B7052632606_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    DAT_1151c872 = '\x01';
  }
  if (param_1->___moduleContainerPool_5 !=
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___moduleContainerPool_5,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      pGVar2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)
               il2cpp_codegen_object_new
                         (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
      GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(pGVar2,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        pMVar3 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                           (pGVar2,
                            GameObject_AddComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m0ED0B6F2BF90B430FFA63DA371C00B7052632606_RuntimeMethod_var
                           );
        return pMVar3;
      }
    }
    else if (param_1->___moduleContainerPool_5 !=
             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___moduleContainerPool_5,iVar1 + -1,(MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pMVar3 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar4,
                            Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                           );
        return pMVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
