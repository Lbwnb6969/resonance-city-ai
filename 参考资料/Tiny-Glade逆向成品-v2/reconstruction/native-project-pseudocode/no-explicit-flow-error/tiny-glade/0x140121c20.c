// VA 0x140121c20, PDB extent 2663 bytes
// tiny_glade::tgsr_capture::drain_tgsr_capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::drain_tgsr_capture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 2663 */

void pdb_140121c20(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong *plVar17;
  int *piVar18;
  byte *pbVar19;
  undefined8 uVar20;
  int *piVar21;
  byte *arg1;
  undefined *puVar22;
  longlong lVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  ushort uVar26;
  ulonglong uVar27;
  byte *unaff_R12;
  undefined *puVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  longlong lStack_240;
  byte *pbStack_238;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined *puStack_168;
  longlong lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  longlong lStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    bVar11 = false;
    lStack_60 = 0;
    lVar14 = *(longlong *)(param_1 + 0x88);
  }
  else {
    lVar23 = 0x2c;
    lVar14 = pdb_140123c90(0x2c);
    puVar22 = &UNK_142e47038;
    if (lVar14 == 1) {
      if (0x2c < param_2) {
LAB_1401224f8:
        pdb_142dc8070(&UNK_142e47038,0x2c,0);
LAB_140122518:
        pdb_142dc8070(&UNK_142e47038,0x2c);
LAB_14012253c:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      uVar15 = pdb_140123c90(param_2);
      if ((uVar15 & 1) != 0) {
        if (0x2c < param_2 + 2) goto LAB_140122518;
        lVar23 = 0x2a - param_2;
        puVar22 = &UNK_142e4703a + param_2;
      }
    }
    puVar25 = &UNK_142e46e8f;
    puVar28 = &UNK_142e46e6a;
    do {
      bVar3 = puVar25[-1];
      uVar13 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar25[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar25[-3];
          if ((char)bVar5 < -0x40) {
            pbVar19 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar13 = bVar5 & 0x3f | (*pbVar19 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar13 = bVar5 & 0xf;
          }
          uVar13 = bVar4 & 0x3f | uVar13 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar13 = bVar4 & 0x1f;
        }
        uVar13 = (uint)(bVar3 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_140121d34;
LAB_140121d6b:
        puVar28 = puVar25 + -0x142e46e69;
        if (puVar28 < (undefined *)0x26) {
          lVar14 = 0x25 - (longlong)puVar28;
          puVar28 = puVar25 + 1;
          goto LAB_140121d8e;
        }
        pdb_142dc8070(&UNK_142e46e6a,0x25,puVar28,0x25,&UNK_142e470c8);
        goto LAB_1401224f8;
      }
      puVar25 = puVar25 + -1;
      if (uVar13 == 0x5c) goto LAB_140121d6b;
LAB_140121d34:
      if (uVar13 == 0x2f) goto LAB_140121d6b;
    } while (puVar25 != &UNK_142e46e6a);
    lVar14 = 0x25;
LAB_140121d8e:
    puVar16 = (uint *)pdb_140e97000();
    if (((char)puVar16[0x1a] != '\x01') &&
       (puVar16 = (uint *)pdb_142d7de90(puVar16,0), puVar16 == (uint *)0x0)) goto LAB_1401224b8;
    if (*(longlong *)puVar16 != 0) goto LAB_140122484;
    puVar16[0] = 0xffffffff;
    puVar16[1] = 0xffffffff;
    puStack_50 = puVar16;
    uStack_58 = pdb_140e94f10(puVar16 + 2,puVar22,lVar23,puVar28,lVar14,1,0);
    *(longlong *)puStack_50 = *(longlong *)puStack_50 + 1;
    bVar11 = true;
    lStack_60 = 1;
    lVar14 = *(longlong *)(param_1 + 0x88);
  }
  if (lVar14 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x70);
    uVar15 = 0xe2158ef04a125bf5;
    lVar23 = 0;
LAB_140121e33:
    uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x78);
    pcVar1 = (char *)(lVar14 + uVar15);
    auVar31[0] = -(*pcVar1 == DAT_142e344d0);
    auVar31[1] = -(pcVar1[1] == UNK_142e344d1);
    auVar31[2] = -(pcVar1[2] == UNK_142e344d2);
    auVar31[3] = -(pcVar1[3] == UNK_142e344d3);
    auVar31[4] = -(pcVar1[4] == UNK_142e344d4);
    auVar31[5] = -(pcVar1[5] == UNK_142e344d5);
    auVar31[6] = -(pcVar1[6] == UNK_142e344d6);
    auVar31[7] = -(pcVar1[7] == UNK_142e344d7);
    auVar31[8] = -(pcVar1[8] == UNK_142e344d8);
    auVar31[9] = -(pcVar1[9] == UNK_142e344d9);
    auVar31[10] = -(pcVar1[10] == UNK_142e344da);
    auVar31[0xb] = -(pcVar1[0xb] == UNK_142e344db);
    auVar31[0xc] = -(pcVar1[0xc] == UNK_142e344dc);
    auVar31[0xd] = -(pcVar1[0xd] == UNK_142e344dd);
    auVar31[0xe] = -(pcVar1[0xe] == UNK_142e344de);
    auVar31[0xf] = -(pcVar1[0xf] == UNK_142e344df);
    uVar26 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar26;
joined_r0x000140121e4b:
    if (uVar26 == 0) goto LAB_140121e90;
    uVar9 = 0;
    for (uVar10 = uVar13; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar27 = uVar9 + uVar15 & *(ulonglong *)(param_1 + 0x78);
    pcVar2 = (char *)(lVar14 + -0x18 + uVar27 * -0x18);
    auVar32[0] = -(*pcVar2 == DAT_142e34b60);
    auVar32[1] = -(pcVar2[1] == UNK_142e34b61);
    auVar32[2] = -(pcVar2[2] == UNK_142e34b62);
    auVar32[3] = -(pcVar2[3] == UNK_142e34b63);
    auVar32[4] = -(pcVar2[4] == UNK_142e34b64);
    auVar32[5] = -(pcVar2[5] == UNK_142e34b65);
    auVar32[6] = -(pcVar2[6] == UNK_142e34b66);
    auVar32[7] = -(pcVar2[7] == UNK_142e34b67);
    auVar32[8] = -(pcVar2[8] == UNK_142e34b68);
    auVar32[9] = -(pcVar2[9] == UNK_142e34b69);
    auVar32[10] = -(pcVar2[10] == UNK_142e34b6a);
    auVar32[0xb] = -(pcVar2[0xb] == UNK_142e34b6b);
    auVar32[0xc] = -(pcVar2[0xc] == UNK_142e34b6c);
    auVar32[0xd] = -(pcVar2[0xd] == UNK_142e34b6d);
    auVar32[0xe] = -(pcVar2[0xe] == UNK_142e34b6e);
    auVar32[0xf] = -(pcVar2[0xf] == UNK_142e34b6f);
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf
                ) != 0xffff) goto code_r0x000140121e78;
    uVar15 = *(ulonglong *)(lVar14 + uVar27 * -0x18 + -8);
    if ((*(ulonglong *)(param_1 + 0x210) <= uVar15) ||
       (uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar15 * 8), uVar15 == 0))
    goto LAB_14012213a;
    lVar14 = ~uVar15 * 0x40;
    if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar14) == 0) goto LAB_14012213a;
    lVar14 = *(longlong *)(param_1 + 0x1d8) + lVar14;
    puVar16 = *(uint **)(lVar14 + 0x10);
    *(undefined4 *)(lVar14 + 0x3c) = *(undefined4 *)(param_1 + 0x5a8);
    if (2 < *puVar16) goto LAB_14012213a;
    lVar14 = *(longlong *)(puVar16 + 0x10);
    if (lVar14 != 0) {
      piVar7 = *(int **)(puVar16 + 0xe);
      uVar15 = lVar14 * 0x20 - 0x20;
      piVar18 = piVar7;
      if (((uVar15 & 0x20) == 0) && (piVar18 = piVar7 + 8, *piVar7 == 1)) {
        piVar7[1] = piVar7[1] + -1 + (uint)(piVar7[1] == 0);
      }
      if (uVar15 != 0) {
        piVar18 = piVar18 + 9;
        do {
          if ((char)piVar18[-9] == '\0') {
            iVar6 = piVar18[-1];
          }
          else {
            piVar18[-8] = piVar18[-8] + -1 + (uint)(piVar18[-8] == 0);
            iVar6 = piVar18[-1];
          }
          if (iVar6 == 1) {
            *piVar18 = *piVar18 + -1 + (uint)(*piVar18 == 0);
          }
          piVar21 = piVar18 + 7;
          piVar18 = piVar18 + 0x10;
        } while (piVar21 != piVar7 + lVar14 * 8);
      }
    }
    uVar13 = puVar16[0x2f];
    if (uVar13 < puVar16[0x2e]) {
      do {
        if (*(ulonglong *)(puVar16 + 0x10) <= (ulonglong)(uVar13 & 3)) goto LAB_14012253c;
        lVar14 = *(longlong *)(puVar16 + 0xe);
        uVar15 = (ulonglong)((uVar13 & 3) << 5);
        if ((*(int *)(lVar14 + uVar15) != 1) || (*(int *)(lVar14 + 4 + uVar15) != 0)) break;
        puVar24 = (undefined4 *)(lVar14 + uVar15);
        pbVar19 = *(byte **)(puVar24 + 6);
        if ((longlong)pbVar19 < 0) {
          uVar20 = 0;
LAB_14012219e:
          pdb_142dc7e2a(uVar20,unaff_R12);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (pbVar19 == (byte *)0x0) {
          unaff_R12 = (byte *)0x1;
        }
        else {
          uVar20 = *(undefined8 *)(puVar24 + 4);
          puStack_50 = puVar16;
          pdb_14007ee60();
          unaff_R12 = pub_1406abab0((ulonglong)pbVar19,1);
          if (unaff_R12 == (byte *)0x0) {
            uVar20 = 1;
            unaff_R12 = pbVar19;
            goto LAB_14012219e;
          }
          pub_142e32760(unaff_R12,uVar20,pbVar19);
          puVar16 = puStack_50;
        }
        uStack_198 = 0x8000000000000000;
        pbStack_190 = pbVar19;
        pbStack_188 = unaff_R12;
        pbStack_180 = pbVar19;
        pdb_1405584b0(&uStack_258,puVar16,&uStack_198);
        if (uStack_258 != 0x8000000000000003) {
          uVar15 = uStack_258 ^ 0x8000000000000000;
          if (-1 < (longlong)uStack_258) {
            uVar15 = 1;
          }
          if (uVar15 == 1) {
            if (uStack_258 != 0) {
              pub_1406abac0(pbStack_250,uStack_258 * 0x28,8);
            }
            if (lStack_240 != 0) {
              arg1 = (byte *)(lStack_240 * 0xcc);
              uVar15 = 4;
              pbVar19 = pbStack_238;
              goto LAB_14012210d;
            }
          }
          else if ((uVar15 == 0) && (pbStack_250 != (byte *)0x0)) {
            uVar15 = 1;
            pbVar19 = pbStack_248;
            arg1 = pbStack_250;
LAB_14012210d:
            pub_1406abac0(pbVar19,(ulonglong)arg1,uVar15);
          }
        }
        *puVar24 = 0;
        uVar13 = puVar16[0x2f] + 1;
        puVar16[0x2f] = uVar13;
      } while (uVar13 < puVar16[0x2e]);
    }
    if (puVar16[0x2d] <= uVar13) {
      uStack_b8 = CONCAT44(puVar16[0x28],puVar16[0x28]);
      uStack_b0 = CONCAT44(puVar16[0x2a],puVar16[0x2a]);
      auStack_d8 = (undefined1  [16])0x0;
      auStack_98 = (undefined1  [16])0x0;
      pbStack_188 = *(byte **)(puVar16 + 0x1c);
      pbStack_180 = *(byte **)(puVar16 + 0x1e);
      puStack_168 = (undefined *)_DAT_142e46b18;
      lStack_160 = _UNK_142e46b20;
      puStack_158 = (undefined *)_DAT_142e46b28;
      uStack_150 = _UNK_142e46b30;
      lStack_148 = _DAT_142e46b38;
      lStack_140 = _UNK_142e46b40;
      lStack_138 = _DAT_142e46b48;
      uStack_130 = (undefined4)_UNK_142e46b50;
      uStack_12c = (undefined4)((ulonglong)_UNK_142e46b50 >> 0x20);
      auStack_88 = (undefined1  [16])0x0;
      uStack_198 = 0;
      pbStack_190 = (byte *)0x4;
      lStack_178 = 0;
      lStack_170 = 4;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 4;
      uStack_118 = _DAT_142e46b78;
      uStack_110 = _UNK_142e46b80;
      uStack_108 = _DAT_142e46b88;
      uStack_100 = _UNK_142e46b90;
      uStack_f8 = _DAT_142e46b98;
      uStack_f0 = _UNK_142e46ba0;
      uStack_e8 = _DAT_142e46ba8;
      uStack_e0 = _UNK_142e46bb0;
      uStack_c8 = 0;
      uStack_c0 = 4;
      uStack_a8 = uStack_b0;
      uStack_a0 = uStack_b0;
      pdb_140180dc0(&uStack_258,&uStack_198);
      uStack_124 = puVar16[0x2a];
      uVar29 = _DAT_142e37830;
      if ((char)puVar16[0x2c] == '\0') {
        uVar29 = _DAT_142e37838;
      }
      lStack_138 = *(longlong *)(puVar16 + 0x26);
      puStack_168 = &UNK_142e46ea8;
      if (*(byte *)((longlong)puVar16 + 0xc1) != 0) {
        puStack_168 = &UNK_142e46eae;
      }
      lStack_160 = (ulonglong)*(byte *)((longlong)puVar16 + 0xc1) * 4 + 6;
      lStack_1a0 = *(longlong *)(puVar16 + 0x16);
      pbStack_1b0 = *(byte **)(puVar16 + 0x12);
      lStack_1a8 = *(longlong *)(puVar16 + 0x14);
      puVar16[0x12] = 0;
      puVar16[0x13] = 0;
      puVar16[0x14] = 4;
      puVar16[0x15] = 0;
      puVar16[0x16] = 0;
      puVar16[0x17] = 0;
      pbStack_1b8 = pbStack_248;
      uStack_1c8 = uStack_258;
      pbStack_1c0 = pbStack_250;
      pbStack_188 = pbStack_248;
      uStack_198 = uStack_258;
      pbStack_190 = pbStack_250;
      puStack_158 = &UNK_142e46eb8;
      uStack_150 = 0x13;
      lStack_148 = *(longlong *)(puVar16 + 0x22);
      lStack_140 = *(longlong *)(puVar16 + 0x24);
      uStack_130 = 3;
      uStack_12c = (undefined4)*(longlong *)(puVar16 + 0x28);
      uStack_128 = (undefined4)((ulonglong)*(longlong *)(puVar16 + 0x28) >> 0x20);
      uStack_120 = CONCAT44(4,uVar29);
      uStack_118 = CONCAT44(puVar16[0x2d],puVar16[0x2b]);
      uStack_110 = CONCAT71(uStack_110._1_7_,1);
      pbStack_180 = pbStack_1b0;
      lStack_178 = lStack_1a8;
      lStack_170 = lStack_1a0;
      pdb_140120fa0(puVar16,&uStack_198);
      if (lStack_60 == 0) {
        return;
      }
      plVar17 = (longlong *)pdb_140e97000();
      if ((char)plVar17[0xd] != '\x01') goto LAB_1401224c4;
      goto LAB_14012245a;
    }
    goto LAB_14012213a;
  }
  if (!bVar11) {
    return;
  }
  goto LAB_140122146;
