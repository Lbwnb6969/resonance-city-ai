// RVA 0x83fa50 | Placemaker.Ui.GamepadScreenCursor$$.ctor
// PDB: GamepadScreenCursor__ctor_m4CF9D0F0C6FD9020678040A69C54296E9BF37277
// Body: [[1083fa50, 1083facb]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GamepadScreenCursor__ctor_m4CF9D0F0C6FD9020678040A69C54296E9BF37277
          (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *param_1,
          MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151f419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151f419 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___openState_9 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___visibleState_10 = pUVar1;
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___arrowState_11 = pUVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
