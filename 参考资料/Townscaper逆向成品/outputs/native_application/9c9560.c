// RVA 0x9c9560 | Placemaker.Ui.UpdateState.<>c__DisplayClass30_0$$<SubscribeTick>b__0
// PDB: U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__0_mF37258052D883780F18EE1D5B58EEFE6E278CE87
// Body: [[109c9560, 109c964b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 11134b60 CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__0_mF37258052D883780F18EE1D5B58EEFE6E278CE87
          (U3CU3Ec__DisplayClass30_0_t79A3B23E607F92F0D47DDAFAE181886665BB3A1F *param_1,
          float param_2,MethodInfo *param_3)

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  float fVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (param_1->___gameObject_0 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
              (param_1->___gameObject_0,___real_00000000 < param_2,(MethodInfo *)0x0);
    if (param_1->___transform_1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_10,param_1->___transform_1,(MethodInfo *)0x0);
      fVar1 = pVVar3->___z_4;
      fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                        (0.8,1.0,param_2,(MethodInfo *)0x0);
      if (param_1->___canvasGroup_2 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0)
      {
        CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53
                  (param_1->___canvasGroup_2,param_2,(MethodInfo *)0x0);
        local_10.___x_2 = fVar4;
        local_10.___y_3 = fVar4;
        local_10.___z_4 = fVar1;
        if (param_1->___transform_1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          VVar2.___y_3 = fVar4;
          VVar2.___x_2 = fVar4;
          VVar2.___z_4 = fVar1;
          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                    (param_1->___transform_1,VVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
