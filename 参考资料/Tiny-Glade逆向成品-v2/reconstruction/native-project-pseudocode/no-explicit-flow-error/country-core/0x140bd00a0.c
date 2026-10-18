// VA 0x140bd00a0, PDB extent 1307 bytes
// country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::get_closest_point_u_to_cursor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::get_closest_point_u_to_cursor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
   Extent: 1307 */

float * pdb_140bd00a0(float *param_1,float param_2,undefined8 param_3,longlong param_4,
                     float *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack_194;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float *pfStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  fStack_184 = (float)((ulonglong)param_3 >> 0x20);
  fStack_188 = (float)param_3;
  uVar5 = *(ulonglong *)(param_4 + 0x10);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143064380,0x2a,&UNK_1430643b0);
  }
  uVar4 = *(ulonglong *)(param_4 + 0x28);
  uVar7 = uVar5;
  if (uVar4 < uVar5) {
    uVar7 = uVar4;
  }
  uVar5 = uVar5 - 1;
  uVar4 = (uVar4 - 1) + (ulonglong)(uVar4 == 0);
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if (uVar5 == 0) {
    fStack_18c = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar1 = param_5[5];
    fVar2 = *param_5;
    lVar3 = *(longlong *)(param_4 + 0x20);
    fVar25 = _DAT_142e36f28 * param_6;
    param_6 = param_6 * 0.0;
    uStack_e8 = *(undefined8 *)param_5;
    uStack_e0 = *(undefined8 *)(param_5 + 2);
    uStack_f8 = *(undefined8 *)(param_5 + 4);
    uStack_f0 = *(undefined8 *)(param_5 + 6);
    uStack_108 = *(undefined8 *)(param_5 + 8);
    uStack_100 = *(undefined8 *)(param_5 + 10);
    uStack_118 = *(undefined8 *)(param_5 + 0xc);
    uStack_110 = *(undefined8 *)(param_5 + 0xe);
    uStack_128 = *(undefined8 *)(param_5 + 0x20);
    uStack_120 = *(undefined8 *)(param_5 + 0x22);
    uStack_138 = *(undefined8 *)(param_5 + 0x24);
    uStack_130 = *(undefined8 *)(param_5 + 0x26);
    uStack_148 = *(undefined8 *)(param_5 + 0x28);
    uStack_140 = *(undefined8 *)(param_5 + 0x2a);
    uStack_158 = *(undefined8 *)(param_5 + 0x2c);
    uStack_150 = *(undefined8 *)(param_5 + 0x2e);
    uStack_168 = CONCAT44(param_6,param_6);
    uStack_160 = 0;
    puVar8 = (undefined8 *)(*(longlong *)(param_4 + 8) + 0x10);
    fStack_18c = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fStack_194 = _DAT_142e36f3c;
    uVar6 = 0;
    fStack_184 = param_2;
    do {
      fVar24 = _DAT_142e36f28;
      if ((uVar7 == uVar6) || (uVar4 == uVar6)) break;
      fVar21 = *(float *)((longlong)puVar8 + -4) + (float)uStack_168;
      fVar22 = *(float *)(puVar8 + -2) + uStack_168._4_4_;
      fVar28 = (float)*(undefined8 *)((longlong)puVar8 + -0xc) + fVar25;
      fVar29 = (float)((ulonglong)*(undefined8 *)((longlong)puVar8 + -0xc) >> 0x20) + param_6;
      fVar26 = (float)*puVar8 + fVar25;
      fVar27 = (float)((ulonglong)*puVar8 >> 0x20) + param_6;
      fVar12 = fVar29 * (float)uStack_148 + fVar28 * (float)uStack_138 + fVar22 * (float)uStack_128
               + (float)uStack_158;
      fVar13 = fVar29 * uStack_148._4_4_ + fVar28 * uStack_138._4_4_ + fVar22 * uStack_128._4_4_ +
               uStack_158._4_4_;
      fVar14 = fVar29 * (float)uStack_140 + fVar28 * (float)uStack_130 + fVar22 * (float)uStack_120
               + (float)uStack_150;
      fVar15 = fVar14 * uStack_100._4_4_ + fVar13 * uStack_f0._4_4_ + fVar12 * uStack_e0._4_4_ +
               uStack_110._4_4_;
      fVar17 = fVar27 * (float)uStack_148 + fVar26 * (float)uStack_138 + fVar21 * (float)uStack_128
               + (float)uStack_158;
      fVar18 = fVar27 * uStack_148._4_4_ + fVar26 * uStack_138._4_4_ + fVar21 * uStack_128._4_4_ +
               uStack_158._4_4_;
      fVar19 = fVar27 * (float)uStack_140 + fVar26 * (float)uStack_130 + fVar21 * (float)uStack_120
               + (float)uStack_150;
      fVar20 = fVar19 * uStack_100._4_4_ + fVar18 * uStack_f0._4_4_ + fVar17 * uStack_e0._4_4_ +
               uStack_110._4_4_;
      fVar16 = (fVar14 * uStack_108._4_4_ + fVar13 * uStack_f8._4_4_ + fVar12 * uStack_e8._4_4_ +
               uStack_118._4_4_) / fVar15;
      fVar13 = ((fVar14 * (float)uStack_108 + fVar13 * (float)uStack_f8 + fVar12 * (float)uStack_e8
                + (float)uStack_118) / fVar15) * (fVar1 / fVar2);
      fVar23 = (fVar19 * uStack_108._4_4_ + fVar18 * uStack_f8._4_4_ + fVar17 * uStack_e8._4_4_ +
               uStack_118._4_4_) / fVar20;
      fVar14 = ((fVar19 * (float)uStack_108 + fVar18 * (float)uStack_f8 + fVar17 * (float)uStack_e8
                + (float)uStack_118) / fVar20) * (fVar1 / fVar2);
      fVar17 = fVar23 - fVar16;
      fVar18 = fVar14 - fVar13;
      fVar12 = fVar18 * fVar18 + fVar17 * fVar17;
      if (fVar12 <= _DAT_143006dc0) {
        fVar12 = _DAT_143006dc0;
      }
      fVar12 = ((fStack_184 - fVar13) * fVar18 + (fStack_188 - fVar16) * fVar17) / fVar12;
      fVar17 = 0.0;
      if (0.0 <= fVar12) {
        fVar17 = fVar12;
      }
      fVar12 = _DAT_142e36f28;
      if (fVar17 <= _DAT_142e36f28) {
        fVar12 = fVar17;
      }
      fVar16 = (fVar12 * fVar23 + (_DAT_142e36f28 - fVar12) * fVar16) - fStack_188;
      fVar13 = (fVar12 * fVar14 + fVar13 * (_DAT_142e36f28 - fVar12)) - fStack_184;
      fVar13 = SQRT(fVar13 * fVar13 + fVar16 * fVar16);
      if (fVar13 < fStack_194) {
        fVar20 = _DAT_142e36f28 / fVar20;
        fVar10 = (float)pdb_140de9fd0(0.0 / fVar15,fVar20,fVar12);
        fVar9 = (float)pdb_140de9fd0(fVar24 / fVar15,fVar20,fVar12);
        if (fVar9 <= _DAT_14304ab40) {
          fVar9 = _DAT_14304ab40;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar10 / fVar9) {
          fVar11 = fVar10 / fVar9;
        }
        fVar9 = fVar24;
        if (fVar11 <= fVar24) {
          fVar9 = fVar11;
        }
        fVar24 = fVar24 - fVar9;
        fStack_18c = (float)pdb_140de9fd0(*(undefined4 *)(lVar3 + uVar6 * 4),
                                          *(undefined4 *)(lVar3 + 4 + uVar6 * 4),fVar9);
        fVar10 = fVar26 * fVar9 + fVar28 * fVar24;
        fVar11 = fVar27 * fVar9 + fVar29 * fVar24;
        fVar9 = fVar22 * fVar24 + fVar21 * fVar9;
        fStack_194 = fVar13;
      }
      uVar6 = uVar6 + 1;
      puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    } while (uVar5 != uVar6);
  }
  if ((0.0 <= fStack_18c) && (fStack_18c <= _DAT_142e36f28)) {
    *param_1 = fStack_18c;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    param_1[3] = fVar11;
    return param_1;
  }
  pfStack_178 = &fStack_18c;
  pcStack_170 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14335ec38,&pfStack_178,&UNK_143064368);
}

