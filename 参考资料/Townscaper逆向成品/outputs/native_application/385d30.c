// RVA 0x385d30 | FuryStudios.FurySDK.AsyncRequestCallback<bool>$$Invoke
// PDB: XmlSerializationFixupCallback_Invoke_mA91674704505C2EA53A3231D7783C17229830EF2
// Body: [[10385d30, 10385f58]]
// Direct callees:
// 1003e220 Invoke
// 1003e2b0 Invoke
// 1003e330 Invoke
// 1003e420 Invoke
// 10127570 il2cpp_array_length
// 1018e510 MethodIsStatic
// 1018e730 il2cpp_codegen_get_generic_virtual_method_internal
// 1018ea60 il2cpp_codegen_method_is_generic_instance
// 1018ea70 il2cpp_codegen_method_is_interface_method
// 1018ead0 il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found

void __cdecl
XmlSerializationFixupCallback_Invoke_mA91674704505C2EA53A3231D7783C17229830EF2
          (XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 *param_1,
          Il2CppObject *param_2,MethodInfo *param_3)

{
  int iVar1;
  XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 *pXVar2;
  code *pcVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  MethodInfo *pMVar6;
  Il2CppClass *pIVar7;
  uint uVar8;
  XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 **ppXVar9;
  Il2CppObject *pIVar10;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar11;
  uint local_c;

  pIVar4 = param_2;
  iVar1 = *(int *)&param_1->field_0x34;
  if (iVar1 == 0) {
    uVar8 = 1;
    ppXVar9 = &param_1;
  }
  else {
    uVar8 = *(uint *)(iVar1 + 0xc);
    ppXVar9 = (XmlSerializationFixupCallback_t20E0CC9B652B1BC41D75F4793FD87671D166E549 **)
              (iVar1 + 0x10);
  }
  local_c = 0;
  if (uVar8 != 0) {
    do {
      pXVar2 = ppXVar9[local_c];
      pcVar3 = *(code **)&pXVar2->field_0x8;
      pIVar10 = *(Il2CppObject **)&pXVar2->field_0x10;
      pMVar6 = *(MethodInfo **)&pXVar2->field_0x14;
      if (pMVar6->slot == 0xffff) {
        il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(pMVar6);
      }
      bVar5 = MethodIsStatic(pMVar6);
      if (bVar5) {
        if (pMVar6->parameters_count == '\x01') goto LAB_10385f34;
        (*pcVar3)(pIVar10);
      }
      else if (pMVar6->parameters_count == '\x01') {
        if (pIVar10 == (Il2CppObject *)0x0) goto LAB_10385f34;
        if (((pMVar6->slot == 0xffff) || ((((pIVar10->field0_0x0).klass)->flags >> 8 & 1) != 0)) ||
           (*(int *)&param_1->field_0xc == 0)) {
          (*pcVar3)(pIVar10,pIVar4,pMVar6);
        }
        else {
          bVar5 = il2cpp_codegen_method_is_generic_instance(pMVar6);
          if (bVar5) {
            bVar5 = il2cpp_codegen_method_is_interface_method(pMVar6);
            if (bVar5) {
              GenericInterfaceActionInvoker1<String_t_*>::Invoke(pMVar6,pIVar10,(String_t *)pIVar4);
            }
            else {
              pMVar6 = il2cpp_codegen_get_generic_virtual_method_internal
                                 ((MethodInfo *)
                                  (&(pIVar10->field0_0x0).klass[1].image)[(uint)pMVar6->slot * 2],
                                  pMVar6);
              (*pMVar6->methodPointer)(pIVar10,pIVar4,pMVar6);
            }
          }
          else {
            bVar5 = il2cpp_codegen_method_is_interface_method(pMVar6);
            if (bVar5) {
              pAVar11 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pIVar4;
              pIVar7 = (Il2CppClass *)il2cpp_array_length((Il2CppArray *)pMVar6);
              InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                        (pMVar6->slot,pIVar7,pIVar10,pAVar11);
            }
            else {
              (**(code **)(&((pIVar10->field0_0x0).klass)->field_0xbc + (uint)pMVar6->slot * 8))
                        (pIVar10,pIVar4,
                         (&(pIVar10->field0_0x0).klass[1].image)[(uint)pMVar6->slot * 2]);
            }
          }
        }
      }
      else if ((pMVar6->slot == 0xffff) || (*(int *)&param_1->field_0xc == 0)) {
LAB_10385f34:
        (*pcVar3)(pIVar4,pMVar6);
      }
      else {
        bVar5 = il2cpp_codegen_method_is_generic_instance(pMVar6);
        if (bVar5) {
          bVar5 = il2cpp_codegen_method_is_interface_method(pMVar6);
          if (bVar5) {
            GenericInterfaceFuncInvoker0<Il2CppObject_*>::Invoke(pMVar6,pIVar4);
          }
          else {
            pMVar6 = il2cpp_codegen_get_generic_virtual_method_internal
                               ((MethodInfo *)
                                (&(pIVar4->field0_0x0).klass[1].image)[(uint)pMVar6->slot * 2],
                                pMVar6);
            (*pMVar6->methodPointer)(pIVar4,pMVar6);
          }
        }
        else {
          bVar5 = il2cpp_codegen_method_is_interface_method(pMVar6);
          if (bVar5) {
            pIVar10 = pIVar4;
            pIVar7 = (Il2CppClass *)il2cpp_array_length((Il2CppArray *)pMVar6);
            InterfaceFuncInvoker0<int>::Invoke(pMVar6->slot,pIVar7,pIVar10);
          }
          else {
            (**(code **)(&((pIVar4->field0_0x0).klass)->field_0xbc + (uint)pMVar6->slot * 8))
                      (pIVar4,(&(pIVar4->field0_0x0).klass[1].image)[(uint)pMVar6->slot * 2]);
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar8);
  }
  return;
}
