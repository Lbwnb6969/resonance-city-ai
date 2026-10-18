// VA 0x140b080a0, PDB extent 3154 bytes
// country_core::render::nani::trimesh::Trimesh::builder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::trimesh::Trimesh::builder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
   Extent: 3154 */

undefined8 * pdb_140b080a0(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  byte bVar21;
  ulonglong uVar22;
  uint *puVar23;
  uint *puVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar33;
  undefined1 unaff_XMM6_Bb;
  char cVar34;
  undefined1 unaff_XMM6_Bc;
  char cVar35;
  undefined1 unaff_XMM6_Bd;
  char cVar36;
  undefined1 unaff_XMM6_Be;
  char cVar37;
  undefined1 unaff_XMM6_Bf;
  char cVar38;
  undefined1 unaff_XMM6_Bg;
  char cVar39;
  undefined1 unaff_XMM6_Bh;
  char cVar40;
  undefined1 unaff_XMM6_Bi;
  char cVar41;
  undefined1 unaff_XMM6_Bj;
  char cVar42;
  undefined1 unaff_XMM6_Bk;
  char cVar43;
  undefined1 unaff_XMM6_Bl;
  char cVar44;
  undefined1 unaff_XMM6_Bm;
  char cVar45;
  undefined1 unaff_XMM6_Bn;
  char cVar46;
  undefined1 unaff_XMM6_Bo;
  char cVar47;
  undefined1 unaff_XMM6_Bp;
  char cVar48;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  longlong lStack_120;
  byte *pbStack_118;
  longlong lStack_110;
  uint uStack_104;
  ulonglong uStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  uint uStack_cc;
  uint *puStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  longlong lStack_90;
  longlong lStack_88;
  uint *puStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar24 = param_2;
  plVar10 = (longlong *)pdb_140f3bda0();
  if ((char)plVar10[2] == '\x01') {
    lStack_88 = *plVar10;
    puVar24 = (uint *)plVar10[1];
  }
  else {
    lStack_88 = pdb_140f4fd10();
    *plVar10 = lStack_88;
    plVar10[1] = (longlong)puVar24;
    *(undefined1 *)(plVar10 + 2) = 1;
  }
  *plVar10 = lStack_88 + 1;
  pbVar13 = (byte *)0x8;
  pdb_140ca7a40(&pauStack_138,8,0x40,1);
  pauStack_98 = pauStack_128;
  lStack_90 = lStack_120;
  pauStack_a8 = pauStack_138;
  pauStack_a0 = pauStack_130;
  uVar22 = param_3 / 3 + 0x3f >> 6;
  puStack_80 = puVar24;
  if (uVar22 != 0) {
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(uVar22 * 0x30,8);
    if (pbVar13 == (byte *)0x0) {
      pdb_142dc7e2a(8,uVar22 * 0x30);
      goto LAB_140b08a1f;
    }
  }
  uVar7 = _UNK_142e47bfc;
  uVar6 = _UNK_142e47bf8;
  uStack_f0 = 0;
  puVar24 = (uint *)(param_3 - param_3 % 3);
  uVar14 = 0xffffffffffffffff;
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar33 = (char)iVar5;
  cVar34 = (char)((uint)iVar5 >> 8);
  cVar35 = (char)((uint)iVar5 >> 0x10);
  cVar36 = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar37 = (char)iVar5;
  cVar38 = (char)((uint)iVar5 >> 8);
  cVar39 = (char)((uint)iVar5 >> 0x10);
  cVar40 = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar41 = (char)iVar5;
  cVar42 = (char)((uint)iVar5 >> 8);
  cVar43 = (char)((uint)iVar5 >> 0x10);
  cVar44 = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar45 = (char)iVar5;
  cVar46 = (char)((uint)iVar5 >> 8);
  cVar47 = (char)((uint)iVar5 >> 0x10);
  cVar48 = (char)((uint)iVar5 >> 0x18);
  uStack_100 = uVar22;
  pbStack_f8 = pbVar13;
  while( true ) {
    pauVar11 = pauStack_a0;
    if (lStack_90 != 0) {
      if (pauStack_a0 == (undefined1 (*) [16])0x0) {
        pauStack_98 = (undefined1 (*) [16])0x0;
      }
      else {
        pub_142e32780(pauStack_a8,0xff);
        pauStack_98 = (undefined1 (*) [16])
                      (((ulonglong)(*pauVar11 + 1) & 0xfffffffffffffff8) -
                      ((ulonglong)(*pauVar11 + 1) >> 3));
        if (pauVar11 < (undefined1 (*) [16])0x8) {
          pauStack_98 = pauVar11;
        }
      }
      lStack_90 = 0;
    }
    pdb_14007ee60();
    pauVar11 = (undefined1 (*) [16])pub_1406abab0(0x100,4);
    if (pauVar11 == (undefined1 (*) [16])0x0) break;
    pauStack_e8 = (undefined1 (*) [16])0x40;
    pauStack_d8 = (undefined1 (*) [16])0x0;
    pauStack_e0 = pauVar11;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x300,4);
    if (pbVar13 == (byte *)0x0) {
      uStack_72 = 1;
      pdb_142dc7e2a(4,0x300);
      goto LAB_140b08a1f;
    }
    lStack_c0 = 0xc0;
    lStack_b0 = 0;
    uStack_cc = 0;
    pbStack_b8 = pbVar13;
    while ((uVar22 = uStack_f0, uStack_cc < 0x40 &&
           (puVar23 = (uint *)((longlong)puVar24 + -3), (uint *)0x2 < puVar24))) {
      uVar2 = *param_2;
      if ((longlong)uVar14 < (longlong)(ulonglong)uVar2) {
        uVar14 = (ulonglong)uVar2;
      }
      uVar8 = (undefined1)lStack_90;
      pauStack_138 = (undefined1 (*) [16])CONCAT44(pauStack_138._4_4_,uVar2);
      uStack_71 = 1;
      puStack_c8 = param_2;
      uVar12 = pdb_1400aede0(&lStack_88,&pauStack_138);
      uStack_cc = uStack_cc + 1;
      param_2 = puStack_c8 + 3;
      bVar20 = (byte)(uVar12 >> 0x38);
      bVar21 = bVar20 >> 1;
      auVar26 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar16 = 0;
      uVar22 = uVar12;
      while( true ) {
        uVar22 = uVar22 & (ulonglong)pauStack_a0;
        pcVar1 = *pauStack_a8 + uVar22;
        auVar30[0] = -(*pcVar1 == auVar26[0]);
        auVar30[1] = -(pcVar1[1] == auVar26[1]);
        auVar30[2] = -(pcVar1[2] == auVar26[2]);
        auVar30[3] = -(pcVar1[3] == auVar26[3]);
        auVar30[4] = -(pcVar1[4] == auVar26[4]);
        auVar30[5] = -(pcVar1[5] == auVar26[5]);
        auVar30[6] = -(pcVar1[6] == auVar26[6]);
        auVar30[7] = -(pcVar1[7] == auVar26[7]);
        auVar30[8] = -(pcVar1[8] == auVar26[0]);
        auVar30[9] = -(pcVar1[9] == auVar26[1]);
        auVar30[10] = -(pcVar1[10] == auVar26[2]);
        auVar30[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar30[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar30[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar30[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar30[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar17 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar9 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar18 = (longlong)pauStack_a8 + (uVar9 + uVar22 & (ulonglong)pauStack_a0) * -8;
          if (*(uint *)(lVar18 + -8) == uVar2) goto LAB_140b0846b;
          uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
        }
        auVar27[0] = -(*pcVar1 == cVar33);
        auVar27[1] = -(pcVar1[1] == cVar34);
        auVar27[2] = -(pcVar1[2] == cVar35);
        auVar27[3] = -(pcVar1[3] == cVar36);
        auVar27[4] = -(pcVar1[4] == cVar37);
        auVar27[5] = -(pcVar1[5] == cVar38);
        auVar27[6] = -(pcVar1[6] == cVar39);
        auVar27[7] = -(pcVar1[7] == cVar40);
        auVar27[8] = -(pcVar1[8] == cVar41);
        auVar27[9] = -(pcVar1[9] == cVar42);
        auVar27[10] = -(pcVar1[10] == cVar43);
        auVar27[0xb] = -(pcVar1[0xb] == cVar44);
        auVar27[0xc] = -(pcVar1[0xc] == cVar45);
        auVar27[0xd] = -(pcVar1[0xd] == cVar46);
        auVar27[0xe] = -(pcVar1[0xe] == cVar47);
        auVar27[0xf] = -(pcVar1[0xf] == cVar48);
        if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x1f,0) & 1) != 0) || (SUB161(auVar27 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
        uVar22 = uVar22 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
      if (pauStack_98 == (undefined1 (*) [16])0x0) {
        uStack_71 = 1;
        pdb_142d9c750(&pauStack_a8,1,&lStack_88,CONCAT71((int7)(uVar22 >> 8),1));
      }
      lVar16 = lStack_b0;
      if (lStack_b0 == lStack_c0) {
        uStack_71 = 1;
        pdb_142db0990(&lStack_c0);
      }
      *(uint *)(pbStack_b8 + lVar16 * 4) = uVar2;
      lStack_b0 = lVar16 + 1;
      uVar12 = uVar12 & (ulonglong)pauStack_a0;
      auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
      uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar17;
      if (uVar17 == 0) {
        lVar16 = 0x10;
        do {
          uVar12 = uVar12 + lVar16 & (ulonglong)pauStack_a0;
          auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
          lVar16 = lVar16 + 0x10;
          uVar15 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
        } while (uVar15 == 0);
      }
      uVar9 = 0;
      for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar22 = uVar9 + uVar12 & (ulonglong)pauStack_a0;
      bVar21 = (*pauStack_a8)[uVar22];
      if (-1 < (char)bVar21) {
        auVar26 = *pauStack_a8;
        uVar15 = 0;
        for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
            uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar22 = (ulonglong)uVar15;
        bVar21 = (*pauStack_a8)[uVar22];
      }
      bVar20 = bVar20 >> 1;
      (*pauStack_a8)[uVar22] = bVar20;
      pauStack_a8[1][uVar22 - 0x10 & (ulonglong)pauStack_a0] = bVar20;
      pauStack_98 = (undefined1 (*) [16])((longlong)pauStack_98 - (ulonglong)(bVar21 & 1));
      lVar18 = (longlong)pauStack_a8 + uVar22 * -8;
      *(uint *)((longlong)pauStack_a8 + uVar22 * -8 + -8) = uVar2;
      *(undefined1 *)(lVar18 + -4) = uVar8;
      lStack_90 = lStack_90 + 1;
LAB_140b0846b:
      lVar16 = lStack_90;
      uVar2 = puStack_c8[1];
      if (uVar14 < uVar2) {
        uVar14 = (ulonglong)uVar2;
      }
      uStack_104 = (uint)*(byte *)(lVar18 + -4);
      pauStack_138 = (undefined1 (*) [16])CONCAT44(pauStack_138._4_4_,uVar2);
      uStack_71 = 1;
      uVar12 = pdb_1400aede0(&lStack_88,&pauStack_138);
      bVar20 = (byte)(uVar12 >> 0x38);
      bVar21 = bVar20 >> 1;
      auVar26 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar18 = 0;
      uVar22 = uVar12;
      while( true ) {
        uVar22 = uVar22 & (ulonglong)pauStack_a0;
        pcVar1 = *pauStack_a8 + uVar22;
        auVar31[0] = -(*pcVar1 == auVar26[0]);
        auVar31[1] = -(pcVar1[1] == auVar26[1]);
        auVar31[2] = -(pcVar1[2] == auVar26[2]);
        auVar31[3] = -(pcVar1[3] == auVar26[3]);
        auVar31[4] = -(pcVar1[4] == auVar26[4]);
        auVar31[5] = -(pcVar1[5] == auVar26[5]);
        auVar31[6] = -(pcVar1[6] == auVar26[6]);
        auVar31[7] = -(pcVar1[7] == auVar26[7]);
        auVar31[8] = -(pcVar1[8] == auVar26[0]);
        auVar31[9] = -(pcVar1[9] == auVar26[1]);
        auVar31[10] = -(pcVar1[10] == auVar26[2]);
        auVar31[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar31[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar31[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar31[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar31[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar17 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar9 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar19 = (longlong)pauStack_a8 + (uVar9 + uVar22 & (ulonglong)pauStack_a0) * -8;
          if (*(uint *)(lVar19 + -8) == uVar2) goto LAB_140b085d7;
          uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
        }
        auVar28[0] = -(*pcVar1 == cVar33);
        auVar28[1] = -(pcVar1[1] == cVar34);
        auVar28[2] = -(pcVar1[2] == cVar35);
        auVar28[3] = -(pcVar1[3] == cVar36);
        auVar28[4] = -(pcVar1[4] == cVar37);
        auVar28[5] = -(pcVar1[5] == cVar38);
        auVar28[6] = -(pcVar1[6] == cVar39);
        auVar28[7] = -(pcVar1[7] == cVar40);
        auVar28[8] = -(pcVar1[8] == cVar41);
        auVar28[9] = -(pcVar1[9] == cVar42);
        auVar28[10] = -(pcVar1[10] == cVar43);
        auVar28[0xb] = -(pcVar1[0xb] == cVar44);
        auVar28[0xc] = -(pcVar1[0xc] == cVar45);
        auVar28[0xd] = -(pcVar1[0xd] == cVar46);
        auVar28[0xe] = -(pcVar1[0xe] == cVar47);
        auVar28[0xf] = -(pcVar1[0xf] == cVar48);
        if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x1f,0) & 1) != 0) || (SUB161(auVar28 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
        uVar22 = uVar22 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
      if (pauStack_98 == (undefined1 (*) [16])0x0) {
        uStack_71 = 1;
        pdb_142d9c750(&pauStack_a8,1,&lStack_88,CONCAT71((int7)(uVar22 >> 8),1));
      }
      lVar18 = lStack_b0;
      if (lStack_b0 == lStack_c0) {
        uStack_71 = 1;
        pdb_142db0990(&lStack_c0);
      }
      *(uint *)(pbStack_b8 + lVar18 * 4) = uVar2;
      lStack_b0 = lVar18 + 1;
      uVar12 = uVar12 & (ulonglong)pauStack_a0;
      auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
      uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar17;
      if (uVar17 == 0) {
        lVar18 = 0x10;
        do {
          uVar12 = uVar12 + lVar18 & (ulonglong)pauStack_a0;
          auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
          lVar18 = lVar18 + 0x10;
          uVar15 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
        } while (uVar15 == 0);
      }
      uVar9 = 0;
      for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar22 = uVar9 + uVar12 & (ulonglong)pauStack_a0;
      bVar21 = (*pauStack_a8)[uVar22];
      if (-1 < (char)bVar21) {
        auVar26 = *pauStack_a8;
        uVar15 = 0;
        for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
            uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar22 = (ulonglong)uVar15;
        bVar21 = (*pauStack_a8)[uVar22];
      }
      bVar20 = bVar20 >> 1;
      (*pauStack_a8)[uVar22] = bVar20;
      pauStack_a8[1][uVar22 - 0x10 & (ulonglong)pauStack_a0] = bVar20;
      pauStack_98 = (undefined1 (*) [16])((longlong)pauStack_98 - (ulonglong)(bVar21 & 1));
      lVar19 = (longlong)pauStack_a8 + uVar22 * -8;
      *(uint *)((longlong)pauStack_a8 + uVar22 * -8 + -8) = uVar2;
      *(char *)(lVar19 + -4) = (char)lVar16;
      lStack_90 = lStack_90 + 1;
LAB_140b085d7:
      lVar16 = lStack_90;
      uVar2 = puStack_c8[2];
      if (uVar14 < uVar2) {
        uVar14 = (ulonglong)uVar2;
      }
      bVar20 = *(byte *)(lVar19 + -4);
      pauStack_138 = (undefined1 (*) [16])CONCAT44(pauStack_138._4_4_,uVar2);
      uStack_71 = 1;
      uVar12 = pdb_1400aede0(&lStack_88,&pauStack_138);
      bVar21 = (byte)(uVar12 >> 0x38);
      bVar25 = bVar21 >> 1;
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar18 = 0;
      uVar22 = uVar12;
      while( true ) {
        uVar22 = uVar22 & (ulonglong)pauStack_a0;
        pcVar1 = *pauStack_a8 + uVar22;
        auVar32[0] = -(*pcVar1 == auVar26[0]);
        auVar32[1] = -(pcVar1[1] == auVar26[1]);
        auVar32[2] = -(pcVar1[2] == auVar26[2]);
        auVar32[3] = -(pcVar1[3] == auVar26[3]);
        auVar32[4] = -(pcVar1[4] == auVar26[4]);
        auVar32[5] = -(pcVar1[5] == auVar26[5]);
        auVar32[6] = -(pcVar1[6] == auVar26[6]);
        auVar32[7] = -(pcVar1[7] == auVar26[7]);
        auVar32[8] = -(pcVar1[8] == auVar26[0]);
        auVar32[9] = -(pcVar1[9] == auVar26[1]);
        auVar32[10] = -(pcVar1[10] == auVar26[2]);
        auVar32[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar32[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar32[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar32[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar32[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar17 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf
        ;
        uVar15 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar9 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar19 = (longlong)pauStack_a8 + (uVar9 + uVar22 & (ulonglong)pauStack_a0) * -8;
          if (*(uint *)(lVar19 + -8) == uVar2) goto LAB_140b0875c;
          uVar17 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar17);
        }
        auVar29[0] = -(*pcVar1 == cVar33);
        auVar29[1] = -(pcVar1[1] == cVar34);
        auVar29[2] = -(pcVar1[2] == cVar35);
        auVar29[3] = -(pcVar1[3] == cVar36);
        auVar29[4] = -(pcVar1[4] == cVar37);
        auVar29[5] = -(pcVar1[5] == cVar38);
        auVar29[6] = -(pcVar1[6] == cVar39);
        auVar29[7] = -(pcVar1[7] == cVar40);
        auVar29[8] = -(pcVar1[8] == cVar41);
        auVar29[9] = -(pcVar1[9] == cVar42);
        auVar29[10] = -(pcVar1[10] == cVar43);
        auVar29[0xb] = -(pcVar1[0xb] == cVar44);
        auVar29[0xc] = -(pcVar1[0xc] == cVar45);
        auVar29[0xd] = -(pcVar1[0xd] == cVar46);
        auVar29[0xe] = -(pcVar1[0xe] == cVar47);
        auVar29[0xf] = -(pcVar1[0xf] == cVar48);
        if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x1f,0) & 1) != 0) || (SUB161(auVar29 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
        uVar22 = uVar22 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
      if (pauStack_98 == (undefined1 (*) [16])0x0) {
        uStack_71 = 1;
        pdb_142d9c750(&pauStack_a8,1,&lStack_88,CONCAT71((int7)(uVar22 >> 8),1));
      }
      lVar18 = lStack_b0;
      if (lStack_b0 == lStack_c0) {
        uStack_71 = 1;
        puStack_c8 = puVar23;
        pdb_142db0990(&lStack_c0);
        puVar23 = puStack_c8;
      }
      *(uint *)(pbStack_b8 + lVar18 * 4) = uVar2;
      lStack_b0 = lVar18 + 1;
      uVar12 = uVar12 & (ulonglong)pauStack_a0;
      auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
      uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar17;
      if (uVar17 == 0) {
        lVar18 = 0x10;
        do {
          uVar12 = uVar12 + lVar18 & (ulonglong)pauStack_a0;
          auVar26 = *(undefined1 (*) [16])(*pauStack_a8 + uVar12);
          lVar18 = lVar18 + 0x10;
          uVar15 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
        } while (uVar15 == 0);
      }
      uVar9 = 0;
      for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar22 = uVar9 + uVar12 & (ulonglong)pauStack_a0;
      bVar25 = (*pauStack_a8)[uVar22];
      if (-1 < (char)bVar25) {
        auVar26 = *pauStack_a8;
        uVar15 = 0;
        for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
            uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar22 = (ulonglong)uVar15;
        bVar25 = (*pauStack_a8)[uVar22];
      }
      bVar21 = bVar21 >> 1;
      (*pauStack_a8)[uVar22] = bVar21;
      pauStack_a8[1][uVar22 - 0x10 & (ulonglong)pauStack_a0] = bVar21;
      lVar19 = (longlong)pauStack_a8 + uVar22 * -8;
      *(uint *)((longlong)pauStack_a8 + uVar22 * -8 + -8) = uVar2;
      *(char *)(lVar19 + -4) = (char)lVar16;
      auVar26._0_8_ = CONCAT71(0,bVar25 & 1);
      auVar26._8_4_ = uVar6;
      auVar26._12_4_ = uVar7;
      pauStack_98 = (undefined1 (*) [16])((longlong)pauStack_98 - auVar26._0_8_);
      lStack_90 = lStack_90 - auVar26._8_8_;
LAB_140b0875c:
      pauVar11 = pauStack_d8;
      bVar21 = *(byte *)(lVar19 + -4);
      if (pauStack_d8 == pauStack_e8) {
        uStack_71 = 1;
        pdb_142db0990(&pauStack_e8);
      }
      *(uint *)(*pauStack_e0 + (longlong)pauVar11 * 4) =
           (uint)bVar21 << 0x10 | (uint)bVar20 * 0x100 + uStack_104;
      pauStack_d8 = (undefined1 (*) [16])(*pauVar11 + 1);
      puVar24 = puVar23;
    }
    if (lStack_90 == 0) {
      if (lStack_c0 != 0) {
        pub_1406abac0(pbStack_b8,lStack_c0 << 2,4);
      }
      if (pauStack_e8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_e0,(longlong)pauStack_e8 << 2,4);
      }
      param_1[4] = uStack_f0;
      param_1[2] = uStack_100;
      param_1[3] = pbStack_f8;
      param_1[8] = uVar14;
      param_1[9] = 0;
      *param_1 = 0;
      param_1[5] = 0;
      param_1[6] = 8;
      param_1[7] = 0;
      if (pauStack_a0 != (undefined1 (*) [16])0x0) {
        uVar22 = (longlong)pauStack_a0 * 8 + 0x17U & 0xfffffffffffffff0;
        if (pauStack_a0[1] + uVar22 + 1 != (undefined1 *)0x0) {
          pub_1406abac0((byte *)((longlong)pauStack_a8 - uVar22),
                        (ulonglong)(pauStack_a0[1] + uVar22 + 1),0x10);
        }
      }
      return param_1;
    }
    pauStack_128 = pauStack_d8;
    pauStack_138 = pauStack_e8;
    pauStack_130 = pauStack_e0;
    lStack_110 = lStack_b0;
    lStack_120 = lStack_c0;
    pbStack_118 = pbStack_b8;
    if (uStack_f0 == uStack_100) {
      pdb_142d7e7c0(&uStack_100);
    }
    lVar16 = uVar22 * 0x30;
    *(byte **)(pbStack_f8 + lVar16 + 0x20) = pbStack_118;
    *(longlong *)(pbStack_f8 + lVar16 + 0x20 + 8) = lStack_110;
    *(undefined1 (**) [16])(pbStack_f8 + lVar16 + 0x10) = pauStack_128;
    *(longlong *)(pbStack_f8 + lVar16 + 0x10 + 8) = lStack_120;
    *(undefined1 (**) [16])(pbStack_f8 + lVar16) = pauStack_138;
    *(undefined1 (**) [16])(pbStack_f8 + lVar16 + 8) = pauStack_130;
    uStack_f0 = uVar22 + 1;
  }
  pdb_142dc7e2a(4,0x100);
LAB_140b08a1f:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

