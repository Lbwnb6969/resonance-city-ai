// RVA 0x9c9850 | Placemaker.Ui.UpdateState.<>c__DisplayClass35_0$$<Subscribe>b__0
// PDB: U3CU3Ec__DisplayClass35_0_U3CSubscribeU3Eb__0_m463DC3BDF191E18B09149CDDF65C2AB004C13405
// Body: [[109c9850, 109c98d5]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
// 11143e40 AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass35_0_U3CSubscribeU3Eb__0_m463DC3BDF191E18B09149CDDF65C2AB004C13405
          (U3CU3Ec__DisplayClass35_0_t58C5DF44750C56FCFF2832EF468B39DABCF690DA *param_1,
          float param_2,MethodInfo *param_3)

{
  float fVar1;
  bool bVar2;

  if (param_1->___audioSource_0 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
    AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
              (param_1->___audioSource_0,param_2,(MethodInfo *)0x0);
    fVar1 = ___real_00000000;
    if (param_1->___audioSource_0 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
      bVar2 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8
                        (param_1->___audioSource_0,(MethodInfo *)0x0);
      if ((param_2 <= fVar1) || (bVar2)) {
        if (bVar2 && param_2 <= fVar1) {
          if (param_1->___audioSource_0 !=
              (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
            AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
                      (param_1->___audioSource_0,(MethodInfo *)0x0);
            return;
          }
          goto LAB_109c98d1;
        }
      }
      else {
        if (param_1->___audioSource_0 ==
            (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) goto LAB_109c98d1;
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                  (param_1->___audioSource_0,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_109c98d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
