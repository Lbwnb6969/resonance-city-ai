// RVA 0x50daa0 | Placemaker.Props.PropRadiusIterator<ButterflyLanding>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
// PDB: PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
// Body: [[1050daa0, 1050db10]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1015daa0 InitFromCodegenSlow

Il2CppObject * __cdecl
PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
          (PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *param_1,
          MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *pLStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  Il2CppObject *local_8;

  local_48 = param_1->___propPlacer_0;
  fStack_44 = param_1->___sqRadius_1;
  fStack_40 = (param_1->___pos_2).___x_2;
  fStack_3c = (param_1->___pos_2).___y_3;
  local_38 = (param_1->___pos_2).___z_4;
  iStack_34 = param_1->___x_3;
  iStack_30 = param_1->___y_4;
  iStack_2c = param_1->___z_5;
  local_28 = param_1->___i_6;
  pLStack_24 = param_1->___propColliders_7;
  iStack_20 = (param_1->___min_8).___x_0;
  iStack_1c = (param_1->___min_8).___y_1;
  local_18 = (param_1->___min_8).___z_2;
  iStack_14 = (param_1->___max_9).___x_0;
  iStack_10 = (param_1->___max_9).___y_1;
  iStack_c = (param_1->___max_9).___z_2;
  local_8 = param_1->___current_10;
  pIVar1 = param_2->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[3].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar2 = il2cpp_value_box(pIVar1,&local_48);
  return pIVar2;
}
