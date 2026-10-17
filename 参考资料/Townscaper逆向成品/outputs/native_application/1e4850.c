// RVA 0x1e4850 | Placemaker.WorldMeshes$$GetMeshFilterOnly
// PDB: WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
// Body: [[101e4850, 101e4995]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __cdecl
WorldMeshes_GetMeshFilterOnly_m2DBCBD6B81FC98FD3C64753E9838DD6A13D99C94
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  int iVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar6;

  if (DAT_1151af2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151af2f = '\x01';
  }
  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar1,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      if (DAT_1151af2e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
        DAT_1151af2e = '\x01';
      }
      pGVar3 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                         (_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821,param_2,
                          (MethodInfo *)0x0);
      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                  (pGVar3,
                   GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
                  );
        pMVar4 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                           (pGVar3,
                            GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                           );
        return pMVar4;
      }
    }
    else {
      pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (pTVar5,(MethodInfo *)0x0);
        if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pTVar1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar1,iVar2 + -1,(MethodInfo *)0x0);
          if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pCVar6 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                     Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,
                                Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                               );
            if (pCVar6 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                 (pCVar6,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
                GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                          (pGVar3,true,(MethodInfo *)0x0);
                pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   (pCVar6,(MethodInfo *)0x0);
                if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                            (pTVar1,param_2,false,(MethodInfo *)0x0);
                  return (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pCVar6;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
