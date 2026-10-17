// RVA 0x301a90 | Placemaker.Ui.TextSaveButtons$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: TextSaveButtons_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m979346F29EC7A1715C49FB5CD048962399275395
// Body: [[10301a90, 10301af4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a49800 Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422

void __cdecl
TextSaveButtons_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m979346F29EC7A1715C49FB5CD048962399275395
          (TextSaveButtons_t9FE31FB1A9C1B1AF839ACDABD89B0FDCC449A463 *param_1,bool param_2,
          int param_3,MethodInfo *param_4)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;

  if (DAT_1151c21e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c21e = '\x01';
  }
  if ((param_3 & 0xce0U) == 0) {
    pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(pOVar1,(MethodInfo *)0x0);
  }
  return;
}
