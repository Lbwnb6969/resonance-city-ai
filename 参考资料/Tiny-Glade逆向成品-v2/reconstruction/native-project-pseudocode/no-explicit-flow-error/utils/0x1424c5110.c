// VA 0x1424c5110, PDB extent 1081 bytes
// utils::geometry::triangle_triangle::triangles_intersect::triangles_intersect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/triangle_triangle/triangles_intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::triangle_triangle::triangles_intersect::triangles_intersect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/triangle_triangle/triangles_intersect.rs
   Extent: 1081 */

uint * pdb_1424c5110(uint *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  uint uStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  
  fVar9 = _DAT_14304ab40;
  uVar8 = _UNK_142e4e65c;
  uVar7 = _DAT_142e36f28;
  fStack_128 = *param_2;
  fStack_124 = param_2[1];
  fVar15 = (float)*(undefined8 *)(param_2 + 1);
  fStack_120 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_2 + 4);
  fVar23 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_2 + 7);
  fVar21 = (float)((ulonglong)*(undefined8 *)(param_2 + 7) >> 0x20);
  fVar13 = param_2[3];
  fVar2 = param_2[6];
  fVar14 = fVar15 - fVar20;
  fVar15 = fVar15 - fVar22;
  fVar16 = fStack_120 - fVar21;
  fVar17 = fStack_120 - fVar23;
  if (_DAT_14304ab40 <= (float)((uint)(fVar15 * fVar16 - fVar14 * fVar17) & _DAT_142e377e0)) {
LAB_1424c521e:
    uVar5 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)param_3;
    uStack_158 = *(undefined8 *)param_3;
    pfVar1 = param_3 + 3;
    uVar6 = *(undefined8 *)pfVar1;
    uVar4 = *(undefined8 *)pfVar1;
    uStack_148 = *(undefined8 *)pfVar1;
    fVar15 = param_3[6];
    fVar18 = (float)*(undefined8 *)(param_3 + 1);
    fVar14 = (float)*(undefined8 *)(param_3 + 7);
    fVar16 = (float)((ulonglong)*(undefined8 *)(param_3 + 7) >> 0x20);
    fVar17 = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    fVar24 = fVar18 - fVar14;
    fVar18 = fVar18 - (float)*(undefined8 *)(param_3 + 4);
    fVar19 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
    if ((float)((uint)(fVar18 * (fVar19 - fVar16) - fVar24 * (fVar19 - fVar17)) & _DAT_142e377e0) <
        _DAT_14304ab40) {
      fVar25 = *param_3 - *pfVar1;
      fVar26 = *param_3 - fVar15;
      if (((float)((uint)((fVar19 - fVar17) * fVar26 - (fVar19 - fVar16) * fVar25) & _DAT_142e377e0)
           < _DAT_14304ab40) &&
         ((float)((uint)(fVar24 * fVar25 - fVar18 * fVar26) & _DAT_142e377e0) < _DAT_14304ab40))
      goto LAB_1424c52cd;
    }
    _fStack_150 = CONCAT44(_UNK_142e4e65c,fVar19);
    fStack_13c = (float)_DAT_142e36f28;
    uStack_12c = _DAT_142e36f28;
    uStack_11c = _UNK_142e4e65c;
    fStack_140 = fVar17;
    fStack_138 = fVar15;
    fStack_134 = fVar14;
    fStack_130 = fVar16;
    fVar24 = (float)pdb_141c6c7e0(&uStack_158);
    fVar18 = _DAT_143510d30;
    uVar12 = (uint)(fVar9 < fVar24);
    if (fVar24 < _DAT_143510d30) {
      uVar12 = 0xffffffff;
    }
    _fStack_150 = CONCAT44(uVar8,fVar19);
    fStack_13c = (float)uVar7;
    uStack_12c = uVar7;
    uStack_11c = uVar7;
    uStack_158 = uVar3;
    uStack_148 = uVar4;
    fStack_140 = fVar17;
    fStack_138 = fVar15;
    fStack_134 = fVar14;
    fStack_130 = fVar16;
    fStack_128 = fVar13;
    fStack_124 = fVar22;
    fStack_120 = fVar23;
    fVar13 = (float)pdb_141c6c7e0(&uStack_158);
    uVar11 = (uint)(fVar9 < fVar13);
    if (fVar13 < fVar18) {
      uVar11 = 0xffffffff;
    }
    _fStack_150 = CONCAT44(uVar8,fVar19);
    fStack_13c = (float)uVar7;
    uStack_12c = uVar7;
    uStack_11c = uVar7;
    uStack_158 = uVar5;
    uStack_148 = uVar6;
    fStack_140 = fVar17;
    fStack_138 = fVar15;
    fStack_134 = fVar14;
    fStack_130 = fVar16;
    fStack_128 = fVar2;
    fStack_124 = fVar20;
    fStack_120 = fVar21;
    fVar13 = (float)pdb_141c6c7e0(&uStack_158);
    uVar10 = (uint)(fVar9 < fVar13);
    if (fVar13 < fVar18) {
      uVar10 = 0xffffffff;
    }
    if (uVar12 == uVar10 && uVar12 == uVar11) {
      if (uVar12 == 0) {
        *param_1 = 2;
        return param_1;
      }
    }
    else {
      fStack_f8 = param_2[8];
      uStack_118 = *(undefined8 *)param_2;
      uStack_110 = *(undefined8 *)(param_2 + 2);
      uStack_108 = *(undefined8 *)(param_2 + 4);
      uStack_100 = *(undefined8 *)(param_2 + 6);
      fStack_138 = param_3[8];
      uStack_158 = *(undefined8 *)param_3;
      fStack_150 = param_3[2];
      fStack_14c = param_3[3];
      uStack_148 = *(undefined8 *)(param_3 + 4);
      fStack_140 = param_3[6];
      fStack_13c = param_3[7];
      pdb_142a43010(&iStack_f4,&uStack_118,&uStack_158,uVar12,uVar11,uVar10);
      if (iStack_f4 != 2) {
        if (iStack_f4 == 1) {
          uStack_148 = uStack_e0;
          fStack_14c = fStack_e4;
        }
        *param_1 = (uint)(iStack_f4 == 1);
        *(undefined8 *)(param_1 + 1) = uStack_f0;
        param_1[3] = uStack_e8;
        param_1[4] = (uint)fStack_14c;
        *(undefined8 *)(param_1 + 5) = uStack_148;
        return param_1;
      }
    }
    *param_1 = 3;
  }
  else {
    fVar18 = *param_2 - fVar13;
    fVar19 = *param_2 - fVar2;
    if ((_DAT_14304ab40 <= (float)((uint)(fVar17 * fVar19 - fVar16 * fVar18) & _DAT_142e377e0)) ||
       (_DAT_14304ab40 <= (float)((uint)(fVar14 * fVar18 - fVar15 * fVar19) & _DAT_142e377e0)))
    goto LAB_1424c521e;
LAB_1424c52cd:
    *param_1 = 3;
  }
  return param_1;
}

