// RVA 0x3f8710 | Placemaker.WorldMaster$$OnOnEnable
// PDB: WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
// Body: [[103f8710, 103f88da]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 10128ae0 il2cpp_value_box
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10448b50 GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  ushort uVar1;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *pLVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  ushort uVar4;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar5;
  Il2CppObject *pIVar6;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar7;
  undefined1 *puVar8;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar9;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar10;
  VirtualInvokeData *pVVar11;
  Exception_t *pEVar12;
  int iVar13;
  Il2CppObject **ppIVar14;
  MethodInfo *pMVar15;
  uint local_10;
  undefined1 local_5;

  if (DAT_1151c943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponentsInChildren_TisIOnOnEnable_tCF45FCF2AD30375908022FBFB1F0A8A60637C61F_m8E3CB910A55F7AD8C4F931602A0BD6131CA0A594_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IOnOnEnable_tCF45FCF2AD30375908022FBFB1F0A8A60637C61F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&State_tD6B4D9B8CC365447248326B516E87DB344EDE4AD_il2cpp_TypeInfo_var);
    DAT_1151c943 = '\x01';
  }
  pLVar5 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar5,0x2b,List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
  iVar13 = 0;
  param_1->___stateStrings_58 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)pLVar5;
  do {
    pLVar2 = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___stateStrings_58;
    local_5 = (undefined1)iVar13;
    pIVar6 = il2cpp_value_box(State_tD6B4D9B8CC365447248326B516E87DB344EDE4AD_il2cpp_TypeInfo_var,
                              &local_5);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_103f88d6;
    OVar7 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
            (**(code **)&(pIVar6->field0_0x0).klass[1].byval_arg.attrs)
                      (pIVar6,(pIVar6->field0_0x0).klass[1].this_arg.data.dummy);
    puVar8 = il2cpp_object_unbox(pIVar6);
    local_5 = *puVar8;
    if (pLVar2 == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103f88d6;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              (pLVar2,OVar7,List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x2b);
  if (param_1->___state_57 == '*') {
    param_1->___state_57 = '\x13';
  }
  pGVar9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar9 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    pOVar10 = GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared
                        (pGVar9,true,
                         GameObject_GetComponentsInChildren_TisIOnOnEnable_tCF45FCF2AD30375908022FBFB1F0A8A60637C61F_m8E3CB910A55F7AD8C4F931602A0BD6131CA0A594_RuntimeMethod_var
                        );
    local_10 = 0;
    if (pOVar10 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
      ppIVar14 = pOVar10->m_Items;
      while( true ) {
        if (pOVar10->_padding_ <= (int)local_10) {
          return;
        }
        if ((uint)pOVar10->_padding_ <= local_10) {
          pMVar15 = (MethodInfo *)0x0;
          pEVar12 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar12,pMVar15);
        }
        pIVar6 = *ppIVar14;
        if (pIVar6 == (Il2CppObject *)0x0) break;
        uVar4 = 0;
        uVar1 = ((pIVar6->field0_0x0).klass)->interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = ((pIVar6->field0_0x0).klass)->interfaceOffsets;
          do {
            if (pIVar3[uVar4].interfaceType ==
                IOnOnEnable_tCF45FCF2AD30375908022FBFB1F0A8A60637C61F_il2cpp_TypeInfo_var) {
              pVVar11 = (VirtualInvokeData *)
                        (&((pIVar6->field0_0x0).klass)->field_0xbc + pIVar3[uVar4].offset * 8);
              goto LAB_103f8891;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        pVVar11 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar6,
                             IOnOnEnable_tCF45FCF2AD30375908022FBFB1F0A8A60637C61F_il2cpp_TypeInfo_var
                             ,0);
LAB_103f8891:
        (*pVVar11->methodPtr)(pIVar6,param_1,pVVar11->method);
        local_10 = local_10 + 1;
        ppIVar14 = ppIVar14 + 1;
      }
    }
  }
LAB_103f88d6:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
