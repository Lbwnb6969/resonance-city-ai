// VA 0x140b10030, PDB extent 961 bytes
// country_core::startup::startup_ivy::startup_ivy::draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_ivy.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_ivy::startup_ivy::draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_ivy.rs
   Extent: 961 */

void pdb_140b10030(char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lStack_40;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar8 = *(ulonglong *)(param_2 + 0x78);
    uVar12 = 0x7186af3ec5fed094;
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar8;
      pcVar1 = (char *)(lVar7 + uVar12);
      auVar21[0] = -(*pcVar1 == DAT_142e33d90);
      auVar21[1] = -(pcVar1[1] == UNK_142e33d91);
      auVar21[2] = -(pcVar1[2] == UNK_142e33d92);
      auVar21[3] = -(pcVar1[3] == UNK_142e33d93);
      auVar21[4] = -(pcVar1[4] == UNK_142e33d94);
      auVar21[5] = -(pcVar1[5] == UNK_142e33d95);
      auVar21[6] = -(pcVar1[6] == UNK_142e33d96);
      auVar21[7] = -(pcVar1[7] == UNK_142e33d97);
      auVar21[8] = -(pcVar1[8] == UNK_142e33d98);
      auVar21[9] = -(pcVar1[9] == UNK_142e33d99);
      auVar21[10] = -(pcVar1[10] == UNK_142e33d9a);
      auVar21[0xb] = -(pcVar1[0xb] == UNK_142e33d9b);
      auVar21[0xc] = -(pcVar1[0xc] == UNK_142e33d9c);
      auVar21[0xd] = -(pcVar1[0xd] == UNK_142e33d9d);
      auVar21[0xe] = -(pcVar1[0xe] == UNK_142e33d9e);
      auVar21[0xf] = -(pcVar1[0xf] == UNK_142e33d9f);
      uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar11 = uVar5 + uVar12 & uVar8;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_143031180);
        auVar26[1] = -(pcVar2[1] == UNK_143031181);
        auVar26[2] = -(pcVar2[2] == UNK_143031182);
        auVar26[3] = -(pcVar2[3] == UNK_143031183);
        auVar26[4] = -(pcVar2[4] == UNK_143031184);
        auVar26[5] = -(pcVar2[5] == UNK_143031185);
        auVar26[6] = -(pcVar2[6] == UNK_143031186);
        auVar26[7] = -(pcVar2[7] == UNK_143031187);
        auVar26[8] = -(pcVar2[8] == UNK_143031188);
        auVar26[9] = -(pcVar2[9] == UNK_143031189);
        auVar26[10] = -(pcVar2[10] == UNK_14303118a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_14303118b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_14303118c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_14303118d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_14303118e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_14303118f);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar12) goto LAB_140b10257;
          uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8);
          if (uVar12 == 0) goto LAB_140b10257;
          lVar14 = *(longlong *)(param_2 + 0x1d8);
          lVar15 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar14 + 0x20 + lVar15) == 0) goto LAB_140b10257;
          puVar3 = *(undefined8 **)(lVar15 + lVar14 + 0x10);
          pauVar16 = (undefined1 (*) [16])*puVar3;
          lVar15 = puVar3[3];
          auVar21 = *pauVar16;
          pauVar17 = pauVar16 + 1;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf);
          uVar12 = 0;
          goto LAB_140b1018c;
        }
        uVar10 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar10);
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
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140b10257:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143054ca8);
LAB_140b1018c:
  if ((short)uVar18 == 0) {
    if (lVar15 == 0) {
      if (uVar12 == 0) {
        return;
      }
      uVar11 = 0x59a9ebec036a11fe;
      lVar15 = 0;
      do {
        uVar11 = uVar11 & uVar8;
        auVar21 = *(undefined1 (*) [16])(lVar7 + uVar11);
        auVar27[0] = -(auVar21[0] == DAT_142e33bd0);
        auVar27[1] = -(auVar21[1] == DAT_142e33bd0._1_1_);
        auVar27[2] = -(auVar21[2] == DAT_142e33bd0._2_1_);
        auVar27[3] = -(auVar21[3] == DAT_142e33bd0._3_1_);
        auVar27[4] = -(auVar21[4] == DAT_142e33bd0._4_1_);
        auVar27[5] = -(auVar21[5] == DAT_142e33bd0._5_1_);
        auVar27[6] = -(auVar21[6] == DAT_142e33bd0._6_1_);
        auVar27[7] = -(auVar21[7] == DAT_142e33bd0._7_1_);
        auVar27[8] = -(auVar21[8] == DAT_142e33bd0._8_1_);
        auVar27[9] = -(auVar21[9] == DAT_142e33bd0._9_1_);
        auVar27[10] = -(auVar21[10] == DAT_142e33bd0._10_1_);
        auVar27[0xb] = -(auVar21[0xb] == DAT_142e33bd0._11_1_);
        auVar27[0xc] = -(auVar21[0xc] == DAT_142e33bd0._12_1_);
        auVar27[0xd] = -(auVar21[0xd] == DAT_142e33bd0._13_1_);
        auVar27[0xe] = -(auVar21[0xe] == DAT_142e33bd0._14_1_);
        auVar27[0xf] = -(auVar21[0xf] == DAT_142e33bd0._15_1_);
        uVar10 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar10;
        while (uVar10 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar19 = uVar5 + uVar11 & uVar8;
          pcVar1 = (char *)(lVar7 + -0x18 + uVar19 * -0x18);
          auVar28[0] = -(*pcVar1 == DAT_142e34980);
          auVar28[1] = -(pcVar1[1] == DAT_142e34980._1_1_);
          auVar28[2] = -(pcVar1[2] == DAT_142e34980._2_1_);
          auVar28[3] = -(pcVar1[3] == DAT_142e34980._3_1_);
          auVar28[4] = -(pcVar1[4] == DAT_142e34980._4_1_);
          auVar28[5] = -(pcVar1[5] == DAT_142e34980._5_1_);
          auVar28[6] = -(pcVar1[6] == DAT_142e34980._6_1_);
          auVar28[7] = -(pcVar1[7] == DAT_142e34980._7_1_);
          auVar28[8] = -(pcVar1[8] == DAT_142e34980._8_1_);
          auVar28[9] = -(pcVar1[9] == DAT_142e34980._9_1_);
          auVar28[10] = -(pcVar1[10] == DAT_142e34980._10_1_);
          auVar28[0xb] = -(pcVar1[0xb] == DAT_142e34980._11_1_);
          auVar28[0xc] = -(pcVar1[0xc] == DAT_142e34980._12_1_);
          auVar28[0xd] = -(pcVar1[0xd] == DAT_142e34980._13_1_);
          auVar28[0xe] = -(pcVar1[0xe] == DAT_142e34980._14_1_);
          auVar28[0xf] = -(pcVar1[0xf] == DAT_142e34980._15_1_);
          if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
            uVar8 = *(ulonglong *)(lVar7 + uVar19 * -0x18 + -8);
            if (((uVar8 < *(ulonglong *)(param_2 + 0x210)) &&
                (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 != 0)) &&
               (lVar7 = ~uVar8 * 0x40, *(longlong *)(lVar14 + 0x20 + lVar7) != 0)) {
              if (*param_1 != '\0') {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143054cf0,0xf,&UNK_143054d00);
              }
              plVar4 = *(longlong **)(lVar14 + lVar7 + 0x10);
              lVar7 = *(longlong *)(param_1 + 8);
              lStack_40 = lVar7;
              if (plVar4[3] != 0) {
                uVar8 = pdb_1400af0a0(plVar4 + 4,&lStack_40);
                lVar14 = *plVar4;
                bVar20 = (byte)(uVar8 >> 0x39);
                auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
                auVar21 = pshuflw(auVar21,auVar21,0);
                lVar15 = 0;
                while( true ) {
                  uVar8 = uVar8 & plVar4[1];
                  auVar26 = *(undefined1 (*) [16])(lVar14 + uVar8);
                  auVar25[0] = -(auVar26[0] == auVar21[0]);
                  auVar25[1] = -(auVar26[1] == auVar21[1]);
                  auVar25[2] = -(auVar26[2] == auVar21[2]);
                  auVar25[3] = -(auVar26[3] == auVar21[3]);
                  auVar25[4] = -(auVar26[4] == auVar21[4]);
                  auVar25[5] = -(auVar26[5] == auVar21[5]);
                  auVar25[6] = -(auVar26[6] == auVar21[6]);
                  auVar25[7] = -(auVar26[7] == auVar21[7]);
                  auVar25[8] = -(auVar26[8] == auVar21[0]);
                  auVar25[9] = -(auVar26[9] == auVar21[1]);
                  auVar25[10] = -(auVar26[10] == auVar21[2]);
                  auVar25[0xb] = -(auVar26[0xb] == auVar21[3]);
                  auVar25[0xc] = -(auVar26[0xc] == auVar21[4]);
                  auVar25[0xd] = -(auVar26[0xd] == auVar21[5]);
                  auVar25[0xe] = -(auVar26[0xe] == auVar21[6]);
                  auVar25[0xf] = -(auVar26[0xf] == auVar21[7]);
                  uVar10 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                  uVar18 = (uint)uVar10;
                  while (uVar10 != 0) {
                    uVar5 = 0;
                    for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                      uVar5 = uVar5 + 1;
                    }
                    lVar13 = (uVar5 + uVar8 & plVar4[1]) * -0x30;
                    if (lVar7 == *(longlong *)(lVar14 + -0x30 + lVar13)) {
                      lVar14 = lVar14 + lVar13;
                      lVar7 = pdb_141a076a0(param_5,lVar14 + -0x28);
                      uVar9 = pdb_140e17290(lVar14 + -0x10,lVar7);
                      *(byte *)(lVar7 + 0x28a) = *(byte *)(lVar7 + 0x28a) | 1;
                      *(undefined8 *)(lVar7 + 200) = uVar9;
                      if (*(char *)(lVar14 + -4) == '\0') {
                        pdb_140e25450(param_5);
                      }
                      else {
                        *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                        *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                        *(undefined1 *)(param_5 + 0x82) = 0;
                      }
                      pdb_140e25490(param_5,*(undefined4 *)(lVar14 + -8),0,uVar12 & 0xffffffff);
                      return;
                    }
                    uVar10 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar10);
                  }
                  auVar22[0] = -(auVar26[0] == -1);
                  auVar22[1] = -(auVar26[1] == -1);
                  auVar22[2] = -(auVar26[2] == -1);
                  auVar22[3] = -(auVar26[3] == -1);
                  auVar22[4] = -(auVar26[4] == -1);
                  auVar22[5] = -(auVar26[5] == -1);
                  auVar22[6] = -(auVar26[6] == -1);
                  auVar22[7] = -(auVar26[7] == -1);
                  auVar22[8] = -(auVar26[8] == -1);
                  auVar22[9] = -(auVar26[9] == -1);
                  auVar22[10] = -(auVar26[10] == -1);
                  auVar22[0xb] = -(auVar26[0xb] == -1);
                  auVar22[0xc] = -(auVar26[0xc] == -1);
                  auVar22[0xd] = -(auVar26[0xd] == -1);
                  auVar22[0xe] = -(auVar26[0xe] == -1);
                  auVar22[0xf] = -(auVar26[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0
                      ) || auVar22[0xf] < '\0') break;
                  uVar8 = uVar8 + lVar15 + 0x10;
                  lVar15 = lVar15 + 0x10;
                }
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143054cd8);
            }
            goto LAB_140b10396;
          }
          uVar10 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar10);
        }
        auVar24[0] = -(auVar21[0] == -1);
        auVar24[1] = -(auVar21[1] == -1);
        auVar24[2] = -(auVar21[2] == -1);
        auVar24[3] = -(auVar21[3] == -1);
        auVar24[4] = -(auVar21[4] == -1);
        auVar24[5] = -(auVar21[5] == -1);
        auVar24[6] = -(auVar21[6] == -1);
        auVar24[7] = -(auVar21[7] == -1);
        auVar24[8] = -(auVar21[8] == -1);
        auVar24[9] = -(auVar21[9] == -1);
        auVar24[10] = -(auVar21[10] == -1);
        auVar24[0xb] = -(auVar21[0xb] == -1);
        auVar24[0xc] = -(auVar21[0xc] == -1);
        auVar24[0xd] = -(auVar21[0xd] == -1);
        auVar24[0xe] = -(auVar21[0xe] == -1);
        auVar24[0xf] = -(auVar21[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_140b10396:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143054cc0);
        }
        uVar11 = uVar11 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      } while( true );
    }
    do {
      auVar21 = *pauVar17;
      pauVar16 = pauVar16 + -0x98;
      pauVar17 = pauVar17 + 1;
      uVar18 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar18 == 0);
  }
  uVar5 = 0;
  for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar5 = uVar5 + 1;
  }
  uVar18 = uVar18 - 1 & uVar18;
  lVar13 = *(longlong *)((longlong)pauVar16 + (ulonglong)uVar5 * -0x98 + -0x78);
  uVar12 = uVar12 + lVar13 + -1 + (ulonglong)(lVar13 == 0);
  lVar15 = lVar15 + -1;
  goto LAB_140b1018c;
}

