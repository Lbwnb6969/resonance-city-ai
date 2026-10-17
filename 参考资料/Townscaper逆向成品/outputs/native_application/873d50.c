// RVA 0x873d50 | Placemaker.AudioSourcePool$$GetAudioSource
// PDB: AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
// Body: [[10873d50, 10873dff]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
// 11143f30 AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __cdecl
AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
          (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar2;

  if (DAT_1151f59c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
              );
    DAT_1151f59c = '\x01';
  }
  param_1->___index_4 = (param_1->___index_4 + 1) % param_1->___count_5;
  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pTVar1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                       (pTVar1,param_1->___index_4,(MethodInfo *)0x0);
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pAVar2 = (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar1,
                          Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
                         );
      if (pAVar2 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
        AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
                  (pAVar2,0.0,(MethodInfo *)0x0);
        AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928(pAVar2,1.0,(MethodInfo *)0x0)
        ;
        AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                  (pAVar2,1.0,(MethodInfo *)0x0);
        AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(pAVar2,(MethodInfo *)0x0);
        return pAVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
