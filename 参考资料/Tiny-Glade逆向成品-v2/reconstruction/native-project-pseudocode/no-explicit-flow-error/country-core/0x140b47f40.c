// VA 0x140b47f40, PDB extent 1778 bytes
// country_core::systems::ui_move_wall_group::WallGroupTransformCache::apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupTransformCache::apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 1778 */

void pdb_140b47f40(float *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  longlong lVar36;
  longlong lVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  undefined4 uStack_218;
  undefined4 uStack_214;
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
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  undefined4 uStack_ac;
  longlong lStack_a8;
  byte *pbStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar36 = *(longlong *)(param_1 + 0x1c);
  lStack_128 = *(longlong *)(param_1 + 0x1e) * 200 + lVar36;
  lStack_110 = *param_2;
  pbVar34 = (byte *)param_2[1];
  pbStack_108 = pbVar34 + param_2[2] * 0x70;
  uStack_100 = 0;
  uStack_f8 = 0;
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  uVar2 = *(undefined8 *)(param_1 + 4);
  uStack_ac = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar4 = *param_4;
  puStack_e8 = (undefined4 *)param_4[2];
  pbVar35 = pbVar34;
  lStack_130 = lVar36;
  pbStack_120 = pbVar34;
  pbStack_118 = pbVar34;
  uStack_e0 = param_3;
  lStack_d8 = lStack_110;
  pbStack_d0 = pbVar34;
  lStack_c8 = lVar36;
  lStack_c0 = lStack_128;
  pbStack_b8 = pbStack_108;
  if (lVar36 != lStack_128) {
    do {
      lVar1 = lVar36 + 200;
      lStack_130 = lVar1;
      if (pbVar34 == pbStack_b8) goto LAB_140b482d3;
      pbVar35 = pbVar34 + 0x70;
      lVar5 = *(longlong *)pbVar34;
      pbStack_118 = pbVar35;
      if (SBORROW8(0,lVar5)) break;
      lVar32 = *(longlong *)(pbVar34 + 0x68);
      lVar26 = *(longlong *)(pbVar34 + 0x58);
      lVar27 = *(longlong *)(pbVar34 + 0x60);
      lVar28 = *(longlong *)(pbVar34 + 0x48);
      lVar29 = *(longlong *)(pbVar34 + 0x50);
      uVar12 = *(undefined4 *)(pbVar34 + 8);
      uVar13 = *(undefined4 *)(pbVar34 + 0xc);
      uVar14 = *(undefined4 *)(pbVar34 + 0x10);
      uVar15 = *(undefined4 *)(pbVar34 + 0x14);
      uVar16 = *(undefined4 *)(pbVar34 + 0x18);
      uVar17 = *(undefined4 *)(pbVar34 + 0x1c);
      uVar18 = *(undefined4 *)(pbVar34 + 0x20);
      uVar19 = *(undefined4 *)(pbVar34 + 0x24);
      uVar20 = *(undefined4 *)(pbVar34 + 0x28);
      uVar21 = *(undefined4 *)(pbVar34 + 0x2c);
      uVar22 = *(undefined4 *)(pbVar34 + 0x30);
      uVar23 = *(undefined4 *)(pbVar34 + 0x34);
      uVar24 = *(undefined4 *)(pbVar34 + 0x38);
      uVar25 = *(undefined4 *)(pbVar34 + 0x3c);
      lVar30 = *(longlong *)(pbVar34 + 0x40);
      uStack_f0 = *(undefined8 *)(lVar36 + 0xa8);
      lVar37 = *(longlong *)(lVar36 + 0x98);
      lStack_a8 = lVar37;
      if (lVar37 == 0) {
        pbStack_a0 = (byte *)0x4;
      }
      else {
        lVar6 = *(longlong *)(lVar36 + 0x90);
        pdb_14007ee60();
        pbStack_a0 = pub_1406abab0(lVar37 * 0xc,4);
        if (pbStack_a0 == (byte *)0x0) {
          uStack_91 = 1;
          pdb_142dc7e2a(4,lVar37 * 0xc);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar31 = 4;
        do {
          uVar3 = *(undefined8 *)(lVar6 + lVar31);
          fVar38 = (float)uVar3;
          fVar40 = (float)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)(pbStack_a0 + lVar31 + -4) = *(undefined4 *)(lVar6 + -4 + lVar31);
          *(ulonglong *)(pbStack_a0 + lVar31) =
               CONCAT44(fVar40 * fVar11 + fVar38 * fVar9,fVar40 * fVar10 + fVar38 * fVar8);
          lVar31 = lVar31 + 0xc;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
      fVar38 = (float)*(undefined8 *)(lVar36 + 0xb8);
      fVar40 = (float)((ulonglong)*(undefined8 *)(lVar36 + 0xb8) >> 0x20);
      *puStack_e8 = uStack_ac;
      lVar37 = *(longlong *)(lVar4 + 0x30);
      uVar3 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar37 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e7c0(lVar4 + 0x20);
      }
      lVar6 = *(longlong *)(lVar4 + 0x28);
      lVar31 = lVar37 * 0x30;
      *(longlong *)(lVar6 + lVar31) = lStack_a8;
      *(byte **)(lVar6 + 8 + lVar31) = pbStack_a0;
      *(longlong *)(lVar6 + 0x10 + lVar31) = lStack_a8;
      *(undefined8 *)(lVar6 + 0x18 + lVar31) = uStack_f0;
      *(ulonglong *)(lVar6 + 0x20 + lVar31) =
           CONCAT44(fVar40 * fVar11 + fVar38 * fVar9 + (float)((ulonglong)uVar2 >> 0x20),
                    fVar40 * fVar10 + fVar38 * fVar8 + (float)uVar2);
      *(undefined8 *)(lVar6 + 0x28 + lVar31) = uVar3;
      *(longlong *)(lVar4 + 0x30) = lVar37 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
      uStack_218 = (undefined4)lVar5;
      uStack_214 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_1a8 = uStack_218;
      uStack_1a4 = uStack_214;
      uStack_91 = 0;
      uStack_1a0 = uVar12;
      uStack_19c = uVar13;
      uStack_198 = uVar14;
      uStack_194 = uVar15;
      uStack_190 = uVar16;
      uStack_18c = uVar17;
      uStack_188 = uVar18;
      uStack_184 = uVar19;
      uStack_180 = uVar20;
      uStack_17c = uVar21;
      uStack_178 = uVar22;
      uStack_174 = uVar23;
      uStack_170 = uVar24;
      uStack_16c = uVar25;
      lStack_168 = lVar30;
      lStack_160 = lVar28;
      lStack_158 = lVar29;
      lStack_150 = lVar26;
      lStack_148 = lVar27;
      lStack_140 = lVar32;
      pdb_14092f410(uStack_e0,*(undefined8 *)(lVar36 + 0xa8),&uStack_1a8);
      pbVar34 = pbVar35;
      lVar36 = lVar1;
    } while (lVar1 != lStack_c0);
  }
  uVar33 = (ulonglong)((longlong)pbStack_b8 - (longlong)pbVar35) / 0x70;
  if (pbStack_b8 != pbVar35) {
    pbVar35 = pbVar35 + 0x20;
    do {
      if (*(longlong *)(pbVar35 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar35 + -0x18),*(longlong *)(pbVar35 + -0x20) << 3,4);
      }
      if (*(longlong *)(pbVar35 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar35,*(longlong *)(pbVar35 + -8) << 2,4);
      }
      pbVar35 = pbVar35 + 0x70;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
LAB_140b482d3:
  if (lStack_d8 != 0) {
    pub_1406abac0(pbStack_d0,lStack_d8 * 0x70,8);
  }
  uVar39 = pub_142e32980(fVar9,fVar8);
  if (_DAT_143035f20 < (float)(uVar39 & _DAT_142e377e0)) {
    pdb_1416069f0(&uStack_1a8,lStack_c8,lStack_c0);
    lVar36 = CONCAT44(uStack_194,uStack_198);
    if (lVar36 == 0) {
      if (CONCAT44(uStack_1a4,uStack_1a8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_19c,uStack_1a0),CONCAT44(uStack_1a4,uStack_1a8) << 3,8
                     );
      }
    }
    else {
      pbStack_a0 = (byte *)CONCAT44(uStack_1a4,uStack_1a8);
      lStack_a8 = CONCAT44(uStack_19c,uStack_1a0);
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar4 = *param_5;
      lVar1 = *(longlong *)(lVar4 + 0x30);
      uVar2 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar1 == *(longlong *)(lVar4 + 0x20)) {
        pdb_142d7e6e0(lVar4 + 0x20);
      }
      lVar5 = *(longlong *)(lVar4 + 0x28);
      lVar32 = lVar1 * 0x20;
      *(byte **)(lVar5 + lVar32) = pbStack_a0;
      *(longlong *)(lVar5 + 8 + lVar32) = lStack_a8;
      *(longlong *)(lVar5 + 0x10 + lVar32) = lVar36;
      *(undefined8 *)(lVar5 + 0x18 + lVar32) = uVar2;
      *(longlong *)(lVar4 + 0x30) = lVar1 + 1;
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
    }
  }
  return;
}