LAB_140121e90:
  auVar30[0] = -(*pcVar1 == -1);
  auVar30[1] = -(pcVar1[1] == -1);
  auVar30[2] = -(pcVar1[2] == -1);
  auVar30[3] = -(pcVar1[3] == -1);
  auVar30[4] = -(pcVar1[4] == -1);
  auVar30[5] = -(pcVar1[5] == -1);
  auVar30[6] = -(pcVar1[6] == -1);
  auVar30[7] = -(pcVar1[7] == -1);
  auVar30[8] = -(pcVar1[8] == -1);
  auVar30[9] = -(pcVar1[9] == -1);
  auVar30[10] = -(pcVar1[10] == -1);
  auVar30[0xb] = -(pcVar1[0xb] == -1);
  auVar30[0xc] = -(pcVar1[0xc] == -1);
  auVar30[0xd] = -(pcVar1[0xd] == -1);
  auVar30[0xe] = -(pcVar1[0xe] == -1);
  auVar30[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') goto LAB_14012213a;
  uVar15 = uVar15 + lVar23 + 0x10;
  lVar23 = lVar23 + 0x10;
  goto LAB_140121e33;
code_r0x000140121e78:
  uVar26 = (ushort)(uVar13 - 1) & (ushort)uVar13;
  uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar26);
  goto joined_r0x000140121e4b;
