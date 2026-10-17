// RVA 0x1e4c40 | Placemaker.WorldMeshes$$GetNewMeshFilter
// PDB: WorldMeshes_GetNewMeshFilter_mA3ACFC9303B5E62888D7BC2FE0814ACB989D2A32
// Body: [[101e4c40, 101e4cb0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8070 UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
// 10448940 GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared

MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __cdecl
WorldMeshes_GetNewMeshFilter_mA3ACFC9303B5E62888D7BC2FE0814ACB989D2A32
          (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar2;

  if (DAT_1151af2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
    DAT_1151af2e = '\x01';
  }
  pGVar1 = UnityFunctions_GetNewGameObject_m9D3CC434FDD0BEBD30C173F10A271F128DB06683
                     (_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821,param_2,
                      (MethodInfo *)0x0);
  if (pGVar1 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
    GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
              (pGVar1,
               GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var
              );
    pMVar2 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
             GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared
                       (pGVar1,
                        GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var
                       );
    return pMVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
