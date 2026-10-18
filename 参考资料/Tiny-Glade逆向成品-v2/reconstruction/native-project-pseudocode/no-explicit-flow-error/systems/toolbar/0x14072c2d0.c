// VA 0x14072c2d0, PDB extent 1012 bytes
// toolbar::mei::core::MeiContext::reuse_or_create_node
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::reuse_or_create_node
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 1012 */

longlong pdb_14072c2d0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  undefined4 uVar15;
  byte bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined4 uStack_1f8;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  byte *pbStack_1a8;
  undefined1 auStack_1a0 [136];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_e6;
  byte bStack_e5;
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lStack_240 = param_2;
  lStack_1b8 = param_2;
  uVar6 = pdb_1400af0a0(param_1 + 0x1d0,&lStack_1b8);
  lVar11 = *(longlong *)(param_1 + 0x1b0);
  bVar16 = (byte)(uVar6 >> 0x38);
  bVar17 = bVar16 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar10 = 0;
  uVar12 = uVar6;
  do {
    uVar12 = uVar12 & *(ulonglong *)(param_1 + 0x1b8);
    pcVar1 = (char *)(lVar11 + uVar12);
    auVar20[0] = -(*pcVar1 == auVar18[0]);
    auVar20[1] = -(pcVar1[1] == auVar18[1]);
    auVar20[2] = -(pcVar1[2] == auVar18[2]);
    auVar20[3] = -(pcVar1[3] == auVar18[3]);
    auVar20[4] = -(pcVar1[4] == auVar18[4]);
    auVar20[5] = -(pcVar1[5] == auVar18[5]);
    auVar20[6] = -(pcVar1[6] == auVar18[6]);
    auVar20[7] = -(pcVar1[7] == auVar18[7]);
    auVar20[8] = -(pcVar1[8] == auVar18[0]);
    auVar20[9] = -(pcVar1[9] == auVar18[1]);
    auVar20[10] = -(pcVar1[10] == auVar18[2]);
    auVar20[0xb] = -(pcVar1[0xb] == auVar18[3]);
    auVar20[0xc] = -(pcVar1[0xc] == auVar18[4]);
    auVar20[0xd] = -(pcVar1[0xd] == auVar18[5]);
    auVar20[0xe] = -(pcVar1[0xe] == auVar18[6]);
    auVar20[0xf] = -(pcVar1[0xf] == auVar18[7]);
    uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
    uVar8 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar9 = 0;
      for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar14 = (uVar9 + uVar12 & *(ulonglong *)(param_1 + 0x1b8)) * -0xd8;
      if (*(longlong *)(lVar11 + -0xd8 + lVar14) == param_2) {
        lVar11 = lVar11 + lVar14;
        goto LAB_14072c64c;
      }
      uVar13 = (ushort)(uVar8 - 1) & (ushort)uVar8;
      uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar13);
    }
    auVar19[0] = -(*pcVar1 == -1);
    auVar19[1] = -(pcVar1[1] == -1);
    auVar19[2] = -(pcVar1[2] == -1);
    auVar19[3] = -(pcVar1[3] == -1);
    auVar19[4] = -(pcVar1[4] == -1);
    auVar19[5] = -(pcVar1[5] == -1);
    auVar19[6] = -(pcVar1[6] == -1);
    auVar19[7] = -(pcVar1[7] == -1);
    auVar19[8] = -(pcVar1[8] == -1);
    auVar19[9] = -(pcVar1[9] == -1);
    auVar19[10] = -(pcVar1[10] == -1);
    auVar19[0xb] = -(pcVar1[0xb] == -1);
    auVar19[0xc] = -(pcVar1[0xc] == -1);
    auVar19[0xd] = -(pcVar1[0xd] == -1);
    auVar19[0xe] = -(pcVar1[0xe] == -1);
    auVar19[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
      if (*(longlong *)(param_1 + 0x1c0) == 0) {
        pdb_142dcf9c0(param_1 + 0x1b0,1,param_1 + 0x1d0,CONCAT71((int7)(uVar12 >> 8),1));
      }
      uVar7 = pdb_1400af0a0(param_1 + 0x230,&lStack_240);
      pdb_1411ae3e0(&lStack_1b8,param_1 + 0x210,uVar7,&lStack_240);
      if (SBORROW8(0,lStack_1b0)) {
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        auStack_238 = ZEXT816(0);
        auStack_228 = ZEXT816(0);
        auStack_218 = ZEXT816(0);
        auStack_208 = ZEXT816(0);
        uStack_1f8 = 0;
        auStack_1e8 = ZEXT816(0);
        auStack_1d8 = ZEXT816(0);
        bStack_e5 = 0;
        uStack_e6 = 0;
        uVar15 = 0;
      }
      else {
        pub_142e32760(auStack_e0,auStack_1a0,0x88);
        bStack_e5 = bStack_e5 & 0xf3;
        auStack_238 = (undefined1  [16])0x0;
        auStack_228 = (undefined1  [16])0x0;
        auStack_218 = (undefined1  [16])0x0;
        auStack_208 = (undefined1  [16])0x0;
        uStack_1f8 = 0;
        auStack_1e8 = (undefined1  [16])0x0;
        auStack_1d8 = (undefined1  [16])0x0;
        uStack_1c8 = uStack_68;
        uStack_1c0 = uStack_60;
        uVar15 = 1;
        if (lStack_1b0 != 0) {
          pub_1406abac0(pbStack_1a8,lStack_1b0 << 3,8);
        }
      }
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0x1b0);
      uVar12 = *(ulonglong *)(param_1 + 0x1b8);
      uVar6 = uVar6 & uVar12;
      auVar18 = *(undefined1 (*) [16])(*pauVar4 + uVar6);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar13;
      if (uVar13 == 0) {
        lVar11 = 0x10;
        do {
          uVar6 = uVar6 + lVar11 & uVar12;
          auVar18 = *(undefined1 (*) [16])(*pauVar4 + uVar6);
          lVar11 = lVar11 + 0x10;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
        } while (uVar8 == 0);
      }
      uVar9 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar6 = uVar9 + uVar6 & uVar12;
      bVar17 = (*pauVar4)[uVar6];
      if (-1 < (char)bVar17) {
        auVar18 = *pauVar4;
        uVar8 = 0;
        for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
            uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar6 = (ulonglong)uVar8;
        bVar17 = (*pauVar4)[uVar6];
      }
      bVar16 = bVar16 >> 1;
      (*pauVar4)[uVar6] = bVar16;
      pauVar4[1][uVar6 - 0x10 & uVar12] = bVar16;
      *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_1 + 0x1c0) - (ulonglong)(bVar17 & 1);
      lVar10 = uVar6 * -0xd8;
      lVar11 = (longlong)pauVar4 + lVar10;
      *(longlong *)((longlong)pauVar4 + lVar10 + -0xd8) = param_2;
      *(undefined8 *)((longlong)pauVar4 + lVar10 + -0xd0) = 0;
      *(undefined8 *)((longlong)pauVar4 + lVar10 + -200) = 8;
      *(undefined8 *)((longlong)pauVar4 + lVar10 + -0xc0) = 0;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0xb8);
      *puVar3 = auStack_238._0_8_;
      puVar3[1] = auStack_238._8_8_;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0xa8);
      *puVar3 = auStack_228._0_8_;
      puVar3[1] = auStack_228._8_8_;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0x98);
      *puVar3 = auStack_218._0_8_;
      puVar3[1] = auStack_218._8_8_;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0x88);
      *puVar3 = auStack_208._0_8_;
      puVar3[1] = auStack_208._8_8_;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0x78) = uStack_1f8;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0x74) = 0x4000000;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0x70);
      *puVar3 = auStack_1d8._0_8_;
      puVar3[1] = auStack_1d8._8_8_;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0x60) = 0;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0x4c) = 0x3f800000;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0x48);
      *puVar3 = auStack_1e8._0_8_;
      puVar3[1] = auStack_1e8._8_8_;
      puVar2 = (undefined4 *)((longlong)pauVar4 + lVar10 + -0x38);
      *puVar2 = uStack_118;
      puVar2[1] = uStack_114;
      puVar2[2] = uStack_110;
      puVar2[3] = uStack_10c;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0x28) = uVar15;
      puVar3 = (undefined8 *)((longlong)pauVar4 + lVar10 + -0x24);
      *puVar3 = uStack_1c8;
      puVar3[1] = uStack_1c0;
      *(undefined8 *)((longlong)pauVar4 + lVar10 + -0x14) = 0;
      *(undefined4 *)((longlong)pauVar4 + lVar10 + -0xc) = 0x3f800000;
      *(undefined2 *)((longlong)pauVar4 + lVar10 + -8) = 0xf0f;
      *(undefined1 *)((longlong)pauVar4 + lVar10 + -6) = uStack_e6;
      *(byte *)((longlong)pauVar4 + lVar10 + -5) = bStack_e5;
      *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) + 1;
LAB_14072c64c:
      return lVar11 + -0xd0;
    }
    uVar12 = uVar12 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}