LAB_14012213a:
  if (lStack_60 == 0) {
    return;
  }
LAB_140122146:
  plVar17 = (longlong *)pdb_140e97000();
  if ((char)plVar17[0xd] != '\x01') goto LAB_140122490;
  do {
    if (*plVar17 == 0) {
      *plVar17 = -1;
      puStack_50 = (uint *)plVar17;
      pdb_140e95370(plVar17 + 1,uStack_58);
LAB_14012217e:
      *(longlong *)puStack_50 = *(longlong *)puStack_50 + 1;
      return;
    }
LAB_140122484:
    while( true ) {
      plVar17 = (longlong *)pdb_142dc8090(&UNK_142f3dcc8);
LAB_140122490:
      plVar17 = (longlong *)pdb_142d7de90(plVar17,0);
      if (plVar17 != (longlong *)0x0) break;
LAB_1401224b8:
      do {
        plVar17 = (longlong *)pdb_142dc7890(&UNK_142f3dc40);
LAB_1401224c4:
        plVar17 = (longlong *)pdb_142d7de90(plVar17,0);
      } while (plVar17 == (longlong *)0x0);
LAB_14012245a:
      if (*plVar17 == 0) {
        *plVar17 = -1;
        puStack_50 = (uint *)plVar17;
        pdb_140e95370(plVar17 + 1,uStack_58);
        goto LAB_14012217e;
      }
    }
  } while( true );
}

