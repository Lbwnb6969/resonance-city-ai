// RVA 0x3d5960 | Placemaker.Ui.MenuMusic$$Update
// PDB: MenuMusic_Update_m3BAC903D164F45D66561365ED64E40F9E8733D14
// Body: [[103d5960, 103d5a46]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a44190 Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
// 11143ed0 AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MenuMusic_Update_m3BAC903D164F45D66561365ED64E40F9E8733D14
          (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *param_1,MethodInfo *param_2)

{
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  if (param_1->___audioSource_4 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
    fVar2 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556
                      (param_1->___audioSource_4,(MethodInfo *)0x0);
    if (fVar2 == param_1->___targetVolume_5) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
                 (MethodInfo *)0x0);
      if (param_1->___targetVolume_5 == ___real_00000000) {
        if (param_1->___audioSource_4 !=
            (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
          AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
                    (param_1->___audioSource_4,(MethodInfo *)0x0);
          return;
        }
        goto LAB_103d5a42;
      }
    }
    else {
      pAVar1 = param_1->___audioSource_4;
      if (pAVar1 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) goto LAB_103d5a42;
      fVar3 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556
                        (pAVar1,(MethodInfo *)0x0);
      fVar2 = param_1->___targetVolume_5;
      fVar4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
      fVar2 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
                        (fVar3,fVar2,fVar4,(MethodInfo *)0x0);
      AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                (pAVar1,fVar2,(MethodInfo *)0x0);
    }
    return;
  }
LAB_103d5a42:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
