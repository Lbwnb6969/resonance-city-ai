// RVA 0x839a60 | Placemaker.Graphs.Flow$$OnDrawGizmos
// PDB: Flow_OnDrawGizmos_m63F86CE48549B2F8C4476C9A3755B6BAB9440A71
// Body: [[10839a60, 10839c6f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10839c80 Flow_SampleFlow_mE638B0DB51ECB7201DA36F4388AB369D66807362
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c150 Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D

void __cdecl
Flow_OnDrawGizmos_m63F86CE48549B2F8C4476C9A3755B6BAB9440A71
          (Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  ValueTuple_4_t9C34DE17C2A629C24643C6CC64508DF79E685907 *pVVar6;
  float fVar7;
  ValueTuple_4_t9C34DE17C2A629C24643C6CC64508DF79E685907 local_a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_80;
  float local_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  undefined8 local_34;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  if (DAT_1151f40e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    DAT_1151f40e = '\x01';
  }
  local_1c = __real_bf800000;
  do {
    local_18 = __real_bf800000;
    local_14 = __real_bf800000;
    do {
      if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___test_5 ==
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___test_5,(MethodInfo *)0x0),
         pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      pVVar5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (&local_80,pTVar4,(MethodInfo *)0x0);
      local_40._0_4_ = pVVar5->___x_2;
      local_40._4_4_ = pVVar5->___y_3;
      local_44 = pVVar5->___z_4;
      local_70 = (float)(undefined4)local_40 + local_1c;
      local_4c._0_4_ = pVVar5->___x_2;
      local_4c._4_4_ = pVVar5->___y_3;
      fStack_6c = (float)local_40._4_4_ + local_18;
      fVar7 = local_44 + local_14;
      uStack_68 = 0;
      uStack_64 = 0;
      VVar2.___y_3 = fStack_6c;
      VVar2.___x_2 = local_70;
      VVar2.___z_4 = fVar7;
      local_50 = fVar7;
      local_34 = local_40;
      pVVar6 = Flow_SampleFlow_mE638B0DB51ECB7201DA36F4388AB369D66807362
                         (&local_a0,param_1,VVar2,(MethodInfo *)0x0);
      local_28 = ((pVVar6->___Item1_0).___x_2 + (pVVar6->___Item2_1).___x_2) * __real_3e4ccccd;
      fStack_24 = ((pVVar6->___Item2_1).___y_3 + (pVVar6->___Item1_0).___y_3) * __real_3e4ccccd;
      local_20 = ((pVVar6->___Item2_1).___z_4 + (pVVar6->___Item1_0).___z_4) * __real_3e4ccccd;
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      VVar1.___y_3 = fStack_6c;
      VVar1.___x_2 = local_70;
      VVar1.___z_4 = fVar7;
      VVar3.___y_3 = fStack_24;
      VVar3.___x_2 = local_28;
      VVar3.___z_4 = local_20;
      Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(VVar1,VVar3,(MethodInfo *)0x0);
      local_14 = local_14 + __real_3e4ccccd;
    } while ((local_14 <= __real_3f8ccccd) ||
            (local_18 = local_18 + __real_3e4ccccd, local_14 = __real_bf800000,
            local_18 <= __real_3f8ccccd));
    local_1c = local_1c + __real_3e4ccccd;
    if (__real_3f8ccccd < local_1c) {
      return;
    }
  } while( true );
}
