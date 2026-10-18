// VA 0x140359f50, PDB extent 1646 bytes
// tiny_glade::game_loop::GameLoop::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::game_loop::GameLoop::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
   Extent: 1646 */

longlong pdb_140359f50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      longlong param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      undefined8 *param_13,undefined8 *param_14)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  ulonglong uVar22;
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puStack_890;
  undefined8 uStack_888;
  undefined1 auStack_238 [192];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_159;
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
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_58 = param_12;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_b8 = param_7;
  uStack_b0 = param_8;
  uStack_78 = param_10;
  uStack_70 = param_11;
  uStack_98 = param_3;
  uStack_90 = param_4;
  lStack_60 = param_2;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar16 = *(longlong *)(param_2 + 0x70);
    uVar18 = 0xcda1f14a4c73f628;
    lVar19 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar18 = uVar18 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar16 + uVar18);
      auVar24[0] = -(auVar2[0] == DAT_142e35050);
      auVar24[1] = -(auVar2[1] == DAT_142e35050._1_1_);
      auVar24[2] = -(auVar2[2] == DAT_142e35050._2_1_);
      auVar24[3] = -(auVar2[3] == DAT_142e35050._3_1_);
      auVar24[4] = -(auVar2[4] == DAT_142e35050._4_1_);
      auVar24[5] = -(auVar2[5] == DAT_142e35050._5_1_);
      auVar24[6] = -(auVar2[6] == DAT_142e35050._6_1_);
      auVar24[7] = -(auVar2[7] == DAT_142e35050._7_1_);
      auVar24[8] = -(auVar2[8] == DAT_142e35050._8_1_);
      auVar24[9] = -(auVar2[9] == DAT_142e35050._9_1_);
      auVar24[10] = -(auVar2[10] == DAT_142e35050._10_1_);
      auVar24[0xb] = -(auVar2[0xb] == DAT_142e35050._11_1_);
      auVar24[0xc] = -(auVar2[0xc] == DAT_142e35050._12_1_);
      auVar24[0xd] = -(auVar2[0xd] == DAT_142e35050._13_1_);
      auVar24[0xe] = -(auVar2[0xe] == DAT_142e35050._14_1_);
      auVar24[0xf] = -(auVar2[0xf] == DAT_142e35050._15_1_);
      uVar21 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar22 = uVar3 + uVar18 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar16 + -0x18 + uVar22 * -0x18);
        auVar25[0] = -(*pcVar1 == DAT_142e42300);
        auVar25[1] = -(pcVar1[1] == DAT_142e42300._1_1_);
        auVar25[2] = -(pcVar1[2] == DAT_142e42300._2_1_);
        auVar25[3] = -(pcVar1[3] == DAT_142e42300._3_1_);
        auVar25[4] = -(pcVar1[4] == DAT_142e42300._4_1_);
        auVar25[5] = -(pcVar1[5] == DAT_142e42300._5_1_);
        auVar25[6] = -(pcVar1[6] == DAT_142e42300._6_1_);
        auVar25[7] = -(pcVar1[7] == DAT_142e42300._7_1_);
        auVar25[8] = -(pcVar1[8] == DAT_142e42300._8_1_);
        auVar25[9] = -(pcVar1[9] == DAT_142e42300._9_1_);
        auVar25[10] = -(pcVar1[10] == DAT_142e42300._10_1_);
        auVar25[0xb] = -(pcVar1[0xb] == DAT_142e42300._11_1_);
        auVar25[0xc] = -(pcVar1[0xc] == DAT_142e42300._12_1_);
        auVar25[0xd] = -(pcVar1[0xd] == DAT_142e42300._13_1_);
        auVar25[0xe] = -(pcVar1[0xe] == DAT_142e42300._14_1_);
        auVar25[0xf] = -(pcVar1[0xf] == DAT_142e42300._15_1_);
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
          uVar18 = *(ulonglong *)(lVar16 + uVar22 * -0x18 + -8);
          if ((uVar18 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar18 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar18 * 8), uVar18 != 0)) {
            lVar16 = ~uVar18 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar16) != 0) {
              uStack_64 = **(undefined4 **)(*(longlong *)(param_2 + 0x1d8) + lVar16 + 0x10);
              uStack_49 = 1;
              pdb_140e82f50(&puStack_890,&uStack_70);
              uStack_4a = uStack_888._4_1_;
              pub_142e32760(&puStack_890,lStack_60,0x658);
              uStack_d8 = param_5;
              uStack_d0 = param_6;
              uStack_e8 = param_7;
              uStack_e0 = param_8;
              lVar16 = param_9;
              uStack_c8 = param_3;
              uStack_c0 = param_4;
              pub_142e32760(auStack_238,param_9,0xc0);
              uVar10 = uStack_70;
              uVar9 = uStack_78;
              uStack_f8 = uStack_78;
              uStack_f0 = uStack_70;
              uStack_88 = uStack_58;
              uStack_108 = param_13[0xe];
              uStack_100 = param_13[0xf];
              uStack_118 = param_13[0xc];
              uStack_110 = param_13[0xd];
              uStack_128 = param_13[10];
              uStack_120 = param_13[0xb];
              uStack_138 = param_13[8];
              uStack_130 = param_13[9];
              uStack_178 = *param_13;
              uStack_170 = param_13[1];
              uStack_168 = *(undefined1 *)(param_13 + 2);
              uStack_167 = *(undefined1 *)((longlong)param_13 + 0x11);
              uStack_166 = *(undefined1 *)((longlong)param_13 + 0x12);
              uStack_165 = *(undefined1 *)((longlong)param_13 + 0x13);
              uStack_164 = *(undefined1 *)((longlong)param_13 + 0x14);
              uStack_163 = *(undefined1 *)((longlong)param_13 + 0x15);
              uStack_162 = *(undefined1 *)((longlong)param_13 + 0x16);
              uStack_161 = *(undefined1 *)((longlong)param_13 + 0x17);
              uStack_160 = *(undefined1 *)(param_13 + 3);
              uStack_15f = *(undefined1 *)((longlong)param_13 + 0x19);
              uStack_15e = *(undefined1 *)((longlong)param_13 + 0x1a);
              uStack_15d = *(undefined1 *)((longlong)param_13 + 0x1b);
              uStack_15c = *(undefined1 *)((longlong)param_13 + 0x1c);
              uStack_15b = *(undefined1 *)((longlong)param_13 + 0x1d);
              uStack_15a = *(undefined1 *)((longlong)param_13 + 0x1e);
              uStack_159 = *(undefined1 *)((longlong)param_13 + 0x1f);
              uStack_158 = param_13[4];
              uStack_150 = param_13[5];
              uStack_148 = param_13[6];
              uStack_140 = param_13[7];
              plVar17 = (longlong *)pdb_140f3bda0();
              if ((char)plVar17[2] == '\x01') {
                lVar19 = *plVar17;
                lStack_80 = plVar17[1];
              }
              else {
                lVar19 = pdb_140f4fd10();
                *plVar17 = lVar19;
                plVar17[1] = lVar16;
                *(undefined1 *)(plVar17 + 2) = 1;
                lStack_80 = lVar16;
              }
              *plVar17 = lVar19 + 1;
              pub_142e32760(param_1 + 0xf0,lStack_60,0x658);
              *(undefined8 *)(param_1 + 0xc0) = param_3;
              *(undefined8 *)(param_1 + 200) = param_4;
              *(undefined8 *)(param_1 + 0x7c8) = 0x8000000000000000;
              *(undefined8 *)(param_1 + 0xd0) = param_5;
              *(undefined8 *)(param_1 + 0xd8) = param_6;
              *(undefined8 *)(param_1 + 0xe0) = param_7;
              *(undefined8 *)(param_1 + 0xe8) = param_8;
              pub_142e32760(param_1,param_9,0xc0);
              *(undefined8 *)(param_1 + 0xe00) = uVar9;
              *(undefined8 *)(param_1 + 0xe08) = uVar10;
              *(undefined4 *)(param_1 + 0xe6e) = uStack_64;
              *(undefined1 *)(param_1 + 0xe72) = uStack_4a;
              *(undefined8 *)(param_1 + 0xe40) = uStack_58;
              *(undefined4 *)(param_1 + 0xdf0) = 1000000000;
              *(undefined4 *)(param_1 + 0xdf8) = 0;
              uVar9 = param_13[1];
              uVar10 = param_13[2];
              uVar11 = param_13[3];
              uVar12 = param_13[4];
              uVar13 = param_13[5];
              uVar14 = param_13[6];
              uVar15 = param_13[7];
              *(undefined8 *)(param_1 + 0x748) = *param_13;
              *(undefined8 *)(param_1 + 0x750) = uVar9;
              *(undefined8 *)(param_1 + 0x758) = uVar10;
              *(undefined8 *)(param_1 + 0x760) = uVar11;
              *(undefined8 *)(param_1 + 0x768) = uVar12;
              *(undefined8 *)(param_1 + 0x770) = uVar13;
              *(undefined8 *)(param_1 + 0x778) = uVar14;
              *(undefined8 *)(param_1 + 0x780) = uVar15;
              uVar9 = param_13[9];
              *(undefined8 *)(param_1 + 0x788) = param_13[8];
              *(undefined8 *)(param_1 + 0x790) = uVar9;
              uVar9 = param_13[0xb];
              *(undefined8 *)(param_1 + 0x798) = param_13[10];
              *(undefined8 *)(param_1 + 0x7a0) = uVar9;
              uVar9 = param_13[0xd];
              *(undefined8 *)(param_1 + 0x7a8) = param_13[0xc];
              *(undefined8 *)(param_1 + 0x7b0) = uVar9;
              uVar9 = param_13[0xf];
              *(undefined8 *)(param_1 + 0x7b8) = param_13[0xe];
              *(undefined8 *)(param_1 + 0x7c0) = uVar9;
              *(undefined2 *)(param_1 + 0xe68) = 0;
              *(undefined8 *)(param_1 + 0xe48) = 0;
              *(undefined8 *)(param_1 + 0xe50) = 0;
              *(undefined1 *)(param_1 + 0xe74) = 1;
              *(undefined4 *)(param_1 + 0xe64) = 0;
              uVar9 = _UNK_142f42fe8;
              *(undefined8 *)(param_1 + 0xe10) = _DAT_142f42fe0;
              *(undefined8 *)(param_1 + 0xe18) = uVar9;
              uVar9 = _UNK_142f42ff8;
              *(undefined8 *)(param_1 + 0xe20) = _DAT_142f42ff0;
              *(undefined8 *)(param_1 + 0xe28) = uVar9;
              *(longlong *)(param_1 + 0xe30) = lVar19;
              *(longlong *)(param_1 + 0xe38) = lStack_80;
              *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_14 + 1);
              *(undefined8 *)(param_1 + 0xe58) = *param_14;
              *(undefined1 *)(param_1 + 0xe75) = 0;
              return param_1;
            }
          }
          goto LAB_14035a3df;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar23[0] = -(auVar2[0] == (char)iVar5);
      auVar23[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
      auVar23[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
      auVar23[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
      auVar23[4] = -(auVar2[4] == (char)iVar6);
      auVar23[5] = -(auVar2[5] == (char)((uint)iVar6 >> 8));
      auVar23[6] = -(auVar2[6] == (char)((uint)iVar6 >> 0x10));
      auVar23[7] = -(auVar2[7] == (char)((uint)iVar6 >> 0x18));
      auVar23[8] = -(auVar2[8] == (char)iVar7);
      auVar23[9] = -(auVar2[9] == (char)((uint)iVar7 >> 8));
      auVar23[10] = -(auVar2[10] == (char)((uint)iVar7 >> 0x10));
      auVar23[0xb] = -(auVar2[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar23[0xc] = -(auVar2[0xc] == (char)iVar8);
      auVar23[0xd] = -(auVar2[0xd] == (char)((uint)iVar8 >> 8));
      auVar23[0xe] = -(auVar2[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar23[0xf] = -(auVar2[0xf] == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_14035a3df:
  puStack_890 = &uStack_4b;
  uStack_888 = pdb_140f33ec0;
  uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f42ec0,&puStack_890,&UNK_142f42c68);
}

