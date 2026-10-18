// VA 0x140a5fa80, PDB extent 1962 bytes
// country_core::resources::stairs::stairs_state::StairsState::restore_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::restore_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 1962 */

void pdb_140a5fa80(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_270 [32];
  longlong lStack_250;
  byte *pbStack_248;
  longlong lStack_238;
  byte *pbStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
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
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  int *piStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  piStack_80 = param_2;
  uVar9 = pdb_140a5f920();
  if (*piStack_80 == 1) {
    uVar10 = *(undefined8 *)(piStack_80 + 2);
  }
  else {
    uVar10 = pdb_140bb9c30();
    piStack_80[0] = 1;
    piStack_80[1] = 0;
    *(undefined8 *)(piStack_80 + 2) = uVar10;
  }
  plVar11 = (longlong *)pdb_140f3bda0();
  if ((char)plVar11[2] == '\x01') {
    uStack_f8 = *plVar11;
    param_2 = (int *)plVar11[1];
  }
  else {
    uStack_f8 = pdb_140f4fd10();
    *plVar11 = uStack_f8;
    plVar11[1] = (longlong)param_2;
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  lVar1 = param_1 + 0x28;
  *plVar11 = uStack_f8 + 1;
  uVar7 = _UNK_14303e558;
  uVar6 = _DAT_14303e550;
  uVar5 = _UNK_14303e548;
  uVar4 = _DAT_14303e540;
  uStack_108 = _DAT_14303e550;
  uStack_100 = _UNK_14303e558;
  uStack_118 = _DAT_14303e540;
  uStack_110 = _UNK_14303e548;
  puVar14 = &uStack_118;
  uStack_f0 = param_2;
  pdb_1417cc050(lVar1);
  uStack_138 = (undefined4)uStack_f8;
  uStack_134 = uStack_f8._4_4_;
  uStack_130 = (undefined4)uStack_f0;
  uStack_12c = uStack_f0._4_4_;
  uStack_148 = (undefined4)uStack_108;
  uStack_144 = uStack_108._4_4_;
  uStack_140 = (undefined4)uStack_100;
  uStack_13c = uStack_100._4_4_;
  uStack_158 = (undefined4)uStack_118;
  uStack_154 = uStack_118._4_4_;
  uStack_150 = (undefined4)uStack_110;
  uStack_14c = uStack_110._4_4_;
  lVar2 = *(longlong *)(piStack_80 + 6);
  lVar15 = *(longlong *)(piStack_80 + 8);
  uStack_71 = 1;
  plVar11 = (longlong *)pdb_140f3bda0();
  if ((char)plVar11[2] == '\x01') {
    uStack_f8 = *plVar11;
    puVar14 = (undefined8 *)plVar11[1];
  }
  else {
    uStack_71 = 1;
    uStack_f8 = pdb_140f4fd10();
    *plVar11 = uStack_f8;
    plVar11[1] = (longlong)puVar14;
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  *plVar11 = uStack_f8 + 1;
  uStack_108 = uVar6;
  uStack_100 = uVar7;
  uStack_118 = uVar4;
  uStack_110 = uVar5;
  uStack_f0 = (int *)puVar14;
  if (lVar15 != 0) {
    pdb_142d99bd0(&uStack_118,lVar15,&uStack_f8,1);
    lVar13 = 0;
    do {
      pdb_1403afce0(&uStack_118,*(undefined4 *)(lVar2 + lVar13 * 8),
                    *(undefined4 *)(lVar2 + 4 + lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar15);
  }
  lStack_1b8 = uStack_f8;
  puStack_1b0 = (undefined8 *)uStack_f0;
  uStack_1c8 = uStack_108;
  uStack_1c0 = uStack_100;
  uStack_1d8 = uStack_118;
  uStack_1d0 = uStack_110;
  uStack_f8 = CONCAT44(uStack_134,uStack_138);
  uStack_f0 = (int *)CONCAT44(uStack_12c,uStack_130);
  uStack_108 = CONCAT44(uStack_144,uStack_148);
  uStack_100 = CONCAT44(uStack_13c,uStack_140);
  uStack_118 = CONCAT44(uStack_154,uStack_158);
  uStack_110 = CONCAT44(uStack_14c,uStack_150);
  uStack_71 = 0;
  pdb_140a5f000(auStack_270,&uStack_118,uVar9,&uStack_1d8,uVar10);
  pdb_140a5ec50(param_1,auStack_270,0);
  lVar2 = param_1 + 0xb8;
  pdb_1417cbce0(lVar2,lVar1,param_1 + 0x148);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0xd8);
    if (uVar3 == 0) {
      uVar12 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0xd0),0xff,uVar3 + 0x11);
      uVar12 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
      if (uVar3 < 8) {
        uVar12 = uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(ulonglong *)(param_1 + 0xe0) = uVar12;
  }
  lVar15 = *(longlong *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar15 != 0) {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8);
    do {
      if (puVar14[-1] != 0) {
        pub_1406abac0((byte *)*puVar14,puVar14[-1] << 3,4);
      }
      puVar14 = puVar14 + 5;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x120);
    if (uVar3 == 0) {
      uVar12 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x118),0xff,uVar3 + 0x11);
      uVar12 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
      if (uVar3 < 8) {
        uVar12 = uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(ulonglong *)(param_1 + 0x128) = uVar12;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  pdb_1417cbce0(lVar2,lVar1,param_1 + 0x148);
  pdb_1417c58d0(&uStack_1a0,lVar1);
  uStack_168 = *(undefined4 *)(param_1 + 0x60);
  uStack_164 = *(undefined4 *)(param_1 + 100);
  uStack_160 = *(undefined4 *)(param_1 + 0x68);
  uStack_15c = *(undefined4 *)(param_1 + 0x6c);
  pdb_1417c5a90(&uStack_220,param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = uStack_1a0;
  uStack_110 = uStack_198;
  uStack_108 = uStack_190;
  uStack_100 = uStack_188;
  uStack_f8 = uStack_180;
  uStack_f0 = (int *)uStack_178;
  uStack_e8 = uStack_170;
  uStack_e4 = uStack_16c;
  uStack_e0 = uStack_168;
  uStack_dc = uStack_164;
  uStack_d8 = CONCAT44(uStack_15c,uStack_160);
  uStack_d0 = uStack_220;
  uStack_c8 = uStack_218;
  uStack_c0 = uStack_210;
  uStack_bc = uStack_20c;
  uStack_b8 = uStack_208;
  uStack_b4 = uStack_204;
  uStack_b0 = uStack_200;
  uStack_ac = uStack_1fc;
  uStack_a8 = uStack_1f8;
  uStack_a4 = uStack_1f4;
  uStack_1e8._0_4_ = (undefined4)uVar9;
  uStack_1e8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_a0 = uStack_1f0;
  uStack_9c = uStack_1ec;
  uStack_98 = (undefined4)uStack_1e8;
  uStack_94 = uStack_1e8._4_4_;
  uStack_1e8 = uVar9;
  lStack_120 = lVar2;
  uStack_90 = uStack_1e0;
  pdb_1404a7820(lVar2);
  pub_142e32760(param_1 + 0xb8,&uStack_118,0x90);
  *(undefined1 *)(param_1 + 0x178) = 1;
  if (lStack_250 != 0) {
    pub_1406abac0(pbStack_248,lStack_250 << 3,4);
  }
  piVar8 = piStack_80;
  if (lStack_238 != 0) {
    pub_1406abac0(pbStack_230,lStack_238 << 3,4);
  }
  lVar1 = *(longlong *)(piVar8 + 4);
  if (lVar1 != 0) {
    pub_1406abac0(*(byte **)(piVar8 + 6),lVar1 << 3,4);
  }
  return;
}

