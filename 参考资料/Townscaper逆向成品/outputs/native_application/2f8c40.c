// RVA 0x2f8c40 | Placemaker.Ui.SimpleMessage$$Update
// PDB: SimpleMessage_Update_m36620871DF54297DB78BD77768E65C89A6D03BE0
// Body: [[102f8c40, 102f8d1a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
SimpleMessage_Update_m36620871DF54297DB78BD77768E65C89A6D03BE0
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  float fVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  fVar5 = param_1->___timer_6;
  fVar4 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  param_1->___timer_6 = fVar5 - fVar4;
  pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                       (&local_1c,pTVar2,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar3->___x_2;
    local_10._4_4_ = pVVar3->___y_3;
    local_8 = pVVar3->___z_4;
    fVar5 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
    local_1c.___y_3 = local_10._4_4_ - 0.0;
    local_1c.___x_2 = (float)local_10 - fVar5 * __real_40400000;
    local_1c.___z_4 = local_8 - 0.0;
    VVar1.___y_3 = local_1c.___y_3;
    VVar1.___x_2 = local_1c.___x_2;
    VVar1.___z_4 = local_1c.___z_4;
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              (pTVar2,VVar1,(MethodInfo *)0x0);
    if (param_1->___timer_6 <= 0.0 && param_1->___timer_6 != 0.0) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
                 (MethodInfo *)0x0);
      if (param_1->___openState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_102f8d16;
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___openState_5,false,(MethodInfo *)0x0);
    }
    return;
  }
LAB_102f8d16:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
