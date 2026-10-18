// VA 0x1421510e0, PDB extent 5515 bytes
// system_color::replay_color::replay_color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/replay_color.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142152350) overlaps instruction at (ram,0x00014215234e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::replay_color::replay_color
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/replay_color.rs
   Extent: 5515 */

void pdb_1421510e0(longlong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 uVar15;
  char cVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  ulonglong uVar36;
  undefined4 *puVar37;
  ulonglong uVar38;
  undefined4 *puVar39;
  ulonglong uVar40;
  undefined4 *puVar41;
  ulonglong uVar42;
  undefined4 *puVar43;
  char *pcVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  longlong lVar49;
  ulonglong uVar50;
  code *pcVar51;
  longlong *plVar52;
  float fVar53;
  ulonglong *puVar54;
  ulonglong uVar55;
  ulonglong *puVar56;
  byte bVar57;
  longlong lVar58;
  ulonglong *puVar59;
  longlong lVar60;
  ulonglong uVar61;
  ulonglong *puVar62;
  longlong lVar63;
  ulonglong uVar64;
  longlong lVar65;
  char *pcVar66;
  undefined4 uVar67;
  undefined4 *puVar68;
  ulonglong *puVar69;
  undefined1 (*pauVar70) [16];
  ulonglong uVar71;
  ulonglong *puVar72;
  ulonglong *puVar73;
  undefined8 uVar74;
  ulonglong uVar75;
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar81;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  undefined7 uStack_2e8;
  undefined8 uStack_2e1;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong *aplStack_150 [4];
  ulonglong uStack_130;
  ulonglong uStack_128;
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
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong *puStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  longlong *plStack_a8;
  ulonglong *puStack_a0;
  ulonglong *puStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_f8 = param_2[4];
  puVar25 = (undefined4 *)param_2[6];
  uStack_120 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puStack_98 = (ulonglong *)param_2[8];
  puVar26 = (undefined4 *)param_2[10];
  uStack_11c = *(undefined4 *)((longlong)param_2 + 0x5c);
  puStack_a0 = (ulonglong *)param_2[0xc];
  puVar27 = (undefined4 *)param_2[0xe];
  uStack_118 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_c0 = param_2[0x10];
  puVar28 = (undefined4 *)param_2[0x12];
  uStack_114 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar55 = param_2[0x14];
  puVar29 = (undefined4 *)param_2[0x16];
  uVar17 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar75 = param_2[0x18];
  puVar30 = (undefined4 *)param_2[0x1a];
  uVar18 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uStack_f0 = param_2[0x1c];
  puVar31 = (undefined4 *)param_2[0x1e];
  uStack_110 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uStack_e8 = param_3[4];
  puVar32 = (undefined4 *)param_3[6];
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0x3c);
  uStack_e0 = param_3[8];
  puVar33 = (undefined4 *)param_3[10];
  uStack_108 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uStack_b8 = param_3[0xc];
  puVar34 = (undefined4 *)param_3[0xe];
  uStack_104 = *(undefined4 *)((longlong)param_3 + 0x7c);
  uStack_b0 = param_3[0x10];
  puVar35 = (undefined4 *)param_3[0x12];
  uVar19 = *(undefined4 *)((longlong)param_3 + 0x9c);
  uVar36 = param_3[0x14];
  puVar37 = (undefined4 *)param_3[0x16];
  uVar20 = *(undefined4 *)((longlong)param_3 + 0xbc);
  uVar38 = param_3[0x18];
  puVar39 = (undefined4 *)param_3[0x1a];
  uVar21 = *(undefined4 *)((longlong)param_3 + 0xdc);
  uVar40 = param_3[0x1c];
  puVar41 = (undefined4 *)param_3[0x1e];
  uVar22 = *(undefined4 *)((longlong)param_3 + 0xfc);
  uVar42 = param_3[0x20];
  puVar43 = (undefined4 *)param_3[0x22];
  uVar23 = *(undefined4 *)((longlong)param_3 + 0x11c);
  lVar63 = *param_1;
  plStack_a8 = param_4;
  pdb_140a6d970(lVar63);
  fVar12 = *(float *)(lVar63 + 0x28);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar54 = (ulonglong *)pdb_140b6ae10(lVar63);
  fVar53 = _DAT_142e3b1d8;
  if (puVar54 == (ulonglong *)0x0) {
    return;
  }
  puStack_d8 = (ulonglong *)0x0;
  puStack_d0 = (ulonglong *)0x8;
  puStack_c8 = (ulonglong *)0x0;
  pcVar44 = (char *)puVar54[1];
  uVar45 = puVar54[2];
  lVar46 = *plStack_a8;
  uStack_100 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_130 = *param_3;
  puVar47 = (undefined4 *)param_3[2];
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_128 = *param_2;
  puVar48 = (undefined4 *)param_2[2];
  lVar63 = uStack_b0 + 0x20;
  lVar1 = uStack_e0 + 0x20;
  lVar2 = uStack_b8 + 0x20;
  lVar3 = uStack_e8 + 0x20;
  lVar4 = uStack_130 + 0x20;
  lVar5 = uStack_c0 + 0x20;
  puVar6 = puStack_a0 + 4;
  lVar7 = uStack_f0 + 0x20;
  puVar8 = puStack_98 + 4;
  lVar58 = uStack_f8 + 0x20;
  lVar9 = uStack_128 + 0x20;
  puVar62 = puStack_98;
  puVar69 = puStack_a0;
  uVar61 = uStack_c0;
  uVar64 = uStack_b8;
  uVar71 = uStack_b0;
  puVar72 = (ulonglong *)0x0;
  pcVar10 = pcVar44;
  while (pcVar66 = pcVar10, puVar73 = puVar72, plStack_a8 = (longlong *)pcVar66,
        pcVar66 != pcVar44 + uVar45 * 0x30) {
    pcVar10 = pcVar66 + 0x30;
    puVar72 = (ulonglong *)((longlong)puVar73 + 1);
    if (*pcVar66 == '\x06') {
      puVar56 = *(ulonglong **)(pcVar66 + 0x10);
      bVar57 = (byte)puVar56[3] - 3;
      if ((byte)puVar56[3] < 3) {
        bVar57 = 5;
      }
      puVar68 = (undefined4 *)&UNK_143462e28;
      puVar59 = (ulonglong *)(&UNK_143462e28 + *(int *)(&UNK_143462e28 + (ulonglong)bVar57 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar57) {
      case 0:
        if ((*(float *)(pcVar66 + 0x18) != 0.0) || (NAN(*(float *)(pcVar66 + 0x18)))) break;
        uVar64 = puVar56[4];
        uVar61 = uStack_128;
        if (pcVar66[0x1c] == '\x01') {
          param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
          *puVar48 = uStack_fc;
          lVar65 = *(longlong *)(uStack_128 + 0x30);
          uVar74 = *(undefined8 *)(uStack_128 + 0x40);
          if (lVar65 == *(longlong *)(uStack_128 + 0x20)) {
            pdb_142d7e830(lVar9);
            uVar61 = uStack_128;
          }
        }
        else {
          param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
          *puVar48 = uStack_fc;
          lVar65 = *(longlong *)(uStack_128 + 0x30);
          uVar74 = *(undefined8 *)(uStack_128 + 0x40);
          if (lVar65 == *(longlong *)(uStack_128 + 0x20)) {
            pdb_142d7e830(lVar9);
            uVar61 = uStack_128;
          }
        }
code_r0x000142151f49:
        lVar49 = *(longlong *)(uVar61 + 0x28);
        *(undefined8 *)(lVar49 + lVar65 * 0x18) = uVar74;
        *(ulonglong *)(lVar49 + 8 + lVar65 * 0x18) = uVar64;
        *(int *)(lVar49 + 0x10 + lVar65 * 0x18) = (int)param_3;
        *(undefined1 *)(lVar49 + 0x14 + lVar65 * 0x18) = 1;
code_r0x0001421520cd:
        *(longlong *)(uVar61 + 0x30) = lVar65 + 1;
code_r0x0001421520d4:
        *(longlong *)(uVar61 + 0x40) = *(longlong *)(uVar61 + 0x40) + 1;
code_r0x0001421520f4:
        cVar16 = *(char *)((longlong)plStack_a8 + 8);
        puVar56 = puStack_c8;
        uVar61 = uStack_c0;
        uVar64 = uStack_b8;
        uVar71 = uStack_b0;
        puVar69 = puStack_a0;
        puVar62 = puStack_98;
        goto joined_r0x000142151b49;
      case 1:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar64 = puVar56[4];
          uVar61 = uStack_f8;
          if (pcVar66[0x1c] == '\x01') {
            param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
            *puVar25 = uStack_120;
            lVar65 = *(longlong *)(uStack_f8 + 0x30);
            uVar74 = *(undefined8 *)(uStack_f8 + 0x40);
            if (lVar65 == *(longlong *)(uStack_f8 + 0x20)) {
              pdb_142d7e830(lVar58);
              uVar61 = uStack_f8;
            }
          }
          else {
            param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
            *puVar25 = uStack_120;
            lVar65 = *(longlong *)(uStack_f8 + 0x30);
            uVar74 = *(undefined8 *)(uStack_f8 + 0x40);
            if (lVar65 == *(longlong *)(uStack_f8 + 0x20)) {
              pdb_142d7e830(lVar58);
              uVar61 = uStack_f8;
            }
          }
          goto code_r0x000142151f49;
        }
        break;
      case 2:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar61 = puVar56[4];
          if (pcVar66[0x1c] == '\x01') {
            param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
            *puVar26 = uStack_11c;
            uVar64 = puVar62[6];
            uVar71 = puVar62[8];
            if (uVar64 == puVar62[4]) {
              pdb_142d7e830(puVar8);
            }
          }
          else {
            param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
            *puVar26 = uStack_11c;
            uVar64 = puVar62[6];
            uVar71 = puVar62[8];
            if (uVar64 == puVar62[4]) {
              pdb_142d7e830(puVar8);
            }
          }
          uVar50 = puStack_98[5];
          *(ulonglong *)(uVar50 + uVar64 * 0x18) = uVar71;
          *(ulonglong *)(uVar50 + 8 + uVar64 * 0x18) = uVar61;
          *(int *)(uVar50 + 0x10 + uVar64 * 0x18) = (int)param_3;
          *(undefined1 *)(uVar50 + 0x14 + uVar64 * 0x18) = 1;
          puStack_98[6] = uVar64 + 1;
          puStack_98[8] = puStack_98[8] + 1;
          goto code_r0x0001421520f4;
        }
        break;
      case 3:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar64 = puVar56[4];
          uVar61 = uStack_f0;
          if (pcVar66[0x1c] == '\x01') {
            param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
            *puVar31 = uStack_110;
            lVar65 = *(longlong *)(uStack_f0 + 0x30);
            uVar74 = *(undefined8 *)(uStack_f0 + 0x40);
            if (lVar65 == *(longlong *)(uStack_f0 + 0x20)) {
              pdb_142d7e830(lVar7);
              uVar61 = uStack_f0;
            }
          }
          else {
            param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
            *puVar31 = uStack_110;
            lVar65 = *(longlong *)(uStack_f0 + 0x30);
            uVar74 = *(undefined8 *)(uStack_f0 + 0x40);
            if (lVar65 == *(longlong *)(uStack_f0 + 0x20)) {
              pdb_142d7e830(lVar7);
              uVar61 = uStack_f0;
            }
          }
          goto code_r0x000142151f49;
        }
        break;
      case 4:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar61 = puVar56[4];
          if (pcVar66[0x1c] == '\x01') {
            param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
            *puVar27 = uStack_118;
            uVar64 = puVar69[6];
            uVar71 = puVar69[8];
            if (uVar64 == puVar69[4]) {
              pdb_142d7e830(puVar6);
            }
          }
          else {
            param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
            *puVar27 = uStack_118;
            uVar64 = puVar69[6];
            uVar71 = puVar69[8];
            if (uVar64 == puVar69[4]) {
              pdb_142d7e830(puVar6);
            }
          }
          uVar50 = puStack_a0[5];
          *(ulonglong *)(uVar50 + uVar64 * 0x18) = uVar71;
          *(ulonglong *)(uVar50 + 8 + uVar64 * 0x18) = uVar61;
          *(int *)(uVar50 + 0x10 + uVar64 * 0x18) = (int)param_3;
          *(undefined1 *)(uVar50 + 0x14 + uVar64 * 0x18) = 1;
          puStack_a0[6] = uVar64 + 1;
          puStack_a0[8] = puStack_a0[8] + 1;
          goto code_r0x0001421520f4;
        }
        break;
      case 5:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          if (pcVar66[0x1c] == '\x01') {
            uVar64 = puVar56[2];
            uStack_158 = (undefined4)puVar56[4];
            uVar71 = puVar56[3];
            *puVar28 = uStack_114;
            lVar65 = *(longlong *)(uVar61 + 0x30);
            param_3 = *(ulonglong **)(uVar61 + 0x40);
            if (lVar65 == *(longlong *)(uVar61 + 0x20)) {
              pdb_142d7e6e0(lVar5);
            }
            lVar49 = *(longlong *)(uStack_c0 + 0x28);
            lVar60 = lVar65 * 0x20;
            *(ulonglong **)(lVar49 + lVar60) = param_3;
            *(ulonglong *)(lVar49 + 8 + lVar60) = uVar64;
            *(ulonglong *)(lVar49 + 0x10 + lVar60) = uVar71;
            *(undefined4 *)(lVar49 + 0x18 + lVar60) = uStack_158;
            *(undefined1 *)(lVar49 + 0x1c + lVar60) = 1;
            *(longlong *)(uStack_c0 + 0x30) = lVar65 + 1;
          }
          else {
            uVar64 = puVar56[2];
            uVar74 = *(undefined8 *)((longlong)puVar56 + 0x24);
            uStack_158 = *(undefined4 *)((longlong)puVar56 + 0x2c);
            *puVar28 = uStack_114;
            lVar65 = *(longlong *)(uVar61 + 0x30);
            param_3 = *(ulonglong **)(uVar61 + 0x40);
            if (lVar65 == *(longlong *)(uVar61 + 0x20)) {
              pdb_142d7e6e0(lVar5);
            }
            lVar49 = *(longlong *)(uStack_c0 + 0x28);
            lVar60 = lVar65 * 0x20;
            *(ulonglong **)(lVar49 + lVar60) = param_3;
            *(ulonglong *)(lVar49 + 8 + lVar60) = uVar64;
            *(undefined8 *)(lVar49 + 0x10 + lVar60) = uVar74;
            *(undefined4 *)(lVar49 + 0x18 + lVar60) = uStack_158;
            *(undefined1 *)(lVar49 + 0x1c + lVar60) = 1;
            *(longlong *)(uStack_c0 + 0x30) = lVar65 + 1;
          }
          *(longlong *)(uStack_c0 + 0x40) = *(longlong *)(uStack_c0 + 0x40) + 1;
          goto code_r0x0001421520f4;
        }
        break;
      case 6:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar67 = *(undefined4 *)
                    ((longlong)puVar56 + (ulonglong)((byte)pcVar66[0x1c] ^ 1) * 4 + 0x20);
          param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x1c);
          *puVar29 = uVar17;
          lVar65 = *(longlong *)(uVar55 + 0x30);
          uVar74 = *(undefined8 *)(uVar55 + 0x40);
          uVar61 = uVar55;
          if (lVar65 == *(longlong *)(uVar55 + 0x20)) {
            pdb_142d7e830(uVar55 + 0x20);
          }
