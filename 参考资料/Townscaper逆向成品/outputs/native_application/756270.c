// RVA 0x756270 | Placemaker.Ui.ProgressBarButton$$.ctor
// PDB: ProgressBarButton__ctor_m24A65A4D9E66AA78AAD6CA9E4A1108756437EA4A
// Body: [[10756270, 107562e0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ProgressBarButton__ctor_m24A65A4D9E66AA78AAD6CA9E4A1108756437EA4A
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151ec2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151ec2a = '\x01';
  }
  param_1->___holdTime_4 = 5.0;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    pUVar1->___speed_7 = 12.0;
    param_1->___pressed_7 = pUVar1;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
