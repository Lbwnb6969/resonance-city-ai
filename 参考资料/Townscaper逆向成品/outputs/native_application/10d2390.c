// RVA 0x10d2390 | FuryStudios.FurySDK.Utils.SafeArea$$GetViewportRect
// PDB: SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
// Body: [[110d2390, 110d246e]]
// Direct callees:
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C

Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __cdecl
SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
          (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *__return_storage_ptr__,
          Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar5 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&param_1,
                     (MethodInfo *)0x0);
  iVar1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  fVar6 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                    ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&param_1,
                     (MethodInfo *)0x0);
  iVar2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  fVar7 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                    ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&param_1,
                     (MethodInfo *)0x0);
  iVar3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  fVar8 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                    ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&param_1,
                     (MethodInfo *)0x0);
  iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  __return_storage_ptr__->___m_XMin_0 = 0.0;
  __return_storage_ptr__->___m_YMin_1 = 0.0;
  __return_storage_ptr__->___m_Width_2 = 0.0;
  __return_storage_ptr__->___m_Height_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
             fVar5 / (float)iVar1,fVar6 / (float)iVar2,fVar7 / (float)iVar3,fVar8 / (float)iVar4,
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}
