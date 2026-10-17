// RVA 0x3e6f40 | Placemaker.Ui.UiMaster$$UpdateLastScreenValues
// PDB: UiMaster_UpdateLastScreenValues_m8021844CF07F5F8B58A87741E1BA7334112F08D1
// Body: [[103e6f40, 103e6f97]]
// Direct callees:
// 106675f0 Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C

void __cdecl
UiMaster_UpdateLastScreenValues_m8021844CF07F5F8B58A87741E1BA7334112F08D1
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar3;
  int iVar4;
  float fVar5;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_14;

  pRVar3 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                     (&local_14,(MethodInfo *)0x0);
  fVar5 = pRVar3->___m_YMin_1;
  fVar1 = pRVar3->___m_Width_2;
  fVar2 = pRVar3->___m_Height_3;
  (param_1->___lastSafeArea_36).___m_XMin_0 = pRVar3->___m_XMin_0;
  (param_1->___lastSafeArea_36).___m_YMin_1 = fVar5;
  (param_1->___lastSafeArea_36).___m_Width_2 = fVar1;
  (param_1->___lastSafeArea_36).___m_Height_3 = fVar2;
  iVar4 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863((MethodInfo *)0x0);
  param_1->___lastOrientation_40 = iVar4;
  fVar5 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  param_1->___lastDpi_39 = fVar5;
  iVar4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  param_1->___lastScreenWidth_37 = iVar4;
  iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  param_1->___lastScreenHeight_38 = iVar4;
  return;
}
