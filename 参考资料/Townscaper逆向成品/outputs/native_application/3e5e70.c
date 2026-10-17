// RVA 0x3e5e70 | Placemaker.Ui.UiMaster$$MaybeOnScreenChange
// PDB: UiMaster_MaybeOnScreenChange_m862990DEE3A5D040EF084394BBE950E4A81B0071
// Body: [[103e5e70, 103e5fef]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10662db0 Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66
// 106675f0 Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C

void __cdecl
UiMaster_MaybeOnScreenChange_m862990DEE3A5D040EF084394BBE950E4A81B0071
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;
  float fVar2;
  float fVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 RVar4;
  bool bVar5;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_28;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float local_8;

  if (DAT_1151c8b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8b0 = '\x01';
  }
  local_18 = (param_1->___lastSafeArea_36).___m_XMin_0;
  fStack_14 = (param_1->___lastSafeArea_36).___m_YMin_1;
  fStack_10 = (param_1->___lastSafeArea_36).___m_Width_2;
  fStack_c = (param_1->___lastSafeArea_36).___m_Height_3;
  pRVar6 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                     (&local_28,(MethodInfo *)0x0);
  RVar4.___m_YMin_1 = fStack_14;
  RVar4.___m_XMin_0 = local_18;
  RVar4.___m_Width_2 = fStack_10;
  RVar4.___m_Height_3 = fStack_c;
  bVar5 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66
                    (RVar4,*pRVar6,(MethodInfo *)0x0);
  if ((((bVar5) ||
       (iVar8 = param_1->___lastOrientation_40,
       iVar7 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
                         ((MethodInfo *)0x0), iVar8 != iVar7)) ||
      (fVar9 = param_1->___lastDpi_39,
      local_8 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0),
      fVar9 != local_8)) ||
     (iVar8 = param_1->___lastScreenWidth_37,
     iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0),
     iVar8 != iVar7)) {
    bVar5 = true;
  }
  else {
    iVar8 = param_1->___lastScreenHeight_38;
    iVar7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    bVar5 = iVar8 != iVar7;
  }
  if ((param_1->___hasSetup_29 & bVar5) == 0) {
    return;
  }
  pRVar6 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                     (&local_28,(MethodInfo *)0x0);
  fVar9 = pRVar6->___m_YMin_1;
  fVar2 = pRVar6->___m_Width_2;
  fVar3 = pRVar6->___m_Height_3;
  (param_1->___lastSafeArea_36).___m_XMin_0 = pRVar6->___m_XMin_0;
  (param_1->___lastSafeArea_36).___m_YMin_1 = fVar9;
  (param_1->___lastSafeArea_36).___m_Width_2 = fVar2;
  (param_1->___lastSafeArea_36).___m_Height_3 = fVar3;
  iVar8 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863((MethodInfo *)0x0);
  param_1->___lastOrientation_40 = iVar8;
  fVar9 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  param_1->___lastDpi_39 = fVar9;
  iVar8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  param_1->___lastScreenWidth_37 = iVar8;
  iVar8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  param_1->___lastScreenHeight_38 = iVar8;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  pOVar1 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  static_fields + 0xc);
  if (pOVar1 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
    pOVar1 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    static_fields + 0x10);
    if (pOVar1 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906(pOVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
