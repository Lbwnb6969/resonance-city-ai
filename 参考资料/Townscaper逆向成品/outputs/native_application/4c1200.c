// RVA 0x4c1200 | CustomCameraProjection$$.ctor
// PDB: CustomCameraProjection__ctor_m50734BC919132B94419F8F02AB8D8AD9FEB99246
// Body: [[104c1200, 104c1241]]
// Direct callees:
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596

void __cdecl
CustomCameraProjection__ctor_m50734BC919132B94419F8F02AB8D8AD9FEB99246
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
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_44;

  pMVar16 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                      (&local_44,(MethodInfo *)0x0);
  fVar1 = pMVar16->___m10_1;
  fVar2 = pMVar16->___m20_2;
  fVar3 = pMVar16->___m30_3;
  fVar4 = pMVar16->___m01_4;
  fVar5 = pMVar16->___m11_5;
  fVar6 = pMVar16->___m21_6;
  fVar7 = pMVar16->___m31_7;
  fVar8 = pMVar16->___m02_8;
  fVar9 = pMVar16->___m12_9;
  fVar10 = pMVar16->___m22_10;
  fVar11 = pMVar16->___m32_11;
  fVar12 = pMVar16->___m03_12;
  fVar13 = pMVar16->___m13_13;
  fVar14 = pMVar16->___m23_14;
  fVar15 = pMVar16->___m33_15;
  (param_1->___originalProjection_4).___m00_0 = pMVar16->___m00_0;
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
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
