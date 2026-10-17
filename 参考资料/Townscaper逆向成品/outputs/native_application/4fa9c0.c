// RVA 0x4fa9c0 | Placemaker.Ui.LoadingUi$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: LoadingUi_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m2CBCB8EC4EE0B88C710AB4C83C3C2724F7B90258
// Body: [[104fa9c0, 104fab61]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

void __cdecl
LoadingUi_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m2CBCB8EC4EE0B88C710AB4C83C3C2724F7B90258
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,bool param_2,int param_3,
          MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar3;
  LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *pLVar4;
  int iVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Il2CppObject *pIVar7;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar8;
  MethodInfo *unaff_EDI;
  int iVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1c;
  float local_c;
  int local_8;

  pLVar4 = param_1;
  if (DAT_1151d27c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d27c = '\x01';
  }
  local_1c.___m_Left_0 = 0.0;
  local_1c.___m_Right_1 = 0.0;
  local_1c.___m_Top_2 = 0.0;
  local_1c.___m_Bottom_3 = 0.0;
  if (param_1->___logoContainer_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___logoContainer_6,(MethodInfo *)0x0);
    local_8 = iVar5;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_1c,0.15,0.15,0.15,1.0,(MethodInfo *)0x0);
    iVar9 = 1;
    if (1 < iVar5 + -1) {
      do {
        if (param_1->___targetColors_10 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0)
        goto LAB_104fab5d;
        KVar3.___key_0.___dateData_44._4_4_ = local_1c.___m_Top_2;
        KVar3.___key_0.___dateData_44._0_4_ = local_1c.___m_Right_1;
        KVar3.___value_1 = (Il2CppObject *)local_1c.___m_Bottom_3;
        KVar3._12_4_ = List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var;
        List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___targetColors_10,
                   KVar3,unaff_EDI);
        if (param_1->___logoContainer_6 ==
            (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104fab5d;
        pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (param_1->___logoContainer_6,iVar9,(MethodInfo *)0x0);
        if (pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104fab5d;
        pIVar7 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                            Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
                           );
        if (pIVar7 == (Il2CppObject *)0x0) goto LAB_104fab5d;
        pIVar1 = (pIVar7->field0_0x0).klass;
        uVar2._0_1_ = pIVar1[1].naturalAligment;
        uVar2._1_1_ = pIVar1[1].packingSize;
        uVar2._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
        (**(code **)&pIVar1[1].typeHierarchyDepth)
                  (pIVar7,local_1c.___m_Left_0,local_1c.___m_Right_1,local_1c.___m_Top_2,
                   local_1c.___m_Bottom_3,uVar2);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5 + -1);
    }
    iVar5 = local_8;
    iVar9 = 0;
    param_1 = (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0;
    pLVar4->___minWidth_18 = 0.0;
    if (0 < local_8) {
      do {
        if (pLVar4->___logoContainer_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
           ) goto LAB_104fab5d;
        pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pLVar4->___logoContainer_6,iVar9,(MethodInfo *)0x0);
        if (pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104fab5d;
        pRVar8 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
        if (*(Il2CppClass **)pTVar6 ==
            RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
          pRVar8 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar6;
        }
        if (pRVar8 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
        goto LAB_104fab5d;
        VVar10 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                           (pRVar8,(MethodInfo *)0x0);
        local_c = VVar10.___x_0;
        iVar9 = iVar9 + 1;
        param_1 = (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)(local_c + (float)param_1);
        pLVar4->___minWidth_18 = (float)param_1;
      } while (iVar9 < iVar5);
    }
    pLVar4->___timer_12 = -1.0;
    return;
  }
LAB_104fab5d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
