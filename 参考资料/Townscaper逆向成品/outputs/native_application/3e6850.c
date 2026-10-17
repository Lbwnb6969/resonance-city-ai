// RVA 0x3e6850 | Placemaker.WorldMaster$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: UiMaster_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m6236F5105CAC8E86D70678E4E1601257A412DC3E
// Body: [[103e6850, 103e6877]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
UiMaster_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_m6236F5105CAC8E86D70678E4E1601257A412DC3E
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,bool param_2,int param_3,
          MethodInfo *param_4)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;

  pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
