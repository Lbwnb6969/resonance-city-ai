// VA 0x140a6e5c0, PDB extent 5033 bytes
// country_core::systems::clear_canvas::clear_canvas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/clear_canvas.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::clear_canvas::clear_canvas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/clear_canvas.rs
   Extent: 5033 */

void pdb_140a6e5c0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13,longlong *param_14,longlong *param_15,longlong *param_16)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  longlong *plVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  longlong lVar30;
  longlong lVar31;
  code *pcVar32;
  longlong lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong *plVar42;
  longlong lVar43;
  uint uVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  ulonglong uVar47;
  longlong lVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  longlong lVar52;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_100;
  longlong lStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  longlong lStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_4;
  lVar48 = param_4[1];
  uVar47 = *puVar4;
  puVar46 = (undefined8 *)0x0;
  puVar50 = (undefined8 *)(uVar47 - *(ulonglong *)(lVar48 + 0x18));
  if (uVar47 < *(ulonglong *)(lVar48 + 0x18)) {
    puVar50 = puVar46;
  }
  puVar45 = (undefined8 *)(uVar47 - *(ulonglong *)(lVar48 + 0x38));
  if (uVar47 < *(ulonglong *)(lVar48 + 0x38)) {
    puVar45 = puVar46;
  }
  puVar5 = *(undefined8 **)(lVar48 + 0x10);
  puVar6 = *(undefined8 **)(lVar48 + 0x30);
  puVar51 = (undefined8 *)((longlong)puVar6 - (longlong)puVar45);
  if (puVar6 < puVar45) {
    puVar51 = puVar46;
  }
  puVar49 = (undefined8 *)((longlong)puVar5 - (longlong)puVar50);
  if (puVar5 < puVar50) {
    puVar49 = puVar46;
  }
  uVar47 = *(ulonglong *)(lVar48 + 0x40);
  uVar7 = *param_7;
  puVar8 = (undefined4 *)param_7[2];
  uStack_e4 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uVar9 = param_7[4];
  puVar10 = (undefined4 *)param_7[6];
  uStack_e8 = *(undefined4 *)((longlong)param_7 + 0x3c);
  uVar11 = param_7[8];
  puVar12 = (undefined4 *)param_7[10];
  uStack_ec = *(undefined4 *)((longlong)param_7 + 0x5c);
  uVar13 = param_7[0xc];
  puVar14 = (undefined4 *)param_7[0xe];
  uStack_f0 = *(undefined4 *)((longlong)param_7 + 0x7c);
  uVar15 = param_7[0x10];
  puVar16 = (undefined4 *)param_7[0x12];
  uStack_d8 = *(undefined4 *)((longlong)param_7 + 0x9c);
  uVar17 = param_7[0x14];
  puVar18 = (undefined4 *)param_7[0x16];
  uStack_dc = *(undefined4 *)((longlong)param_7 + 0xbc);
  uVar19 = param_7[0x18];
  puVar20 = (undefined4 *)param_7[0x1a];
  uStack_e0 = *(undefined4 *)((longlong)param_7 + 0xdc);
  puStack_98 = (undefined8 *)param_7[0x1c];
  puStack_a8 = (undefined8 *)param_7[0x1e];
  lStack_b0 = CONCAT44(lStack_b0._4_4_,*(undefined4 *)((longlong)param_7 + 0xfc));
  plStack_c0 = (longlong *)*param_8;
  puVar21 = (undefined4 *)param_8[2];
  uStack_d4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  plVar42 = (longlong *)param_8[4];
  puVar22 = (undefined4 *)param_8[6];
  uStack_d0 = *(undefined4 *)((longlong)param_8 + 0x3c);
  plVar23 = (longlong *)param_8[8];
  puVar24 = (undefined4 *)param_8[10];
  uStack_cc = *(undefined4 *)((longlong)param_8 + 0x5c);
  plVar25 = (longlong *)param_8[0xc];
  puVar26 = (undefined4 *)param_8[0xe];
  uStack_c8 = *(undefined4 *)((longlong)param_8 + 0x7c);
  plVar27 = (longlong *)param_8[0x10];
  puVar28 = (undefined4 *)param_8[0x12];
  uStack_c4 = *(undefined4 *)((longlong)param_8 + 0x9c);
  lVar52 = *(longlong *)(lVar48 + 8);
  lVar48 = *(longlong *)(lVar48 + 0x28);
  *puVar4 = (uVar47 - (longlong)puVar51) - (longlong)puVar49;
  if ((puVar5 < puVar50 || (undefined8 *)((longlong)puVar5 - (longlong)puVar50) == (undefined8 *)0x0
      ) && (puVar6 < puVar45 ||
           (undefined8 *)((longlong)puVar6 - (longlong)puVar45) == (undefined8 *)0x0)) {
    return;
  }
  lVar48 = lVar48 + (longlong)puVar45 * 0x10;
  lVar52 = lVar52 + (longlong)puVar50 * 0x10;
  if (puVar5 < puVar50) {
    lVar52 = 8;
  }
  lVar43 = 0;
  if (puVar50 < puVar5) {
    lVar43 = lVar52 + -0x10 + (longlong)puVar49 * 0x10;
  }
  if (puVar6 < puVar45) {
    lVar48 = 8;
  }
  lVar48 = lVar48 + -0x10 + (longlong)puVar51 * 0x10;
  if (puVar6 <= puVar45) {
    lVar48 = lVar43;
  }
  *puVar4 = uVar47;
  plStack_b8 = param_1;
  if (2 < *_DAT_143ca8e90) {
    uStack_1b8 = 0;
    uStack_1b0 = &UNK_143041220;
    uStack_1a8 = 0x23;
    uStack_1a0 = 0;
    uStack_198 = &UNK_1430411f0;
    uStack_190 = (undefined8 *)0x2f;
    uStack_188 = 3;
    puStack_180 = &UNK_143041220;
    uStack_178 = 0x23;
    uStack_170 = 0x5600000001;
    puStack_168 = &UNK_1430411dc;
    puStack_160 = (undefined8 *)0x29;
    puVar45 = &uStack_1b8;
    pdb_140f332f0(&uStack_81);
  }
  cVar2 = *(char *)(lVar48 + 8);
  plVar38 = (longlong *)pdb_140f3bda0();
  if ((char)plVar38[2] == '\x01') {
    lVar48 = *plVar38;
    puVar45 = (undefined8 *)plVar38[1];
  }
  else {
    lVar48 = pdb_140f4fd10();
    *plVar38 = lVar48;
    plVar38[1] = (longlong)puVar45;
    *(undefined1 *)(plVar38 + 2) = 1;
  }
  *plVar38 = lVar48 + 1;
  uVar37 = _UNK_143041068;
  uVar36 = _DAT_143041060;
  uVar35 = _UNK_143041058;
  uVar34 = _DAT_143041050;
  puVar50 = puVar45;
  plVar38 = (longlong *)pdb_140f3bda0();
  if ((char)plVar38[2] == '\x01') {
    lVar52 = *plVar38;
    puVar50 = (undefined8 *)plVar38[1];
  }
  else {
    lVar52 = pdb_140f4fd10();
    *plVar38 = lVar52;
    plVar38[1] = (longlong)puVar50;
    *(undefined1 *)(plVar38 + 2) = 1;
  }
  *plVar38 = lVar52 + 1;
  puVar46 = puVar50;
  plVar38 = (longlong *)pdb_140f3bda0();
  if ((char)plVar38[2] == '\x01') {
    uStack_1c8 = *plVar38;
    puVar46 = (undefined8 *)plVar38[1];
  }
  else {
    uStack_1c8 = pdb_140f4fd10();
    *plVar38 = uStack_1c8;
    plVar38[1] = (longlong)puVar46;
    *(undefined1 *)(plVar38 + 2) = 1;
  }
  *plVar38 = uStack_1c8 + 1;
  uStack_1d8 = uVar36;
  uStack_1d0 = uVar37;
  uStack_1e8 = uVar34;
  uStack_1e0 = uVar35;
  uStack_1c0 = puVar46;
  plVar38 = (longlong *)pdb_140f3bda0();
  if ((char)plVar38[2] == '\x01') {
    lStack_100 = *plVar38;
    puStack_a0 = (undefined8 *)plVar38[1];
  }
  else {
    lStack_100 = pdb_140f4fd10();
    *plVar38 = lStack_100;
    plVar38[1] = (longlong)puVar46;
    *(undefined1 *)(plVar38 + 2) = 1;
    puStack_a0 = puVar46;
  }
  *plVar38 = lStack_100 + 1;
  uStack_1a8 = uVar36;
  uStack_1a0 = uVar37;
  uStack_1b8 = uVar34;
  uStack_1b0 = (undefined *)uVar35;
  uStack_188 = uVar34;
  puStack_180 = (undefined *)uVar35;
  uStack_178 = uVar36;
  uStack_170 = uVar37;
  uStack_158 = (undefined4)uStack_1e8;
  uStack_154 = uStack_1e8._4_4_;
  uStack_150 = (undefined4)uStack_1e0;
  uStack_14c = uStack_1e0._4_4_;
  uStack_148 = (undefined4)uStack_1d8;
  uStack_144 = uStack_1d8._4_4_;
  uStack_140 = (undefined4)uStack_1d0;
  uStack_13c = uStack_1d0._4_4_;
  uStack_138 = (undefined4)uStack_1c8;
  uStack_134 = uStack_1c8._4_4_;
  uStack_130 = (undefined4)uStack_1c0;
  uStack_12c = uStack_1c0._4_4_;
  uStack_118 = uVar36;
  uStack_110 = uVar37;
  uStack_128 = uVar34;
  uStack_120 = uVar35;
  *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
  lStack_f8 = *param_11;
  uStack_198 = (undefined *)lVar48;
  uStack_190 = puVar45;
  puStack_168 = (undefined *)lVar52;
  puStack_160 = puVar50;
  pdb_1404dc230();
  lVar48 = lStack_f8;
  pub_142e32760(lStack_f8,&uStack_1b8,0xb0);
  *(longlong *)(lVar48 + 0xb0) = lStack_100;
  *(undefined8 **)(lVar48 + 0xb8) = puStack_a0;
  *(undefined8 *)(lVar48 + 0xc0) = 0;
  *(undefined8 *)(lVar48 + 0x150) = 0;
  *(undefined1 *)(lVar48 + 0x1e0) = 0;
  *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
  *(undefined1 *)(*param_12 + 0x10) = 0;
  *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
  puVar50 = (undefined8 *)*param_15;
  if (puVar50[3] != 0) {
    uVar47 = puVar50[1];
    if (uVar47 == 0) {
      uVar39 = 0;
    }
    else {
      pub_142e32780(*puVar50,0xff,uVar47 + 0x11);
      uVar39 = (uVar47 + 1 & 0xfffffffffffffff8) - (uVar47 + 1 >> 3);
      if (uVar47 < 8) {
        uVar39 = uVar47;
      }
    }
    puVar50[3] = 0;
    puVar50[2] = uVar39;
  }
  *(undefined4 *)param_16[2] = *(undefined4 *)((longlong)param_16 + 0x1c);
  lVar48 = *param_16;
  lVar52 = *(longlong *)(lVar48 + 0x10);
  *(undefined8 *)(lVar48 + 0x10) = 0;
  if (lVar52 != 0) {
    puVar50 = (undefined8 *)(*(longlong *)(lVar48 + 8) + 0x20);
    do {
      if (puVar50[-4] != 0) {
        pub_1406abac0((byte *)puVar50[-3],puVar50[-4] << 3,4);
      }
      if (puVar50[-1] != 0) {
        pub_1406abac0((byte *)*puVar50,puVar50[-1] << 2,4);
      }
      puVar50 = puVar50 + 0x13;
      lVar52 = lVar52 + -1;
    } while (lVar52 != 0);
  }
  uVar3 = *(undefined4 *)((longlong)plStack_b8 + 0x1c);
  puVar29 = (undefined4 *)plStack_b8[2];
  *puVar29 = uVar3;
  lVar48 = *plStack_b8;
  puStack_a0 = (undefined8 *)puVar28;
  pdb_140b0deb0(lVar48);
  plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,cVar2);
  if (cVar2 == '\0') {
    *puVar29 = uVar3;
    *(undefined8 *)(lVar48 + 0xc0) = 0;
  }
  *puVar10 = uStack_e8;
  pdb_140a7a060(uVar9);
  *puVar12 = uStack_ec;
  pdb_140a7a060(uVar11);
  *puVar14 = uStack_f0;
  pdb_140a7a060(uVar13);
  puVar50 = puStack_98;
  *(undefined4 *)puStack_a8 = (undefined4)lStack_b0;
  lVar43 = puStack_98[1];
  lVar40 = puStack_98[2];
  lVar30 = puStack_98[4];
  lVar31 = puStack_98[5];
  lVar52 = lVar40 * 4;
  lVar48 = 0;
  do {
    if (lVar52 - lVar48 == 0) {
      lVar48 = 0;
      goto LAB_140a6ece0;
    }
    piVar1 = (int *)(lVar43 + lVar48);
    lVar48 = lVar48 + 4;
  } while (*piVar1 == 0);
  goto LAB_140a6ecf0;
  while (piVar1 = (int *)(lVar30 + lVar48), lVar48 = lVar48 + 4, *piVar1 == 0) {
LAB_140a6ece0:
    if (lVar31 * 4 - lVar48 == 0) goto LAB_140a6ed20;
  }
