// RVA 0x1e51a0 | Placemaker.WorldMeshes$$ReturnMeshFilters
// PDB: WorldMeshes_ReturnMeshFilters_m02E39DF90D8C0B0D6C7DEBD456994594FBDDFD93
// Body: [[101e51a0, 101e5250]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4fa0 WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
WorldMeshes_ReturnMeshFilters_m02E39DF90D8C0B0D6C7DEBD456994594FBDDFD93
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  bool bVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar4;

  if (DAT_1151af33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151af33 = '\x01';
  }
  if (param_2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_2,(MethodInfo *)0x0);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return;
      }
      pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_2,iVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pOVar4 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                         );
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar4,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
                  (param_1,(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pOVar4,
                   (MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
