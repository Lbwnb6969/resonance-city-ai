// VA 0x140c23f60, PDB extent 1409 bytes
// country_core::systems::grass2::Grass2RuntimeConfig::rebuild_texture_names
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::grass2::Grass2RuntimeConfig::rebuild_texture_names
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 1409 */

void pdb_140c23f60(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar28;
  undefined1 unaff_XMM6_Bc;
  char cVar29;
  undefined1 unaff_XMM6_Bd;
  char cVar30;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar31;
  undefined1 unaff_XMM6_Bg;
  char cVar32;
  undefined1 unaff_XMM6_Bh;
  char cVar33;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar34;
  undefined1 unaff_XMM6_Bk;
  char cVar35;
  undefined1 unaff_XMM6_Bl;
  char cVar36;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar37;
  undefined1 unaff_XMM6_Bo;
  char cVar38;
  undefined1 unaff_XMM6_Bp;
  char cVar39;
  ulonglong uStack_130;
  byte *pbStack_128;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong *plStack_e8;
  code *pcStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar9 = (longlong *)pdb_140f3bda0();
  if ((char)plVar9[2] == '\x01') {
    lStack_88 = *plVar9;
    param_2 = plVar9[1];
  }
  else {
    lStack_88 = pdb_140f4fd10();
    *plVar9 = lStack_88;
    plVar9[1] = param_2;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lStack_88 + 1;
  lStack_98 = _DAT_14306af80;
  lStack_90 = _UNK_14306af88;
  lStack_a8 = _DAT_14306af70;
  uStack_a0 = _UNK_14306af78;
  lVar18 = param_1[0xd];
  lVar19 = param_1[0xe] * 0x48 + lVar18;
  plVar9 = (longlong *)0x0;
  iVar4 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar28 = (char)((uint)iVar4 >> 8);
  cVar29 = (char)((uint)iVar4 >> 0x10);
  cVar30 = (char)((uint)iVar4 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar31 = (char)((uint)iVar5 >> 8);
  cVar32 = (char)((uint)iVar5 >> 0x10);
  cVar33 = (char)((uint)iVar5 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar34 = (char)((uint)iVar6 >> 8);
  cVar35 = (char)((uint)iVar6 >> 0x10);
  cVar36 = (char)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar37 = (char)((uint)iVar7 >> 8);
  cVar38 = (char)((uint)iVar7 >> 0x10);
  cVar39 = (char)((uint)iVar7 >> 0x18);
  plVar11 = (longlong *)0x0;
  plStack_118 = param_1;
  lStack_80 = param_2;
LAB_140c23fee:
  do {
    plVar8 = plStack_118;
    if ((plVar11 == (longlong *)0x0) || (plVar11 == plStack_110)) {
      do {
        while ((plVar11 = plVar9, plVar11 != (longlong *)0x0 && (plVar11 != param_1))) {
          plVar9 = plVar11 + 0x1a;
          lVar17 = plVar11[0x13];
          if (lVar17 != 0) goto LAB_140c24147;
        }
        do {
          lVar17 = lVar18;
          if (lVar17 == lVar19) {
            lStack_b8 = lStack_88;
            lStack_b0 = lStack_80;
            lStack_c8 = lStack_98;
            lStack_c0 = lStack_90;
            lStack_d8 = lStack_a8;
            uStack_d0 = uStack_a0;
            lVar18 = plStack_118[1];
            if (lVar18 != 0) {
              lVar19 = plStack_118[3];
              if (lVar19 != 0) {
                pauVar12 = (undefined1 (*) [16])*plStack_118;
                auVar23 = *pauVar12;
                pauVar20 = pauVar12 + 1;
                uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                         (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
                do {
                  if ((short)uVar21 == 0) {
                    do {
                      auVar23 = *pauVar20;
                      pauVar12 = pauVar12 + -0x30;
                      pauVar20 = pauVar20 + 1;
                      uVar21 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                        (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
                    } while (uVar21 == 0);
                  }
                  uVar2 = 0;
                  for (uVar3 = uVar21; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                    uVar2 = uVar2 + 1;
                  }
                  if (*(ulonglong *)pauVar12[(ulonglong)uVar2 * -3 + -2] != 0) {
                    pub_1406abac0(*(byte **)(pauVar12[(ulonglong)uVar2 * -3 + -2] + 8),
                                  *(ulonglong *)pauVar12[(ulonglong)uVar2 * -3 + -2],1);
                  }
                  uVar21 = uVar21 - 1 & uVar21;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              lVar19 = lVar18 * 0x30 + 0x30;
              uVar10 = lVar18 + lVar19 + 0x11;
              if (uVar10 != 0) {
                pub_1406abac0((byte *)(*plVar8 - lVar19),uVar10,0x10);
              }
            }
            plVar8[4] = lStack_b8;
            plVar8[5] = lStack_b0;
            plVar8[2] = lStack_c8;
            plVar8[3] = lStack_c0;
            *plVar8 = lStack_d8;
            plVar8[1] = uStack_d0;
            return;
          }
          lVar18 = lVar17 + 0x48;
        } while (*(longlong *)(lVar17 + 0x28) == 0);
        plVar11 = *(longlong **)(lVar17 + 0x20);
        param_1 = plVar11 + *(longlong *)(lVar17 + 0x28) * 0x1a;
        plVar9 = plVar11 + 0x1a;
        lVar17 = plVar11[0x13];
      } while (lVar17 == 0);
LAB_140c24147:
      plVar11 = (longlong *)plVar11[0x12];
      plStack_110 = plVar11 + lVar17 * 6;
    }
    lVar17 = *plVar11;
    lVar14 = plVar11[1];
    lStack_70 = plVar11[3];
    lStack_68 = plVar11[2];
    lStack_d8 = lVar17;
    uStack_d0 = lVar14;
    if (lStack_90 == 0) {
      lVar16 = 0;
    }
    else {
      uVar10 = pdb_1417c4090(&lStack_88,&lStack_d8);
      bVar22 = (byte)(uVar10 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar13 = 0;
      while( true ) {
        uVar10 = uVar10 & uStack_a0;
        pcVar1 = (char *)(lStack_a8 + uVar10);
        auVar26[0] = -(*pcVar1 == auVar23[0]);
        auVar26[1] = -(pcVar1[1] == auVar23[1]);
        auVar26[2] = -(pcVar1[2] == auVar23[2]);
        auVar26[3] = -(pcVar1[3] == auVar23[3]);
        auVar26[4] = -(pcVar1[4] == auVar23[4]);
        auVar26[5] = -(pcVar1[5] == auVar23[5]);
        auVar26[6] = -(pcVar1[6] == auVar23[6]);
        auVar26[7] = -(pcVar1[7] == auVar23[7]);
        auVar26[8] = -(pcVar1[8] == auVar23[0]);
        auVar26[9] = -(pcVar1[9] == auVar23[1]);
        auVar26[10] = -(pcVar1[10] == auVar23[2]);
        auVar26[0xb] = -(pcVar1[0xb] == auVar23[3]);
        auVar26[0xc] = -(pcVar1[0xc] == auVar23[4]);
        auVar26[0xd] = -(pcVar1[0xd] == auVar23[5]);
        auVar26[0xe] = -(pcVar1[0xe] == auVar23[6]);
        auVar26[0xf] = -(pcVar1[0xf] == auVar23[7]);
        uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar21; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar16 = (uVar2 + uVar10 & uStack_a0) * -0x30;
          if (*(longlong *)(lStack_a8 + -0x30 + lVar16) == lVar17 &&
              *(longlong *)(lStack_a8 + -0x28 + lVar16) == lVar14) goto LAB_140c241f0;
          uVar15 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar15);
        }
        auVar24[0] = -(*pcVar1 == (char)iVar4);
        auVar24[1] = -(pcVar1[1] == cVar28);
        auVar24[2] = -(pcVar1[2] == cVar29);
        auVar24[3] = -(pcVar1[3] == cVar30);
        auVar24[4] = -(pcVar1[4] == (char)iVar5);
        auVar24[5] = -(pcVar1[5] == cVar31);
        auVar24[6] = -(pcVar1[6] == cVar32);
        auVar24[7] = -(pcVar1[7] == cVar33);
        auVar24[8] = -(pcVar1[8] == (char)iVar6);
        auVar24[9] = -(pcVar1[9] == cVar34);
        auVar24[10] = -(pcVar1[10] == cVar35);
        auVar24[0xb] = -(pcVar1[0xb] == cVar36);
        auVar24[0xc] = -(pcVar1[0xc] == (char)iVar7);
        auVar24[0xd] = -(pcVar1[0xd] == cVar37);
        auVar24[0xe] = -(pcVar1[0xe] == cVar38);
        auVar24[0xf] = -(pcVar1[0xf] == cVar39);
        lVar16 = lStack_90;
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        uVar10 = uVar10 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
    plStack_e8 = &lStack_78;
    pcStack_e0 = pdb_140f72a40;
    lStack_78 = lVar16;
    pdb_140f60760(&lStack_d8,&UNK_14306acc8,&plStack_e8);
    lStack_108 = lStack_d8;
    lStack_100 = uStack_d0;
    uStack_f8 = lStack_c8;
    pdb_1417b8210(&uStack_130,&lStack_a8,lVar17,lVar14,&lStack_108);
    if ((!SBORROW8(0,uStack_130)) && (uStack_130 != 0)) {
      pub_1406abac0(pbStack_128,uStack_130,1);
    }
LAB_140c241f0:
    plVar11 = plVar11 + 6;
    lStack_d8 = lStack_68;
    uStack_d0 = lStack_70;
    if (lStack_90 == 0) {
      lVar17 = 0;
    }
    else {
      uVar10 = pdb_1417c4090(&lStack_88,&lStack_d8);
      bVar22 = (byte)(uVar10 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar14 = 0;
      while( true ) {
        uVar10 = uVar10 & uStack_a0;
        pcVar1 = (char *)(lStack_a8 + uVar10);
        auVar27[0] = -(*pcVar1 == auVar23[0]);
        auVar27[1] = -(pcVar1[1] == auVar23[1]);
        auVar27[2] = -(pcVar1[2] == auVar23[2]);
        auVar27[3] = -(pcVar1[3] == auVar23[3]);
        auVar27[4] = -(pcVar1[4] == auVar23[4]);
        auVar27[5] = -(pcVar1[5] == auVar23[5]);
        auVar27[6] = -(pcVar1[6] == auVar23[6]);
        auVar27[7] = -(pcVar1[7] == auVar23[7]);
        auVar27[8] = -(pcVar1[8] == auVar23[0]);
        auVar27[9] = -(pcVar1[9] == auVar23[1]);
        auVar27[10] = -(pcVar1[10] == auVar23[2]);
        auVar27[0xb] = -(pcVar1[0xb] == auVar23[3]);
        auVar27[0xc] = -(pcVar1[0xc] == auVar23[4]);
        auVar27[0xd] = -(pcVar1[0xd] == auVar23[5]);
        auVar27[0xe] = -(pcVar1[0xe] == auVar23[6]);
        auVar27[0xf] = -(pcVar1[0xf] == auVar23[7]);
        uVar15 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
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
        uVar21 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar21; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar17 = (uVar2 + uVar10 & uStack_a0) * -0x30;
          if (*(longlong *)(lStack_a8 + -0x30 + lVar17) == lStack_68 &&
              *(longlong *)(lStack_a8 + -0x28 + lVar17) == lStack_70) goto LAB_140c23fee;
          uVar15 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar15);
        }
        auVar25[0] = -(*pcVar1 == (char)iVar4);
        auVar25[1] = -(pcVar1[1] == cVar28);
        auVar25[2] = -(pcVar1[2] == cVar29);
        auVar25[3] = -(pcVar1[3] == cVar30);
        auVar25[4] = -(pcVar1[4] == (char)iVar5);
        auVar25[5] = -(pcVar1[5] == cVar31);
        auVar25[6] = -(pcVar1[6] == cVar32);
        auVar25[7] = -(pcVar1[7] == cVar33);
        auVar25[8] = -(pcVar1[8] == (char)iVar6);
        auVar25[9] = -(pcVar1[9] == cVar34);
        auVar25[10] = -(pcVar1[10] == cVar35);
        auVar25[0xb] = -(pcVar1[0xb] == cVar36);
        auVar25[0xc] = -(pcVar1[0xc] == (char)iVar7);
        auVar25[0xd] = -(pcVar1[0xd] == cVar37);
        auVar25[0xe] = -(pcVar1[0xe] == cVar38);
        auVar25[0xf] = -(pcVar1[0xf] == cVar39);
        lVar17 = lStack_90;
        if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x1f,0) & 1) != 0) || (SUB161(auVar25 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
        uVar10 = uVar10 + lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      }
    }
    plStack_e8 = &lStack_78;
    pcStack_e0 = pdb_140f72a40;
    lStack_78 = lVar17;
    pdb_140f60760(&lStack_d8,&UNK_14306acc8,&plStack_e8);
    lStack_108 = lStack_d8;
    lStack_100 = uStack_d0;
    uStack_f8 = lStack_c8;
    pdb_1417b8210(&uStack_130,&lStack_a8,lStack_68,lStack_70,&lStack_108);
    if ((!SBORROW8(0,uStack_130)) && (uStack_130 != 0)) {
      pub_1406abac0(pbStack_128,uStack_130,1);
    }
  } while( true );
}