code_r0x000142151ca7:
          lVar49 = *(longlong *)(uVar61 + 0x28);
          *(undefined8 *)(lVar49 + lVar65 * 0x18) = uVar74;
          *(int *)(lVar49 + 8 + lVar65 * 0x18) = (int)param_3;
          *(undefined4 *)(lVar49 + 0xc + lVar65 * 0x18) = uVar67;
          *(undefined1 *)(lVar49 + 0x10 + lVar65 * 0x18) = 1;
          goto code_r0x0001421520cd;
        }
        break;
      case 7:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar67 = *(undefined4 *)
                    ((longlong)puVar56 + (ulonglong)((byte)pcVar66[0x1c] ^ 1) * 4 + 0x20);
          param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x1c);
          *puVar30 = uVar18;
          lVar65 = *(longlong *)(uVar75 + 0x30);
          uVar74 = *(undefined8 *)(uVar75 + 0x40);
          uVar61 = uVar75;
          if (lVar65 == *(longlong *)(uVar75 + 0x20)) {
            pdb_142d7e830(uVar75 + 0x20);
          }
          goto code_r0x000142151ca7;
        }
        break;
      case 8:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar64 = puVar56[4];
          uVar61 = uStack_130;
          if (pcVar66[0x1c] == '\x01') {
            param_3 = (ulonglong *)(ulonglong)(uint)puVar56[5];
            *puVar47 = uStack_100;
            lVar65 = *(longlong *)(uStack_130 + 0x30);
            uVar74 = *(undefined8 *)(uStack_130 + 0x40);
            if (lVar65 == *(longlong *)(uStack_130 + 0x20)) {
              pdb_142d7e830(lVar4);
              uVar61 = uStack_130;
            }
          }
          else {
            param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x2c);
            *puVar47 = uStack_100;
            lVar65 = *(longlong *)(uStack_130 + 0x30);
            uVar74 = *(undefined8 *)(uStack_130 + 0x40);
            if (lVar65 == *(longlong *)(uStack_130 + 0x20)) {
              pdb_142d7e830(lVar4);
              uVar61 = uStack_130;
            }
          }
          goto code_r0x000142151f49;
        }
        break;
      case 9:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar61 = puVar56[2];
          if (pcVar66[0x1c] == '\x01') {
            uVar64 = (ulonglong)*(byte *)((longlong)puVar56 + 0x14);
            *puVar32 = uStack_10c;
            lVar65 = *(longlong *)(uStack_e8 + 0x30);
            param_3 = *(ulonglong **)(uStack_e8 + 0x40);
            if (lVar65 == *(longlong *)(uStack_e8 + 0x20)) {
              pdb_142d7e980(lVar3);
            }
          }
          else {
            uVar64 = (ulonglong)*(byte *)((longlong)puVar56 + 0x15);
            *puVar32 = uStack_10c;
            lVar65 = *(longlong *)(uStack_e8 + 0x30);
            param_3 = *(ulonglong **)(uStack_e8 + 0x40);
            if (lVar65 == *(longlong *)(uStack_e8 + 0x20)) {
              pdb_142d7e980(lVar3);
            }
          }
          uVar64 = uVar64 << 0x20 | (ulonglong)(uint)uVar61;
          uVar61 = uStack_e8;
