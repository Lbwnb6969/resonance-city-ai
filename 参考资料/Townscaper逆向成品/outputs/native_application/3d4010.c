// RVA 0x3d4010 | Placemaker.Ui.MasterClicker$$LateUpdate
// PDB: MasterClicker_LateUpdate_m9B320ECE84C6BD719831490AB0AA7FCCA1DEB86D
// Body: [[103d4010, 103d4102]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d4110 MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10413220 HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
MasterClicker_LateUpdate_m9B320ECE84C6BD719831490AB0AA7FCCA1DEB86D
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *pHVar4;
  bool bVar5;
  int iVar6;

  if (DAT_1151c85c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c85c = '\x01';
  }
  if ((param_1->___hovered_9 == false) || (param_1->___dragging_12 != false)) {
    return;
  }
  iVar6 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if ((iVar6 != param_1->___clickFrame_21) && (param_1->___pointerPressed_13 == false)) {
    MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
              (param_1,param_1->___pointerPosition_16,(MethodInfo *)0x0);
  }
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pIVar1 = param_1->___master_7->___inputModeManager_19;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pIVar1,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      if (((param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pIVar1 = param_1->___master_7->___inputModeManager_19,
          pIVar1 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
         (pUVar2 = pIVar1->___touchAndMouseState_7,
         pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_103d40fe;
      bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (pUVar2,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
    }
    if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar3 = param_1->___master_7->___worldMaster_5,
        pWVar3 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pHVar4 = pWVar3->___hoverHightlight_12,
       pHVar4 != (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *)0x0)) {
      HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A(pHVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_103d40fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
