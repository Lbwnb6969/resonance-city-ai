// RVA 0x758590 | Placemaker.Props.PropNgonScaler$$Placemaker.Props.IPropModifier.Reset
// PDB: PropNgonScaler_Placemaker_Props_IPropModifier_Reset_m9AB4739473A79EA8E82ED041B903ADDD61FB2D2A
// Body: [[10758590, 1075865c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f7a0 Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
PropNgonScaler_Placemaker_Props_IPropModifier_Reset_m9AB4739473A79EA8E82ED041B903ADDD61FB2D2A
          (PropNgonScaler_tCB655738E813C69F149A1A07740B3A25BE3E6ED0 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_3,MethodInfo *param_4)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar3;
  undefined1 local_14 [16];

  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (param_3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_14 + 4),param_3,
                        (MethodInfo *)0x0);
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar1,*pVVar2,(MethodInfo *)0x0);
      pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      pVVar2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_14 + 4),
                          param_3,(MethodInfo *)0x0);
      if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                  (pTVar1,*pVVar2,(MethodInfo *)0x0);
        pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        pQVar3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
                           ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_14,param_3
                            ,(MethodInfo *)0x0);
        if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                    (pTVar1,*pQVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
