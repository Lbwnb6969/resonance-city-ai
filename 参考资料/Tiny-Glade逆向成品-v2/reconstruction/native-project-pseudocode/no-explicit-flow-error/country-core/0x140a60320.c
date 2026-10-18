// VA 0x140a60320, PDB extent 1666 bytes
// country_core::resources::stairs::stairs_state::StairsState::get_all_connected_nodes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::get_all_connected_nodes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 1666 */

ulonglong * pdb_140a60320(ulonglong *param_1,longlong param_2,uint param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  char cVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  uint *puStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  uint *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong *puStack_88;
  ulonglong uStack_80;
  uint *puStack_78;
  ulonglong uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_88 = param_1;
  pdb_14007ee60();
  puStack_78 = (uint *)pub_1406abab0(4,4);
  if (puStack_78 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,4);
  }
  *puStack_78 = param_3;
  uStack_80 = 1;
  uStack_70 = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar12 = pdb_141b755d0();
  pdb_140ca7890(&lStack_168,4,uVar2,1);
  lStack_e8 = uStack_158;
  lStack_e0 = lStack_150;
  lStack_f8 = lStack_168;
  puStack_f0 = puStack_160;
  uStack_d8 = uVar12;
  uVar13 = pdb_141b755d0();
  pdb_140ca7890(&lStack_188,4,uVar2);
  uStack_118 = uStack_178;
  uStack_110 = uStack_170;
  lStack_128 = lStack_188;
  lStack_120 = lStack_180;
  lStack_168 = 0;
  puStack_160 = (uint *)0x4;
  lStack_150 = lStack_f8;
  uStack_148 = (ulonglong)puStack_f0;
  uStack_140 = lStack_e8;
  lStack_138 = lStack_e0;
  uStack_130 = uStack_d8;
  uStack_158 = 0;
  uStack_108 = uVar13;
  pdb_142d8d710(&lStack_168);
  lStack_100 = param_2 + 0x28;
  *puStack_160 = param_3;
  puVar10 = _DAT_143cad920;
  uStack_158 = 1;
  lStack_f8 = lStack_168;
  puStack_f0 = puStack_160;
  uStack_d8 = uStack_148;
  uStack_d0 = uStack_140;
  lStack_c8 = lStack_138;
  uStack_c0 = uStack_130;
  lStack_b8 = lStack_128;
  lStack_b0 = lStack_120;
  uStack_a8 = uStack_118;
  uStack_a0 = uStack_110;
  uStack_98 = uStack_108;
  lStack_e8 = 1;
  lStack_e0 = lStack_150;
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  while (lStack_e8 != 0) {
    uVar19 = puStack_f0[lStack_e8 + -1];
    cVar11 = pdb_14177f390(&lStack_e0,uVar19);
    if (cVar11 == '\0') {
      if (lStack_e8 != 0) {
        lStack_e8 = lStack_e8 + -1;
      }
      cVar11 = pdb_14177f390(&lStack_b8,uVar19);
      uVar12 = uStack_70;
      if (cVar11 != '\0') {
        if (uStack_70 == uStack_80) {
          pdb_142d8d710(&uStack_80);
        }
        puStack_78[uVar12] = uVar19;
        uStack_70 = uVar12 + 1;
      }
    }
    else {
      lStack_168 = CONCAT44(lStack_168._4_4_,uVar19);
      lVar14 = pdb_140936c10(lStack_100,&lStack_168);
      if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x10) != 0)) {
        puVar16 = *(uint **)(lVar14 + 8);
        puVar21 = puVar16 + *(longlong *)(lVar14 + 0x10) * 2;
        do {
          lVar14 = lStack_e8;
          uVar19 = *puVar16;
          if (lStack_c8 != 0) {
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uStack_c0 ^ uVar19;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = *puVar10;
            uVar12 = SUB168(auVar23 * auVar3,8) ^ SUB168(auVar23 * auVar3,0);
            bVar22 = (byte)(uVar12 >> 0x39);
            auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
            auVar23 = pshuflw(auVar23,auVar23,0);
            lVar18 = 0;
            while( true ) {
              uVar12 = uVar12 & uStack_d8;
              pcVar1 = (char *)(lStack_e0 + uVar12);
              auVar25[0] = -(*pcVar1 == auVar23[0]);
              auVar25[1] = -(pcVar1[1] == auVar23[1]);
              auVar25[2] = -(pcVar1[2] == auVar23[2]);
              auVar25[3] = -(pcVar1[3] == auVar23[3]);
              auVar25[4] = -(pcVar1[4] == auVar23[4]);
              auVar25[5] = -(pcVar1[5] == auVar23[5]);
              auVar25[6] = -(pcVar1[6] == auVar23[6]);
              auVar25[7] = -(pcVar1[7] == auVar23[7]);
              auVar25[8] = -(pcVar1[8] == auVar23[0]);
              auVar25[9] = -(pcVar1[9] == auVar23[1]);
              auVar25[10] = -(pcVar1[10] == auVar23[2]);
              auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
              auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
              auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
              auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
              auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
              uVar20 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                                     (ushort)(auVar25[0xf] >> 7) << 0xf);
              while ((short)uVar20 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                uVar20 = uVar20 - 1 & uVar20;
                if (uVar19 == *(uint *)(lStack_e0 + (uVar4 + uVar12 & uStack_d8) * -4 + -4))
                goto LAB_140a6052f;
              }
              auVar24[0] = -(*pcVar1 == (char)iVar6);
              auVar24[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
              auVar24[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
              auVar24[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
              auVar24[4] = -(pcVar1[4] == (char)iVar7);
              auVar24[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
              auVar24[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
              auVar24[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
              auVar24[8] = -(pcVar1[8] == (char)iVar8);
              auVar24[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
              auVar24[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
              auVar24[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
              auVar24[0xc] = -(pcVar1[0xc] == (char)iVar9);
              auVar24[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
              auVar24[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
              auVar24[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
              if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
              uVar12 = uVar12 + lVar18 + 0x10;
              lVar18 = lVar18 + 0x10;
            }
          }
          if (lStack_e8 == lStack_f8) {
            pdb_142d8d710(&lStack_f8);
          }
          puStack_f0[lVar14] = uVar19;
          lStack_e8 = lVar14 + 1;
LAB_140a6052f:
          puVar16 = puVar16 + 2;
        } while (puVar16 != puVar21);
      }
    }
  }
  uVar12 = uStack_70;
  if (1 < uStack_70) {
    if (uStack_70 < 0x15) {
      puVar16 = puStack_78 + 1;
      lVar14 = 4;
      do {
        uVar20 = puVar16[-1];
        uVar19 = *puVar16;
        lVar18 = lVar14;
        if (uVar19 < uVar20) {
          do {
            *(uint *)((longlong)puStack_78 + lVar18) = uVar20;
            puVar21 = puStack_78;
            if (lVar18 == 4) goto LAB_140a60756;
            uVar20 = *(uint *)((longlong)puStack_78 + lVar18 + -8);
            lVar18 = lVar18 + -4;
          } while (uVar19 < uVar20);
          puVar21 = (uint *)(lVar18 + (longlong)puStack_78);
LAB_140a60756:
          *puVar21 = uVar19;
        }
        puVar16 = puVar16 + 1;
        lVar14 = lVar14 + 4;
      } while (puVar16 != puStack_78 + uStack_70);
    }
    else {
      pdb_140a914d0(puStack_78,uStack_70,&uStack_61);
    }
    uVar12 = uStack_70;
    if (1 < uStack_70) {
      lVar14 = 0;
      do {
        if (puStack_78[lVar14 + 1] == puStack_78[lVar14]) {
          uVar15 = lVar14 + 2;
          uVar12 = lVar14 + 1;
          if (uVar15 < uStack_70) {
            if (((int)uStack_70 - (int)lVar14 & 1U) != 0) {
              if (puStack_78[lVar14 + 2] != puStack_78[lVar14]) {
                puStack_78[lVar14 + 1] = puStack_78[lVar14 + 2];
                uVar12 = lVar14 + 2;
              }
              uVar15 = lVar14 + 3;
            }
            if (uStack_70 - 3 != lVar14) goto LAB_140a60825;
          }
          break;
        }
        lVar14 = lVar14 + 1;
      } while (uStack_70 - 1 != lVar14);
    }
  }
  goto LAB_140a6066d;
LAB_140a60825:
  do {
    if (puStack_78[uVar15] == puStack_78[uVar12 - 1]) {
      uVar19 = puStack_78[uVar15 + 1];
      uVar17 = uVar12;
      if (uVar19 != puStack_78[uVar12 - 1]) {
LAB_140a60851:
        puStack_78[uVar12] = uVar19;
        uVar17 = uVar12 + 1;
      }
    }
    else {
      puStack_78[uVar12] = puStack_78[uVar15];
      uVar17 = uVar12 + 1;
      uVar19 = puStack_78[uVar15 + 1];
      puVar16 = puStack_78 + uVar12;
      uVar12 = uVar17;
      if (uVar19 != *puVar16) goto LAB_140a60851;
    }
    uVar15 = uVar15 + 2;
    uVar12 = uVar17;
  } while (uStack_70 != uVar15);
LAB_140a6066d:
  uStack_70 = uVar12;
  puStack_88[2] = uStack_70;
  *puStack_88 = uStack_80;
  puStack_88[1] = (ulonglong)puStack_78;
  if (lStack_f8 != 0) {
    pub_1406abac0((byte *)puStack_f0,lStack_f8 << 2,4);
  }
  if (uStack_d8 != 0) {
    uVar12 = uStack_d8 * 4 + 0x13 & 0xfffffffffffffff0;
    uVar15 = uStack_d8 + uVar12 + 0x11;
    if (uVar15 != 0) {
      pub_1406abac0((byte *)(lStack_e0 - uVar12),uVar15,0x10);
    }
  }
  if (lStack_b0 != 0) {
    uVar12 = lStack_b0 * 4 + 0x13U & 0xfffffffffffffff0;
    uVar15 = lStack_b0 + uVar12 + 0x11;
    if (uVar15 != 0) {
      pub_1406abac0((byte *)(lStack_b8 - uVar12),uVar15,0x10);
    }
  }
  return puStack_88;
}