code_r0x0001421520b9:
          lVar49 = *(longlong *)(uVar61 + 0x28);
          *(ulonglong **)(lVar49 + lVar65 * 0x10) = param_3;
          *(ulonglong *)(lVar49 + 8 + lVar65 * 0x10) = uVar64 | 0x10000000000;
          goto code_r0x0001421520cd;
        }
        break;
      case 10:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar67 = *(undefined4 *)((longlong)puVar56 + 0x1c);
          if (pcVar66[0x1c] == '\x01') {
            uVar81 = (undefined4)puVar56[4];
            *puVar34 = uStack_104;
            lVar65 = *(longlong *)(uVar64 + 0x30);
            param_3 = *(ulonglong **)(uVar64 + 0x40);
            if (lVar65 == *(longlong *)(uVar64 + 0x20)) {
              pdb_142d7e830(lVar2);
            }
          }
          else {
            uVar81 = *(undefined4 *)((longlong)puVar56 + 0x24);
            *puVar34 = uStack_104;
            lVar65 = *(longlong *)(uVar64 + 0x30);
            param_3 = *(ulonglong **)(uVar64 + 0x40);
            if (lVar65 == *(longlong *)(uVar64 + 0x20)) {
              pdb_142d7e830(lVar2);
            }
          }
          lVar49 = *(longlong *)(uStack_b8 + 0x28);
          *(ulonglong **)(lVar49 + lVar65 * 0x18) = param_3;
          *(undefined4 *)(lVar49 + 8 + lVar65 * 0x18) = uVar67;
          *(undefined4 *)(lVar49 + 0xc + lVar65 * 0x18) = uVar81;
          *(undefined1 *)(lVar49 + 0x10 + lVar65 * 0x18) = 1;
          *(longlong *)(uStack_b8 + 0x30) = lVar65 + 1;
          *(longlong *)(uStack_b8 + 0x40) = *(longlong *)(uStack_b8 + 0x40) + 1;
          puVar62 = puStack_98;
          puVar69 = puStack_a0;
          uVar61 = uStack_c0;
          uVar64 = uStack_b8;
          uVar71 = uStack_b0;
        }
        break;
      case 0xb:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar61 = puVar56[2];
          if (pcVar66[0x1c] == '\x01') {
            uVar64 = (ulonglong)*(byte *)((longlong)puVar56 + 0x14);
            *puVar33 = uStack_108;
            lVar65 = *(longlong *)(uStack_e0 + 0x30);
            param_3 = *(ulonglong **)(uStack_e0 + 0x40);
            if (lVar65 == *(longlong *)(uStack_e0 + 0x20)) {
              pdb_142d7e980(lVar1);
            }
          }
          else {
            uVar64 = (ulonglong)*(byte *)((longlong)puVar56 + 0x15);
            *puVar33 = uStack_108;
            lVar65 = *(longlong *)(uStack_e0 + 0x30);
            param_3 = *(ulonglong **)(uStack_e0 + 0x40);
            if (lVar65 == *(longlong *)(uStack_e0 + 0x20)) {
              pdb_142d7e980(lVar1);
            }
          }
          uVar64 = uVar64 << 0x20 | (ulonglong)(uint)uVar61;
          uVar61 = uStack_e0;
          goto code_r0x0001421520b9;
        }
        break;
      case 0xc:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar67 = *(undefined4 *)
                    ((longlong)puVar56 + (ulonglong)((byte)pcVar66[0x1c] ^ 1) * 4 + 0x20);
          uVar61 = puVar56[5];
          uVar24 = *(uint *)((longlong)puVar56 + 0x1c);
          param_3 = (ulonglong *)(ulonglong)uVar24;
          *puVar35 = uVar19;
          lVar65 = *(longlong *)(uVar71 + 0x30);
          uVar74 = *(undefined8 *)(uVar71 + 0x40);
          if (lVar65 == *(longlong *)(uVar71 + 0x20)) {
            pdb_142d7e830(lVar63);
          }
          lVar49 = *(longlong *)(uStack_b0 + 0x28);
          *(undefined8 *)(lVar49 + lVar65 * 0x18) = uVar74;
          *(uint *)(lVar49 + 8 + lVar65 * 0x18) = uVar24;
          *(undefined4 *)(lVar49 + 0xc + lVar65 * 0x18) = uVar67;
          *(char *)(lVar49 + 0x10 + lVar65 * 0x18) = (char)uVar61;
          *(undefined1 *)(lVar49 + 0x11 + lVar65 * 0x18) = 1;
          *(longlong *)(uStack_b0 + 0x30) = lVar65 + 1;
          *(longlong *)(uStack_b0 + 0x40) = *(longlong *)(uStack_b0 + 0x40) + 1;
          cVar16 = *(char *)((longlong)plStack_a8 + 8);
          puVar56 = puStack_c8;
          uVar61 = uStack_c0;
          uVar64 = uStack_b8;
          uVar71 = uStack_b0;
          puVar69 = puStack_a0;
          puVar62 = puStack_98;
          goto joined_r0x000142151b49;
        }
        break;
      case 0xd:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar15 = *(undefined *)((longlong)puVar56 + ((ulonglong)(byte)pcVar66[0x1c] ^ 0x15));
          uVar61 = puVar56[2];
          param_3 = (ulonglong *)(ulonglong)(uint)uVar61;
          *puVar37 = uVar20;
          lVar65 = *(longlong *)(uVar36 + 0x30);
          uVar74 = *(undefined8 *)(uVar36 + 0x40);
          if (lVar65 == *(longlong *)(uVar36 + 0x20)) {
            pdb_142d7e980(uVar36 + 0x20);
          }
          uVar64 = (ulonglong)CONCAT14(uVar15,(uint)uVar61) | 0x10000000000;
          uVar61 = uVar36;
