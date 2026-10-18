// VA 0x1417fa580, PDB extent 2825 bytes
// turbosloth::store::AssetStore::package_assets_by_name<array$<ref$<str$>,1>,ref$<str$>,std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::AssetStore::package_assets_by_name<array$<ref$<str$>,1>,ref$<str$>,std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2825 */

longlong * pdb_1417fa580(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 *param_4)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 *puVar29;
  ushort uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  byte *pbVar34;
  ulonglong uVar35;
  longlong lVar36;
  byte *pbVar37;
  uint uVar38;
  undefined8 uVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar43 [16];
  undefined8 *puStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2d0 [136];
  undefined8 uStack_248;
  undefined8 uStack_240;
  uint *puStack_238;
  byte *pbStack_230;
  uint *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_198;
  code *pcStack_190;
  uint *puStack_188;
  undefined1 auStack_180 [8];
  ulonglong uStack_178;
  byte *pbStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  longlong lStack_130;
  byte *pbStack_128;
  longlong lStack_118;
  byte *pbStack_110;
  undefined8 uStack_e8;
  uint *puStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  byte *pbStack_a0;
  ulonglong *puStack_98;
  uint *puStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbStack_a0 = (byte *)param_3[1];
  uVar4 = param_3[2];
  uStack_248 = (undefined8 *)CONCAT71(uStack_248._1_7_,1);
  puStack_98 = param_3;
  lVar32 = pdb_140f46c40(&uStack_248,pbStack_a0,uVar4);
  if (lVar32 != 0) {
    param_1[1] = lVar32;
    *param_1 = -0x8000000000000000;
    uVar4 = *puStack_98;
    goto joined_r0x0001417fac30;
  }
  lStack_b8 = 0;
  pbStack_b0 = (byte *)0x10;
  lStack_a8 = 0;
  pdb_141c2ccf0(&uStack_248,param_2,pbStack_a0,uVar4);
  pbVar34 = pbStack_b0;
  pcVar7 = uStack_240;
  puVar6 = uStack_248;
  if (SBORROW8(0,(longlong)uStack_248)) {
    param_1[1] = (longlong)uStack_240;
    *param_1 = -0x8000000000000000;
    if (lStack_a8 != 0) {
      pbVar37 = pbStack_b0 + 0x30;
      lVar32 = lStack_a8;
      do {
        if (*(ulonglong *)(pbVar37 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar37 + -0x18),*(ulonglong *)(pbVar37 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar37 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar37,*(ulonglong *)(pbVar37 + -8),1);
        }
        pbVar37 = pbVar37 + 0x40;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
  }
  else {
    pub_142e32760(auStack_2d0,&puStack_238,0x88);
    puStack_2e0 = puVar6;
    pcStack_2d8 = pcVar7;
    uStack_e8 = *param_4;
    puVar5 = (uint *)param_4[1];
    puStack_90 = (uint *)(param_2 + 0x110);
    uVar38 = *(uint *)(param_2 + 0x110);
    puStack_e0 = puVar5;
    uStack_c0 = uStack_e8;
    if (uVar38 < 0x3ffffffe) {
      LOCK();
      uVar3 = *puStack_90;
      if (uVar38 == uVar3) {
        *puStack_90 = uVar38 + 1;
      }
      UNLOCK();
      if (uVar38 != uVar3) goto LAB_1417fac97;
    }
    else {
LAB_1417fac97:
      uStack_81 = 1;
      pdb_142dc6cb0();
    }
    if (*(char *)(param_2 + 0x118) != '\0') {
      uStack_248 = (undefined8 *)(param_2 + 0x120);
      uStack_240 = (code *)puStack_90;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14333e4d0,0x2b,&uStack_248,&UNK_14333e560,&UNK_14333e090);
    }
    if (*(longlong *)(param_2 + 0x138) != 0) {
      uVar33 = pdb_1400af950(param_2 + 0x140,uStack_c0);
      lVar32 = *(longlong *)(param_2 + 0x120);
      uVar35 = *(ulonglong *)(param_2 + 0x128);
      bVar40 = (byte)(uVar33 >> 0x39);
      auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar41 = pshuflw(auVar41,auVar41,0);
      lVar36 = 0;
      iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                     CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                      CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                      CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                      CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      do {
        uVar33 = uVar33 & uVar35;
        pcVar2 = (char *)(lVar32 + uVar33);
        cVar13 = *pcVar2;
        cVar14 = pcVar2[1];
        cVar15 = pcVar2[2];
        cVar16 = pcVar2[3];
        cVar17 = pcVar2[4];
        cVar18 = pcVar2[5];
        cVar19 = pcVar2[6];
        cVar20 = pcVar2[7];
        cVar21 = pcVar2[8];
        cVar22 = pcVar2[9];
        cVar23 = pcVar2[10];
        cVar24 = pcVar2[0xb];
        cVar25 = pcVar2[0xc];
        cVar26 = pcVar2[0xd];
        cVar27 = pcVar2[0xe];
        cVar28 = pcVar2[0xf];
        auVar42[0] = -(cVar13 == auVar41[0]);
        auVar42[1] = -(cVar14 == auVar41[1]);
        auVar42[2] = -(cVar15 == auVar41[2]);
        auVar42[3] = -(cVar16 == auVar41[3]);
        auVar42[4] = -(cVar17 == auVar41[4]);
        auVar42[5] = -(cVar18 == auVar41[5]);
        auVar42[6] = -(cVar19 == auVar41[6]);
        auVar42[7] = -(cVar20 == auVar41[7]);
        auVar42[8] = -(cVar21 == auVar41[0]);
        auVar42[9] = -(cVar22 == auVar41[1]);
        auVar42[10] = -(cVar23 == auVar41[2]);
        auVar42[0xb] = -(cVar24 == auVar41[3]);
        auVar42[0xc] = -(cVar25 == auVar41[4]);
        auVar42[0xd] = -(cVar26 == auVar41[5]);
        auVar42[0xe] = -(cVar27 == auVar41[6]);
        auVar42[0xf] = -(cVar28 == auVar41[7]);
        uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
        ;
        uVar38 = (uint)uVar30;
        if (uVar30 != 0) {
LAB_1417fa7d5:
          lStack_c8 = lVar36;
          uStack_d0 = uVar35;
          uStack_d8 = uVar33;
          uVar3 = 0;
          for (uVar8 = uVar38; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar36 = (uVar3 + uStack_d8 & uStack_d0) * -0x30;
          if (puVar5 != *(uint **)(lVar32 + -0x20 + lVar36)) goto LAB_1417fa810;
          lVar36 = lVar36 + lVar32;
          iVar31 = pub_142e32750(uStack_c0,*(undefined8 *)(lVar36 + -0x28),puVar5);
          if (iVar31 != 0) goto LAB_1417fa810;
          puVar6 = *(undefined8 **)(lVar36 + -0x10);
          pcVar7 = *(code **)(lVar36 + -8);
          piVar1 = (int *)(param_2 + 0x110);
          LOCK();
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (SBORROW4(0,iVar9 - 1U & 0xbfffffff)) {
            uStack_81 = 1;
            pdb_142dc6fa0();
          }
          uStack_81 = 1;
          lVar32 = pdb_141c2c080(&puStack_2e0,puVar6,pcVar7);
          if (lVar32 == 0) {
            uStack_81 = 1;
            pdb_141c2e820(&uStack_248,param_2,puVar6,pcVar7);
            puVar29 = uStack_248;
            auVar41[0] = -((char)uStack_248 == DAT_14300c7d0);
            auVar41[1] = -(uStack_248._1_1_ == UNK_14300c7d1);
            auVar41[2] = -(uStack_248._2_1_ == UNK_14300c7d2);
            auVar41[3] = -(uStack_248._3_1_ == UNK_14300c7d3);
            auVar41[4] = -(uStack_248._4_1_ == UNK_14300c7d4);
            auVar41[5] = -(uStack_248._5_1_ == UNK_14300c7d5);
            auVar41[6] = -(uStack_248._6_1_ == UNK_14300c7d6);
            auVar41[7] = -(uStack_248._7_1_ == UNK_14300c7d7);
            auVar41[8] = -((char)uStack_240 == UNK_14300c7d8);
            auVar41[9] = -(uStack_240._1_1_ == UNK_14300c7d9);
            auVar41[10] = -(uStack_240._2_1_ == UNK_14300c7da);
            auVar41[0xb] = -(uStack_240._3_1_ == UNK_14300c7db);
            auVar41[0xc] = -(uStack_240._4_1_ == UNK_14300c7dc);
            auVar41[0xd] = -(uStack_240._5_1_ == UNK_14300c7dd);
            auVar41[0xe] = -(uStack_240._6_1_ == UNK_14300c7de);
            auVar41[0xf] = -(uStack_240._7_1_ == UNK_14300c7df);
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
              uStack_81 = 1;
              lVar32 = pdb_141c2ddc0();
            }
            else {
              puStack_90 = puVar5;
              pub_142e32760(auStack_180,&pbStack_230,0x98);
              puStack_228 = puStack_90;
              pcStack_190 = uStack_240;
              puStack_198 = puVar29;
              puStack_188 = puStack_238;
              if ((longlong)puStack_90 < 0) {
                uVar39 = 0;
LAB_1417fa9ae:
                uStack_82 = 1;
                pdb_142dc7e2a(uVar39,puStack_228);
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              if (puStack_90 == (uint *)0x0) {
                pbVar34 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                uVar39 = 1;
                pbVar34 = pub_1406abab0((ulonglong)puStack_228,1);
                if (pbVar34 == (byte *)0x0) goto LAB_1417fa9ae;
                pub_142e32760(pbVar34,uStack_c0,puStack_228);
              }
              uStack_210 = uStack_150;
              uStack_220 = uStack_160;
              uStack_218 = uStack_158;
              puStack_238 = puStack_228;
              uStack_82 = 0;
              uStack_248 = puVar6;
              uStack_240 = pcVar7;
              pbStack_230 = pbVar34;
              pdb_141c2dbe0(&lStack_b8,&uStack_248);
              if (uStack_178 != 0) {
                pub_1406abac0(pbStack_170,uStack_178,1);
              }
              if (lStack_138 != 0) {
                pbVar34 = pbStack_140 + 0x48;
                lVar32 = lStack_138;
                do {
                  if (*(ulonglong *)(pbVar34 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar34,*(ulonglong *)(pbVar34 + -8),1);
                  }
                  pbVar34 = pbVar34 + 0x60;
                  lVar32 = lVar32 + -1;
                } while (lVar32 != 0);
              }
              if (lStack_148 != 0) {
                pub_1406abac0(pbStack_140,lStack_148 * 0x60,0x10);
              }
              if (lStack_130 != 0) {
                pub_1406abac0(pbStack_128,lStack_130 * 0x30,0x10);
              }
              if (lStack_118 != 0) {
                pub_1406abac0(pbStack_110,lStack_118 << 4,0x10);
              }
              uStack_81 = 1;
              lVar32 = pdb_141c2e610(pbStack_a0,uVar4,&lStack_b8);
              if (lVar32 == 0) {
                pub_142e32760(&uStack_248,&puStack_2e0,0x98);
                uStack_81 = 0;
                lVar32 = pdb_141c2d2a0(&uStack_248);
                if (lVar32 == 0) {
                  param_1[2] = lStack_a8;
                  *param_1 = lStack_b8;
                  param_1[1] = (longlong)pbStack_b0;
                  uVar4 = *puStack_98;
                  goto joined_r0x0001417fac30;
                }
                param_1[1] = lVar32;
                *param_1 = -0x8000000000000000;
                pbVar34 = pbStack_b0;
                lVar32 = lStack_a8;
                goto joined_r0x0001417fabff;
              }
            }
          }
          param_1[1] = lVar32;
          *param_1 = -0x8000000000000000;
          goto LAB_1417fab42;
        }
LAB_1417fa832:
        auVar43[0] = -(cVar13 == (char)iVar9);
        auVar43[1] = -(cVar14 == (char)((uint)iVar9 >> 8));
        auVar43[2] = -(cVar15 == (char)((uint)iVar9 >> 0x10));
        auVar43[3] = -(cVar16 == (char)((uint)iVar9 >> 0x18));
        auVar43[4] = -(cVar17 == (char)iVar10);
        auVar43[5] = -(cVar18 == (char)((uint)iVar10 >> 8));
        auVar43[6] = -(cVar19 == (char)((uint)iVar10 >> 0x10));
        auVar43[7] = -(cVar20 == (char)((uint)iVar10 >> 0x18));
        auVar43[8] = -(cVar21 == (char)iVar11);
        auVar43[9] = -(cVar22 == (char)((uint)iVar11 >> 8));
        auVar43[10] = -(cVar23 == (char)((uint)iVar11 >> 0x10));
        auVar43[0xb] = -(cVar24 == (char)((uint)iVar11 >> 0x18));
        auVar43[0xc] = -(cVar25 == (char)iVar12);
        auVar43[0xd] = -(cVar26 == (char)((uint)iVar12 >> 8));
        auVar43[0xe] = -(cVar27 == (char)((uint)iVar12 >> 0x10));
        auVar43[0xf] = -(cVar28 == (char)((uint)iVar12 >> 0x18));
        if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x1f,0) & 1) != 0) || (SUB161(auVar43 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
        uVar33 = uVar33 + lVar36 + 0x10;
        lVar36 = lVar36 + 0x10;
      } while( true );
    }
    puStack_198 = &uStack_e8;
    pcStack_190 = pdb_1402ed420;
    pdb_140f60760(&uStack_248,&UNK_14333e0a8,&puStack_198);
    lVar32 = pdb_140dbd3e0(0,&uStack_248);
    param_1[1] = lVar32;
    *param_1 = -0x8000000000000000;
    LOCK();
    uVar38 = *puStack_90;
    *puStack_90 = *puStack_90 - 1;
    UNLOCK();
    if (SBORROW4(0,uVar38 - 1 & 0xbfffffff)) {
      uStack_81 = 1;
      pdb_142dc6fa0();
    }
LAB_1417fab42:
    pdb_140989e00(&puStack_2e0);
    pbVar34 = pbStack_b0;
    lVar32 = lStack_a8;
joined_r0x0001417fabff:
    pbStack_b0 = pbVar34;
    lStack_a8 = lVar32;
    if (lVar32 != 0) {
      pbVar37 = pbVar34 + 0x30;
      do {
        if (*(ulonglong *)(pbVar37 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar37 + -0x18),*(ulonglong *)(pbVar37 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar37 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar37,*(ulonglong *)(pbVar37 + -8),1);
        }
        pbVar37 = pbVar37 + 0x40;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
  }
  if (lStack_b8 != 0) {
    pub_1406abac0(pbVar34,lStack_b8 << 6,0x10);
  }
  uVar4 = *puStack_98;
joined_r0x0001417fac30:
  if (uVar4 != 0) {
    pub_1406abac0(pbStack_a0,uVar4,1);
  }
  return param_1;
LAB_1417fa810:
  uVar30 = (ushort)(uVar38 - 1) & (ushort)uVar38;
  uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar30);
  uVar33 = uStack_d8;
  uVar35 = uStack_d0;
  lVar36 = lStack_c8;
  if (uVar30 == 0) goto LAB_1417fa832;
  goto LAB_1417fa7d5;
}

