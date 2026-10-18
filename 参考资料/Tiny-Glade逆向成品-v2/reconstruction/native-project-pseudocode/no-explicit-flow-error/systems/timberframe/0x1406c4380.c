// VA 0x1406c4380, PDB extent 501 bytes
// timberframe::impl$0::add_timberframe
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: timberframe::impl$0::add_timberframe
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/lib.rs
   Extent: 501 */

undefined8 pdb_1406c4380(undefined8 param_1)

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
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
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
  uVar10 = pdb_140fe2b60(param_1,0);
  auStack_98 = (undefined1  [16])0x0;
  uStack_88 = 0;
  lVar11 = pdb_140fe26c0(uVar10,auStack_98);
  if (*(longlong *)(lVar11 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar11 + 0x70);
    uVar13 = 0x738f08a0fd855956;
    lVar14 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar13 = uVar13 & *(ulonglong *)(lVar11 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar13);
      auVar19[0] = -(*pcVar1 == DAT_142e647c0);
      auVar19[1] = -(pcVar1[1] == DAT_142e647c0._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e647c0._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e647c0._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e647c0._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e647c0._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e647c0._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e647c0._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e647c0._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e647c0._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e647c0._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e647c0._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e647c0._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e647c0._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e647c0._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e647c0._15_1_);
      uVar16 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar17 = uVar4 + uVar13 & *(ulonglong *)(lVar11 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar17 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_142f99050);
        auVar20[1] = -(pcVar2[1] == UNK_142f99051);
        auVar20[2] = -(pcVar2[2] == UNK_142f99052);
        auVar20[3] = -(pcVar2[3] == UNK_142f99053);
        auVar20[4] = -(pcVar2[4] == UNK_142f99054);
        auVar20[5] = -(pcVar2[5] == UNK_142f99055);
        auVar20[6] = -(pcVar2[6] == UNK_142f99056);
        auVar20[7] = -(pcVar2[7] == UNK_142f99057);
        auVar20[8] = -(pcVar2[8] == UNK_142f99058);
        auVar20[9] = -(pcVar2[9] == UNK_142f99059);
        auVar20[10] = -(pcVar2[10] == UNK_142f9905a);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_142f9905b);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_142f9905c);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_142f9905d);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_142f9905e);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_142f9905f);
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
          uVar13 = *(ulonglong *)(lVar3 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar11 + 0x210) <= uVar13) ||
              (uVar13 = *(ulonglong *)(*(longlong *)(lVar11 + 0x208) + uVar13 * 8), uVar13 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar11 + 0x1d8) + 0x20 + ~uVar13 * 0x40) == 0))
          goto LAB_1406c44a2;
          goto LAB_1406c44aa;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar18[0] = -(*pcVar1 == (char)iVar6);
      auVar18[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
      auVar18[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
      auVar18[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
      auVar18[4] = -(pcVar1[4] == (char)iVar7);
      auVar18[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
      auVar18[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
      auVar18[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
      auVar18[8] = -(pcVar1[8] == (char)iVar8);
      auVar18[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
      auVar18[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
      auVar18[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar18[0xc] = -(pcVar1[0xc] == (char)iVar9);
      auVar18[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
      auVar18[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar18[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_1406c44a2:
  pdb_140fe3090(lVar11);
LAB_1406c44aa:
  pdb_140fe3e50(auStack_98);
  uStack_21 = 0x1b;
  puVar12 = &uStack_21;
  uVar10 = pdb_140fe4260(_DAT_143ca8dd0,puVar12,&UNK_14326e7e0);
  pdb_140676be0(auStack_98,uVar10,puVar12);
  uStack_a8 = uStack_38;
  uStack_a0 = uStack_30;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_f8 = (undefined1)uStack_88;
  uStack_f7 = uStack_88._1_1_;
  uStack_f6 = uStack_88._2_1_;
  uStack_f5 = uStack_88._3_1_;
  uStack_f4 = uStack_84;
  uStack_f3 = uStack_83;
  uStack_f2 = uStack_82;
  uStack_f1 = uStack_81;
  uStack_f0 = uStack_80;
  uStack_ef = uStack_7f;
  uStack_ee = uStack_7e;
  uStack_ed = uStack_7d;
  uStack_ec = uStack_7c;
  uStack_eb = uStack_7b;
  uStack_ea = uStack_7a;
  uStack_e9 = uStack_79;
  uStack_108 = auStack_98._0_8_;
  uStack_100 = auStack_98._8_8_;
  pdb_140fe4ca0(param_1,&uStack_108);
  pdb_140fe4e70(param_1,1);
  return param_1;
}

