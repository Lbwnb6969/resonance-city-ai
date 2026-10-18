// VA 0x140b445d0, PDB extent 1398 bytes
// country_core::systems::ui_move_wall_group::WallGroupMember::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui_move_wall_group::WallGroupMember::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 1398 */

undefined8 *
pdb_140b445d0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,longlong *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  longlong lVar22;
  undefined4 uVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 unaff_XMM9_Da;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uVar20 = *(uint *)(param_3 + 7);
  puStack_90 = param_3;
  if (uVar20 < 2) {
    uVar28 = *(undefined4 *)((longlong)param_3 + (ulonglong)uVar20 * 8 + 0x3c);
    uVar29 = *(undefined4 *)(param_3 + (ulonglong)uVar20 + 8);
  }
  else {
    uStack_81 = 1;
    pdb_140b4a7f0(&uStack_108,param_3);
    if ((char)uStack_108 == '\0') {
      uStack_81 = 1;
      pdb_142dc8110(&UNK_143058e88,0x1c,&UNK_143058ee0);
      goto LAB_140b44a4c;
    }
    uVar28 = uStack_108._4_4_;
    uVar29 = (undefined4)lStack_100;
  }
  uStack_98 = uVar28;
  uStack_94 = uVar29;
  if (param_7[3] == 0) {
    lStack_100 = 0;
  }
  else {
    uStack_81 = 1;
    uStack_108 = param_2;
    uVar12 = pdb_1400af0a0(param_7 + 4,&uStack_108);
    lVar14 = *param_7;
    bVar24 = (byte)(uVar12 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar25 = pshuflw(auVar25,auVar25,0);
    lVar19 = 0;
    while( true ) {
      uVar12 = uVar12 & param_7[1];
      pcVar1 = (char *)(lVar14 + uVar12);
      auVar27[0] = -(*pcVar1 == auVar25[0]);
      auVar27[1] = -(pcVar1[1] == auVar25[1]);
      auVar27[2] = -(pcVar1[2] == auVar25[2]);
      auVar27[3] = -(pcVar1[3] == auVar25[3]);
      auVar27[4] = -(pcVar1[4] == auVar25[4]);
      auVar27[5] = -(pcVar1[5] == auVar25[5]);
      auVar27[6] = -(pcVar1[6] == auVar25[6]);
      auVar27[7] = -(pcVar1[7] == auVar25[7]);
      auVar27[8] = -(pcVar1[8] == auVar25[0]);
      auVar27[9] = -(pcVar1[9] == auVar25[1]);
      auVar27[10] = -(pcVar1[10] == auVar25[2]);
      auVar27[0xb] = -(pcVar1[0xb] == auVar25[3]);
      auVar27[0xc] = -(pcVar1[0xc] == auVar25[4]);
      auVar27[0xd] = -(pcVar1[0xd] == auVar25[5]);
      auVar27[0xe] = -(pcVar1[0xe] == auVar25[6]);
      auVar27[0xf] = -(pcVar1[0xf] == auVar25[7]);
      uVar21 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar10 = 0;
        for (uVar11 = uVar20; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        lVar22 = (uVar10 + uVar12 & param_7[1]) * -0x98;
        if (param_2 == *(longlong *)(lVar14 + -0x98 + lVar22)) {
          lVar14 = lVar14 + lVar22;
          goto LAB_140b44726;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar26[0] = -(*pcVar1 == -1);
      auVar26[1] = -(pcVar1[1] == -1);
      auVar26[2] = -(pcVar1[2] == -1);
      auVar26[3] = -(pcVar1[3] == -1);
      auVar26[4] = -(pcVar1[4] == -1);
      auVar26[5] = -(pcVar1[5] == -1);
      auVar26[6] = -(pcVar1[6] == -1);
      auVar26[7] = -(pcVar1[7] == -1);
      auVar26[8] = -(pcVar1[8] == -1);
      auVar26[9] = -(pcVar1[9] == -1);
      auVar26[10] = -(pcVar1[10] == -1);
      auVar26[0xb] = -(pcVar1[0xb] == -1);
      auVar26[0xc] = -(pcVar1[0xc] == -1);
      auVar26[0xd] = -(pcVar1[0xd] == -1);
      auVar26[0xe] = -(pcVar1[0xe] == -1);
      auVar26[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar12 = uVar12 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
    lVar14 = 0;
LAB_140b44726:
    lStack_100 = lVar14 + -0x90;
    if (lVar14 == 0) {
      lStack_100 = 0;
    }
  }
  uStack_108 = 1;
  uStack_f8 = 0;
  uStack_d0 = 0;
  puStack_a8 = &uStack_98;
  uStack_81 = 1;
  pdb_1415fcaf0(&uStack_120,&uStack_108);
  puStack_a8 = (undefined4 *)puStack_90[0xc];
  uStack_a0 = puStack_90[0xd];
  uStack_b8 = puStack_90[10];
  uStack_b0 = puStack_90[0xb];
  uStack_c8 = puStack_90[8];
  uStack_c0 = puStack_90[9];
  uStack_108 = *puStack_90;
  lStack_100 = puStack_90[1];
  uStack_f8 = puStack_90[2];
  uStack_f0 = puStack_90[3];
  uStack_e8 = puStack_90[4];
  uStack_e0 = puStack_90[5];
  uStack_d8 = puStack_90[6];
  uStack_d0 = puStack_90[7];
  uVar2 = *(undefined4 *)(param_4 + 0x288);
  pbVar13 = (byte *)0x4;
  if (*(uint *)(puStack_90 + 7) < 2) {
    if (*(char *)(param_4 + 0x108) == '\0') {
      pdb_142d8e040();
LAB_140b44a4c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    unaff_XMM9_Da = *(undefined4 *)(param_4 + 0x10c);
    uVar12 = *(ulonglong *)(param_4 + 0x48);
    uVar23 = 1;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      pbVar17 = *(byte **)(param_4 + 0x40);
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(uVar12 * 8,4);
      if (pbVar13 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar12 * 8);
        goto LAB_140b44a4c;
      }
      if ((uVar12 < 10) || (pbVar13 < pbVar17 + uVar12 * 0xc && pbVar17 < pbVar13 + uVar12 * 8)) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar12 & 0xfffffffffffffffc;
        pbVar18 = pbVar17 + 0x2c;
        uVar15 = 0;
        do {
          uVar3 = *(undefined4 *)(pbVar18 + -0x20);
          uVar4 = *(undefined4 *)(pbVar18 + -0x18);
          uVar5 = *(undefined4 *)(pbVar18 + -0xc);
          uVar6 = *(undefined4 *)(pbVar18 + -0x14);
          uVar7 = *(undefined4 *)pbVar18;
          uVar8 = *(undefined4 *)(pbVar18 + -8);
          *(ulonglong *)(pbVar13 + uVar15 * 8) =
               CONCAT44(*(undefined4 *)(pbVar18 + -0x24),*(undefined4 *)(pbVar18 + -0x2c));
          *(ulonglong *)(pbVar13 + uVar15 * 8 + 8) = CONCAT44(uVar4,uVar3);
          *(ulonglong *)(pbVar13 + uVar15 * 8 + 0x10) = CONCAT44(uVar5,uVar6);
          *(ulonglong *)(pbVar13 + uVar15 * 8 + 0x10 + 8) = CONCAT44(uVar7,uVar8);
          uVar15 = uVar15 + 4;
          pbVar18 = pbVar18 + 0x30;
        } while (uVar16 != uVar15);
        if (uVar12 == uVar16) goto LAB_140b448c4;
      }
      uVar15 = uVar16;
      if ((uVar12 & 1) != 0) {
        uVar3 = *(undefined4 *)(pbVar17 + uVar16 * 0xc + 8);
        *(undefined4 *)(pbVar13 + uVar16 * 8) = *(undefined4 *)(pbVar17 + uVar16 * 0xc);
        *(undefined4 *)(pbVar13 + uVar16 * 8 + 4) = uVar3;
        uVar15 = uVar16 | 1;
      }
      if (uVar12 != (uVar16 | 1)) {
        pbVar17 = pbVar17 + uVar15 * 0xc + 0x14;
        do {
          uVar3 = *(undefined4 *)(pbVar17 + -0xc);
          *(undefined4 *)(pbVar13 + uVar15 * 8) = *(undefined4 *)(pbVar17 + -0x14);
          *(undefined4 *)(pbVar13 + uVar15 * 8 + 4) = uVar3;
          uVar3 = *(undefined4 *)pbVar17;
          *(undefined4 *)(pbVar13 + uVar15 * 8 + 8) = *(undefined4 *)(pbVar17 + -8);
          *(undefined4 *)(pbVar13 + uVar15 * 8 + 0xc) = uVar3;
          uVar15 = uVar15 + 2;
          pbVar17 = pbVar17 + 0x18;
        } while (uVar12 != uVar15);
      }
    }
  }
  else {
    uVar12 = 0;
    uVar23 = 0;
  }
LAB_140b448c4:
  param_1[0x13] = uStack_110;
  param_1[0x11] = uStack_120;
  param_1[0x12] = uStack_118;
  param_1[0x15] = param_2;
  *param_1 = uStack_108;
  param_1[1] = lStack_100;
  param_1[2] = uStack_f8;
  param_1[3] = uStack_f0;
  param_1[4] = uStack_e8;
  param_1[5] = uStack_e0;
  param_1[6] = uStack_d8;
  param_1[7] = uStack_d0;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c0;
  param_1[10] = uStack_b8;
  param_1[0xb] = uStack_b0;
  param_1[0xc] = puStack_a8;
  param_1[0xd] = uStack_a0;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0xa4) = unaff_XMM9_Da;
  *(undefined4 *)(param_1 + 0x16) = param_5;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_6;
  param_1[0xe] = uVar12;
  param_1[0xf] = pbVar13;
  param_1[0x10] = uVar12;
  *(undefined4 *)(param_1 + 0x17) = uVar28;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar29;
  return param_1;
}

