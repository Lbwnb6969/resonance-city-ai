// RVA 0x805880 | Placemaker.Props.PropWireAnchor$$OnDrawGizmos
// PDB: PropWireAnchor_OnDrawGizmos_mC202CC36FAFE1239EAB29E1A99391B1222A6E9FE
// Body: [[10805880, 10805983] [10805987, 108059f6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PropWireAnchor_OnDrawGizmos_mC202CC36FAFE1239EAB29E1A99391B1222A6E9FE
          (PropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A *param_1,MethodInfo *param_2)

{
  float fVar1;
  List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286 *pLVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  int iVar7;
  uint uVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  if (DAT_1151f1f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m59B0B82F1E73AB27499B02A0B4697512845EA567_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB0B50CA8408786E90A1635014FED4EBA919D9972_RuntimeMethod_var)
    ;
    DAT_1151f1f2 = '\x01';
  }
  pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_1c,pTVar5,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar6->___x_2;
    local_10._4_4_ = pVVar6->___y_3;
    fVar1 = pVVar6->___z_4;
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar6 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                         (&local_28,pTVar5,param_1->___connectPos_8,(MethodInfo *)0x0);
      local_8 = pVVar6->___z_4;
      local_1c.___y_3 = pVVar6->___x_2;
      local_1c.___z_4 = pVVar6->___y_3;
      VVar3.___z_4 = fVar1;
      VVar3.___x_2 = (float)(undefined4)local_10;
      VVar3.___y_3 = (float)local_10._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar3,*pVVar6,(MethodInfo *)0x0);
      if (param_1->___propWires_5 != (List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286 *)0x0) {
        uVar8 = param_1->___propWires_5->____size_2 - 1;
        if (-1 < (int)uVar8) {
          iVar7 = uVar8 * 4 + 0x10;
          do {
            pLVar2 = param_1->___propWires_5;
            if (pLVar2 == (List_1_tC2530B698BF7ADA7346BFF63CE9E2BE4564C6286 *)0x0)
            goto LAB_108059f2;
            if ((uint)pLVar2->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                 (pLVar2->____items_1 + iVar7) ==
                (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_108059f2;
            pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                 (pLVar2->____items_1 + iVar7),(MethodInfo *)0x0);
            if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_108059f2;
            pVVar6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                               (&local_28,pTVar5,(MethodInfo *)0x0);
            VVar4.___z_4 = local_8;
            VVar4.___x_2 = local_1c.___y_3;
            VVar4.___y_3 = local_1c.___z_4;
            Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                      (VVar4,*pVVar6,(MethodInfo *)0x0);
            iVar7 = iVar7 + -4;
            uVar8 = uVar8 - 1;
          } while (-1 < (int)uVar8);
        }
        return;
      }
    }
  }
LAB_108059f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
