// RVA 0x9ffb60 | Placemaker.Ui.SaveMenu$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: SaveMenu_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m355A9919370112CCD57BC83F5EFE39FAB7DD3104
// Body: [[109ffb60, 109ffc01]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
SaveMenu_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m355A9919370112CCD57BC83F5EFE39FAB7DD3104
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,bool param_2,int param_3,
          MethodInfo *param_4)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  float local_8;

  if ((param_3 & 0xce0U) != 0) {
    return;
  }
  if (param_1->___focusPlacement_14 !=
      (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar2 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                      (param_1->___focusPlacement_14,(MethodInfo *)0x0);
    if (param_1->___focusCopy_15 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    {
      VVar3 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                        (param_1->___focusCopy_15,(MethodInfo *)0x0);
      local_8 = VVar2.___y_1;
      if (param_1->___focusPlacement_14 !=
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        VVar3.___y_1 = local_8 - VVar3.___y_1;
        VVar3.___x_0 = VVar2.___x_0;
        RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                  (param_1->___focusPlacement_14,VVar3,(MethodInfo *)0x0);
        if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___focusCopy_15 !=
             (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
           (pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___focusCopy_15,(MethodInfo *)0x0),
           pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
          GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                    (pGVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
