// RVA 0x872c20 | Placemaker.AoBaker$$Restore
// PDB: AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0
// Body: [[10872c20, 10872cca]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 106684d0 Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
// 10a389d0 Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
// 10a432d0 Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF

void __cdecl
AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  if (DAT_1151f591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral29EA505FC8E2DAFAB6685CD7599BB17A7DE3E0AD);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral431BECC49665718FC3C3557B91A4E7B75914594C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
    DAT_1151f591 = '\x01';
  }
  if (param_1->___material_10 != (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)0x0) {
    Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF
              (param_1->___material_10,_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21,
               (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
               param_1->___coloredMarchingSquaresTex_16,(MethodInfo *)0x0);
    if (param_1->___stackMaterial_13 != (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)0x0) {
      Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF
                (param_1->___stackMaterial_13,_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21
                 ,(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                  param_1->___coloredMarchingSquaresTex_16,(MethodInfo *)0x0);
      Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                (_stringLiteral431BECC49665718FC3C3557B91A4E7B75914594C,
                 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___renderTexture0_14,
                 (MethodInfo *)0x0);
      Shader_SetGlobalTexture_m0566B97B8028F374E445F7CC59DBFDD74911FCA4
                (_stringLiteral29EA505FC8E2DAFAB6685CD7599BB17A7DE3E0AD,
                 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___renderTexture1_15,
                 (MethodInfo *)0x0);
      if (param_1->___cam_23 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
        Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
                  (param_1->___cam_23,param_1->___renderTexture0_14,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
