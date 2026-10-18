// VA 0x140aac5e0, PDB extent 743 bytes
// country_core::startup::load_prefabs::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_prefabs::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 743 */

void pdb_140aac5e0(char *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar8 = 0x8527fa17cd7fd5bd;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar4 + uVar8);
      auVar16[0] = -(*pcVar1 == DAT_142e33ea0);
      auVar16[1] = -(pcVar1[1] == UNK_142e33ea1);
      auVar16[2] = -(pcVar1[2] == UNK_142e33ea2);
      auVar16[3] = -(pcVar1[3] == UNK_142e33ea3);
      auVar16[4] = -(pcVar1[4] == UNK_142e33ea4);
      auVar16[5] = -(pcVar1[5] == UNK_142e33ea5);
      auVar16[6] = -(pcVar1[6] == UNK_142e33ea6);
      auVar16[7] = -(pcVar1[7] == UNK_142e33ea7);
      auVar16[8] = -(pcVar1[8] == UNK_142e33ea8);
      auVar16[9] = -(pcVar1[9] == UNK_142e33ea9);
      auVar16[10] = -(pcVar1[10] == UNK_142e33eaa);
      auVar16[0xb] = -(pcVar1[0xb] == UNK_142e33eab);
      auVar16[0xc] = -(pcVar1[0xc] == UNK_142e33eac);
      auVar16[0xd] = -(pcVar1[0xd] == UNK_142e33ead);
      auVar16[0xe] = -(pcVar1[0xe] == UNK_142e33eae);
      auVar16[0xf] = -(pcVar1[0xf] == UNK_142e33eaf);
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar8 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar4 + -0x18 + uVar13 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_143049350);
        auVar17[1] = -(pcVar2[1] == UNK_143049351);
        auVar17[2] = -(pcVar2[2] == UNK_143049352);
        auVar17[3] = -(pcVar2[3] == UNK_143049353);
        auVar17[4] = -(pcVar2[4] == UNK_143049354);
        auVar17[5] = -(pcVar2[5] == UNK_143049355);
        auVar17[6] = -(pcVar2[6] == UNK_143049356);
        auVar17[7] = -(pcVar2[7] == UNK_143049357);
        auVar17[8] = -(pcVar2[8] == UNK_143049358);
        auVar17[9] = -(pcVar2[9] == UNK_143049359);
        auVar17[10] = -(pcVar2[10] == UNK_14304935a);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_14304935b);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_14304935c);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_14304935d);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_14304935e);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_14304935f);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar4 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_140aac6e2;
          goto LAB_140aac6f8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140aac6e2:
  pdb_1418ce200(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140aac6f8:
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar8 = 0x14653404ae734efd;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar4 + uVar8);
      auVar18[0] = -(*pcVar1 == DAT_142e33c70);
      auVar18[1] = -(pcVar1[1] == DAT_142e33c70._1_1_);
      auVar18[2] = -(pcVar1[2] == DAT_142e33c70._2_1_);
      auVar18[3] = -(pcVar1[3] == DAT_142e33c70._3_1_);
      auVar18[4] = -(pcVar1[4] == DAT_142e33c70._4_1_);
      auVar18[5] = -(pcVar1[5] == DAT_142e33c70._5_1_);
      auVar18[6] = -(pcVar1[6] == DAT_142e33c70._6_1_);
      auVar18[7] = -(pcVar1[7] == DAT_142e33c70._7_1_);
      auVar18[8] = -(pcVar1[8] == DAT_142e33c70._8_1_);
      auVar18[9] = -(pcVar1[9] == DAT_142e33c70._9_1_);
      auVar18[10] = -(pcVar1[10] == DAT_142e33c70._10_1_);
      auVar18[0xb] = -(pcVar1[0xb] == DAT_142e33c70._11_1_);
      auVar18[0xc] = -(pcVar1[0xc] == DAT_142e33c70._12_1_);
      auVar18[0xd] = -(pcVar1[0xd] == DAT_142e33c70._13_1_);
      auVar18[0xe] = -(pcVar1[0xe] == DAT_142e33c70._14_1_);
      auVar18[0xf] = -(pcVar1[0xf] == DAT_142e33c70._15_1_);
      uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar8 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar4 + -0x18 + uVar13 * -0x18);
        auVar19[0] = -(*pcVar2 == DAT_143049360);
        auVar19[1] = -(pcVar2[1] == UNK_143049361);
        auVar19[2] = -(pcVar2[2] == UNK_143049362);
        auVar19[3] = -(pcVar2[3] == UNK_143049363);
        auVar19[4] = -(pcVar2[4] == UNK_143049364);
        auVar19[5] = -(pcVar2[5] == UNK_143049365);
        auVar19[6] = -(pcVar2[6] == UNK_143049366);
        auVar19[7] = -(pcVar2[7] == UNK_143049367);
        auVar19[8] = -(pcVar2[8] == UNK_143049368);
        auVar19[9] = -(pcVar2[9] == UNK_143049369);
        auVar19[10] = -(pcVar2[10] == UNK_14304936a);
        auVar19[0xb] = -(pcVar2[0xb] == UNK_14304936b);
        auVar19[0xc] = -(pcVar2[0xc] == UNK_14304936c);
        auVar19[0xd] = -(pcVar2[0xd] == UNK_14304936d);
        auVar19[0xe] = -(pcVar2[0xe] == UNK_14304936e);
        auVar19[0xf] = -(pcVar2[0xf] == UNK_14304936f);
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar4 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_140aac7d2;
          goto LAB_140aac7da;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140aac7d2:
  pdb_1418d2a00(param_2);
LAB_140aac7da:
  cVar3 = *param_1;
  pdb_140c58350(&uStack_a0,cVar3);
  pdb_141917350(param_2,&uStack_a0);
  if (cVar3 != '\0') {
    pdb_14182bba0(&uStack_a0);
    uStack_29 = 0;
    puVar9 = &uStack_29;
    uVar7 = pdb_140950ee0(_DAT_143ca8dd0,puVar9,&UNK_14305af38);
    pdb_140676be0(&uStack_a0,uVar7,puVar9);
    uStack_b8 = uStack_40;
    uStack_b0 = uStack_38;
    uStack_c8 = uStack_50;
    uStack_c0 = uStack_48;
    uStack_d8 = uStack_60;
    uStack_d0 = uStack_58;
    uStack_e8 = uStack_70;
    uStack_e0 = uStack_68;
    uStack_f8 = uStack_80;
    uStack_f0 = uStack_78;
    uStack_108 = uStack_90;
    uStack_100 = uStack_88;
    uStack_118 = uStack_a0;
    uStack_110 = uStack_98;
    pdb_140c95fe0(param_2,&uStack_118);
  }
  return;
}

