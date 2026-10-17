// RVA 0x44a7f0 | Os.Utils.ListPoolExtension$$Pop<object>
// PDB: ListPoolExtension_Pop_TisRuntimeObject_mB00E28DF3C7E6BFDF2D978C39087EB7DC266A64E_gshared
// Body: [[1044a7f0, 1044a82d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Il2CppObject * __cdecl
ListPoolExtension_Pop_TisRuntimeObject_mB00E28DF3C7E6BFDF2D978C39087EB7DC266A64E_gshared
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *param_1,int param_2,MethodInfo *param_3
          )

{
  Il2CppObject *pIVar1;

  if (param_1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pIVar1 = (Il2CppObject *)
             (*(code *)**(undefined4 **)(param_3->field6_0x18).methodMetadataHandle)
                       (param_1,param_2,*(undefined4 **)(param_3->field6_0x18).methodMetadataHandle)
    ;
    (*((param_3->field6_0x18).rgctx_data[1].method)->methodPointer)
              (param_1,param_2,(param_3->field6_0x18).rgctx_data[1].method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
