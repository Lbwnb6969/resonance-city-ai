// RVA 0x83e0e0 | Placemaker.Ui.GameViewRect$$GetRelativeRect
// PDB: GameViewRect_GetRelativeRect_mEA9B8EFD3CC4C906F89BE22E75793674DA8463F9
// Body: [[1083e0e0, 1083e213]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 101d14e0 AutoScroll_set_speed_m1710BE060404F3C2F998A04D3711C9943956C283
// 101d1500 AutoScroll_set_targetPosition_m2CB8F35117E634C45F3B35F7EDA61B12A3E27C33
// 101d1520 AutoScroll_set_time_mBE1D4E4BF204AAF608F71B3FF891E0A172D0C827
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 102c2170 TMP_Offset_set_left_m34F11D3636911C10ECC0287F97031202ADDD8A53
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066f8f0 Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331

Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __cdecl
GameViewRect_GetRelativeRect_mEA9B8EFD3CC4C906F89BE22E75793674DA8463F9
          (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *__return_storage_ptr__,
          GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,MethodInfo *param_2)

{
  float fVar1;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 local_24 [16];
  undefined8 local_14;
  float local_8;

  __return_storage_ptr__->___m_XMin_0 = 0.0;
  __return_storage_ptr__->___m_YMin_1 = 0.0;
  __return_storage_ptr__->___m_Width_2 = 0.0;
  __return_storage_ptr__->___m_Height_3 = 0.0;
  if (param_1->___sliding_5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    pRVar2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_24,
                        param_1->___sliding_5,(MethodInfo *)0x0);
    fVar5 = pRVar2->___m_YMin_1;
    fVar6 = pRVar2->___m_Width_2;
    fVar1 = pRVar2->___m_Height_3;
    __return_storage_ptr__->___m_XMin_0 = pRVar2->___m_XMin_0;
    __return_storage_ptr__->___m_YMin_1 = fVar5;
    __return_storage_ptr__->___m_Width_2 = fVar6;
    __return_storage_ptr__->___m_Height_3 = fVar1;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___sliding_5 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar3 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_24 + 4),
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___sliding_5,(MethodInfo *)0x0);
      local_14._0_4_ = pVVar3->___x_2;
      local_14._4_4_ = pVVar3->___y_3;
      iVar4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
      fVar5 = (float)local_14 / (float)iVar4;
      iVar4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      fVar6 = local_14._4_4_ / (float)iVar4;
      local_8 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)
                           __return_storage_ptr__,(MethodInfo *)0x0);
      TMP_Offset_set_left_m34F11D3636911C10ECC0287F97031202ADDD8A53
                ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
                 local_8 * fVar5,(MethodInfo *)0x0);
      local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                           __return_storage_ptr__,(MethodInfo *)0x0);
      AutoScroll_set_speed_m1710BE060404F3C2F998A04D3711C9943956C283
                ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)__return_storage_ptr__,
                 local_8 * fVar6,(MethodInfo *)0x0);
      local_8 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                           __return_storage_ptr__,(MethodInfo *)0x0);
      AutoScroll_set_time_mBE1D4E4BF204AAF608F71B3FF891E0A172D0C827
                ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)__return_storage_ptr__,
                 local_8 * fVar5,(MethodInfo *)0x0);
      fVar5 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                         __return_storage_ptr__,(MethodInfo *)0x0);
      AutoScroll_set_targetPosition_m2CB8F35117E634C45F3B35F7EDA61B12A3E27C33
                ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)__return_storage_ptr__,
                 fVar5 * fVar6,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
