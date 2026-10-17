// RVA 0x4484e0 | Os.Utils.ExtraMath$$BinarySearch<object, object>
// PDB: ExtraMath_BinarySearch_TisRuntimeObject_TisRuntimeObject_m7B16ADD9196E5E0D5618FBDFA1B75DCD0F7747CB_gshared
// Body: [[104484e0, 1044859f]]
// Direct callees:
// 1003e330 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int __cdecl
ExtraMath_BinarySearch_TisRuntimeObject_TisRuntimeObject_m7B16ADD9196E5E0D5618FBDFA1B75DCD0F7747CB_gshared
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  int iVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  int extraout_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_8;

  local_8 = 0;
  if (param_1 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
LAB_1044859b:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar3 = (*(code *)**(undefined4 **)(param_3->field6_0x18).methodMetadataHandle)
                    (param_1,*(undefined4 **)(param_3->field6_0x18).methodMetadataHandle);
  iVar3 = iVar3 + -1;
  uVar7 = 0;
  iVar6 = 0;
  if (-1 < iVar3) {
    do {
      uVar7 = (iVar3 + local_8) / 2;
      pIVar4 = (Il2CppObject *)
               (*((param_3->field6_0x18).rgctx_data[1].method)->methodPointer)
                         (param_1,uVar7,(param_3->field6_0x18).rgctx_data[1].method);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_1044859b;
      pIVar1 = (param_3->field6_0x18).rgctx_data[3].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (0,pIVar1,pIVar4,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_2);
      iVar6 = -extraout_EAX;
      if (iVar6 == 0) {
        return uVar7;
      }
      iVar2 = uVar7 + 1;
      if (iVar6 < 0) {
        iVar3 = uVar7 - 1;
        iVar2 = local_8;
      }
      local_8 = iVar2;
    } while (iVar2 <= iVar3);
  }
  uVar5 = uVar7 + 1;
  if (iVar6 < 1) {
    uVar5 = uVar7;
  }
  return ~uVar5;
}
