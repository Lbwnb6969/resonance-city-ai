// RVA 0x7562f0 | Placemaker.Props.PropCollider$$CalculateWorldBounds
// PDB: PropCollider_CalculateWorldBounds_m69877EDA05A8B49604A5D59C7D0284302FDE5AE2
// Body: [[107562f0, 10756487]]
// Direct callees:
// 1004fcd0 GetAt
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10756500 PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
// 10a370d0 Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
// 10a37760 Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83

void __cdecl
PropCollider_CalculateWorldBounds_m69877EDA05A8B49604A5D59C7D0284302FDE5AE2
          (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  uint uVar6;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_a8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_68;
  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 local_28;
  InputActionSourceData_tE78C7826595F094CDC4EAC6FF0B60B60499CA17C local_10;

  if (DAT_1151ec2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    DAT_1151ec2b = '\x01';
  }
  pMVar4 = PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
                     (&local_a8,param_1,(MethodInfo *)0x0);
  local_68.___m00_0 = pMVar4->___m00_0;
  local_68.___m10_1 = pMVar4->___m10_1;
  local_68.___m20_2 = pMVar4->___m20_2;
  local_68.___m30_3 = pMVar4->___m30_3;
  local_68.___m01_4 = pMVar4->___m01_4;
  local_68.___m11_5 = pMVar4->___m11_5;
  local_68.___m21_6 = pMVar4->___m21_6;
  local_68.___m31_7 = pMVar4->___m31_7;
  local_68.___m02_8 = pMVar4->___m02_8;
  local_68.___m12_9 = pMVar4->___m12_9;
  local_68.___m22_10 = pMVar4->___m22_10;
  local_68.___m32_11 = pMVar4->___m32_11;
  local_68.___m03_12 = pMVar4->___m03_12;
  local_68.___m13_13 = pMVar4->___m13_13;
  local_68.___m23_14 = pMVar4->___m23_14;
  local_68.___m33_15 = pMVar4->___m33_15;
  pVVar5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,
                      (MethodInfo *)0x0);
  local_10.___nEXUCSuzjxbgnAGYjAHSudEGArXh_2 =
       (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0xff7fffff;
  local_28.___m_Extents_1.___y_3 = 0.0;
  local_28.___m_Extents_1.___z_4 = 0.0;
  local_28.___m_Center_0.___x_2 = 0.0;
  local_28.___m_Center_0.___y_3 = 0.0;
  local_28.___m_Center_0.___z_4 = 0.0;
  local_28.___m_Extents_1.___x_2 = 0.0;
  VVar2.___y_3 = (float)__real_ff7fffff;
  VVar2.___x_2 = (float)__real_ff7fffff;
  VVar2.___z_4 = -3.4028235e+38;
  Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3(&local_28,*pVVar5,VVar2,(MethodInfo *)0x0);
  uVar6 = 0;
  (param_1->___worldBounds_6).___m_Center_0.___x_2 = local_28.___m_Center_0.___x_2;
  (param_1->___worldBounds_6).___m_Center_0.___y_3 = local_28.___m_Center_0.___y_3;
  (param_1->___worldBounds_6).___m_Center_0.___z_4 = local_28.___m_Center_0.___z_4;
  (param_1->___worldBounds_6).___m_Extents_1.___x_2 = local_28.___m_Extents_1.___x_2;
  (param_1->___worldBounds_6).___m_Extents_1.___y_3 = local_28.___m_Extents_1.___y_3;
  (param_1->___worldBounds_6).___m_Extents_1.___z_4 = local_28.___m_Extents_1.___z_4;
  if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
  }
  if (*(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
              static_fields == 0) {
LAB_10756483:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar1 = *(int *)(*(int *)Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                           ->static_fields + 0xc);
  if (0 < iVar1) {
    do {
      if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
      }
      if (*(InputActionSourceDataU5BU5D_t51D17362DDD1CDF1976660CA29EB185153CBCEFF **)
           Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
           static_fields ==
          (InputActionSourceDataU5BU5D_t51D17362DDD1CDF1976660CA29EB185153CBCEFF *)0x0)
      goto LAB_10756483;
      InputActionSourceDataU5BU5D_t51D17362DDD1CDF1976660CA29EB185153CBCEFF::GetAt
                (*(InputActionSourceDataU5BU5D_t51D17362DDD1CDF1976660CA29EB185153CBCEFF **)
                  Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                  static_fields,&local_10,uVar6);
      VVar3.___z_4 = (float)local_10.___nEXUCSuzjxbgnAGYjAHSudEGArXh_2;
      VVar3.___x_2 = (float)local_10.___mhFIKTSvWsXQmSRHbUBLDvRbbFX_0;
      VVar3.___y_3 = (float)local_10.___eqICMNAeQqPWKbMtCpCcRRFJaxS_1;
      pVVar5 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                         (&local_28.___m_Extents_1,&local_68,VVar3,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                (&param_1->___worldBounds_6,*pVVar5,(MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  return;
}
