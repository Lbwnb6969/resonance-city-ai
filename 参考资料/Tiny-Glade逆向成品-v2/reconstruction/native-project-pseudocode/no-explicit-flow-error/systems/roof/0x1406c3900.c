// VA 0x1406c3900, PDB extent 2684 bytes
// system_roof::impl$0::add_roof_events_and_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::impl$0::add_roof_events_and_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
   Extent: 2684 */

longlong pdb_1406c3900(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 auStack_40 [14];
  
  auStack_40[0] = 2;
  uVar6 = pdb_140fe1c20(param_1,auStack_40);
  lVar7 = pdb_140fe2170(uVar6);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x24134727bff3e39d;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar24[0] = -(*pcVar1 == DAT_142e34090);
      auVar24[1] = -(pcVar1[1] == DAT_142e34090._1_1_);
      auVar24[2] = -(pcVar1[2] == DAT_142e34090._2_1_);
      auVar24[3] = -(pcVar1[3] == DAT_142e34090._3_1_);
      auVar24[4] = -(pcVar1[4] == DAT_142e34090._4_1_);
      auVar24[5] = -(pcVar1[5] == DAT_142e34090._5_1_);
      auVar24[6] = -(pcVar1[6] == DAT_142e34090._6_1_);
      auVar24[7] = -(pcVar1[7] == DAT_142e34090._7_1_);
      auVar24[8] = -(pcVar1[8] == DAT_142e34090._8_1_);
      auVar24[9] = -(pcVar1[9] == DAT_142e34090._9_1_);
      auVar24[10] = -(pcVar1[10] == DAT_142e34090._10_1_);
      auVar24[0xb] = -(pcVar1[0xb] == DAT_142e34090._11_1_);
      auVar24[0xc] = -(pcVar1[0xc] == DAT_142e34090._12_1_);
      auVar24[0xd] = -(pcVar1[0xd] == DAT_142e34090._13_1_);
      auVar24[0xe] = -(pcVar1[0xe] == DAT_142e34090._14_1_);
      auVar24[0xf] = -(pcVar1[0xf] == DAT_142e34090._15_1_);
      uVar11 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_142e340f0);
        auVar25[1] = -(pcVar2[1] == UNK_142e340f1);
        auVar25[2] = -(pcVar2[2] == UNK_142e340f2);
        auVar25[3] = -(pcVar2[3] == UNK_142e340f3);
        auVar25[4] = -(pcVar2[4] == UNK_142e340f4);
        auVar25[5] = -(pcVar2[5] == UNK_142e340f5);
        auVar25[6] = -(pcVar2[6] == UNK_142e340f6);
        auVar25[7] = -(pcVar2[7] == UNK_142e340f7);
        auVar25[8] = -(pcVar2[8] == UNK_142e340f8);
        auVar25[9] = -(pcVar2[9] == UNK_142e340f9);
        auVar25[10] = -(pcVar2[10] == UNK_142e340fa);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_142e340fb);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_142e340fc);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_142e340fd);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_142e340fe);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_142e340ff);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3a02;
          goto LAB_1406c3a18;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3a02:
  pdb_140fd09c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3a18:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x9e8fd79e57b1ffb4;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar26[0] = -(*pcVar1 == DAT_142e34650);
      auVar26[1] = -(pcVar1[1] == DAT_142e34650._1_1_);
      auVar26[2] = -(pcVar1[2] == DAT_142e34650._2_1_);
      auVar26[3] = -(pcVar1[3] == DAT_142e34650._3_1_);
      auVar26[4] = -(pcVar1[4] == DAT_142e34650._4_1_);
      auVar26[5] = -(pcVar1[5] == DAT_142e34650._5_1_);
      auVar26[6] = -(pcVar1[6] == DAT_142e34650._6_1_);
      auVar26[7] = -(pcVar1[7] == DAT_142e34650._7_1_);
      auVar26[8] = -(pcVar1[8] == DAT_142e34650._8_1_);
      auVar26[9] = -(pcVar1[9] == DAT_142e34650._9_1_);
      auVar26[10] = -(pcVar1[10] == DAT_142e34650._10_1_);
      auVar26[0xb] = -(pcVar1[0xb] == DAT_142e34650._11_1_);
      auVar26[0xc] = -(pcVar1[0xc] == DAT_142e34650._12_1_);
      auVar26[0xd] = -(pcVar1[0xd] == DAT_142e34650._13_1_);
      auVar26[0xe] = -(pcVar1[0xe] == DAT_142e34650._14_1_);
      auVar26[0xf] = -(pcVar1[0xf] == DAT_142e34650._15_1_);
      uVar11 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar27[0] = -(*pcVar2 == DAT_142f98f10);
        auVar27[1] = -(pcVar2[1] == UNK_142f98f11);
        auVar27[2] = -(pcVar2[2] == UNK_142f98f12);
        auVar27[3] = -(pcVar2[3] == UNK_142f98f13);
        auVar27[4] = -(pcVar2[4] == UNK_142f98f14);
        auVar27[5] = -(pcVar2[5] == UNK_142f98f15);
        auVar27[6] = -(pcVar2[6] == UNK_142f98f16);
        auVar27[7] = -(pcVar2[7] == UNK_142f98f17);
        auVar27[8] = -(pcVar2[8] == UNK_142f98f18);
        auVar27[9] = -(pcVar2[9] == UNK_142f98f19);
        auVar27[10] = -(pcVar2[10] == UNK_142f98f1a);
        auVar27[0xb] = -(pcVar2[0xb] == UNK_142f98f1b);
        auVar27[0xc] = -(pcVar2[0xc] == UNK_142f98f1c);
        auVar27[0xd] = -(pcVar2[0xd] == UNK_142f98f1d);
        auVar27[0xe] = -(pcVar2[0xe] == UNK_142f98f1e);
        auVar27[0xf] = -(pcVar2[0xf] == UNK_142f98f1f);
        if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3af2;
          goto LAB_1406c3b08;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3af2:
  pdb_140fd1bc0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3b08:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x24dd5b0c4c2a6afa;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar28[0] = -(*pcVar1 == DAT_142e34090);
      auVar28[1] = -(pcVar1[1] == DAT_142e34090._1_1_);
      auVar28[2] = -(pcVar1[2] == DAT_142e34090._2_1_);
      auVar28[3] = -(pcVar1[3] == DAT_142e34090._3_1_);
      auVar28[4] = -(pcVar1[4] == DAT_142e34090._4_1_);
      auVar28[5] = -(pcVar1[5] == DAT_142e34090._5_1_);
      auVar28[6] = -(pcVar1[6] == DAT_142e34090._6_1_);
      auVar28[7] = -(pcVar1[7] == DAT_142e34090._7_1_);
      auVar28[8] = -(pcVar1[8] == DAT_142e34090._8_1_);
      auVar28[9] = -(pcVar1[9] == DAT_142e34090._9_1_);
      auVar28[10] = -(pcVar1[10] == DAT_142e34090._10_1_);
      auVar28[0xb] = -(pcVar1[0xb] == DAT_142e34090._11_1_);
      auVar28[0xc] = -(pcVar1[0xc] == DAT_142e34090._12_1_);
      auVar28[0xd] = -(pcVar1[0xd] == DAT_142e34090._13_1_);
      auVar28[0xe] = -(pcVar1[0xe] == DAT_142e34090._14_1_);
      auVar28[0xf] = -(pcVar1[0xf] == DAT_142e34090._15_1_);
      uVar11 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar29[0] = -(*pcVar2 == DAT_142e340a0);
        auVar29[1] = -(pcVar2[1] == UNK_142e340a1);
        auVar29[2] = -(pcVar2[2] == UNK_142e340a2);
        auVar29[3] = -(pcVar2[3] == UNK_142e340a3);
        auVar29[4] = -(pcVar2[4] == UNK_142e340a4);
        auVar29[5] = -(pcVar2[5] == UNK_142e340a5);
        auVar29[6] = -(pcVar2[6] == UNK_142e340a6);
        auVar29[7] = -(pcVar2[7] == UNK_142e340a7);
        auVar29[8] = -(pcVar2[8] == UNK_142e340a8);
        auVar29[9] = -(pcVar2[9] == UNK_142e340a9);
        auVar29[10] = -(pcVar2[10] == UNK_142e340aa);
        auVar29[0xb] = -(pcVar2[0xb] == UNK_142e340ab);
        auVar29[0xc] = -(pcVar2[0xc] == UNK_142e340ac);
        auVar29[0xd] = -(pcVar2[0xd] == UNK_142e340ad);
        auVar29[0xe] = -(pcVar2[0xe] == UNK_142e340ae);
        auVar29[0xf] = -(pcVar2[0xf] == UNK_142e340af);
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3be2;
          goto LAB_1406c3bf8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3be2:
  pdb_140fcf7c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3bf8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x4a01615159ac3ce0;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar30[0] = -(*pcVar1 == DAT_142e34d60);
      auVar30[1] = -(pcVar1[1] == DAT_142e34d60._1_1_);
      auVar30[2] = -(pcVar1[2] == DAT_142e34d60._2_1_);
      auVar30[3] = -(pcVar1[3] == DAT_142e34d60._3_1_);
      auVar30[4] = -(pcVar1[4] == DAT_142e34d60._4_1_);
      auVar30[5] = -(pcVar1[5] == DAT_142e34d60._5_1_);
      auVar30[6] = -(pcVar1[6] == DAT_142e34d60._6_1_);
      auVar30[7] = -(pcVar1[7] == DAT_142e34d60._7_1_);
      auVar30[8] = -(pcVar1[8] == DAT_142e34d60._8_1_);
      auVar30[9] = -(pcVar1[9] == DAT_142e34d60._9_1_);
      auVar30[10] = -(pcVar1[10] == DAT_142e34d60._10_1_);
      auVar30[0xb] = -(pcVar1[0xb] == DAT_142e34d60._11_1_);
      auVar30[0xc] = -(pcVar1[0xc] == DAT_142e34d60._12_1_);
      auVar30[0xd] = -(pcVar1[0xd] == DAT_142e34d60._13_1_);
      auVar30[0xe] = -(pcVar1[0xe] == DAT_142e34d60._14_1_);
      auVar30[0xf] = -(pcVar1[0xf] == DAT_142e34d60._15_1_);
      uVar11 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar31[0] = -(*pcVar2 == DAT_142f98f20);
        auVar31[1] = -(pcVar2[1] == UNK_142f98f21);
        auVar31[2] = -(pcVar2[2] == UNK_142f98f22);
        auVar31[3] = -(pcVar2[3] == UNK_142f98f23);
        auVar31[4] = -(pcVar2[4] == UNK_142f98f24);
        auVar31[5] = -(pcVar2[5] == UNK_142f98f25);
        auVar31[6] = -(pcVar2[6] == UNK_142f98f26);
        auVar31[7] = -(pcVar2[7] == UNK_142f98f27);
        auVar31[8] = -(pcVar2[8] == UNK_142f98f28);
        auVar31[9] = -(pcVar2[9] == UNK_142f98f29);
        auVar31[10] = -(pcVar2[10] == UNK_142f98f2a);
        auVar31[0xb] = -(pcVar2[0xb] == UNK_142f98f2b);
        auVar31[0xc] = -(pcVar2[0xc] == UNK_142f98f2c);
        auVar31[0xd] = -(pcVar2[0xd] == UNK_142f98f2d);
        auVar31[0xe] = -(pcVar2[0xe] == UNK_142f98f2e);
        auVar31[0xf] = -(pcVar2[0xf] == UNK_142f98f2f);
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3cd2;
          goto LAB_1406c3ce8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3cd2:
  pdb_140fcf1c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3ce8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x4e150b7ae98f0b42;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar32[0] = -(*pcVar1 == DAT_142e3d9d0);
      auVar32[1] = -(pcVar1[1] == DAT_142e3d9d0._1_1_);
      auVar32[2] = -(pcVar1[2] == DAT_142e3d9d0._2_1_);
      auVar32[3] = -(pcVar1[3] == DAT_142e3d9d0._3_1_);
      auVar32[4] = -(pcVar1[4] == DAT_142e3d9d0._4_1_);
      auVar32[5] = -(pcVar1[5] == DAT_142e3d9d0._5_1_);
      auVar32[6] = -(pcVar1[6] == DAT_142e3d9d0._6_1_);
      auVar32[7] = -(pcVar1[7] == DAT_142e3d9d0._7_1_);
      auVar32[8] = -(pcVar1[8] == DAT_142e3d9d0._8_1_);
      auVar32[9] = -(pcVar1[9] == DAT_142e3d9d0._9_1_);
      auVar32[10] = -(pcVar1[10] == DAT_142e3d9d0._10_1_);
      auVar32[0xb] = -(pcVar1[0xb] == DAT_142e3d9d0._11_1_);
      auVar32[0xc] = -(pcVar1[0xc] == DAT_142e3d9d0._12_1_);
      auVar32[0xd] = -(pcVar1[0xd] == DAT_142e3d9d0._13_1_);
      auVar32[0xe] = -(pcVar1[0xe] == DAT_142e3d9d0._14_1_);
      auVar32[0xf] = -(pcVar1[0xf] == DAT_142e3d9d0._15_1_);
      uVar11 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar33[0] = -(*pcVar2 == DAT_142f98f30);
        auVar33[1] = -(pcVar2[1] == UNK_142f98f31);
        auVar33[2] = -(pcVar2[2] == UNK_142f98f32);
        auVar33[3] = -(pcVar2[3] == UNK_142f98f33);
        auVar33[4] = -(pcVar2[4] == UNK_142f98f34);
        auVar33[5] = -(pcVar2[5] == UNK_142f98f35);
        auVar33[6] = -(pcVar2[6] == UNK_142f98f36);
        auVar33[7] = -(pcVar2[7] == UNK_142f98f37);
        auVar33[8] = -(pcVar2[8] == UNK_142f98f38);
        auVar33[9] = -(pcVar2[9] == UNK_142f98f39);
        auVar33[10] = -(pcVar2[10] == UNK_142f98f3a);
        auVar33[0xb] = -(pcVar2[0xb] == UNK_142f98f3b);
        auVar33[0xc] = -(pcVar2[0xc] == UNK_142f98f3c);
        auVar33[0xd] = -(pcVar2[0xd] == UNK_142f98f3d);
        auVar33[0xe] = -(pcVar2[0xe] == UNK_142f98f3e);
        auVar33[0xf] = -(pcVar2[0xf] == UNK_142f98f3f);
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3dc2;
          goto LAB_1406c3dd8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3dc2:
  pdb_140fd03c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3dd8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0xe8397e5ee64d8eaf;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar34[0] = -(*pcVar1 == DAT_142e34160);
      auVar34[1] = -(pcVar1[1] == DAT_142e34160._1_1_);
      auVar34[2] = -(pcVar1[2] == DAT_142e34160._2_1_);
      auVar34[3] = -(pcVar1[3] == DAT_142e34160._3_1_);
      auVar34[4] = -(pcVar1[4] == DAT_142e34160._4_1_);
      auVar34[5] = -(pcVar1[5] == DAT_142e34160._5_1_);
      auVar34[6] = -(pcVar1[6] == DAT_142e34160._6_1_);
      auVar34[7] = -(pcVar1[7] == DAT_142e34160._7_1_);
      auVar34[8] = -(pcVar1[8] == DAT_142e34160._8_1_);
      auVar34[9] = -(pcVar1[9] == DAT_142e34160._9_1_);
      auVar34[10] = -(pcVar1[10] == DAT_142e34160._10_1_);
      auVar34[0xb] = -(pcVar1[0xb] == DAT_142e34160._11_1_);
      auVar34[0xc] = -(pcVar1[0xc] == DAT_142e34160._12_1_);
      auVar34[0xd] = -(pcVar1[0xd] == DAT_142e34160._13_1_);
      auVar34[0xe] = -(pcVar1[0xe] == DAT_142e34160._14_1_);
      auVar34[0xf] = -(pcVar1[0xf] == DAT_142e34160._15_1_);
      uVar11 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar35[0] = -(*pcVar2 == DAT_142e34c20);
        auVar35[1] = -(pcVar2[1] == UNK_142e34c21);
        auVar35[2] = -(pcVar2[2] == UNK_142e34c22);
        auVar35[3] = -(pcVar2[3] == UNK_142e34c23);
        auVar35[4] = -(pcVar2[4] == UNK_142e34c24);
        auVar35[5] = -(pcVar2[5] == UNK_142e34c25);
        auVar35[6] = -(pcVar2[6] == UNK_142e34c26);
        auVar35[7] = -(pcVar2[7] == UNK_142e34c27);
        auVar35[8] = -(pcVar2[8] == UNK_142e34c28);
        auVar35[9] = -(pcVar2[9] == UNK_142e34c29);
        auVar35[10] = -(pcVar2[10] == UNK_142e34c2a);
        auVar35[0xb] = -(pcVar2[0xb] == UNK_142e34c2b);
        auVar35[0xc] = -(pcVar2[0xc] == UNK_142e34c2c);
        auVar35[0xd] = -(pcVar2[0xd] == UNK_142e34c2d);
        auVar35[0xe] = -(pcVar2[0xe] == UNK_142e34c2e);
        auVar35[0xf] = -(pcVar2[0xf] == UNK_142e34c2f);
        if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3eb2;
          goto LAB_1406c3ec8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3eb2:
  pdb_140fcfdc0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3ec8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x23bd031f5579c525;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar36[0] = -(*pcVar1 == DAT_142e33cd0);
      auVar36[1] = -(pcVar1[1] == DAT_142e33cd0._1_1_);
      auVar36[2] = -(pcVar1[2] == DAT_142e33cd0._2_1_);
      auVar36[3] = -(pcVar1[3] == DAT_142e33cd0._3_1_);
      auVar36[4] = -(pcVar1[4] == DAT_142e33cd0._4_1_);
      auVar36[5] = -(pcVar1[5] == DAT_142e33cd0._5_1_);
      auVar36[6] = -(pcVar1[6] == DAT_142e33cd0._6_1_);
      auVar36[7] = -(pcVar1[7] == DAT_142e33cd0._7_1_);
      auVar36[8] = -(pcVar1[8] == DAT_142e33cd0._8_1_);
      auVar36[9] = -(pcVar1[9] == DAT_142e33cd0._9_1_);
      auVar36[10] = -(pcVar1[10] == DAT_142e33cd0._10_1_);
      auVar36[0xb] = -(pcVar1[0xb] == DAT_142e33cd0._11_1_);
      auVar36[0xc] = -(pcVar1[0xc] == DAT_142e33cd0._12_1_);
      auVar36[0xd] = -(pcVar1[0xd] == DAT_142e33cd0._13_1_);
      auVar36[0xe] = -(pcVar1[0xe] == DAT_142e33cd0._14_1_);
      auVar36[0xf] = -(pcVar1[0xf] == DAT_142e33cd0._15_1_);
      uVar11 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142e340b0);
        auVar37[1] = -(pcVar2[1] == UNK_142e340b1);
        auVar37[2] = -(pcVar2[2] == UNK_142e340b2);
        auVar37[3] = -(pcVar2[3] == UNK_142e340b3);
        auVar37[4] = -(pcVar2[4] == UNK_142e340b4);
        auVar37[5] = -(pcVar2[5] == UNK_142e340b5);
        auVar37[6] = -(pcVar2[6] == UNK_142e340b6);
        auVar37[7] = -(pcVar2[7] == UNK_142e340b7);
        auVar37[8] = -(pcVar2[8] == UNK_142e340b8);
        auVar37[9] = -(pcVar2[9] == UNK_142e340b9);
        auVar37[10] = -(pcVar2[10] == UNK_142e340ba);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142e340bb);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142e340bc);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142e340bd);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142e340be);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142e340bf);
        if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c3fa2;
          goto LAB_1406c3fb8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c3fa2:
  pdb_140fd0fc0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c3fb8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x6d3711b82d5564a0;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar38[0] = -(*pcVar1 == DAT_142e34500);
      auVar38[1] = -(pcVar1[1] == DAT_142e34500._1_1_);
      auVar38[2] = -(pcVar1[2] == DAT_142e34500._2_1_);
      auVar38[3] = -(pcVar1[3] == DAT_142e34500._3_1_);
      auVar38[4] = -(pcVar1[4] == DAT_142e34500._4_1_);
      auVar38[5] = -(pcVar1[5] == DAT_142e34500._5_1_);
      auVar38[6] = -(pcVar1[6] == DAT_142e34500._6_1_);
      auVar38[7] = -(pcVar1[7] == DAT_142e34500._7_1_);
      auVar38[8] = -(pcVar1[8] == DAT_142e34500._8_1_);
      auVar38[9] = -(pcVar1[9] == DAT_142e34500._9_1_);
      auVar38[10] = -(pcVar1[10] == DAT_142e34500._10_1_);
      auVar38[0xb] = -(pcVar1[0xb] == DAT_142e34500._11_1_);
      auVar38[0xc] = -(pcVar1[0xc] == DAT_142e34500._12_1_);
      auVar38[0xd] = -(pcVar1[0xd] == DAT_142e34500._13_1_);
      auVar38[0xe] = -(pcVar1[0xe] == DAT_142e34500._14_1_);
      auVar38[0xf] = -(pcVar1[0xf] == DAT_142e34500._15_1_);
      uVar11 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142f98f40);
        auVar39[1] = -(pcVar2[1] == UNK_142f98f41);
        auVar39[2] = -(pcVar2[2] == UNK_142f98f42);
        auVar39[3] = -(pcVar2[3] == UNK_142f98f43);
        auVar39[4] = -(pcVar2[4] == UNK_142f98f44);
        auVar39[5] = -(pcVar2[5] == UNK_142f98f45);
        auVar39[6] = -(pcVar2[6] == UNK_142f98f46);
        auVar39[7] = -(pcVar2[7] == UNK_142f98f47);
        auVar39[8] = -(pcVar2[8] == UNK_142f98f48);
        auVar39[9] = -(pcVar2[9] == UNK_142f98f49);
        auVar39[10] = -(pcVar2[10] == UNK_142f98f4a);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142f98f4b);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142f98f4c);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142f98f4d);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142f98f4e);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142f98f4f);
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c4092;
          goto LAB_1406c40a8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar20[0] = -(*pcVar1 == -1);
      auVar20[1] = -(pcVar1[1] == -1);
      auVar20[2] = -(pcVar1[2] == -1);
      auVar20[3] = -(pcVar1[3] == -1);
      auVar20[4] = -(pcVar1[4] == -1);
      auVar20[5] = -(pcVar1[5] == -1);
      auVar20[6] = -(pcVar1[6] == -1);
      auVar20[7] = -(pcVar1[7] == -1);
      auVar20[8] = -(pcVar1[8] == -1);
      auVar20[9] = -(pcVar1[9] == -1);
      auVar20[10] = -(pcVar1[10] == -1);
      auVar20[0xb] = -(pcVar1[0xb] == -1);
      auVar20[0xc] = -(pcVar1[0xc] == -1);
      auVar20[0xd] = -(pcVar1[0xd] == -1);
      auVar20[0xe] = -(pcVar1[0xe] == -1);
      auVar20[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c4092:
  pdb_140fcd9c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c40a8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0xc9b7e9d3eb8450a7;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar40[0] = -(*pcVar1 == DAT_142e34600);
      auVar40[1] = -(pcVar1[1] == DAT_142e34600._1_1_);
      auVar40[2] = -(pcVar1[2] == DAT_142e34600._2_1_);
      auVar40[3] = -(pcVar1[3] == DAT_142e34600._3_1_);
      auVar40[4] = -(pcVar1[4] == DAT_142e34600._4_1_);
      auVar40[5] = -(pcVar1[5] == DAT_142e34600._5_1_);
      auVar40[6] = -(pcVar1[6] == DAT_142e34600._6_1_);
      auVar40[7] = -(pcVar1[7] == DAT_142e34600._7_1_);
      auVar40[8] = -(pcVar1[8] == DAT_142e34600._8_1_);
      auVar40[9] = -(pcVar1[9] == DAT_142e34600._9_1_);
      auVar40[10] = -(pcVar1[10] == DAT_142e34600._10_1_);
      auVar40[0xb] = -(pcVar1[0xb] == DAT_142e34600._11_1_);
      auVar40[0xc] = -(pcVar1[0xc] == DAT_142e34600._12_1_);
      auVar40[0xd] = -(pcVar1[0xd] == DAT_142e34600._13_1_);
      auVar40[0xe] = -(pcVar1[0xe] == DAT_142e34600._14_1_);
      auVar40[0xf] = -(pcVar1[0xf] == DAT_142e34600._15_1_);
      uVar11 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar41[0] = -(*pcVar2 == DAT_142f98f50);
        auVar41[1] = -(pcVar2[1] == UNK_142f98f51);
        auVar41[2] = -(pcVar2[2] == UNK_142f98f52);
        auVar41[3] = -(pcVar2[3] == UNK_142f98f53);
        auVar41[4] = -(pcVar2[4] == UNK_142f98f54);
        auVar41[5] = -(pcVar2[5] == UNK_142f98f55);
        auVar41[6] = -(pcVar2[6] == UNK_142f98f56);
        auVar41[7] = -(pcVar2[7] == UNK_142f98f57);
        auVar41[8] = -(pcVar2[8] == UNK_142f98f58);
        auVar41[9] = -(pcVar2[9] == UNK_142f98f59);
        auVar41[10] = -(pcVar2[10] == UNK_142f98f5a);
        auVar41[0xb] = -(pcVar2[0xb] == UNK_142f98f5b);
        auVar41[0xc] = -(pcVar2[0xc] == UNK_142f98f5c);
        auVar41[0xd] = -(pcVar2[0xd] == UNK_142f98f5d);
        auVar41[0xe] = -(pcVar2[0xe] == UNK_142f98f5e);
        auVar41[0xf] = -(pcVar2[0xf] == UNK_142f98f5f);
        if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar41[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c4182;
          goto LAB_1406c4198;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c4182:
  pdb_140fcd3c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c4198:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x5817f640052bc8cf;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar42[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar42[1] = -(pcVar1[1] == DAT_142e33bd0._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142e33bd0._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142e33bd0._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142e33bd0._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142e33bd0._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142e33bd0._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142e33bd0._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142e33bd0._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142e33bd0._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142e33bd0._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142e33bd0._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142e33bd0._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142e33bd0._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142e33bd0._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142e33bd0._15_1_);
      uVar11 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142f98f60);
        auVar43[1] = -(pcVar2[1] == UNK_142f98f61);
        auVar43[2] = -(pcVar2[2] == UNK_142f98f62);
        auVar43[3] = -(pcVar2[3] == UNK_142f98f63);
        auVar43[4] = -(pcVar2[4] == UNK_142f98f64);
        auVar43[5] = -(pcVar2[5] == UNK_142f98f65);
        auVar43[6] = -(pcVar2[6] == UNK_142f98f66);
        auVar43[7] = -(pcVar2[7] == UNK_142f98f67);
        auVar43[8] = -(pcVar2[8] == UNK_142f98f68);
        auVar43[9] = -(pcVar2[9] == UNK_142f98f69);
        auVar43[10] = -(pcVar2[10] == UNK_142f98f6a);
        auVar43[0xb] = -(pcVar2[0xb] == UNK_142f98f6b);
        auVar43[0xc] = -(pcVar2[0xc] == UNK_142f98f6c);
        auVar43[0xd] = -(pcVar2[0xd] == UNK_142f98f6d);
        auVar43[0xe] = -(pcVar2[0xe] == UNK_142f98f6e);
        auVar43[0xf] = -(pcVar2[0xf] == UNK_142f98f6f);
        if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c4272;
          goto LAB_1406c4288;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c4272:
  pdb_140fd15c0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_1406c4288:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0xfd3b683824b4880e;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar44[0] = -(*pcVar1 == DAT_142e3db20);
      auVar44[1] = -(pcVar1[1] == DAT_142e3db20._1_1_);
      auVar44[2] = -(pcVar1[2] == DAT_142e3db20._2_1_);
      auVar44[3] = -(pcVar1[3] == DAT_142e3db20._3_1_);
      auVar44[4] = -(pcVar1[4] == DAT_142e3db20._4_1_);
      auVar44[5] = -(pcVar1[5] == DAT_142e3db20._5_1_);
      auVar44[6] = -(pcVar1[6] == DAT_142e3db20._6_1_);
      auVar44[7] = -(pcVar1[7] == DAT_142e3db20._7_1_);
      auVar44[8] = -(pcVar1[8] == DAT_142e3db20._8_1_);
      auVar44[9] = -(pcVar1[9] == DAT_142e3db20._9_1_);
      auVar44[10] = -(pcVar1[10] == DAT_142e3db20._10_1_);
      auVar44[0xb] = -(pcVar1[0xb] == DAT_142e3db20._11_1_);
      auVar44[0xc] = -(pcVar1[0xc] == DAT_142e3db20._12_1_);
      auVar44[0xd] = -(pcVar1[0xd] == DAT_142e3db20._13_1_);
      auVar44[0xe] = -(pcVar1[0xe] == DAT_142e3db20._14_1_);
      auVar44[0xf] = -(pcVar1[0xf] == DAT_142e3db20._15_1_);
      uVar11 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar45[0] = -(*pcVar2 == DAT_142f98f70);
        auVar45[1] = -(pcVar2[1] == UNK_142f98f71);
        auVar45[2] = -(pcVar2[2] == UNK_142f98f72);
        auVar45[3] = -(pcVar2[3] == UNK_142f98f73);
        auVar45[4] = -(pcVar2[4] == UNK_142f98f74);
        auVar45[5] = -(pcVar2[5] == UNK_142f98f75);
        auVar45[6] = -(pcVar2[6] == UNK_142f98f76);
        auVar45[7] = -(pcVar2[7] == UNK_142f98f77);
        auVar45[8] = -(pcVar2[8] == UNK_142f98f78);
        auVar45[9] = -(pcVar2[9] == UNK_142f98f79);
        auVar45[10] = -(pcVar2[10] == UNK_142f98f7a);
        auVar45[0xb] = -(pcVar2[0xb] == UNK_142f98f7b);
        auVar45[0xc] = -(pcVar2[0xc] == UNK_142f98f7c);
        auVar45[0xd] = -(pcVar2[0xd] == UNK_142f98f7d);
        auVar45[0xe] = -(pcVar2[0xe] == UNK_142f98f7e);
        auVar45[0xf] = -(pcVar2[0xf] == UNK_142f98f7f);
        if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((uVar8 < *(ulonglong *)(lVar7 + 0x210)) &&
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) != 0)) {
            return lVar7;
          }
          goto LAB_1406c436b;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406c436b:
  pdb_140fcdfc0(lVar7);
  return lVar7;
}

