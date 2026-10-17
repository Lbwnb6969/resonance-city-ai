// RVA 0x2fd420 | Placemaker.Ui.StandardButton$$.ctor
// PDB: StandardButton__ctor_m124F541361C06424E6335380182200B4ABF8A4A2
// Body: [[102fd420, 102fd4ac]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
StandardButton__ctor_m124F541361C06424E6335380182200B4ABF8A4A2
          (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151c1e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151c1e5 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    pUVar1->___speed_7 = 24.0;
    param_1->___scaleZ_4 = pUVar1;
    pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
             il2cpp_codegen_object_new
                       (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar1,1.0,(MethodInfo *)0x0);
    param_1->___scaleXY_5 = pUVar1;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
