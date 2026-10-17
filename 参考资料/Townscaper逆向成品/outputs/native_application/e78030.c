// RVA 0xe78030 | Placemaker.Graphs.Graph$$Test
// PDB: Graph_Test_m5987DF45BF772954851D01F70A4B1667F0C707A2
// Body: [[10e78030, 10e78168]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
Graph_Test_m5987DF45BF772954851D01F70A4B1667F0C707A2
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  int iVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  undefined8 local_20;
  float local_14;
  float fStack_10;
  float local_c;
  int local_8;

  local_8 = 0;
  pTVar3 = param_1->___squares_8;
  if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    while( true ) {
      iVar6 = local_8;
      iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar3,(MethodInfo *)0x0);
      if (iVar2 <= iVar6) {
        return;
      }
      if (param_1->___squares_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
      break;
      pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___squares_8,iVar6,(MethodInfo *)0x0);
      iVar6 = 0;
      while( true ) {
        if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e78164;
        iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (pTVar3,(MethodInfo *)0x0);
        if (iVar2 <= iVar6) break;
        pTVar4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar3,iVar6,(MethodInfo *)0x0);
        if (pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e78164;
        pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar4,
                            (MethodInfo *)0x0);
        pVVar5 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                           (&local_44,(MethodInfo *)0x0);
        local_2c._0_4_ = pVVar5->___x_2;
        local_2c._4_4_ = pVVar5->___y_3;
        local_30 = pVVar5->___z_4;
        local_38._0_4_ = pVVar5->___x_2;
        local_38._4_4_ = pVVar5->___y_3;
        local_14 = (float)(undefined4)local_2c * __real_3f666666;
        fStack_10 = (float)local_2c._4_4_ * __real_3f666666;
        local_c = local_30 * __real_3f666666;
        local_20 = local_2c;
        if (pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e78164;
        VVar1.___y_3 = fStack_10;
        VVar1.___x_2 = local_14;
        VVar1.___z_4 = local_c;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar4,VVar1,(MethodInfo *)0x0);
        iVar6 = iVar6 + 1;
      }
      local_8 = local_8 + 1;
      pTVar3 = param_1->___squares_8;
      if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    }
  }
LAB_10e78164:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
