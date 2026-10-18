// VA 0x1424b61c0, PDB extent 1379 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_wooden_stringer_plank
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_wooden_stringer_plank
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 1379 */

void pdb_1424b61c0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong param_7,longlong *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  float fVar30;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar30 = *(float *)(param_7 + 0x28);
  fVar2 = *(float *)(param_6 + 1);
  fVar3 = *(float *)(param_7 + 0x1c);
  fVar20 = *(float *)(param_7 + 0x20);
  fVar4 = *(float *)(param_7 + 0x18);
  fVar18 = (float)*param_5;
  fStack_c8 = (float)*param_4;
  fStack_c4 = (float)*(undefined8 *)((longlong)param_4 + 4);
  fStack_bc = (float)((ulonglong)*(undefined8 *)((longlong)param_4 + 4) >> 0x20);
  auVar13._0_4_ = (float)((ulonglong)*param_5 >> 0x20) - (float)((ulonglong)*param_4 >> 0x20);
  auVar13._4_4_ = *(float *)(param_5 + 1) - fStack_bc;
  auVar13._8_4_ = fVar18 - fStack_c8;
  auVar13._12_4_ = fVar18 - fStack_c8;
  fVar27 = SQRT(auVar13._4_4_ * auVar13._4_4_ +
                auVar13._8_4_ * auVar13._8_4_ + auVar13._0_4_ * auVar13._0_4_);
  auVar14._4_4_ = fVar27;
  auVar14._0_4_ = fVar27;
  auVar14._8_4_ = fVar27;
  auVar14._12_4_ = fVar27;
  auVar14 = divps(auVar13,auVar14);
  fVar16 = auVar14._8_4_;
  fVar19 = (float)*param_6;
  fVar27 = auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar17 = (fVar30 * fVar27 + *(float *)((longlong)param_5 + 4)) - fStack_c4;
  fVar29 = (fVar15 * fVar30 + *(float *)(param_5 + 1)) - fStack_bc;
  fVar30 = (fVar16 * fVar30 + fVar18) - fStack_c8;
  fVar29 = SQRT(fVar30 * fVar30 + fVar17 * fVar17 + fVar29 * fVar29);
  fVar17 = fVar27 * (float)((ulonglong)*param_6 >> 0x20);
  fVar28 = fVar15 * fVar2 + fVar17 + fVar16 * fVar19;
  fVar30 = fVar28 * 0.0;
  fVar18 = fVar27 * fVar19 - fVar30;
  fVar17 = fVar17 - fVar28;
  fVar19 = fVar27 * fVar2 - fVar30;
  fVar25 = _DAT_142e36f28 / SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18);
  uVar7 = (uint)((int)fVar25 - 1U < 0x7fffff ||
                (int)ABS(fVar25) - 0x800000U < 0x7f000000 && -1 < (int)fVar25);
  fVar18 = (float)((int)(uVar7 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar18));
  fVar23 = (float)((int)(uVar7 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar17));
  fVar17 = (float)((int)(uVar7 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar19));
  fStack_c8 = fStack_c8 + fVar18 * fVar20;
  fStack_c4 = fStack_c4 + fVar23 * fVar20;
  fStack_c0 = fStack_bc + fVar17 * fVar20;
  fStack_bc = fStack_bc + fVar17 * fVar20;
  fVar20 = fVar15 * fVar18 - fVar17 * fVar16;
  fVar18 = fVar16 * fVar23 - fVar18 * fVar27;
  fVar17 = fVar27 * fVar17 - fVar23 * fVar15;
  fVar26 = _DAT_142e36f28 / SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar20 * fVar20);
  uVar8 = (uint)((int)fVar26 - 1U < 0x7fffff ||
                (int)ABS(fVar26) - 0x800000U < 0x7f000000 && -1 < (int)fVar26);
  fVar19 = (float)((int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar20));
  fVar28 = (float)((int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar18));
  fVar21 = (float)((int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar17));
  fVar24 = fVar15 * 0.0;
  fVar20 = fVar28 * fVar16 - fVar21 * fVar15;
  fVar18 = fVar21 * fVar27 - fVar19 * fVar16;
  fVar17 = fVar19 * fVar15 - fVar28 * fVar27;
  fVar22 = _DAT_142e36f28 / SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar20 * fVar20);
  uVar9 = (uint)((int)fVar22 - 1U < 0x7fffff ||
                (int)ABS(fVar22) - 0x800000U < 0x7f000000 && -1 < (int)fVar22);
  fVar20 = (float)((int)(uVar9 << 0x1f) >> 0x1f & (uint)(fVar22 * fVar20));
  fVar18 = (float)((int)(uVar9 << 0x1f) >> 0x1f & (uint)(fVar22 * fVar18));
  fVar17 = (float)((int)(uVar9 << 0x1f) >> 0x1f & (uint)(fVar22 * fVar17));
  fStack_e4 = fVar20 * 0.0;
  fVar30 = (float)((int)(uVar8 << 0x1f) >> 0x1f &
                  (uint)(fVar26 * (fVar27 * (float)((int)(uVar7 << 0x1f) >> 0x1f &
                                                   (uint)(fVar25 * (fVar27 * fVar2 - fVar30))) -
                                  fVar23 * fVar15))) * 0.0;
  fStack_174 = fVar27 * 0.0 + fVar4 * fVar19 + fStack_e4;
  fStack_170 = fVar24 + fVar4 * fVar28 + fVar18 * 0.0;
  fStack_178 = fVar16 * 0.0 + fVar4 * fVar21 + fVar17 * 0.0;
  fStack_16c = fVar29 * auVar14._12_4_ + fVar30 +
               (float)((int)(uVar9 << 0x1f) >> 0x1f &
                      (uint)(fVar22 * (fVar19 * fVar15 - fVar28 * fVar27))) * 0.0;
  fStack_160 = fVar17 * fVar3 + fVar16 * 0.0 + fVar30;
  fVar28 = fVar28 * 0.0;
  fStack_e4 = fVar29 * fVar27 + fVar19 * 0.0 + fStack_e4;
  fStack_e0 = fVar29 * fVar15 + fVar28 + fVar18 * 0.0;
  uStack_168 = CONCAT44(fStack_e0,fStack_e4);
  fStack_d8 = _DAT_142e377f0 + fStack_160 + _DAT_142e36f28 * _DAT_14300c320;
  fStack_d4 = fVar19 * 0.0 + fVar27 * 0.0 + fVar20 * fVar3;
  fStack_d0 = fVar28 + fVar24 + fVar18 * fVar3;
  fStack_cc = fVar28 + fVar24 + fVar18 * fVar3;
  uStack_180 = param_1;
  fStack_f8 = fStack_178;
  fStack_f4 = fStack_174;
  fStack_f0 = fStack_170;
  fStack_ec = fStack_170;
  fStack_e8 = fStack_16c;
  fStack_dc = fStack_e0;
  pdb_140e07fe0(&uStack_128,&fStack_f8);
  iVar10 = pdb_140315970(&uStack_180);
  uVar11 = pdb_1409012c0(param_2);
  pdb_140a77410(&fStack_178);
  lVar5 = param_8[2];
  if (lVar5 == *param_8) {
    pdb_142d8db00(param_8);
  }
  lVar6 = param_8[1];
  lVar12 = lVar5 * 0x50;
  puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar12);
  *puVar1 = uStack_108;
  puVar1[1] = uStack_100;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar12);
  *puVar1 = uStack_118;
  puVar1[1] = uStack_110;
  *(undefined8 *)(lVar6 + lVar12) = uStack_128;
  ((undefined8 *)(lVar6 + lVar12))[1] = uStack_120;
  *(undefined4 *)(lVar6 + 0x30 + lVar12) = 0;
  *(int *)(lVar6 + 0x34 + lVar12) = param_3 + iVar10;
  *(undefined4 *)(lVar6 + 0x38 + lVar12) = uVar11;
  *(undefined4 *)(lVar6 + 0x3c + lVar12) = 0;
  *(undefined8 *)(lVar6 + 0x40 + lVar12) = uStack_138;
  *(undefined8 *)(lVar6 + 0x48 + lVar12) = uStack_130;
  param_8[2] = lVar5 + 1;
  return;
}

