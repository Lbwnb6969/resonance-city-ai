// VA 0x141dd8000, PDB extent 1433 bytes
// lang_lib::language_library::LanguageLibrary::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/language_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: lang_lib::language_library::LanguageLibrary::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/language_library.rs
   Extent: 1433 */

byte * pdb_141dd8000(longlong param_1,longlong param_2,undefined *param_3)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  char cVar23;
  ulonglong *puVar24;
  undefined *puVar25;
  char cVar26;
  ushort uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  byte *pbVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  byte *pbVar38;
  undefined8 uVar39;
  bool bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined *puStack_120;
  byte *pbStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  longlong **pplStack_c8;
  longlong lStack_c0;
  undefined *puStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar36 = param_2;
  lStack_c0 = param_2;
  puStack_b8 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar31 = pdb_1400af950(param_1 + 0x30,param_2,param_3);
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar35 = *(ulonglong *)(param_1 + 0x18);
    bVar41 = (byte)(uVar31 >> 0x39);
    auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
    auVar42 = pshuflw(auVar42,auVar42,0);
    lVar36 = 0;
    iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    unaff_XMM7_Ba = (char)iVar28;
    unaff_XMM7_Bb = (char)((uint)iVar28 >> 8);
    unaff_XMM7_Bc = (char)((uint)iVar28 >> 0x10);
    unaff_XMM7_Bd = (char)((uint)iVar28 >> 0x18);
    iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    unaff_XMM7_Be = (char)iVar28;
    unaff_XMM7_Bf = (char)((uint)iVar28 >> 8);
    unaff_XMM7_Bg = (char)((uint)iVar28 >> 0x10);
    unaff_XMM7_Bh = (char)((uint)iVar28 >> 0x18);
    iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    unaff_XMM7_Bi = (char)iVar28;
    unaff_XMM7_Bj = (char)((uint)iVar28 >> 8);
    unaff_XMM7_Bk = (char)((uint)iVar28 >> 0x10);
    unaff_XMM7_Bl = (char)((uint)iVar28 >> 0x18);
    iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    unaff_XMM7_Bm = (char)iVar28;
    unaff_XMM7_Bn = (char)((uint)iVar28 >> 8);
    unaff_XMM7_Bo = (char)((uint)iVar28 >> 0x10);
    unaff_XMM7_Bp = (char)((uint)iVar28 >> 0x18);
    while( true ) {
      uVar31 = uVar31 & uVar35;
      pcVar1 = (char *)(lVar2 + uVar31);
      cVar26 = *pcVar1;
      cVar9 = pcVar1[1];
      cVar10 = pcVar1[2];
      cVar11 = pcVar1[3];
      cVar12 = pcVar1[4];
      cVar13 = pcVar1[5];
      cVar14 = pcVar1[6];
      cVar15 = pcVar1[7];
      cVar16 = pcVar1[8];
      cVar17 = pcVar1[9];
      cVar18 = pcVar1[10];
      cVar19 = pcVar1[0xb];
      cVar20 = pcVar1[0xc];
      cVar21 = pcVar1[0xd];
      cVar22 = pcVar1[0xe];
      cVar23 = pcVar1[0xf];
      auVar43[0] = -(cVar26 == auVar42[0]);
      auVar43[1] = -(cVar9 == auVar42[1]);
      auVar43[2] = -(cVar10 == auVar42[2]);
      auVar43[3] = -(cVar11 == auVar42[3]);
      auVar43[4] = -(cVar12 == auVar42[4]);
      auVar43[5] = -(cVar13 == auVar42[5]);
      auVar43[6] = -(cVar14 == auVar42[6]);
      auVar43[7] = -(cVar15 == auVar42[7]);
      auVar43[8] = -(cVar16 == auVar42[0]);
      auVar43[9] = -(cVar17 == auVar42[1]);
      auVar43[10] = -(cVar18 == auVar42[2]);
      auVar43[0xb] = -(cVar19 == auVar42[3]);
      auVar43[0xc] = -(cVar20 == auVar42[4]);
      auVar43[0xd] = -(cVar21 == auVar42[5]);
      auVar43[0xe] = -(cVar22 == auVar42[6]);
      auVar43[0xf] = -(cVar23 == auVar42[7]);
      uVar27 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar30 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar34 = uVar4 + uVar31 & uVar35;
        uStack_90 = lVar36;
        if (param_3 == *(undefined **)(lVar2 + -0x18 + uVar34 * -0x28)) {
          lVar36 = lVar2 + uVar34 * -0x28;
          iVar28 = pub_142e32750(param_2,*(undefined8 *)(lVar36 + -0x20),param_3);
          if (iVar28 == 0) {
            return *(byte **)(lVar36 + -0x10);
          }
        }
        uVar27 = (ushort)(uVar30 - 1) & (ushort)uVar30;
        uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar27);
        lVar36 = uStack_90;
      }
      auVar45[0] = -(cVar26 == unaff_XMM7_Ba);
      auVar45[1] = -(cVar9 == unaff_XMM7_Bb);
      auVar45[2] = -(cVar10 == unaff_XMM7_Bc);
      auVar45[3] = -(cVar11 == unaff_XMM7_Bd);
      auVar45[4] = -(cVar12 == unaff_XMM7_Be);
      auVar45[5] = -(cVar13 == unaff_XMM7_Bf);
      auVar45[6] = -(cVar14 == unaff_XMM7_Bg);
      auVar45[7] = -(cVar15 == unaff_XMM7_Bh);
      auVar45[8] = -(cVar16 == unaff_XMM7_Bi);
      auVar45[9] = -(cVar17 == unaff_XMM7_Bj);
      auVar45[10] = -(cVar18 == unaff_XMM7_Bk);
      auVar45[0xb] = -(cVar19 == unaff_XMM7_Bl);
      auVar45[0xc] = -(cVar20 == unaff_XMM7_Bm);
      auVar45[0xd] = -(cVar21 == unaff_XMM7_Bn);
      auVar45[0xe] = -(cVar22 == unaff_XMM7_Bo);
      auVar45[0xf] = -(cVar23 == unaff_XMM7_Bp);
      if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar45 >> 0x3f,0) & 1) != 0) || (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar45 >> 0x4f,0) & 1) != 0) || (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar45 >> 0x6f,0) & 1) != 0) || (SUB161(auVar45 >> 0x77,0) & 1) != 0) ||
          auVar45[0xf] < '\0') break;
      uVar31 = uVar31 + lVar36 + 0x10;
      lVar36 = lVar36 + 0x10;
    }
  }
  LOCK();
  bVar40 = DAT_143cb30f8 == '\0';
  if (bVar40) {
    DAT_143cb30f8 = '\x01';
  }
  UNLOCK();
  if (!bVar40) {
    pdb_142dc6be0(&DAT_143cb30f8);
  }
  puVar24 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar30 = 0;
    lVar2 = _DAT_143cb3100;
  }
  else {
    uVar30 = pdb_142dc79e0();
    uVar30 = uVar30 ^ 1;
    lVar2 = _DAT_143cb3100;
  }
  _DAT_143cb3100 = lVar2;
  if (DAT_143cb30f9 != '\0') {
    puStack_120 = &DAT_143cb30f8;
    uVar35 = (ulonglong)pbStack_118 >> 8;
    pbStack_118 = (byte *)CONCAT71((int7)uVar35,(char)uVar30);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433e02c8,0x2b,&puStack_120,&UNK_1433e02a8,&UNK_1433e0338);
  }
  uVar35 = (ulonglong)uStack_90 >> 0x20;
  uStack_90 = CONCAT44((int)uVar35,uVar30);
  if (lVar2 == 0) {
    plVar32 = (longlong *)pdb_140f3bda0();
    if ((char)plVar32[2] == '\x01') {
      _DAT_143cb3120 = *plVar32;
      lVar36 = plVar32[1];
    }
    else {
      _DAT_143cb3120 = pdb_140f4fd10();
      *plVar32 = _DAT_143cb3120;
      plVar32[1] = lVar36;
      *(undefined1 *)(plVar32 + 2) = 1;
    }
    *plVar32 = _DAT_143cb3120 + 1;
    _DAT_143cb3110 = _DAT_1433e03b0;
    _DAT_143cb3118 = _UNK_1433e03b8;
    _DAT_143cb3100 = _DAT_1433e03a0;
    _DAT_143cb3108 = _UNK_1433e03a8;
    _DAT_143cb3128 = lVar36;
    uVar35 = uStack_b0;
    lVar36 = lStack_a8;
  }
  else {
    uVar35 = uStack_b0;
    lVar36 = lStack_a8;
    if (_DAT_143cb3118 != 0) {
      uVar34 = pdb_1400af950(&DAT_143cb3120,param_2,param_3);
      uVar31 = _DAT_143cb3108;
      bVar41 = (byte)(uVar34 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar37 = 0;
      iVar28 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                      CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                     CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                     CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                     CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      while( true ) {
        uVar34 = uVar34 & uVar31;
        pcVar1 = (char *)(lVar2 + uVar34);
        cVar26 = *pcVar1;
        cVar9 = pcVar1[1];
        cVar10 = pcVar1[2];
        cVar11 = pcVar1[3];
        cVar12 = pcVar1[4];
        cVar13 = pcVar1[5];
        cVar14 = pcVar1[6];
        cVar15 = pcVar1[7];
        cVar16 = pcVar1[8];
        cVar17 = pcVar1[9];
        cVar18 = pcVar1[10];
        cVar19 = pcVar1[0xb];
        cVar20 = pcVar1[0xc];
        cVar21 = pcVar1[0xd];
        cVar22 = pcVar1[0xe];
        cVar23 = pcVar1[0xf];
        auVar44[0] = -(cVar26 == auVar42[0]);
        auVar44[1] = -(cVar9 == auVar42[1]);
        auVar44[2] = -(cVar10 == auVar42[2]);
        auVar44[3] = -(cVar11 == auVar42[3]);
        auVar44[4] = -(cVar12 == auVar42[4]);
        auVar44[5] = -(cVar13 == auVar42[5]);
        auVar44[6] = -(cVar14 == auVar42[6]);
        auVar44[7] = -(cVar15 == auVar42[7]);
        auVar44[8] = -(cVar16 == auVar42[0]);
        auVar44[9] = -(cVar17 == auVar42[1]);
        auVar44[10] = -(cVar18 == auVar42[2]);
        auVar44[0xb] = -(cVar19 == auVar42[3]);
        auVar44[0xc] = -(cVar20 == auVar42[4]);
        auVar44[0xd] = -(cVar21 == auVar42[5]);
        auVar44[0xe] = -(cVar22 == auVar42[6]);
        auVar44[0xf] = -(cVar23 == auVar42[7]);
        uVar27 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar30 = (uint)uVar27;
        uVar35 = uStack_b0;
        lVar36 = lStack_a8;
        while (lStack_a8 = lVar37, uStack_b0 = uVar34, uVar27 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar35 = uVar4 + uStack_b0 & uVar31;
          if (param_3 == *(undefined **)(lVar2 + -0x18 + uVar35 * -0x28)) {
            lVar36 = lVar2 + uVar35 * -0x28;
            iVar29 = pub_142e32750(param_2,*(undefined8 *)(lVar36 + -0x20),param_3);
            if (iVar29 == 0) {
              pbVar38 = *(byte **)(lVar36 + -0x10);
              goto LAB_141dd83e9;
            }
          }
          uVar27 = (ushort)(uVar30 - 1) & (ushort)uVar30;
          uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar27);
          uVar34 = uStack_b0;
          lVar37 = lStack_a8;
          uVar35 = uStack_b0;
          lVar36 = lStack_a8;
        }
        auVar46[0] = -(cVar26 == (char)iVar28);
        auVar46[1] = -(cVar9 == (char)((uint)iVar28 >> 8));
        auVar46[2] = -(cVar10 == (char)((uint)iVar28 >> 0x10));
        auVar46[3] = -(cVar11 == (char)((uint)iVar28 >> 0x18));
        auVar46[4] = -(cVar12 == (char)iVar6);
        auVar46[5] = -(cVar13 == (char)((uint)iVar6 >> 8));
        auVar46[6] = -(cVar14 == (char)((uint)iVar6 >> 0x10));
        auVar46[7] = -(cVar15 == (char)((uint)iVar6 >> 0x18));
        auVar46[8] = -(cVar16 == (char)iVar7);
        auVar46[9] = -(cVar17 == (char)((uint)iVar7 >> 8));
        auVar46[10] = -(cVar18 == (char)((uint)iVar7 >> 0x10));
        auVar46[0xb] = -(cVar19 == (char)((uint)iVar7 >> 0x18));
        auVar46[0xc] = -(cVar20 == (char)iVar8);
        auVar46[0xd] = -(cVar21 == (char)((uint)iVar8 >> 8));
        auVar46[0xe] = -(cVar22 == (char)((uint)iVar8 >> 0x10));
        auVar46[0xf] = -(cVar23 == (char)((uint)iVar8 >> 0x18));
        if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x1f,0) & 1) != 0) || (SUB161(auVar46 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
        uVar34 = uStack_b0 + lStack_a8 + 0x10;
        lVar37 = lStack_a8 + 0x10;
        uStack_b0 = uVar35;
        lStack_a8 = lVar36;
      }
    }
  }
  lStack_a8 = lVar36;
  uStack_b0 = uVar35;
  if (*_DAT_143ca8e90 != 0) {
    plStack_a0 = &lStack_c0;
    pcStack_98 = pdb_1402ed420;
    puStack_120 = (undefined *)0x0;
    pbStack_118 = &UNK_1433e0370;
    puStack_110 = (undefined *)0x1a;
    uStack_108 = 0;
    puStack_100 = &UNK_1433e02f3;
    uStack_f8 = 0x27;
    uStack_f0 = 1;
    puStack_e8 = &UNK_1433e0370;
    uStack_e0 = 0x1a;
    uStack_d8 = 0x2300000001;
    puStack_d0 = &UNK_1433e0350;
    pplStack_c8 = &plStack_a0;
    pdb_140f332f0(&uStack_81,&puStack_120);
  }
  plStack_a0 = &lStack_c0;
  pcStack_98 = pdb_1402ed400;
  pdb_140f60760(&puStack_120,&UNK_1433e038a,&plStack_a0);
  puVar25 = puStack_110;
  pbVar38 = pbStack_118;
  pdb_14007ee60();
  if ((longlong)param_3 < 0) {
    uVar39 = 0;
LAB_141dd8373:
    pdb_142dc7e2a(uVar39,param_3);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 == (undefined *)0x0) {
    pbVar33 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar39 = 1;
    pbVar33 = pub_1406abab0((ulonglong)param_3,1);
    if (pbVar33 == (byte *)0x0) goto LAB_141dd8373;
    pub_142e32760(pbVar33,param_2,param_3);
  }
  puStack_120 = param_3;
  pbStack_118 = pbVar33;
  puStack_110 = param_3;
  pdb_1426ee780(&DAT_143cb3100,&puStack_120,pbVar38,puVar25);
LAB_141dd83e9:
  if ((((char)uStack_90 == '\0') && ((*puVar24 & 0x7fffffffffffffff) != 0)) &&
     (cVar26 = pdb_142dc79e0(), cVar26 == '\0')) {
    DAT_143cb30f9 = '\x01';
  }
  cVar26 = DAT_143cb30f8;
  LOCK();
  DAT_143cb30f8 = 0;
  UNLOCK();
  if (cVar26 == '\x02') {
    pdb_142dc6ca0(&DAT_143cb30f8);
  }
  return pbVar38;
}

