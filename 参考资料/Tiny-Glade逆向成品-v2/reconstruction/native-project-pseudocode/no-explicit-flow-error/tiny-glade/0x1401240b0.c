// VA 0x1401240b0, PDB extent 24 bytes
// tiny_glade::tgsr_capture::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 24 */

longlong pdb_1401240b0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 uStack_19;
  undefined1 *puStack_18;
  code *pcStack_10;
  
  lVar5 = pdb_14026e0b0(param_2);
  if (*(longlong *)(lVar5 + 0x88) != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x70);
    uVar7 = 0x51f059ef4072646d;
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar5 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar7);
      auVar13[0] = -(auVar2[0] == DAT_142e347b0);
      auVar13[1] = -(auVar2[1] == DAT_142e347b0._1_1_);
      auVar13[2] = -(auVar2[2] == DAT_142e347b0._2_1_);
      auVar13[3] = -(auVar2[3] == DAT_142e347b0._3_1_);
      auVar13[4] = -(auVar2[4] == DAT_142e347b0._4_1_);
      auVar13[5] = -(auVar2[5] == DAT_142e347b0._5_1_);
      auVar13[6] = -(auVar2[6] == DAT_142e347b0._6_1_);
      auVar13[7] = -(auVar2[7] == DAT_142e347b0._7_1_);
      auVar13[8] = -(auVar2[8] == DAT_142e347b0._8_1_);
      auVar13[9] = -(auVar2[9] == DAT_142e347b0._9_1_);
      auVar13[10] = -(auVar2[10] == DAT_142e347b0._10_1_);
      auVar13[0xb] = -(auVar2[0xb] == DAT_142e347b0._11_1_);
      auVar13[0xc] = -(auVar2[0xc] == DAT_142e347b0._12_1_);
      auVar13[0xd] = -(auVar2[0xd] == DAT_142e347b0._13_1_);
      auVar13[0xe] = -(auVar2[0xe] == DAT_142e347b0._14_1_);
      auVar13[0xf] = -(auVar2[0xf] == DAT_142e347b0._15_1_);
      uVar10 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar11 = uVar3 + uVar7 & *(ulonglong *)(lVar5 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar11 * -0x18);
        auVar14[0] = -(*pcVar1 == UNK_142f62700);
        auVar14[1] = -(pcVar1[1] == UNK_142f62700._1_1_);
        auVar14[2] = -(pcVar1[2] == UNK_142f62700._2_1_);
        auVar14[3] = -(pcVar1[3] == UNK_142f62700._3_1_);
        auVar14[4] = -(pcVar1[4] == UNK_142f62700._4_1_);
        auVar14[5] = -(pcVar1[5] == UNK_142f62700._5_1_);
        auVar14[6] = -(pcVar1[6] == UNK_142f62700._6_1_);
        auVar14[7] = -(pcVar1[7] == UNK_142f62700._7_1_);
        auVar14[8] = -(pcVar1[8] == UNK_142f62700._8_1_);
        auVar14[9] = -(pcVar1[9] == UNK_142f62700._9_1_);
        auVar14[10] = -(pcVar1[10] == UNK_142f62700._10_1_);
        auVar14[0xb] = -(pcVar1[0xb] == UNK_142f62700._11_1_);
        auVar14[0xc] = -(pcVar1[0xc] == UNK_142f62700._12_1_);
        auVar14[0xd] = -(pcVar1[0xd] == UNK_142f62700._13_1_);
        auVar14[0xe] = -(pcVar1[0xe] == UNK_142f62700._14_1_);
        auVar14[0xf] = -(pcVar1[0xf] == UNK_142f62700._15_1_);
        if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
          uVar7 = *(ulonglong *)(lVar6 + uVar11 * -0x18 + -8);
          if ((uVar7 < *(ulonglong *)(lVar5 + 0x210)) &&
             (uVar7 = *(ulonglong *)(*(longlong *)(lVar5 + 0x208) + uVar7 * 8), uVar7 != 0)) {
            lVar6 = ~uVar7 * 0x40;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x1d8) + 0x20 + lVar6) != 0) {
              lVar6 = *(longlong *)(lVar5 + 0x1d8) + lVar6;
              *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(lVar5 + 0x5a8);
              pdb_14011e2d0(*(undefined8 *)(lVar6 + 0x10));
              return lVar5;
            }
          }
          goto code_r0x0001405e7978;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar12[0] = -(auVar2[0] == -1);
      auVar12[1] = -(auVar2[1] == -1);
      auVar12[2] = -(auVar2[2] == -1);
      auVar12[3] = -(auVar2[3] == -1);
      auVar12[4] = -(auVar2[4] == -1);
      auVar12[5] = -(auVar2[5] == -1);
      auVar12[6] = -(auVar2[6] == -1);
      auVar12[7] = -(auVar2[7] == -1);
      auVar12[8] = -(auVar2[8] == -1);
      auVar12[9] = -(auVar2[9] == -1);
      auVar12[10] = -(auVar2[10] == -1);
      auVar12[0xb] = -(auVar2[0xb] == -1);
      auVar12[0xc] = -(auVar2[0xc] == -1);
      auVar12[0xd] = -(auVar2[0xd] == -1);
      auVar12[0xe] = -(auVar2[0xe] == -1);
      auVar12[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
code_r0x0001405e7978:
  puStack_18 = &uStack_19;
  pcStack_10 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f73590,&puStack_18,&UNK_142f73538);
}

