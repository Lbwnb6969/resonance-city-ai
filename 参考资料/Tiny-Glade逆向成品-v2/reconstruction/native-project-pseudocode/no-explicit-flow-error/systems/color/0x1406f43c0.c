// VA 0x1406f43c0, PDB extent 7032 bytes
// system_color::impl$0::add_color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::impl$0::add_color
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
   Extent: 7032 */

longlong pdb_1406f43c0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
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
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
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
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x70);
    uVar11 = 0xdb1c7b5d1b6b65dd;
    lVar13 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar9 + uVar11);
      auVar38[0] = -(*pcVar1 == DAT_142e34890);
      auVar38[1] = -(pcVar1[1] == UNK_142e34891);
      auVar38[2] = -(pcVar1[2] == UNK_142e34892);
      auVar38[3] = -(pcVar1[3] == UNK_142e34893);
      auVar38[4] = -(pcVar1[4] == UNK_142e34894);
      auVar38[5] = -(pcVar1[5] == UNK_142e34895);
      auVar38[6] = -(pcVar1[6] == UNK_142e34896);
      auVar38[7] = -(pcVar1[7] == UNK_142e34897);
      auVar38[8] = -(pcVar1[8] == UNK_142e34898);
      auVar38[9] = -(pcVar1[9] == UNK_142e34899);
      auVar38[10] = -(pcVar1[10] == UNK_142e3489a);
      auVar38[0xb] = -(pcVar1[0xb] == UNK_142e3489b);
      auVar38[0xc] = -(pcVar1[0xc] == UNK_142e3489c);
      auVar38[0xd] = -(pcVar1[0xd] == UNK_142e3489d);
      auVar38[0xe] = -(pcVar1[0xe] == UNK_142e3489e);
      auVar38[0xf] = -(pcVar1[0xf] == UNK_142e3489f);
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
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar9 + -0x18 + uVar17 * -0x18);
        auVar39[0] = -(*pcVar2 == DAT_142f9ffa0);
        auVar39[1] = -(pcVar2[1] == UNK_142f9ffa1);
        auVar39[2] = -(pcVar2[2] == UNK_142f9ffa2);
        auVar39[3] = -(pcVar2[3] == UNK_142f9ffa3);
        auVar39[4] = -(pcVar2[4] == UNK_142f9ffa4);
        auVar39[5] = -(pcVar2[5] == UNK_142f9ffa5);
        auVar39[6] = -(pcVar2[6] == UNK_142f9ffa6);
        auVar39[7] = -(pcVar2[7] == UNK_142f9ffa7);
        auVar39[8] = -(pcVar2[8] == UNK_142f9ffa8);
        auVar39[9] = -(pcVar2[9] == UNK_142f9ffa9);
        auVar39[10] = -(pcVar2[10] == UNK_142f9ffaa);
        auVar39[0xb] = -(pcVar2[0xb] == UNK_142f9ffab);
        auVar39[0xc] = -(pcVar2[0xc] == UNK_142f9ffac);
        auVar39[0xd] = -(pcVar2[0xd] == UNK_142f9ffad);
        auVar39[0xe] = -(pcVar2[0xe] == UNK_142f9ffae);
        auVar39[0xf] = -(pcVar2[0xf] == UNK_142f9ffaf);
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
          uVar11 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar11 * 8), uVar11 == 0))
             || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f44c2;
          goto LAB_1406f44d8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar18[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar18[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar18[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar18[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar18[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar18[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar18[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar18[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar18[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar18[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar18[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar18[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar18[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar18[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar18[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar18[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar11 = uVar11 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1406f44c2:
  pdb_1410a63b0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1406f44d8:
    lVar9 = *(longlong *)(param_1 + 0x70);
    uVar11 = 0xb16b772bed3bcb11;
    lVar13 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar9 + uVar11);
      auVar40[0] = -(*pcVar1 == DAT_142f9ff70);
      auVar40[1] = -(pcVar1[1] == DAT_142f9ff70._1_1_);
      auVar40[2] = -(pcVar1[2] == DAT_142f9ff70._2_1_);
      auVar40[3] = -(pcVar1[3] == DAT_142f9ff70._3_1_);
      auVar40[4] = -(pcVar1[4] == DAT_142f9ff70._4_1_);
      auVar40[5] = -(pcVar1[5] == DAT_142f9ff70._5_1_);
      auVar40[6] = -(pcVar1[6] == DAT_142f9ff70._6_1_);
      auVar40[7] = -(pcVar1[7] == DAT_142f9ff70._7_1_);
      auVar40[8] = -(pcVar1[8] == DAT_142f9ff70._8_1_);
      auVar40[9] = -(pcVar1[9] == DAT_142f9ff70._9_1_);
      auVar40[10] = -(pcVar1[10] == DAT_142f9ff70._10_1_);
      auVar40[0xb] = -(pcVar1[0xb] == DAT_142f9ff70._11_1_);
      auVar40[0xc] = -(pcVar1[0xc] == DAT_142f9ff70._12_1_);
      auVar40[0xd] = -(pcVar1[0xd] == DAT_142f9ff70._13_1_);
      auVar40[0xe] = -(pcVar1[0xe] == DAT_142f9ff70._14_1_);
      auVar40[0xf] = -(pcVar1[0xf] == DAT_142f9ff70._15_1_);
      uVar16 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar9 + -0x18 + uVar17 * -0x18);
        auVar41[0] = -(*pcVar2 == DAT_142f9ffb0);
        auVar41[1] = -(pcVar2[1] == UNK_142f9ffb1);
        auVar41[2] = -(pcVar2[2] == UNK_142f9ffb2);
        auVar41[3] = -(pcVar2[3] == UNK_142f9ffb3);
        auVar41[4] = -(pcVar2[4] == UNK_142f9ffb4);
        auVar41[5] = -(pcVar2[5] == UNK_142f9ffb5);
        auVar41[6] = -(pcVar2[6] == UNK_142f9ffb6);
        auVar41[7] = -(pcVar2[7] == UNK_142f9ffb7);
        auVar41[8] = -(pcVar2[8] == UNK_142f9ffb8);
        auVar41[9] = -(pcVar2[9] == UNK_142f9ffb9);
        auVar41[10] = -(pcVar2[10] == UNK_142f9ffba);
        auVar41[0xb] = -(pcVar2[0xb] == UNK_142f9ffbb);
        auVar41[0xc] = -(pcVar2[0xc] == UNK_142f9ffbc);
        auVar41[0xd] = -(pcVar2[0xd] == UNK_142f9ffbd);
        auVar41[0xe] = -(pcVar2[0xe] == UNK_142f9ffbe);
        auVar41[0xf] = -(pcVar2[0xf] == UNK_142f9ffbf);
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
          uVar11 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar11 * 8), uVar11 == 0))
             || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f45b2;
          goto LAB_1406f45ba;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
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
      uVar11 = uVar11 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1406f45b2:
  pdb_1410a27b0(param_1);
LAB_1406f45ba:
  lVar9 = pdb_1410a93b0(param_1);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x6d68f6a961c0d7c6;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar42[0] = -(*pcVar1 == DAT_142e34500);
      auVar42[1] = -(pcVar1[1] == DAT_142e34500._1_1_);
      auVar42[2] = -(pcVar1[2] == DAT_142e34500._2_1_);
      auVar42[3] = -(pcVar1[3] == DAT_142e34500._3_1_);
      auVar42[4] = -(pcVar1[4] == DAT_142e34500._4_1_);
      auVar42[5] = -(pcVar1[5] == DAT_142e34500._5_1_);
      auVar42[6] = -(pcVar1[6] == DAT_142e34500._6_1_);
      auVar42[7] = -(pcVar1[7] == DAT_142e34500._7_1_);
      auVar42[8] = -(pcVar1[8] == DAT_142e34500._8_1_);
      auVar42[9] = -(pcVar1[9] == DAT_142e34500._9_1_);
      auVar42[10] = -(pcVar1[10] == DAT_142e34500._10_1_);
      auVar42[0xb] = -(pcVar1[0xb] == DAT_142e34500._11_1_);
      auVar42[0xc] = -(pcVar1[0xc] == DAT_142e34500._12_1_);
      auVar42[0xd] = -(pcVar1[0xd] == DAT_142e34500._13_1_);
      auVar42[0xe] = -(pcVar1[0xe] == DAT_142e34500._14_1_);
      auVar42[0xf] = -(pcVar1[0xf] == DAT_142e34500._15_1_);
      uVar16 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar43[0] = -(*pcVar2 == DAT_142f9ffc0);
        auVar43[1] = -(pcVar2[1] == UNK_142f9ffc1);
        auVar43[2] = -(pcVar2[2] == UNK_142f9ffc2);
        auVar43[3] = -(pcVar2[3] == UNK_142f9ffc3);
        auVar43[4] = -(pcVar2[4] == UNK_142f9ffc4);
        auVar43[5] = -(pcVar2[5] == UNK_142f9ffc5);
        auVar43[6] = -(pcVar2[6] == UNK_142f9ffc6);
        auVar43[7] = -(pcVar2[7] == UNK_142f9ffc7);
        auVar43[8] = -(pcVar2[8] == UNK_142f9ffc8);
        auVar43[9] = -(pcVar2[9] == UNK_142f9ffc9);
        auVar43[10] = -(pcVar2[10] == UNK_142f9ffca);
        auVar43[0xb] = -(pcVar2[0xb] == UNK_142f9ffcb);
        auVar43[0xc] = -(pcVar2[0xc] == UNK_142f9ffcc);
        auVar43[0xd] = -(pcVar2[0xd] == UNK_142f9ffcd);
        auVar43[0xe] = -(pcVar2[0xe] == UNK_142f9ffce);
        auVar43[0xf] = -(pcVar2[0xf] == UNK_142f9ffcf);
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
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f46a2;
          goto LAB_1406f46b8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar20[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar20[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar20[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar20[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar20[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar20[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar20[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar20[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar20[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar20[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar20[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar20[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar20[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar20[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar20[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar20[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f46a2:
  pdb_1410a75b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f46b8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x836d01936506e165;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar44[0] = -(*pcVar1 == DAT_142e34a10);
      auVar44[1] = -(pcVar1[1] == DAT_142e34a10._1_1_);
      auVar44[2] = -(pcVar1[2] == DAT_142e34a10._2_1_);
      auVar44[3] = -(pcVar1[3] == DAT_142e34a10._3_1_);
      auVar44[4] = -(pcVar1[4] == DAT_142e34a10._4_1_);
      auVar44[5] = -(pcVar1[5] == DAT_142e34a10._5_1_);
      auVar44[6] = -(pcVar1[6] == DAT_142e34a10._6_1_);
      auVar44[7] = -(pcVar1[7] == DAT_142e34a10._7_1_);
      auVar44[8] = -(pcVar1[8] == DAT_142e34a10._8_1_);
      auVar44[9] = -(pcVar1[9] == DAT_142e34a10._9_1_);
      auVar44[10] = -(pcVar1[10] == DAT_142e34a10._10_1_);
      auVar44[0xb] = -(pcVar1[0xb] == DAT_142e34a10._11_1_);
      auVar44[0xc] = -(pcVar1[0xc] == DAT_142e34a10._12_1_);
      auVar44[0xd] = -(pcVar1[0xd] == DAT_142e34a10._13_1_);
      auVar44[0xe] = -(pcVar1[0xe] == DAT_142e34a10._14_1_);
      auVar44[0xf] = -(pcVar1[0xf] == DAT_142e34a10._15_1_);
      uVar16 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar45[0] = -(*pcVar2 == DAT_142e34a20);
        auVar45[1] = -(pcVar2[1] == UNK_142e34a21);
        auVar45[2] = -(pcVar2[2] == UNK_142e34a22);
        auVar45[3] = -(pcVar2[3] == UNK_142e34a23);
        auVar45[4] = -(pcVar2[4] == UNK_142e34a24);
        auVar45[5] = -(pcVar2[5] == UNK_142e34a25);
        auVar45[6] = -(pcVar2[6] == UNK_142e34a26);
        auVar45[7] = -(pcVar2[7] == UNK_142e34a27);
        auVar45[8] = -(pcVar2[8] == UNK_142e34a28);
        auVar45[9] = -(pcVar2[9] == UNK_142e34a29);
        auVar45[10] = -(pcVar2[10] == UNK_142e34a2a);
        auVar45[0xb] = -(pcVar2[0xb] == UNK_142e34a2b);
        auVar45[0xc] = -(pcVar2[0xc] == UNK_142e34a2c);
        auVar45[0xd] = -(pcVar2[0xd] == UNK_142e34a2d);
        auVar45[0xe] = -(pcVar2[0xe] == UNK_142e34a2e);
        auVar45[0xf] = -(pcVar2[0xf] == UNK_142e34a2f);
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
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4792;
          goto LAB_1406f47a8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar21[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar21[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar21[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar21[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar21[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar21[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar21[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar21[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar21[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar21[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar21[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar21[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar21[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar21[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar21[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar21[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4792:
  pdb_1410a3fb0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f47a8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x2a17842b72189b75;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar46[0] = -(*pcVar1 == DAT_142e34380);
      auVar46[1] = -(pcVar1[1] == DAT_142e34380._1_1_);
      auVar46[2] = -(pcVar1[2] == DAT_142e34380._2_1_);
      auVar46[3] = -(pcVar1[3] == DAT_142e34380._3_1_);
      auVar46[4] = -(pcVar1[4] == DAT_142e34380._4_1_);
      auVar46[5] = -(pcVar1[5] == DAT_142e34380._5_1_);
      auVar46[6] = -(pcVar1[6] == DAT_142e34380._6_1_);
      auVar46[7] = -(pcVar1[7] == DAT_142e34380._7_1_);
      auVar46[8] = -(pcVar1[8] == DAT_142e34380._8_1_);
      auVar46[9] = -(pcVar1[9] == DAT_142e34380._9_1_);
      auVar46[10] = -(pcVar1[10] == DAT_142e34380._10_1_);
      auVar46[0xb] = -(pcVar1[0xb] == DAT_142e34380._11_1_);
      auVar46[0xc] = -(pcVar1[0xc] == DAT_142e34380._12_1_);
      auVar46[0xd] = -(pcVar1[0xd] == DAT_142e34380._13_1_);
      auVar46[0xe] = -(pcVar1[0xe] == DAT_142e34380._14_1_);
      auVar46[0xf] = -(pcVar1[0xf] == DAT_142e34380._15_1_);
      uVar16 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar47[0] = -(*pcVar2 == DAT_142f9ffd0);
        auVar47[1] = -(pcVar2[1] == UNK_142f9ffd1);
        auVar47[2] = -(pcVar2[2] == UNK_142f9ffd2);
        auVar47[3] = -(pcVar2[3] == UNK_142f9ffd3);
        auVar47[4] = -(pcVar2[4] == UNK_142f9ffd4);
        auVar47[5] = -(pcVar2[5] == UNK_142f9ffd5);
        auVar47[6] = -(pcVar2[6] == UNK_142f9ffd6);
        auVar47[7] = -(pcVar2[7] == UNK_142f9ffd7);
        auVar47[8] = -(pcVar2[8] == UNK_142f9ffd8);
        auVar47[9] = -(pcVar2[9] == UNK_142f9ffd9);
        auVar47[10] = -(pcVar2[10] == UNK_142f9ffda);
        auVar47[0xb] = -(pcVar2[0xb] == UNK_142f9ffdb);
        auVar47[0xc] = -(pcVar2[0xc] == UNK_142f9ffdc);
        auVar47[0xd] = -(pcVar2[0xd] == UNK_142f9ffdd);
        auVar47[0xe] = -(pcVar2[0xe] == UNK_142f9ffde);
        auVar47[0xf] = -(pcVar2[0xf] == UNK_142f9ffdf);
        if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4882;
          goto LAB_1406f4898;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar22[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar22[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar22[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar22[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar22[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar22[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar22[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar22[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar22[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar22[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar22[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar22[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar22[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar22[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar22[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar22[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4882:
  pdb_1410a7bb0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4898:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x870056571c97d0c7;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar48[0] = -(*pcVar1 == DAT_142e34d90);
      auVar48[1] = -(pcVar1[1] == DAT_142e34d90._1_1_);
      auVar48[2] = -(pcVar1[2] == DAT_142e34d90._2_1_);
      auVar48[3] = -(pcVar1[3] == DAT_142e34d90._3_1_);
      auVar48[4] = -(pcVar1[4] == DAT_142e34d90._4_1_);
      auVar48[5] = -(pcVar1[5] == DAT_142e34d90._5_1_);
      auVar48[6] = -(pcVar1[6] == DAT_142e34d90._6_1_);
      auVar48[7] = -(pcVar1[7] == DAT_142e34d90._7_1_);
      auVar48[8] = -(pcVar1[8] == DAT_142e34d90._8_1_);
      auVar48[9] = -(pcVar1[9] == DAT_142e34d90._9_1_);
      auVar48[10] = -(pcVar1[10] == DAT_142e34d90._10_1_);
      auVar48[0xb] = -(pcVar1[0xb] == DAT_142e34d90._11_1_);
      auVar48[0xc] = -(pcVar1[0xc] == DAT_142e34d90._12_1_);
      auVar48[0xd] = -(pcVar1[0xd] == DAT_142e34d90._13_1_);
      auVar48[0xe] = -(pcVar1[0xe] == DAT_142e34d90._14_1_);
      auVar48[0xf] = -(pcVar1[0xf] == DAT_142e34d90._15_1_);
      uVar16 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar49[0] = -(*pcVar2 == DAT_142f9ffe0);
        auVar49[1] = -(pcVar2[1] == UNK_142f9ffe1);
        auVar49[2] = -(pcVar2[2] == UNK_142f9ffe2);
        auVar49[3] = -(pcVar2[3] == UNK_142f9ffe3);
        auVar49[4] = -(pcVar2[4] == UNK_142f9ffe4);
        auVar49[5] = -(pcVar2[5] == UNK_142f9ffe5);
        auVar49[6] = -(pcVar2[6] == UNK_142f9ffe6);
        auVar49[7] = -(pcVar2[7] == UNK_142f9ffe7);
        auVar49[8] = -(pcVar2[8] == UNK_142f9ffe8);
        auVar49[9] = -(pcVar2[9] == UNK_142f9ffe9);
        auVar49[10] = -(pcVar2[10] == UNK_142f9ffea);
        auVar49[0xb] = -(pcVar2[0xb] == UNK_142f9ffeb);
        auVar49[0xc] = -(pcVar2[0xc] == UNK_142f9ffec);
        auVar49[0xd] = -(pcVar2[0xd] == UNK_142f9ffed);
        auVar49[0xe] = -(pcVar2[0xe] == UNK_142f9ffee);
        auVar49[0xf] = -(pcVar2[0xf] == UNK_142f9ffef);
        if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4972;
          goto LAB_1406f4988;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar23[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar23[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar23[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar23[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar23[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar23[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar23[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar23[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar23[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar23[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar23[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar23[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar23[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar23[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar23[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar23[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4972:
  pdb_1410a57b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4988:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x6fc14c0a42fae1d;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar50[0] = -(*pcVar1 == DAT_142e343e0);
      auVar50[1] = -(pcVar1[1] == DAT_142e343e0._1_1_);
      auVar50[2] = -(pcVar1[2] == DAT_142e343e0._2_1_);
      auVar50[3] = -(pcVar1[3] == DAT_142e343e0._3_1_);
      auVar50[4] = -(pcVar1[4] == DAT_142e343e0._4_1_);
      auVar50[5] = -(pcVar1[5] == DAT_142e343e0._5_1_);
      auVar50[6] = -(pcVar1[6] == DAT_142e343e0._6_1_);
      auVar50[7] = -(pcVar1[7] == DAT_142e343e0._7_1_);
      auVar50[8] = -(pcVar1[8] == DAT_142e343e0._8_1_);
      auVar50[9] = -(pcVar1[9] == DAT_142e343e0._9_1_);
      auVar50[10] = -(pcVar1[10] == DAT_142e343e0._10_1_);
      auVar50[0xb] = -(pcVar1[0xb] == DAT_142e343e0._11_1_);
      auVar50[0xc] = -(pcVar1[0xc] == DAT_142e343e0._12_1_);
      auVar50[0xd] = -(pcVar1[0xd] == DAT_142e343e0._13_1_);
      auVar50[0xe] = -(pcVar1[0xe] == DAT_142e343e0._14_1_);
      auVar50[0xf] = -(pcVar1[0xf] == DAT_142e343e0._15_1_);
      uVar16 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar51[0] = -(*pcVar2 == DAT_142f9fff0);
        auVar51[1] = -(pcVar2[1] == UNK_142f9fff1);
        auVar51[2] = -(pcVar2[2] == UNK_142f9fff2);
        auVar51[3] = -(pcVar2[3] == UNK_142f9fff3);
        auVar51[4] = -(pcVar2[4] == UNK_142f9fff4);
        auVar51[5] = -(pcVar2[5] == UNK_142f9fff5);
        auVar51[6] = -(pcVar2[6] == UNK_142f9fff6);
        auVar51[7] = -(pcVar2[7] == UNK_142f9fff7);
        auVar51[8] = -(pcVar2[8] == UNK_142f9fff8);
        auVar51[9] = -(pcVar2[9] == UNK_142f9fff9);
        auVar51[10] = -(pcVar2[10] == UNK_142f9fffa);
        auVar51[0xb] = -(pcVar2[0xb] == UNK_142f9fffb);
        auVar51[0xc] = -(pcVar2[0xc] == UNK_142f9fffc);
        auVar51[0xd] = -(pcVar2[0xd] == UNK_142f9fffd);
        auVar51[0xe] = -(pcVar2[0xe] == UNK_142f9fffe);
        auVar51[0xf] = -(pcVar2[0xf] == UNK_142f9ffff);
        if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar51[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4a62;
          goto LAB_1406f4a78;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar24[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar24[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar24[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar24[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar24[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar24[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar24[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar24[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar24[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar24[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar24[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar24[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar24[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar24[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar24[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar24[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4a62:
  pdb_1410a51b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4a78:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x740d93ec8cc6ecd9;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar52[0] = -(*pcVar1 == DAT_142e33c50);
      auVar52[1] = -(pcVar1[1] == DAT_142e33c50._1_1_);
      auVar52[2] = -(pcVar1[2] == DAT_142e33c50._2_1_);
      auVar52[3] = -(pcVar1[3] == DAT_142e33c50._3_1_);
      auVar52[4] = -(pcVar1[4] == DAT_142e33c50._4_1_);
      auVar52[5] = -(pcVar1[5] == DAT_142e33c50._5_1_);
      auVar52[6] = -(pcVar1[6] == DAT_142e33c50._6_1_);
      auVar52[7] = -(pcVar1[7] == DAT_142e33c50._7_1_);
      auVar52[8] = -(pcVar1[8] == DAT_142e33c50._8_1_);
      auVar52[9] = -(pcVar1[9] == DAT_142e33c50._9_1_);
      auVar52[10] = -(pcVar1[10] == DAT_142e33c50._10_1_);
      auVar52[0xb] = -(pcVar1[0xb] == DAT_142e33c50._11_1_);
      auVar52[0xc] = -(pcVar1[0xc] == DAT_142e33c50._12_1_);
      auVar52[0xd] = -(pcVar1[0xd] == DAT_142e33c50._13_1_);
      auVar52[0xe] = -(pcVar1[0xe] == DAT_142e33c50._14_1_);
      auVar52[0xf] = -(pcVar1[0xf] == DAT_142e33c50._15_1_);
      uVar16 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar53[0] = -(*pcVar2 == DAT_142fa0000);
        auVar53[1] = -(pcVar2[1] == UNK_142fa0001);
        auVar53[2] = -(pcVar2[2] == UNK_142fa0002);
        auVar53[3] = -(pcVar2[3] == UNK_142fa0003);
        auVar53[4] = -(pcVar2[4] == UNK_142fa0004);
        auVar53[5] = -(pcVar2[5] == UNK_142fa0005);
        auVar53[6] = -(pcVar2[6] == UNK_142fa0006);
        auVar53[7] = -(pcVar2[7] == UNK_142fa0007);
        auVar53[8] = -(pcVar2[8] == UNK_142fa0008);
        auVar53[9] = -(pcVar2[9] == UNK_142fa0009);
        auVar53[10] = -(pcVar2[10] == UNK_142fa000a);
        auVar53[0xb] = -(pcVar2[0xb] == UNK_142fa000b);
        auVar53[0xc] = -(pcVar2[0xc] == UNK_142fa000c);
        auVar53[0xd] = -(pcVar2[0xd] == UNK_142fa000d);
        auVar53[0xe] = -(pcVar2[0xe] == UNK_142fa000e);
        auVar53[0xf] = -(pcVar2[0xf] == UNK_142fa000f);
        if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar53[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4b52;
          goto LAB_1406f4b68;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar25[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar25[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar25[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar25[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar25[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar25[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar25[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar25[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar25[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar25[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar25[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar25[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar25[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar25[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar25[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar25[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4b52:
  pdb_1410a2db0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4b68:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x9f6448e942db2ded;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar54[0] = -(*pcVar1 == DAT_142e34650);
      auVar54[1] = -(pcVar1[1] == DAT_142e34650._1_1_);
      auVar54[2] = -(pcVar1[2] == DAT_142e34650._2_1_);
      auVar54[3] = -(pcVar1[3] == DAT_142e34650._3_1_);
      auVar54[4] = -(pcVar1[4] == DAT_142e34650._4_1_);
      auVar54[5] = -(pcVar1[5] == DAT_142e34650._5_1_);
      auVar54[6] = -(pcVar1[6] == DAT_142e34650._6_1_);
      auVar54[7] = -(pcVar1[7] == DAT_142e34650._7_1_);
      auVar54[8] = -(pcVar1[8] == DAT_142e34650._8_1_);
      auVar54[9] = -(pcVar1[9] == DAT_142e34650._9_1_);
      auVar54[10] = -(pcVar1[10] == DAT_142e34650._10_1_);
      auVar54[0xb] = -(pcVar1[0xb] == DAT_142e34650._11_1_);
      auVar54[0xc] = -(pcVar1[0xc] == DAT_142e34650._12_1_);
      auVar54[0xd] = -(pcVar1[0xd] == DAT_142e34650._13_1_);
      auVar54[0xe] = -(pcVar1[0xe] == DAT_142e34650._14_1_);
      auVar54[0xf] = -(pcVar1[0xf] == DAT_142e34650._15_1_);
      uVar16 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar55[0] = -(*pcVar2 == DAT_142e34930);
        auVar55[1] = -(pcVar2[1] == UNK_142e34931);
        auVar55[2] = -(pcVar2[2] == UNK_142e34932);
        auVar55[3] = -(pcVar2[3] == UNK_142e34933);
        auVar55[4] = -(pcVar2[4] == UNK_142e34934);
        auVar55[5] = -(pcVar2[5] == UNK_142e34935);
        auVar55[6] = -(pcVar2[6] == UNK_142e34936);
        auVar55[7] = -(pcVar2[7] == UNK_142e34937);
        auVar55[8] = -(pcVar2[8] == UNK_142e34938);
        auVar55[9] = -(pcVar2[9] == UNK_142e34939);
        auVar55[10] = -(pcVar2[10] == UNK_142e3493a);
        auVar55[0xb] = -(pcVar2[0xb] == UNK_142e3493b);
        auVar55[0xc] = -(pcVar2[0xc] == UNK_142e3493c);
        auVar55[0xd] = -(pcVar2[0xd] == UNK_142e3493d);
        auVar55[0xe] = -(pcVar2[0xe] == UNK_142e3493e);
        auVar55[0xf] = -(pcVar2[0xf] == UNK_142e3493f);
        if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4c42;
          goto LAB_1406f4c58;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar26[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar26[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar26[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar26[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar26[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar26[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar26[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar26[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar26[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar26[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar26[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar26[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar26[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar26[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar26[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar26[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4c42:
  pdb_1410a39b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4c58:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x10e25f95e76d6b3a;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar56[0] = -(*pcVar1 == DAT_142e33df0);
      auVar56[1] = -(pcVar1[1] == DAT_142e33df0._1_1_);
      auVar56[2] = -(pcVar1[2] == DAT_142e33df0._2_1_);
      auVar56[3] = -(pcVar1[3] == DAT_142e33df0._3_1_);
      auVar56[4] = -(pcVar1[4] == DAT_142e33df0._4_1_);
      auVar56[5] = -(pcVar1[5] == DAT_142e33df0._5_1_);
      auVar56[6] = -(pcVar1[6] == DAT_142e33df0._6_1_);
      auVar56[7] = -(pcVar1[7] == DAT_142e33df0._7_1_);
      auVar56[8] = -(pcVar1[8] == DAT_142e33df0._8_1_);
      auVar56[9] = -(pcVar1[9] == DAT_142e33df0._9_1_);
      auVar56[10] = -(pcVar1[10] == DAT_142e33df0._10_1_);
      auVar56[0xb] = -(pcVar1[0xb] == DAT_142e33df0._11_1_);
      auVar56[0xc] = -(pcVar1[0xc] == DAT_142e33df0._12_1_);
      auVar56[0xd] = -(pcVar1[0xd] == DAT_142e33df0._13_1_);
      auVar56[0xe] = -(pcVar1[0xe] == DAT_142e33df0._14_1_);
      auVar56[0xf] = -(pcVar1[0xf] == DAT_142e33df0._15_1_);
      uVar16 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar57[0] = -(*pcVar2 == DAT_142e34ac0);
        auVar57[1] = -(pcVar2[1] == UNK_142e34ac1);
        auVar57[2] = -(pcVar2[2] == UNK_142e34ac2);
        auVar57[3] = -(pcVar2[3] == UNK_142e34ac3);
        auVar57[4] = -(pcVar2[4] == UNK_142e34ac4);
        auVar57[5] = -(pcVar2[5] == UNK_142e34ac5);
        auVar57[6] = -(pcVar2[6] == UNK_142e34ac6);
        auVar57[7] = -(pcVar2[7] == UNK_142e34ac7);
        auVar57[8] = -(pcVar2[8] == UNK_142e34ac8);
        auVar57[9] = -(pcVar2[9] == UNK_142e34ac9);
        auVar57[10] = -(pcVar2[10] == UNK_142e34aca);
        auVar57[0xb] = -(pcVar2[0xb] == UNK_142e34acb);
        auVar57[0xc] = -(pcVar2[0xc] == UNK_142e34acc);
        auVar57[0xd] = -(pcVar2[0xd] == UNK_142e34acd);
        auVar57[0xe] = -(pcVar2[0xe] == UNK_142e34ace);
        auVar57[0xf] = -(pcVar2[0xf] == UNK_142e34acf);
        if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar57[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4d32;
          goto LAB_1406f4d48;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar27[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar27[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar27[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar27[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar27[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar27[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar27[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar27[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar27[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar27[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar27[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar27[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar27[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar27[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar27[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar27[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4d32:
  pdb_1410a33b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4d48:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x7669be9346e7beae;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar58[0] = -(*pcVar1 == DAT_142e34220);
      auVar58[1] = -(pcVar1[1] == DAT_142e34220._1_1_);
      auVar58[2] = -(pcVar1[2] == DAT_142e34220._2_1_);
      auVar58[3] = -(pcVar1[3] == DAT_142e34220._3_1_);
      auVar58[4] = -(pcVar1[4] == DAT_142e34220._4_1_);
      auVar58[5] = -(pcVar1[5] == DAT_142e34220._5_1_);
      auVar58[6] = -(pcVar1[6] == DAT_142e34220._6_1_);
      auVar58[7] = -(pcVar1[7] == DAT_142e34220._7_1_);
      auVar58[8] = -(pcVar1[8] == DAT_142e34220._8_1_);
      auVar58[9] = -(pcVar1[9] == DAT_142e34220._9_1_);
      auVar58[10] = -(pcVar1[10] == DAT_142e34220._10_1_);
      auVar58[0xb] = -(pcVar1[0xb] == DAT_142e34220._11_1_);
      auVar58[0xc] = -(pcVar1[0xc] == DAT_142e34220._12_1_);
      auVar58[0xd] = -(pcVar1[0xd] == DAT_142e34220._13_1_);
      auVar58[0xe] = -(pcVar1[0xe] == DAT_142e34220._14_1_);
      auVar58[0xf] = -(pcVar1[0xf] == DAT_142e34220._15_1_);
      uVar16 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar59[0] = -(*pcVar2 == DAT_142fa0010);
        auVar59[1] = -(pcVar2[1] == UNK_142fa0011);
        auVar59[2] = -(pcVar2[2] == UNK_142fa0012);
        auVar59[3] = -(pcVar2[3] == UNK_142fa0013);
        auVar59[4] = -(pcVar2[4] == UNK_142fa0014);
        auVar59[5] = -(pcVar2[5] == UNK_142fa0015);
        auVar59[6] = -(pcVar2[6] == UNK_142fa0016);
        auVar59[7] = -(pcVar2[7] == UNK_142fa0017);
        auVar59[8] = -(pcVar2[8] == UNK_142fa0018);
        auVar59[9] = -(pcVar2[9] == UNK_142fa0019);
        auVar59[10] = -(pcVar2[10] == UNK_142fa001a);
        auVar59[0xb] = -(pcVar2[0xb] == UNK_142fa001b);
        auVar59[0xc] = -(pcVar2[0xc] == UNK_142fa001c);
        auVar59[0xd] = -(pcVar2[0xd] == UNK_142fa001d);
        auVar59[0xe] = -(pcVar2[0xe] == UNK_142fa001e);
        auVar59[0xf] = -(pcVar2[0xf] == UNK_142fa001f);
        if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar59[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4e22;
          goto LAB_1406f4e38;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar28[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar28[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar28[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar28[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar28[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar28[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar28[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar28[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar28[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar28[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar28[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar28[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar28[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar28[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar28[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar28[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4e22:
  pdb_1410a1bb0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4e38:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x3bed831d7eae5826;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar60[0] = -(*pcVar1 == DAT_142e34730);
      auVar60[1] = -(pcVar1[1] == DAT_142e34730._1_1_);
      auVar60[2] = -(pcVar1[2] == DAT_142e34730._2_1_);
      auVar60[3] = -(pcVar1[3] == DAT_142e34730._3_1_);
      auVar60[4] = -(pcVar1[4] == DAT_142e34730._4_1_);
      auVar60[5] = -(pcVar1[5] == DAT_142e34730._5_1_);
      auVar60[6] = -(pcVar1[6] == DAT_142e34730._6_1_);
      auVar60[7] = -(pcVar1[7] == DAT_142e34730._7_1_);
      auVar60[8] = -(pcVar1[8] == DAT_142e34730._8_1_);
      auVar60[9] = -(pcVar1[9] == DAT_142e34730._9_1_);
      auVar60[10] = -(pcVar1[10] == DAT_142e34730._10_1_);
      auVar60[0xb] = -(pcVar1[0xb] == DAT_142e34730._11_1_);
      auVar60[0xc] = -(pcVar1[0xc] == DAT_142e34730._12_1_);
      auVar60[0xd] = -(pcVar1[0xd] == DAT_142e34730._13_1_);
      auVar60[0xe] = -(pcVar1[0xe] == DAT_142e34730._14_1_);
      auVar60[0xf] = -(pcVar1[0xf] == DAT_142e34730._15_1_);
      uVar16 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar61[0] = -(*pcVar2 == DAT_142fa0020);
        auVar61[1] = -(pcVar2[1] == UNK_142fa0021);
        auVar61[2] = -(pcVar2[2] == UNK_142fa0022);
        auVar61[3] = -(pcVar2[3] == UNK_142fa0023);
        auVar61[4] = -(pcVar2[4] == UNK_142fa0024);
        auVar61[5] = -(pcVar2[5] == UNK_142fa0025);
        auVar61[6] = -(pcVar2[6] == UNK_142fa0026);
        auVar61[7] = -(pcVar2[7] == UNK_142fa0027);
        auVar61[8] = -(pcVar2[8] == UNK_142fa0028);
        auVar61[9] = -(pcVar2[9] == UNK_142fa0029);
        auVar61[10] = -(pcVar2[10] == UNK_142fa002a);
        auVar61[0xb] = -(pcVar2[0xb] == UNK_142fa002b);
        auVar61[0xc] = -(pcVar2[0xc] == UNK_142fa002c);
        auVar61[0xd] = -(pcVar2[0xd] == UNK_142fa002d);
        auVar61[0xe] = -(pcVar2[0xe] == UNK_142fa002e);
        auVar61[0xf] = -(pcVar2[0xf] == UNK_142fa002f);
        if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f4f12;
          goto LAB_1406f4f28;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar29[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar29[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar29[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar29[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar29[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar29[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar29[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar29[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar29[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar29[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar29[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar29[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar29[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar29[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar29[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar29[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f4f12:
  pdb_1410a5db0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f4f28:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x41b9636caff1eadd;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar62[0] = -(*pcVar1 == DAT_142e346d0);
      auVar62[1] = -(pcVar1[1] == DAT_142e346d0._1_1_);
      auVar62[2] = -(pcVar1[2] == DAT_142e346d0._2_1_);
      auVar62[3] = -(pcVar1[3] == DAT_142e346d0._3_1_);
      auVar62[4] = -(pcVar1[4] == DAT_142e346d0._4_1_);
      auVar62[5] = -(pcVar1[5] == DAT_142e346d0._5_1_);
      auVar62[6] = -(pcVar1[6] == DAT_142e346d0._6_1_);
      auVar62[7] = -(pcVar1[7] == DAT_142e346d0._7_1_);
      auVar62[8] = -(pcVar1[8] == DAT_142e346d0._8_1_);
      auVar62[9] = -(pcVar1[9] == DAT_142e346d0._9_1_);
      auVar62[10] = -(pcVar1[10] == DAT_142e346d0._10_1_);
      auVar62[0xb] = -(pcVar1[0xb] == DAT_142e346d0._11_1_);
      auVar62[0xc] = -(pcVar1[0xc] == DAT_142e346d0._12_1_);
      auVar62[0xd] = -(pcVar1[0xd] == DAT_142e346d0._13_1_);
      auVar62[0xe] = -(pcVar1[0xe] == DAT_142e346d0._14_1_);
      auVar62[0xf] = -(pcVar1[0xf] == DAT_142e346d0._15_1_);
      uVar16 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar63[0] = -(*pcVar2 == DAT_142fa0030);
        auVar63[1] = -(pcVar2[1] == UNK_142fa0031);
        auVar63[2] = -(pcVar2[2] == UNK_142fa0032);
        auVar63[3] = -(pcVar2[3] == UNK_142fa0033);
        auVar63[4] = -(pcVar2[4] == UNK_142fa0034);
        auVar63[5] = -(pcVar2[5] == UNK_142fa0035);
        auVar63[6] = -(pcVar2[6] == UNK_142fa0036);
        auVar63[7] = -(pcVar2[7] == UNK_142fa0037);
        auVar63[8] = -(pcVar2[8] == UNK_142fa0038);
        auVar63[9] = -(pcVar2[9] == UNK_142fa0039);
        auVar63[10] = -(pcVar2[10] == UNK_142fa003a);
        auVar63[0xb] = -(pcVar2[0xb] == UNK_142fa003b);
        auVar63[0xc] = -(pcVar2[0xc] == UNK_142fa003c);
        auVar63[0xd] = -(pcVar2[0xd] == UNK_142fa003d);
        auVar63[0xe] = -(pcVar2[0xe] == UNK_142fa003e);
        auVar63[0xf] = -(pcVar2[0xf] == UNK_142fa003f);
        if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f5002;
          goto LAB_1406f5018;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar30[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar30[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar30[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar30[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar30[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar30[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar30[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar30[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar30[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar30[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar30[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar30[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar30[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar30[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar30[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar30[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f5002:
  pdb_1410a81b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f5018:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x77df1e1c7f66b7ca;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar64[0] = -(*pcVar1 == DAT_142e34220);
      auVar64[1] = -(pcVar1[1] == DAT_142e34220._1_1_);
      auVar64[2] = -(pcVar1[2] == DAT_142e34220._2_1_);
      auVar64[3] = -(pcVar1[3] == DAT_142e34220._3_1_);
      auVar64[4] = -(pcVar1[4] == DAT_142e34220._4_1_);
      auVar64[5] = -(pcVar1[5] == DAT_142e34220._5_1_);
      auVar64[6] = -(pcVar1[6] == DAT_142e34220._6_1_);
      auVar64[7] = -(pcVar1[7] == DAT_142e34220._7_1_);
      auVar64[8] = -(pcVar1[8] == DAT_142e34220._8_1_);
      auVar64[9] = -(pcVar1[9] == DAT_142e34220._9_1_);
      auVar64[10] = -(pcVar1[10] == DAT_142e34220._10_1_);
      auVar64[0xb] = -(pcVar1[0xb] == DAT_142e34220._11_1_);
      auVar64[0xc] = -(pcVar1[0xc] == DAT_142e34220._12_1_);
      auVar64[0xd] = -(pcVar1[0xd] == DAT_142e34220._13_1_);
      auVar64[0xe] = -(pcVar1[0xe] == DAT_142e34220._14_1_);
      auVar64[0xf] = -(pcVar1[0xf] == DAT_142e34220._15_1_);
      uVar16 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar65[0] = -(*pcVar2 == DAT_142fa0040);
        auVar65[1] = -(pcVar2[1] == UNK_142fa0041);
        auVar65[2] = -(pcVar2[2] == UNK_142fa0042);
        auVar65[3] = -(pcVar2[3] == UNK_142fa0043);
        auVar65[4] = -(pcVar2[4] == UNK_142fa0044);
        auVar65[5] = -(pcVar2[5] == UNK_142fa0045);
        auVar65[6] = -(pcVar2[6] == UNK_142fa0046);
        auVar65[7] = -(pcVar2[7] == UNK_142fa0047);
        auVar65[8] = -(pcVar2[8] == UNK_142fa0048);
        auVar65[9] = -(pcVar2[9] == UNK_142fa0049);
        auVar65[10] = -(pcVar2[10] == UNK_142fa004a);
        auVar65[0xb] = -(pcVar2[0xb] == UNK_142fa004b);
        auVar65[0xc] = -(pcVar2[0xc] == UNK_142fa004c);
        auVar65[0xd] = -(pcVar2[0xd] == UNK_142fa004d);
        auVar65[0xe] = -(pcVar2[0xe] == UNK_142fa004e);
        auVar65[0xf] = -(pcVar2[0xf] == UNK_142fa004f);
        if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f50f2;
          goto LAB_1406f5108;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar31[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar31[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar31[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar31[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar31[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar31[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar31[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar31[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar31[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar31[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar31[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar31[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar31[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar31[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar31[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar31[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f50f2:
  pdb_1410a8db0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f5108:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0xff347dbc815641c6;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar66[0] = -(*pcVar1 == DAT_142e348f0);
      auVar66[1] = -(pcVar1[1] == DAT_142e348f0._1_1_);
      auVar66[2] = -(pcVar1[2] == DAT_142e348f0._2_1_);
      auVar66[3] = -(pcVar1[3] == DAT_142e348f0._3_1_);
      auVar66[4] = -(pcVar1[4] == DAT_142e348f0._4_1_);
      auVar66[5] = -(pcVar1[5] == DAT_142e348f0._5_1_);
      auVar66[6] = -(pcVar1[6] == DAT_142e348f0._6_1_);
      auVar66[7] = -(pcVar1[7] == DAT_142e348f0._7_1_);
      auVar66[8] = -(pcVar1[8] == DAT_142e348f0._8_1_);
      auVar66[9] = -(pcVar1[9] == DAT_142e348f0._9_1_);
      auVar66[10] = -(pcVar1[10] == DAT_142e348f0._10_1_);
      auVar66[0xb] = -(pcVar1[0xb] == DAT_142e348f0._11_1_);
      auVar66[0xc] = -(pcVar1[0xc] == DAT_142e348f0._12_1_);
      auVar66[0xd] = -(pcVar1[0xd] == DAT_142e348f0._13_1_);
      auVar66[0xe] = -(pcVar1[0xe] == DAT_142e348f0._14_1_);
      auVar66[0xf] = -(pcVar1[0xf] == DAT_142e348f0._15_1_);
      uVar16 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar67[0] = -(*pcVar2 == DAT_142fa0050);
        auVar67[1] = -(pcVar2[1] == UNK_142fa0051);
        auVar67[2] = -(pcVar2[2] == UNK_142fa0052);
        auVar67[3] = -(pcVar2[3] == UNK_142fa0053);
        auVar67[4] = -(pcVar2[4] == UNK_142fa0054);
        auVar67[5] = -(pcVar2[5] == UNK_142fa0055);
        auVar67[6] = -(pcVar2[6] == UNK_142fa0056);
        auVar67[7] = -(pcVar2[7] == UNK_142fa0057);
        auVar67[8] = -(pcVar2[8] == UNK_142fa0058);
        auVar67[9] = -(pcVar2[9] == UNK_142fa0059);
        auVar67[10] = -(pcVar2[10] == UNK_142fa005a);
        auVar67[0xb] = -(pcVar2[0xb] == UNK_142fa005b);
        auVar67[0xc] = -(pcVar2[0xc] == UNK_142fa005c);
        auVar67[0xd] = -(pcVar2[0xd] == UNK_142fa005d);
        auVar67[0xe] = -(pcVar2[0xe] == UNK_142fa005e);
        auVar67[0xf] = -(pcVar2[0xf] == UNK_142fa005f);
        if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f51e2;
          goto LAB_1406f51f8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar32[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar32[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar32[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar32[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar32[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar32[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar32[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar32[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar32[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar32[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar32[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar32[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar32[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar32[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar32[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar32[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
          auVar32[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f51e2:
  pdb_1410a6fb0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f51f8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x2ccaec6fa9d7d37c;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar68[0] = -(*pcVar1 == DAT_142e34c00);
      auVar68[1] = -(pcVar1[1] == DAT_142e34c00._1_1_);
      auVar68[2] = -(pcVar1[2] == DAT_142e34c00._2_1_);
      auVar68[3] = -(pcVar1[3] == DAT_142e34c00._3_1_);
      auVar68[4] = -(pcVar1[4] == DAT_142e34c00._4_1_);
      auVar68[5] = -(pcVar1[5] == DAT_142e34c00._5_1_);
      auVar68[6] = -(pcVar1[6] == DAT_142e34c00._6_1_);
      auVar68[7] = -(pcVar1[7] == DAT_142e34c00._7_1_);
      auVar68[8] = -(pcVar1[8] == DAT_142e34c00._8_1_);
      auVar68[9] = -(pcVar1[9] == DAT_142e34c00._9_1_);
      auVar68[10] = -(pcVar1[10] == DAT_142e34c00._10_1_);
      auVar68[0xb] = -(pcVar1[0xb] == DAT_142e34c00._11_1_);
      auVar68[0xc] = -(pcVar1[0xc] == DAT_142e34c00._12_1_);
      auVar68[0xd] = -(pcVar1[0xd] == DAT_142e34c00._13_1_);
      auVar68[0xe] = -(pcVar1[0xe] == DAT_142e34c00._14_1_);
      auVar68[0xf] = -(pcVar1[0xf] == DAT_142e34c00._15_1_);
      uVar16 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar69[0] = -(*pcVar2 == DAT_142fa0060);
        auVar69[1] = -(pcVar2[1] == UNK_142fa0061);
        auVar69[2] = -(pcVar2[2] == UNK_142fa0062);
        auVar69[3] = -(pcVar2[3] == UNK_142fa0063);
        auVar69[4] = -(pcVar2[4] == UNK_142fa0064);
        auVar69[5] = -(pcVar2[5] == UNK_142fa0065);
        auVar69[6] = -(pcVar2[6] == UNK_142fa0066);
        auVar69[7] = -(pcVar2[7] == UNK_142fa0067);
        auVar69[8] = -(pcVar2[8] == UNK_142fa0068);
        auVar69[9] = -(pcVar2[9] == UNK_142fa0069);
        auVar69[10] = -(pcVar2[10] == UNK_142fa006a);
        auVar69[0xb] = -(pcVar2[0xb] == UNK_142fa006b);
        auVar69[0xc] = -(pcVar2[0xc] == UNK_142fa006c);
        auVar69[0xd] = -(pcVar2[0xd] == UNK_142fa006d);
        auVar69[0xe] = -(pcVar2[0xe] == UNK_142fa006e);
        auVar69[0xf] = -(pcVar2[0xf] == UNK_142fa006f);
        if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar69[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f52d2;
          goto LAB_1406f52e8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar33[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar33[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar33[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar33[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar33[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar33[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar33[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar33[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar33[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar33[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar33[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar33[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar33[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar33[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar33[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar33[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f52d2:
  pdb_1410a69b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f52e8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0xab3e84bf1ecd6743;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar70[0] = -(*pcVar1 == DAT_142e33bf0);
      auVar70[1] = -(pcVar1[1] == DAT_142e33bf0._1_1_);
      auVar70[2] = -(pcVar1[2] == DAT_142e33bf0._2_1_);
      auVar70[3] = -(pcVar1[3] == DAT_142e33bf0._3_1_);
      auVar70[4] = -(pcVar1[4] == DAT_142e33bf0._4_1_);
      auVar70[5] = -(pcVar1[5] == DAT_142e33bf0._5_1_);
      auVar70[6] = -(pcVar1[6] == DAT_142e33bf0._6_1_);
      auVar70[7] = -(pcVar1[7] == DAT_142e33bf0._7_1_);
      auVar70[8] = -(pcVar1[8] == DAT_142e33bf0._8_1_);
      auVar70[9] = -(pcVar1[9] == DAT_142e33bf0._9_1_);
      auVar70[10] = -(pcVar1[10] == DAT_142e33bf0._10_1_);
      auVar70[0xb] = -(pcVar1[0xb] == DAT_142e33bf0._11_1_);
      auVar70[0xc] = -(pcVar1[0xc] == DAT_142e33bf0._12_1_);
      auVar70[0xd] = -(pcVar1[0xd] == DAT_142e33bf0._13_1_);
      auVar70[0xe] = -(pcVar1[0xe] == DAT_142e33bf0._14_1_);
      auVar70[0xf] = -(pcVar1[0xf] == DAT_142e33bf0._15_1_);
      uVar16 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar71[0] = -(*pcVar2 == DAT_142fa0070);
        auVar71[1] = -(pcVar2[1] == UNK_142fa0071);
        auVar71[2] = -(pcVar2[2] == UNK_142fa0072);
        auVar71[3] = -(pcVar2[3] == UNK_142fa0073);
        auVar71[4] = -(pcVar2[4] == UNK_142fa0074);
        auVar71[5] = -(pcVar2[5] == UNK_142fa0075);
        auVar71[6] = -(pcVar2[6] == UNK_142fa0076);
        auVar71[7] = -(pcVar2[7] == UNK_142fa0077);
        auVar71[8] = -(pcVar2[8] == UNK_142fa0078);
        auVar71[9] = -(pcVar2[9] == UNK_142fa0079);
        auVar71[10] = -(pcVar2[10] == UNK_142fa007a);
        auVar71[0xb] = -(pcVar2[0xb] == UNK_142fa007b);
        auVar71[0xc] = -(pcVar2[0xc] == UNK_142fa007c);
        auVar71[0xd] = -(pcVar2[0xd] == UNK_142fa007d);
        auVar71[0xe] = -(pcVar2[0xe] == UNK_142fa007e);
        auVar71[0xf] = -(pcVar2[0xf] == UNK_142fa007f);
        if ((ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar71[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f53c2;
          goto LAB_1406f53d8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar34[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar34[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar34[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar34[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar34[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar34[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar34[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar34[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar34[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar34[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar34[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar34[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar34[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar34[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar34[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar34[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f53c2:
  pdb_1410a87b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f53d8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x21f408aab6a4d786;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar72[0] = -(*pcVar1 == DAT_142e341c0);
      auVar72[1] = -(pcVar1[1] == DAT_142e341c0._1_1_);
      auVar72[2] = -(pcVar1[2] == DAT_142e341c0._2_1_);
      auVar72[3] = -(pcVar1[3] == DAT_142e341c0._3_1_);
      auVar72[4] = -(pcVar1[4] == DAT_142e341c0._4_1_);
      auVar72[5] = -(pcVar1[5] == DAT_142e341c0._5_1_);
      auVar72[6] = -(pcVar1[6] == DAT_142e341c0._6_1_);
      auVar72[7] = -(pcVar1[7] == DAT_142e341c0._7_1_);
      auVar72[8] = -(pcVar1[8] == DAT_142e341c0._8_1_);
      auVar72[9] = -(pcVar1[9] == DAT_142e341c0._9_1_);
      auVar72[10] = -(pcVar1[10] == DAT_142e341c0._10_1_);
      auVar72[0xb] = -(pcVar1[0xb] == DAT_142e341c0._11_1_);
      auVar72[0xc] = -(pcVar1[0xc] == DAT_142e341c0._12_1_);
      auVar72[0xd] = -(pcVar1[0xd] == DAT_142e341c0._13_1_);
      auVar72[0xe] = -(pcVar1[0xe] == DAT_142e341c0._14_1_);
      auVar72[0xf] = -(pcVar1[0xf] == DAT_142e341c0._15_1_);
      uVar16 = (ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar73[0] = -(*pcVar2 == DAT_142fa0080);
        auVar73[1] = -(pcVar2[1] == UNK_142fa0081);
        auVar73[2] = -(pcVar2[2] == UNK_142fa0082);
        auVar73[3] = -(pcVar2[3] == UNK_142fa0083);
        auVar73[4] = -(pcVar2[4] == UNK_142fa0084);
        auVar73[5] = -(pcVar2[5] == UNK_142fa0085);
        auVar73[6] = -(pcVar2[6] == UNK_142fa0086);
        auVar73[7] = -(pcVar2[7] == UNK_142fa0087);
        auVar73[8] = -(pcVar2[8] == UNK_142fa0088);
        auVar73[9] = -(pcVar2[9] == UNK_142fa0089);
        auVar73[10] = -(pcVar2[10] == UNK_142fa008a);
        auVar73[0xb] = -(pcVar2[0xb] == UNK_142fa008b);
        auVar73[0xc] = -(pcVar2[0xc] == UNK_142fa008c);
        auVar73[0xd] = -(pcVar2[0xd] == UNK_142fa008d);
        auVar73[0xe] = -(pcVar2[0xe] == UNK_142fa008e);
        auVar73[0xf] = -(pcVar2[0xf] == UNK_142fa008f);
        if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar73[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f54b2;
          goto LAB_1406f54ba;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar35[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar35[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar35[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar35[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar35[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar35[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar35[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar35[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar35[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar35[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar35[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar35[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar35[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar35[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar35[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar35[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f54b2:
  pdb_1410a4bb0(lVar9);
LAB_1406f54ba:
  if (*(longlong *)(lVar9 + 0x88) != 0) {
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0x7b1ebcdbbcc51417;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar5;
    in_XMM1_Bb = (char)((uint)iVar5 >> 8);
    in_XMM1_Bc = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar5;
    in_XMM1_Bf = (char)((uint)iVar5 >> 8);
    in_XMM1_Bg = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar5;
    in_XMM1_Bj = (char)((uint)iVar5 >> 8);
    in_XMM1_Bk = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar5;
    in_XMM1_Bn = (char)((uint)iVar5 >> 8);
    in_XMM1_Bo = (char)((uint)iVar5 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar74[0] = -(*pcVar1 == DAT_142e34460);
      auVar74[1] = -(pcVar1[1] == DAT_142e34460._1_1_);
      auVar74[2] = -(pcVar1[2] == DAT_142e34460._2_1_);
      auVar74[3] = -(pcVar1[3] == DAT_142e34460._3_1_);
      auVar74[4] = -(pcVar1[4] == DAT_142e34460._4_1_);
      auVar74[5] = -(pcVar1[5] == DAT_142e34460._5_1_);
      auVar74[6] = -(pcVar1[6] == DAT_142e34460._6_1_);
      auVar74[7] = -(pcVar1[7] == DAT_142e34460._7_1_);
      auVar74[8] = -(pcVar1[8] == DAT_142e34460._8_1_);
      auVar74[9] = -(pcVar1[9] == DAT_142e34460._9_1_);
      auVar74[10] = -(pcVar1[10] == DAT_142e34460._10_1_);
      auVar74[0xb] = -(pcVar1[0xb] == DAT_142e34460._11_1_);
      auVar74[0xc] = -(pcVar1[0xc] == DAT_142e34460._12_1_);
      auVar74[0xd] = -(pcVar1[0xd] == DAT_142e34460._13_1_);
      auVar74[0xe] = -(pcVar1[0xe] == DAT_142e34460._14_1_);
      auVar74[0xf] = -(pcVar1[0xf] == DAT_142e34460._15_1_);
      uVar16 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar75[0] = -(*pcVar2 == DAT_142fa0090);
        auVar75[1] = -(pcVar2[1] == UNK_142fa0091);
        auVar75[2] = -(pcVar2[2] == UNK_142fa0092);
        auVar75[3] = -(pcVar2[3] == UNK_142fa0093);
        auVar75[4] = -(pcVar2[4] == UNK_142fa0094);
        auVar75[5] = -(pcVar2[5] == UNK_142fa0095);
        auVar75[6] = -(pcVar2[6] == UNK_142fa0096);
        auVar75[7] = -(pcVar2[7] == UNK_142fa0097);
        auVar75[8] = -(pcVar2[8] == UNK_142fa0098);
        auVar75[9] = -(pcVar2[9] == UNK_142fa0099);
        auVar75[10] = -(pcVar2[10] == UNK_142fa009a);
        auVar75[0xb] = -(pcVar2[0xb] == UNK_142fa009b);
        auVar75[0xc] = -(pcVar2[0xc] == UNK_142fa009c);
        auVar75[0xd] = -(pcVar2[0xd] == UNK_142fa009d);
        auVar75[0xe] = -(pcVar2[0xe] == UNK_142fa009e);
        auVar75[0xf] = -(pcVar2[0xf] == UNK_142fa009f);
        if ((ushort)((ushort)(SUB161(auVar75 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar75[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f55a2;
          goto LAB_1406f55b8;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar36[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar36[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar36[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar36[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar36[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar36[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar36[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar36[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar36[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar36[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar36[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar36[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar36[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar36[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar36[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar36[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f55a2:
  pdb_1410a21b0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1406f55b8:
    lVar13 = *(longlong *)(lVar9 + 0x70);
    uVar11 = 0xae451c6e6253f5ec;
    lVar14 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar11);
      auVar76[0] = -(*pcVar1 == DAT_142e34200);
      auVar76[1] = -(pcVar1[1] == DAT_142e34200._1_1_);
      auVar76[2] = -(pcVar1[2] == DAT_142e34200._2_1_);
      auVar76[3] = -(pcVar1[3] == DAT_142e34200._3_1_);
      auVar76[4] = -(pcVar1[4] == DAT_142e34200._4_1_);
      auVar76[5] = -(pcVar1[5] == DAT_142e34200._5_1_);
      auVar76[6] = -(pcVar1[6] == DAT_142e34200._6_1_);
      auVar76[7] = -(pcVar1[7] == DAT_142e34200._7_1_);
      auVar76[8] = -(pcVar1[8] == DAT_142e34200._8_1_);
      auVar76[9] = -(pcVar1[9] == DAT_142e34200._9_1_);
      auVar76[10] = -(pcVar1[10] == DAT_142e34200._10_1_);
      auVar76[0xb] = -(pcVar1[0xb] == DAT_142e34200._11_1_);
      auVar76[0xc] = -(pcVar1[0xc] == DAT_142e34200._12_1_);
      auVar76[0xd] = -(pcVar1[0xd] == DAT_142e34200._13_1_);
      auVar76[0xe] = -(pcVar1[0xe] == DAT_142e34200._14_1_);
      auVar76[0xf] = -(pcVar1[0xf] == DAT_142e34200._15_1_);
      uVar16 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe | (ushort)(auVar76[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar11 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar77[0] = -(*pcVar2 == DAT_142fa00a0);
        auVar77[1] = -(pcVar2[1] == UNK_142fa00a1);
        auVar77[2] = -(pcVar2[2] == UNK_142fa00a2);
        auVar77[3] = -(pcVar2[3] == UNK_142fa00a3);
        auVar77[4] = -(pcVar2[4] == UNK_142fa00a4);
        auVar77[5] = -(pcVar2[5] == UNK_142fa00a5);
        auVar77[6] = -(pcVar2[6] == UNK_142fa00a6);
        auVar77[7] = -(pcVar2[7] == UNK_142fa00a7);
        auVar77[8] = -(pcVar2[8] == UNK_142fa00a8);
        auVar77[9] = -(pcVar2[9] == UNK_142fa00a9);
        auVar77[10] = -(pcVar2[10] == UNK_142fa00aa);
        auVar77[0xb] = -(pcVar2[0xb] == UNK_142fa00ab);
        auVar77[0xc] = -(pcVar2[0xc] == UNK_142fa00ac);
        auVar77[0xd] = -(pcVar2[0xd] == UNK_142fa00ad);
        auVar77[0xe] = -(pcVar2[0xe] == UNK_142fa00ae);
        auVar77[0xf] = -(pcVar2[0xf] == UNK_142fa00af);
        if ((ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar77[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar11) ||
              (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar11 * 0x40) == 0))
          goto LAB_1406f5692;
          goto LAB_1406f569a;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar37[0] = -(*pcVar1 == (char)iVar5);
      auVar37[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
      auVar37[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar37[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar37[4] = -(pcVar1[4] == (char)iVar6);
      auVar37[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
      auVar37[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar37[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
      auVar37[8] = -(pcVar1[8] == (char)iVar7);
      auVar37[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
      auVar37[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar37[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar37[0xc] = -(pcVar1[0xc] == (char)iVar8);
      auVar37[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
      auVar37[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar37[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0) ||
          auVar37[0xf] < '\0') break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406f5692:
  pdb_1410a45b0(lVar9);
LAB_1406f569a:
  pdb_1410a9b10(param_1);
  pdb_1410af0c0(&uStack_178);
  uStack_1e8 = 0x11;
  puVar12 = &uStack_1e8;
  uVar10 = pdb_1410afa00(_DAT_143ca8dd0,puVar12,&UNK_143283d00);
  pdb_140676be0(&uStack_178,uVar10,puVar12);
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
  uStack_88 = (undefined1)uStack_168;
  uStack_87 = uStack_168._1_1_;
  uStack_86 = uStack_168._2_1_;
  uStack_85 = uStack_168._3_1_;
  uStack_84 = uStack_168._4_1_;
  uStack_83 = uStack_168._5_1_;
  uStack_82 = uStack_168._6_1_;
  uStack_81 = uStack_168._7_1_;
  uStack_80 = (undefined1)uStack_160;
  uStack_7f = uStack_160._1_1_;
  uStack_7e = uStack_160._2_1_;
  uStack_7d = uStack_160._3_1_;
  uStack_7c = uStack_160._4_1_;
  uStack_7b = uStack_160._5_1_;
  uStack_7a = uStack_160._6_1_;
  uStack_79 = uStack_160._7_1_;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  pdb_1410a9940(param_1,&uStack_98);
  pdb_1410af380(&uStack_178,0x23,&UNK_142fa00d0);
  puVar12 = &uStack_21;
  uVar10 = pdb_1410afa00(_DAT_143ca8dd0,puVar12,&UNK_143285408);
  pdb_140676ae0(&uStack_178,uVar10,puVar12);
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
  uStack_88 = (undefined1)uStack_168;
  uStack_87 = uStack_168._1_1_;
  uStack_86 = uStack_168._2_1_;
  uStack_85 = uStack_168._3_1_;
  uStack_84 = uStack_168._4_1_;
  uStack_83 = uStack_168._5_1_;
  uStack_82 = uStack_168._6_1_;
  uStack_81 = uStack_168._7_1_;
  uStack_80 = (undefined1)uStack_160;
  uStack_7f = uStack_160._1_1_;
  uStack_7e = uStack_160._2_1_;
  uStack_7d = uStack_160._3_1_;
  uStack_7c = uStack_160._4_1_;
  uStack_7b = uStack_160._5_1_;
  uStack_7a = uStack_160._6_1_;
  uStack_79 = uStack_160._7_1_;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  pdb_1410a9940(param_1,&uStack_98);
  pdb_1410b33c0(&uStack_178,0x13,&UNK_142fa00e8);
  puVar12 = &uStack_21;
  uVar10 = pdb_1410afa00(_DAT_143ca8dd0,puVar12,&UNK_143286048);
  pdb_1406769e0(&uStack_178,uVar10,puVar12);
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
  uStack_88 = (undefined1)uStack_168;
  uStack_87 = uStack_168._1_1_;
  uStack_86 = uStack_168._2_1_;
  uStack_85 = uStack_168._3_1_;
  uStack_84 = uStack_168._4_1_;
  uStack_83 = uStack_168._5_1_;
  uStack_82 = uStack_168._6_1_;
  uStack_81 = uStack_168._7_1_;
  uStack_80 = (undefined1)uStack_160;
  uStack_7f = uStack_160._1_1_;
  uStack_7e = uStack_160._2_1_;
  uStack_7d = uStack_160._3_1_;
  uStack_7c = uStack_160._4_1_;
  uStack_7b = uStack_160._5_1_;
  uStack_7a = uStack_160._6_1_;
  uStack_79 = uStack_160._7_1_;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  puVar12 = &uStack_21;
  uVar10 = pdb_1410afa00(_DAT_143ca8dd0,puVar12,&UNK_1432856a8);
  pdb_140676ae0(&uStack_98,uVar10,puVar12);
  uStack_118 = uStack_38;
  uStack_110 = uStack_30;
  uStack_128 = uStack_48;
  uStack_120 = uStack_40;
  uStack_138 = uStack_58;
  uStack_130 = uStack_50;
  uStack_148 = uStack_68;
  uStack_140 = uStack_60;
  uStack_158 = uStack_78;
  uStack_150 = uStack_70;
  uStack_168._0_2_ = CONCAT11(uStack_87,uStack_88);
  uStack_168._0_3_ = CONCAT12(uStack_86,(undefined2)uStack_168);
  uStack_168._0_4_ = CONCAT13(uStack_85,(undefined3)uStack_168);
  uStack_168._0_5_ = CONCAT14(uStack_84,(undefined4)uStack_168);
  uStack_168._0_6_ = CONCAT15(uStack_83,(undefined5)uStack_168);
  uStack_168._0_7_ = CONCAT16(uStack_82,(undefined6)uStack_168);
  uStack_168 = CONCAT17(uStack_81,(undefined7)uStack_168);
  uStack_160._0_2_ = CONCAT11(uStack_7f,uStack_80);
  uStack_160._0_3_ = CONCAT12(uStack_7e,(undefined2)uStack_160);
  uStack_160._0_4_ = CONCAT13(uStack_7d,(undefined3)uStack_160);
  uStack_160._0_5_ = CONCAT14(uStack_7c,(undefined4)uStack_160);
  uStack_160._0_6_ = CONCAT15(uStack_7b,(undefined5)uStack_160);
  uStack_160._0_7_ = CONCAT16(uStack_7a,(undefined6)uStack_160);
  uStack_160 = CONCAT17(uStack_79,(undefined7)uStack_160);
  uStack_178 = uStack_98;
  uStack_170 = uStack_90;
  pdb_1410a9940(param_1,&uStack_178);
  pdb_1410b5520(&uStack_258,0x28,&UNK_142fa0100);
  pdb_1410b6dd0(&uStack_178);
  pdb_1410b0450(&uStack_98,&uStack_178);
  uStack_178 = uStack_98;
  uStack_170 = uStack_90;
  uStack_168._0_2_ = CONCAT11(uStack_87,uStack_88);
  uStack_168._0_3_ = CONCAT12(uStack_86,(undefined2)uStack_168);
  uStack_168._0_4_ = CONCAT13(uStack_85,(undefined3)uStack_168);
  uStack_168._0_5_ = CONCAT14(uStack_84,(undefined4)uStack_168);
  uStack_168._0_6_ = CONCAT15(uStack_83,(undefined5)uStack_168);
  uStack_168._0_7_ = CONCAT16(uStack_82,(undefined6)uStack_168);
  uStack_168 = CONCAT17(uStack_81,(undefined7)uStack_168);
  uStack_160._0_2_ = CONCAT11(uStack_7f,uStack_80);
  uStack_160._0_3_ = CONCAT12(uStack_7e,(undefined2)uStack_160);
  uStack_160._0_4_ = CONCAT13(uStack_7d,(undefined3)uStack_160);
  uStack_160._0_5_ = CONCAT14(uStack_7c,(undefined4)uStack_160);
  uStack_160._0_6_ = CONCAT15(uStack_7b,(undefined5)uStack_160);
  uStack_160._0_7_ = CONCAT16(uStack_7a,(undefined6)uStack_160);
  uStack_160 = CONCAT17(uStack_79,(undefined7)uStack_160);
  uStack_158 = uStack_78;
  uStack_150 = uStack_70;
  uStack_148 = uStack_68;
  uStack_140 = uStack_60;
  uStack_138 = uStack_58;
  uStack_130 = uStack_50;
  uStack_128 = uStack_48;
  uStack_120 = uStack_40;
  uStack_118 = uStack_38;
  uStack_110 = uStack_30;
  pdb_1410b09e0(&uStack_1e8,&uStack_178);
  pdb_1410bbbe0(&uStack_98);
  uStack_118 = uStack_188;
  uStack_110 = uStack_180;
  uStack_128 = uStack_198;
  uStack_120 = uStack_190;
  uStack_138 = uStack_1a8;
  uStack_130 = uStack_1a0;
  uStack_178 = CONCAT71(uStack_1e7,uStack_1e8);
  uStack_148 = uStack_1b8;
  uStack_140 = uStack_1b0;
  uStack_158 = uStack_1c8;
  uStack_150 = uStack_1c0;
  uStack_168 = uStack_1d8;
  uStack_160 = uStack_1d0;
  uStack_170 = uStack_1e0;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_f8._0_2_ = CONCAT11(uStack_87,uStack_88);
  uStack_f8._0_3_ = CONCAT12(uStack_86,(undefined2)uStack_f8);
  uStack_f8._0_4_ = CONCAT13(uStack_85,(undefined3)uStack_f8);
  uStack_f8._0_5_ = CONCAT14(uStack_84,(undefined4)uStack_f8);
  uStack_f8._0_6_ = CONCAT15(uStack_83,(undefined5)uStack_f8);
  uStack_f8._0_7_ = CONCAT16(uStack_82,(undefined6)uStack_f8);
  uStack_f8 = CONCAT17(uStack_81,(undefined7)uStack_f8);
  uStack_f0._0_2_ = CONCAT11(uStack_7f,uStack_80);
  uStack_f0._0_3_ = CONCAT12(uStack_7e,(undefined2)uStack_f0);
  uStack_f0._0_4_ = CONCAT13(uStack_7d,(undefined3)uStack_f0);
  uStack_f0._0_5_ = CONCAT14(uStack_7c,(undefined4)uStack_f0);
  uStack_f0._0_6_ = CONCAT15(uStack_7b,(undefined5)uStack_f0);
  uStack_f0._0_7_ = CONCAT16(uStack_7a,(undefined6)uStack_f0);
  uStack_f0 = CONCAT17(uStack_79,(undefined7)uStack_f0);
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  pdb_1410b0650(&uStack_2c8,&uStack_178);
  pdb_1410be300(&uStack_1e8);
  pdb_1410c0da0(&uStack_98);
  uStack_118 = uStack_188;
  uStack_110 = uStack_180;
  uStack_128 = uStack_198;
  uStack_120 = uStack_190;
  uStack_138 = uStack_1a8;
  uStack_130 = uStack_1a0;
  uStack_178 = CONCAT71(uStack_1e7,uStack_1e8);
  uStack_148 = uStack_1b8;
  uStack_140 = uStack_1b0;
  uStack_158 = uStack_1c8;
  uStack_150 = uStack_1c0;
  uStack_168 = uStack_1d8;
  uStack_160 = uStack_1d0;
  uStack_170 = uStack_1e0;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_f8._0_2_ = CONCAT11(uStack_87,uStack_88);
  uStack_f8._0_3_ = CONCAT12(uStack_86,(undefined2)uStack_f8);
  uStack_f8._0_4_ = CONCAT13(uStack_85,(undefined3)uStack_f8);
  uStack_f8._0_5_ = CONCAT14(uStack_84,(undefined4)uStack_f8);
  uStack_f8._0_6_ = CONCAT15(uStack_83,(undefined5)uStack_f8);
  uStack_f8._0_7_ = CONCAT16(uStack_82,(undefined6)uStack_f8);
  uStack_f8 = CONCAT17(uStack_81,(undefined7)uStack_f8);
  uStack_f0._0_2_ = CONCAT11(uStack_7f,uStack_80);
  uStack_f0._0_3_ = CONCAT12(uStack_7e,(undefined2)uStack_f0);
  uStack_f0._0_4_ = CONCAT13(uStack_7d,(undefined3)uStack_f0);
  uStack_f0._0_5_ = CONCAT14(uStack_7c,(undefined4)uStack_f0);
  uStack_f0._0_6_ = CONCAT15(uStack_7b,(undefined5)uStack_f0);
  uStack_f0._0_7_ = CONCAT16(uStack_7a,(undefined6)uStack_f0);
  uStack_f0 = CONCAT17(uStack_79,(undefined7)uStack_f0);
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  pdb_1410b0df0(&uStack_98,&uStack_178);
  uStack_178 = uStack_2c8;
  uStack_170 = uStack_2c0;
  uStack_168 = uStack_2b8;
  uStack_160 = uStack_2b0;
  uStack_158 = uStack_2a8;
  uStack_150 = uStack_2a0;
  uStack_148 = uStack_298;
  uStack_140 = uStack_290;
  uStack_138 = uStack_288;
  uStack_130 = uStack_280;
  uStack_128 = uStack_278;
  uStack_120 = uStack_270;
  uStack_118 = uStack_268;
  uStack_110 = uStack_260;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_f8._0_2_ = CONCAT11(uStack_87,uStack_88);
  uStack_f8._0_3_ = CONCAT12(uStack_86,(undefined2)uStack_f8);
  uStack_f8._0_4_ = CONCAT13(uStack_85,(undefined3)uStack_f8);
  uStack_f8._0_5_ = CONCAT14(uStack_84,(undefined4)uStack_f8);
  uStack_f8._0_6_ = CONCAT15(uStack_83,(undefined5)uStack_f8);
  uStack_f8._0_7_ = CONCAT16(uStack_82,(undefined6)uStack_f8);
  uStack_f8 = CONCAT17(uStack_81,(undefined7)uStack_f8);
  uStack_f0._0_2_ = CONCAT11(uStack_7f,uStack_80);
  uStack_f0._0_3_ = CONCAT12(uStack_7e,(undefined2)uStack_f0);
  uStack_f0._0_4_ = CONCAT13(uStack_7d,(undefined3)uStack_f0);
  uStack_f0._0_5_ = CONCAT14(uStack_7c,(undefined4)uStack_f0);
  uStack_f0._0_6_ = CONCAT15(uStack_7b,(undefined5)uStack_f0);
  uStack_f0._0_7_ = CONCAT16(uStack_7a,(undefined6)uStack_f0);
  uStack_f0 = CONCAT17(uStack_79,(undefined7)uStack_f0);
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  pdb_1410b0df0(&uStack_98,&uStack_178);
  uStack_1e8 = 0x1f;
  puVar12 = &uStack_1e8;
  uVar10 = pdb_1410afa00(_DAT_143ca8dd0,puVar12,&UNK_143283d00);
  pdb_140676be0(&uStack_98,uVar10,puVar12);
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_f8 = CONCAT17(uStack_81,
                       CONCAT16(uStack_82,
                                CONCAT15(uStack_83,
                                         CONCAT14(uStack_84,
                                                  CONCAT13(uStack_85,
                                                           CONCAT12(uStack_86,
                                                                    CONCAT11(uStack_87,uStack_88))))
                                        )));
  uStack_f0 = CONCAT17(uStack_79,
                       CONCAT16(uStack_7a,
                                CONCAT15(uStack_7b,
                                         CONCAT14(uStack_7c,
                                                  CONCAT13(uStack_7d,
                                                           CONCAT12(uStack_7e,
                                                                    CONCAT11(uStack_7f,uStack_80))))
                                        )));
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_178 = uStack_258;
  uStack_170 = uStack_250;
  uStack_158 = uStack_238;
  uStack_150 = uStack_230;
  uStack_148 = uStack_228;
  uStack_140 = uStack_220;
  uStack_138 = uStack_218;
  uStack_130 = uStack_210;
  uStack_128 = uStack_208;
  uStack_120 = uStack_200;
  uStack_118 = uStack_1f8;
  uStack_110 = uStack_1f0;
  pdb_1410a9c50(param_1,&uStack_178);
  return param_1;
}

