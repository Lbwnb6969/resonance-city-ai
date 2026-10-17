// RVA 0x3e8070 | Os.Utils.UnityFunctions$$GetNewGameObject
// PDB: UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// Body: [[103e8070, 103e80d5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f010 Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A
// 10a3dd50 GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34

GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __cdecl
UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
          (String_t *param_1,Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,
          MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;

  if (DAT_1151c8c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    DAT_1151c8c3 = '\x01';
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
                (pTVar2,param_2,false,(MethodInfo *)0x0);
      return pGVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
