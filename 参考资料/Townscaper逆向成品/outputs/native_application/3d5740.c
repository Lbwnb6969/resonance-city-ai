// RVA 0x3d5740 | Placemaker.Ui.MenuMusic$$StartPlaying
// PDB: MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// Body: [[103d5740, 103d57d3] [103d57da, 103d5825]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143e40 AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
          (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *param_1,MethodInfo *param_2)

{
  List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *pLVar1;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar2;
  bool bVar3;
  uint uVar4;

  if (DAT_1151c86b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var)
    ;
    DAT_1151c86b = '\x01';
  }
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0);
  param_1->___targetVolume_5 = 1.0;
  param_1->___speed_6 = 1.0;
  if (param_1->___audioSource_4 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
    bVar3 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8
                      (param_1->___audioSource_4,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pLVar1 = param_1->___audioClips_7;
    if (pLVar1 != (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)0x0) {
      if (0 < pLVar1->____size_2) {
        pAVar2 = param_1->___audioSource_4;
        uVar4 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                          (0,pLVar1->____size_2,(MethodInfo *)0x0);
        if ((uint)pLVar1->____size_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if (pAVar2 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
        goto LAB_103d5821;
        AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                  (pAVar2,pLVar1->____items_1->m_Items[uVar4],(MethodInfo *)0x0);
      }
      if (param_1->___audioSource_4 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
      {
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                  (param_1->___audioSource_4,(MethodInfo *)0x0);
        if (param_1->___audioSource_4 !=
            (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
          AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                    (param_1->___audioSource_4,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_103d5821:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
