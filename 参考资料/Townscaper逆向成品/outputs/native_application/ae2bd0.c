// RVA 0xae2bd0 | Os.Utils.UnityFunctions$$GetNewObject<GridBit>
// PDB: UnityFunctions_GetNewObject_TisRuntimeObject_mF6287B466848CE5E7246924AF19C33B95A129F4B_gshared
// Body: [[10ae2bd0, 10ae2c00]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683

Il2CppObject * __cdecl
UnityFunctions_GetNewObject_TisRuntimeObject_mF6287B466848CE5E7246924AF19C33B95A129F4B_gshared
          (String_t *param_1,Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,
          MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  Il2CppObject *pIVar2;

  pGVar1 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                     (param_1,param_2,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    pIVar2 = (Il2CppObject *)
             (*(code *)**(undefined4 **)(param_3->field6_0x18).methodMetadataHandle)
                       (pGVar1,*(undefined4 **)(param_3->field6_0x18).methodMetadataHandle);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
