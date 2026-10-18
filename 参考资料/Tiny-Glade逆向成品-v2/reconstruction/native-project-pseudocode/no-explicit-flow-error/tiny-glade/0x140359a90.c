// VA 0x140359a90, PDB extent 629 bytes
// tiny_glade::game_loop::on_cursor_moved_absolute
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::game_loop::on_cursor_moved_absolute
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
   Extent: 629 */

void pdb_140359a90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 in_XMM1_Ba;
  char cVar18;
  undefined1 in_XMM1_Bb;
  char cVar19;
  undefined1 in_XMM1_Bc;
  char cVar20;
  undefined1 in_XMM1_Bd;
  char cVar21;
  undefined1 in_XMM1_Be;
  char cVar22;
  undefined1 in_XMM1_Bf;
  char cVar23;
  undefined1 in_XMM1_Bg;
  char cVar24;
  undefined1 in_XMM1_Bh;
  char cVar25;
  undefined1 in_XMM1_Bi;
  char cVar26;
  undefined1 in_XMM1_Bj;
  char cVar27;
  undefined1 in_XMM1_Bk;
  char cVar28;
  undefined1 in_XMM1_Bl;
  char cVar29;
  undefined1 in_XMM1_Bm;
  char cVar30;
  undefined1 in_XMM1_Bn;
  char cVar31;
  undefined1 in_XMM1_Bo;
  char cVar32;
  undefined1 in_XMM1_Bp;
  char cVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_30 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
  uStack_34 = 1;
  uStack_2c = param_3;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x70);
    uVar12 = *(ulonglong *)(param_1 + 0x78);
    uVar13 = 0x874bc9157f0cc484;
    lVar14 = 0;
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    cVar18 = (char)iVar7;
    cVar19 = (char)((uint)iVar7 >> 8);
    cVar20 = (char)((uint)iVar7 >> 0x10);
    cVar21 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    cVar22 = (char)iVar7;
    cVar23 = (char)((uint)iVar7 >> 8);
    cVar24 = (char)((uint)iVar7 >> 0x10);
    cVar25 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    cVar26 = (char)iVar7;
    cVar27 = (char)((uint)iVar7 >> 8);
    cVar28 = (char)((uint)iVar7 >> 0x10);
    cVar29 = (char)((uint)iVar7 >> 0x18);
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    cVar30 = (char)iVar7;
    cVar31 = (char)((uint)iVar7 >> 8);
    cVar32 = (char)((uint)iVar7 >> 0x10);
    cVar33 = (char)((uint)iVar7 >> 0x18);
    while( true ) {
      uVar13 = uVar13 & uVar12;
      auVar2 = *(undefined1 (*) [16])(lVar11 + uVar13);
      auVar36[0] = -(auVar2[0] == DAT_142e34d90);
      auVar36[1] = -(auVar2[1] == DAT_142e34d90._1_1_);
      auVar36[2] = -(auVar2[2] == DAT_142e34d90._2_1_);
      auVar36[3] = -(auVar2[3] == DAT_142e34d90._3_1_);
      auVar36[4] = -(auVar2[4] == DAT_142e34d90._4_1_);
      auVar36[5] = -(auVar2[5] == DAT_142e34d90._5_1_);
      auVar36[6] = -(auVar2[6] == DAT_142e34d90._6_1_);
      auVar36[7] = -(auVar2[7] == DAT_142e34d90._7_1_);
      auVar36[8] = -(auVar2[8] == DAT_142e34d90._8_1_);
      auVar36[9] = -(auVar2[9] == DAT_142e34d90._9_1_);
      auVar36[10] = -(auVar2[10] == DAT_142e34d90._10_1_);
      auVar36[0xb] = -(auVar2[0xb] == DAT_142e34d90._11_1_);
      auVar36[0xc] = -(auVar2[0xc] == DAT_142e34d90._12_1_);
      auVar36[0xd] = -(auVar2[0xd] == DAT_142e34d90._13_1_);
      auVar36[0xe] = -(auVar2[0xe] == DAT_142e34d90._14_1_);
      auVar36[0xf] = -(auVar2[0xf] == DAT_142e34d90._15_1_);
      uVar16 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar5 + uVar13 & uVar12;
        pcVar1 = (char *)(lVar11 + -0x18 + uVar17 * -0x18);
        auVar37[0] = -(*pcVar1 == DAT_142f424a0);
        auVar37[1] = -(pcVar1[1] == DAT_142f424a0._1_1_);
        auVar37[2] = -(pcVar1[2] == DAT_142f424a0._2_1_);
        auVar37[3] = -(pcVar1[3] == DAT_142f424a0._3_1_);
        auVar37[4] = -(pcVar1[4] == DAT_142f424a0._4_1_);
        auVar37[5] = -(pcVar1[5] == DAT_142f424a0._5_1_);
        auVar37[6] = -(pcVar1[6] == DAT_142f424a0._6_1_);
        auVar37[7] = -(pcVar1[7] == DAT_142f424a0._7_1_);
        auVar37[8] = -(pcVar1[8] == DAT_142f424a0._8_1_);
        auVar37[9] = -(pcVar1[9] == DAT_142f424a0._9_1_);
        auVar37[10] = -(pcVar1[10] == DAT_142f424a0._10_1_);
        auVar37[0xb] = -(pcVar1[0xb] == DAT_142f424a0._11_1_);
        auVar37[0xc] = -(pcVar1[0xc] == DAT_142f424a0._12_1_);
        auVar37[0xd] = -(pcVar1[0xd] == DAT_142f424a0._13_1_);
        auVar37[0xe] = -(pcVar1[0xe] == DAT_142f424a0._14_1_);
        auVar37[0xf] = -(pcVar1[0xf] == DAT_142f424a0._15_1_);
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
          uVar13 = *(ulonglong *)(lVar11 + uVar17 * -0x18 + -8);
          if ((uVar13 < *(ulonglong *)(param_1 + 0x210)) &&
             (uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar13 * 8), uVar13 != 0)) {
            lVar14 = ~uVar13 * 0x40;
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar14) != 0) {
              lVar14 = *(longlong *)(param_1 + 0x1d8) + lVar14;
              *(undefined4 *)(lVar14 + 0x3c) = *(undefined4 *)(param_1 + 0x5a8);
              pdb_140ac8770(*(undefined8 *)(lVar14 + 0x10),&uStack_34);
              lVar11 = *(longlong *)(param_1 + 0x70);
              uVar12 = *(ulonglong *)(param_1 + 0x78);
            }
          }
          goto LAB_140359bbe;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar34[0] = -(auVar2[0] == cVar18);
      auVar34[1] = -(auVar2[1] == cVar19);
      auVar34[2] = -(auVar2[2] == cVar20);
      auVar34[3] = -(auVar2[3] == cVar21);
      auVar34[4] = -(auVar2[4] == cVar22);
      auVar34[5] = -(auVar2[5] == cVar23);
      auVar34[6] = -(auVar2[6] == cVar24);
      auVar34[7] = -(auVar2[7] == cVar25);
      auVar34[8] = -(auVar2[8] == cVar26);
      auVar34[9] = -(auVar2[9] == cVar27);
      auVar34[10] = -(auVar2[10] == cVar28);
      auVar34[0xb] = -(auVar2[0xb] == cVar29);
      auVar34[0xc] = -(auVar2[0xc] == cVar30);
      auVar34[0xd] = -(auVar2[0xd] == cVar31);
      auVar34[0xe] = -(auVar2[0xe] == cVar32);
      auVar34[0xf] = -(auVar2[0xf] == cVar33);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
