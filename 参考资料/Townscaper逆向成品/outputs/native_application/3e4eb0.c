// RVA 0x3e4eb0 | Placemaker.UiAudio$$GetAudioSource
// PDB: UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
// Body: [[103e4eb0, 103e4f32]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __cdecl
UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
          (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar4;

  if (DAT_1151c8ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
              );
    DAT_1151c8ab = '\x01';
  }
  iVar1 = param_1->___index_4;
  pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (pTVar2,(MethodInfo *)0x0);
    param_1->___index_4 = (iVar1 + 1) % iVar3;
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (pTVar2,param_1->___index_4,(MethodInfo *)0x0);
      if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pAVar4 = (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                            Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
                           );
        return pAVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
