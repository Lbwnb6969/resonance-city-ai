// VA 0x140375aa0, PDB extent 333 bytes
// tiny_glade::gui::settings::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 333 */

void pdb_140375aa0(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  uStack_d0 = 0x8000000000000000;
  uVar6 = pdb_140270b10(param_2,&uStack_d0);
  uStack_d0 = 0;
  uStack_c8 = 8;
  uStack_c0 = 0;
  lVar7 = pdb_140282ac0(uVar6,&uStack_d0);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar8 = 0x18279b1cbbfa7aa5;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar14[0] = -(*pcVar1 == DAT_142e34620);
      auVar14[1] = -(pcVar1[1] == DAT_142e34620._1_1_);
      auVar14[2] = -(pcVar1[2] == DAT_142e34620._2_1_);
      auVar14[3] = -(pcVar1[3] == DAT_142e34620._3_1_);
      auVar14[4] = -(pcVar1[4] == DAT_142e34620._4_1_);
      auVar14[5] = -(pcVar1[5] == DAT_142e34620._5_1_);
      auVar14[6] = -(pcVar1[6] == DAT_142e34620._6_1_);
      auVar14[7] = -(pcVar1[7] == DAT_142e34620._7_1_);
      auVar14[8] = -(pcVar1[8] == DAT_142e34620._8_1_);
      auVar14[9] = -(pcVar1[9] == DAT_142e34620._9_1_);
      auVar14[10] = -(pcVar1[10] == DAT_142e34620._10_1_);
      auVar14[0xb] = -(pcVar1[0xb] == DAT_142e34620._11_1_);
      auVar14[0xc] = -(pcVar1[0xc] == DAT_142e34620._12_1_);
      auVar14[0xd] = -(pcVar1[0xd] == DAT_142e34620._13_1_);
      auVar14[0xe] = -(pcVar1[0xe] == DAT_142e34620._14_1_);
      auVar14[0xf] = -(pcVar1[0xf] == DAT_142e34620._15_1_);
      uVar11 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar12 * -0x18);
        auVar15[0] = -(*pcVar2 == DAT_142e63ad0);
        auVar15[1] = -(pcVar2[1] == UNK_142e63ad1);
        auVar15[2] = -(pcVar2[2] == UNK_142e63ad2);
        auVar15[3] = -(pcVar2[3] == UNK_142e63ad3);
        auVar15[4] = -(pcVar2[4] == UNK_142e63ad4);
        auVar15[5] = -(pcVar2[5] == UNK_142e63ad5);
        auVar15[6] = -(pcVar2[6] == UNK_142e63ad6);
        auVar15[7] = -(pcVar2[7] == UNK_142e63ad7);
        auVar15[8] = -(pcVar2[8] == UNK_142e63ad8);
        auVar15[9] = -(pcVar2[9] == UNK_142e63ad9);
        auVar15[10] = -(pcVar2[10] == UNK_142e63ada);
        auVar15[0xb] = -(pcVar2[0xb] == UNK_142e63adb);
        auVar15[0xc] = -(pcVar2[0xc] == UNK_142e63adc);
        auVar15[0xd] = -(pcVar2[0xd] == UNK_142e63add);
        auVar15[0xe] = -(pcVar2[0xe] == UNK_142e63ade);
        auVar15[0xf] = -(pcVar2[0xf] == UNK_142e63adf);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar3 + uVar12 * -0x18 + -8);
          if (((uVar8 < *(ulonglong *)(lVar7 + 0x210)) &&
              (uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar8 * 8), uVar8 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar8 * 0x40) != 0)) {
            return;
          }
          goto LAB_140375bdb;
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
LAB_140375bdb:
  pdb_140251390(lVar7);
  return;
}

