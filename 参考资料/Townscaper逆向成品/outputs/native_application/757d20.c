// RVA 0x757d20 | Placemaker.Props.PropMeshAnimator$$PosInView
// PDB: PropMeshAnimator_PosInView_m7036541DE522850202AB2590303B8B4A2827B2F5
// Body: [[10757d20, 10757e4b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a383a0 Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

bool __cdecl
PropMeshAnimator_PosInView_m7036541DE522850202AB2590303B8B4A2827B2F5
          (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *param_1,
          PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c [2];

  if (DAT_1151ec2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ec2f = '\x01';
  }
  pOVar5 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
           Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar5,(MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  if (((param_2 == (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)0x0) ||
      (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0),
      pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
     (pVVar7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (local_1c,pTVar6,(MethodInfo *)0x0),
     pOVar5 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pVVar7 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
                     (&local_28,(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)pOVar5,*pVVar7,
                      (MethodInfo *)0x0);
  uVar1 = pVVar7->___x_2;
  if (pVVar7->___z_4 <= 0.0) {
    return false;
  }
  if ((float)uVar1 <= 0.0) {
    return false;
  }
  uVar2 = pVVar7->___y_3;
  if ((float)uVar2 <= 0.0) {
    return false;
  }
  if (__real_3f800000 <= (float)uVar1) {
    return false;
  }
  uVar3 = pVVar7->___y_3;
  return (float)uVar3 < __real_3f800000;
}
