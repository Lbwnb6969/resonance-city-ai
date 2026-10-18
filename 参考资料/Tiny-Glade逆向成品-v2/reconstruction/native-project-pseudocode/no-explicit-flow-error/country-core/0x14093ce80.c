// VA 0x14093ce80, PDB extent 949 bytes
// country_core::systems::ui::impl$0::add_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::impl$0::add_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/mod.rs
   Extent: 949 */

void pdb_14093ce80(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  ulonglong *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  pdb_1409e30b0(&uStack_208);
  uStack_21 = 6;
  uVar6 = pdb_140950ee0(_DAT_143ca8dd0,&uStack_21,&UNK_14305af38);
  pdb_140676be0(&uStack_208,uVar6);
  uStack_38 = uStack_1a8;
  uStack_30 = uStack_1a0;
  uStack_48 = uStack_1b8;
  uStack_40 = uStack_1b0;
  uStack_58 = uStack_1c8;
  uStack_50 = uStack_1c0;
  uStack_60 = uStack_1d0;
  uStack_78 = lStack_1e8;
  uStack_70 = puStack_1e0;
  uStack_88 = uStack_1f8;
  uStack_80 = uStack_1f0;
  uStack_98 = uStack_208;
  uStack_90 = uStack_200;
  pdb_140c95fe0(param_1,&uStack_98);
  pdb_140900dc0(&uStack_208);
  uVar6 = pdb_141902940(param_1,&uStack_208);
  uStack_208 = 0;
  uStack_1f8 = 0;
  puStack_1e0 = (ulonglong *)CONCAT44(puStack_1e0._4_4_,1000000000);
  uStack_1d8 = 0;
  uVar6 = pdb_141903990(uVar6,&uStack_208);
  uVar6 = pdb_1418f6b50(uVar6,0);
  uStack_208 = uStack_208 & 0xffffffff00000000;
  lVar7 = pdb_14190f780(uVar6,&uStack_208);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0xac9e548528c98e2a;
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar17[0] = -(*pcVar1 == DAT_142e33f50);
      auVar17[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
      auVar17[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
      auVar17[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
      auVar17[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
      auVar17[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
      auVar17[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
      auVar17[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
      auVar17[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
      auVar17[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
      auVar17[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
      auVar17[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
      auVar17[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
      auVar17[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
      auVar17[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
      auVar17[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
      uVar13 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142e34d10);
        auVar18[1] = -(pcVar2[1] == UNK_142e34d11);
        auVar18[2] = -(pcVar2[2] == UNK_142e34d12);
        auVar18[3] = -(pcVar2[3] == UNK_142e34d13);
        auVar18[4] = -(pcVar2[4] == UNK_142e34d14);
        auVar18[5] = -(pcVar2[5] == UNK_142e34d15);
        auVar18[6] = -(pcVar2[6] == UNK_142e34d16);
        auVar18[7] = -(pcVar2[7] == UNK_142e34d17);
        auVar18[8] = -(pcVar2[8] == UNK_142e34d18);
        auVar18[9] = -(pcVar2[9] == UNK_142e34d19);
        auVar18[10] = -(pcVar2[10] == UNK_142e34d1a);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142e34d1b);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142e34d1c);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142e34d1d);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142e34d1e);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142e34d1f);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_14093d082;
          goto LAB_14093d098;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_14093d082:
  pdb_1418dd7f0(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_14093d098:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0x5e0a1f3a59c6ad18;
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar19[0] = -(*pcVar1 == DAT_142e34b40);
      auVar19[1] = -(pcVar1[1] == DAT_142e34b40._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e34b40._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e34b40._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e34b40._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e34b40._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e34b40._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e34b40._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e34b40._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e34b40._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e34b40._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e34b40._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e34b40._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e34b40._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e34b40._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e34b40._15_1_);
      uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_143022b60);
        auVar20[1] = -(pcVar2[1] == UNK_143022b61);
        auVar20[2] = -(pcVar2[2] == UNK_143022b62);
        auVar20[3] = -(pcVar2[3] == UNK_143022b63);
        auVar20[4] = -(pcVar2[4] == UNK_143022b64);
        auVar20[5] = -(pcVar2[5] == UNK_143022b65);
        auVar20[6] = -(pcVar2[6] == UNK_143022b66);
        auVar20[7] = -(pcVar2[7] == UNK_143022b67);
        auVar20[8] = -(pcVar2[8] == UNK_143022b68);
        auVar20[9] = -(pcVar2[9] == UNK_143022b69);
        auVar20[10] = -(pcVar2[10] == UNK_143022b6a);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_143022b6b);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_143022b6c);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_143022b6d);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_143022b6e);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_143022b6f);
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_14093d172;
          goto LAB_14093d17a;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_14093d172:
  pdb_1418e31f0(lVar7);
LAB_14093d17a:
  puVar10 = &uStack_208;
  pub_142e32780(puVar10,0,0x170);
  uVar6 = pdb_141910dc0(lVar7);
  plVar8 = (longlong *)pdb_140f3bda0();
  if ((char)plVar8[2] == '\x01') {
    lStack_1e8 = *plVar8;
    puVar10 = (ulonglong *)plVar8[1];
  }
  else {
    lStack_1e8 = pdb_140f4fd10();
    *plVar8 = lStack_1e8;
    plVar8[1] = (longlong)puVar10;
    *(undefined1 *)(plVar8 + 2) = 1;
  }
  *plVar8 = lStack_1e8 + 1;
  uStack_1f8 = _DAT_143023cb0;
  uStack_1f0 = _UNK_143023cb8;
  uStack_208 = _DAT_143023ca0;
  uStack_200 = _UNK_143023ca8;
  puStack_1e0 = puVar10;
  pdb_1418f5a70(uVar6,&uStack_208);
  return;
}

