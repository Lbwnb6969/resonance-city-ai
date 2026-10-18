// VA 0x140df1e90, PDB extent 757 bytes
// utils::geometry::rectangle::Rectangle2d::intersects_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::intersects_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 757 */

undefined8 pdb_140df1e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
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
  float fVar16;
  int iStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  int iStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  
  fVar8 = *(float *)(param_1 + 2);
  fVar3 = *(float *)((longlong)param_1 + 0x14);
  if (fVar8 * fVar3 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffa40);
  }
  fVar5 = (float)*param_1;
  fVar7 = (float)((ulonglong)*param_1 >> 0x20);
  fVar6 = (float)(_UNK_142e37824 ^ (uint)fVar7);
  fVar13 = fVar8 * _DAT_142e36f38;
  fVar4 = _DAT_142e36f38 * fVar3;
  fVar3 = fVar3 * _DAT_142e36f50;
  fVar8 = fVar8 * _DAT_142e36f50;
  uStack_128 = 0;
  uStack_120 = 4;
  uVar1 = param_1[1];
  fVar9 = (float)uVar1;
  fVar10 = (float)((ulonglong)uVar1 >> 0x20);
  uVar1 = param_1[1];
  fVar11 = (float)uVar1;
  fVar12 = (float)((ulonglong)uVar1 >> 0x20);
  fVar14 = fVar4 * fVar6 + fVar13 * fVar5 + fVar9;
  fVar15 = fVar4 * fVar5 + fVar13 * fVar7 + fVar10;
  fVar16 = fVar3 * fVar6 + fVar13 * fVar5 + fVar11;
  fVar13 = fVar3 * fVar5 + fVar13 * fVar7 + fVar12;
  fVar9 = fVar3 * fVar6 + fVar8 * fVar5 + fVar9;
  fVar10 = fVar3 * fVar5 + fVar8 * fVar7 + fVar10;
  fVar11 = fVar4 * fVar6 + fVar8 * fVar5 + fVar11;
  fVar12 = fVar4 * fVar5 + fVar8 * fVar7 + fVar12;
  iStack_158 = 0;
  fStack_154 = 0.0;
  fStack_150 = 0.0;
  fStack_14c = 0.0;
  fStack_118 = fVar14;
  fStack_114 = fVar15;
  fStack_110 = fVar16;
  fStack_10c = fVar13;
  fStack_108 = fVar9;
  fStack_104 = fVar10;
  fStack_100 = fVar11;
  fStack_fc = fVar12;
  pdb_141e3c090(&uStack_128,4,&iStack_158,4);
  uStack_d0 = uStack_138;
  uStack_cc = uStack_134;
  uStack_c8 = uStack_130;
  uStack_c4 = uStack_12c;
  fStack_e0 = fStack_148;
  uStack_dc = uStack_144;
  uStack_d8 = uStack_140;
  uStack_d4 = uStack_13c;
  iStack_f0 = iStack_158;
  fStack_ec = fStack_154;
  fStack_e8 = fStack_150;
  fStack_e4 = fStack_14c;
  uStack_f8 = 4;
  uStack_c0 = 0;
  uStack_b8 = 4;
  uStack_90 = 0;
  fStack_b0 = fVar14;
  fStack_ac = fVar15;
  fStack_a8 = fVar16;
  fStack_a4 = fVar13;
  fStack_a0 = fVar9;
  fStack_9c = fVar10;
  fStack_98 = fVar11;
  fStack_94 = fVar12;
  pdb_141e3c2c0(&iStack_158,&uStack_f8);
  fVar3 = _DAT_142f69450;
  uVar2 = _DAT_142e37820;
  fVar8 = _DAT_142e36f28;
  if (iStack_158 == 1) {
    uVar1 = *param_2;
    fVar9 = *(float *)(param_2 + 1);
    do {
      fVar11 = fStack_14c - fStack_154;
      fVar12 = fStack_148 - fStack_150;
      fVar10 = fVar12 * fVar12 + fVar11 * fVar11;
      if ((fVar10 != 0.0) || (NAN(fVar10))) {
        fVar5 = fStack_154 - (float)uVar1;
        fVar7 = fStack_150 - (float)((ulonglong)uVar1 >> 0x20);
        fVar11 = fVar12 * fVar7 + fVar11 * fVar5;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar11 * fVar11 +
                 fVar10 * fVar3 * ((fVar7 * fVar7 + fVar5 * fVar5) - fVar9 * fVar9);
        if (0.0 <= fVar12) {
          fVar12 = SQRT(fVar12);
          fVar5 = ((float)((uint)fVar11 ^ uVar2) - fVar12) / (fVar10 + fVar10);
          if ((0.0 <= fVar5) && (fVar5 <= fVar8)) {
            return 1;
          }
          fVar10 = (fVar12 - fVar11) / (fVar10 + fVar10);
          if ((0.0 <= fVar10) && (fVar10 <= fVar8)) {
            return 1;
          }
        }
      }
      pdb_141e3c2c0(&iStack_158,&uStack_f8);
    } while ((char)iStack_158 != '\0');
  }
  return 0;
}

