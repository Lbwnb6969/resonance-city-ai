// VA 0x140a0e350, PDB extent 417 bytes
// country_core::resources::walls::wall_trigger_volume::Quad::apply_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::Quad::apply_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 417 */

void pdb_140a0e350(undefined8 *param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  float fVar8;
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
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  
  if (*(char *)(param_3 + 0xc) == '\0') {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)(param_3 + 0x10);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[4];
  uVar23 = *(uint *)(param_3 + 0x14);
  uVar1 = *(uint *)(param_3 + 0x18);
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  fVar15 = *(float *)(param_2 + 5);
  fVar16 = *(float *)((longlong)param_2 + 0x2c);
  fVar17 = *(float *)(param_2 + 6);
  fVar18 = *(float *)((longlong)param_2 + 0x34);
  uVar2 = param_2[0xe];
  fVar26 = (float)uVar2;
  fVar27 = (float)(uVar2 >> 0x20);
  fVar19 = (float)_DAT_142e378e0;
  fVar20 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  uVar3 = param_2[7];
  auVar29._4_4_ = uVar23;
  auVar29._0_4_ = uVar23;
  auVar29._8_8_ = 0;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar2;
  auVar30 = maxps(auVar29,auVar30);
  fVar22 = (float)(~-(uint)NAN(fVar26) & auVar30._0_4_ | uVar23 & -(uint)NAN(fVar26));
  fVar31 = (float)(~-(uint)NAN(fVar27) & auVar30._4_4_ | uVar23 & -(uint)NAN(fVar27));
  fVar28 = fVar31 * 0.0;
  fVar8 = *(float *)(param_2 + 0xb);
  fVar9 = *(float *)(param_2 + 0xc);
  fVar24 = fVar14 * *(float *)((longlong)param_2 + 0x5c);
  fVar25 = fVar14 * *(float *)((longlong)param_2 + 100);
  uVar4 = param_2[0xd];
  fVar10 = *(float *)(param_2 + 9);
  fVar11 = *(float *)((longlong)param_2 + 0x4c);
  fVar12 = *(float *)(param_2 + 10);
  fVar13 = *(float *)((longlong)param_2 + 0x54);
  param_1[0xd] = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  uVar7 = param_2[0xe];
  uVar6 = *(undefined1 *)(param_2 + 0xf);
  *param_1 = *param_2;
  *(float *)(param_1 + 5) = (fVar15 - fVar26 * fVar19) + fVar22 * fVar19 + fVar14 * fVar8;
  *(float *)((longlong)param_1 + 0x2c) = (fVar16 - fVar26 * fVar20) + fVar22 * fVar20 + fVar24;
  *(float *)(param_1 + 6) = (fVar17 - fVar26 * 0.0) + fVar22 * 0.0 + fVar14 * fVar9;
  *(float *)((longlong)param_1 + 0x34) = (fVar18 - fVar27 * 0.0) + fVar28 + fVar25;
  uVar5 = param_2[8];
  uVar23 = (uint)(param_4 & 0.0 < fVar26);
  uVar21 = (int)(uVar23 << 0x1f) >> 0x1f;
  uVar23 = (int)(uVar23 << 0x1f) >> 0x1f;
  fVar22 = (float)(~uVar21 & uVar1 | (uint)(fVar26 - *(float *)((longlong)param_2 + 0x44)) & uVar21)
  ;
  fVar20 = (float)(~uVar23 & uVar1 | (uint)(fVar26 - *(float *)(param_2 + 10)) & uVar23);
  fVar17 = fVar22 * _DAT_142e378f0;
  fVar18 = fVar20 * _UNK_142e378f4;
  fVar19 = fVar20 * _UNK_142e378f8;
  fVar20 = fVar20 * _UNK_142e378fc;
  fVar15 = fVar14 * (float)uVar4;
  fVar16 = fVar14 * (float)((ulonglong)uVar4 >> 0x20);
  *(float *)(param_1 + 7) = fVar15 + ((float)uVar3 - fVar27) + fVar31;
  *(float *)((longlong)param_1 + 0x3c) =
       fVar16 + ((float)((ulonglong)uVar3 >> 0x20) - fVar27 * 0.0) + fVar28;
  *(float *)(param_1 + 8) = fVar14 * fVar8 + fVar17 + (float)uVar5;
  *(float *)((longlong)param_1 + 0x44) = fVar24 + fVar22 + (float)((ulonglong)uVar5 >> 0x20);
  *(float *)(param_1 + 9) = fVar14 * fVar9 + fVar17 + fVar10;
  *(float *)((longlong)param_1 + 0x4c) = fVar25 + fVar18 + fVar11;
  *(float *)(param_1 + 10) = fVar15 + fVar19 + fVar12;
  *(float *)((longlong)param_1 + 0x54) = fVar16 + fVar20 + fVar13;
  param_1[0xe] = uVar7;
  *(undefined1 *)(param_1 + 0xf) = uVar6;
  return;
}

