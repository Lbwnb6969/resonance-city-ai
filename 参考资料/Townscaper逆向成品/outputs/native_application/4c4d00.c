// RVA 0x4c4d00 | Placemaker.Ui.DisableableButton$$.ctor
// PDB: DisableableButton__ctor_m6E234871F891BEA2A261A5ED3533BBD2C1C33A4C
// Body: [[104c4d00, 104c4d5a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
DisableableButton__ctor_m6E234871F891BEA2A261A5ED3533BBD2C1C33A4C
          (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151d134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151d134 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,0.0,(MethodInfo *)0x0);
  param_1->___disabledState_7 = pUVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