code_r0x00014215191f:
          lVar49 = *(longlong *)(uVar61 + 0x28);
          *(undefined8 *)(lVar49 + lVar65 * 0x10) = uVar74;
          *(ulonglong *)(lVar49 + 8 + lVar65 * 0x10) = uVar64;
          *(longlong *)(uVar61 + 0x30) = lVar65 + 1;
          goto code_r0x0001421520d4;
        }
        break;
      case 0xe:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar15 = *(undefined *)((longlong)puVar56 + ((ulonglong)(byte)pcVar66[0x1c] ^ 0x15));
          uVar61 = puVar56[2];
          param_3 = (ulonglong *)(ulonglong)(uint)uVar61;
          *puVar39 = uVar21;
          lVar65 = *(longlong *)(uVar38 + 0x30);
          uVar74 = *(undefined8 *)(uVar38 + 0x40);
          if (lVar65 == *(longlong *)(uVar38 + 0x20)) {
            pdb_142d7e980(uVar38 + 0x20);
          }
          uVar64 = (ulonglong)CONCAT14(uVar15,(uint)uVar61) | 0x10000000000;
          uVar61 = uVar38;
          goto code_r0x00014215191f;
        }
        break;
      case 0xf:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar15 = *(undefined *)((longlong)puVar56 + ((ulonglong)(byte)pcVar66[0x1c] ^ 0x15));
          uVar61 = puVar56[2];
          param_3 = (ulonglong *)(ulonglong)(uint)uVar61;
          *puVar41 = uVar22;
          lVar65 = *(longlong *)(uVar40 + 0x30);
          uVar74 = *(undefined8 *)(uVar40 + 0x40);
          if (lVar65 == *(longlong *)(uVar40 + 0x20)) {
            pdb_142d7e980(uVar40 + 0x20);
          }
          uVar64 = (ulonglong)CONCAT14(uVar15,(uint)uVar61) | 0x10000000000;
          uVar61 = uVar40;
          goto code_r0x00014215191f;
        }
        break;
      case 0x10:
        if ((*(float *)(pcVar66 + 0x18) == 0.0) && (!NAN(*(float *)(pcVar66 + 0x18)))) {
          uVar67 = *(undefined4 *)
                    ((longlong)puVar56 + (ulonglong)((byte)pcVar66[0x1c] ^ 1) * 4 + 0x20);
          param_3 = (ulonglong *)(ulonglong)*(uint *)((longlong)puVar56 + 0x1c);
          *puVar43 = uVar23;
          lVar65 = *(longlong *)(uVar42 + 0x30);
          uVar74 = *(undefined8 *)(uVar42 + 0x40);
          uVar61 = uVar42;
          if (lVar65 == *(longlong *)(uVar42 + 0x20)) {
            pdb_142d7e830(uVar42 + 0x20);
          }
          goto code_r0x000142151ca7;
        }
        break;
      case 0x12:
        return;
      case 0x13:
        goto code_r0x0001421523d9;
      case 0x14:
        goto code_r0x000142152373;
      case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x16:
        goto LAB_142152250;
      case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x19:
        goto code_r0x0001421523b6;
      case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1b:
        _UNK_143462e31 =
             _UNK_143462e31 + (int)puVar59 +
             (uint)(0xfffffffebcb9d1d7 <
                   (ulonglong)(longlong)*(int *)(&UNK_143462e28 + (ulonglong)bVar57 * 4));
        goto code_r0x00014215233b;
      case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar16 = *(char *)((longlong)plStack_a8 + 8);
      puVar56 = puStack_c8;
