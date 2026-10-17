// RVA 0x3e7db0 | Placemaker.Ui.UndoRedoButtons$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: UndoRedoButtons_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m78A804BF778F46EC2B6AFE15FC323A041ABB4B53
// Body: [[103e7db0, 103e7e8d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10874660 BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107

void __cdecl
UndoRedoButtons_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m78A804BF778F46EC2B6AFE15FC323A041ABB4B53
          (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *pTVar1;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *unaff_retaddr;

  param_1->___master_4 = param_2;
  if (param_1->___undoButton_7 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
    BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
              (param_1->___undoButton_7,true,(MethodInfo *)0x0);
    if (param_1->___redoButton_8 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
      BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
                (param_1->___redoButton_8,true,(MethodInfo *)0x0);
      if (DAT_1151c8bf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
        DAT_1151c8bf = '\x01';
      }
      pTVar1 = param_1->___undoSteps_5;
      if (pTVar1 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
        (**(code **)(pTVar1->_padding_ + 0x2cc))
                  (pTVar1,_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0,
                   *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
        if (param_1->___undoButton_7 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
        {
          BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
                    (param_1->___undoButton_7,true,(MethodInfo *)0x0);
          pTVar1 = param_1->___redoSteps_6;
          if (pTVar1 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
            (**(code **)(pTVar1->_padding_ + 0x2cc))
                      (pTVar1,_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0,
                       *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
            if (param_1->___redoButton_8 !=
                (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
              param_1._0_1_ = SUB41(param_1->___redoButton_8,0);
              BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
                        (unaff_retaddr,param_1._0_1_,(MethodInfo *)&DAT_00000001);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
