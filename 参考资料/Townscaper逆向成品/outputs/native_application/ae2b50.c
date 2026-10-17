// RVA 0xae2b50 | Os.Utils.UnityFunctions$$GetNewObject<Corner>
// PDB: UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
// Body: [[10ae2b50, 10ae2bc1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 10a3dd50 GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

Il2CppObject * __cdecl
UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_1,MethodInfo *param_2)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Il2CppObject *pIVar3;

  if (DAT_11520e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    DAT_11520e40 = '\x01';
  }
  pGVar1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)
           il2cpp_codegen_object_new
                     (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
  GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    pTVar2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
                (pTVar2,param_1,false,(MethodInfo *)0x0);
      pIVar3 = (Il2CppObject *)
               (*(code *)**(undefined4 **)(param_2->field6_0x18).methodMetadataHandle)
                         (pGVar1,*(undefined4 **)(param_2->field6_0x18).methodMetadataHandle);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
