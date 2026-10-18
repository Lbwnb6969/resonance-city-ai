// VA 0x1414f7500, PDB extent 1290 bytes
// system_decorator::merge_proposal_wall_decorators::find_best_wall_decorator_merge_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_wall_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::merge_proposal_wall_decorators::find_best_wall_decorator_merge_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_wall_decorators.rs
   Extent: 1290 */

undefined8 *
pdb_1414f7500(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 *param_10,longlong param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = param_10 + param_11;
  uVar5 = param_11 * 4;
  do {
    uVar5 = uVar5 - 4;
    if (param_10 == puVar1) {
      *param_1 = 8;
      return param_1;
    }
    uVar2 = *param_10;
    param_10 = param_10 + 1;
    pdb_1414f7a10(&uStack_1f8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar2,
                  param_12,param_13);
  } while ((int)uStack_1f8 == 8);
  uStack_298 = uStack_188;
  uStack_290 = uStack_180;
  uStack_2a8 = uStack_198;
  uStack_2a0 = uStack_190;
  uStack_2b8 = uStack_1a8;
  uStack_2b0 = uStack_1a0;
  uStack_2c8 = uStack_1b8;
  uStack_2c0 = uStack_1b0;
  uStack_2d8 = uStack_1c8;
  uStack_2d4 = uStack_1c4;
  uStack_2d0 = uStack_1c0;
  uStack_2cc = uStack_1bc;
  uStack_2e8 = uStack_1d8;
  uStack_2e4 = uStack_1d4;
  uStack_2e0 = uStack_1d0;
  uStack_2dc = uStack_1cc;
  uStack_2f8 = (undefined4)uStack_1e8;
  uStack_2f4 = uStack_1e8._4_4_;
  uStack_2f0 = (undefined4)uStack_1e0;
  uStack_2ec = uStack_1e0._4_4_;
  uStack_308 = uStack_1f8;
  uStack_300 = uStack_1f0;
  if (param_10 != puVar1) {
    uVar7 = 0;
    do {
      pdb_1414f7a10(aiStack_f8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10[uVar7],param_12,param_13);
      if (aiStack_f8[0] == 8) {
        uStack_208 = uStack_298;
        uStack_200 = uStack_290;
        uStack_218 = uStack_2a8;
        uStack_210 = uStack_2a0;
        uStack_228 = uStack_2b8;
        uStack_220 = uStack_2b0;
        uStack_238 = uStack_2c8;
        uStack_230 = uStack_2c0;
      }
      else {
        uStack_108 = uStack_88;
        uStack_100 = uStack_80;
        uVar4 = uStack_100;
        uStack_118 = uStack_98;
        uStack_110 = uStack_90;
        uStack_128 = uStack_a8;
        uStack_120 = uStack_a0;
        uStack_138 = uStack_b8;
        uStack_130 = uStack_b0;
        uStack_148 = uStack_c8;
        uStack_140 = uStack_c0;
        uStack_158 = uStack_d8;
        uStack_150 = uStack_d0;
        uStack_168 = uStack_e8;
        uStack_160 = uStack_e0;
        uStack_170 = uStack_f0;
        uStack_1f8 = uStack_308;
        uStack_1f0 = uStack_300;
        uStack_1e8 = CONCAT44(uStack_2f4,uStack_2f8);
        uStack_1e0 = CONCAT44(uStack_2ec,uStack_2f0);
        uStack_1d8 = uStack_2e8;
        uStack_1d4 = uStack_2e4;
        uStack_1d0 = uStack_2e0;
        uStack_1cc = uStack_2dc;
        uStack_1c8 = uStack_2d8;
        uStack_1c4 = uStack_2d4;
        uStack_1c0 = uStack_2d0;
        uStack_1bc = uStack_2cc;
        uStack_1b8 = uStack_2c8;
        uStack_1b0 = uStack_2c0;
        uStack_1a8 = uStack_2b8;
        uStack_1a0 = uStack_2b0;
        uStack_198 = uStack_2a8;
        uStack_190 = uStack_2a0;
        uStack_188 = uStack_298;
        uStack_180 = uStack_290;
        uVar3 = uStack_180;
        uStack_180._4_4_ = (float)((ulonglong)uStack_290 >> 0x20);
        uStack_100._4_4_ = (float)((ulonglong)uStack_80 >> 0x20);
        uStack_180 = uVar3;
        uStack_100 = uVar4;
        if (NAN(uStack_180._4_4_) || NAN(uStack_100._4_4_)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430191f0);
        }
        puVar6 = &uStack_1f8;
        if (uStack_100._4_4_ < uStack_180._4_4_) {
          puVar6 = &uStack_178;
        }
        uStack_208 = puVar6[0xe];
        uStack_200 = puVar6[0xf];
        uStack_218 = puVar6[0xc];
        uStack_210 = puVar6[0xd];
        uStack_228 = puVar6[10];
        uStack_220 = puVar6[0xb];
        uStack_238 = puVar6[8];
        uStack_230 = puVar6[9];
        uStack_308._0_4_ = *(undefined4 *)puVar6;
        uStack_308._4_4_ = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_300._0_4_ = *(undefined4 *)(puVar6 + 1);
        uStack_300._4_4_ = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_2f8 = *(undefined4 *)(puVar6 + 2);
        uStack_2f4 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uStack_2f0 = *(undefined4 *)(puVar6 + 3);
        uStack_2ec = *(undefined4 *)((longlong)puVar6 + 0x1c);
        uStack_2e8 = *(undefined4 *)(puVar6 + 4);
        uStack_2e4 = *(undefined4 *)((longlong)puVar6 + 0x24);
        uStack_2e0 = *(undefined4 *)(puVar6 + 5);
        uStack_2dc = *(undefined4 *)((longlong)puVar6 + 0x2c);
        uStack_2d8 = *(undefined4 *)(puVar6 + 6);
        uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 0x34);
        uStack_2d0 = *(undefined4 *)(puVar6 + 7);
        uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0x3c);
      }
      uStack_2c8 = uStack_238;
      uStack_2c0 = uStack_230;
      uStack_2b8 = uStack_228;
      uStack_2b0 = uStack_220;
      uStack_2a8 = uStack_218;
      uStack_2a0 = uStack_210;
      uStack_298 = uStack_208;
      uStack_290 = uStack_200;
      uVar7 = uVar7 + 1;
    } while (uVar5 >> 2 != uVar7);
  }
  param_1[0xe] = uStack_298;
  param_1[0xf] = uStack_290;
  param_1[0xc] = uStack_2a8;
  param_1[0xd] = uStack_2a0;
  param_1[10] = uStack_2b8;
  param_1[0xb] = uStack_2b0;
  param_1[8] = uStack_2c8;
  param_1[9] = uStack_2c0;
  param_1[6] = CONCAT44(uStack_2d4,uStack_2d8);
  param_1[7] = CONCAT44(uStack_2cc,uStack_2d0);
  param_1[4] = CONCAT44(uStack_2e4,uStack_2e8);
  param_1[5] = CONCAT44(uStack_2dc,uStack_2e0);
  param_1[2] = CONCAT44(uStack_2f4,uStack_2f8);
  param_1[3] = CONCAT44(uStack_2ec,uStack_2f0);
  *param_1 = uStack_308;
  param_1[1] = uStack_300;
  return param_1;
}

