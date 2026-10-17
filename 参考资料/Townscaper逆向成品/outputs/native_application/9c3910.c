// RVA 0x9c3910 | Placemaker.Graphs.Square.Relation$$GetHashCode
// PDB: Relation_GetHashCode_mA036632EE71DB760B57DE414712E00DBB745C614
// Body: [[109c3910, 109c39ac]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d95c0 Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1

int __cdecl
Relation_GetHashCode_mA036632EE71DB760B57DE414712E00DBB745C614
          (Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  int iVar2;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_14 [2];
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_c;

  if (DAT_1151ff37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2__ctor_m22F1FA7DCB3B46E97506A68F943B623F7EA3A643_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&KeyValuePair_2_tC3D6E19884EC3F5C3DDF4B60EDECC0B5CFE1F93E_il2cpp_TypeInfo_var
              );
    DAT_1151ff37 = '\x01';
  }
  local_c.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  local_c.___indexInOther_1 = '\0';
  local_c._5_3_ = 0;
  Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
            (&local_c,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)param_1->___square_0,
             param_1->___indexInOther_1,
             KeyValuePair_2__ctor_m22F1FA7DCB3B46E97506A68F943B623F7EA3A643_RuntimeMethod_var);
  local_14[0] = local_c.___qube_0;
  local_14[1] = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_c._4_4_;
  pIVar1 = il2cpp_value_box(KeyValuePair_2_tC3D6E19884EC3F5C3DDF4B60EDECC0B5CFE1F93E_il2cpp_TypeInfo_var
                            ,local_14);
  if (pIVar1 != (Il2CppObject *)0x0) {
    iVar2 = (*(code *)(pIVar1->field0_0x0).klass[1].namespaze)
                      (pIVar1,(pIVar1->field0_0x0).klass[1].byval_arg.data.dummy);
    il2cpp_object_unbox(pIVar1);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
