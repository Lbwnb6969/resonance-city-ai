// RVA 0x506760 | Os.Utils.PooledList<object>$$IndexOf
// PDB: PooledList_1_IndexOf_m58BDFA28F9A2E0B123B0F665AD56538EBDE5C366_gshared
// Body: [[10506760, 10506809]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int __cdecl
PooledList_1_IndexOf_m58BDFA28F9A2E0B123B0F665AD56538EBDE5C366_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  ushort uVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ushort uVar5;
  VirtualInvokeData *pVVar6;
  int iVar7;
  char **ppcVar8;

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
        ppcVar8 = &((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass[1].namespaze +
                  pIVar4[uVar5].offset * 2;
        iVar7 = (*(code *)*ppcVar8)(pLVar2,param_2,(((Il2CppType *)(ppcVar8 + 1))->data).dummy);
        return iVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)pLVar2,pIVar3,2);
  iVar7 = (*pVVar6->methodPtr)(pLVar2,param_2,pVVar6->method);
  return iVar7;
}
