// VA 0x141c35990, PDB extent 4972 bytes
// turbosloth::store::DiskStore::open
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::open
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 4972 */

undefined8 * pdb_141c35990(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined6 uStack_678;
  undefined2 uStack_672;
  undefined6 uStack_670;
  undefined2 uStack_66a;
  undefined6 uStack_668;
  undefined2 uStack_662;
  undefined6 uStack_660;
  undefined2 uStack_65a;
  undefined6 uStack_658;
  undefined2 uStack_652;
  longlong alStack_638 [2];
  undefined8 uStack_628;
  char cStack_41b;
  undefined2 uStack_41a;
  undefined8 uStack_418;
  undefined8 uStack_410;
  byte *pbStack_408;
  byte *pbStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_1bb;
  undefined2 uStack_1ba;
  undefined8 uStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *apbStack_190 [7];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong *aplStack_118 [2];
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_418 = (byte *)CONCAT71(uStack_418._1_7_,1);
  lVar5 = pdb_140f46c40(&uStack_418);
  if (lVar5 != 0) {
    param_1[1] = lVar5;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pdb_140f3e9e0(&uStack_108,param_2,param_3,&UNK_14339ef24,10);
  uVar1 = uStack_f8;
  pbVar6 = pbStack_100;
  pdb_140f4f620(&uStack_418,pbStack_100,uStack_f8);
  uStack_66a = (undefined2)((ulonglong)uStack_410 >> 0x30);
  uStack_670 = SUB86(uStack_410,0);
  if ((int)uStack_418 == 2) {
    uStack_678 = 2;
    uStack_672 = 0;
LAB_141c35a99:
    bVar8 = true;
    pdb_1404b38e0(&uStack_670);
  }
  else {
    uStack_678 = SUB86(uStack_418,0);
    uStack_672 = (undefined2)((ulonglong)uStack_418 >> 0x30);
    uStack_628 = uStack_3c8;
    alStack_638[0] = CONCAT44(uStack_3d4,uStack_3d8);
    uStack_658 = (undefined6)CONCAT44(uStack_3f4,uStack_3f8);
    uStack_652 = (undefined2)((uint)uStack_3f4 >> 0x10);
    uStack_668 = SUB86(pbStack_408,0);
    uStack_662 = (undefined2)((ulonglong)pbStack_408 >> 0x30);
    uStack_660 = SUB86(pbStack_400,0);
    uStack_65a = (undefined2)((ulonglong)pbStack_400 >> 0x30);
    if (uStack_418 == (byte *)0x2) goto LAB_141c35a99;
    bVar8 = false;
  }
  pdb_142624890(&uStack_678,pbVar6,uVar1);
  if (CONCAT26(uStack_672,uStack_678) == -0x7ffffffffffffff7) {
    pbStack_68 = (byte *)CONCAT26(uStack_66a,uStack_670);
    pbStack_60 = (byte *)CONCAT26(uStack_662,uStack_668);
    if (bVar8) {
LAB_141c35ae5:
      uStack_49 = 1;
      pdb_14256be90(&uStack_418,&pbStack_68);
      pbVar7 = uStack_418;
      if (cStack_1bb == '\x02') {
        pbStack_198 = pbStack_408;
        pbStack_1a8 = uStack_418;
        pbStack_1a0 = uStack_410;
        pdb_14007ee60();
        pbVar6 = pub_1406abab0(0x18,8);
        if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x18);
        }
        *(byte **)(pbVar6 + 0x10) = pbStack_408;
        *(byte **)pbVar6 = uStack_418;
        *(byte **)(pbVar6 + 8) = uStack_410;
        uStack_49 = 1;
        pbVar7 = (byte *)pdb_140f3fdf0(0x28,pbVar6,&UNK_143557910);
      }
      else {
        pub_142e32760(&uStack_670,&uStack_410,0x255);
        uStack_678 = SUB86(pbVar7,0);
        uStack_672 = (undefined2)((ulonglong)pbVar7 >> 0x30);
        cStack_41b = cStack_1bb;
        uStack_41a = uStack_1ba;
        uStack_4a = 1;
        pdb_1425e6c10(&uStack_418,&uStack_678,&UNK_14339ee6f,6,&UNK_14339ee78);
        auVar10[0] = -((char)uStack_418 == DAT_14300c7d0);
        auVar10[1] = -(uStack_418._1_1_ == UNK_14300c7d1);
        auVar10[2] = -(uStack_418._2_1_ == UNK_14300c7d2);
        auVar10[3] = -(uStack_418._3_1_ == UNK_14300c7d3);
        auVar10[4] = -(uStack_418._4_1_ == UNK_14300c7d4);
        auVar10[5] = -(uStack_418._5_1_ == UNK_14300c7d5);
        auVar10[6] = -(uStack_418._6_1_ == UNK_14300c7d6);
        auVar10[7] = -(uStack_418._7_1_ == UNK_14300c7d7);
        auVar10[8] = -((char)uStack_410 == UNK_14300c7d8);
        auVar10[9] = -(uStack_410._1_1_ == UNK_14300c7d9);
        auVar10[10] = -(uStack_410._2_1_ == UNK_14300c7da);
        auVar10[0xb] = -(uStack_410._3_1_ == UNK_14300c7db);
        auVar10[0xc] = -(uStack_410._4_1_ == UNK_14300c7dc);
        auVar10[0xd] = -(uStack_410._5_1_ == UNK_14300c7dd);
        auVar10[0xe] = -(uStack_410._6_1_ == UNK_14300c7de);
        auVar10[0xf] = -(uStack_410._7_1_ == UNK_14300c7df);
        if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
          uStack_98 = uStack_3b8;
          uStack_a8 = uStack_3c8;
          uStack_a0 = uStack_3c0;
          uStack_d8 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
          uStack_d0 = (byte *)CONCAT44(uStack_3ec,uStack_3f0);
          pbStack_e8 = pbStack_408;
          pbStack_e0 = pbStack_400;
          pdb_14007ee60();
          pbVar6 = pub_1406abab0(0x58,8);
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x58);
          }
          *(undefined8 *)(pbVar6 + 0x50) = uStack_3b8;
          *(undefined8 *)(pbVar6 + 0x40) = uStack_3c8;
          *(undefined8 *)(pbVar6 + 0x48) = uStack_3c0;
          *(undefined4 *)(pbVar6 + 0x30) = uStack_3d8;
          *(undefined4 *)(pbVar6 + 0x34) = uStack_3d4;
          *(undefined4 *)(pbVar6 + 0x38) = uStack_3d0;
          *(undefined4 *)(pbVar6 + 0x3c) = uStack_3cc;
          *(undefined4 *)(pbVar6 + 0x20) = uStack_3e8;
          *(undefined4 *)(pbVar6 + 0x24) = uStack_3e4;
          *(undefined4 *)(pbVar6 + 0x28) = uStack_3e0;
          *(undefined4 *)(pbVar6 + 0x2c) = uStack_3dc;
          *(undefined4 *)(pbVar6 + 0x10) = uStack_3f8;
          *(undefined4 *)(pbVar6 + 0x14) = uStack_3f4;
          *(undefined4 *)(pbVar6 + 0x18) = uStack_3f0;
          *(undefined4 *)(pbVar6 + 0x1c) = uStack_3ec;
          *(byte **)pbVar6 = pbStack_408;
          *(byte **)(pbVar6 + 8) = pbStack_400;
          uStack_4a = 1;
          pbVar7 = (byte *)pdb_140f3fdf0(0x28,pbVar6,&UNK_143557988);
        }
        else {
          apbStack_190[0] = pbStack_400;
          uStack_158 = uStack_3c8;
          uStack_150 = uStack_3c0;
          uStack_148 = uStack_3b8;
          uStack_140 = uStack_3b0;
          uStack_138 = uStack_3a8;
          uStack_130 = uStack_3a0;
          pbStack_1a8 = uStack_418;
          pbStack_1a0 = uStack_410;
          pbStack_198 = pbStack_408;
          pbStack_88 = &UNK_14339ee90;
          pbStack_80 = (byte *)0x7;
          uStack_1b0 = 0xd;
          pdb_1426229b0(&uStack_418,&pbStack_1a8,&pbStack_88,&uStack_1b0);
          if (uStack_418 == (byte *)0x4) {
            pbStack_78 = pbStack_400;
            pbStack_88 = uStack_410;
            pbStack_80 = pbStack_408;
            pbVar7 = (byte *)pdb_1426200d0(&pbStack_88);
            uStack_4a = 1;
            pdb_141ac4ad0(&pbStack_1a8);
          }
          else {
            uStack_d8 = pbStack_408;
            uStack_d0 = pbStack_400;
            uStack_a8 = CONCAT44(uStack_3d4,uStack_3d8);
            uStack_a0 = CONCAT44(uStack_3cc,uStack_3d0);
            uStack_98 = uStack_3c8;
            uStack_90 = uStack_3c0;
            pbStack_e8 = uStack_418;
            pbStack_e0 = uStack_410;
            if (uStack_418 != (byte *)0x3) {
              pdb_141ac4dd0(&pbStack_e8);
            }
            uStack_4a = 1;
            pdb_141ac4ad0(&pbStack_1a8);
            uStack_4a = 1;
            pdb_1425e71d0(&uStack_418,&uStack_678,&UNK_14339ee97,7,&UNK_14339eea0);
            auVar12[0] = -((char)uStack_418 == DAT_14300c7d0);
            auVar12[1] = -(uStack_418._1_1_ == UNK_14300c7d1);
            auVar12[2] = -(uStack_418._2_1_ == UNK_14300c7d2);
            auVar12[3] = -(uStack_418._3_1_ == UNK_14300c7d3);
            auVar12[4] = -(uStack_418._4_1_ == UNK_14300c7d4);
            auVar12[5] = -(uStack_418._5_1_ == UNK_14300c7d5);
            auVar12[6] = -(uStack_418._6_1_ == UNK_14300c7d6);
            auVar12[7] = -(uStack_418._7_1_ == UNK_14300c7d7);
            auVar12[8] = -((char)uStack_410 == UNK_14300c7d8);
            auVar12[9] = -(uStack_410._1_1_ == UNK_14300c7d9);
            auVar12[10] = -(uStack_410._2_1_ == UNK_14300c7da);
            auVar12[0xb] = -(uStack_410._3_1_ == UNK_14300c7db);
            auVar12[0xc] = -(uStack_410._4_1_ == UNK_14300c7dc);
            auVar12[0xd] = -(uStack_410._5_1_ == UNK_14300c7dd);
            auVar12[0xe] = -(uStack_410._6_1_ == UNK_14300c7de);
            auVar12[0xf] = -(uStack_410._7_1_ == UNK_14300c7df);
            if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar12[0xf] >> 7) << 0xf) != 0xffff) {
              apbStack_190[0] = pbStack_400;
              uStack_158 = uStack_3c8;
              uStack_150 = uStack_3c0;
              uStack_148 = uStack_3b8;
              uStack_140 = uStack_3b0;
              uStack_138 = uStack_3a8;
              uStack_130 = uStack_3a0;
              pbStack_1a8 = uStack_418;
              pbStack_1a0 = uStack_410;
              pbStack_198 = pbStack_408;
              uStack_4a = 1;
              pdb_141ac4ad0(&pbStack_1a8);
              pub_142e32760(&uStack_418,&uStack_678,0x260);
              uStack_4a = 0;
              pdb_141ac2fa0(&pbStack_1a8,&uStack_418);
              if (pbStack_1a8 == (byte *)0x8000000000000005) {
                uStack_49 = 1;
                pdb_140f3e9e0(&uStack_418,param_2,param_3,&UNK_14339ef2e,9);
                uStack_49 = 1;
                pbVar7 = (byte *)pdb_1426255a0(&uStack_418);
                if (pbVar7 == (byte *)0x0) {
                  uStack_49 = 1;
                  pdb_140f3e9e0(&uStack_418,param_2,param_3,&UNK_14339ef37,0xd);
                  uStack_49 = 1;
                  pbVar7 = (byte *)pdb_1426255a0(&uStack_418);
                  if (pbVar7 == (byte *)0x0) {
                    uStack_49 = 1;
                    pdb_140f3e010(&pbStack_1a8,param_2,param_3);
                    pbVar2 = pbStack_60;
                    pbVar7 = pbStack_68;
                    pbStack_e8 = pbStack_68;
                    pbStack_e0 = pbStack_60;
                    pdb_142566ea0(&uStack_418);
                    uVar1 = _UNK_1435164b8;
                    uStack_662 = (undefined2)_DAT_1435164b0;
                    uStack_660 = (undefined6)((ulonglong)_DAT_1435164b0 >> 0x10);
                    uStack_65a = (undefined2)_UNK_1435164b8;
                    uStack_658 = (undefined6)((ulonglong)_UNK_1435164b8 >> 0x10);
                    uStack_672 = (undefined2)_DAT_1435164a0;
                    uStack_670 = (undefined6)((ulonglong)_DAT_1435164a0 >> 0x10);
                    uStack_66a = (undefined2)_UNK_1435164a8;
                    uStack_668 = (undefined6)((ulonglong)_UNK_1435164a8 >> 0x10);
                    *param_1 = pbStack_1a8;
                    param_1[1] = pbStack_1a0;
                    param_1[2] = pbStack_198;
                    param_1[3] = apbStack_190[0];
                    param_1[0xc] = CONCAT44(uStack_3e4,uStack_3e8);
                    param_1[10] = CONCAT44(uStack_3f4,uStack_3f8);
                    param_1[0xb] = CONCAT44(uStack_3ec,uStack_3f0);
                    param_1[8] = pbStack_408;
                    param_1[9] = pbStack_400;
                    param_1[6] = uStack_418;
                    param_1[7] = uStack_410;
                    *(undefined2 *)(param_1 + 0xd) = 0;
                    *(ulonglong *)((longlong)param_1 + 0x6a) = CONCAT26(uStack_672,uStack_678);
                    *(ulonglong *)((longlong)param_1 + 0x72) = CONCAT26(uStack_66a,uStack_670);
                    *(ulonglong *)((longlong)param_1 + 0x7a) = CONCAT26(uStack_662,uStack_668);
                    *(ulonglong *)((longlong)param_1 + 0x82) = CONCAT26(uStack_65a,uStack_660);
                    param_1[0x11] = uVar1;
                    param_1[4] = pbVar7;
                    param_1[5] = pbVar2;
                    pbStack_100 = pbVar6;
                    goto joined_r0x000141c361e0;
                  }
                }
              }
              else {
                pbStack_408 = pbStack_198;
                uStack_418 = pbStack_1a8;
                uStack_410 = pbStack_1a0;
                uStack_4a = 0;
                pbVar7 = (byte *)pdb_142620210(&uStack_418);
              }
              goto LAB_141c361b8;
            }
            uStack_98 = uStack_3b8;
            uStack_a8 = uStack_3c8;
            uStack_a0 = uStack_3c0;
            uStack_d8 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
            uStack_d0 = (byte *)CONCAT44(uStack_3ec,uStack_3f0);
            pbStack_e8 = pbStack_408;
            pbStack_e0 = pbStack_400;
            uStack_4a = 1;
            pbVar7 = (byte *)pdb_142620160(&pbStack_e8);
          }
        }
        uStack_49 = 1;
        pdb_141ac4830(&uStack_678);
      }
    }
    else {
      uStack_49 = 1;
      pdb_142570b50(&uStack_418,&pbStack_68);
      pbVar3 = pbStack_408;
      pbVar2 = uStack_410;
      pbVar7 = uStack_418;
      auVar9[0] = -((char)uStack_418 == DAT_14300c7d0);
      auVar9[1] = -(uStack_418._1_1_ == UNK_14300c7d1);
      auVar9[2] = -(uStack_418._2_1_ == UNK_14300c7d2);
      auVar9[3] = -(uStack_418._3_1_ == UNK_14300c7d3);
      auVar9[4] = -(uStack_418._4_1_ == UNK_14300c7d4);
      auVar9[5] = -(uStack_418._5_1_ == UNK_14300c7d5);
      auVar9[6] = -(uStack_418._6_1_ == UNK_14300c7d6);
      auVar9[7] = -(uStack_418._7_1_ == UNK_14300c7d7);
      auVar9[8] = -((char)uStack_410 == UNK_14300c7d8);
      auVar9[9] = -(uStack_410._1_1_ == UNK_14300c7d9);
      auVar9[10] = -(uStack_410._2_1_ == UNK_14300c7da);
      auVar9[0xb] = -(uStack_410._3_1_ == UNK_14300c7db);
      auVar9[0xc] = -(uStack_410._4_1_ == UNK_14300c7dc);
      auVar9[0xd] = -(uStack_410._5_1_ == UNK_14300c7dd);
      auVar9[0xe] = -(uStack_410._6_1_ == UNK_14300c7de);
      auVar9[0xf] = -(uStack_410._7_1_ == UNK_14300c7df);
      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf
                  ) != 0xffff) {
        pub_142e32760(apbStack_190,&pbStack_400,0x88);
        pbStack_1a0 = pbVar2;
        pbStack_1a8 = pbVar7;
        pbStack_198 = pbVar3;
        pdb_1425e6270(&uStack_418,&pbStack_1a8,&UNK_14339ee6f,6);
        auVar11[0] = -((char)uStack_418 == DAT_14300c7d0);
        auVar11[1] = -(uStack_418._1_1_ == UNK_14300c7d1);
        auVar11[2] = -(uStack_418._2_1_ == UNK_14300c7d2);
        auVar11[3] = -(uStack_418._3_1_ == UNK_14300c7d3);
        auVar11[4] = -(uStack_418._4_1_ == UNK_14300c7d4);
        auVar11[5] = -(uStack_418._5_1_ == UNK_14300c7d5);
        auVar11[6] = -(uStack_418._6_1_ == UNK_14300c7d6);
        auVar11[7] = -(uStack_418._7_1_ == UNK_14300c7d7);
        auVar11[8] = -((char)uStack_410 == UNK_14300c7d8);
        auVar11[9] = -(uStack_410._1_1_ == UNK_14300c7d9);
        auVar11[10] = -(uStack_410._2_1_ == UNK_14300c7da);
        auVar11[0xb] = -(uStack_410._3_1_ == UNK_14300c7db);
        auVar11[0xc] = -(uStack_410._4_1_ == UNK_14300c7dc);
        auVar11[0xd] = -(uStack_410._5_1_ == UNK_14300c7dd);
        auVar11[0xe] = -(uStack_410._6_1_ == UNK_14300c7de);
        auVar11[0xf] = -(uStack_410._7_1_ == UNK_14300c7df);
        bVar8 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar11[0xf] >> 7) << 0xf) == 0xffff;
        if (bVar8) {
          pdb_141c36de0(&pbStack_408);
LAB_141c36032:
          LOCK();
          *aplStack_118[0] = *aplStack_118[0] + -1;
          UNLOCK();
          if (*aplStack_118[0] == 0) {
            pdb_140ddc3c0(aplStack_118);
          }
          uStack_49 = 1;
          pdb_14098e730(&pbStack_1a8);
          if (!bVar8) goto LAB_141c361b8;
        }
        else {
          pub_142e32760(&uStack_678,&uStack_418,0xa0);
          if (alStack_638[0] == 0) {
LAB_141c36264:
            bVar8 = false;
          }
          else {
            pdb_142622200(&uStack_418,&uStack_678,alStack_638,&UNK_14339ee90,7);
            if (uStack_418 == (byte *)0x4) {
              pbStack_78 = pbStack_400;
              pbStack_88 = uStack_410;
              pbStack_80 = pbStack_408;
              pbVar7 = (byte *)pdb_1426200d0(&pbStack_88);
              pdb_141ac4be0(&uStack_678);
              goto LAB_141c36032;
            }
            pbStack_e8 = pbStack_408;
            pbStack_e0 = pbStack_400;
            uStack_d8 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
            uStack_d0 = (byte *)CONCAT44(uStack_3ec,uStack_3f0);
            uStack_a8 = uStack_3c8;
            uStack_a0 = uStack_3c0;
            if (uStack_418 == (byte *)0x3) goto LAB_141c36264;
            lVar5 = pdb_142621bc0(&uStack_418);
            pdb_141ac4dd0(&uStack_418);
            bVar8 = lVar5 == 0xd;
          }
          pdb_141ac4be0(&uStack_678);
          uStack_49 = 1;
          pdb_141ac47c0(&pbStack_1a8);
          if (bVar8) goto LAB_141c35ae5;
        }
        uStack_418 = pbStack_68;
        uStack_410 = pbStack_60;
        uStack_49 = 0;
        pdb_141ac4120(&uStack_418);
        uStack_49 = 0;
        pdb_140f3e9e0(&uStack_418,param_2,param_3,&UNK_14339ef24,10);
        pbStack_58 = uStack_410;
        pbVar7 = (byte *)pdb_140f4eda0(uStack_410,pbStack_408);
        if (uStack_418 != (byte *)0x0) {
          pub_1406abac0(pbStack_58,(ulonglong)uStack_418,1);
        }
        if (pbVar7 != (byte *)0x0) {
          cVar4 = pdb_141c2aa90(pbVar7);
          if (cVar4 != '\0') goto LAB_141c35bda;
          uStack_49 = 0;
          uStack_418 = pbVar7;
          pdb_1404b38e0(&uStack_418);
        }
        uStack_49 = 0;
        pdb_140f3e9e0(&uStack_418,param_2,param_3,&UNK_14339ef2e,9);
        pbStack_58 = uStack_410;
        pbVar7 = (byte *)pdb_141c2e0c0(uStack_410,pbStack_408);
        if (uStack_418 != (byte *)0x0) {
          pub_1406abac0(pbStack_58,(ulonglong)uStack_418,1);
        }
        if (pbVar7 == (byte *)0x0) {
          uStack_49 = 0;
          pdb_140f3e9e0(&uStack_418,param_2,param_3,&UNK_14339ef37,0xd);
          pbStack_58 = uStack_410;
          pbVar7 = (byte *)pdb_141c2e0c0(uStack_410,pbStack_408);
          if (uStack_418 != (byte *)0x0) {
            pub_1406abac0(pbStack_58,(ulonglong)uStack_418,1);
          }
          pbVar6 = pbStack_100;
          if (pbVar7 == (byte *)0x0) {
            uStack_49 = 0;
            pdb_141c2d6a0(&uStack_418,pbStack_100,uStack_f8);
            pbVar7 = uStack_410;
            if (uStack_418 != (byte *)0x0) {
              pbStack_68 = uStack_418;
              pbStack_60 = uStack_410;
              goto LAB_141c35ae5;
            }
          }
        }
        goto LAB_141c35bda;
      }
      uStack_668 = (undefined6)CONCAT44(uStack_3f4,uStack_3f8);
      uStack_662 = (undefined2)((uint)uStack_3f4 >> 0x10);
      uStack_678 = SUB86(pbStack_408,0);
      uStack_672 = (undefined2)((ulonglong)pbStack_408 >> 0x30);
      uStack_670 = SUB86(pbStack_400,0);
      uStack_66a = (undefined2)((ulonglong)pbStack_400 >> 0x30);
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x18,8);
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(ulonglong *)(pbVar6 + 0x10) = CONCAT44(uStack_3f4,uStack_3f8);
      *(byte **)pbVar6 = pbStack_408;
      *(byte **)(pbVar6 + 8) = pbStack_400;
      uStack_49 = 1;
      pbVar7 = (byte *)pdb_140f3fdf0(CONCAT71((int7)(CONCAT44(uStack_3f4,uStack_3f8) >> 8),0x28),
                                     pbVar6,&UNK_143557910);
    }
LAB_141c361b8:
    param_1[1] = pbVar7;
    *param_1 = 0x8000000000000000;
    pdb_141ac4120(&pbStack_68);
  }
  else {
    pbStack_408 = (byte *)CONCAT26(uStack_662,uStack_668);
    uStack_418 = (byte *)CONCAT26(uStack_672,uStack_678);
    uStack_410 = (byte *)CONCAT26(uStack_66a,uStack_670);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x18,8);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *(ulonglong *)(pbVar6 + 0x10) = CONCAT26(uStack_662,uStack_668);
    *(ulonglong *)pbVar6 = CONCAT26(uStack_672,uStack_678);
    *(ulonglong *)(pbVar6 + 8) = CONCAT26(uStack_66a,uStack_670);
    pbVar7 = (byte *)pdb_140f3fdf0(CONCAT71((int7)(CONCAT26(uStack_662,uStack_668) >> 8),0x28),
                                   pbVar6,&UNK_143557af0);
LAB_141c35bda:
    param_1[1] = pbVar7;
    *param_1 = 0x8000000000000000;
  }
joined_r0x000141c361e0:
  if (uStack_108 != 0) {
    pub_1406abac0(pbStack_100,uStack_108,1);
  }
  return param_1;
}

