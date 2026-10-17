// RVA 0x3d89c0 | Placemaker.ModuleBuilder$$IterateDeconstructQubes
// PDB: ModuleBuilder_IterateDeconstructQubes_m8A4587AB8A18C55FE789A1931C0BA788C159C70A
// Body: [[103d89c0, 103d8a76]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d8680 ModuleBuilder_DeconstructModuleContainer_m7C9EE176D44F72F490E4EF15C61CE1B1BA11EE08
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

bool __cdecl
ModuleBuilder_IterateDeconstructQubes_m8A4587AB8A18C55FE789A1931C0BA788C159C70A
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *pMVar4;

  if (DAT_1151c87b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    DAT_1151c87b = '\x01';
  }
  if (param_1->___moduleContainersToDeconstruct_6 !=
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___moduleContainersToDeconstruct_6,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return false;
    }
    if (param_1->___moduleContainersToDeconstruct_6 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (param_1->___moduleContainersToDeconstruct_6,(MethodInfo *)0x0);
      while( true ) {
        if (iVar2 < 1) {
          return true;
        }
        iVar2 = iVar2 + -1;
        if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        break;
        bVar1 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                          (param_1->___master_4,(MethodInfo *)0x0);
        if (!bVar1) {
          return true;
        }
        if ((param_1->___moduleContainersToDeconstruct_6 ==
             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (param_1->___moduleContainersToDeconstruct_6,iVar2,(MethodInfo *)0x0)
           , pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
        pMVar4 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                            Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                           );
        ModuleBuilder_DeconstructModuleContainer_m7C9EE176D44F72F490E4EF15C61CE1B1BA11EE08
                  (param_1,pMVar4,(MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
