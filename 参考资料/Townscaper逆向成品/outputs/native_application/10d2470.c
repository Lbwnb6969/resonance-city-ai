// RVA 0x10d2470 | FuryStudios.FurySDK.Utils.SafeArea$$OnRenderObject
// PDB: SafeArea_OnRenderObject_m64C8D9C1E1F6BF8A64BE9E5342C47D39DE9FD831
// Body: [[110d2470, 110d2685]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 10a384d0 Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6
// 10a3d710 GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622
// 10a3d740 GL_Color_m2BD2AE19C310AF14D34EE5FCB7AAA1562828590A
// 10a3d770 GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7
// 10a3d7f0 GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174
// 10a3d810 GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738
// 10a3d830 GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3
// 10a43240 Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
// 110d2390 SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
// 110d2820 SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA

void __cdecl
SafeArea_OnRenderObject_m64C8D9C1E1F6BF8A64BE9E5342C47D39DE9FD831
          (SafeArea_t2A5ADA7E8D8C5CF656B470D65FC75AB0603DBB58 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar9;
  bool bVar10;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar11;
  String_t *pSVar12;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar13;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_3c;
  undefined1 local_2c [24];
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_11523aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3100DDE01867AE42A5451E50906F4258BD9DB4F5);
    DAT_11523aac = '\x01';
  }
  if (param_1->___drawSafeArea_8 != false) {
    pOVar11 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
              Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6((MethodInfo *)0x0);
    if (pOVar11 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
LAB_110d2681:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(pOVar11,(MethodInfo *)0x0);
    bVar10 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                       (pSVar12,_stringLiteral3100DDE01867AE42A5451E50906F4258BD9DB4F5,
                        (MethodInfo *)0x0);
    if (!bVar10) {
      GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3((MethodInfo *)0x0);
      if (param_1->___debugDrawMat_18 == (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)0x0)
      goto LAB_110d2681;
      Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C
                (param_1->___debugDrawMat_18,0,(MethodInfo *)0x0);
      GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174((MethodInfo *)0x0);
      GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7,(MethodInfo *)0x0);
      local_3c.___m_Left_0 = 0.0;
      local_3c.___m_Right_1 = 0.0;
      local_3c.___m_Top_2 = 0.0;
      local_3c.___m_Bottom_3 = 0.0;
      TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                (&local_3c,1.0,0.0,1.0,0.3,(MethodInfo *)0x0);
      CVar9.___g_1 = local_3c.___m_Right_1;
      CVar9.___r_0 = local_3c.___m_Left_0;
      CVar9.___b_2 = local_3c.___m_Top_2;
      CVar9.___a_3 = local_3c.___m_Bottom_3;
      GL_Color_m2BD2AE19C310AF14D34EE5FCB7AAA1562828590A(CVar9,(MethodInfo *)0x0);
      pRVar13 = SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_2c + 0x10),
                           param_1->___currentSafeArea_12,(MethodInfo *)0x0);
      local_2c._0_4_ = pRVar13->___m_XMin_0;
      local_2c._4_4_ = pRVar13->___m_YMin_1;
      local_2c._8_4_ = pRVar13->___m_Width_2;
      local_2c._12_4_ = pRVar13->___m_Height_3;
      local_14 = 0.0;
      local_10 = 0.0;
      local_c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_2c,
                           (MethodInfo *)0x0);
      local_8 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                           (MethodInfo *)0x0);
      VVar2.___y_1 = local_10;
      VVar2.___x_0 = local_14;
      VVar4.___y_1 = local_8;
      VVar4.___x_0 = local_c;
      SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
                (VVar2,VVar4,(MethodInfo *)0x0);
      local_c = 0.0;
      local_8 = 1.0;
      local_14 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                            (MethodInfo *)0x0);
      local_10 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                            (MethodInfo *)0x0);
      VVar6.___y_1 = local_8;
      VVar6.___x_0 = local_c;
      VVar8.___y_1 = local_10;
      VVar8.___x_0 = local_14;
      SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
                (VVar6,VVar8,(MethodInfo *)0x0);
      local_c = 1.0;
      local_8 = 1.0;
      local_14 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                           ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,
                            (MethodInfo *)0x0);
      local_10 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                           ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_2c,
                            (MethodInfo *)0x0);
      VVar1.___y_1 = local_8;
      VVar1.___x_0 = local_c;
      VVar3.___y_1 = local_10;
      VVar3.___x_0 = local_14;
      SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
                (VVar1,VVar3,(MethodInfo *)0x0);
      local_c = 1.0;
      local_8 = 0.0;
      local_14 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                           ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_2c,
                            (MethodInfo *)0x0);
      local_10 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                           ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_2c,
                            (MethodInfo *)0x0);
      VVar5.___y_1 = local_8;
      VVar5.___x_0 = local_c;
      VVar7.___y_1 = local_10;
      VVar7.___x_0 = local_14;
      SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
                (VVar5,VVar7,(MethodInfo *)0x0);
      GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7((MethodInfo *)0x0);
      GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738((MethodInfo *)0x0);
    }
  }
  return;
}
