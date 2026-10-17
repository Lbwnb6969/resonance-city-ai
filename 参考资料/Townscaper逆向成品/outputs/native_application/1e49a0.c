// RVA 0x1e49a0 | Placemaker.WorldMeshes$$GetMeshFilter
// PDB: WorldMeshes_GetMeshFilter_m316E3A8FDC7957FBC39804689659E7AFA15144B0
// Body: [[101e49a0, 101e4b53] [101e4b5d, 101e4b93]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4cc0 WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared

MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __cdecl
WorldMeshes_GetMeshFilter_m316E3A8FDC7957FBC39804689659E7AFA15144B0
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *pLVar1;
  uint uVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  int iVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar8;

  if (DAT_1151af2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    DAT_1151af2f = '\x01';
  }
  pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101e4b8f;
  iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                    (pTVar3,(MethodInfo *)0x0);
  if (iVar4 < 1) {
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
    pGVar5 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                       (_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821,param_2,
                        (MethodInfo *)0x0);
    if (pGVar5 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_101e4b8f;
    GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
              (pGVar5,
               GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
              );
    pMVar6 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
             GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                       (pGVar5,
                        GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                       );
  }
  else {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101e4b8f;
    iVar4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar7,(MethodInfo *)0x0);
    if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101e4b8f;
    pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                       (pTVar3,iVar4 + -1,(MethodInfo *)0x0);
    if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101e4b8f;
    pMVar6 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                        Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                       );
    if (pMVar6 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_101e4b8f;
    pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar6,
                        (MethodInfo *)0x0);
    if (pGVar5 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_101e4b8f;
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar5,true,(MethodInfo *)0x0);
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar6,
                        (MethodInfo *)0x0);
    if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101e4b8f;
    Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
              (pTVar3,param_2,false,(MethodInfo *)0x0);
  }
  if (DAT_1151af2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m24F4C8B3355007BC24EA5AC2BDBBAA97DEAB5F2B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF86A27C4FC0596167E330736ED4DED4A4D3D5240_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5CE3970E0F3AC573EEB484A6AEA4F62BA9218499_RuntimeMethod_var)
    ;
    DAT_1151af2d = '\x01';
  }
  pLVar1 = param_1->___meshStack_6;
  if (pLVar1 != (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) {
    uVar2 = pLVar1->____size_2;
    if ((int)uVar2 < 1) {
      pMVar8 = WorldMeshes_GetNewMesh_mECCFBA7609DEAEC513334F1AA99A9DA49B9B6B60
                         (param_1,(MethodInfo *)0x0);
    }
    else {
      if (uVar2 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pMVar8 = pLVar1->____items_1->m_Items[uVar2 - 1];
      if (pLVar1 == (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)0x0) goto LAB_101e4b8f;
      List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pLVar1,uVar2 - 1,
                 List_1_RemoveAt_m24F4C8B3355007BC24EA5AC2BDBBAA97DEAB5F2B_RuntimeMethod_var);
    }
    if (pMVar6 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar6,pMVar8,(MethodInfo *)0x0);
      return pMVar6;
    }
  }
LAB_101e4b8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
