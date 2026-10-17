// RVA 0x3e7e90 | Placemaker.Ui.UndoRedoButtons$$Update
// PDB: UndoRedoButtons_Update_mD9B6E99C2FF0828BD7A79152DCE610E4465652F2
// Body: [[103e7e90, 103e7f73]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103d2070 Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6
// 103d20d0 Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
UndoRedoButtons_Update_mD9B6E99C2FF0828BD7A79152DCE610E4465652F2
          (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar2;
  bool bVar3;
  float fVar4;

  if (param_1->___isUndoDown_9 == false) {
    if (param_1->___isRedoDown_10 == false) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
                 (MethodInfo *)0x0);
    }
    else {
      fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (param_1->___redoDownTime_14 <= fVar4 && fVar4 != param_1->___redoDownTime_14) {
        param_1->___hasRedone_17 = true;
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pWVar1 = param_1->___master_4->___worldMaster_5,
            pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
           (pMVar2 = pWVar1->___maker_6,
           pMVar2 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
          bVar3 = Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6(pMVar2,(MethodInfo *)0x0)
          ;
          if (!bVar3) {
            return;
          }
          if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              param_1->___redoDown_12 !=
              (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
            OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                      ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       param_1->___redoDown_12,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_103e7f6f;
      }
    }
  }
  else {
    fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    if (param_1->___undoDownTime_13 <= fVar4 && fVar4 != param_1->___undoDownTime_13) {
      param_1->___hasUndone_16 = true;
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar1 = param_1->___master_4->___worldMaster_5,
          pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pMVar2 = pWVar1->___maker_6,
         pMVar2 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
        bVar3 = Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A(pMVar2,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___undoDown_11
            != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->___undoDown_11,(MethodInfo *)0x0);
          return;
        }
      }
LAB_103e7f6f:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
  return;
}
