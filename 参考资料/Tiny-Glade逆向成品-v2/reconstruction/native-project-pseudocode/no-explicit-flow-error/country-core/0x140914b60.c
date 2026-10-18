// VA 0x140914b60, PDB extent 789 bytes
// country_core::systems::prefab::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 789 */

void pdb_140914b60(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  longlong lStack_78;
  undefined8 *puStack_70;
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
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x10a4003d93354304;
    lVar15 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar12);
      auVar21[0] = -(*pcVar1 == DAT_142e33df0);
      auVar21[1] = -(pcVar1[1] == UNK_142e33df1);
      auVar21[2] = -(pcVar1[2] == UNK_142e33df2);
      auVar21[3] = -(pcVar1[3] == UNK_142e33df3);
      auVar21[4] = -(pcVar1[4] == UNK_142e33df4);
      auVar21[5] = -(pcVar1[5] == UNK_142e33df5);
      auVar21[6] = -(pcVar1[6] == UNK_142e33df6);
      auVar21[7] = -(pcVar1[7] == UNK_142e33df7);
      auVar21[8] = -(pcVar1[8] == UNK_142e33df8);
      auVar21[9] = -(pcVar1[9] == UNK_142e33df9);
      auVar21[10] = -(pcVar1[10] == UNK_142e33dfa);
      auVar21[0xb] = -(pcVar1[0xb] == UNK_142e33dfb);
      auVar21[0xc] = -(pcVar1[0xc] == UNK_142e33dfc);
      auVar21[0xd] = -(pcVar1[0xd] == UNK_142e33dfd);
      auVar21[0xe] = -(pcVar1[0xe] == UNK_142e33dfe);
      auVar21[0xf] = -(pcVar1[0xf] == UNK_142e33dff);
      uVar17 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar18 = uVar4 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar18 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_14301f1c0);
        auVar22[1] = -(pcVar2[1] == UNK_14301f1c1);
        auVar22[2] = -(pcVar2[2] == UNK_14301f1c2);
        auVar22[3] = -(pcVar2[3] == UNK_14301f1c3);
        auVar22[4] = -(pcVar2[4] == UNK_14301f1c4);
        auVar22[5] = -(pcVar2[5] == UNK_14301f1c5);
        auVar22[6] = -(pcVar2[6] == UNK_14301f1c6);
        auVar22[7] = -(pcVar2[7] == UNK_14301f1c7);
        auVar22[8] = -(pcVar2[8] == UNK_14301f1c8);
        auVar22[9] = -(pcVar2[9] == UNK_14301f1c9);
        auVar22[10] = -(pcVar2[10] == UNK_14301f1ca);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_14301f1cb);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_14301f1cc);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_14301f1cd);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_14301f1ce);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_14301f1cf);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar3 + uVar18 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
              (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar12 * 0x40) == 0))
          goto LAB_140914c62;
          goto LAB_140914c78;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
      }
      auVar19[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar19[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar19[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar19[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar19[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar19[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar19[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar19[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar19[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar19[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar19[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar19[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar19[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar19[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar19[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar19[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar12 = uVar12 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_140914c62:
  pdb_1418d7e00(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_140914c78:
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0xbeaec9803c900d79;
    lVar15 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar12);
      auVar23[0] = -(*pcVar1 == DAT_142e34e50);
      auVar23[1] = -(pcVar1[1] == DAT_142e34e50._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e34e50._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e34e50._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e34e50._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e34e50._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e34e50._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e34e50._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e34e50._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e34e50._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e34e50._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34e50._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34e50._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34e50._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34e50._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34e50._15_1_);
      uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar18 = uVar4 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar18 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_14301f1d0);
        auVar24[1] = -(pcVar2[1] == UNK_14301f1d1);
        auVar24[2] = -(pcVar2[2] == UNK_14301f1d2);
        auVar24[3] = -(pcVar2[3] == UNK_14301f1d3);
        auVar24[4] = -(pcVar2[4] == UNK_14301f1d4);
        auVar24[5] = -(pcVar2[5] == UNK_14301f1d5);
        auVar24[6] = -(pcVar2[6] == UNK_14301f1d6);
        auVar24[7] = -(pcVar2[7] == UNK_14301f1d7);
        auVar24[8] = -(pcVar2[8] == UNK_14301f1d8);
        auVar24[9] = -(pcVar2[9] == UNK_14301f1d9);
        auVar24[10] = -(pcVar2[10] == UNK_14301f1da);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_14301f1db);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_14301f1dc);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_14301f1dd);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_14301f1de);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_14301f1df);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar3 + uVar18 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
              (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar12 * 0x40) == 0))
          goto LAB_140914d52;
          goto LAB_140914d5a;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
      }
      auVar20[0] = -(*pcVar1 == (char)iVar6);
      auVar20[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
      auVar20[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
      auVar20[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
      auVar20[4] = -(pcVar1[4] == (char)iVar7);
      auVar20[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
      auVar20[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
      auVar20[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
      auVar20[8] = -(pcVar1[8] == (char)iVar8);
      auVar20[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
      auVar20[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
      auVar20[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar20[0xc] = -(pcVar1[0xc] == (char)iVar9);
      auVar20[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
      auVar20[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar20[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar12 = uVar12 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_140914d52:
  pdb_1418d9c00(param_2);
LAB_140914d5a:
  pdb_1418f08a0(&uStack_98);
  uStack_21 = 0x25;
  puVar13 = &uStack_21;
  uVar10 = pdb_140950ee0(_DAT_143ca8dd0,puVar13,&UNK_14305af38);
  pdb_140676be0(&uStack_98,uVar10,puVar13);
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_e8 = lStack_78;
  uStack_e0 = puStack_70;
  uStack_f8 = (undefined1)uStack_88;
  uStack_f7 = uStack_88._1_1_;
  uStack_f6 = uStack_88._2_1_;
  uStack_f5 = uStack_88._3_1_;
  uStack_f4 = uStack_88._4_1_;
  uStack_f3 = uStack_88._5_1_;
  uStack_f2 = uStack_88._6_1_;
  uStack_f1 = uStack_88._7_1_;
  uStack_f0 = (undefined1)uStack_80;
  uStack_ef = uStack_80._1_1_;
  uStack_ee = uStack_80._2_1_;
  uStack_ed = uStack_80._3_1_;
  uStack_ec = uStack_80._4_1_;
  uStack_eb = uStack_80._5_1_;
  uStack_ea = uStack_80._6_1_;
  uStack_e9 = uStack_80._7_1_;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  puVar14 = &uStack_108;
  pdb_140c95fe0(param_2);
  plVar11 = (longlong *)pdb_140f3bda0();
  if ((char)plVar11[2] == '\x01') {
    lStack_78 = *plVar11;
    puVar14 = (undefined8 *)plVar11[1];
  }
  else {
    lStack_78 = pdb_140f4fd10();
    *plVar11 = lStack_78;
    plVar11[1] = (longlong)puVar14;
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  *plVar11 = lStack_78 + 1;
  uStack_88 = _DAT_14301f4b0;
  uStack_80 = _UNK_14301f4b8;
  uStack_98 = _DAT_14301f4a0;
  uStack_90 = _UNK_14301f4a8;
  puStack_70 = puVar14;
  pdb_1418f8ca0(param_2,&uStack_98);
  return;
}

