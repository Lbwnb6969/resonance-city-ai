// VA 0x1406f1cd0, PDB extent 2453 bytes
// system_tree::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/lib.rs
   Extent: 2453 */

void pdb_1406f1cd0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 *puStack_e0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_1410797e0(param_2,1);
  pdb_14107a2e0(&uStack_1e8,0x28,&UNK_142f9fec8);
  pdb_14107b320(&uStack_178);
  uStack_21 = 0x1b;
  puVar9 = &uStack_21;
  uVar6 = pdb_14107c2c0(_DAT_143ca8dd0,puVar9,&UNK_14327eb40);
  pdb_140676be0(&uStack_178,uVar6,puVar9);
  uStack_38 = uStack_118;
  uStack_30 = uStack_110;
  uStack_48 = uStack_128;
  uStack_40 = uStack_120;
  uStack_58 = uStack_138;
  uStack_50 = uStack_130;
  uStack_68 = uStack_148;
  uStack_60 = uStack_140;
  uStack_78 = uStack_158;
  uStack_70 = uStack_150;
  uStack_88 = uStack_168;
  uStack_80 = uStack_160;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  uStack_108 = uStack_1e8;
  uStack_100 = uStack_1e0;
  uStack_f8 = uStack_1d8;
  uStack_f0 = uStack_1d0;
  lStack_e8 = uStack_1c8;
  puStack_e0 = (undefined8 *)uStack_1c0;
  uStack_d8 = uStack_1b8;
  uStack_d0 = uStack_1b0;
  uStack_c8 = uStack_1a8;
  uStack_c0 = uStack_1a0;
  uStack_b8 = uStack_198;
  uStack_b0 = uStack_190;
  uStack_a8 = uStack_188;
  uStack_a0 = uStack_180;
  puVar10 = &uStack_108;
  pdb_141079600(param_2);
  plVar7 = (longlong *)pdb_140f3bda0();
  if ((char)plVar7[2] == '\x01') {
    lStack_e8 = *plVar7;
    puVar10 = (undefined8 *)plVar7[1];
  }
  else {
    lStack_e8 = pdb_140f4fd10();
    *plVar7 = lStack_e8;
    plVar7[1] = (longlong)puVar10;
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  *plVar7 = lStack_e8 + 1;
  uStack_f8 = _DAT_142f9ff00;
  uStack_f0 = _UNK_142f9ff08;
  uStack_108 = _DAT_142f9fef0;
  uStack_100 = _UNK_142f9fef8;
  uStack_d8 = 0;
  puStack_e0 = puVar10;
  lVar8 = pdb_14107c7e0(param_2,&uStack_108);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0xae67cf9aa17b3307;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar24[0] = -(*pcVar1 == DAT_142e34200);
      auVar24[1] = -(pcVar1[1] == DAT_142e34200._1_1_);
      auVar24[2] = -(pcVar1[2] == DAT_142e34200._2_1_);
      auVar24[3] = -(pcVar1[3] == DAT_142e34200._3_1_);
      auVar24[4] = -(pcVar1[4] == DAT_142e34200._4_1_);
      auVar24[5] = -(pcVar1[5] == DAT_142e34200._5_1_);
      auVar24[6] = -(pcVar1[6] == DAT_142e34200._6_1_);
      auVar24[7] = -(pcVar1[7] == DAT_142e34200._7_1_);
      auVar24[8] = -(pcVar1[8] == DAT_142e34200._8_1_);
      auVar24[9] = -(pcVar1[9] == DAT_142e34200._9_1_);
      auVar24[10] = -(pcVar1[10] == DAT_142e34200._10_1_);
      auVar24[0xb] = -(pcVar1[0xb] == DAT_142e34200._11_1_);
      auVar24[0xc] = -(pcVar1[0xc] == DAT_142e34200._12_1_);
      auVar24[0xd] = -(pcVar1[0xd] == DAT_142e34200._13_1_);
      auVar24[0xe] = -(pcVar1[0xe] == DAT_142e34200._14_1_);
      auVar24[0xf] = -(pcVar1[0xf] == DAT_142e34200._15_1_);
      uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_142f9fe40);
        auVar25[1] = -(pcVar2[1] == UNK_142f9fe41);
        auVar25[2] = -(pcVar2[2] == UNK_142f9fe42);
        auVar25[3] = -(pcVar2[3] == UNK_142f9fe43);
        auVar25[4] = -(pcVar2[4] == UNK_142f9fe44);
        auVar25[5] = -(pcVar2[5] == UNK_142f9fe45);
        auVar25[6] = -(pcVar2[6] == UNK_142f9fe46);
        auVar25[7] = -(pcVar2[7] == UNK_142f9fe47);
        auVar25[8] = -(pcVar2[8] == UNK_142f9fe48);
        auVar25[9] = -(pcVar2[9] == UNK_142f9fe49);
        auVar25[10] = -(pcVar2[10] == UNK_142f9fe4a);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_142f9fe4b);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_142f9fe4c);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_142f9fe4d);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_142f9fe4e);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_142f9fe4f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f1f42;
          goto LAB_1406f1f58;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f1f42:
  pdb_14107dab0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f1f58:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0x3b1359994d9fdffe;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar26[0] = -(*pcVar1 == DAT_142e34730);
      auVar26[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
      auVar26[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
      auVar26[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
      auVar26[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
      auVar26[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
      auVar26[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
      auVar26[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
      auVar26[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
      auVar26[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
      auVar26[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
      auVar26[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
      auVar26[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
      auVar26[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
      auVar26[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
      auVar26[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
      uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar27[0] = -(*pcVar2 == DAT_142f9fe50);
        auVar27[1] = -(pcVar2[1] == UNK_142f9fe51);
        auVar27[2] = -(pcVar2[2] == UNK_142f9fe52);
        auVar27[3] = -(pcVar2[3] == UNK_142f9fe53);
        auVar27[4] = -(pcVar2[4] == UNK_142f9fe54);
        auVar27[5] = -(pcVar2[5] == UNK_142f9fe55);
        auVar27[6] = -(pcVar2[6] == UNK_142f9fe56);
        auVar27[7] = -(pcVar2[7] == UNK_142f9fe57);
        auVar27[8] = -(pcVar2[8] == UNK_142f9fe58);
        auVar27[9] = -(pcVar2[9] == UNK_142f9fe59);
        auVar27[10] = -(pcVar2[10] == UNK_142f9fe5a);
        auVar27[0xb] = -(pcVar2[0xb] == UNK_142f9fe5b);
        auVar27[0xc] = -(pcVar2[0xc] == UNK_142f9fe5c);
        auVar27[0xd] = -(pcVar2[0xd] == UNK_142f9fe5d);
        auVar27[0xe] = -(pcVar2[0xe] == UNK_142f9fe5e);
        auVar27[0xf] = -(pcVar2[0xf] == UNK_142f9fe5f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f2032;
          goto LAB_1406f2048;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f2032:
  pdb_14107ceb0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f2048:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0xf9adafc24065493b;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar28[0] = -(*pcVar1 == DAT_142e346a0);
      auVar28[1] = -(pcVar1[1] == DAT_142e346a0._1_1_);
      auVar28[2] = -(pcVar1[2] == DAT_142e346a0._2_1_);
      auVar28[3] = -(pcVar1[3] == DAT_142e346a0._3_1_);
      auVar28[4] = -(pcVar1[4] == DAT_142e346a0._4_1_);
      auVar28[5] = -(pcVar1[5] == DAT_142e346a0._5_1_);
      auVar28[6] = -(pcVar1[6] == DAT_142e346a0._6_1_);
      auVar28[7] = -(pcVar1[7] == DAT_142e346a0._7_1_);
      auVar28[8] = -(pcVar1[8] == DAT_142e346a0._8_1_);
      auVar28[9] = -(pcVar1[9] == DAT_142e346a0._9_1_);
      auVar28[10] = -(pcVar1[10] == DAT_142e346a0._10_1_);
      auVar28[0xb] = -(pcVar1[0xb] == DAT_142e346a0._11_1_);
      auVar28[0xc] = -(pcVar1[0xc] == DAT_142e346a0._12_1_);
      auVar28[0xd] = -(pcVar1[0xd] == DAT_142e346a0._13_1_);
      auVar28[0xe] = -(pcVar1[0xe] == DAT_142e346a0._14_1_);
      auVar28[0xf] = -(pcVar1[0xf] == DAT_142e346a0._15_1_);
      uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar29[0] = -(*pcVar2 == DAT_142e346b0);
        auVar29[1] = -(pcVar2[1] == UNK_142e346b1);
        auVar29[2] = -(pcVar2[2] == UNK_142e346b2);
        auVar29[3] = -(pcVar2[3] == UNK_142e346b3);
        auVar29[4] = -(pcVar2[4] == UNK_142e346b4);
        auVar29[5] = -(pcVar2[5] == UNK_142e346b5);
        auVar29[6] = -(pcVar2[6] == UNK_142e346b6);
        auVar29[7] = -(pcVar2[7] == UNK_142e346b7);
        auVar29[8] = -(pcVar2[8] == UNK_142e346b8);
        auVar29[9] = -(pcVar2[9] == UNK_142e346b9);
        auVar29[10] = -(pcVar2[10] == UNK_142e346ba);
        auVar29[0xb] = -(pcVar2[0xb] == UNK_142e346bb);
        auVar29[0xc] = -(pcVar2[0xc] == UNK_142e346bc);
        auVar29[0xd] = -(pcVar2[0xd] == UNK_142e346bd);
        auVar29[0xe] = -(pcVar2[0xe] == UNK_142e346be);
        auVar29[0xf] = -(pcVar2[0xf] == UNK_142e346bf);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f2122;
          goto LAB_1406f2138;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f2122:
  pdb_14107e6b0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f2138:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0xc3d6c9bd6530528d;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar30[0] = -(*pcVar1 == DAT_142e34040);
      auVar30[1] = -(pcVar1[1] == DAT_142e34040._1_1_);
      auVar30[2] = -(pcVar1[2] == DAT_142e34040._2_1_);
      auVar30[3] = -(pcVar1[3] == DAT_142e34040._3_1_);
      auVar30[4] = -(pcVar1[4] == DAT_142e34040._4_1_);
      auVar30[5] = -(pcVar1[5] == DAT_142e34040._5_1_);
      auVar30[6] = -(pcVar1[6] == DAT_142e34040._6_1_);
      auVar30[7] = -(pcVar1[7] == DAT_142e34040._7_1_);
      auVar30[8] = -(pcVar1[8] == DAT_142e34040._8_1_);
      auVar30[9] = -(pcVar1[9] == DAT_142e34040._9_1_);
      auVar30[10] = -(pcVar1[10] == DAT_142e34040._10_1_);
      auVar30[0xb] = -(pcVar1[0xb] == DAT_142e34040._11_1_);
      auVar30[0xc] = -(pcVar1[0xc] == DAT_142e34040._12_1_);
      auVar30[0xd] = -(pcVar1[0xd] == DAT_142e34040._13_1_);
      auVar30[0xe] = -(pcVar1[0xe] == DAT_142e34040._14_1_);
      auVar30[0xf] = -(pcVar1[0xf] == DAT_142e34040._15_1_);
      uVar14 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar31[0] = -(*pcVar2 == DAT_142f9fe60);
        auVar31[1] = -(pcVar2[1] == UNK_142f9fe61);
        auVar31[2] = -(pcVar2[2] == UNK_142f9fe62);
        auVar31[3] = -(pcVar2[3] == UNK_142f9fe63);
        auVar31[4] = -(pcVar2[4] == UNK_142f9fe64);
        auVar31[5] = -(pcVar2[5] == UNK_142f9fe65);
        auVar31[6] = -(pcVar2[6] == UNK_142f9fe66);
        auVar31[7] = -(pcVar2[7] == UNK_142f9fe67);
        auVar31[8] = -(pcVar2[8] == UNK_142f9fe68);
        auVar31[9] = -(pcVar2[9] == UNK_142f9fe69);
        auVar31[10] = -(pcVar2[10] == UNK_142f9fe6a);
        auVar31[0xb] = -(pcVar2[0xb] == UNK_142f9fe6b);
        auVar31[0xc] = -(pcVar2[0xc] == UNK_142f9fe6c);
        auVar31[0xd] = -(pcVar2[0xd] == UNK_142f9fe6d);
        auVar31[0xe] = -(pcVar2[0xe] == UNK_142f9fe6e);
        auVar31[0xf] = -(pcVar2[0xf] == UNK_142f9fe6f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f2212;
          goto LAB_1406f2228;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f2212:
  pdb_14107f8b0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f2228:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0xe4e76d6a772fbd42;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar32[0] = -(*pcVar1 == DAT_142e33d50);
      auVar32[1] = -(pcVar1[1] == DAT_142e33d50._1_1_);
      auVar32[2] = -(pcVar1[2] == DAT_142e33d50._2_1_);
      auVar32[3] = -(pcVar1[3] == DAT_142e33d50._3_1_);
      auVar32[4] = -(pcVar1[4] == DAT_142e33d50._4_1_);
      auVar32[5] = -(pcVar1[5] == DAT_142e33d50._5_1_);
      auVar32[6] = -(pcVar1[6] == DAT_142e33d50._6_1_);
      auVar32[7] = -(pcVar1[7] == DAT_142e33d50._7_1_);
      auVar32[8] = -(pcVar1[8] == DAT_142e33d50._8_1_);
      auVar32[9] = -(pcVar1[9] == DAT_142e33d50._9_1_);
      auVar32[10] = -(pcVar1[10] == DAT_142e33d50._10_1_);
      auVar32[0xb] = -(pcVar1[0xb] == DAT_142e33d50._11_1_);
      auVar32[0xc] = -(pcVar1[0xc] == DAT_142e33d50._12_1_);
      auVar32[0xd] = -(pcVar1[0xd] == DAT_142e33d50._13_1_);
      auVar32[0xe] = -(pcVar1[0xe] == DAT_142e33d50._14_1_);
      auVar32[0xf] = -(pcVar1[0xf] == DAT_142e33d50._15_1_);
      uVar14 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar33[0] = -(*pcVar2 == DAT_142f9fe70);
        auVar33[1] = -(pcVar2[1] == UNK_142f9fe71);
        auVar33[2] = -(pcVar2[2] == UNK_142f9fe72);
        auVar33[3] = -(pcVar2[3] == UNK_142f9fe73);
        auVar33[4] = -(pcVar2[4] == UNK_142f9fe74);
        auVar33[5] = -(pcVar2[5] == UNK_142f9fe75);
        auVar33[6] = -(pcVar2[6] == UNK_142f9fe76);
        auVar33[7] = -(pcVar2[7] == UNK_142f9fe77);
        auVar33[8] = -(pcVar2[8] == UNK_142f9fe78);
        auVar33[9] = -(pcVar2[9] == UNK_142f9fe79);
        auVar33[10] = -(pcVar2[10] == UNK_142f9fe7a);
        auVar33[0xb] = -(pcVar2[0xb] == UNK_142f9fe7b);
        auVar33[0xc] = -(pcVar2[0xc] == UNK_142f9fe7c);
        auVar33[0xd] = -(pcVar2[0xd] == UNK_142f9fe7d);
        auVar33[0xe] = -(pcVar2[0xe] == UNK_142f9fe7e);
        auVar33[0xf] = -(pcVar2[0xf] == UNK_142f9fe7f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f2302;
          goto LAB_1406f2318;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f2302:
  pdb_14107e0b0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f2318:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0x260a1bb54891ec5e;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar34[0] = -(*pcVar1 == DAT_142e33f90);
      auVar34[1] = -(pcVar1[1] == DAT_142e33f90._1_1_);
      auVar34[2] = -(pcVar1[2] == DAT_142e33f90._2_1_);
      auVar34[3] = -(pcVar1[3] == DAT_142e33f90._3_1_);
      auVar34[4] = -(pcVar1[4] == DAT_142e33f90._4_1_);
      auVar34[5] = -(pcVar1[5] == DAT_142e33f90._5_1_);
      auVar34[6] = -(pcVar1[6] == DAT_142e33f90._6_1_);
      auVar34[7] = -(pcVar1[7] == DAT_142e33f90._7_1_);
      auVar34[8] = -(pcVar1[8] == DAT_142e33f90._8_1_);
      auVar34[9] = -(pcVar1[9] == DAT_142e33f90._9_1_);
      auVar34[10] = -(pcVar1[10] == DAT_142e33f90._10_1_);
      auVar34[0xb] = -(pcVar1[0xb] == DAT_142e33f90._11_1_);
      auVar34[0xc] = -(pcVar1[0xc] == DAT_142e33f90._12_1_);
      auVar34[0xd] = -(pcVar1[0xd] == DAT_142e33f90._13_1_);
      auVar34[0xe] = -(pcVar1[0xe] == DAT_142e33f90._14_1_);
      auVar34[0xf] = -(pcVar1[0xf] == DAT_142e33f90._15_1_);
      uVar14 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar35[0] = -(*pcVar2 == DAT_142f9fe80);
        auVar35[1] = -(pcVar2[1] == UNK_142f9fe81);
        auVar35[2] = -(pcVar2[2] == UNK_142f9fe82);
        auVar35[3] = -(pcVar2[3] == UNK_142f9fe83);
        auVar35[4] = -(pcVar2[4] == UNK_142f9fe84);
        auVar35[5] = -(pcVar2[5] == UNK_142f9fe85);
        auVar35[6] = -(pcVar2[6] == UNK_142f9fe86);
        auVar35[7] = -(pcVar2[7] == UNK_142f9fe87);
        auVar35[8] = -(pcVar2[8] == UNK_142f9fe88);
        auVar35[9] = -(pcVar2[9] == UNK_142f9fe89);
        auVar35[10] = -(pcVar2[10] == UNK_142f9fe8a);
        auVar35[0xb] = -(pcVar2[0xb] == UNK_142f9fe8b);
        auVar35[0xc] = -(pcVar2[0xc] == UNK_142f9fe8c);
        auVar35[0xd] = -(pcVar2[0xd] == UNK_142f9fe8d);
        auVar35[0xe] = -(pcVar2[0xe] == UNK_142f9fe8e);
        auVar35[0xf] = -(pcVar2[0xf] == UNK_142f9fe8f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f23f2;
          goto LAB_1406f2408;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f23f2:
  pdb_14107f2b0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f2408:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0x6d761803fd48f31f;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar36[0] = -(*pcVar1 == DAT_142e34500);
      auVar36[1] = -(pcVar1[1] == DAT_142e34500._1_1_);
      auVar36[2] = -(pcVar1[2] == DAT_142e34500._2_1_);
      auVar36[3] = -(pcVar1[3] == DAT_142e34500._3_1_);
      auVar36[4] = -(pcVar1[4] == DAT_142e34500._4_1_);
      auVar36[5] = -(pcVar1[5] == DAT_142e34500._5_1_);
      auVar36[6] = -(pcVar1[6] == DAT_142e34500._6_1_);
      auVar36[7] = -(pcVar1[7] == DAT_142e34500._7_1_);
      auVar36[8] = -(pcVar1[8] == DAT_142e34500._8_1_);
      auVar36[9] = -(pcVar1[9] == DAT_142e34500._9_1_);
      auVar36[10] = -(pcVar1[10] == DAT_142e34500._10_1_);
      auVar36[0xb] = -(pcVar1[0xb] == DAT_142e34500._11_1_);
      auVar36[0xc] = -(pcVar1[0xc] == DAT_142e34500._12_1_);
      auVar36[0xd] = -(pcVar1[0xd] == DAT_142e34500._13_1_);
      auVar36[0xe] = -(pcVar1[0xe] == DAT_142e34500._14_1_);
      auVar36[0xf] = -(pcVar1[0xf] == DAT_142e34500._15_1_);
      uVar14 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142f9fe90);
        auVar37[1] = -(pcVar2[1] == UNK_142f9fe91);
        auVar37[2] = -(pcVar2[2] == UNK_142f9fe92);
        auVar37[3] = -(pcVar2[3] == UNK_142f9fe93);
        auVar37[4] = -(pcVar2[4] == UNK_142f9fe94);
        auVar37[5] = -(pcVar2[5] == UNK_142f9fe95);
        auVar37[6] = -(pcVar2[6] == UNK_142f9fe96);
        auVar37[7] = -(pcVar2[7] == UNK_142f9fe97);
        auVar37[8] = -(pcVar2[8] == UNK_142f9fe98);
        auVar37[9] = -(pcVar2[9] == UNK_142f9fe99);
        auVar37[10] = -(pcVar2[10] == UNK_142f9fe9a);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142f9fe9b);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142f9fe9c);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142f9fe9d);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142f9fe9e);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142f9fe9f);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f24e2;
          goto LAB_1406f24f8;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f24e2:
  pdb_14107ecb0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_1406f24f8:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar11 = 0xd8afd82327e21ed2;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar11);
      auVar38[0] = -(*pcVar1 == DAT_142e34590);
      auVar38[1] = -(pcVar1[1] == DAT_142e34590._1_1_);
      auVar38[2] = -(pcVar1[2] == DAT_142e34590._2_1_);
      auVar38[3] = -(pcVar1[3] == DAT_142e34590._3_1_);
      auVar38[4] = -(pcVar1[4] == DAT_142e34590._4_1_);
      auVar38[5] = -(pcVar1[5] == DAT_142e34590._5_1_);
      auVar38[6] = -(pcVar1[6] == DAT_142e34590._6_1_);
      auVar38[7] = -(pcVar1[7] == DAT_142e34590._7_1_);
      auVar38[8] = -(pcVar1[8] == DAT_142e34590._8_1_);
      auVar38[9] = -(pcVar1[9] == DAT_142e34590._9_1_);
      auVar38[10] = -(pcVar1[10] == DAT_142e34590._10_1_);
      auVar38[0xb] = -(pcVar1[0xb] == DAT_142e34590._11_1_);
      auVar38[0xc] = -(pcVar1[0xc] == DAT_142e34590._12_1_);
      auVar38[0xd] = -(pcVar1[0xd] == DAT_142e34590._13_1_);
      auVar38[0xe] = -(pcVar1[0xe] == DAT_142e34590._14_1_);
      auVar38[0xf] = -(pcVar1[0xf] == DAT_142e34590._15_1_);
      uVar14 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar15 = uVar4 + uVar11 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar15 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142e345a0);
        auVar39[1] = -(pcVar2[1] == UNK_142e345a1);
        auVar39[2] = -(pcVar2[2] == UNK_142e345a2);
        auVar39[3] = -(pcVar2[3] == UNK_142e345a3);
        auVar39[4] = -(pcVar2[4] == UNK_142e345a4);
        auVar39[5] = -(pcVar2[5] == UNK_142e345a5);
        auVar39[6] = -(pcVar2[6] == UNK_142e345a6);
        auVar39[7] = -(pcVar2[7] == UNK_142e345a7);
        auVar39[8] = -(pcVar2[8] == UNK_142e345a8);
        auVar39[9] = -(pcVar2[9] == UNK_142e345a9);
        auVar39[10] = -(pcVar2[10] == UNK_142e345aa);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142e345ab);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142e345ac);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142e345ad);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142e345ae);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142e345af);
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
          uVar11 = *(ulonglong *)(lVar3 + uVar15 * -0x18 + -8);
          if (((uVar11 < *(ulonglong *)(lVar8 + 0x210)) &&
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar11 * 8), uVar11 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar11 * 0x40) != 0)) {
            return;
          }
          goto LAB_1406f25d2;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1406f25d2:
  pdb_14107d4b0(lVar8);
  return;
}

