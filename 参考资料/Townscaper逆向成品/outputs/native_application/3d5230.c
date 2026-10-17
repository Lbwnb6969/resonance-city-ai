// RVA 0x3d5230 | Placemaker.Ui.MasterClicker$$.ctor
// PDB: MasterClicker__ctor_m48651C4CAE4C143C8FFFFF190AD7D25A4AB8741A
// Body: [[103d5230, 103d5275]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
MasterClicker__ctor_m48651C4CAE4C143C8FFFFF190AD7D25A4AB8741A
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar1;

  if (DAT_1151c865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var)
    ;
    DAT_1151c865 = '\x01';
  }
  pVVar1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)
           il2cpp_array_new_specific
                     (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var,5)
  ;
  param_1->___drags_23 = pVVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
