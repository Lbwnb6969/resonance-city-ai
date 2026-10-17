// RVA 0x2fa910 | Placemaker.Ui.SoundButton$$UpdateVolume
// PDB: SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61
// Body: [[102fa910, 102faa05]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196510 _libm_sse2_log10_precise
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 11143930 AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SoundButton_UpdateVolume_m0C2E6ADA265D869020AB7838773BECB03BF2BB61
          (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 *pAVar5;
  double dVar6;
  float fVar7;

  if (DAT_1151c1c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
    DAT_1151c1c2 = '\x01';
  }
  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pWVar2 = param_1->___master_4->___worldMaster_5,
       pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
      (pSVar3 = pWVar2->___saveSystem_35,
      pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
     (pSVar4 = pSVar3->___settingsData_10,
     pSVar4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
    bVar1 = pSVar4->___audioVolume_3;
    pAVar5 = param_1->___mixer_8;
    if ((char)bVar1 < '\0') {
      fVar7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                        (0.0001,1.0,(float)(bVar1 & 0x7f) * ___real_3c010204,(MethodInfo *)0x0);
      dVar6 = (double)fVar7;
      _libm_sse2_log10_precise();
      if (pAVar5 != (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 *)0x0) {
        AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE
                  (pAVar5,_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC,
                   (float)dVar6 * ___real_41a00000,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pAVar5 != (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 *)0x0) {
      AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE
                (pAVar5,_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC,-80.0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
