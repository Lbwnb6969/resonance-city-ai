// RVA 0x10d1000 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$.ctor
// PDB: PlatformSystemMessengerBase__ctor_m1F940484A1DDB991003D024EF349DDF57B89C420
// Body: [[110d1000, 110d105d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PlatformSystemMessengerBase__ctor_m1F940484A1DDB991003D024EF349DDF57B89C420
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          MethodInfo *param_2)

{
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar1;

  if (DAT_11523aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1__ctor_m6658CB2121AB6785AF23C7891FCB91ABF88495DA_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_t404147F4D3E5581A22057CA73223301C6A269E37_il2cpp_TypeInfo_var);
    DAT_11523aa0 = '\x01';
  }
  pQVar1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
           il2cpp_codegen_object_new
                     (Queue_1_t404147F4D3E5581A22057CA73223301C6A269E37_il2cpp_TypeInfo_var);
  Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
            (pQVar1,Queue_1__ctor_m6658CB2121AB6785AF23C7891FCB91ABF88495DA_RuntimeMethod_var);
  param_1->___messages_5 = (Queue_1_t404147F4D3E5581A22057CA73223301C6A269E37 *)pQVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
