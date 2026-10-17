// RVA 0x44a750 | Os.Utils.ListPoolExtension$$GetListOfComponentsInChildren<object>
// PDB: ListPoolExtension_GetListOfComponentsInChildren_TisRuntimeObject_mBB12FAEAD9A5AA310C87AF2CFC259AC8E2187DC6_gshared
// Body: [[1044a750, 1044a7ea]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __cdecl
ListPoolExtension_GetListOfComponentsInChildren_TisRuntimeObject_mBB12FAEAD9A5AA310C87AF2CFC259AC8E2187DC6_gshared
          (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;

  pIVar1 = (param_2->field6_0x18).rgctx_data[1].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = (param_2->field6_0x18).rgctx_data[1].klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = (param_2->field6_0x18).rgctx_data[1].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      il2cpp_runtime_class_init(pIVar1);
    }
  }
  pLVar2 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
           (*(code *)**(undefined4 **)(param_2->field6_0x18).methodMetadataHandle)
                     (*(undefined4 **)(param_2->field6_0x18).methodMetadataHandle);
  if (param_1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    (*((param_2->field6_0x18).rgctx_data[2].method)->methodPointer)
              (param_1,1,pLVar2,(param_2->field6_0x18).rgctx_data[2].method);
    return pLVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
