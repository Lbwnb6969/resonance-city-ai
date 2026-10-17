// RVA 0x4fac40 | Placemaker.Ui.LoadingUi$$StartLoading
// PDB: LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
// Body: [[104fac40, 104fada5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C

void __cdecl
LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Il2CppObject *pIVar8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_1151d27b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var)
    ;
    DAT_1151d27b = '\x01';
  }
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar6 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___openState_5,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
    if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___openState_5,true,(MethodInfo *)0x0);
      param_1->___timer_12 = 0.0;
      param_1->___counter_11 = 0;
      param_1->___pitcher_17 = 0;
      param_1->___state_16 = 0;
      if (param_1->___targetColors_10 != (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) {
        iVar5 = param_1->___targetColors_10->____size_2;
        while( true ) {
          iVar4 = iVar5 + -1;
          if (iVar4 < 0) {
            return;
          }
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_14,0.15,0.15,0.15,1.0,(MethodInfo *)0x0);
          if (((param_1->___logoContainer_6 ==
                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
              (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (param_1->___logoContainer_6,iVar5,(MethodInfo *)0x0),
              pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             (pIVar8 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                                  Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
                                 ), pIVar8 == (Il2CppObject *)0x0)) break;
          pIVar1 = (pIVar8->field0_0x0).klass;
          uVar2._0_1_ = pIVar1[1].naturalAligment;
          uVar2._1_1_ = pIVar1[1].packingSize;
          uVar2._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
          (**(code **)&pIVar1[1].typeHierarchyDepth)
                    (pIVar8,local_14.___m_Left_0,local_14.___m_Right_1,local_14.___m_Top_2,
                     local_14.___m_Bottom_3,uVar2);
          if (param_1->___targetColors_10 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0
             ) break;
          KVar3.___key_0.___dateData_44._4_4_ = local_14.___m_Right_1;
          KVar3.___key_0.___dateData_44._0_4_ = local_14.___m_Left_0;
          KVar3.___value_1 = (Il2CppObject *)local_14.___m_Top_2;
          KVar3._12_4_ = local_14.___m_Bottom_3;
          List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___targetColors_10
                     ,iVar4,KVar3,
                     List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var);
          iVar5 = iVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
