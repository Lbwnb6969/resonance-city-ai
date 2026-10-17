// RVA 0x756190 | Placemaker.Ui.ProgressBarButton$$Update
// PDB: ProgressBarButton_Update_mF3CDD6C72DE86411D0F82CE119AB6FBA940BCBA1
// Body: [[10756190, 1075625f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104bc910 CornerImage_set_progress_mC8BFD04C882CFCF98E715FF11C7502BFAC3F1F59
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10670f70 UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
ProgressBarButton_Update_mF3CDD6C72DE86411D0F82CE119AB6FBA940BCBA1
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,MethodInfo *param_2)

{
  float fVar1;

  if ((param_1->___pressedByMouse_9 == false) && (param_1->___pressedByGamepad_10 == false)) {
    param_1->___hasBeenInvoked_11 = false;
    if (param_1->___pressed_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___pressed_7,false,(MethodInfo *)0x0);
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___pressedByGamepad_10 = false;
    fVar1 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                      (0.2,1.0,(fVar1 - param_1->___gamepadPressTime_12) / param_1->___holdTime_4,
                       (MethodInfo *)0x0);
    if (param_1->___bar_6 != (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *)0x0) {
      CornerImage_set_progress_mC8BFD04C882CFCF98E715FF11C7502BFAC3F1F59
                (param_1->___bar_6,fVar1,(MethodInfo *)0x0);
      if (fVar1 < __real_3f800000) {
        return;
      }
      if (param_1->___hasBeenInvoked_11 != false) {
        return;
      }
      if (param_1->___onFull_5 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0) {
        UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
                  (param_1->___onFull_5,(MethodInfo *)0x0);
        param_1->___hasBeenInvoked_11 = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
