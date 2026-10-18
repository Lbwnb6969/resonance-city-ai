// VA 0x140081a10, PDB extent 1576 bytes
// utils::curve::Curve::smooth<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::smooth<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1576 */

longlong * pdb_140081a10(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 *puStack_148;
  longlong lStack_140;
  float *pfStack_138;
  undefined8 *puStack_130;
  longlong *plStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  longlong *plStack_100;
  float afStack_f4 [45];
  
  afStack_f4[1] = -NAN;
  afStack_f4[2] = -NAN;
  puVar7 = (undefined8 *)param_2[1];
  uVar8 = param_2[2];
  if (2 < uVar8 && param_3 != 0) {
    fVar18 = (float)*puVar7;
    fVar20 = (float)((ulonglong)*puVar7 >> 0x20);
    fVar19 = *(float *)(puVar7 + 1);
    uVar1 = uVar8 - 2;
    uVar12 = uVar1 & 0xfffffffffffffffc;
    lVar16 = 0;
    fVar21 = _DAT_142e36f50;
    uVar22 = _DAT_142e36f60;
    fVar27 = _DAT_142e36f40;
    fVar28 = _UNK_142e36f44;
    fVar29 = _UNK_142e36f48;
    fVar30 = _UNK_142e36f4c;
    do {
      uVar24 = *(undefined8 *)((longlong)puVar7 + 0xc);
      fVar31 = (float)uVar24;
      fVar32 = (float)((ulonglong)uVar24 >> 0x20);
      fVar26 = *(float *)((longlong)puVar7 + 0x14);
      lVar14 = 1;
      pfVar15 = (float *)((longlong)puVar7 + 0x44);
      uVar17 = uVar12;
      fVar23 = fVar26;
      fVar33 = fVar18;
      fVar34 = fVar20;
      fVar35 = fVar19;
      fVar38 = fVar20;
      fVar40 = fVar31;
      fVar42 = fVar18;
      fVar46 = fVar19;
      if (uVar1 < 4) {
LAB_140081d20:
        lVar13 = (uVar8 - 1) - lVar14;
        pfVar15 = (float *)((longlong)puVar7 + lVar14 * 0xc + 0x14);
        do {
          fVar42 = fVar32;
          fVar40 = fVar31;
          fVar38 = fVar26;
          fVar26 = *pfVar15;
          fVar31 = (float)*(undefined8 *)(pfVar15 + -2);
          fVar32 = (float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
          fVar23 = (float)((ulonglong)uVar22 >> 0x20);
          *(ulonglong *)(pfVar15 + -5) =
               CONCAT44(((fVar34 + fVar32) * fVar23 - fVar42) * fVar23 + fVar42,
                        ((fVar33 + fVar31) * (float)uVar22 - fVar40) * (float)uVar22 + fVar40);
          pfVar15[-3] = ((fVar35 + fVar26) * fVar21 - fVar38) * fVar21 + fVar38;
          pfVar15 = pfVar15 + 3;
          lVar13 = lVar13 + -1;
          fVar33 = fVar40;
          fVar34 = fVar42;
          fVar35 = fVar38;
        } while (lVar13 != 0);
      }
      else {
        do {
          fVar21 = pfVar15[-0xb];
          fVar2 = pfVar15[-10];
          fVar3 = pfVar15[-9];
          fVar4 = pfVar15[-8];
          fVar33 = (float)*(undefined8 *)(pfVar15 + -5);
          fVar34 = (float)((ulonglong)*(undefined8 *)(pfVar15 + -5) >> 0x20);
          fVar31 = (float)*(undefined8 *)(pfVar15 + -2);
          fVar32 = (float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
          fVar5 = pfVar15[-7];
          fVar25 = (float)((ulonglong)uVar24 >> 0x20);
          fVar35 = pfVar15[-3];
          fVar26 = *pfVar15;
          fVar6 = pfVar15[-6];
          fVar41 = ((fVar21 + fVar33) * fVar29 - fVar4) * fVar29;
          fVar43 = ((fVar4 + fVar31) * fVar30 - fVar33) * fVar30;
          fVar36 = ((fVar25 + fVar5) * fVar28 - fVar2) * fVar28;
          fVar37 = ((fVar2 + fVar34) * fVar29 - fVar5) * fVar29;
          fVar39 = ((fVar5 + fVar32) * fVar30 - fVar34) * fVar30;
          fVar44 = ((fVar23 + fVar6) * fVar28 - fVar3) * fVar28;
          fVar45 = ((fVar3 + fVar35) * fVar29 - fVar6) * fVar29;
          fVar47 = ((fVar6 + fVar26) * fVar30 - fVar35) * fVar30;
          pfVar15[-0xe] = ((fVar42 + fVar21) * fVar27 - fVar40) * fVar27 + fVar40;
          pfVar15[-0xd] = ((fVar38 + fVar2) * fVar27 - fVar25) * fVar27 + fVar25;
          pfVar15[-0xc] = ((fVar46 + fVar3) * fVar27 - fVar23) * fVar27 + fVar23;
          pfVar15[-0xb] = ((fVar40 + fVar4) * fVar28 - fVar21) * fVar28 + fVar21;
          fVar30 = _UNK_142e36f4c;
          fVar29 = _UNK_142e36f48;
          fVar28 = _UNK_142e36f44;
          fVar27 = _DAT_142e36f40;
          pfVar15[-10] = fVar36 + fVar2;
          pfVar15[-9] = fVar44 + fVar3;
          pfVar15[-8] = fVar41 + fVar4;
          pfVar15[-7] = fVar37 + fVar5;
          pfVar15[-6] = fVar45 + fVar6;
          pfVar15[-5] = fVar43 + fVar33;
          pfVar15[-4] = fVar39 + fVar34;
          pfVar15[-3] = fVar47 + fVar35;
          uVar24 = CONCAT44(fVar32,fVar34);
          uVar17 = uVar17 - 4;
          pfVar15 = pfVar15 + 0xc;
          fVar23 = fVar26;
          fVar38 = fVar34;
          fVar40 = fVar31;
          fVar42 = fVar33;
          fVar46 = fVar35;
        } while (uVar17 != 0);
        lVar14 = uVar12 + 1;
        fVar21 = _DAT_142e36f50;
        uVar22 = _DAT_142e36f60;
        if (uVar1 != uVar12) goto LAB_140081d20;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != param_3);
  }
  param_2[5] = 0;
  if (uVar8 < 2) {
    uVar11 = 0;
  }
  else {
    afStack_f4[0] = 0.0;
    uStack_108 = *(undefined4 *)(puVar7 + 1);
    uStack_110 = *puVar7;
    param_2[5] = 0;
    plStack_100 = param_2;
    if ((ulonglong)param_2[3] < uVar8) {
      pdb_142d7f1b0(param_2 + 3,0,uVar8,4,4);
      lStack_120 = param_2[5];
    }
    else {
      lStack_120 = 0;
    }
    lStack_140 = (longlong)puVar7 + uVar8 * 0xc;
    lStack_118 = plStack_100[4];
    pfStack_138 = afStack_f4;
    puStack_130 = &uStack_110;
    puStack_148 = puVar7;
    plStack_128 = param_2 + 5;
    pdb_140566590(&puStack_148);
    if ((afStack_f4[0] != 0.0) || (NAN(afStack_f4[0]))) {
      lVar16 = plStack_100[4];
      lVar14 = plStack_100[5];
      lVar13 = 0;
      do {
        if (lVar14 << 2 == lVar13) {
          *(float *)(plStack_100 + 6) = afStack_f4[0];
          lVar16 = *plStack_100;
          lVar14 = plStack_100[1];
          lVar13 = plStack_100[2];
          lVar9 = plStack_100[3];
          lVar10 = plStack_100[5];
          param_1[4] = plStack_100[4];
          param_1[5] = lVar10;
          param_1[2] = lVar13;
          param_1[3] = lVar9;
          *param_1 = lVar16;
          param_1[1] = lVar14;
          param_1[6] = plStack_100[6];
          return param_1;
        }
        fVar19 = *(float *)(lVar16 + lVar13) / afStack_f4[0];
        *(float *)(lVar16 + lVar13) = fVar19;
        lVar13 = lVar13 + 4;
      } while ((uint)ABS(fVar19) < 0x7f800000);
    }
    uVar11 = 1;
    param_2 = plStack_100;
  }
  *(undefined1 *)(param_1 + 1) = uVar11;
  *(char *)((longlong)param_1 + 9) = (char)uVar8;
  *param_1 = -0x8000000000000000;
  if (*param_2 != 0) {
    pub_1406abac0((byte *)param_2[1],*param_2 * 0xc,4);
  }
  if (param_2[3] != 0) {
    pub_1406abac0((byte *)param_2[4],param_2[3] << 2,4);
  }
  return param_1;
}

