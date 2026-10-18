// VA 0x141bf3100, PDB extent 7321 bytes
// country_core::systems::save::snapshot::init_game_state_from_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::snapshot::init_game_state_from_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/snapshot.rs
   Extent: 7321 */

void pdb_141bf3100(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  longlong *plVar19;
  byte *pbVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined4 *puStack_240;
  undefined4 *puStack_238;
  undefined4 *puStack_230;
  undefined4 *puStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 *puStack_208;
  undefined4 *puStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  longlong lStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  longlong *plStack_1b0;
  undefined4 *puStack_1a8;
  longlong lStack_1a0;
  undefined4 *puStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined4 *puStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte *pbStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  byte *pbStack_c0;
  undefined4 uStack_b4;
  byte *pbStack_b0;
  longlong lStack_a8;
  undefined4 *puStack_a0;
  undefined1 uStack_91;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_60 = param_1;
  if (3 < *_DAT_143ca8e90) {
    uStack_320 = 0;
    puStack_318 = &UNK_14339b840;
    uStack_310 = 0x25;
    uStack_308 = 0;
    puStack_300 = &UNK_14339b5ff;
    uStack_2f8 = 0x30;
    uStack_2f0 = 4;
    puStack_2e8 = &UNK_14339b840;
    uStack_2e0 = 0x25;
    uStack_2d8 = 0x21d00000001;
    puStack_2d0 = &UNK_14339b8c7;
    uStack_2c8 = 0x47;
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 1;
    uStack_4c = 1;
    uStack_4d = 1;
    uStack_4e = 1;
    uStack_4f = 1;
    uStack_50 = 1;
    uStack_51 = 1;
    uStack_52 = 1;
    uStack_53 = 1;
    pdb_140f332f0(&uStack_91,&uStack_320);
  }
  plVar19 = plStack_60;
  pub_142e32760(&uStack_320,param_3,0xe0);
  lStack_188 = *(longlong *)(param_3 + 0xe0);
  puStack_180 = *(undefined4 **)(param_3 + 0xf0);
  uStack_b4 = *(undefined4 *)(param_3 + 0xfc);
  uStack_218 = *(undefined8 *)(param_3 + 0x100);
  puStack_208 = *(undefined4 **)(param_3 + 0x110);
  uStack_144 = *(undefined4 *)(param_3 + 0x11c);
  uStack_210 = *(undefined8 *)(param_3 + 0x120);
  puStack_200 = *(undefined4 **)(param_3 + 0x130);
  uStack_140 = *(undefined4 *)(param_3 + 0x13c);
  plStack_1f8 = *(longlong **)(param_3 + 0x140);
  puStack_1e0 = *(undefined4 **)(param_3 + 0x150);
  uStack_f8 = (undefined4)plVar19[7];
  uStack_f4 = (undefined4)((ulonglong)plVar19[7] >> 0x20);
  uStack_138 = *(undefined4 *)(param_3 + 0x15c);
  lStack_1d0 = *(longlong *)(param_3 + 0x160);
  puStack_1c8 = *(undefined4 **)(param_3 + 0x170);
  uStack_130 = *(undefined4 *)(param_3 + 0x17c);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x2c0);
  puStack_1b8 = *(undefined4 **)(param_3 + 0x2d0);
  uStack_12c = *(undefined4 *)(param_3 + 0x2dc);
  lVar27 = *(longlong *)(param_3 + 0x180);
  pbStack_b0 = *(byte **)(param_3 + 400);
  lStack_a8 = CONCAT44(lStack_a8._4_4_,*(undefined4 *)(param_3 + 0x19c));
  lStack_118 = *(longlong *)(param_3 + 0x1a0);
  puStack_1d8 = *(undefined4 **)(param_3 + 0x1b0);
  uStack_134 = *(undefined4 *)(param_3 + 0x1bc);
  lVar21 = *(longlong *)(param_3 + 0x1c0);
  pbStack_70 = *(byte **)(param_3 + 0x1d0);
  lStack_80 = CONCAT44(lStack_80._4_4_,*(undefined4 *)(param_3 + 0x1dc));
  lVar5 = *(longlong *)(param_3 + 0x1e0);
  puStack_240 = *(undefined4 **)(param_3 + 0x1f0);
  uStack_154 = *(undefined4 *)(param_3 + 0x1fc);
  pbStack_78 = *(byte **)(param_3 + 0x200);
  puStack_238 = *(undefined4 **)(param_3 + 0x210);
  uStack_150 = *(undefined4 *)(param_3 + 0x21c);
  plStack_90 = *(longlong **)(param_3 + 0x220);
  puStack_230 = *(undefined4 **)(param_3 + 0x230);
  uStack_14c = *(undefined4 *)(param_3 + 0x23c);
  lStack_190 = *(longlong *)(param_3 + 0x240);
  puStack_228 = *(undefined4 **)(param_3 + 0x250);
  uStack_148 = *(undefined4 *)(param_3 + 0x25c);
  lStack_88 = *(longlong *)(param_3 + 0x260);
  puStack_a0 = *(undefined4 **)(param_3 + 0x270);
  uStack_64 = *(undefined4 *)(param_3 + 0x27c);
  lStack_1a0 = *(longlong *)(param_3 + 0x280);
  puStack_198 = *(undefined4 **)(param_3 + 0x290);
  uStack_124 = *(undefined4 *)(param_3 + 0x29c);
  plStack_1b0 = *(longlong **)(param_3 + 0x2a0);
  puStack_1a8 = *(undefined4 **)(param_3 + 0x2b0);
  uStack_128 = *(undefined4 *)(param_3 + 700);
  plStack_1f0 = *(longlong **)(param_3 + 0x2e0);
  puStack_1e8 = *(undefined4 **)(param_3 + 0x2f0);
  uStack_13c = *(undefined4 *)(param_3 + 0x2fc);
  lStack_108 = plVar19[5];
  uStack_100 = (undefined4)plVar19[6];
  uStack_fc = (undefined4)((ulonglong)plVar19[6] >> 0x20);
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_4b = 1;
  uStack_4c = 1;
  uStack_4d = 1;
  uStack_4e = 1;
  uStack_4f = 1;
  uStack_50 = 1;
  uStack_51 = 1;
  uStack_52 = 1;
  uStack_53 = 0;
  pdb_140b0da60(param_2,&lStack_108);
  lStack_110 = plStack_60[8];
  pbVar24 = (byte *)plStack_60[9];
  if (plStack_60[10] != 0) {
    lStack_220 = plStack_60[10] * 0x58;
    lVar23 = 0;
    pbStack_c0 = (byte *)plStack_60[9];
    do {
      pbVar24 = pbStack_c0;
      if (*(int *)(pbStack_c0 + lVar23 + 8) == 2) break;
      pbStack_120 = *(byte **)(pbStack_c0 + lVar23);
      uVar4 = *(undefined4 *)(pbStack_c0 + lVar23 + 0x50);
      lStack_108 = *(longlong *)(pbStack_c0 + lVar23 + 0x24);
      uVar8 = *(undefined8 *)(pbStack_c0 + lVar23 + 0x24 + 8);
      uStack_f8 = *(undefined4 *)(pbStack_c0 + lVar23 + 0x34);
      uStack_f4 = *(undefined4 *)(pbStack_c0 + lVar23 + 0x38);
      uStack_f0 = *(undefined4 *)(pbStack_c0 + lVar23 + 0x3c);
      uStack_100 = (undefined4)uVar8;
      uStack_fc = (undefined4)((ulonglong)uVar8 >> 0x20);
      pbStack_178 = *(byte **)(pbStack_c0 + lVar23 + 0x40);
      pbStack_170 = (byte *)CONCAT44(pbStack_170._4_4_,*(undefined4 *)(pbStack_c0 + lVar23 + 0x48));
      *(undefined4 *)pbStack_b0 = (undefined4)lStack_a8;
      lVar7 = *(longlong *)(lVar27 + 0x30);
      uVar8 = *(undefined8 *)(lVar27 + 0x40);
      if (lVar7 == *(longlong *)(lVar27 + 0x20)) {
        pdb_142d7ee50(lVar27 + 0x20);
      }
      lVar6 = *(longlong *)(lVar27 + 0x28);
      lVar16 = lVar7 * 0x40;
      *(undefined8 *)(lVar6 + lVar16) = uVar8;
      *(byte **)(lVar6 + 8 + lVar16) = pbStack_120;
      *(undefined4 *)(lVar6 + 0x10 + lVar16) = uVar4;
      *(byte **)(lVar6 + 0x14 + lVar16) = pbStack_178;
      *(undefined4 *)(lVar6 + 0x1c + lVar16) = pbStack_170._0_4_;
      plVar19 = (longlong *)(lVar6 + 0x20 + lVar16);
      *plVar19 = lStack_108;
      plVar19[1] = CONCAT44(uStack_fc,uStack_100);
      puVar2 = (undefined8 *)(lVar6 + 0x2c + lVar16);
      *puVar2 = CONCAT44(uStack_f8,uStack_fc);
      puVar2[1] = CONCAT44(uStack_f0,uStack_f4);
      *(undefined1 *)(lVar6 + 0x3c + lVar16) = 1;
      *(longlong *)(lVar27 + 0x30) = lVar7 + 1;
      *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
      lVar23 = lVar23 + 0x58;
      pbVar24 = pbStack_c0;
    } while (lStack_220 != lVar23);
  }
  if (lStack_110 != 0) {
    pub_1406abac0(pbVar24,lStack_110 * 0x58,8);
  }
  *puStack_208 = uStack_144;
  pbStack_c0 = (byte *)(plStack_60 + 0xb);
  *puStack_200 = uStack_140;
  uStack_49 = 0;
  uStack_4a = 1;
  uStack_4b = 1;
  uStack_4c = 1;
  uStack_4d = 1;
  uStack_4e = 1;
  uStack_4f = 1;
  uStack_50 = 1;
  uStack_51 = 1;
  uStack_52 = 1;
  uStack_53 = 0;
  pdb_140c3e520(uStack_218,pbStack_c0,uStack_210);
  lStack_a8 = plStack_60[0xe];
  pbVar24 = (byte *)plStack_60[0xf];
  pbStack_b0 = pbVar24;
  if (plStack_60[0x10] != 0) {
    pbStack_120 = pbVar24 + plStack_60[0x10] * 0x10;
    do {
      uVar8 = *(undefined8 *)pbVar24;
      uVar4 = *(undefined4 *)(pbVar24 + 8);
      *(undefined4 *)pbStack_70 = (undefined4)lStack_80;
      lVar27 = *(longlong *)(lVar21 + 0x30);
      uVar9 = *(undefined8 *)(lVar21 + 0x40);
      if (lVar27 == *(longlong *)(lVar21 + 0x20)) {
        pdb_142d7e830(lVar21 + 0x20);
      }
      lVar23 = *(longlong *)(lVar21 + 0x28);
      *(undefined8 *)(lVar23 + lVar27 * 0x18) = uVar9;
      *(undefined8 *)(lVar23 + 8 + lVar27 * 0x18) = uVar8;
      *(undefined4 *)(lVar23 + 0x10 + lVar27 * 0x18) = uVar4;
      *(undefined1 *)(lVar23 + 0x14 + lVar27 * 0x18) = 0;
      *(longlong *)(lVar21 + 0x30) = lVar27 + 1;
      *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
      pbVar24 = pbVar24 + 0x10;
    } while (pbVar24 != pbStack_120);
  }
  if (lStack_a8 != 0) {
    pub_1406abac0(pbStack_b0,lStack_a8 << 4,8);
  }
  lStack_80 = plStack_60[0x11];
  pbVar24 = (byte *)plStack_60[0x12];
  pbStack_70 = pbVar24;
  if (plStack_60[0x13] != 0) {
    pbVar20 = pbVar24 + plStack_60[0x13] * 0x10;
    do {
      uVar8 = *(undefined8 *)pbVar24;
      uVar4 = *(undefined4 *)(pbVar24 + 8);
      *puStack_240 = uStack_154;
      lVar27 = *(longlong *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x40);
      if (lVar27 == *(longlong *)(lVar5 + 0x20)) {
        pdb_142d7e830(lVar5 + 0x20);
      }
      lVar21 = *(longlong *)(lVar5 + 0x28);
      *(undefined8 *)(lVar21 + lVar27 * 0x18) = uVar9;
      *(undefined8 *)(lVar21 + 8 + lVar27 * 0x18) = uVar8;
      *(undefined4 *)(lVar21 + 0x10 + lVar27 * 0x18) = uVar4;
      *(undefined1 *)(lVar21 + 0x14 + lVar27 * 0x18) = 0;
      *(longlong *)(lVar5 + 0x30) = lVar27 + 1;
      *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
      pbVar24 = pbVar24 + 0x10;
    } while (pbVar24 != pbVar20);
  }
  if (lStack_80 != 0) {
    pub_1406abac0(pbStack_70,lStack_80 << 4,8);
  }
  lStack_80 = plStack_60[0x14];
  pbVar24 = (byte *)plStack_60[0x15];
  pbStack_70 = pbVar24;
  if (plStack_60[0x16] != 0) {
    pbVar20 = pbVar24 + plStack_60[0x16] * 0x10;
    lVar27 = (longlong)pbStack_78 + 0x20;
    do {
      uVar8 = *(undefined8 *)pbVar24;
      uVar4 = *(undefined4 *)(pbVar24 + 8);
      *puStack_238 = uStack_150;
      lVar21 = *(longlong *)((longlong)pbStack_78 + 0x30);
      uVar9 = *(undefined8 *)((longlong)pbStack_78 + 0x40);
      if (lVar21 == *(longlong *)((longlong)pbStack_78 + 0x20)) {
        pdb_142d7e830(lVar27);
      }
      lVar5 = *(longlong *)((longlong)pbStack_78 + 0x28);
      *(undefined8 *)(lVar5 + lVar21 * 0x18) = uVar9;
      *(undefined8 *)(lVar5 + 8 + lVar21 * 0x18) = uVar8;
      *(undefined4 *)(lVar5 + 0x10 + lVar21 * 0x18) = uVar4;
      *(undefined1 *)(lVar5 + 0x14 + lVar21 * 0x18) = 0;
      *(longlong *)((longlong)pbStack_78 + 0x30) = lVar21 + 1;
      *(longlong *)((longlong)pbStack_78 + 0x40) = *(longlong *)((longlong)pbStack_78 + 0x40) + 1;
      pbVar24 = pbVar24 + 0x10;
    } while (pbVar24 != pbVar20);
  }
  if (lStack_80 != 0) {
    pub_1406abac0(pbStack_70,lStack_80 << 4,8);
  }
  pbStack_70 = (byte *)plStack_60[0x17];
  pbVar24 = (byte *)plStack_60[0x18];
  pbStack_78 = pbVar24;
  if (plStack_60[0x19] != 0) {
    pbVar20 = pbVar24 + plStack_60[0x19] * 0x10;
    lVar27 = (longlong)plStack_90 + 0x20;
    do {
      uVar8 = *(undefined8 *)pbVar24;
      uVar4 = *(undefined4 *)(pbVar24 + 8);
      *puStack_230 = uStack_14c;
      lVar21 = *(longlong *)((longlong)plStack_90 + 0x30);
      uVar9 = *(undefined8 *)((longlong)plStack_90 + 0x40);
      if (lVar21 == *(longlong *)((longlong)plStack_90 + 0x20)) {
        pdb_142d7e830(lVar27);
      }
      lVar5 = *(longlong *)((longlong)plStack_90 + 0x28);
      *(undefined8 *)(lVar5 + lVar21 * 0x18) = uVar9;
      *(undefined8 *)(lVar5 + 8 + lVar21 * 0x18) = uVar8;
      *(undefined4 *)(lVar5 + 0x10 + lVar21 * 0x18) = uVar4;
      *(undefined1 *)(lVar5 + 0x14 + lVar21 * 0x18) = 0;
      *(longlong *)((longlong)plStack_90 + 0x30) = lVar21 + 1;
      *(longlong *)((longlong)plStack_90 + 0x40) = *(longlong *)((longlong)plStack_90 + 0x40) + 1;
      pbVar24 = pbVar24 + 0x10;
    } while (pbVar24 != pbVar20);
  }
  if (pbStack_70 != (byte *)0x0) {
    pub_1406abac0(pbStack_78,(longlong)pbStack_70 << 4,8);
  }
  plStack_90 = (longlong *)plStack_60[0x1a];
  pbVar24 = (byte *)plStack_60[0x1b];
  pbStack_78 = pbVar24;
  if (plStack_60[0x1c] != 0) {
    pbVar20 = pbVar24 + plStack_60[0x1c] * 0x10;
    lVar27 = lStack_190 + 0x20;
    do {
      uVar8 = *(undefined8 *)pbVar24;
      uVar4 = *(undefined4 *)(pbVar24 + 8);
      *puStack_228 = uStack_148;
      lVar21 = *(longlong *)(lStack_190 + 0x30);
      uVar9 = *(undefined8 *)(lStack_190 + 0x40);
      if (lVar21 == *(longlong *)(lStack_190 + 0x20)) {
        pdb_142d7e830(lVar27);
      }
      lVar5 = *(longlong *)(lStack_190 + 0x28);
      *(undefined8 *)(lVar5 + lVar21 * 0x18) = uVar9;
      *(undefined8 *)(lVar5 + 8 + lVar21 * 0x18) = uVar8;
      *(undefined4 *)(lVar5 + 0x10 + lVar21 * 0x18) = uVar4;
      *(undefined1 *)(lVar5 + 0x14 + lVar21 * 0x18) = 0;
      *(longlong *)(lStack_190 + 0x30) = lVar21 + 1;
      *(longlong *)(lStack_190 + 0x40) = *(longlong *)(lStack_190 + 0x40) + 1;
      pbVar24 = pbVar24 + 0x10;
    } while (pbVar24 != pbVar20);
  }
  if (plStack_90 != (longlong *)0x0) {
    pub_1406abac0(pbStack_78,(longlong)plStack_90 << 4,8);
  }
  plStack_90 = plStack_60 + 0x29;
  pauVar22 = (undefined1 (*) [16])plStack_60[0x2a];
  lVar27 = plStack_60[0x2d];
  auVar3 = *pauVar22;
  pauVar18 = pauVar22 + 1;
  uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
  pbStack_78 = (byte *)(lStack_88 + 0x20);
  while (plVar19 = plStack_1f8, bVar28 = lVar27 != 0, lVar27 = lVar27 + -1, bVar28) {
    if ((short)uVar25 == 0) {
      do {
        auVar3 = *pauVar18;
        pauVar22 = pauVar22 + -0x30;
        pauVar18 = pauVar18 + 1;
        uVar25 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar25 == 0);
    }
    uVar11 = 0;
    for (uVar12 = uVar25; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar4 = *(undefined4 *)pauVar22[(ulonglong)uVar11 * -3 + -3];
    *puStack_a0 = uStack_64;
    lVar21 = *(longlong *)(lStack_88 + 0x30);
    uVar8 = *(undefined8 *)(lStack_88 + 0x40);
    if (lVar21 == *(longlong *)(lStack_88 + 0x20)) {
      uStack_49 = 0;
      uStack_4a = 0;
      uStack_4b = 0;
      uStack_4c = 0;
      uStack_4d = 0;
      uStack_4e = 0;
      uStack_4f = 1;
      uStack_50 = 1;
      uStack_51 = 1;
      uStack_52 = 1;
      uStack_53 = 0;
      pdb_142d7e980(pbStack_78);
    }
    uVar25 = uVar25 - 1 & uVar25;
    lVar5 = *(longlong *)(lStack_88 + 0x28);
    *(undefined8 *)(lVar5 + lVar21 * 0x10) = uVar8;
    *(undefined4 *)(lVar5 + 8 + lVar21 * 0x10) = uVar4;
    *(longlong *)(lStack_88 + 0x30) = lVar21 + 1;
    *(longlong *)(lStack_88 + 0x40) = *(longlong *)(lStack_88 + 0x40) + 1;
  }
  lStack_c8 = plStack_90[8];
  lStack_108 = *plStack_90;
  uStack_e8 = plStack_90[4];
  uStack_e0 = plStack_90[5];
  lStack_d8 = plStack_90[6];
  lStack_d0 = plStack_90[7];
  uStack_f8 = (undefined4)plStack_90[2];
  uStack_f4 = (undefined4)((ulonglong)plStack_90[2] >> 0x20);
  uStack_f0 = (undefined4)plStack_90[3];
  uStack_ec = (undefined4)((ulonglong)plStack_90[3] >> 0x20);
  uStack_100 = (undefined4)plStack_90[1];
  uStack_fc = (undefined4)((ulonglong)plStack_90[1] >> 0x20);
  *puStack_1e0 = uStack_138;
  lVar27 = plStack_1f8[2];
  if (lVar27 != 0) {
    lVar21 = plStack_1f8[4];
    if (lVar21 != 0) {
      pauVar22 = (undefined1 (*) [16])plStack_1f8[1];
      auVar3 = *pauVar22;
      pauVar18 = pauVar22 + 1;
      uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar25 == 0) {
          do {
            auVar3 = *pauVar18;
            pauVar22 = pauVar22 + -0x30;
            pauVar18 = pauVar18 + 1;
            uVar25 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar25 == 0);
        }
        uVar11 = 0;
        for (uVar12 = uVar25; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        if (*(longlong *)(pauVar22[(ulonglong)uVar11 * -3 + -3] + 8) != 0) {
          pub_1406abac0(*(byte **)pauVar22[(ulonglong)uVar11 * -3 + -2],
                        *(longlong *)(pauVar22[(ulonglong)uVar11 * -3 + -3] + 8) * 0xc,4);
        }
        uVar25 = uVar25 - 1 & uVar25;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    lVar21 = lVar27 * 0x30 + 0x30;
    uVar26 = lVar27 + lVar21 + 0x11;
    if (uVar26 != 0) {
      pub_1406abac0((byte *)(plVar19[1] - lVar21),uVar26,0x10);
    }
  }
  plVar15 = plStack_60;
  plVar13 = plStack_1f0;
  plVar19[8] = lStack_c8;
  plVar19[6] = lStack_d8;
  plVar19[7] = lStack_d0;
  plVar19[4] = uStack_e8;
  plVar19[5] = uStack_e0;
  plVar19[2] = CONCAT44(uStack_f4,uStack_f8);
  plVar19[3] = CONCAT44(uStack_ec,uStack_f0);
  *plVar19 = lStack_108;
  plVar19[1] = CONCAT44(uStack_fc,uStack_100);
  lStack_108 = plStack_60[0x38];
  uStack_e8 = plStack_60[0x3c];
  uStack_e0 = plStack_60[0x3d];
  uStack_f8 = (undefined4)plStack_60[0x3a];
  uStack_f4 = (undefined4)((ulonglong)plStack_60[0x3a] >> 0x20);
  uStack_f0 = (undefined4)plStack_60[0x3b];
  uStack_ec = (undefined4)((ulonglong)plStack_60[0x3b] >> 0x20);
  uStack_100 = (undefined4)plStack_60[0x39];
  uStack_fc = (undefined4)((ulonglong)plStack_60[0x39] >> 0x20);
  *puStack_1e8 = uStack_13c;
  lVar27 = plStack_1f0[1];
  if (lVar27 != 0) {
    uVar26 = lVar27 * 8 + 0x17U & 0xfffffffffffffff0;
    uVar17 = lVar27 + uVar26 + 0x11;
    if (uVar17 != 0) {
      pub_1406abac0((byte *)(*plStack_1f0 - uVar26),uVar17,0x10);
    }
  }
  *(undefined4 *)(plVar13 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar13 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar13 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar13 + 2) = uStack_f8;
  *(undefined4 *)((longlong)plVar13 + 0x14) = uStack_f4;
  *(undefined4 *)(plVar13 + 3) = uStack_f0;
  *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_ec;
  *plVar13 = lStack_108;
  plVar13[1] = CONCAT44(uStack_fc,uStack_100);
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 0;
  uStack_4c = 0;
  uStack_4d = 0;
  uStack_4e = 0;
  uStack_4f = 0;
  uStack_50 = 1;
  uStack_51 = 1;
  uStack_52 = 1;
  uStack_53 = 0;
  pdb_1409061a0(&uStack_320,plVar15[0x1e],plVar15[0x1f]);
  lVar27 = lStack_188;
  bVar28 = SBORROW8(0,plStack_60[0x26]);
  if (!bVar28) {
    uStack_f8 = (undefined4)plStack_60[0x28];
    uStack_f4 = (undefined4)((ulonglong)plStack_60[0x28] >> 0x20);
    lStack_108 = plStack_60[0x26];
    uStack_100 = (undefined4)plStack_60[0x27];
    uStack_fc = (undefined4)((ulonglong)plStack_60[0x27] >> 0x20);
    *puStack_180 = uStack_b4;
    uStack_49 = 0;
    uStack_4a = 0;
    uStack_4b = 0;
    uStack_4c = 0;
    uStack_4d = 0;
    uStack_4e = 0;
    uStack_4f = 0;
    uStack_50 = 0;
    uStack_51 = 1;
    uStack_52 = 1;
    uStack_53 = 0;
    pdb_140a86ba0(lStack_188,&lStack_108);
    goto LAB_141bf40ca;
  }
  *puStack_180 = uStack_b4;
  lVar23 = *(longlong *)(lStack_188 + 8);
  lVar7 = *(longlong *)(lStack_188 + 0x10);
  lVar6 = *(longlong *)(lStack_188 + 0x20);
  lVar16 = *(longlong *)(lStack_188 + 0x28);
  lVar5 = lVar7 * 4;
  lVar21 = 0;
  do {
    if (lVar5 - lVar21 == 0) {
      lVar21 = 0;
      goto LAB_141bf4070;
    }
    piVar1 = (int *)(lVar23 + lVar21);
    lVar21 = lVar21 + 4;
  } while (*piVar1 == 0);
  goto LAB_141bf4080;
  while (piVar1 = (int *)(lVar6 + lVar21), lVar21 = lVar21 + 4, *piVar1 == 0) {
LAB_141bf4070:
    if (lVar16 * 4 - lVar21 == 0) goto LAB_141bf409b;
  }
LAB_141bf4080:
  pub_142e32780(lStack_188 + 0x80,0xff,0x200);
  *(undefined1 *)(lVar27 + 0x283) = 1;
LAB_141bf409b:
  if (lVar7 != 0) {
    pub_142e32780(lVar23,0,lVar5);
  }
  if (lVar16 != 0) {
    pub_142e32780(lVar6,0,lVar16 << 2);
  }
  *(undefined1 *)(lVar27 + 0x284) = 1;
LAB_141bf40ca:
  *puStack_1d8 = uStack_134;
  lVar27 = *(longlong *)(lStack_118 + 0x30);
  uVar8 = *(undefined8 *)(lStack_118 + 0x40);
  if (lVar27 == *(longlong *)(lStack_118 + 0x20)) {
    uStack_49 = 0;
    uStack_4a = 0;
    uStack_4b = 0;
    uStack_4c = 0;
    uStack_4d = 0;
    uStack_4e = 0;
    uStack_4f = 0;
    uStack_51 = 1;
    uStack_52 = 1;
    uStack_53 = 0;
    uStack_50 = bVar28;
    pdb_142d7e8a0(lStack_118 + 0x20);
  }
  plVar19 = plStack_60;
  uStack_64 = CONCAT31(uStack_64._1_3_,bVar28);
  *(undefined8 *)(*(longlong *)(lStack_118 + 0x28) + lVar27 * 8) = uVar8;
  *(longlong *)(lStack_118 + 0x30) = lVar27 + 1;
  *(longlong *)(lStack_118 + 0x40) = *(longlong *)(lStack_118 + 0x40) + 1;
  *puStack_1c8 = uStack_130;
  *(longlong *)(lStack_1d0 + 0x50) = plStack_60[0x3e];
  lVar27 = *(longlong *)(lStack_1d0 + 0x10);
  if (lVar27 != plStack_60[0x22]) {
    uStack_49 = 0;
    uStack_4a = 0;
    uStack_4b = 0;
    uStack_4c = 0;
    uStack_4d = 0;
    uStack_4e = 0;
    uStack_4f = 0;
    uStack_51 = 1;
    uStack_52 = 1;
    uStack_53 = 0;
    uStack_50 = bVar28;
    pdb_142dc85e0(lVar27,plStack_60[0x22],&UNK_14339b8f0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  pub_142e32760(*(undefined8 *)(lStack_1d0 + 8),plStack_60[0x21],lVar27 << 2);
  uVar4 = uStack_124;
  puVar14 = puStack_198;
  lVar27 = lStack_1a0;
  lStack_168 = plVar19[0x23];
  pbStack_178 = (byte *)plVar19[0x24];
  pbStack_160 = pbStack_178 + plVar19[0x25] * 0x40;
  pbVar24 = pbStack_178;
  pbStack_170 = pbStack_178;
  if (plVar19[0x25] != 0) {
    lVar21 = *(longlong *)(pbStack_178 + 8);
    pbStack_170 = pbStack_178 + 0x40;
    if (!SBORROW8(0,lVar21)) {
      lVar5 = lStack_1a0 + 0x20;
      do {
        uVar8 = *(undefined8 *)pbVar24;
        puStack_a0 = *(undefined4 **)(pbVar24 + 0x10);
        uStack_e8 = *(longlong *)(pbVar24 + 0x38);
        uStack_f8 = (undefined4)*(undefined8 *)(pbVar24 + 0x28);
        uStack_f4 = (undefined4)((ulonglong)*(undefined8 *)(pbVar24 + 0x28) >> 0x20);
        uStack_f0 = (undefined4)*(undefined8 *)(pbVar24 + 0x30);
        uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(pbVar24 + 0x30) >> 0x20);
        lStack_108 = *(longlong *)(pbVar24 + 0x18);
        uStack_100 = (undefined4)*(undefined8 *)(pbVar24 + 0x20);
        uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(pbVar24 + 0x20) >> 0x20);
        *puVar14 = uVar4;
        lVar23 = *(longlong *)(lVar27 + 0x30);
        uVar9 = *(undefined8 *)(lVar27 + 0x40);
        lStack_88 = lVar21;
        if (lVar23 == *(longlong *)(lVar27 + 0x20)) {
          pdb_142d7eec0(lVar5);
        }
        lVar21 = *(longlong *)(lVar27 + 0x28);
        *(longlong *)(lVar21 + lVar23 * 0x48) = lStack_88;
        *(undefined4 **)(lVar21 + 8 + lVar23 * 0x48) = puStack_a0;
        plVar19 = (longlong *)(lVar21 + 0x10 + lVar23 * 0x48);
        *plVar19 = lStack_108;
        plVar19[1] = CONCAT44(uStack_fc,uStack_100);
        puVar2 = (undefined8 *)(lVar21 + 0x20 + lVar23 * 0x48);
        *puVar2 = CONCAT44(uStack_f4,uStack_f8);
        puVar2[1] = CONCAT44(uStack_ec,uStack_f0);
        *(longlong *)(lVar21 + 0x30 + lVar23 * 0x48) = uStack_e8;
        *(undefined8 *)(lVar21 + 0x38 + lVar23 * 0x48) = uVar8;
        *(undefined8 *)(lVar21 + 0x40 + lVar23 * 0x48) = uVar9;
        *(longlong *)(lVar27 + 0x30) = lVar23 + 1;
        *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
        plVar19 = plStack_60;
        pbVar24 = pbStack_170;
        if (pbStack_170 == pbStack_160) goto LAB_141bf4324;
        pbVar20 = pbStack_170 + 0x40;
        lVar21 = *(longlong *)(pbStack_170 + 8);
        pbStack_170 = pbVar20;
      } while (!SBORROW8(0,lVar21));
    }
    pbVar24 = pbVar24 + 0x40;
    plVar19 = plStack_60;
  }
LAB_141bf4324:
  if ((longlong)pbStack_160 - (longlong)pbVar24 != 0) {
    uVar26 = (ulonglong)((longlong)pbStack_160 - (longlong)pbVar24) >> 6;
    pbVar24 = pbVar24 + 0x10;
    do {
      if (*(ulonglong *)(pbVar24 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar24,*(ulonglong *)(pbVar24 + -8),1);
      }
      pbVar24 = pbVar24 + 0x40;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (lStack_168 != 0) {
    pub_1406abac0(pbStack_178,lStack_168 << 6,8);
  }
  plVar13 = plStack_1b0;
  lStack_108 = plVar19[0x32];
  uStack_e8 = plVar19[0x36];
  uStack_e0 = plVar19[0x37];
  uStack_f8 = (undefined4)plVar19[0x34];
  uStack_f4 = (undefined4)((ulonglong)plVar19[0x34] >> 0x20);
  uStack_f0 = (undefined4)plVar19[0x35];
  uStack_ec = (undefined4)((ulonglong)plVar19[0x35] >> 0x20);
  uStack_100 = (undefined4)plVar19[0x33];
  uStack_fc = (undefined4)((ulonglong)plVar19[0x33] >> 0x20);
  *puStack_1a8 = uStack_128;
  lVar27 = plStack_1b0[1];
  if (lVar27 != 0) {
    uVar26 = lVar27 * 8 + 0x17U & 0xfffffffffffffff0;
    uVar17 = lVar27 + uVar26 + 0x11;
    if (uVar17 != 0) {
      pub_1406abac0((byte *)(*plStack_1b0 - uVar26),uVar17,0x10);
    }
  }
  *(undefined4 *)(plVar13 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar13 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar13 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_e0._4_4_;
  plVar13[2] = CONCAT44(uStack_f4,uStack_f8);
  plVar13[3] = CONCAT44(uStack_ec,uStack_f0);
  *plVar13 = lStack_108;
  plVar13[1] = CONCAT44(uStack_fc,uStack_100);
  *puStack_1b8 = uStack_12c;
  uStack_e8 = plVar19[4];
  lStack_108 = *plVar19;
  uStack_f8 = (undefined4)plVar19[2];
  uStack_f4 = *(undefined4 *)((longlong)plVar19 + 0x14);
  uStack_f0 = (undefined4)plVar19[3];
  uStack_ec = *(undefined4 *)((longlong)plVar19 + 0x1c);
  uStack_100 = (undefined4)plVar19[1];
  uStack_fc = (undefined4)((ulonglong)plVar19[1] >> 0x20);
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 0;
  uStack_4c = 0;
  uStack_4d = 0;
  uStack_4e = 0;
  uStack_4f = 0;
  uStack_50 = (undefined1)uStack_64;
  uStack_51 = 0;
  uStack_52 = 0;
  uStack_53 = 0;
  pdb_140a5fa80(uStack_1c0,&lStack_108);
  plVar19 = plStack_60;
  pbVar24 = (byte *)plStack_60[0xc];
  lVar27 = plStack_60[0xd];
  if (lVar27 != 0) {
    pbVar20 = pbVar24 + 0x18;
    do {
      if (*(longlong *)(pbVar20 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar20,*(longlong *)(pbVar20 + -8) * 0x70,8);
      }
      pbVar20 = pbVar20 + 0x28;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if (*(longlong *)pbStack_c0 != 0) {
    pub_1406abac0(pbVar24,*(longlong *)pbStack_c0 * 0x28,8);
  }
  pbVar24 = (byte *)plVar19[0x1e];
  lVar27 = plVar19[0x1f];
  if (lVar27 != 0) {
    pbVar20 = pbVar24 + 0x18;
    do {
      uVar26 = *(ulonglong *)(pbVar20 + -8);
      if ((!SBORROW8(0,uVar26)) && (uVar26 != 0)) {
        pub_1406abac0(*(byte **)pbVar20,uVar26,1);
      }
      pbVar20 = pbVar20 + 0x28;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if (plVar19[0x1d] != 0) {
    pub_1406abac0(pbVar24,plVar19[0x1d] * 0x28,8);
  }
  if (plVar19[0x20] != 0) {
    pub_1406abac0((byte *)plVar19[0x21],plVar19[0x20] << 2,4);
  }
  return;
}