joined_r0x000142151b49:
      puStack_c8 = puVar56;
      if (cVar16 == '\0') {
        if (puVar56 == puStack_d8) {
          pdb_142d896b0(&puStack_d8);
        }
        puStack_d0[(longlong)puVar56] = (ulonglong)puVar73;
        puStack_c8 = (ulonglong *)((longlong)puVar56 + 1);
        puVar62 = puStack_98;
        puVar69 = puStack_a0;
        uVar61 = uStack_c0;
        uVar64 = uStack_b8;
        uVar71 = uStack_b0;
      }
      else {
        fVar77 = *(float *)((longlong)plStack_a8 + 0xc) / fVar12;
        fVar13 = *(float *)((longlong)plStack_a8 + 0x18);
        if (fVar77 <= fVar53) {
          fVar77 = fVar53;
        }
        if (fVar77 < fVar13) {
          if (puVar56 == puStack_d8) {
            pdb_142d896b0(&puStack_d8);
          }
          puStack_d0[(longlong)puVar56] = (ulonglong)puVar73;
          puStack_c8 = (ulonglong *)((longlong)puVar56 + 1);
          fVar13 = *(float *)((longlong)plStack_a8 + 0x18);
          puVar62 = puStack_98;
          puVar69 = puStack_a0;
          uVar61 = uStack_c0;
          uVar64 = uStack_b8;
          uVar71 = uStack_b0;
        }
        *(float *)((longlong)plStack_a8 + 0x18) = fVar13 + *(float *)(lVar46 + 0x28);
      }
    }
  }
  uVar55 = (ulonglong)puStack_c8 >> 1;
  if (uVar55 != 0) {
    if (puStack_c8 < (ulonglong *)0x8) {
      uVar75 = 0;
    }
    else {
      uVar75 = uVar55 & 0xfffffffffffffffc;
      pauVar70 = (undefined1 (*) [16])(puStack_d0 + 2);
      lVar63 = 0;
      do {
        auVar78 = pauVar70[-1];
        auVar14 = *pauVar70;
        auVar76 = *(undefined1 (*) [16])
                   (puStack_d0 + (longlong)((longlong)puStack_c8 + lVar63 + -4));
        auVar79 = *(undefined1 (*) [16])
                   (puStack_d0 + (longlong)((longlong)puStack_c8 + lVar63 + -2));
        auVar80._0_8_ = auVar79._8_8_;
        auVar80._8_4_ = auVar79._0_4_;
        auVar80._12_4_ = auVar79._4_4_;
        auVar79._0_8_ = auVar76._8_8_;
        auVar79._8_4_ = auVar76._0_4_;
        auVar79._12_4_ = auVar76._4_4_;
        pauVar70[-1] = auVar80;
        *pauVar70 = auVar79;
        auVar76._0_8_ = auVar78._8_8_;
        auVar76._8_4_ = auVar78._0_4_;
        auVar76._12_4_ = auVar78._4_4_;
        auVar78._0_8_ = auVar14._8_8_;
        auVar78._8_4_ = auVar14._0_4_;
        auVar78._12_4_ = auVar14._4_4_;
        *(undefined1 (*) [16])(puStack_d0 + (longlong)((longlong)puStack_c8 + lVar63 + -2)) =
             auVar76;
        *(undefined1 (*) [16])(puStack_d0 + (longlong)((longlong)puStack_c8 + lVar63 + -4)) =
             auVar78;
        lVar63 = lVar63 + -4;
        pauVar70 = pauVar70 + 2;
      } while (-lVar63 != (uVar55 & 0xfffffffffffffffc));
      if (uVar55 == uVar75) goto joined_r0x0001421521af;
    }
    puVar56 = (ulonglong *)-uVar55;
    puVar69 = puStack_d0 + uVar75;
    puVar62 = (ulonglong *)-uVar75;
    puVar59 = puStack_d0 + (longlong)((longlong)puStack_c8 + -1);
LAB_142152250:
    do {
      uVar55 = *puVar69;
      *puVar69 = puVar59[(longlong)puVar62];
      puVar59[(longlong)puVar62] = uVar55;
      puVar62 = (ulonglong *)((longlong)puVar62 + -1);
      puVar69 = puVar69 + 1;
    } while (puVar56 != puVar62);
  }
