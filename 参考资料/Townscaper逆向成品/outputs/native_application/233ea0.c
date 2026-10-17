// RVA 0x233ea0 | Placemaker.Ui.CommandFeedbacker$$Update
// PDB: CommandFeedbacker_Update_mFC412B9E916DA0FFCF535A95F6DB38BA88F1C350
// Body: [[10233ea0, 10234039]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a445f0 Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

void __cdecl
CommandFeedbacker_Update_mFC412B9E916DA0FFCF535A95F6DB38BA88F1C350
          (CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  float fVar3;
  float fVar4;

  if (DAT_1151b591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151b591 = '\x01';
  }
  fVar4 = param_1->___lastFeedbackTime_5;
  fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  fVar4 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (fVar4 + __real_3f8ccccd,fVar4 + __real_3ecccccd,fVar3,(MethodInfo *)0x0);
  fVar4 = Mathf_SmoothStep_m42903D75966D0858460ACDF8CB825B874725FFF6
                    (0.0,1.0,fVar4,(MethodInfo *)0x0);
  fVar4 = fVar4 * fVar4;
  if (fVar4 < __real_3c23d70a) {
    pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar2,false,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  else {
    fVar3 = param_1->___scaleAmount_9 * __real_3dcccccd + __real_3f666666 + fVar4 * __real_3dcccccd;
    if (param_1->___scaler_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar1.___y_3 = fVar3;
      VVar1.___x_2 = fVar3;
      VVar1.___z_4 = 1.0;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (param_1->___scaler_8,VVar1,(MethodInfo *)0x0);
      if (param_1->___canvasGroup_7 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)
      {
        CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                  (param_1->___canvasGroup_7,fVar4,(MethodInfo *)0x0);
        param_1->___scaleAmount_9 =
             *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                             ->static_fields + 8) * param_1->___scaleAmount_9;
        param_1->___alphaAmount_10 =
             *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                             ->static_fields + 4) * param_1->___alphaAmount_10;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
