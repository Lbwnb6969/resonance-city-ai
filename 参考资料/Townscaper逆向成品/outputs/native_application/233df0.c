// RVA 0x233df0 | Placemaker.Ui.CommandFeedbacker$$Feedback
// PDB: CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9
// Body: [[10233df0, 10233e5a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3de70 GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE

void __cdecl
CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9
          (CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  float fVar3;

  fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___lastFeedbackTime_5 = fVar3;
  param_1->___scaleAmount_9 = 1.0;
  param_1->___alphaAmount_10 = 1.0;
  pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    bVar1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                      (pGVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      param_1->___enableTime_6 = fVar3;
      pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_10233e56;
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar2,true,(MethodInfo *)0x0);
    }
    return;
  }
LAB_10233e56:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
