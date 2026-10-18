// VA 0x1403c3a10, PDB extent 6495 bytes
// tiny_glade::vram_snapshot::dump_vram_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram_snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::vram_snapshot::dump_vram_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram_snapshot.rs
   Extent: 6495 */

longlong pdb_1403c3a10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
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
  undefined1 (*pauVar23) [16];
  undefined4 uVar24;
  undefined4 uVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined1 (*pauVar30) [16];
  ulonglong *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  undefined1 (*pauVar34) [16];
  ulonglong uVar35;
  byte *pbVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  undefined1 (*pauVar39) [16];
  longlong lVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  longlong lVar43;
  longlong lVar44;
  undefined1 (*pauVar45) [16];
  ulonglong uVar46;
  undefined8 uVar48;
  byte *pbVar49;
  longlong *plVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  byte bVar55;
  bool bVar56;
  byte bVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
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
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 (*pauStack_2c0) [16];
  ulonglong uStack_2b8;
  longlong lStack_2b0;
  undefined1 (*pauStack_2a8) [16];
  ulonglong uStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 (*pauStack_230) [16];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 *puStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  byte *pbStack_1e8;
  undefined1 (**ppauStack_1e0) [16];
  undefined8 *puStack_1d8;
  ulonglong *puStack_1d0;
  ulonglong uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  ulonglong uStack_e0;
  undefined1 auStack_d8 [16];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined1 *puVar47;
  
  uStack_90 = 0xfffffffffffffffe;
  lVar44 = *(longlong *)(param_1 + 0x6a8);
  pauVar45 = (undefined1 (*) [16])(lVar44 + 0x10);
  LOCK();
  bVar56 = *(char *)(lVar44 + 0x10) == '\0';
  if (bVar56) {
    *(char *)(lVar44 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_278 = param_3;
  uStack_270 = param_4;
  uStack_238 = param_4;
  lStack_168 = param_2;
  uStack_160 = param_3;
  if (!bVar56) {
    pdb_142dbd1a0(pauVar45,param_2,1000000000);
  }
  pauStack_a0 = pauVar45;
  pdb_140e9a150(pauVar45);
  lVar44 = lVar44 + 0x18;
  pdb_140e9edf0(&uStack_2c8);
  pauVar45 = pauStack_a0;
  pdb_140e9a350();
  LOCK();
  bVar56 = (*pauVar45)[0] == '\x01';
  if (bVar56) {
    (*pauVar45)[0] = 0;
  }
  UNLOCK();
  if (!bVar56) {
    lVar44 = 0;
    pdb_142dbcef0(pauVar45);
  }
  uStack_94 = 1;
  pauVar30 = (undefined1 (*) [16])pdb_140f3bda0();
  if (pauVar30[1][0] == '\x01') {
    lStack_c8 = *(longlong *)*pauVar30;
    lVar44 = *(longlong *)(*pauVar30 + 8);
  }
  else {
    uStack_94 = 1;
    lStack_c8 = pdb_140f4fd10();
    *(longlong *)*pauVar30 = lStack_c8;
    *(longlong *)(*pauVar30 + 8) = lVar44;
    pauVar30[1][0] = 1;
    pauVar45 = pauVar30;
  }
  *(longlong *)*pauVar30 = lStack_c8 + 1;
  uVar25 = _UNK_142e47bfc;
  uVar24 = _UNK_142e47bf8;
  auStack_d8._8_8_ = _UNK_142f4f098;
  auStack_d8._0_8_ = _DAT_142f4f090;
  pauStack_e8 = _DAT_142f4f080;
  uStack_e0 = _UNK_142f4f088;
  pauVar34 = *(undefined1 (**) [16])(lStack_168 + 0x68);
  lStack_110 = *(longlong *)(lStack_168 + 0x80);
  auVar58 = *pauVar34;
  pauVar30 = pauVar34 + 1;
  pauVar42 = (undefined1 (*) [16])
             (ulonglong)
             ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
  iVar29 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lStack_c0 = lVar44;
  while( true ) {
    uVar54 = (uint)pauVar42;
    if (lStack_110 == 0) break;
    if ((short)pauVar42 == 0) {
      do {
        auVar58 = *pauVar30;
        pauVar34 = pauVar34 + -0x30;
        pauVar30 = pauVar30 + 1;
        uVar54 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar54 == 0);
    }
    uVar28 = 0;
    for (uVar3 = uVar54; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar28 = uVar28 + 1;
    }
    pauVar42 = (undefined1 (*) [16])(ulonglong)(uVar54 - 1 & uVar54);
    pauVar39 = *(undefined1 (**) [16])pauVar34[(ulonglong)uVar28 * -3 + -1];
    pauStack_a8 = (undefined1 (*) [16])
                  (*pauVar39 + *(longlong *)(pauVar34[(ulonglong)uVar28 * -3 + -1] + 8) * 8);
    lStack_110 = lStack_110 + -1;
    pauStack_f0 = pauVar42;
    pauStack_b8 = pauVar30;
    pauStack_b0 = pauVar34;
    while (pauVar34 = pauStack_b0, pauVar39 != pauStack_a8) {
      uStack_91 = 1;
      puVar31 = (ulonglong *)pdb_140e17390(pauVar39);
      pauStack_208 = (undefined1 (*) [16])*puVar31;
      uVar35 = puVar31[1];
      uStack_91 = 1;
      pauStack_200 = (undefined1 (*) [16])uVar35;
      pauStack_a0 = pauStack_208;
      puVar32 = (undefined1 *)pdb_1400afc40(&lStack_c8,&pauStack_208);
      pauVar45 = pauStack_e8;
      pauStack_f8 = (undefined1 (*) [16])(*pauVar39 + 8);
      bVar55 = (byte)((ulonglong)puVar32 >> 0x38);
      bVar57 = bVar55 >> 1;
      auVar58 = ZEXT216(CONCAT11(bVar57,bVar57));
      auVar58 = pshuflw(auVar58,auVar58,0);
      pauVar34 = (undefined1 (*) [16])0x0;
      puVar47 = puVar32;
      uVar38 = uStack_e0;
      while( true ) {
        uVar46 = (ulonglong)puVar47 & uVar38;
        pcVar1 = *pauVar45 + uVar46;
        cVar7 = *pcVar1;
        cVar8 = pcVar1[1];
        cVar9 = pcVar1[2];
        cVar10 = pcVar1[3];
        cVar11 = pcVar1[4];
        cVar12 = pcVar1[5];
        cVar13 = pcVar1[6];
        cVar14 = pcVar1[7];
        cVar15 = pcVar1[8];
        cVar16 = pcVar1[9];
        cVar17 = pcVar1[10];
        cVar18 = pcVar1[0xb];
        cVar19 = pcVar1[0xc];
        cVar20 = pcVar1[0xd];
        cVar21 = pcVar1[0xe];
        cVar22 = pcVar1[0xf];
        auVar59[0] = -(cVar7 == auVar58[0]);
        auVar59[1] = -(cVar8 == auVar58[1]);
        auVar59[2] = -(cVar9 == auVar58[2]);
        auVar59[3] = -(cVar10 == auVar58[3]);
        auVar59[4] = -(cVar11 == auVar58[4]);
        auVar59[5] = -(cVar12 == auVar58[5]);
        auVar59[6] = -(cVar13 == auVar58[6]);
        auVar59[7] = -(cVar14 == auVar58[7]);
        auVar59[8] = -(cVar15 == auVar58[0]);
        auVar59[9] = -(cVar16 == auVar58[1]);
        auVar59[10] = -(cVar17 == auVar58[2]);
        auVar59[0xb] = -(cVar18 == auVar58[3]);
        auVar59[0xc] = -(cVar19 == auVar58[4]);
        auVar59[0xd] = -(cVar20 == auVar58[5]);
        auVar59[0xe] = -(cVar21 == auVar58[6]);
        auVar59[0xf] = -(cVar22 == auVar58[7]);
        uVar26 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
        ;
        uVar54 = (uint)uVar26;
        pauVar39 = pauStack_100;
        pauVar42 = pauStack_f0;
        pauVar30 = pauStack_b8;
        while (pauStack_100 = pauVar34, pauStack_f0 = pauVar42, pauStack_b8 = pauVar30, uVar26 != 0)
        {
          uVar28 = 0;
          for (uVar3 = uVar54; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          uVar33 = uVar28 + uVar46 & uVar38;
          uStack_108 = uVar38;
          if (*(ulonglong *)((longlong)pauVar45 + uVar33 * -0x28 + -0x20) == uVar35) {
            lVar44 = (longlong)pauVar45 + uVar33 * -0x28;
            iVar27 = pub_142e32750(*(undefined8 *)(lVar44 + -0x28),pauStack_a0,uVar35);
            if (iVar27 == 0) {
              lVar43 = *(longlong *)(lVar44 + -8);
              pauVar30 = pauStack_b8;
              pauVar42 = pauStack_f0;
              pauVar39 = pauStack_f8;
              if (lVar43 != *(longlong *)(lVar44 + -0x18)) goto LAB_1403c3bf0;
              goto LAB_1403c3e25;
            }
          }
          uVar26 = (ushort)(uVar54 - 1) & (ushort)uVar54;
          uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar26);
          pauVar34 = pauStack_100;
          uVar38 = uStack_108;
          pauVar39 = pauStack_100;
          pauVar42 = pauStack_f0;
          pauVar30 = pauStack_b8;
        }
        auVar63[0] = -(cVar7 == (char)iVar29);
        auVar63[1] = -(cVar8 == (char)((uint)iVar29 >> 8));
        auVar63[2] = -(cVar9 == (char)((uint)iVar29 >> 0x10));
        auVar63[3] = -(cVar10 == (char)((uint)iVar29 >> 0x18));
        auVar63[4] = -(cVar11 == (char)iVar4);
        auVar63[5] = -(cVar12 == (char)((uint)iVar4 >> 8));
        auVar63[6] = -(cVar13 == (char)((uint)iVar4 >> 0x10));
        auVar63[7] = -(cVar14 == (char)((uint)iVar4 >> 0x18));
        auVar63[8] = -(cVar15 == (char)iVar5);
        auVar63[9] = -(cVar16 == (char)((uint)iVar5 >> 8));
        auVar63[10] = -(cVar17 == (char)((uint)iVar5 >> 0x10));
        auVar63[0xb] = -(cVar18 == (char)((uint)iVar5 >> 0x18));
        auVar63[0xc] = -(cVar19 == (char)iVar6);
        auVar63[0xd] = -(cVar20 == (char)((uint)iVar6 >> 8));
        auVar63[0xe] = -(cVar21 == (char)((uint)iVar6 >> 0x10));
        auVar63[0xf] = -(cVar22 == (char)((uint)iVar6 >> 0x18));
        if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x1f,0) & 1) != 0) || (SUB161(auVar63 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
        puVar47 = pauStack_100[1] + uVar46;
        pauVar34 = pauStack_100 + 1;
        pauStack_100 = pauVar39;
      }
      pauStack_100 = pauVar39;
      if (auStack_d8._0_8_ == 0) {
        uStack_91 = 1;
        pdb_142d826b0(&pauStack_e8,1,&lStack_c8);
        uVar38 = uStack_e0;
        pauVar45 = pauStack_e8;
      }
      uVar46 = (ulonglong)puVar32 & uVar38;
      auVar58 = *(undefined1 (*) [16])(*pauVar45 + uVar46);
      uVar26 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar58[0xf] >> 7) << 0xf;
      uVar54 = (uint)uVar26;
      if (uVar26 == 0) {
        lVar44 = 0x10;
        do {
          uVar46 = uVar46 + lVar44 & uVar38;
          auVar58 = *(undefined1 (*) [16])(*pauVar45 + uVar46);
          lVar44 = lVar44 + 0x10;
          uVar54 = (uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
        } while (uVar54 == 0);
      }
      uVar28 = 0;
      for (; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      uVar46 = uVar28 + uVar46 & uVar38;
      bVar57 = (*pauVar45)[uVar46];
      if (-1 < (char)bVar57) {
        auVar58 = *pauVar45;
        uVar54 = 0;
        for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar58[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
            uVar28 = uVar28 >> 1 | 0x80000000) {
          uVar54 = uVar54 + 1;
        }
        uVar46 = (ulonglong)uVar54;
        bVar57 = (*pauVar45)[uVar46];
      }
      bVar55 = bVar55 >> 1;
      (*pauVar45)[uVar46] = bVar55;
      pauVar45[1][uVar46 - 0x10 & uVar38] = bVar55;
      lVar44 = (longlong)pauVar45 + uVar46 * -0x28;
      *(undefined1 (**) [16])((longlong)pauVar45 + uVar46 * -0x28 + -0x28) = pauStack_a0;
      *(ulonglong *)((longlong)pauVar45 + uVar46 * -0x28 + -0x20) = uVar35;
      *(undefined8 *)((longlong)pauVar45 + uVar46 * -0x28 + -0x18) = 0;
      *(undefined8 *)((longlong)pauVar45 + uVar46 * -0x28 + -0x10) = 1;
      *(undefined8 *)((longlong)pauVar45 + uVar46 * -0x28 + -8) = 0;
      auVar61._0_8_ = CONCAT71(0,bVar57 & 1);
      auVar61._8_4_ = uVar24;
      auVar61._12_4_ = uVar25;
      auStack_d8._0_8_ = auStack_d8._0_8_ - auVar61._0_8_;
      auStack_d8._8_8_ = auStack_d8._8_8_ - auVar61._8_8_;
      lVar43 = *(longlong *)(lVar44 + -8);
      pauVar39 = pauStack_f8;
      if (lVar43 == *(longlong *)(lVar44 + -0x18)) {
LAB_1403c3e25:
        pauVar39 = pauStack_f8;
        uStack_91 = 1;
        pdb_142d7e910(lVar44 + -0x18);
      }
LAB_1403c3bf0:
      *(undefined1 *)(*(longlong *)(lVar44 + -0x10) + lVar43) = 0;
      pauVar45 = (undefined1 (*) [16])(lVar43 + 1);
      *(undefined1 (**) [16])(lVar44 + -8) = pauVar45;
    }
  }
  pauVar34 = *(undefined1 (**) [16])(lStack_168 + 0x88);
  auVar58 = *pauVar34;
  pauVar30 = pauVar34 + 1;
  pauVar42 = (undefined1 (*) [16])
             (ulonglong)
             ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
  lVar44 = *(longlong *)(lStack_168 + 0xa0);
  while( true ) {
    uVar54 = (uint)pauVar42;
    if (lVar44 == 0) break;
    if ((short)pauVar42 == 0) {
      do {
        auVar58 = *pauVar30;
        pauVar34 = pauVar34 + -0x20;
        pauVar30 = pauVar30 + 1;
        uVar54 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar54 == 0);
    }
    iVar29 = 0;
    for (uVar28 = uVar54; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
      iVar29 = iVar29 + 1;
    }
    pauVar42 = (undefined1 (*) [16])(ulonglong)(uVar54 - 1 & uVar54);
    pauVar39 = *(undefined1 (**) [16])
                ((longlong)pauVar34 + (-0x10 - (ulonglong)(uint)(iVar29 << 5)));
    pauStack_f8 = (undefined1 (*) [16])
                  (*pauVar39 +
                  *(longlong *)((longlong)pauVar34 + (-8 - (ulonglong)(uint)(iVar29 << 5))) * 8);
    lStack_110 = lVar44 + -1;
    pauStack_b8 = pauVar42;
    pauStack_b0 = pauVar34;
    pauStack_a8 = pauVar30;
    while (lVar44 = lStack_110, pauVar34 = pauStack_b0, pauVar39 != pauStack_f8) {
      uStack_91 = 1;
      pauStack_a0 = pauVar39;
      puVar31 = (ulonglong *)pdb_140e17350();
      pauVar45 = (undefined1 (*) [16])*puVar31;
      uVar35 = puVar31[1];
      uStack_91 = 1;
      pauStack_208 = pauVar45;
      pauStack_200 = (undefined1 (*) [16])uVar35;
      pauVar34 = (undefined1 (*) [16])pdb_1400afc40(&lStack_c8);
      pauVar39 = pauStack_e8;
      pauStack_a0 = (undefined1 (*) [16])(*pauStack_a0 + 8);
      bVar55 = (byte)((ulonglong)pauVar34 >> 0x38);
      bVar57 = bVar55 >> 1;
      auVar58 = ZEXT216(CONCAT11(bVar57,bVar57));
      auVar58 = pshuflw(auVar58,auVar58,0);
      pauVar41 = (undefined1 (*) [16])0x0;
      pauVar30 = pauVar34;
      uVar38 = uStack_e0;
      while( true ) {
        uVar46 = (ulonglong)pauVar30 & uVar38;
        pcVar1 = *pauVar39 + uVar46;
        cVar7 = *pcVar1;
        cVar8 = pcVar1[1];
        cVar9 = pcVar1[2];
        cVar10 = pcVar1[3];
        cVar11 = pcVar1[4];
        cVar12 = pcVar1[5];
        cVar13 = pcVar1[6];
        cVar14 = pcVar1[7];
        cVar15 = pcVar1[8];
        cVar16 = pcVar1[9];
        cVar17 = pcVar1[10];
        cVar18 = pcVar1[0xb];
        cVar19 = pcVar1[0xc];
        cVar20 = pcVar1[0xd];
        cVar21 = pcVar1[0xe];
        cVar22 = pcVar1[0xf];
        auVar60[0] = -(cVar7 == auVar58[0]);
        auVar60[1] = -(cVar8 == auVar58[1]);
        auVar60[2] = -(cVar9 == auVar58[2]);
        auVar60[3] = -(cVar10 == auVar58[3]);
        auVar60[4] = -(cVar11 == auVar58[4]);
        auVar60[5] = -(cVar12 == auVar58[5]);
        auVar60[6] = -(cVar13 == auVar58[6]);
        auVar60[7] = -(cVar14 == auVar58[7]);
        auVar60[8] = -(cVar15 == auVar58[0]);
        auVar60[9] = -(cVar16 == auVar58[1]);
        auVar60[10] = -(cVar17 == auVar58[2]);
        auVar60[0xb] = -(cVar18 == auVar58[3]);
        auVar60[0xc] = -(cVar19 == auVar58[4]);
        auVar60[0xd] = -(cVar20 == auVar58[5]);
        auVar60[0xe] = -(cVar21 == auVar58[6]);
        auVar60[0xf] = -(cVar22 == auVar58[7]);
        uVar26 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf
        ;
        uVar54 = (uint)uVar26;
        pauVar23 = pauStack_100;
        pauVar42 = pauStack_b8;
        pauVar30 = pauStack_a8;
        while (pauStack_100 = pauVar41, pauStack_b8 = pauVar42, pauStack_a8 = pauVar30, uVar26 != 0)
        {
          uVar28 = 0;
          for (uVar3 = uVar54; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          uVar33 = uVar28 + uVar46 & uVar38;
          uStack_108 = uVar38;
          pauStack_f0 = pauVar34;
          if (*(ulonglong *)((longlong)pauVar39 + uVar33 * -0x28 + -0x20) == uVar35) {
            lVar44 = (longlong)pauVar39 + uVar33 * -0x28;
            iVar29 = pub_142e32750(*(undefined8 *)(lVar44 + -0x28),pauVar45,uVar35);
            if (iVar29 == 0) {
              lVar43 = *(longlong *)(lVar44 + -8);
              pauVar42 = pauStack_b8;
              pauVar30 = pauStack_a8;
              if (lVar43 != *(longlong *)(lVar44 + -0x18)) goto LAB_1403c3f70;
              goto LAB_1403c4197;
            }
          }
          uVar26 = (ushort)(uVar54 - 1) & (ushort)uVar54;
          uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar26);
          pauVar34 = pauStack_f0;
          pauVar41 = pauStack_100;
          uVar38 = uStack_108;
          pauVar23 = pauStack_100;
          pauVar42 = pauStack_b8;
          pauVar30 = pauStack_a8;
        }
        auVar64[0] = -(cVar7 == -1);
        auVar64[1] = -(cVar8 == -1);
        auVar64[2] = -(cVar9 == -1);
        auVar64[3] = -(cVar10 == -1);
        auVar64[4] = -(cVar11 == -1);
        auVar64[5] = -(cVar12 == -1);
        auVar64[6] = -(cVar13 == -1);
        auVar64[7] = -(cVar14 == -1);
        auVar64[8] = -(cVar15 == -1);
        auVar64[9] = -(cVar16 == -1);
        auVar64[10] = -(cVar17 == -1);
        auVar64[0xb] = -(cVar18 == -1);
        auVar64[0xc] = -(cVar19 == -1);
        auVar64[0xd] = -(cVar20 == -1);
        auVar64[0xe] = -(cVar21 == -1);
        auVar64[0xf] = -(cVar22 == -1);
        if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x1f,0) & 1) != 0) || (SUB161(auVar64 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
        pauVar30 = (undefined1 (*) [16])(pauStack_100[1] + uVar46);
        pauVar41 = pauStack_100 + 1;
        pauStack_100 = pauVar23;
      }
      pauStack_100 = pauVar23;
      if (auStack_d8._0_8_ == 0) {
        uStack_91 = 1;
        pdb_142d826b0(&pauStack_e8,1,&lStack_c8);
        pauVar39 = pauStack_e8;
        uVar38 = uStack_e0;
      }
      uVar46 = (ulonglong)pauVar34 & uVar38;
      auVar58 = *(undefined1 (*) [16])(*pauVar39 + uVar46);
      uVar26 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar58[0xf] >> 7) << 0xf;
      uVar54 = (uint)uVar26;
      if (uVar26 == 0) {
        lVar44 = 0x10;
        do {
          uVar46 = uVar46 + lVar44 & uVar38;
          auVar58 = *(undefined1 (*) [16])(*pauVar39 + uVar46);
          lVar44 = lVar44 + 0x10;
          uVar54 = (uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
        } while (uVar54 == 0);
      }
      uVar28 = 0;
      for (; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      uVar46 = uVar28 + uVar46 & uVar38;
      bVar57 = (*pauVar39)[uVar46];
      if (-1 < (char)bVar57) {
        auVar58 = *pauVar39;
        uVar54 = 0;
        for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar58[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
            uVar28 = uVar28 >> 1 | 0x80000000) {
          uVar54 = uVar54 + 1;
        }
        uVar46 = (ulonglong)uVar54;
        bVar57 = (*pauVar39)[uVar46];
      }
      bVar55 = bVar55 >> 1;
      (*pauVar39)[uVar46] = bVar55;
      pauVar39[1][uVar46 - 0x10 & uVar38] = bVar55;
      lVar44 = (longlong)pauVar39 + uVar46 * -0x28;
      *(undefined1 (**) [16])((longlong)pauVar39 + uVar46 * -0x28 + -0x28) = pauVar45;
      *(ulonglong *)((longlong)pauVar39 + uVar46 * -0x28 + -0x20) = uVar35;
      *(undefined8 *)((longlong)pauVar39 + uVar46 * -0x28 + -0x18) = 0;
      *(undefined8 *)((longlong)pauVar39 + uVar46 * -0x28 + -0x10) = 1;
      *(undefined8 *)((longlong)pauVar39 + uVar46 * -0x28 + -8) = 0;
      auVar62._0_8_ = CONCAT71(0,bVar57 & 1);
      auVar62._8_4_ = uVar24;
      auVar62._12_4_ = uVar25;
      auStack_d8._0_8_ = auStack_d8._0_8_ - auVar62._0_8_;
      auStack_d8._8_8_ = auStack_d8._8_8_ - auVar62._8_8_;
      lVar43 = *(longlong *)(lVar44 + -8);
      if (lVar43 == *(longlong *)(lVar44 + -0x18)) {
LAB_1403c4197:
        uStack_91 = 1;
        pdb_142d7e910(lVar44 + -0x18);
      }
LAB_1403c3f70:
      *(undefined1 *)(*(longlong *)(lVar44 + -0x10) + lVar43) = 1;
      pauVar45 = (undefined1 (*) [16])(lVar43 + 1);
      *(undefined1 (**) [16])(lVar44 + -8) = pauVar45;
      pauVar39 = pauStack_a0;
    }
  }
  puStack_1f8 = *pauStack_e8 + uStack_e0 + 1;
  auVar58 = *pauStack_e8;
  pauStack_230 = (undefined1 (*) [16])&uStack_97;
  pauStack_208 = pauStack_e8;
  pauStack_200 = pauStack_e8 + 1;
  pauStack_1f0 = (undefined1 (*) [16])
                 CONCAT62(pauStack_1f0._2_6_,
                          ~((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar58[0xf] >> 7) << 0xf));
  uStack_91 = 1;
  uVar35 = pdb_140268990(&pauStack_208,auStack_d8._8_8_,0,&pauStack_230);
  if (uStack_2b8 == 0) {
    pbVar36 = (byte *)0x8;
  }
  else {
    pauVar45 = (undefined1 (*) [16])(uStack_2b8 * 8);
    pdb_14007ee60();
    pbVar36 = pub_1406abae0((ulonglong)pauVar45,8);
    if (pbVar36 == (byte *)0x0) {
      uStack_91 = 1;
      pdb_142dc7e2a(8,pauVar45);
      goto LAB_1403c4c47;
    }
  }
  uStack_128 = uStack_2b8;
  uStack_118 = uStack_2b8;
  pbStack_120 = pbVar36;
  if (uStack_2a0 >> 0x3a != 0) {
    uVar48 = 0;
LAB_1403c42f1:
    uStack_95 = 1;
    pdb_142dc7e2a(uVar48,pauVar45);
    goto LAB_1403c4c47;
  }
  uStack_108 = uVar35;
  if (uStack_2a0 == 0) {
    pbVar36 = (byte *)0x8;
  }
  else {
    pauVar45 = (undefined1 (*) [16])(uStack_2a0 << 5);
    pdb_14007ee60();
    uVar48 = 8;
    pbVar36 = pub_1406abab0((ulonglong)pauVar45,8);
    if (pbVar36 == (byte *)0x0) goto LAB_1403c42f1;
  }
  uStack_140 = uStack_2a0;
  uStack_130 = 0;
  pauStack_a0 = (undefined1 (*) [16])((longlong)pauStack_2a8 + uStack_2a0 * 0x18);
  pauStack_f0 = pauStack_2c0 + 0xb;
  pauStack_a8 = pauStack_2c0;
  pauStack_b8 = pauStack_2c0 + 2;
  lVar44 = 0;
  pauStack_100 = pauStack_2a8;
  pauVar45 = pauStack_2a8;
  pbStack_138 = pbVar36;
  while( true ) {
    uVar35 = uStack_130;
    pauStack_f8 = (undefined1 (*) [16])CONCAT71(pauStack_f8._1_7_,pauVar45 != pauStack_a0);
    if (pauVar45 == pauStack_a0) break;
    uVar38 = *(ulonglong *)*pauVar45;
    uVar46 = *(ulonglong *)(*pauVar45 + 8);
    if ((uVar46 < uVar38) || (uStack_2b8 < uVar46)) {
      uStack_93 = 1;
      pdb_142dc8420(uVar38,uVar46,uStack_2b8,&UNK_142f4ee30);
      goto LAB_1403c4c47;
    }
    if (uVar46 - uVar38 == 0) {
      bVar55 = 2;
      lVar43 = 0;
    }
    else {
      uVar33 = ((uVar46 - uVar38) * 0x30 >> 4) * -0x5555555555555555;
      if (uVar33 - 1 < 3) {
        uVar52 = 0;
        lVar43 = 0;
LAB_1403c44a7:
        lVar51 = 0;
        do {
          lVar43 = lVar43 + *(longlong *)(pauStack_b8[uVar38 * 3 + uVar52 * 3] + lVar51);
          lVar51 = lVar51 + 0x30;
        } while ((ulonglong)(((uint)uVar33 & 3) << 4) * 3 != lVar51);
      }
      else {
        pauVar30 = pauStack_f0 + uVar38 * 3;
        uVar52 = 0;
        lVar43 = 0;
        do {
          lVar43 = lVar43 + *(longlong *)pauVar30[-9] + *(longlong *)pauVar30[-6] +
                   *(longlong *)pauVar30[-3] + *(longlong *)*pauVar30;
          uVar52 = uVar52 + 4;
          pauVar30 = pauVar30 + 0xc;
        } while ((uVar33 & 0x7fffffffffffffc) != uVar52);
        if ((uVar33 & 3) != 0) goto LAB_1403c44a7;
      }
      bVar55 = pauStack_a8[uVar38 * 3 + 2][8];
    }
    if (uStack_118 < uVar46) {
      uStack_93 = 1;
      pdb_142dc8420(uVar38,uVar46,uStack_118,&UNK_142f4ee48);
      goto LAB_1403c4c47;
    }
    if (uVar46 - uVar38 != 0) {
      pbVar36 = pbStack_120 + uVar38 * 8;
      uVar33 = (uVar46 * 8 + uVar38 * -8) - 8;
      pbVar49 = pbVar36;
      if (0x17 < uVar33) {
        uVar33 = (uVar33 >> 3) + 1;
        uVar53 = uVar33 & 0xfffffffffffffffc;
        pbVar49 = pbVar36 + uVar53 * 8;
        auVar58._8_4_ = (int)lVar44;
        auVar58._0_8_ = lVar44;
        auVar58._12_4_ = (int)((ulonglong)lVar44 >> 0x20);
        uVar52 = 0;
        do {
          *(undefined1 (*) [16])(pbStack_120 + uVar52 * 8 + uVar38 * 8) = auVar58;
          *(undefined1 (*) [16])(pbStack_120 + uVar52 * 8 + uVar38 * 8 + 0x10) = auVar58;
          uVar52 = uVar52 + 4;
        } while (uVar53 != uVar52);
        if (uVar33 == uVar53) goto LAB_1403c457c;
      }
      do {
        *(longlong *)pbVar49 = lVar44;
        pbVar49 = pbVar49 + 8;
      } while (pbVar49 != pbVar36 + (uVar46 - uVar38) * 8);
    }
LAB_1403c457c:
    lVar51 = *(longlong *)pauVar45[1];
    if (uStack_130 == uStack_140) {
      uStack_93 = 1;
      pdb_142d7e6e0(&uStack_140);
    }
    pauVar45 = (undefined1 (*) [16])(pauVar45[1] + 8);
    lVar44 = lVar44 + 1;
    lVar40 = uVar35 * 0x20;
    *(longlong *)(pbStack_138 + lVar40) = lVar51;
    *(longlong *)(pbStack_138 + lVar40 + 8) = lVar43;
    *(longlong *)(pbStack_138 + lVar40 + 0x10) = lVar51 - lVar43;
    pbStack_138[lVar40 + 0x18] = bVar55;
    uStack_130 = uVar35 + 1;
  }
  uStack_250 = 0;
  uStack_240 = 0;
  pauStack_1f0 = pauStack_a8 + uStack_2b8 * 3;
  pauStack_208 = pauStack_a8;
  pauStack_200 = pauStack_a8;
  puStack_1f8 = (undefined1 *)uStack_2c8;
  pbStack_1e8 = (byte *)0x0;
  ppauStack_1e0 = &pauStack_e8;
  puStack_1d8 = &uStack_250;
  puStack_1d0 = &uStack_128;
  uStack_96 = 1;
  pdb_140173c80(&pauStack_268,&pauStack_208);
  puVar47 = puStack_258;
  pauVar45 = pauStack_260;
  if ((undefined1 *)0x1 < puStack_258) {
    pauStack_208 = (undefined1 (*) [16])&uStack_97;
    if (puStack_258 < (undefined1 *)0x15) {
      uStack_92 = 1;
      pdb_1400e1790(pauStack_260,puStack_258,1,&pauStack_208);
    }
    else {
      uStack_92 = 1;
      pdb_140224fa0(pauStack_260,puStack_258,&pauStack_208);
    }
  }
  puStack_1f8 = *pauStack_e8 + uStack_e0 + 1;
  auVar58 = *pauStack_e8;
  pauStack_208 = pauStack_e8;
  pauStack_200 = pauStack_e8 + 1;
  pauStack_1f0 = (undefined1 (*) [16])
                 CONCAT62(pauStack_1f0._2_6_,
                          ~((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar58[0xf] >> 7) << 0xf));
  uStack_92 = 1;
  pauStack_230 = (undefined1 (*) [16])&uStack_97;
  uStack_1c0 = pdb_140268990(&pauStack_208,auStack_d8._8_8_);
  uVar48 = uStack_238;
  if (puVar47 == (undefined1 *)0x0) {
    lStack_1b8 = 0;
  }
  else {
    uVar35 = (ulonglong)((uint)puVar47 & 3);
    if (puVar47 < (undefined1 *)0x4) {
      uVar38 = 0;
      lStack_1b8 = 0;
    }
    else {
      plVar50 = (longlong *)(pauVar45[0xb] + 8);
      uVar38 = 0;
      lStack_1b8 = 0;
      do {
        lStack_1b8 = (ulonglong)(plVar50[-7] == 0) +
                     (ulonglong)(plVar50[-0x15] == 0) + lStack_1b8 + (ulonglong)(plVar50[-0xe] == 0)
                     + (ulonglong)(*plVar50 == 0);
        uVar38 = uVar38 + 4;
        plVar50 = plVar50 + 0x1c;
      } while (((ulonglong)puVar47 & 0xfffffffffffffffc) != uVar38);
      if (uVar35 == 0) goto LAB_1403c4742;
    }
    lVar44 = 0;
    do {
      lStack_1b8 = lStack_1b8 +
                   (ulonglong)
                   (*(longlong *)((longlong)pauVar45 + lVar44 + uVar38 * 0x38 + 0x10) == 0);
      lVar44 = lVar44 + 0x38;
    } while (uVar35 * 0x38 - lVar44 != 0);
  }
LAB_1403c4742:
  uStack_188 = uStack_250;
  uStack_180 = uStack_248;
  uStack_178 = uStack_240;
  pauStack_208 = pauStack_268;
  pauStack_200 = pauStack_260;
  puStack_1f8 = puStack_258;
  pauStack_1f0 = (undefined1 (*) [16])uStack_140;
  pbStack_1e8 = pbStack_138;
  ppauStack_1e0 = (undefined1 (**) [16])uStack_130;
  puStack_1d8 = (undefined8 *)&UNK_142f4ed4a;
  puStack_1d0 = (ulonglong *)0xbc;
  uStack_1c8 = uStack_108;
  lStack_1b0 = lStack_298;
  lStack_1a8 = lStack_290;
  lStack_1a0 = lStack_290 - lStack_298;
  uStack_198 = uStack_288;
  uStack_190 = uStack_280;
  uVar37 = uStack_238;
  lVar44 = pdb_140f3eaf0(uStack_160);
  if (lVar44 == 0) {
LAB_1403c4837:
    pdb_14007ee60();
    pauStack_150 = (undefined1 (*) [16])pub_1406abab0(0x80,1);
    if (pauStack_150 == (undefined1 (*) [16])0x0) {
      pdb_142dc7e2a(1,0x80);
LAB_1403c4c47:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pauStack_158 = (undefined1 (*) [16])0x80;
    uStack_148 = 0;
    pauStack_230 = (undefined1 (*) [16])&pauStack_158;
    puStack_228 = &UNK_142f4ed48;
    uStack_220 = 2;
    uStack_218 = 0;
    uStack_210 = 0;
    pauVar45 = (undefined1 (*) [16])pdb_1400bbea0(&pauStack_208,&pauStack_230);
    if (pauVar45 != (undefined1 (*) [16])0x0) {
      if (pauStack_158 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_150,(ulonglong)pauStack_158,1);
      }
LAB_1403c48eb:
      lVar44 = pdb_142d88d30(pauVar45);
      goto LAB_1403c48f7;
    }
    pauVar45 = pauStack_150;
    if (SBORROW8(0,(longlong)pauStack_158)) goto LAB_1403c48eb;
    pauStack_a0 = pauStack_158;
    pauStack_a8 = pauStack_150;
    uVar48 = pdb_140f561c0(uStack_160,uVar48,pauStack_150,uStack_148);
    if (pauStack_a0 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_a8,(ulonglong)pauStack_a0,1);
    }
    lVar44 = pdb_1401648f0(uVar48,&uStack_278);
    uStack_92 = 0;
    pdb_1404c61e0(&pauStack_208);
    if (uStack_128 != 0) {
      pub_1406abac0(pbStack_120,uStack_128 << 3,8);
    }
    uVar35 = uStack_e0;
    if (uStack_e0 == 0) goto LAB_1403c4b3a;
    if (auStack_d8._8_8_ != 0) {
      auVar58 = *pauStack_e8;
      pauVar45 = pauStack_e8 + 1;
      uVar54 = ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
      pauVar30 = pauStack_e8;
      lVar43 = auStack_d8._8_8_;
      do {
        if ((short)uVar54 == 0) {
          do {
            auVar58 = *pauVar45;
            pauVar30 = pauVar30 + -0x28;
            pauVar45 = pauVar45 + 1;
            uVar54 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar54 == 0);
        }
        uVar28 = 0;
        for (uVar3 = uVar54; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar38 = *(ulonglong *)((longlong)pauVar30 + (ulonglong)uVar28 * -0x28 + -0x18);
        if (uVar38 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar30 + (ulonglong)uVar28 * -0x28 + -0x10),uVar38,1)
          ;
        }
        uVar54 = uVar54 - 1 & uVar54;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
  }
  else {
    pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,1);
    lStack_2d8 = lVar44;
    uStack_2d0 = uVar37;
    uVar37 = pdb_140f46c40(&pauStack_230,lVar44,uVar37);
    lVar44 = pdb_140164cb0(uVar37,&lStack_2d8);
    if (lVar44 == 0) goto LAB_1403c4837;
LAB_1403c48f7:
    uStack_92 = 0;
    pdb_1404c61e0(&pauStack_208);
    if (uStack_128 != 0) {
      pub_1406abac0(pbStack_120,uStack_128 << 3,8);
    }
    uVar35 = uStack_e0;
    if (uStack_e0 == 0) goto LAB_1403c4b3a;
    if (auStack_d8._8_8_ != 0) {
      auVar58 = *pauStack_e8;
      pauVar45 = pauStack_e8 + 1;
      uVar54 = ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
      pauVar30 = pauStack_e8;
      lVar43 = auStack_d8._8_8_;
      do {
        if ((short)uVar54 == 0) {
          do {
            auVar58 = *pauVar45;
            pauVar30 = pauVar30 + -0x28;
            pauVar45 = pauVar45 + 1;
            uVar54 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar54 == 0);
        }
        uVar28 = 0;
        for (uVar3 = uVar54; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar38 = *(ulonglong *)((longlong)pauVar30 + (ulonglong)uVar28 * -0x28 + -0x18);
        if (uVar38 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar30 + (ulonglong)uVar28 * -0x28 + -0x10),uVar38,1)
          ;
        }
        uVar54 = uVar54 - 1 & uVar54;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
  }
  uVar38 = uVar35 * 0x28 + 0x37 & 0xfffffffffffffff0;
  uVar35 = uVar35 + uVar38 + 0x11;
  if (uVar35 != 0) {
    pub_1406abac0((byte *)((longlong)pauStack_e8 - uVar38),uVar35,0x10);
  }
LAB_1403c4b3a:
  if (lStack_2b0 != 0) {
    pub_1406abac0((byte *)pauStack_100,lStack_2b0 * 0x18,8);
  }
  return lVar44;
}

