// RVA 0x877af0 | Placemaker.BigMeshMaster$$GetBigMesh
// PDB: BigMeshMaster_GetBigMesh_m99347F654681A77B9F1680CFAF4CFDEDFE49C90C
// Body: [[10877af0, 10877be6] [10877bea, 10877e4d]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4ba0 WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f280 Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10878970 BigMesh_get_availableCount_mF911DBD1759E272BE9BDBE7CB11B28EE6C435A52
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA * __cdecl
BigMeshMaster_GetBigMesh_m99347F654681A77B9F1680CFAF4CFDEDFE49C90C
          (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *param_1,
          Material_t8927C00353A72755313F046D0CE85178AE8218EE *param_2,int param_3,
          MethodInfo *param_4)

{
  List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *pLVar1;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar2;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar3;
  int iVar4;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar5;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar6;
  bool bVar7;
  BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *pBVar8;
  int iVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar11;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar12;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar13;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar14;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar15;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar16;
  uint uVar17;
  int iVar18;
  int local_8;

  if (DAT_1151f5b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA_mEBFCD0F1D6B28708973CD677DA2176A22E8F6B80_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m420D3C8A438F36DF60AE24075DB0D7873F0FA3A5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mB55F21B1D5E332D2F7CED2B8D9AEF2753280A73E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m12C1EA3B04D8B5C29FCAD0FC859F45188D18AA6C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mA3E4E5705717310E975F2707EC88DB0BA313349E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m4AD01DA3C5F20CFDBEA7423107E96C21288AB3DF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE81B511122AAAADD36791AC8402B66AEFAA8B1C1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m65897993C4E975002C9FBA25B7037EF0FD2B023B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mDF83BB6FDA85468BB5D8E88932F7D79390E6701F_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m05C2600C9D0934EB81B45A2566FCC7C4C41C7142_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5b4 = '\x01';
  }
  if (param_1->___bigMeshGroups_5 != (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *)0x0) {
    iVar18 = param_1->___bigMeshGroups_5->____size_2;
    uVar17 = 0;
    if (0 < iVar18) {
      local_8 = 0x10;
      do {
        pLVar1 = param_1->___bigMeshGroups_5;
        if (pLVar1 == (List_1_t08300A472E0CFF4BBE62C0B4AD27A46AA6C87FC0 *)0x0) goto LAB_10877e49;
        if ((uint)pLVar1->____size_2 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pCVar2 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                  (pLVar1->____items_1 + local_8);
        if (pCVar2 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10877e49;
        pOVar3 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pCVar2 + 1);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                          (pOVar3,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                           (MethodInfo *)0x0);
        if (!bVar7) {
          iVar18 = 0;
          if (*(int *)&pCVar2[1].field_0x4 == 0) goto LAB_10877e49;
          iVar4 = *(int *)(*(int *)&pCVar2[1].field_0x4 + 0xc);
          pBVar8 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0;
          if (iVar4 < 1) goto LAB_10877cd1;
          goto LAB_10877c90;
        }
        uVar17 = uVar17 + 1;
        local_8 = local_8 + 4;
      } while ((int)uVar17 < iVar18);
    }
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)param_2,(MethodInfo *)0x0);
    return (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0;
  }
  goto LAB_10877e49;
  while ((iVar9 = BigMesh_get_availableCount_mF911DBD1759E272BE9BDBE7CB11B28EE6C435A52
                            (pBVar8,(MethodInfo *)0x0), iVar9 < param_3 &&
         (iVar18 = iVar18 + 1, pBVar8 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0,
         iVar18 < iVar4))) {
LAB_10877c90:
    if ((*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)&pCVar2[1].field_0x4 ==
         (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
       (pBVar8 = (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)
                 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                           (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                             &pCVar2[1].field_0x4,iVar18,
                            List_1_get_Item_m65897993C4E975002C9FBA25B7037EF0FD2B023B_RuntimeMethod_var
                           ), pBVar8 == (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)0x0))
    goto LAB_10877e49;
  }
LAB_10877cd1:
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar8,(MethodInfo *)0x0);
  if (bVar7) {
    return pBVar8;
  }
  pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (pCVar2,(MethodInfo *)0x0);
  if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pTVar10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                        (pTVar10,0,(MethodInfo *)0x0);
    pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (pCVar2,(MethodInfo *)0x0);
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    pCVar12 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
              Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                        ((Il2CppObject *)pTVar10,pTVar11,
                         Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m05C2600C9D0934EB81B45A2566FCC7C4C41C7142_RuntimeMethod_var
                        );
    if (pCVar12 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      OVar13 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         (pCVar12,
                          Component_GetComponent_TisBigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA_mEBFCD0F1D6B28708973CD677DA2176A22E8F6B80_RuntimeMethod_var
                         );
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pWVar5 = param_1->___master_4->___worldMeshes_9,
          pWVar5 != (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)) &&
         (pMVar14 = WorldMeshes_GetMesh_m35A9AB7BEC53E705DCA10480B67C29B93947DE7E
                              (pWVar5,(MethodInfo *)0x0),
         OVar13 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) {
        *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)((int)OVar13 + 0x18) = pMVar14;
        *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)((int)OVar13 + 0xc) = pCVar2;
        if ((ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ListPool_1_tB136F8E14540BC44C6A8BB0B3261780B1B9FF0A7_il2cpp_TypeInfo_var);
        }
        pDVar15 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                            (
                            ListPool_1_Get_m12C1EA3B04D8B5C29FCAD0FC859F45188D18AA6C_RuntimeMethod_var
                            );
        Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar13,
                   (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar15,
                   Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m420D3C8A438F36DF60AE24075DB0D7873F0FA3A5_RuntimeMethod_var
                  );
        if (pDVar15 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pEVar6 = pDVar15->___entries_1;
          while (pEVar6 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                          ((int)&pEVar6[-1].m_Items[0].___value_3 + 3), -1 < (int)pEVar6) {
            pGVar16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pDVar15,
                                 (int)pEVar6,
                                 List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var
                                );
            if (pGVar16 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
            goto LAB_10877e49;
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)pGVar16,
                       *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)((int)OVar13 + 0x18),
                       (MethodInfo *)0x0);
          }
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar15,
                     ListPoolExtension_ReturnToPool_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mB55F21B1D5E332D2F7CED2B8D9AEF2753280A73E_RuntimeMethod_var
                    );
          if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)&pCVar2[1].field_0x4 !=
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)&pCVar2[1].field_0x4,
                       OVar13,List_1_Add_mA3E4E5705717310E975F2707EC88DB0BA313349E_RuntimeMethod_var
                      );
            return (BigMesh_t210F22099D8F21B93EF9ABEB33418A400DBD22BA *)OVar13;
          }
        }
      }
    }
  }
LAB_10877e49:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
