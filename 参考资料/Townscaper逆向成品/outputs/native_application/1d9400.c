// RVA 0x1d9400 | Placemaker.Graphs.Qube.Relation6$$set_Item
// PDB: Relation6_set_Item_m59C34A71EF0B2CC5C4D5DEE4852A5C68A346243E
// Body: [[101d9400, 101d94ab]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
Relation6_set_Item_m59C34A71EF0B2CC5C4D5DEE4852A5C68A346243E
          (Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *param_1,int param_2,
          Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 param_3,MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    (param_1->___r0_0).___qube_0 = param_3.___qube_0;
    (param_1->___r0_0).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r0_0).field_0x5 = param_3._5_3_;
    return;
  case 1:
    (param_1->___r1_1).___qube_0 = param_3.___qube_0;
    (param_1->___r1_1).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r1_1).field_0x5 = param_3._5_3_;
    return;
  case 2:
    (param_1->___r2_2).___qube_0 = param_3.___qube_0;
    (param_1->___r2_2).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r2_2).field_0x5 = param_3._5_3_;
    return;
  case 3:
    (param_1->___r3_3).___qube_0 = param_3.___qube_0;
    (param_1->___r3_3).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r3_3).field_0x5 = param_3._5_3_;
    return;
  case 4:
    (param_1->___r4_4).___qube_0 = param_3.___qube_0;
    (param_1->___r4_4).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r4_4).field_0x5 = param_3._5_3_;
    return;
  case 5:
    (param_1->___r5_5).___qube_0 = param_3.___qube_0;
    (param_1->___r5_5).___indexInOther_1 = param_3.___indexInOther_1;
    *(undefined3 *)&(param_1->___r5_5).field_0x5 = param_3._5_3_;
    return;
  default:
    pIVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523
              ((IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)pEVar2,
               (MethodInfo *)0x0);
    pMVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                Relation6_set_Item_m59C34A71EF0B2CC5C4D5DEE4852A5C68A346243E_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
