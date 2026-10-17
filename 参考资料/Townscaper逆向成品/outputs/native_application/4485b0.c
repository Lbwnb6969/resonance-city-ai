// RVA 0x4485b0 | Os.Utils.ExtraMath$$BinarySearch<Bird, Vector3>
// PDB: ExtraMath_BinarySearch_TisRuntimeObject_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m3112A01954ED9625C65A13CC3AA81C7E70302248_gshared
// Body: [[104485b0, 104486e6]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int __cdecl
ExtraMath_BinarySearch_TisRuntimeObject_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m3112A01954ED9625C65A13CC3AA81C7E70302248_gshared
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  ushort uVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_10;

  local_10 = 0;
  if (param_1 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
LAB_104486e2:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar4 = (*(code *)**(undefined4 **)(param_3->field6_0x18).methodMetadataHandle)
                    (param_1,*(undefined4 **)(param_3->field6_0x18).methodMetadataHandle);
  iVar4 = iVar4 + -1;
  uVar9 = 0;
  iVar8 = 0;
  if (-1 < iVar4) {
    do {
      uVar9 = (iVar4 + local_10) / 2;
      pIVar5 = (Il2CppObject *)(*((param_3->field6_0x18).rgctx_data[1].method)->methodPointer)();
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_104486e2;
      pIVar1 = (param_3->field6_0x18).rgctx_data[3].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar2 = (pIVar5->field0_0x0).klass;
      uVar3 = 0;
      if (pIVar2->interface_offsets_count != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType == pIVar1) {
            pVVar6 = (VirtualInvokeData *)
                     (&pIVar2->field_0xbc + pIVar2->interfaceOffsets[uVar3].offset * 8);
            goto LAB_1044866d;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < pIVar2->interface_offsets_count);
      }
      pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath(pIVar5,pIVar1,0);
LAB_1044866d:
      iVar8 = (*pVVar6->methodPtr)(pIVar5,param_2._0_8_,param_2.___z_4,pVVar6->method);
      iVar8 = -iVar8;
      if (iVar8 == 0) {
        return uVar9;
      }
      iVar10 = uVar9 + 1;
      if (iVar8 < 0) {
        iVar10 = local_10;
        iVar4 = uVar9 - 1;
      }
      local_10 = iVar10;
    } while (iVar10 <= iVar4);
  }
  uVar7 = uVar9 + 1;
  if (iVar8 < 1) {
    uVar7 = uVar9;
  }
  return ~uVar7;
}
