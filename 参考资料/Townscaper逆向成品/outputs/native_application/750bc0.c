// RVA 0x750bc0 | Placemaker.SceneProcessing.PlatformDependent$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: PlatformDependent_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m2A746D046D267084B4C5E0E9BE885AF0BA7802F4
// Body: [[10750bc0, 10750c39]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a49800 Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422

void __cdecl
PlatformDependent_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m2A746D046D267084B4C5E0E9BE885AF0BA7802F4
          (PlatformDependent_t54A988CD49192F30919DDC580059601746023F2F *param_1,bool param_2,
          int param_3,MethodInfo *param_4)

{
  uint uVar1;
  bool bVar2;

  if (DAT_1151ec02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ec02 = '\x01';
  }
  uVar1 = param_1->___targetPlatform_5 & param_3;
  if (param_1->___mode_4 == 1) {
    bVar2 = uVar1 != 0;
  }
  else {
    bVar2 = uVar1 == 0;
  }
  if (!bVar2) {
    param_1 = (PlatformDependent_t54A988CD49192F30919DDC580059601746023F2F *)
              Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422
            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,(MethodInfo *)0x0);
  return;
}
