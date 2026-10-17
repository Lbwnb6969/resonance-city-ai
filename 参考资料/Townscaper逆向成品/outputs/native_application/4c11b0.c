// RVA 0x4c11b0 | CustomCameraProjection$$Update
// PDB: CustomCameraProjection_Update_m1EF9587F31C2AB2278A4E210A7ED45FEB7B648BC
// Body: [[104c11b0, 104c11f2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a389a0 Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328

void __cdecl
CustomCameraProjection_Update_m1EF9587F31C2AB2278A4E210A7ED45FEB7B648BC
          (CustomCameraProjection_tEE1F15F4CB60A0D6D5BCD045D79271E2974B4158 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___cam_5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
    Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328
              (param_1->___cam_5,param_1->___originalProjection_4,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
