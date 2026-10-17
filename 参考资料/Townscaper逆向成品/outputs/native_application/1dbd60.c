// RVA 0x1dbd60 | Placemaker.Quads.GridGeneration.MotivationCounter.<GetEnumerator>d__3$$System.Collections.IEnumerator.get_Current
// PDB: U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_mA9C60EDF381C91FB016638ED77BA725ACC2DA17E
// Body: [[101dbd60, 101dbda7]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

Il2CppObject * __cdecl
U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_mA9C60EDF381C91FB016638ED77BA725ACC2DA17E
          (U3CGetEnumeratorU3Ed__3_t3EDECD654172E620175BA3C08C30B00ABF62FEC3 *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  int local_c;
  int local_8;

  if (DAT_1151afe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1151afe9 = '\x01';
  }
  local_c = (param_1->___U3CU3E2__current_1).___x_0;
  local_8 = (param_1->___U3CU3E2__current_1).___y_1;
  pIVar1 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                            &local_c);
  return pIVar1;
}
