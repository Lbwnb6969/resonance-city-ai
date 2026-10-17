// RVA 0x506570 | Os.Utils.PooledList<object>$$CopyTo
// PDB: PooledList_1_CopyTo_mA77A5C92B6A2E368133E68DA1F1ADE9C5D6DD04B_gshared
// Body: [[10506570, 1050660b]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PooledList_1_CopyTo_mA77A5C92B6A2E368133E68DA1F1ADE9C5D6DD04B_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *param_2,int param_3,
          MethodInfo *param_4)

{
  ushort uVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ushort uVar5;
  VirtualInvokeData *pVVar6;

  pLVar2 = param_1->___list_0;
  if (pLVar2 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pIVar3 = param_4->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data[4].klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  uVar5 = 0;
  uVar1 = ((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass->interface_offsets_count;
  if (uVar1 != 0) {
    pIVar4 = ((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType == pIVar3) {
        pVVar6 = (VirtualInvokeData *)
                 (&((Il2CppObject_u_0 *)&pLVar2->_padding_)->klass[1].castClass +
                 pIVar4[uVar5].offset * 2);
        goto LAB_105065e2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)pLVar2,pIVar3,5);
LAB_105065e2:
  (*(code *)pVVar6->methodPtr)(pLVar2,param_2,param_3,(Il2CppClass *)pVVar6->method);
  return;
}
