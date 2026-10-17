// RVA 0x3e6fe0 | Placemaker.Ui.UiMaster$$Update
// PDB: UiMaster_Update_mFAFBC7E3FA6CFBAE7A779729DB53692AAACD01D6
// Body: [[103e6fe0, 103e7303]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103e8f10 UpdateState_Update_m3CB82BC358B3DDE8EF47FD8C31CDC6ACD1B368E1
// 10662db0 Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66
// 106675f0 Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 1113f230 Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UiMaster_Update_mFAFBC7E3FA6CFBAE7A779729DB53692AAACD01D6
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar2;
  float fVar3;
  float fVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 RVar5;
  bool bVar6;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar7;
  int iVar8;
  int iVar9;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar10;
  Il2CppClass *pIVar11;
  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C *pEVar12;
  float fVar13;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_28;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float local_8;

  if (DAT_1151c8af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE5C37F31C40A1C84D6666414D81645359B535C81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB37EB60AB6447FED403D7B706BDA5C737A59FA9B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8af = '\x01';
  }
  if (DAT_1151c8b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8b0 = '\x01';
  }
  local_18 = (param_1->___lastSafeArea_36).___m_XMin_0;
  fStack_14 = (param_1->___lastSafeArea_36).___m_YMin_1;
  fStack_10 = (param_1->___lastSafeArea_36).___m_Width_2;
  fStack_c = (param_1->___lastSafeArea_36).___m_Height_3;
  pRVar7 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                     (&local_28,(MethodInfo *)0x0);
  RVar5.___m_YMin_1 = fStack_14;
  RVar5.___m_XMin_0 = local_18;
  RVar5.___m_Width_2 = fStack_10;
  RVar5.___m_Height_3 = fStack_c;
  bVar6 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66
                    (RVar5,*pRVar7,(MethodInfo *)0x0);
  if ((((bVar6) ||
       (iVar9 = param_1->___lastOrientation_40,
       iVar8 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
                         ((MethodInfo *)0x0), iVar9 != iVar8)) ||
      (fVar13 = param_1->___lastDpi_39,
      local_8 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0),
      fVar13 != local_8)) ||
     (iVar9 = param_1->___lastScreenWidth_37,
     iVar8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0),
     iVar9 != iVar8)) {
    bVar6 = true;
  }
  else {
    iVar9 = param_1->___lastScreenHeight_38;
    iVar8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    bVar6 = iVar9 != iVar8;
  }
  if ((param_1->___hasSetup_29 & bVar6) != 0) {
    pRVar7 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                       (&local_28,(MethodInfo *)0x0);
    fVar13 = pRVar7->___m_YMin_1;
    fVar3 = pRVar7->___m_Width_2;
    fVar4 = pRVar7->___m_Height_3;
    (param_1->___lastSafeArea_36).___m_XMin_0 = pRVar7->___m_XMin_0;
    (param_1->___lastSafeArea_36).___m_YMin_1 = fVar13;
    (param_1->___lastSafeArea_36).___m_Width_2 = fVar3;
    (param_1->___lastSafeArea_36).___m_Height_3 = fVar4;
    iVar9 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863((MethodInfo *)0x0)
    ;
    param_1->___lastOrientation_40 = iVar9;
    fVar13 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    param_1->___lastDpi_39 = fVar13;
    iVar9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    param_1->___lastScreenWidth_37 = iVar9;
    iVar9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    param_1->___lastScreenHeight_38 = iVar9;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pOVar1 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    static_fields + 0xc);
    if (pOVar1 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)
    goto LAB_103e72ff;
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
    pOVar1 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    static_fields + 0x10);
    if (pOVar1 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)
    goto LAB_103e72ff;
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
  }
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  iVar9 = *(int *)((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                        static_fields + 4);
  if (iVar9 != 0) {
    iVar9 = *(int *)(iVar9 + 0xc);
    pIVar11 = UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var;
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      if ((pIVar11->has_cctor != '\0') && (pIVar11->cctor_finished == 0)) {
        il2cpp_runtime_class_init(pIVar11);
        pIVar11 = UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var;
      }
      iVar8 = *(int *)((int)pIVar11->static_fields + 4);
      if (iVar8 == 0) goto LAB_103e72ff;
      if (iVar9 < *(int *)(iVar8 + 0xc)) {
        if ((pIVar11->has_cctor != '\0') && (pIVar11->cctor_finished == 0)) {
          il2cpp_runtime_class_init(pIVar11);
          pIVar11 = UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var;
        }
        pLVar2 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                  ((int)pIVar11->static_fields + 4);
        if ((pLVar2 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
           (pUVar10 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
                      List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                (pLVar2,iVar9,
                                 List_1_get_Item_mB37EB60AB6447FED403D7B706BDA5C737A59FA9B_RuntimeMethod_var
                                ),
           pUVar10 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
        goto LAB_103e72ff;
        UpdateState_Update_m3CB82BC358B3DDE8EF47FD8C31CDC6ACD1B368E1(pUVar10,(MethodInfo *)0x0);
        pIVar11 = UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var;
      }
    }
    if ((pIVar11->has_cctor != '\0') && (pIVar11->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar11);
      pIVar11 = UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var;
    }
    pOVar1 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)pIVar11->static_fields + 8);
    if (pOVar1 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
      iVar9 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
      if (iVar9 < 1) {
        bVar6 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5((MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        pEVar12 = param_1->___eventSystem_13;
        fVar13 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
        fVar13 = fVar13 * ___real_3df5c28f;
      }
      else {
        pEVar12 = param_1->___eventSystem_13;
        fVar13 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
        fVar13 = fVar13 * __real_3e99999a;
      }
      iVar9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar13,(MethodInfo *)0x0);
      if (pEVar12 != (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C *)0x0) {
        pEVar12->___m_DragThreshold_9 = iVar9;
        return;
      }
    }
  }
LAB_103e72ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
