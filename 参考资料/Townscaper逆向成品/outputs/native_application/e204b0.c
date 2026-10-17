// RVA 0xe204b0 | Placemaker.GroundClicker$$LateUpdate
// PDB: GroundClicker_LateUpdate_mC2576AAFD3F87560C0DD4F8FC5FC307F9EDB96BE
// Body: [[10e204b0, 10e20562]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10413220 HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 10e20570 GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C
// 1113f1f0 Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6

void __cdecl
GroundClicker_LateUpdate_mC2576AAFD3F87560C0DD4F8FC5FC307F9EDB96BE
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *pHVar2;
  int iVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  float local_10;
  float fStack_c;
  float local_8;

  if ((param_1->___hovered_6 != false) && (param_1->___dragMode_15 == 0)) {
    iVar3 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
    if ((iVar3 != param_1->___clickFrame_16) && (param_1->___pressed_7 == false)) {
      pVVar4 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
                         (&local_28,(MethodInfo *)0x0);
      local_1c.___x_0 = pVVar4->___x_2;
      local_1c.___y_1 = pVVar4->___y_3;
      _local_10 = CONCAT44(local_1c.___x_0,local_1c.___x_0);
      local_8 = local_1c.___y_1;
      GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C
                (param_1,local_1c,(MethodInfo *)0x0);
    }
    iVar3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
    if (iVar3 == 0) {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pWVar1 = param_1->___master_4->___worldMaster_5,
          pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
         (pHVar2 = pWVar1->___hoverHightlight_12,
         pHVar2 == (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A(pHVar2,(MethodInfo *)0x0);
    }
  }
  return;
}
