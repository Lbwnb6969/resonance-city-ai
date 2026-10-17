// RVA 0x842860 | Placemaker.Ui.GenericControlsMenu$$.ctor
// PDB: GenericControlsMenu__ctor_mAE18E1E1309E1B7E194881B33A22F66163E677BA
// Body: [[10842860, 108428b6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GenericControlsMenu__ctor_mAE18E1E1309E1B7E194881B33A22F66163E677BA
          (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *param_1,
          MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (DAT_1151f446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151f446 = '\x01';
  }
  pUVar1 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar1,(MethodInfo *)0x0);
  param_1->___openState_5 = pUVar1;
  param_1->___menuState_6 = 0x400;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