LAB_140a6ecf0:
  pub_142e32780(puStack_98 + 0x10,0xff,0x200);
  *(undefined1 *)((longlong)puVar50 + 0x283) = 1;
LAB_140a6ed20:
  if (lVar40 != 0) {
    pub_142e32780(lVar43,0,lVar52);
  }
  if (lVar31 != 0) {
    pub_142e32780(lVar30,0,lVar31 << 2);
  }
  *(undefined1 *)((longlong)puStack_98 + 0x284) = 1;
  *(undefined4 *)puStack_a8 = (undefined4)lStack_b0;
  puVar50 = (undefined8 *)pdb_140bf45b0(*param_5,&UNK_14331c998);
  if ((puVar50 != (undefined8 *)0x0) &&
     (lVar48 = (**(code **)(puVar50[1] + 0x18))(*puVar50), lVar48 != 0)) {
    pdb_140a85430(puStack_98,0,*(undefined8 *)(lVar48 + 8),*(undefined8 *)(lVar48 + 0x10));
    *puVar8 = uStack_e4;
    pdb_140a7a060(uVar7);
    *puVar16 = uStack_d8;
    pdb_140a7a060(uVar15);
    *puVar18 = uStack_dc;
    pdb_140a7a060(uVar17);
    *puVar20 = uStack_e0;
    pdb_140a7a060(uVar19);
    *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
    lVar48 = *param_14;
    pdb_140a0e500(lVar48);
    pdb_140a0e500(lVar48 + 0x30);
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x8;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = (undefined *)0x8;
    uStack_190 = (undefined8 *)0x0;
    pdb_140b42570(&uStack_1e8,&uStack_1b8,0x1000);
    plVar38 = (longlong *)pdb_14008d710(0);
    puVar50 = puStack_a0;
    cVar2 = (char)plStack_b8;
    if (plVar38 == (longlong *)0x0) {
      pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Does not return */
      pcVar32 = (code *)invalidInstructionException();
      (*pcVar32)();
    }
    puStack_98 = (undefined8 *)*plVar38;
    lStack_90 = plVar38[1];
    lStack_b0 = *plVar38;
    *plVar38 = lStack_b0 + 1;
    uStack_1a8 = uStack_1d8;
    uStack_1b8 = uStack_1e8;
    uStack_1b0 = (undefined *)uStack_1e0;
    uStack_1a0 = _DAT_14305a990;
    uStack_198 = (undefined *)_UNK_14305a998;
    uStack_190 = (undefined8 *)CONCAT44(_UNK_14305a9a4,_DAT_14305a9a0);
    uStack_188 = CONCAT44(_UNK_14305a9ac,_UNK_14305a9a8);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    puStack_a8 = (undefined8 *)*param_3;
    pdb_1404debf0();
    puStack_a8[6] = uStack_188;
    *(undefined4 *)(puStack_a8 + 4) = (undefined4)uStack_198;
    *(undefined4 *)((longlong)puStack_a8 + 0x24) = uStack_198._4_4_;
    *(undefined4 *)(puStack_a8 + 5) = (undefined4)uStack_190;
    *(undefined4 *)((longlong)puStack_a8 + 0x2c) = uStack_190._4_4_;
    *(undefined4 *)(puStack_a8 + 2) = (undefined4)uStack_1a8;
    *(undefined4 *)((longlong)puStack_a8 + 0x14) = uStack_1a8._4_4_;
    *(undefined4 *)(puStack_a8 + 3) = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)puStack_a8 + 0x1c) = uStack_1a0._4_4_;
    *puStack_a8 = uStack_1b8;
    puStack_a8[1] = uStack_1b0;
    puStack_a8[7] = puStack_98;
    puStack_a8[8] = lStack_90;
    puStack_a8[9] = 0x4000000040;
    puStack_a8[10] = _DAT_142e61200;
    *(undefined4 *)(puStack_a8 + 0xb) = 0;
    if (cVar2 == '\0') {
      uStack_198 = (undefined *)0x0;
      uStack_190 = (undefined8 *)0x0;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      puStack_98 = (undefined8 *)*param_9;
      pdb_14098f1a0();
      *puStack_98 = 0;
      puStack_98[1] = 8;
      puStack_98[2] = 0;
      puStack_98[3] = 0;
      puStack_98[4] = 8;
      puStack_98[5] = 0;
      puStack_98[6] = 0x8000000000000000;
      *(undefined4 *)(puStack_98 + 7) = (undefined4)uStack_1b8;
      *(undefined4 *)((longlong)puStack_98 + 0x3c) = uStack_1b8._4_4_;
      *(undefined4 *)(puStack_98 + 8) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)puStack_98 + 0x44) = uStack_1b0._4_4_;
      *(undefined4 *)(puStack_98 + 9) = (undefined4)uStack_1a8;
      *(undefined4 *)((longlong)puStack_98 + 0x4c) = uStack_1a8._4_4_;
      *(undefined4 *)(puStack_98 + 10) = (undefined4)uStack_1a0;
      *(undefined4 *)((longlong)puStack_98 + 0x54) = uStack_1a0._4_4_;
      *(undefined4 *)(puStack_98 + 0xb) = (undefined4)uStack_198;
      *(undefined4 *)((longlong)puStack_98 + 0x5c) = uStack_198._4_4_;
      *(undefined4 *)(puStack_98 + 0xc) = (undefined4)uStack_190;
      *(undefined4 *)((longlong)puStack_98 + 100) = uStack_190._4_4_;
      puStack_98[0xd] = 0xffffffffffffffff;
      *(undefined4 *)(puStack_98 + 0xe) = 0;
    }
    *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
    puStack_98 = (undefined8 *)*param_10;
    pdb_14099e780();
    *puStack_98 = 0;
    puStack_98[1] = 8;
    puStack_98[2] = 0;
    puStack_98[3] = 0;
    puStack_98[4] = 0;
    *(undefined4 *)(puStack_98 + 5) = 0x3f800000;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar48 = *param_2;
    if (*(longlong *)(lVar48 + 0x48) != 0) {
      uVar47 = *(ulonglong *)(lVar48 + 0x38);
      if (uVar47 == 0) {
        uVar39 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(lVar48 + 0x30),0xff,uVar47 + 0x11);
        uVar39 = (uVar47 + 1 & 0xfffffffffffffff8) - (uVar47 + 1 >> 3);
        if (uVar47 < 8) {
          uVar39 = uVar47;
        }
      }
      *(undefined8 *)(lVar48 + 0x48) = 0;
      *(ulonglong *)(lVar48 + 0x40) = uVar39;
    }
    *(undefined8 *)(lVar48 + 0x10) = 0;
    *(undefined4 *)(lVar48 + 0x60) = 0;
    *(undefined8 *)(lVar48 + 0x28) = 0;
    plVar38 = (longlong *)pdb_14008d710(0);
    if (plVar38 != (longlong *)0x0) {
      lVar52 = *plVar38;
      lVar43 = plVar38[1];
      *plVar38 = *plVar38 + 1;
      *puVar21 = uStack_d4;
      lVar48 = plStack_c0[1];
      if (lVar48 != 0) {
        lVar40 = lVar48 * 0x10 + 0x10;
        uVar47 = lVar48 + lVar40 + 0x11;
        if (uVar47 != 0) {
          pub_1406abac0((byte *)(*plStack_c0 - lVar40),uVar47,0x10);
        }
      }
      lVar31 = _UNK_14302ce18;
      lVar30 = _DAT_14302ce10;
      plStack_c0[2] = _DAT_14302ce10;
      plStack_c0[3] = lVar31;
      lVar40 = _UNK_14302ce08;
      lVar48 = _DAT_14302ce00;
      *plStack_c0 = _DAT_14302ce00;
      plStack_c0[1] = lVar40;
      plStack_c0[4] = lVar52;
      plStack_c0[5] = lVar43;
      *(undefined4 *)(plStack_c0 + 6) = 0;
      plVar38 = (longlong *)pdb_14008d710(0);
      if (plVar38 != (longlong *)0x0) {
        lVar43 = *plVar38;
        lVar33 = plVar38[1];
        *plVar38 = *plVar38 + 1;
        *puVar22 = uStack_d0;
        lVar52 = plVar42[1];
        if (lVar52 != 0) {
          lVar41 = lVar52 * 0x10 + 0x10;
          uVar47 = lVar52 + lVar41 + 0x11;
          if (uVar47 != 0) {
            pub_1406abac0((byte *)(*plVar42 - lVar41),uVar47,0x10);
          }
        }
        plVar42[2] = lVar30;
        plVar42[3] = lVar31;
        *plVar42 = lVar48;
        plVar42[1] = lVar40;
        plVar42[4] = lVar43;
        plVar42[5] = lVar33;
        *(undefined4 *)(plVar42 + 6) = 0;
        plVar42 = (longlong *)pdb_14008d710(0);
        if (plVar42 != (longlong *)0x0) {
          lVar43 = *plVar42;
          lVar33 = plVar42[1];
          *plVar42 = *plVar42 + 1;
          *puVar24 = uStack_cc;
          lVar52 = plVar23[1];
          if (lVar52 != 0) {
            lVar41 = lVar52 * 0x10 + 0x10;
            uVar47 = lVar52 + lVar41 + 0x11;
            if (uVar47 != 0) {
              pub_1406abac0((byte *)(*plVar23 - lVar41),uVar47,0x10);
            }
          }
          plVar23[2] = lVar30;
          plVar23[3] = lVar31;
          *plVar23 = lVar48;
          plVar23[1] = lVar40;
          plVar23[4] = lVar43;
          plVar23[5] = lVar33;
          *(undefined4 *)(plVar23 + 6) = 0;
          plVar42 = (longlong *)pdb_14008d710(0);
          if (plVar42 != (longlong *)0x0) {
            lVar43 = *plVar42;
            lVar33 = plVar42[1];
            *plVar42 = *plVar42 + 1;
            *puVar26 = uStack_c8;
            lVar52 = plVar25[1];
            if (lVar52 != 0) {
              lVar41 = lVar52 * 0x10 + 0x10;
              uVar47 = lVar52 + lVar41 + 0x11;
              if (uVar47 != 0) {
                pub_1406abac0((byte *)(*plVar25 - lVar41),uVar47,0x10);
              }
            }
            plVar25[2] = lVar30;
            plVar25[3] = lVar31;
            *plVar25 = lVar48;
            plVar25[1] = lVar40;
            plVar25[4] = lVar43;
            plVar25[5] = lVar33;
            *(undefined4 *)(plVar25 + 6) = 0;
            plVar42 = (longlong *)pdb_14008d710(0);
            if (plVar42 != (longlong *)0x0) {
              lVar43 = *plVar42;
              lVar33 = plVar42[1];
              *plVar42 = *plVar42 + 1;
              *(undefined4 *)puVar50 = uStack_c4;
              lVar52 = plVar27[1];
              if (lVar52 != 0) {
                lVar41 = lVar52 * 0x10 + 0x10;
                uVar47 = lVar52 + lVar41 + 0x11;
                if (uVar47 != 0) {
                  pub_1406abac0((byte *)(*plVar27 - lVar41),uVar47,0x10);
                }
              }
              plVar27[2] = lVar30;
              plVar27[3] = lVar31;
              *plVar27 = lVar48;
              plVar27[1] = lVar40;
              plVar27[4] = lVar43;
              plVar27[5] = lVar33;
              *(undefined4 *)(plVar27 + 6) = 3;
              if (cVar2 == '\0') {
                *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
                lVar48 = *param_6;
                pdb_140cac0c0(lVar48 + 8);
                *(undefined8 *)(lVar48 + 0x38) = 0;
                *(undefined1 *)(lVar48 + 0x40) = 0;
              }
              lVar48 = *param_13;
              if (lVar48 != 0) {
                *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
                if (*(longlong *)(lVar48 + 0x10) != 0) {
                  lVar52 = *(longlong *)(lVar48 + 8);
                  lVar48 = *(longlong *)(lVar48 + 0x10) * 0x18;
                  uVar47 = lVar48 - 0x18;
                  uVar44 = (uint)(uVar47 / 0x18);
                  lVar43 = lVar52;
                  if ((~uVar44 & 7) != 0) {
                    lVar40 = -(ulonglong)(uVar44 + 1 & 7);
                    do {
                      *(undefined8 *)(lVar43 + 8) = 0;
                      *(undefined4 *)(lVar43 + 0x10) = 0;
                      lVar43 = lVar43 + 0x18;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0);
                  }
                  if (0xa7 < uVar47) {
                    do {
                      *(undefined8 *)(lVar43 + 8) = 0;
                      *(undefined4 *)(lVar43 + 0x10) = 0;
                      *(undefined8 *)(lVar43 + 0x20) = 0;
                      *(undefined4 *)(lVar43 + 0x28) = 0;
                      *(undefined8 *)(lVar43 + 0x38) = 0;
                      *(undefined4 *)(lVar43 + 0x40) = 0;
                      *(undefined8 *)(lVar43 + 0x50) = 0;
                      *(undefined4 *)(lVar43 + 0x58) = 0;
                      *(undefined8 *)(lVar43 + 0x68) = 0;
                      *(undefined4 *)(lVar43 + 0x70) = 0;
                      *(undefined8 *)(lVar43 + 0x80) = 0;
                      *(undefined4 *)(lVar43 + 0x88) = 0;
                      *(undefined8 *)(lVar43 + 0x98) = 0;
                      *(undefined4 *)(lVar43 + 0xa0) = 0;
                      *(undefined8 *)(lVar43 + 0xb0) = 0;
                      *(undefined4 *)(lVar43 + 0xb8) = 0;
                      lVar43 = lVar43 + 0xc0;
                    } while (lVar43 != lVar52 + lVar48);
                  }
                }
              }
              return;
            }
          }
        }
      }
    }
    pdb_142dc7890(&UNK_143326860);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143043538);
}

