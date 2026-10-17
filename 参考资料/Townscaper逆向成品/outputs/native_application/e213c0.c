// RVA 0xe213c0 | Placemaker.GroundClicker$$.ctor
// PDB: GroundClicker__ctor_m513BE0BB20B36A35D4DFCF69AF206F169E0F0267
// Body: [[10e213c0, 10e21405]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GroundClicker__ctor_m513BE0BB20B36A35D4DFCF69AF206F169E0F0267
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar1;

  if (DAT_11522681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var)
    ;
    DAT_11522681 = '\x01';
  }
  pVVar1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)
           il2cpp_array_new_specific
                     (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var,5)
  ;
  param_1->___drags_18 = pVVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
