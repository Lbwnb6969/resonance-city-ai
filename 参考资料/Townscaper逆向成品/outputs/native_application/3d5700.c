// RVA 0x3d5700 | Placemaker.Ui.MenuMusic$$OnSetup
// PDB: MenuMusic_OnSetup_mCE56946A1319904A27F9170404C466EFC0038BB8
// Body: [[103d5700, 103d5738]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
MenuMusic_OnSetup_mCE56946A1319904A27F9170404C466EFC0038BB8
          (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar1;

  if (DAT_1151c86c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
              );
    DAT_1151c86c = '\x01';
  }
  pAVar1 = (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
                     );
  param_1->___audioSource_4 = pAVar1;
  return;
}
