// RVA 0x4c1130 | CustomCameraProjection$$Start
// PDB: CustomCameraProjection_Start_mB2EB926A16D170CE8158209C5BF1D1E4437E3BF0
// Body: [[104c1130, 104c11a4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a386a0 Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756

void __cdecl
CustomCameraProjection_Start_mB2EB926A16D170CE8158209C5BF1D1E4437E3BF0
          (CustomCameraProjection_tEE1F15F4CB60A0D6D5BCD045D79271E2974B4158 *param_1,
          MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar17;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_44;

  if (DAT_1151d10e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var
              );
    DAT_1151d10e = '\x01';
  }
  pCVar16 = (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)
            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var
                      );
  param_1->___cam_5 = pCVar16;
  if (pCVar16 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
    pMVar17 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756
                        (&local_44,pCVar16,(MethodInfo *)0x0);
    fVar1 = pMVar17->___m10_1;
    fVar2 = pMVar17->___m20_2;
    fVar3 = pMVar17->___m30_3;
    fVar4 = pMVar17->___m01_4;
    fVar5 = pMVar17->___m11_5;
    fVar6 = pMVar17->___m21_6;
    fVar7 = pMVar17->___m31_7;
    fVar8 = pMVar17->___m02_8;
    fVar9 = pMVar17->___m12_9;
    fVar10 = pMVar17->___m22_10;
    fVar11 = pMVar17->___m32_11;
    fVar12 = pMVar17->___m03_12;
    fVar13 = pMVar17->___m13_13;
    fVar14 = pMVar17->___m23_14;
    fVar15 = pMVar17->___m33_15;
    (param_1->___originalProjection_4).___m00_0 = pMVar17->___m00_0;
    (param_1->___originalProjection_4).___m10_1 = fVar1;
    (param_1->___originalProjection_4).___m20_2 = fVar2;
    (param_1->___originalProjection_4).___m30_3 = fVar3;
    (param_1->___originalProjection_4).___m01_4 = fVar4;
    (param_1->___originalProjection_4).___m11_5 = fVar5;
    (param_1->___originalProjection_4).___m21_6 = fVar6;
    (param_1->___originalProjection_4).___m31_7 = fVar7;
    (param_1->___originalProjection_4).___m02_8 = fVar8;
    (param_1->___originalProjection_4).___m12_9 = fVar9;
    (param_1->___originalProjection_4).___m22_10 = fVar10;
    (param_1->___originalProjection_4).___m32_11 = fVar11;
    (param_1->___originalProjection_4).___m03_12 = fVar12;
    (param_1->___originalProjection_4).___m13_13 = fVar13;
    (param_1->___originalProjection_4).___m23_14 = fVar14;
    (param_1->___originalProjection_4).___m33_15 = fVar15;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