joined_r0x0001421521af:
  puStack_a0 = puStack_d8;
  puStack_98 = puStack_d0;
  if (puStack_c8 != (ulonglong *)0x0) {
    puVar72 = puStack_d0 + (longlong)puStack_c8;
    puVar68 = &uStack_158;
    param_3 = puStack_d0;
    do {
      uVar55 = *param_3;
      uVar75 = puVar54[2];
      if (uVar75 <= uVar55) {
LAB_142152542:
        pdb_142dc7ef8(uVar55,uVar75,&UNK_143462e10);
                    /* WARNING: Does not return */
        pcVar51 = (code *)invalidInstructionException();
        (*pcVar51)();
      }
      uVar36 = puVar54[1];
      lVar63 = uVar55 * 0x30;
      bVar57 = *(byte *)(uVar36 + lVar63);
      pcVar66 = (char *)(ulonglong)bVar57;
      puVar11 = (undefined8 *)(uVar36 + 1 + lVar63);
      uStack_308 = *puVar11;
      uStack_300 = puVar11[1];
      puVar11 = (undefined8 *)(uVar36 + 0x11 + lVar63);
      uStack_2f8 = *puVar11;
      uVar74 = puVar11[1];
      puVar11 = (undefined8 *)(uVar36 + 0x20 + lVar63);
      uStack_2e1 = puVar11[1];
      uStack_2e8 = (undefined7)((ulonglong)*puVar11 >> 8);
      uStack_2f0 = (undefined7)uVar74;
      uStack_2e9 = (undefined1)((ulonglong)uVar74 >> 0x38);
      pub_142e32770(uVar36 + lVar63,lVar63 + uVar36 + 0x30,(~uVar55 + uVar75) * 0x30);
      uVar75 = uVar75 - 1;
      puVar54[2] = uVar75;
      puVar73 = puVar54;
      if (bVar57 == 0xc) goto LAB_142152542;
code_r0x00014215233b:
      *(ulonglong *)(puVar68 + 6) = CONCAT71(uStack_2e8,uStack_2e9);
      *(undefined8 *)(puVar68 + 8) = uStack_2e1;
      *(undefined8 *)((longlong)puVar68 + 9) = uStack_2f8;
      *(ulonglong *)((longlong)puVar68 + 0x11) = CONCAT17(uStack_2e9,uStack_2f0);
      *(undefined8 *)((longlong)puVar68 + -7) = uStack_308;
      *(undefined8 *)((longlong)puVar68 + 1) = uStack_300;
      if ((uint)pcVar66 < 0xb) {
        puVar56 = (ulonglong *)
                  (&UNK_143462e70 + *(int *)(&UNK_143462e70 + ((ulonglong)pcVar66 & 0xffffffff) * 4)
                  );
code_r0x000142152373:
        puVar54 = puVar73;
        puVar73 = puVar54;
        switch(puVar56) {
        case (ulonglong *)0x1421522ae:
          pdb_14099a2e0(puVar68);
          break;
        case (ulonglong *)0x142152375:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7b830(aplStack_150);
          }
          break;
        case (ulonglong *)0x142152398:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140315620(aplStack_150);
code_r0x0001421523b6:
            puVar54 = puVar73;
          }
          break;
        case (ulonglong *)0x1421523bb:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7b830(aplStack_150);
code_r0x0001421523d9:
            puVar54 = puVar73;
          }
          break;
        case (ulonglong *)0x1421523de:
          plVar52 = (longlong *)CONCAT44(uStack_154,uStack_158);
          LOCK();
          *plVar52 = *plVar52 + -1;
          UNLOCK();
          if (*plVar52 == 0) {
            pdb_140c7a720(puVar68);
          }
          break;
        case (ulonglong *)0x1421523fd:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7a030(aplStack_150);
          }
          break;
        case (ulonglong *)0x142152420:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7b830(aplStack_150);
          }
          break;
        case (ulonglong *)0x142152443:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7a0f0(aplStack_150);
          }
          break;
        case (ulonglong *)0x142152466:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7a030(aplStack_150);
          }
          break;
        case (ulonglong *)0x142152489:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140740180(aplStack_150);
          }
          break;
        case (ulonglong *)0x1421524ac:
          LOCK();
          *aplStack_150[0] = *aplStack_150[0] + -1;
          UNLOCK();
          if (*aplStack_150[0] == 0) {
            pdb_140c7b150(aplStack_150);
          }
        }
      }
      else {
        plVar52 = (longlong *)CONCAT44(uStack_154,uStack_158);
        LOCK();
        *plVar52 = *plVar52 + -1;
        UNLOCK();
        puVar54 = puVar73;
        if (*plVar52 == 0) {
          pdb_140c7bc60(puVar68);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 != puVar72);
  }
  if (puStack_a0 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_98,(longlong)puStack_a0 << 3,8);
  }
  return;
}

