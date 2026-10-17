// RVA 0x3e4f40 | Placemaker.UiAudio$$Play
// PDB: UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
// Body: [[103e4f40, 103e502a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B

AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __cdecl
UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
          (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *param_1,
          AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *param_2,bool param_3,
          MethodInfo *param_4)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar4;
  float fVar5;

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
    if ((pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar2,param_1->___index_4,(MethodInfo *)0x0),
       pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      pAVar4 = (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                          Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var
                         );
      fVar5 = __real_3f800000;
      if (param_3) {
        fVar5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(0.8,1.2,(MethodInfo *)0x0);
      }
      if (pAVar4 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
        AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                  (pAVar4,fVar5,(MethodInfo *)0x0);
        AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                  (pAVar4,param_2,(MethodInfo *)0x0);
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(pAVar4,(MethodInfo *)0x0);
        return pAVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
