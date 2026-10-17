// RVA 0x506b40 | Os.Utils.PooledList<object>$$get_Item
// PDB: PooledList_1_get_Item_m67F604CD5F82692BCCEBBF483668FE2848E2CD37_gshared
// Body: [[10506b40, 10506be9]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Il2CppObject * __cdecl
PooledList_1_get_Item_m67F604CD5F82692BCCEBBF483668FE2848E2CD37_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,int param_2,
          MethodInfo *param_3)

{
  ushort uVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ushort uVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  undefined4 *puVar8;

  pLVar2 = param_1->___list_0;
  if (pLVar2 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pIVar3 = param_3->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data[3].klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  uVar5 = 0;
  uVar1 = ((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass->interface_offsets_count;
  if (uVar1 != 0) {
    pIVar4 = ((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType == pIVar3) {
        puVar8 = (undefined4 *)
                 (&((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass->field_0xbc +
                 pIVar4[uVar5].offset * 8);
        pIVar7 = (Il2CppObject *)(*(code *)*puVar8)(pLVar2,param_2,puVar8[1]);
        return pIVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)pLVar2,pIVar3,0);
  pIVar7 = (Il2CppObject *)(*pVVar6->methodPtr)(pLVar2,param_2,pVVar6->method);
  return pIVar7;
}
