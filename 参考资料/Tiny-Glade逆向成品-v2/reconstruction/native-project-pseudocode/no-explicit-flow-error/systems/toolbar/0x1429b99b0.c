// VA 0x1429b99b0, PDB extent 2459 bytes
// toolbar::menu::import::entry_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::import::entry_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/import.rs
   Extent: 2459 */

void pdb_1429b99b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_130 [24];
  longlong *plStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  longlong *plStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  longlong lStack_d8;
  longlong *aplStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  longlong *plStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  longlong *plStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 == '\0') {
    bVar19 = (byte)param_4[3];
    if (bVar19 == 2) {
      puVar11 = param_2;
      uVar6 = pdb_140c715a0();
      pdb_140a93620(&plStack_88,uVar6,puVar11);
      if (plStack_88 != (longlong *)0x0) {
        pub_1406abac0(pbStack_80,(longlong)plStack_88 * 0x1c,4);
      }
      bVar19 = lStack_78 != 0;
      *(byte *)(param_4 + 3) = bVar19;
    }
    if ((bVar19 & 1) != 0) {
      plStack_88 = (longlong *)&UNK_14360cc88;
      pbStack_80 = (byte *)0xc;
      uVar7 = pdb_140bbbcb0(&plStack_88);
      pbVar18 = (byte *)(uVar7 ^ 0xb1695320004fb443);
      pbVar12 = pbVar18;
      lVar8 = pdb_14072c2d0(param_1);
      *(undefined1 *)(lVar8 + 0x5e) = 0;
      if (((ulonglong)pbVar12 & 1) == 0) {
        lVar8 = param_1[2];
        if (lVar8 == *param_1) {
          pdb_142d7f080(param_1);
        }
        lVar14 = param_1[1];
        *(undefined4 *)(lVar14 + lVar8 * 0x38) = 2;
        *(byte **)(lVar14 + 0x30 + lVar8 * 0x38) = pbVar18;
        param_1[2] = lVar8 + 1;
      }
      uStack_98 = 0;
      plStack_a8 = param_1;
      pbStack_a0 = pbVar18;
      pdb_141174160(&plStack_88,&plStack_a8,&UNK_14360cc94,0x12,0);
      pdb_141186520(auStack_130,&plStack_88,&UNK_14360cc3d,6);
      pdb_1411743c0(&plStack_a8,auStack_130,&UNK_14360cca6,6,&UNK_14360ccac,0x10);
      plVar1 = plStack_a8;
      plStack_88 = plStack_a8;
      pbStack_80 = pbStack_a0;
      lStack_78 = uStack_98;
      if (plStack_a8[0x39] != 0) {
        uVar9 = pdb_1400af0a0(plStack_a8 + 0x3a,&pbStack_80);
        plVar5 = plStack_88;
        lVar8 = plVar1[0x36];
        uVar7 = plVar1[0x37];
        bVar19 = (byte)(uVar9 >> 0x39);
        auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
        auVar20 = pshuflw(auVar20,auVar20,0);
        lVar14 = 0;
        while( true ) {
          uVar9 = uVar9 & uVar7;
          auVar2 = *(undefined1 (*) [16])(lVar8 + uVar9);
          auVar25[0] = -(auVar2[0] == auVar20[0]);
          auVar25[1] = -(auVar2[1] == auVar20[1]);
          auVar25[2] = -(auVar2[2] == auVar20[2]);
          auVar25[3] = -(auVar2[3] == auVar20[3]);
          auVar25[4] = -(auVar2[4] == auVar20[4]);
          auVar25[5] = -(auVar2[5] == auVar20[5]);
          auVar25[6] = -(auVar2[6] == auVar20[6]);
          auVar25[7] = -(auVar2[7] == auVar20[7]);
          auVar25[8] = -(auVar2[8] == auVar20[0]);
          auVar25[9] = -(auVar2[9] == auVar20[1]);
          auVar25[10] = -(auVar2[10] == auVar20[2]);
          auVar25[0xb] = -(auVar2[0xb] == auVar20[3]);
          auVar25[0xc] = -(auVar2[0xc] == auVar20[4]);
          auVar25[0xd] = -(auVar2[0xd] == auVar20[5]);
          auVar25[0xe] = -(auVar2[0xe] == auVar20[6]);
          auVar25[0xf] = -(auVar2[0xf] == auVar20[7]);
          uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar25[0xf] >> 7) << 0xf;
          uVar15 = (uint)uVar16;
          while (uVar16 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar17 = (uVar3 + uVar9 & uVar7) * -0xd8;
            if (pbStack_80 == *(byte **)(lVar8 + -0xd8 + lVar17)) {
              lVar8 = lVar8 + lVar17;
              *(undefined1 (*) [16])(lVar8 + -0x9c) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar8 + -0xa8) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar8 + -0xb8) = (undefined1  [16])0x0;
              *(undefined8 *)(lVar8 + -0x8c) = 0x42480000;
              *(undefined4 *)(lVar8 + -0x84) = 0x42480000;
              *(undefined8 *)(lVar8 + -0x80) = 0;
              *(undefined8 *)(lVar8 + -0x7a) = 0;
              *(undefined2 *)(lVar8 + -0x72) = 0x102;
              uStack_e8 = lStack_78;
              plStack_f8 = plStack_88;
              pbStack_f0 = pbStack_80;
              puStack_b0 = (undefined8 *)param_3;
              if (plStack_88[0x39] == 0) goto LAB_1429b9dd6;
              plVar1 = plStack_88 + 0x3a;
              uVar7 = pdb_1400af0a0(plVar1,&pbStack_f0);
              pbVar12 = pbStack_f0;
              lVar8 = plVar5[0x36];
              bVar19 = (byte)(uVar7 >> 0x39);
              auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
              auVar20 = pshuflw(auVar20,auVar20,0);
              lVar14 = 0;
              goto LAB_1429b9cbb;
            }
            uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
            uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
          }
          auVar21[0] = -(auVar2[0] == -1);
          auVar21[1] = -(auVar2[1] == -1);
          auVar21[2] = -(auVar2[2] == -1);
          auVar21[3] = -(auVar2[3] == -1);
          auVar21[4] = -(auVar2[4] == -1);
          auVar21[5] = -(auVar2[5] == -1);
          auVar21[6] = -(auVar2[6] == -1);
          auVar21[7] = -(auVar2[7] == -1);
          auVar21[8] = -(auVar2[8] == -1);
          auVar21[9] = -(auVar2[9] == -1);
          auVar21[10] = -(auVar2[10] == -1);
          auVar21[0xb] = -(auVar2[0xb] == -1);
          auVar21[0xc] = -(auVar2[0xc] == -1);
          auVar21[0xd] = -(auVar2[0xd] == -1);
          auVar21[0xe] = -(auVar2[0xe] == -1);
          auVar21[0xf] = -(auVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x2f,0) & 1) != 0) || (SUB161(auVar21 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
          uVar9 = uVar9 + lVar14 + 0x10;
          lVar14 = lVar14 + 0x10;
        }
      }
      goto LAB_1429b9dee;
    }
  }
  return;
