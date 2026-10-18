// VA 0x140df0290, PDB extent 794 bytes
// utils::geometry::rectangle::Rectangle2d::intersects
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::intersects
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 794 */

undefined8 pdb_140df0290(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float *pfStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  
  fVar8 = (float)param_1[2];
  fVar9 = (float)((ulonglong)param_1[2] >> 0x20);
  if (fVar9 * fVar9 + fVar8 * fVar8 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ff6ec,0x26,&UNK_1431ff738);
  }
  fVar11 = (float)param_2[1];
  fVar14 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar6 = (float)*param_2;
  fVar7 = (float)((ulonglong)*param_2 >> 0x20);
  fVar17 = (float)*param_1;
  fVar15 = (float)((ulonglong)*param_1 >> 0x20);
  fVar16 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar18 = (float)param_1[1];
  fVar10 = fVar17 * fVar17;
  fVar13 = (float)(_UNK_142e37824 ^ (uint)fVar15) * fVar15;
  auVar12._4_4_ = fVar10 - fVar13;
  auVar12._0_4_ = fVar10 - fVar13;
  auVar12._8_4_ = fVar10 - fVar13;
  auVar12._12_4_ = fVar10 - fVar13;
  auVar12 = divps(_DAT_14301bc40,auVar12);
  fVar10 = auVar12._0_4_ * fVar17;
  fVar13 = auVar12._4_4_ * fVar15;
  fVar15 = auVar12._8_4_ * (float)(_UNK_142e37824 ^ (uint)fVar15);
  fVar17 = auVar12._12_4_ * fVar17;
  fStack_108 = fVar7 * fVar15 + fVar6 * fVar10;
  fStack_104 = fVar7 * fVar17 + fVar6 * fVar13;
  fStack_100 = fVar6 * fVar15 + (float)((uint)fVar7 ^ _UNK_142e37828) * fVar10;
  fStack_fc = fVar6 * fVar17 + (float)((uint)fVar7 ^ _UNK_142e37828) * fVar13;
  uStack_f8 = CONCAT44((fVar17 * fVar14 + fVar13 * fVar11) - (fVar16 * fVar17 + fVar18 * fVar13),
                       (fVar15 * fVar14 + fVar10 * fVar11) - (fVar16 * fVar15 + fVar18 * fVar10));
  fVar16 = (float)((ulonglong)param_2[2] >> 0x20);
  fVar18 = (float)param_2[2];
  if (fVar16 * fVar18 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
  }
  fVar11 = fVar16 * _DAT_143057f30;
  fVar14 = fVar18 * _UNK_143057f34;
  fVar16 = fVar16 * _UNK_143057f38;
  fVar18 = fVar18 * _UNK_143057f3c;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  fStack_160 = 5.60519e-45;
  uStack_15c = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  fStack_158 = fVar14;
  fStack_154 = fVar11;
  fStack_150 = fVar14;
  fStack_14c = fVar16;
  fStack_148 = fVar18;
  fStack_144 = fVar16;
  fStack_140 = fVar18;
  fStack_13c = fVar11;
  uStack_170 = &fStack_108;
  pdb_141e3c090(&fStack_168,4,&uStack_138,4);
  uStack_b8 = uStack_118;
  uStack_b4 = uStack_114;
  uStack_b0 = uStack_110;
  uStack_ac = uStack_10c;
  uStack_c8 = uStack_128;
  uStack_c0 = uStack_120;
  uStack_d8 = uStack_138;
  uStack_d0 = uStack_130;
  uStack_e8 = 4;
  uStack_a0 = 0;
  uStack_98 = 4;
  uStack_70 = 0;
  pfStack_e0 = &fStack_108;
  pfStack_a8 = &fStack_108;
  fStack_90 = fVar14;
  fStack_8c = fVar11;
  fStack_88 = fVar14;
  fStack_84 = fVar16;
  fStack_80 = fVar18;
  fStack_7c = fVar16;
  fStack_78 = fVar18;
  fStack_74 = fVar11;
  pdb_141e3c130(&uStack_170,&uStack_e8);
  fVar18 = _DAT_142e36f28;
  if ((int)uStack_170 == 1) {
    fVar8 = fVar8 * _DAT_142e36f60;
    fVar9 = fVar9 * _UNK_142e36f64;
    fVar16 = _UNK_142e36f68 * 0.0;
    fVar11 = _UNK_142e36f6c * 0.0;
    pfVar1 = uStack_170;
    do {
      uStack_170._4_4_ = (float)((ulonglong)pfVar1 >> 0x20);
      auVar2._0_4_ = (fVar8 + 0.0) - uStack_170._4_4_;
      auVar2._4_4_ = (fVar9 + 0.0) - fStack_168;
      auVar2._8_4_ = (fVar16 + 0.0) - 0.0;
      auVar2._12_4_ = (fVar11 + 0.0) - 0.0;
      auVar3._4_4_ = fStack_160 - fStack_168;
      auVar3._0_4_ = fStack_164 - uStack_170._4_4_;
      auVar3._8_8_ = 0;
      auVar3 = divps(auVar2,auVar3);
      auVar4._0_4_ = (0.0 - fVar8) - uStack_170._4_4_;
      auVar4._4_4_ = (0.0 - fVar9) - fStack_168;
      auVar4._8_4_ = (0.0 - fVar16) - 0.0;
      auVar4._12_4_ = (0.0 - fVar11) - 0.0;
      auVar5._4_4_ = fStack_160 - fStack_168;
      auVar5._0_4_ = fStack_164 - uStack_170._4_4_;
      auVar5._8_8_ = 0;
      auVar5 = divps(auVar4,auVar5);
      auVar12 = minps(auVar3,auVar5);
      auVar3 = maxps(auVar3,auVar5);
      fVar14 = auVar12._0_4_;
      if (auVar12._0_4_ <= auVar12._4_4_) {
        fVar14 = auVar12._4_4_;
      }
      fVar6 = auVar3._0_4_;
      if (auVar3._4_4_ <= auVar3._0_4_) {
        fVar6 = auVar3._4_4_;
      }
      if ((fVar14 <= fVar6) && (0.0 <= fVar6)) {
        if (fVar6 <= fVar18) {
          return 1;
        }
        if (fVar14 <= fVar18 && 0.0 <= fVar14) {
          return 1;
        }
      }
      uStack_170 = pfVar1;
      pdb_141e3c130(&uStack_170,&uStack_e8);
      pfVar1 = uStack_170;
    } while ((char)uStack_170 != '\0');
  }
  return 0;
}

