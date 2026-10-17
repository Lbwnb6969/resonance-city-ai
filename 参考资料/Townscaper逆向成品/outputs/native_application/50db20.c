// RVA 0x50db20 | Placemaker.Props.PropRadiusIterator<object>$$System.Collections.IEnumerator.MoveNext
// PDB: PropRadiusIterator_1_System_Collections_IEnumerator_MoveNext_mCC7DD87D7E9EE38614C86A28FBA9867DCBEF9598_gshared
// Body: [[1050db20, 1050db4f]]
// Direct callees:
// 1015daa0 InitFromCodegenSlow
// 1050d730 PropRadiusIterator_1_MoveNext_m510067F95DEE1FF686051A63BF12F80C2A13C2EC_gshared

bool __cdecl
PropRadiusIterator_1_System_Collections_IEnumerator_MoveNext_mCC7DD87D7E9EE38614C86A28FBA9867DCBEF9598_gshared
          (PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *param_1,
          MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  bool bVar2;

  pIVar1 = param_2->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  bVar2 = PropRadiusIterator_1_MoveNext_m510067F95DEE1FF686051A63BF12F80C2A13C2EC_gshared
                    (param_1,pIVar1->rgctx_data[2].method);
  return bVar2;
}
