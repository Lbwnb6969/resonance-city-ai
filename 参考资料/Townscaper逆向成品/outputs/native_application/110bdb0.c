// RVA 0x110bdb0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$get_SafeArea
// PDB: BasePlatformSDK_get_SafeArea_m946A668D90597E6710B707249F8BB489437F8C11
// Body: [[1110bdb0, 1110bdd0]]
// Direct callees:
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5

Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __cdecl
BasePlatformSDK_get_SafeArea_m946A668D90597E6710B707249F8BB489437F8C11
          (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *__return_storage_ptr__,
          BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_14;

  pRVar4 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                     (&local_14,(MethodInfo *)0x0);
  fVar1 = pRVar4->___m_YMin_1;
  fVar2 = pRVar4->___m_Width_2;
  fVar3 = pRVar4->___m_Height_3;
  __return_storage_ptr__->___m_XMin_0 = pRVar4->___m_XMin_0;
  __return_storage_ptr__->___m_YMin_1 = fVar1;
  __return_storage_ptr__->___m_Width_2 = fVar2;
  __return_storage_ptr__->___m_Height_3 = fVar3;
  return __return_storage_ptr__;
}