LAB_140359bbe:
    uVar13 = 0x2d844729cc9b4b16;
    lVar14 = 0;
    iVar7 = -(uint)(CONCAT13(cVar21,CONCAT12(cVar20,CONCAT11(cVar19,cVar18))) ==
                   CONCAT13(cVar21,CONCAT12(cVar20,CONCAT11(cVar19,cVar18))));
    iVar8 = -(uint)(CONCAT13(cVar25,CONCAT12(cVar24,CONCAT11(cVar23,cVar22))) ==
                   CONCAT13(cVar25,CONCAT12(cVar24,CONCAT11(cVar23,cVar22))));
    iVar9 = -(uint)(CONCAT13(cVar29,CONCAT12(cVar28,CONCAT11(cVar27,cVar26))) ==
                   CONCAT13(cVar29,CONCAT12(cVar28,CONCAT11(cVar27,cVar26))));
    iVar10 = -(uint)(CONCAT13(cVar33,CONCAT12(cVar32,CONCAT11(cVar31,cVar30))) ==
                    CONCAT13(cVar33,CONCAT12(cVar32,CONCAT11(cVar31,cVar30))));
    while( true ) {
      uVar13 = uVar13 & uVar12;
      auVar2 = *(undefined1 (*) [16])(lVar11 + uVar13);
      auVar38[0] = -(auVar2[0] == DAT_142e34c00);
      auVar38[1] = -(auVar2[1] == DAT_142e34c00._1_1_);
      auVar38[2] = -(auVar2[2] == DAT_142e34c00._2_1_);
      auVar38[3] = -(auVar2[3] == DAT_142e34c00._3_1_);
      auVar38[4] = -(auVar2[4] == DAT_142e34c00._4_1_);
      auVar38[5] = -(auVar2[5] == DAT_142e34c00._5_1_);
      auVar38[6] = -(auVar2[6] == DAT_142e34c00._6_1_);
      auVar38[7] = -(auVar2[7] == DAT_142e34c00._7_1_);
      auVar38[8] = -(auVar2[8] == DAT_142e34c00._8_1_);
      auVar38[9] = -(auVar2[9] == DAT_142e34c00._9_1_);
      auVar38[10] = -(auVar2[10] == DAT_142e34c00._10_1_);
      auVar38[0xb] = -(auVar2[0xb] == DAT_142e34c00._11_1_);
      auVar38[0xc] = -(auVar2[0xc] == DAT_142e34c00._12_1_);
      auVar38[0xd] = -(auVar2[0xd] == DAT_142e34c00._13_1_);
      auVar38[0xe] = -(auVar2[0xe] == DAT_142e34c00._14_1_);
      auVar38[0xf] = -(auVar2[0xf] == DAT_142e34c00._15_1_);
      uVar16 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar5 + uVar13 & uVar12;
        pcVar1 = (char *)(lVar11 + -0x18 + uVar17 * -0x18);
        auVar39[0] = -(*pcVar1 == DAT_142e63a10);
        auVar39[1] = -(pcVar1[1] == DAT_142e63a10._1_1_);
        auVar39[2] = -(pcVar1[2] == DAT_142e63a10._2_1_);
        auVar39[3] = -(pcVar1[3] == DAT_142e63a10._3_1_);
        auVar39[4] = -(pcVar1[4] == DAT_142e63a10._4_1_);
        auVar39[5] = -(pcVar1[5] == DAT_142e63a10._5_1_);
        auVar39[6] = -(pcVar1[6] == DAT_142e63a10._6_1_);
        auVar39[7] = -(pcVar1[7] == DAT_142e63a10._7_1_);
        auVar39[8] = -(pcVar1[8] == DAT_142e63a10._8_1_);
        auVar39[9] = -(pcVar1[9] == DAT_142e63a10._9_1_);
        auVar39[10] = -(pcVar1[10] == DAT_142e63a10._10_1_);
        auVar39[0xb] = -(pcVar1[0xb] == DAT_142e63a10._11_1_);
        auVar39[0xc] = -(pcVar1[0xc] == DAT_142e63a10._12_1_);
        auVar39[0xd] = -(pcVar1[0xd] == DAT_142e63a10._13_1_);
        auVar39[0xe] = -(pcVar1[0xe] == DAT_142e63a10._14_1_);
        auVar39[0xf] = -(pcVar1[0xf] == DAT_142e63a10._15_1_);
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
          uVar12 = *(ulonglong *)(lVar11 + uVar17 * -0x18 + -8);
          if ((uVar12 < *(ulonglong *)(param_1 + 0x210)) &&
             (uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar12 * 8), uVar12 != 0)) {
            lVar11 = ~uVar12 * 0x40;
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar11) != 0) {
              lVar11 = *(longlong *)(param_1 + 0x1d8) + lVar11;
              lVar14 = *(longlong *)(lVar11 + 0x10);
              *(undefined4 *)(lVar11 + 0x3c) = *(undefined4 *)(param_1 + 0x5a8);
              uStack_20 = uStack_2c;
              uStack_28 = CONCAT44(uStack_30,uStack_34);
              lVar11 = *(longlong *)(lVar14 + 0x30);
              uVar3 = *(undefined8 *)(lVar14 + 0x40);
              if (lVar11 == *(longlong *)(lVar14 + 0x20)) {
                pdb_142d7e830(lVar14 + 0x20);
              }
              lVar4 = *(longlong *)(lVar14 + 0x28);
              *(undefined8 *)(lVar4 + lVar11 * 0x18) = uVar3;
              *(undefined4 *)(lVar4 + 0x10 + lVar11 * 0x18) = uStack_20;
              *(undefined8 *)(lVar4 + 8 + lVar11 * 0x18) = uStack_28;
              *(longlong *)(lVar14 + 0x30) = lVar11 + 1;
              *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
              return;
            }
          }
          goto LAB_140359cf8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar35[0] = -(auVar2[0] == (char)iVar7);
      auVar35[1] = -(auVar2[1] == (char)((uint)iVar7 >> 8));
      auVar35[2] = -(auVar2[2] == (char)((uint)iVar7 >> 0x10));
      auVar35[3] = -(auVar2[3] == (char)((uint)iVar7 >> 0x18));
      auVar35[4] = -(auVar2[4] == (char)iVar8);
      auVar35[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
      auVar35[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
      auVar35[7] = -(auVar2[7] == (char)((uint)iVar8 >> 0x18));
      auVar35[8] = -(auVar2[8] == (char)iVar9);
      auVar35[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
      auVar35[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
      auVar35[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
      auVar35[0xc] = -(auVar2[0xc] == (char)iVar10);
      auVar35[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
      auVar35[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
      auVar35[0xf] = -(auVar2[0xf] == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140359cf8:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f42638);
}

