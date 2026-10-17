// RVA 0x3d8b80 | Placemaker.ModuleBuilder$$MarkModuleContainerForDeconstruction
// PDB: ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
// Body: [[103d8b80, 103d8c3f] [103d8c46, 103d8c7a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 10760320 PropPlacer_RemovePropsFromContainer_mCA47608E0EC4E9914BA0AEB51A64397E2AFA890B
// 10878420 BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,
          ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *param_2,MethodInfo *param_3)

{
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar1;
  List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *pLVar2;
  BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *pBVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  int iVar5;
  uint uVar6;

  if (DAT_1151c879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65C9C64EBCD1CECB77E383F05D7CFA4E41F32514_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m1F2529F24F7F3DA0C46F4DA83A5298B02429C399_RuntimeMethod_var)
    ;
    DAT_1151c879 = '\x01';
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pPVar1 = param_1->___master_4->___propPlacer_19,
     pPVar1 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
    PropPlacer_RemovePropsFromContainer_mCA47608E0EC4E9914BA0AEB51A64397E2AFA890B
              (pPVar1,param_2,(MethodInfo *)0x0);
    if (param_2 != (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)0x0) {
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                  (pTVar4,param_1->___moduleContainersToDeconstruct_6,false,(MethodInfo *)0x0);
        if (param_2->___bigMeshParts_6 != (List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *)0x0) {
          uVar6 = param_2->___bigMeshParts_6->____size_2 - 1;
          if (-1 < (int)uVar6) {
            iVar5 = uVar6 * 4 + 0x10;
            do {
              if (param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) goto LAB_103d8c76;
              pLVar2 = param_2->___bigMeshParts_6;
              pBVar3 = param_1->___master_4->___bigMeshMaster_36;
              if (pLVar2 == (List_1_t2C4900CD521971848CC77E564E7BAD6B2CECD405 *)0x0)
              goto LAB_103d8c76;
              if ((uint)pLVar2->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pBVar3 == (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0)
              goto LAB_103d8c76;
              BigMeshMaster_ReturnMesh_m303991D3B4431E7690F92222ACB930C45F40D82B
                        (pBVar3,*(BigMeshPart_tE11B7C01E4DE678DA0A0F85B75A7F28BAE201B25 **)
                                 (pLVar2->____items_1 + iVar5),(MethodInfo *)0x0);
              iVar5 = iVar5 + -4;
              uVar6 = uVar6 - 1;
            } while (-1 < (int)uVar6);
          }
          return;
        }
      }
    }
  }
LAB_103d8c76:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
