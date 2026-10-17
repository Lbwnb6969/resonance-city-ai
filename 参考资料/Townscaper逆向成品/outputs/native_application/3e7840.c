// RVA 0x3e7840 | Placemaker.Ui.UndoRedoButtons$$OnQueueChange
// PDB: UndoRedoButtons_OnQueueChange_m9EC178794DDBA51D8944D51EB193B6DCE228B76E
// Body: [[103e7840, 103e7961]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103dd360 NumberStrings_Get_mFA88B492DD28E72DB99E13269C503E1E27D464DA
// 10874660 BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107

void __cdecl
UndoRedoButtons_OnQueueChange_m9EC178794DDBA51D8944D51EB193B6DCE228B76E
          (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *pTVar1;
  String_t *pSVar2;

  if (DAT_1151c8bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
    DAT_1151c8bf = '\x01';
  }
  pTVar1 = param_1->___undoSteps_5;
  pSVar2 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
  if (0 < param_2) {
    if ((NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var);
    }
    pSVar2 = NumberStrings_Get_mFA88B492DD28E72DB99E13269C503E1E27D464DA(param_2,(MethodInfo *)0x0);
  }
  if (pTVar1 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x2cc))
              (pTVar1,pSVar2,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
    if (param_1->___undoButton_7 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
      BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
                (param_1->___undoButton_7,param_2 < 1,(MethodInfo *)0x0);
      pTVar1 = param_1->___redoSteps_6;
      pSVar2 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
      if (0 < param_3) {
        if ((NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var);
        }
        pSVar2 = NumberStrings_Get_mFA88B492DD28E72DB99E13269C503E1E27D464DA
                           (param_3,(MethodInfo *)0x0);
      }
      if (pTVar1 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
        (**(code **)(pTVar1->_padding_ + 0x2cc))
                  (pTVar1,pSVar2,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
        if (param_1->___redoButton_8 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
        {
          BaseButton_set_disabled_mF4EDB3DFA04995FD7494B7BD06481C112F29D107
                    (param_1->___redoButton_8,param_3 < 1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