LAB_1429b9cbb:
  uVar7 = uVar7 & plVar5[0x37];
  auVar2 = *(undefined1 (*) [16])(lVar8 + uVar7);
  auVar26[0] = -(auVar2[0] == auVar20[0]);
  auVar26[1] = -(auVar2[1] == auVar20[1]);
  auVar26[2] = -(auVar2[2] == auVar20[2]);
  auVar26[3] = -(auVar2[3] == auVar20[3]);
  auVar26[4] = -(auVar2[4] == auVar20[4]);
  auVar26[5] = -(auVar2[5] == auVar20[5]);
  auVar26[6] = -(auVar2[6] == auVar20[6]);
  auVar26[7] = -(auVar2[7] == auVar20[7]);
  auVar26[8] = -(auVar2[8] == auVar20[0]);
  auVar26[9] = -(auVar2[9] == auVar20[1]);
  auVar26[10] = -(auVar2[10] == auVar20[2]);
  auVar26[0xb] = -(auVar2[0xb] == auVar20[3]);
  auVar26[0xc] = -(auVar2[0xc] == auVar20[4]);
  auVar26[0xd] = -(auVar2[0xd] == auVar20[5]);
  auVar26[0xe] = -(auVar2[0xe] == auVar20[6]);
  auVar26[0xf] = -(auVar2[0xf] == auVar20[7]);
  uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar17 = (uVar3 + uVar7 & plVar5[0x37]) * -0xd8;
    if (pbStack_f0 == *(byte **)(lVar8 + -0xd8 + lVar17)) {
      if (plVar5[0x39] == 0) goto LAB_1429b9dd6;
      bStack_49 = *(byte *)(lVar8 + lVar17 + -6);
      uVar7 = pdb_1400af0a0(plVar1,&pbStack_f0);
      lVar8 = plVar5[0x36];
      bVar19 = (byte)(uVar7 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar20 = pshuflw(auVar20,auVar20,0);
      lVar14 = 0;
      goto LAB_1429b9d75;
    }
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  auVar22[0] = -(auVar2[0] == -1);
  auVar22[1] = -(auVar2[1] == -1);
  auVar22[2] = -(auVar2[2] == -1);
  auVar22[3] = -(auVar2[3] == -1);
  auVar22[4] = -(auVar2[4] == -1);
  auVar22[5] = -(auVar2[5] == -1);
  auVar22[6] = -(auVar2[6] == -1);
  auVar22[7] = -(auVar2[7] == -1);
  auVar22[8] = -(auVar2[8] == -1);
  auVar22[9] = -(auVar2[9] == -1);
  auVar22[10] = -(auVar2[10] == -1);
  auVar22[0xb] = -(auVar2[0xb] == -1);
  auVar22[0xc] = -(auVar2[0xc] == -1);
  auVar22[0xd] = -(auVar2[0xd] == -1);
  auVar22[0xe] = -(auVar2[0xe] == -1);
  auVar22[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') goto LAB_1429b9dd6;
  uVar7 = uVar7 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1429b9cbb;
LAB_1429b9d75:
  uVar7 = uVar7 & plVar5[0x37];
  auVar2 = *(undefined1 (*) [16])(lVar8 + uVar7);
  auVar27[0] = -(auVar2[0] == auVar20[0]);
  auVar27[1] = -(auVar2[1] == auVar20[1]);
  auVar27[2] = -(auVar2[2] == auVar20[2]);
  auVar27[3] = -(auVar2[3] == auVar20[3]);
  auVar27[4] = -(auVar2[4] == auVar20[4]);
  auVar27[5] = -(auVar2[5] == auVar20[5]);
  auVar27[6] = -(auVar2[6] == auVar20[6]);
  auVar27[7] = -(auVar2[7] == auVar20[7]);
  auVar27[8] = -(auVar2[8] == auVar20[0]);
  auVar27[9] = -(auVar2[9] == auVar20[1]);
  auVar27[10] = -(auVar2[10] == auVar20[2]);
  auVar27[0xb] = -(auVar2[0xb] == auVar20[3]);
  auVar27[0xc] = -(auVar2[0xc] == auVar20[4]);
  auVar27[0xd] = -(auVar2[0xd] == auVar20[5]);
  auVar27[0xe] = -(auVar2[0xe] == auVar20[6]);
  auVar27[0xf] = -(auVar2[0xf] == auVar20[7]);
  uVar16 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar17 = (uVar3 + uVar7 & plVar5[0x37]) * -0xd8;
    if (pbVar12 == *(byte **)(lVar8 + -0xd8 + lVar17)) {
      if ((*(byte *)(lVar8 + lVar17 + -6) & 1) == 0) goto LAB_1429ba09d;
      plStack_88 = (longlong *)&UNK_14360ccbc;
      pbStack_80 = (byte *)0xe;
      uVar9 = pdb_140bbbcb0(&plStack_88);
      uVar9 = uVar9 ^ 0xb1695320004fb443;
      uVar7 = uVar9;
      lVar8 = pdb_14072c2d0(param_1);
      *(undefined1 *)(lVar8 + 0x5e) = 0;
      if ((uVar7 & 1) == 0) {
        lVar8 = param_1[2];
        if (lVar8 == *param_1) {
          pdb_142d7f080(param_1);
        }
        lVar14 = param_1[1];
        lVar17 = lVar8 * 0x38;
        *(undefined8 *)(lVar14 + lVar17) = 3;
        *(byte **)(lVar14 + 0x10 + lVar17) = pbVar12;
        uVar6 = _UNK_142f98008;
        puVar11 = (undefined8 *)(lVar14 + 0x18 + lVar17);
        *puVar11 = _DAT_142f98000;
        puVar11[1] = uVar6;
        *(undefined8 *)(lVar14 + 0x28 + lVar17) = _DAT_14345dd30;
        *(ulonglong *)(lVar14 + 0x30 + lVar17) = uVar9;
        param_1[2] = lVar8 + 1;
      }
      uStack_98 = 0;
      plStack_a8 = param_1;
      pbStack_a0 = (byte *)uVar9;
      pdb_141174160(&plStack_88,&plStack_a8,&UNK_14360ccca,0xf,0);
      pdb_141186520(&lStack_d8,&plStack_88,&UNK_14360cb9f,7);
      if (*(longlong *)(lStack_d8 + 0x1c8) == 0) goto LAB_1429ba2e8;
      uVar7 = pdb_1400af0a0(lStack_d8 + 0x1d0,aplStack_d0);
      lVar8 = *(longlong *)(lStack_d8 + 0x1b0);
      bVar19 = (byte)(uVar7 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar20 = pshuflw(auVar20,auVar20,0);
      lVar14 = 0;
      do {
        uVar7 = uVar7 & *(ulonglong *)(lStack_d8 + 0x1b8);
        auVar2 = *(undefined1 (*) [16])(lVar8 + uVar7);
        auVar28[0] = -(auVar2[0] == auVar20[0]);
        auVar28[1] = -(auVar2[1] == auVar20[1]);
        auVar28[2] = -(auVar2[2] == auVar20[2]);
        auVar28[3] = -(auVar2[3] == auVar20[3]);
        auVar28[4] = -(auVar2[4] == auVar20[4]);
        auVar28[5] = -(auVar2[5] == auVar20[5]);
        auVar28[6] = -(auVar2[6] == auVar20[6]);
        auVar28[7] = -(auVar2[7] == auVar20[7]);
        auVar28[8] = -(auVar2[8] == auVar20[0]);
        auVar28[9] = -(auVar2[9] == auVar20[1]);
        auVar28[10] = -(auVar2[10] == auVar20[2]);
        auVar28[0xb] = -(auVar2[0xb] == auVar20[3]);
        auVar28[0xc] = -(auVar2[0xc] == auVar20[4]);
        auVar28[0xd] = -(auVar2[0xd] == auVar20[5]);
        auVar28[0xe] = -(auVar2[0xe] == auVar20[6]);
        auVar28[0xf] = -(auVar2[0xf] == auVar20[7]);
        uVar16 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar16;
        while (uVar16 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar17 = (uVar3 + uVar7 & *(ulonglong *)(lStack_d8 + 0x1b8)) * -0xd8;
          if (aplStack_d0[0] == *(longlong **)(lVar8 + -0xd8 + lVar17)) {
            *(undefined4 *)(lVar8 + lVar17 + -0x14) = 0x43fa0000;
            uVar13 = 0x14;
            uVar6 = pdb_140dc6290(&UNK_14360cba6);
            uStack_c0 = uVar6;
            uStack_b8 = uVar13;
            plStack_88 = (longlong *)pdb_140bbbcb0(&uStack_c0);
            pbStack_80 = _DAT_14329c260;
            lStack_78 = _UNK_14329c268;
            pbStack_80 = (byte *)pdb_1400affa0(&plStack_88);
            plStack_88 = aplStack_d0[0];
            uVar10 = pdb_1400b0130(&plStack_88);
            pdb_14072caa0(&plStack_88,&lStack_d8,uVar10);
            uVar10 = pdb_14116ee90(&plStack_88,0);
            pdb_14119b6b0(uVar10,uVar6,uVar13);
            uStack_98 = lStack_78;
            plStack_a8 = plStack_88;
            pbStack_a0 = pbStack_80;
            uVar6 = pdb_14116e180(&plStack_a8);
            pdb_14119b2b0(uVar6);
            lStack_78 = uStack_98;
            plStack_88 = plStack_a8;
            pbStack_80 = pbStack_a0;
            uVar6 = pdb_14116e180(&plStack_88);
            pdb_140cb5a70(uVar6,3);
            uStack_98 = lStack_78;
            plStack_a8 = plStack_88;
            pbStack_a0 = pbStack_80;
            uVar6 = pdb_14116e180(&plStack_a8);
            pdb_140cb5df0(uVar6,_DAT_142fa5c70);
LAB_1429ba09d:
            uVar7 = *param_4;
            if ((bStack_49 & 0x30) != 0) {
              if ((!SBORROW8(0,uVar7)) && (uVar7 != 0)) {
                pub_1406abac0((byte *)param_4[1],uVar7,1);
              }
              *param_4 = 0x8000000000000000;
              pdb_140c6fe70(&plStack_88,puStack_b0);
              puStack_b0 = param_2 + 6;
              if (!SBORROW8(0,param_2[6])) {
                pdb_1411807b0(param_2 + 6);
              }
              param_2[10] = uStack_68;
              param_2[0xb] = uStack_60;
              param_2[8] = lStack_78;
              param_2[9] = uStack_70;
              param_2[6] = plStack_88;
              param_2[7] = pbStack_80;
              *param_2 = 0;
              return;
            }
            if (SBORROW8(0,uVar7)) {
              return;
            }
            plStack_88 = (longlong *)&UNK_14360ccd9;
            pbStack_80 = (byte *)0x12;
            uVar9 = pdb_140bbbcb0(&plStack_88,-uVar7);
            uVar9 = uVar9 ^ 0xb1695320004fb443;
            uVar7 = uVar9;
            lVar8 = pdb_14072c2d0(param_1);
            *(undefined1 *)(lVar8 + 0x5e) = 0;
            if ((uVar7 & 1) == 0) {
              lVar8 = param_1[2];
              if (lVar8 == *param_1) {
                pdb_142d7f080(param_1);
              }
              lVar14 = param_1[1];
              *(undefined4 *)(lVar14 + lVar8 * 0x38) = 2;
              *(ulonglong *)(lVar14 + 0x30 + lVar8 * 0x38) = uVar9;
              param_1[2] = lVar8 + 1;
            }
            uStack_98 = 0;
            plStack_a8 = param_1;
            pbStack_a0 = (byte *)uVar9;
            pdb_141174160(&plStack_88,&plStack_a8,&UNK_14360cb8d,0x12,0);
            pdb_141186520(&lStack_d8,&plStack_88,&UNK_14360cb9f,7);
            uVar13 = 0x11;
            uVar6 = pdb_140dc6290(&UNK_14360cc18);
            uStack_c0 = uVar6;
            uStack_b8 = uVar13;
            plStack_88 = (longlong *)pdb_140bbbcb0(&uStack_c0);
            pbStack_80 = _DAT_14329c260;
            lStack_78 = _UNK_14329c268;
            pbStack_80 = (byte *)pdb_1400affa0(&plStack_88);
            plStack_88 = aplStack_d0[0];
            uVar10 = pdb_1400b0130(&plStack_88);
            pdb_14072caa0(&plStack_88,&lStack_d8,uVar10);
            uVar10 = pdb_14116ee90(&plStack_88,0);
            pdb_14119b6b0(uVar10,uVar6,uVar13);
            uStack_98 = lStack_78;
            plStack_a8 = plStack_88;
            pbStack_a0 = pbStack_80;
            lVar8 = pdb_14116e180(&plStack_a8);
            *(undefined4 *)(lVar8 + 600) = 0xffffffa0;
            plStack_88 = plStack_a8;
            pbStack_80 = pbStack_a0;
            lStack_78 = uStack_98;
            uVar6 = pdb_14116e180(&plStack_88);
            pdb_14119b2b0(uVar6);
            uStack_108 = lStack_78;
            plStack_118 = plStack_88;
            pbStack_110 = pbStack_80;
            pdb_140726690(&plStack_118,param_4[1],param_4[2]);
            return;
          }
          uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
        }
        auVar24[0] = -(auVar2[0] == -1);
        auVar24[1] = -(auVar2[1] == -1);
        auVar24[2] = -(auVar2[2] == -1);
        auVar24[3] = -(auVar2[3] == -1);
        auVar24[4] = -(auVar2[4] == -1);
        auVar24[5] = -(auVar2[5] == -1);
        auVar24[6] = -(auVar2[6] == -1);
        auVar24[7] = -(auVar2[7] == -1);
        auVar24[8] = -(auVar2[8] == -1);
        auVar24[9] = -(auVar2[9] == -1);
        auVar24[10] = -(auVar2[10] == -1);
        auVar24[0xb] = -(auVar2[0xb] == -1);
        auVar24[0xc] = -(auVar2[0xc] == -1);
        auVar24[0xd] = -(auVar2[0xd] == -1);
        auVar24[0xe] = -(auVar2[0xe] == -1);
        auVar24[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_1429ba2e8:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b48);
        }
        uVar7 = uVar7 + lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      } while( true );
    }
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  auVar23[0] = -(auVar2[0] == -1);
  auVar23[1] = -(auVar2[1] == -1);
  auVar23[2] = -(auVar2[2] == -1);
  auVar23[3] = -(auVar2[3] == -1);
  auVar23[4] = -(auVar2[4] == -1);
  auVar23[5] = -(auVar2[5] == -1);
  auVar23[6] = -(auVar2[6] == -1);
  auVar23[7] = -(auVar2[7] == -1);
  auVar23[8] = -(auVar2[8] == -1);
  auVar23[9] = -(auVar2[9] == -1);
  auVar23[10] = -(auVar2[10] == -1);
  auVar23[0xb] = -(auVar2[0xb] == -1);
  auVar23[0xc] = -(auVar2[0xc] == -1);
  auVar23[0xd] = -(auVar2[0xd] == -1);
  auVar23[0xe] = -(auVar2[0xe] == -1);
  auVar23[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_1429b9dd6;
  uVar7 = uVar7 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1429b9d75;
LAB_1429b9dd6:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1429b9dee:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

