// VA 0x1424ec100, PDB extent 2498 bytes
// turbosloth::asset::impl$24::run::async_block$0<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<asset::texture::SourceImageAsset,anyhow::Error,clutter_pack_pipe::ExtractRoughnessChannel>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2498 */

undefined8 * pdb_1424ec100(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  ulonglong uVar7;
  byte **ppbVar8;
  undefined4 *puVar9;
  byte *pbStack_208;
  ulonglong uStack_200;
  byte *pbStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  ulonglong *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  byte **ppbStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  uint uStack_150;
  uint uStack_14c;
  ulonglong uStack_148;
  byte *pbStack_140;
  ulonglong uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_70;
  undefined4 *puStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  byte **ppbStack_50;
  undefined4 *puStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_48 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1c)) {
  case 0:
    uStack_1a8 = *param_2;
    uStack_1a4 = param_2[1];
    uStack_1a0 = param_2[2];
    uStack_19c = param_2[3];
    uStack_198 = param_2[4];
    uStack_194 = param_2[5];
    uStack_190 = param_2[6];
    uStack_18c = param_2[7];
    pdb_140ceedf0(&uStack_c8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10),&uStack_1a8)
    ;
    puStack_48[0x18] = uStack_98;
    puStack_48[0x19] = uStack_94;
    puStack_48[0x1a] = uStack_90;
    puStack_48[0x1b] = uStack_8c;
    puStack_48[0x14] = (undefined4)uStack_a8;
    puStack_48[0x15] = uStack_a8._4_4_;
    puStack_48[0x16] = uStack_a0;
    puStack_48[0x17] = uStack_9c;
    puStack_48[0x10] = (undefined4)uStack_b8;
    puStack_48[0x11] = uStack_b8._4_4_;
    puStack_48[0x12] = (undefined4)uStack_b0;
    puStack_48[0x13] = uStack_b0._4_4_;
    puStack_48[0xc] = (undefined4)uStack_c8;
    puStack_48[0xd] = uStack_c8._4_4_;
    puStack_48[0xe] = (undefined4)uStack_c0;
    puStack_48[0xf] = uStack_c0._4_4_;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_143512858);
  case 2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_143512858);
  }
  puStack_68 = puStack_48 + 0xc;
  if (*(char *)(puStack_48 + 0x18) != '\0') {
    if (*(char *)(puStack_48 + 0x18) == '\x01') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_143512a18);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_143512a18);
  }
  ppbVar8 = *(byte ***)(puStack_48 + 0x14);
  uStack_1c8 = *puStack_68;
  uStack_1c4 = puStack_48[0xd];
  uStack_1c0 = puStack_48[0xe];
  uStack_1bc = puStack_48[0xf];
  uStack_1b8 = puStack_48[0x10];
  uStack_1b4 = puStack_48[0x11];
  uStack_1b0 = puStack_48[0x12];
  uStack_1ac = puStack_48[0x13];
  lVar2 = pdb_1417107c0(&uStack_1c8,ppbVar8,*(undefined8 *)(puStack_48 + 0x16));
  if (lVar2 == 1) {
    pbVar3 = (byte *)pdb_142deaf00(ppbVar8);
code_r0x0001424ec4b3:
    pdb_14098a860(&uStack_1c8);
    *(undefined1 *)(puStack_48 + 0x18) = 1;
code_r0x0001424ec4c8:
    pbVar4 = (byte *)pdb_142dc6590(pbVar3);
    uVar5 = 1;
    puVar9 = puStack_48;
  }
  else {
    ppbVar6 = (byte **)ppbVar8[3];
    ppbStack_50 = ppbVar8;
    pdb_140dace30(&uStack_130,ppbVar6,ppbVar8[4]);
    if (CONCAT44(uStack_12c,uStack_130) != -0x7ffffffffffffff6) {
      uStack_178 = uStack_100;
      uStack_174 = uStack_fc;
      uStack_170 = uStack_f8;
      uStack_16c = uStack_f4;
      uStack_188 = uStack_110;
      uStack_184 = uStack_10c;
      uStack_180 = uStack_108;
      uStack_17c = uStack_104;
      uStack_198 = uStack_120;
      uStack_194 = uStack_11c;
      uStack_190 = uStack_118;
      uStack_18c = uStack_114;
      uStack_1a8 = uStack_130;
      uStack_1a4 = uStack_12c;
      uStack_1a0 = uStack_128;
      uStack_19c = uStack_124;
      uStack_39 = 1;
      pdb_140f3f5b0(&uStack_c8);
      uStack_1e8 = uStack_a8;
      pbStack_1f8 = uStack_b8;
      uStack_1f0 = uStack_b0;
      pbStack_208 = uStack_c8;
      uStack_200 = uStack_c0;
      uStack_88 = uStack_100;
      uStack_84 = uStack_fc;
      uStack_80 = uStack_f8;
      uStack_7c = uStack_f4;
      uStack_98 = uStack_110;
      uStack_94 = uStack_10c;
      uStack_90 = uStack_108;
      uStack_8c = uStack_104;
      uStack_a8 = CONCAT44(uStack_11c,uStack_120);
      uStack_a0 = uStack_118;
      uStack_9c = uStack_114;
      uStack_b8 = (byte *)CONCAT44(uStack_12c,uStack_130);
      uStack_b0 = CONCAT44(uStack_124,uStack_128);
      uStack_c8 = &UNK_143512999;
      uStack_c0 = 0x24;
      uStack_39 = 0;
      ppbVar8 = &pbStack_208;
      pbVar3 = (byte *)pdb_142dea520(&uStack_c8);
code_r0x0001424ec499:
      LOCK();
      *ppbStack_50 = *ppbStack_50 + -1;
      UNLOCK();
      if (*ppbStack_50 == (byte *)0x0) {
        pdb_140cd0de0(&ppbStack_50);
      }
      goto code_r0x0001424ec4b3;
    }
    pbVar3 = (byte *)CONCAT44(uStack_11c,uStack_120);
    uStack_148 = CONCAT44(uStack_114,uStack_118);
    pbStack_140 = (byte *)CONCAT44(uStack_10c,uStack_110);
    uStack_138 = CONCAT44(uStack_104,uStack_108);
    ppbVar8 = ppbVar6;
    if (CONCAT44(uStack_124,uStack_128) == 10) goto code_r0x0001424ec499;
    uStack_e0 = CONCAT44(uStack_114,uStack_118);
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_f0 = CONCAT44(uStack_124,uStack_128);
    pbStack_e8 = pbVar3;
    pdb_140daccf0(&ppbStack_168,&uStack_f0);
    pdb_1424e6e70(&uStack_f0);
    uStack_c0 = uStack_158 & 0x7ffffffffffffffc;
    uStack_b8 = pbStack_160 + uStack_c0;
    uStack_b0 = (ulonglong)((uint)uStack_158 & 3);
    pbStack_58 = pbStack_160;
    uStack_c8 = pbStack_160;
    uStack_a8 = 4;
    pdb_1415f27b0(&uStack_148,&uStack_c8);
    uVar7 = (ulonglong)uStack_14c * (ulonglong)uStack_150;
    if (uStack_138 <= uVar7 && uVar7 - uStack_138 != 0) {
      if (uStack_148 != 0) {
        pub_1406abac0(pbStack_140,uStack_148,1);
      }
code_r0x0001424ec452:
      pdb_140f3f5b0(&uStack_c8);
      pbVar3 = (byte *)pdb_142dea6e0(&UNK_1435129bd,0x2b,&uStack_c8);
code_r0x0001424ec47b:
      ppbVar8 = ppbStack_168;
      if (ppbStack_168 != (byte **)0x0) {
        pub_1406abac0(pbStack_58,(ulonglong)ppbStack_168,1);
        ppbVar8 = ppbStack_168;
      }
      goto code_r0x0001424ec499;
    }
    if (SBORROW8(0,uStack_148)) goto code_r0x0001424ec452;
    uStack_60 = uStack_148;
    uStack_f0 = 0;
    pbStack_e8 = (byte *)0x1;
    uStack_e0 = 0;
    uStack_1d0 = 0;
    pbStack_70 = pbStack_140;
    puStack_1d8 = &uStack_f0;
    uVar5 = pdb_1406d0830();
    pdb_140ade920(&uStack_130,&puStack_1d8,uVar5,uVar7,uStack_150,uStack_14c,0xd);
    uVar5 = uStack_e0;
    pbVar3 = pbStack_e8;
    uVar7 = uStack_f0;
    if (CONCAT44(uStack_12c,uStack_130) != -0x7ffffffffffffff6) {
      uStack_178 = uStack_100;
      uStack_174 = uStack_fc;
      uStack_170 = uStack_f8;
      uStack_16c = uStack_f4;
      uStack_188 = uStack_110;
      uStack_184 = uStack_10c;
      uStack_180 = uStack_108;
      uStack_17c = uStack_104;
      uStack_198 = uStack_120;
      uStack_194 = uStack_11c;
      uStack_190 = uStack_118;
      uStack_18c = uStack_114;
      uStack_1a8 = uStack_130;
      uStack_1a4 = uStack_12c;
      uStack_1a0 = uStack_128;
      uStack_19c = uStack_124;
      uStack_3a = 1;
      pdb_140f3f5b0(&uStack_c8);
      uStack_1e8 = uStack_a8;
      pbStack_1f8 = uStack_b8;
      uStack_1f0 = uStack_b0;
      pbStack_208 = uStack_c8;
      uStack_200 = uStack_c0;
      uStack_88 = uStack_100;
      uStack_84 = uStack_fc;
      uStack_80 = uStack_f8;
      uStack_7c = uStack_f4;
      uStack_98 = uStack_110;
      uStack_94 = uStack_10c;
      uStack_90 = uStack_108;
      uStack_8c = uStack_104;
      uStack_a8 = CONCAT44(uStack_11c,uStack_120);
      uStack_a0 = uStack_118;
      uStack_9c = uStack_114;
      uStack_b8 = (byte *)CONCAT44(uStack_12c,uStack_130);
      uStack_b0 = CONCAT44(uStack_124,uStack_128);
      uStack_c8 = &UNK_1435129e8;
      uStack_c0 = 0x2d;
      uStack_3a = 0;
      pbVar3 = (byte *)pdb_142dea520(&uStack_c8,&pbStack_208);
      if (uStack_f0 != 0) {
        pub_1406abac0(pbStack_e8,uStack_f0,1);
      }
      if (uStack_60 != 0) {
        pub_1406abac0(pbStack_70,uStack_60,1);
      }
      goto code_r0x0001424ec47b;
    }
    if (uStack_60 != 0) {
      pub_1406abac0(pbStack_70,uStack_60,1);
    }
    ppbVar8 = ppbStack_168;
    if (ppbStack_168 != (byte **)0x0) {
      pub_1406abac0(pbStack_58,(ulonglong)ppbStack_168,1);
      ppbVar8 = ppbStack_168;
    }
    LOCK();
    *ppbStack_50 = *ppbStack_50 + -1;
    UNLOCK();
    if (*ppbStack_50 == (byte *)0x0) {
      pdb_140cd0de0(&ppbStack_50);
    }
    pdb_14098a860(&uStack_1c8);
    puVar9 = puStack_48;
    *(undefined1 *)(puStack_48 + 0x18) = 1;
    if (SBORROW8(0,uVar7)) goto code_r0x0001424ec4c8;
    if (uVar7 == 0x8000000000000001) {
      *param_1 = 2;
      uVar1 = 3;
      goto code_r0x0001424ec4ea;
    }
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x30,8);
    if (pbVar4 == (byte *)0x0) {
      puStack_68 = (undefined4 *)uVar7;
      pbStack_58 = pbVar3;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    pbVar4[0] = 1;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar4[8] = 1;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    *(ulonglong *)(pbVar4 + 0x10) = uVar7;
    *(byte **)(pbVar4 + 0x18) = pbVar3;
    *(undefined8 *)(pbVar4 + 0x20) = uVar5;
    pbVar4[0x28] = 0;
    ppbVar8 = (byte **)&UNK_143512870;
    uVar5 = 0;
  }
  *param_1 = uVar5;
  param_1[1] = pbVar4;
  param_1[2] = ppbVar8;
  uVar1 = 1;
  puStack_48 = puVar9;
code_r0x0001424ec4ea:
  *(undefined1 *)(puStack_48 + 0x1c) = uVar1;
  return param_1;
}

