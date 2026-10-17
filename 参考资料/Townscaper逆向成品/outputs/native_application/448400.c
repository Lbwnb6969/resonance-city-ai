// RVA 0x448400 | Os.Utils.ExtraMath$$BinarySearchComponent<object, object>
// PDB: ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
// Body: [[10448400, 104484d0]]
// Direct callees:
// 1003e330 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

int __cdecl
ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_1,Il2CppObject *param_2,
          int param_3,int param_4,MethodInfo *param_5)

{
  Il2CppClass *pIVar1;
  int iVar2;
  int iVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Il2CppObject *pIVar5;
  int extraout_EAX;
  uint uVar6;
  int iVar7;
  uint uVar8;

  if (param_1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
LAB_104484cc:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                    (param_1,(MethodInfo *)0x0);
  uVar8 = 0;
  iVar3 = (iVar3 - param_4) + -1;
  iVar7 = 0;
  if (param_3 <= iVar3) {
    do {
      uVar8 = (param_3 + iVar3) / 2;
      pTVar4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1,uVar8,(MethodInfo *)0x0);
      if ((pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pIVar5 = (Il2CppObject *)
                   (*(code *)**(undefined4 **)(param_5->field6_0x18).methodMetadataHandle)
                             (pTVar4,*(undefined4 **)(param_5->field6_0x18).methodMetadataHandle),
         pIVar5 == (Il2CppObject *)0x0)) goto LAB_104484cc;
      pIVar1 = (param_5->field6_0x18).rgctx_data[2].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (0,pIVar1,pIVar5,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_2);
      iVar7 = -extraout_EAX;
      if (iVar7 == 0) {
        return uVar8;
      }
      iVar2 = uVar8 + 1;
      if (iVar7 < 0) {
        iVar3 = uVar8 - 1;
        iVar2 = param_3;
      }
      param_3 = iVar2;
    } while (iVar2 <= iVar3);
  }
  uVar6 = uVar8 + 1;
  if (iVar7 < 1) {
    uVar6 = uVar8;
  }
  return ~uVar6;
}
