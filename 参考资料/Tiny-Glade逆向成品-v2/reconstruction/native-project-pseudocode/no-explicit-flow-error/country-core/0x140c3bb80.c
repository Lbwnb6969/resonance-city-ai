// VA 0x140c3bb80, PDB extent 5331 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::on_wall_split
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::on_wall_split
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 5331 */

void pdb_140c3bb80(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong *param_3,
                  undefined8 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong extraout_RAX;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  ushort uVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  byte bVar31;
  undefined1 (*pauVar32) [16];
  byte bVar33;
  float fVar34;
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
  undefined1 unaff_XMM7_Ba;
  char cVar45;
  undefined1 unaff_XMM7_Bb;
  char cVar46;
  undefined1 unaff_XMM7_Bc;
  char cVar47;
  undefined1 unaff_XMM7_Bd;
  char cVar48;
  undefined1 unaff_XMM7_Be;
  char cVar49;
  undefined1 unaff_XMM7_Bf;
  char cVar50;
  undefined1 unaff_XMM7_Bg;
  char cVar51;
  undefined1 unaff_XMM7_Bh;
  char cVar52;
  undefined1 unaff_XMM7_Bi;
  char cVar53;
  undefined1 unaff_XMM7_Bj;
  char cVar54;
  undefined1 unaff_XMM7_Bk;
  char cVar55;
  undefined1 unaff_XMM7_Bl;
  char cVar56;
  undefined1 unaff_XMM7_Bm;
  char cVar57;
  undefined1 unaff_XMM7_Bn;
  char cVar58;
  undefined1 unaff_XMM7_Bo;
  char cVar59;
  undefined1 unaff_XMM7_Bp;
  char cVar60;
  longlong lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulonglong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  undefined1 (*pauStack_3c0) [16];
  ulonglong uStack_3b8;
  undefined1 (*pauStack_3b0) [16];
  undefined1 (*pauStack_3a8) [16];
  undefined1 *puStack_3a0;
  longlong lStack_398;
  undefined1 (*pauStack_390) [16];
  ulonglong uStack_388;
  undefined1 (*pauStack_380) [16];
  longlong lStack_378;
  undefined1 *puStack_370;
  longlong lStack_368;
  undefined1 (*pauStack_360) [16];
  ulonglong uStack_358;
  undefined1 (*pauStack_350) [16];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulonglong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulonglong uStack_2e8;
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined1 *puStack_2d0;
  undefined1 (*pauStack_2c0) [16];
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong lStack_288;
  undefined1 (*pauStack_280) [16];
  longlong lStack_278;
  undefined1 (*pauStack_270) [16];
  ulonglong uStack_268;
  undefined1 (*pauStack_260) [16];
  longlong lStack_258;
  undefined1 *puStack_250;
  undefined1 (*pauStack_248) [16];
  longlong lStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 (*pauStack_210) [16];
  ulonglong uStack_208;
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 *puStack_1f0;
  undefined1 (*pauStack_1e0) [16];
  longlong lStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  ulonglong uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 *puStack_180;
  ushort uStack_178;
  undefined6 uStack_176;
  undefined1 (*pauStack_170) [16];
  longlong lStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  longlong lStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined1 (*pauStack_d0) [16];
  longlong *plStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pauStack_1e0 = param_2;
  uStack_1c8 = param_4;
  plStack_c8 = param_3;
  pauStack_b8 = param_2;
  if (param_1[0x1b][0] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cbc8);
  }
  pauStack_108 = param_1 + 2;
  uVar11 = pdb_1400af0a0(pauStack_108,&pauStack_1e0);
  pauStack_b0 = param_1;
  pdb_140caa0c0(&lStack_1a8,param_1,uVar11);
  pauVar23 = pauStack_1a0;
  plVar14 = plStack_c8;
  if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
    uStack_298 = uStack_148;
    lStack_2a8 = lStack_158;
    uStack_2a0 = uStack_150;
    uVar12 = CONCAT62(uStack_176,uStack_178);
    lStack_2b8 = lStack_168;
    uStack_2b0 = uStack_160;
    pauStack_2c0 = pauStack_170;
    pauStack_2d8 = pauStack_188;
    puStack_2d0 = puStack_180;
    uStack_2e8 = uStack_198;
    pauStack_2e0 = pauStack_190;
    uStack_228 = uStack_150;
    uStack_220 = uStack_148;
    uStack_238 = uStack_160;
    lStack_230 = lStack_158;
    pauStack_248 = pauStack_170;
    lStack_240 = lStack_168;
    pauStack_210 = pauStack_1a0;
    uStack_208 = uStack_198;
    pauStack_200 = pauStack_190;
    pauStack_1f8 = pauStack_188;
    puStack_1f0 = puStack_180;
    if (lStack_138 != 0) {
      uVar12 = lStack_138 * 4 + 0x13U & 0xfffffffffffffff0;
      uVar19 = lStack_138 + uVar12 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)(lStack_140 - uVar12),uVar19,0x10);
        uVar12 = extraout_RAX;
      }
    }
    pauVar32 = pauStack_1f8;
    if (pauStack_1f8 == (undefined1 (*) [16])0x0) {
      uStack_bc = (undefined4)CONCAT71((int7)(uVar12 >> 8),1);
    }
    else {
      lStack_1a8 = 0;
      pauStack_1a0 = pauStack_b8;
      pauVar17 = pauStack_b0 + 5;
      uStack_a1 = 1;
      uStack_a2 = 1;
      uVar13 = pdb_1417c4640(pauVar17,&lStack_1a8);
      uVar12 = *(ulonglong *)(pauStack_b0[3] + 8);
      bVar31 = (byte)(uVar13 >> 0x38);
      bVar33 = bVar31 >> 1;
      auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar29 = 0;
      uVar19 = uVar13;
      while( true ) {
        uVar19 = uVar19 & uVar12;
        pcVar1 = (char *)(*(longlong *)pauStack_b0[3] + uVar19);
        auVar44[0] = -(*pcVar1 == auVar35[0]);
        auVar44[1] = -(pcVar1[1] == auVar35[1]);
        auVar44[2] = -(pcVar1[2] == auVar35[2]);
        auVar44[3] = -(pcVar1[3] == auVar35[3]);
        auVar44[4] = -(pcVar1[4] == auVar35[4]);
        auVar44[5] = -(pcVar1[5] == auVar35[5]);
        auVar44[6] = -(pcVar1[6] == auVar35[6]);
        auVar44[7] = -(pcVar1[7] == auVar35[7]);
        auVar44[8] = -(pcVar1[8] == auVar35[0]);
        auVar44[9] = -(pcVar1[9] == auVar35[1]);
        auVar44[10] = -(pcVar1[10] == auVar35[2]);
        auVar44[0xb] = -(pcVar1[0xb] == auVar35[3]);
        auVar44[0xc] = -(pcVar1[0xc] == auVar35[4]);
        auVar44[0xd] = -(pcVar1[0xd] == auVar35[5]);
        auVar44[0xe] = -(pcVar1[0xe] == auVar35[6]);
        auVar44[0xf] = -(pcVar1[0xf] == auVar35[7]);
        uVar24 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
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
        uVar22 = (uint)uVar24;
        while (uVar24 != 0) {
          uVar27 = 0;
          for (uVar28 = uVar22; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          pauVar25 = (undefined1 (*) [16])
                     (*(longlong *)pauStack_b0[3] + (uVar27 + uVar19 & uVar12) * -0x40);
          if ((*(longlong *)pauVar25[-4] == 0) &&
             (pauVar16 = pauStack_b0 + 3, *(undefined1 (**) [16])(pauVar25[-4] + 8) == pauStack_b8))
          goto LAB_140c3bf4b;
          uVar24 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar24);
        }
        auVar40[0] = -(*pcVar1 == -1);
        auVar40[1] = -(pcVar1[1] == -1);
        auVar40[2] = -(pcVar1[2] == -1);
        auVar40[3] = -(pcVar1[3] == -1);
        auVar40[4] = -(pcVar1[4] == -1);
        auVar40[5] = -(pcVar1[5] == -1);
        auVar40[6] = -(pcVar1[6] == -1);
        auVar40[7] = -(pcVar1[7] == -1);
        auVar40[8] = -(pcVar1[8] == -1);
        auVar40[9] = -(pcVar1[9] == -1);
        auVar40[10] = -(pcVar1[10] == -1);
        auVar40[0xb] = -(pcVar1[0xb] == -1);
        auVar40[0xc] = -(pcVar1[0xc] == -1);
        auVar40[0xd] = -(pcVar1[0xd] == -1);
        auVar40[0xe] = -(pcVar1[0xe] == -1);
        auVar40[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x1f,0) & 1) != 0) || (SUB161(auVar40 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
        uVar19 = uVar19 + lVar29 + 0x10;
        lVar29 = lVar29 + 0x10;
      }
      if (*(longlong *)pauStack_b0[4] == 0) {
        uStack_a1 = 1;
        uStack_a2 = 1;
        uVar12 = 1;
        pdb_142daf070(pauStack_b0 + 3,1,pauVar17,CONCAT71((int7)((ulonglong)lVar29 >> 8),1));
      }
      uStack_a1 = 1;
      uStack_a2 = 1;
      plVar14 = (longlong *)pdb_140f3bda0();
      if ((char)plVar14[2] == '\x01') {
        lVar29 = *plVar14;
        uVar12 = plVar14[1];
      }
      else {
        uStack_a1 = 1;
        uStack_a2 = 1;
        lVar29 = pdb_140f4fd10();
        *plVar14 = lVar29;
        plVar14[1] = uVar12;
        *(undefined1 *)(plVar14 + 2) = 1;
      }
      *plVar14 = lVar29 + 1;
      pauVar17 = *(undefined1 (**) [16])pauStack_b0[3];
      uVar19 = *(ulonglong *)(pauStack_b0[3] + 8);
      uVar13 = uVar13 & uVar19;
      auVar35 = *(undefined1 (*) [16])(*pauVar17 + uVar13);
      uVar24 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
      uVar22 = (uint)uVar24;
      if (uVar24 == 0) {
        lVar15 = 0x10;
        do {
          uVar13 = uVar13 + lVar15 & uVar19;
          auVar35 = *(undefined1 (*) [16])(*pauVar17 + uVar13);
          lVar15 = lVar15 + 0x10;
          uVar22 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
        } while (uVar22 == 0);
      }
      uVar27 = 0;
      for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      uVar13 = uVar27 + uVar13 & uVar19;
      bVar33 = (*pauVar17)[uVar13];
      if (-1 < (char)bVar33) {
        auVar35 = *pauVar17;
        uVar22 = 0;
        for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar35[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar13 = (ulonglong)uVar22;
        bVar33 = (*pauVar17)[uVar13];
      }
      bVar31 = bVar31 >> 1;
      (*pauVar17)[uVar13] = bVar31;
      pauVar17[1][uVar13 - 0x10 & uVar19] = bVar31;
      pauVar25 = pauVar17 + uVar13 * -4;
      *(undefined8 *)pauVar17[uVar13 * -4 + -4] = 0;
      *(undefined1 (**) [16])(pauVar25[-4] + 8) = pauStack_b8;
      pauVar17 = _UNK_14306c4e8;
      *(longlong *)pauVar25[-3] = _DAT_14306c4e0;
      *(undefined1 (**) [16])(pauVar25[-3] + 8) = pauVar17;
      pauVar17 = _UNK_14306c4f8;
      *(ulonglong *)pauVar25[-2] = _DAT_14306c4f0;
      *(undefined1 (**) [16])(pauVar25[-2] + 8) = pauVar17;
      *(longlong *)pauVar25[-1] = lVar29;
      *(ulonglong *)(pauVar25[-1] + 8) = uVar12;
      lVar29 = *(longlong *)(pauStack_b0[4] + 8);
      lVar15 = CONCAT44(_UNK_142e47bfc,_UNK_142e47bf8);
      *(ulonglong *)pauStack_b0[4] =
           *(longlong *)pauStack_b0[4] - ((ulonglong)bVar33 & 0xffffffffffffff01);
      *(longlong *)(pauStack_b0[4] + 8) = lVar29 - lVar15;
      pauVar16 = pauStack_b0;
LAB_140c3bf4b:
      auVar35 = *pauVar23;
      if (uStack_208 == 0) {
        lStack_1a8 = 0;
      }
      else {
        uVar12 = uStack_208 * 4 + 0x13 & 0xfffffffffffffff0;
        pauVar16 = (undefined1 (*) [16])(uStack_208 + uVar12 + 0x11);
        uVar12 = (longlong)pauVar23 - uVar12;
        lStack_1a8 = 0x10;
      }
      pauStack_188 = pauVar23 + 1;
      uStack_178 = ~((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
      puStack_180 = *pauVar23 + uStack_208 + 1;
      pauStack_190 = pauVar23;
      pauStack_170 = pauVar32;
      uStack_a1 = 0;
      uStack_a2 = 1;
      pauStack_1a0 = pauVar16;
      uStack_198 = uVar12;
      pdb_1417a6310(pauVar25 + -3,&lStack_1a8);
      uStack_bc = 0;
    }
    uVar10 = _UNK_142e47bfc;
    uVar9 = _UNK_142e47bf8;
    fVar8 = _DAT_142e36f28;
    auVar35 = *pauStack_248;
    lStack_100 = lStack_240;
    if (lStack_240 == 0) {
      uStack_d8 = 0;
    }
    else {
      uVar12 = lStack_240 * 0x68 + 0x77U & 0xfffffffffffffff0;
      uStack_f8 = lStack_240 + uVar12 + 0x11;
      pbStack_f0 = (byte *)((longlong)pauStack_248 - uVar12);
      uStack_d8 = 0x10;
    }
    pauVar23 = pauStack_248 + 1;
    uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
    pauStack_110 = pauStack_b0 + 6;
    pauStack_e8 = pauStack_b0 + 3;
    pauStack_1d0 = pauStack_b0 + 8;
    pauStack_d0 = pauStack_b0 + 5;
    lVar29 = plStack_c8[1];
    lStack_1c0 = plStack_c8[2];
    lStack_1b8 = lStack_1c0 << 4;
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    cVar45 = (char)iVar6;
    cVar46 = (char)((uint)iVar6 >> 8);
    cVar47 = (char)((uint)iVar6 >> 0x10);
    cVar48 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    cVar49 = (char)iVar6;
    cVar50 = (char)((uint)iVar6 >> 8);
    cVar51 = (char)((uint)iVar6 >> 0x10);
    cVar52 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    cVar53 = (char)iVar6;
    cVar54 = (char)((uint)iVar6 >> 8);
    cVar55 = (char)((uint)iVar6 >> 0x10);
    cVar56 = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    cVar57 = (char)iVar6;
    cVar58 = (char)((uint)iVar6 >> 8);
    cVar59 = (char)((uint)iVar6 >> 0x10);
    cVar60 = (char)((uint)iVar6 >> 0x18);
    lVar15 = lStack_230;
    pauVar32 = pauStack_248;
    while (lVar15 != 0) {
      if ((short)uVar22 == 0) {
        do {
          auVar35 = *pauVar23;
          pauVar32 = pauVar32 + -0x68;
          pauVar23 = pauVar23 + 1;
          uVar22 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar22 == 0);
      }
      uVar27 = 0;
      for (uVar28 = uVar22; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      lVar18 = (ulonglong)uVar27 * -0x68;
      uVar4 = *(undefined4 *)((longlong)pauVar32 + lVar18 + -0x68);
      lVar30 = *(longlong *)((longlong)pauVar32 + lVar18 + -0x60);
      uStack_2f8 = *(undefined8 *)((longlong)pauVar32 + lVar18 + -8);
      puVar2 = (undefined8 *)((longlong)pauVar32 + lVar18 + -0x18);
      uStack_308 = *puVar2;
      uStack_300 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)pauVar32 + lVar18 + -0x28);
      uStack_318 = *puVar2;
      uStack_310 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)pauVar32 + lVar18 + -0x38);
      uStack_328 = *puVar2;
      uStack_320 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)pauVar32 + lVar18 + -0x48);
      uStack_338 = *puVar2;
      uStack_330 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)pauVar32 + lVar18 + -0x58);
      uStack_348 = *puVar2;
      uStack_340 = puVar2[1];
      if (lVar30 == 8) break;
      lStack_428 = lVar30;
      uStack_420 = uStack_348;
      uStack_418 = uStack_340;
      uStack_410 = uStack_338;
      uStack_408 = uStack_330;
      uStack_400 = uStack_328;
      uStack_3f8 = uStack_320;
      uStack_3f0 = uStack_318;
      uStack_3e8 = uStack_310;
      uStack_3e0 = uStack_308;
      uStack_3d8 = uStack_300;
      uStack_3d0 = uStack_2f8;
      lStack_1d8 = lVar15 + -1;
      uStack_dc = uVar4;
      uStack_c0 = uVar4;
      uVar11 = pdb_1400aede0(pauStack_1d0,&uStack_dc);
      pdb_140cabcd0(&lStack_1a8,pauStack_110,uVar11,&uStack_dc);
      if ((int)pauStack_1a0 == 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306cb08,0x4f,&UNK_14306cb58);
      }
      uVar12 = uStack_3f8 >> 0x10 & 0xff;
      lVar15 = uVar12 - 1;
      if (uVar12 < 2) {
        lVar15 = 0;
      }
      if (lVar15 == 0) {
        fVar34 = (float)pdb_1419aaa60(uStack_1c8);
        if (lStack_1c0 != 0) {
          fVar7 = 0.0;
          if (0.0 <= fVar34) {
            fVar7 = fVar34;
          }
          fVar34 = fVar8;
          if (fVar7 <= fVar8) {
            fVar34 = fVar7;
          }
          lVar15 = 0;
LAB_140c3c47d:
          if ((fVar34 < *(float *)(lVar29 + 8 + lVar15)) ||
             (*(float *)(lVar29 + 0xc + lVar15) < fVar34)) goto LAB_140c3c470;
          lVar15 = *(longlong *)(lVar29 + lVar15);
          pauStack_280 = pauStack_110;
          uStack_290 = 0;
          lStack_288 = lVar15;
          lStack_1a8 = lVar15;
          uVar19 = pdb_1400af0a0(pauStack_108,&lStack_1a8);
          uStack_1b0 = uVar19 >> 0x39;
          puVar21 = *(undefined1 **)*pauStack_b0;
          bVar31 = (byte)(uVar19 >> 0x39);
          auVar35 = ZEXT216(CONCAT11(bVar31,bVar31));
          auVar35 = pshuflw(auVar35,auVar35,0);
          lVar30 = 0;
          uVar12 = uVar19;
          while( true ) {
            uVar12 = uVar12 & *(ulonglong *)(*pauStack_b0 + 8);
            auVar44 = *(undefined1 (*) [16])(puVar21 + uVar12);
            auVar42[0] = -(auVar44[0] == auVar35[0]);
            auVar42[1] = -(auVar44[1] == auVar35[1]);
            auVar42[2] = -(auVar44[2] == auVar35[2]);
            auVar42[3] = -(auVar44[3] == auVar35[3]);
            auVar42[4] = -(auVar44[4] == auVar35[4]);
            auVar42[5] = -(auVar44[5] == auVar35[5]);
            auVar42[6] = -(auVar44[6] == auVar35[6]);
            auVar42[7] = -(auVar44[7] == auVar35[7]);
            auVar42[8] = -(auVar44[8] == auVar35[0]);
            auVar42[9] = -(auVar44[9] == auVar35[1]);
            auVar42[10] = -(auVar44[10] == auVar35[2]);
            auVar42[0xb] = -(auVar44[0xb] == auVar35[3]);
            auVar42[0xc] = -(auVar44[0xc] == auVar35[4]);
            auVar42[0xd] = -(auVar44[0xd] == auVar35[5]);
            auVar42[0xe] = -(auVar44[0xe] == auVar35[6]);
            auVar42[0xf] = -(auVar44[0xf] == auVar35[7]);
            uVar24 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar42[0xf] >> 7) << 0xf;
            uVar27 = (uint)uVar24;
            while (uVar24 != 0) {
              uVar28 = 0;
              for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar28 = uVar28 + 1;
              }
              lVar18 = (uVar28 + uVar12 & *(ulonglong *)(*pauStack_b0 + 8)) * -0x98;
              if (*(longlong *)(puVar21 + lVar18 + -0x98) == lVar15) {
                puVar20 = puVar21 + lVar18;
                goto LAB_140c3c94e;
              }
              uVar24 = (ushort)(uVar27 - 1) & (ushort)uVar27;
              uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar24);
            }
            auVar38[0] = -(auVar44[0] == cVar45);
            auVar38[1] = -(auVar44[1] == cVar46);
            auVar38[2] = -(auVar44[2] == cVar47);
            auVar38[3] = -(auVar44[3] == cVar48);
            auVar38[4] = -(auVar44[4] == cVar49);
            auVar38[5] = -(auVar44[5] == cVar50);
            auVar38[6] = -(auVar44[6] == cVar51);
            auVar38[7] = -(auVar44[7] == cVar52);
            auVar38[8] = -(auVar44[8] == cVar53);
            auVar38[9] = -(auVar44[9] == cVar54);
            auVar38[10] = -(auVar44[10] == cVar55);
            auVar38[0xb] = -(auVar44[0xb] == cVar56);
            auVar38[0xc] = -(auVar44[0xc] == cVar57);
            auVar38[0xd] = -(auVar44[0xd] == cVar58);
            auVar38[0xe] = -(auVar44[0xe] == cVar59);
            auVar38[0xf] = -(auVar44[0xf] == cVar60);
            uVar24 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar38[0xf] >> 7) << 0xf;
            if (uVar24 != 0) break;
            uVar12 = uVar12 + lVar30 + 0x10;
            lVar30 = lVar30 + 0x10;
          }
          if (*(longlong *)pauStack_b0[1] == 0) {
            puVar21 = (undefined1 *)0x1;
            pdb_142dadf10(pauStack_b0,1,pauStack_108,CONCAT71((uint7)(byte)(uVar24 >> 8),1));
          }
          plVar14 = (longlong *)pdb_140f3bda0();
          if ((char)plVar14[2] == '\x01') {
            lStack_258 = *plVar14;
            puVar21 = (undefined1 *)plVar14[1];
          }
          else {
            lStack_258 = pdb_140f4fd10();
            *plVar14 = lStack_258;
            plVar14[1] = (longlong)puVar21;
            *(undefined1 *)(plVar14 + 2) = 1;
          }
          *plVar14 = lStack_258 + 1;
          pauVar25 = _UNK_14306c4f8;
          uVar12 = _DAT_14306c4f0;
          pauVar17 = _UNK_14306c4e8;
          lVar30 = _DAT_14306c4e0;
          uStack_268 = _DAT_14306c4f0;
          pauStack_260 = _UNK_14306c4f8;
          lStack_278 = _DAT_14306c4e0;
          pauStack_270 = _UNK_14306c4e8;
          puStack_250 = puVar21;
          plVar14 = (longlong *)pdb_140f3bda0();
          if ((char)plVar14[2] == '\x01') {
            pauStack_188 = (undefined1 (*) [16])*plVar14;
            puVar21 = (undefined1 *)plVar14[1];
          }
          else {
            pauStack_188 = (undefined1 (*) [16])pdb_140f4fd10();
            *plVar14 = (longlong)pauStack_188;
            plVar14[1] = (longlong)puVar21;
            *(undefined1 *)(plVar14 + 2) = 1;
          }
          *plVar14 = (longlong)(*pauStack_188 + 1);
          uStack_198 = uVar12;
          pauStack_190 = pauVar25;
          lStack_1a8 = lVar30;
          pauStack_1a0 = pauVar17;
          puStack_180 = puVar21;
          plVar14 = (longlong *)pdb_140f3bda0();
          if ((char)plVar14[2] == '\x01') {
            lVar18 = *plVar14;
            puVar21 = (undefined1 *)plVar14[1];
          }
          else {
            lVar18 = pdb_140f4fd10();
            *plVar14 = lVar18;
            plVar14[1] = (longlong)puVar21;
            *(undefined1 *)(plVar14 + 2) = 1;
          }
          *plVar14 = lVar18 + 1;
          lStack_378 = lStack_258;
          puStack_370 = puStack_250;
          uStack_388 = uStack_268;
          pauStack_380 = pauStack_260;
          lStack_398 = lStack_278;
          pauStack_390 = pauStack_270;
          lStack_3c8 = lStack_1a8;
          pauStack_3c0 = pauStack_1a0;
          uStack_3b8 = uStack_198;
          pauStack_3b0 = pauStack_190;
          pauStack_3a8 = pauStack_188;
          puStack_3a0 = puStack_180;
          uStack_358 = uVar12;
          pauStack_350 = pauVar25;
          lStack_368 = lVar30;
          pauStack_360 = pauVar17;
          pauVar16 = *(undefined1 (**) [16])*pauStack_b0;
          uVar13 = *(ulonglong *)(*pauStack_b0 + 8);
          uVar19 = uVar19 & uVar13;
          auVar35 = *(undefined1 (*) [16])(*pauVar16 + uVar19);
          uVar24 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar24;
          if (uVar24 == 0) {
            lVar26 = 0x10;
            do {
              uVar19 = uVar19 + lVar26 & uVar13;
              auVar35 = *(undefined1 (*) [16])(*pauVar16 + uVar19);
              lVar26 = lVar26 + 0x10;
              uVar27 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
            } while (uVar27 == 0);
          }
          uVar28 = 0;
          for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          uVar19 = uVar28 + uVar19 & uVar13;
          bVar31 = (*pauVar16)[uVar19];
          if (-1 < (char)bVar31) {
            auVar35 = *pauVar16;
            uVar27 = 0;
            for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar35[0xf] >> 7) << 0xf); (uVar28 & 1) == 0
                ; uVar28 = uVar28 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
            uVar19 = (ulonglong)uVar27;
            bVar31 = (*pauVar16)[uVar19];
          }
          (*pauVar16)[uVar19] = (char)uStack_1b0;
          pauVar16[1][uVar19 - 0x10 & uVar13] = (char)uStack_1b0;
          *(ulonglong *)pauStack_b0[1] = *(longlong *)pauStack_b0[1] - (ulonglong)(bVar31 & 1);
          lVar26 = uVar19 * -0x98;
          puVar20 = (undefined1 *)((longlong)pauVar16 + lVar26);
          *(longlong *)((longlong)pauVar16 + lVar26 + -0x98) = lVar15;
          plVar14 = (longlong *)((longlong)pauVar16 + lVar26 + -0x90);
          *plVar14 = lStack_1a8;
          plVar14[1] = (longlong)pauStack_1a0;
          puVar3 = (ulonglong *)((longlong)pauVar16 + lVar26 + -0x80);
          *puVar3 = uStack_198;
          puVar3[1] = (ulonglong)pauStack_190;
          plVar14 = (longlong *)((longlong)pauVar16 + lVar26 + -0x70);
          *plVar14 = (longlong)pauStack_188;
          plVar14[1] = (longlong)puStack_180;
          plVar14 = (longlong *)((longlong)pauVar16 + lVar26 + -0x60);
          *plVar14 = lStack_278;
          plVar14[1] = (longlong)pauStack_270;
          puVar3 = (ulonglong *)((longlong)pauVar16 + lVar26 + -0x50);
          *puVar3 = uStack_268;
          puVar3[1] = (ulonglong)pauStack_260;
          plVar14 = (longlong *)((longlong)pauVar16 + lVar26 + -0x40);
          *plVar14 = lStack_258;
          plVar14[1] = (longlong)puStack_250;
          plVar14 = (longlong *)((longlong)pauVar16 + lVar26 + -0x30);
          *plVar14 = lVar30;
          plVar14[1] = (longlong)pauVar17;
          puVar3 = (ulonglong *)((longlong)pauVar16 + lVar26 + -0x20);
          *puVar3 = uVar12;
          puVar3[1] = (ulonglong)pauVar25;
          *(longlong *)((longlong)pauVar16 + lVar26 + -0x10) = lVar18;
          *(undefined1 **)((longlong)pauVar16 + lVar26 + -8) = puVar21;
          *(longlong *)(pauStack_b0[1] + 8) = *(longlong *)(pauStack_b0[1] + 8) + 1;
LAB_140c3c94e:
          pdb_140c8f970(&lStack_1a8,(longlong)puVar20 + -0x90,uStack_c0,&lStack_428,&uStack_290);
          goto LAB_140c3c250;
        }
LAB_140c3c570:
        lStack_1a8 = 0;
        pauStack_1a0 = pauStack_b8;
        uVar13 = pdb_1417c4640(pauStack_d0,&lStack_1a8);
        uVar12 = *(ulonglong *)(pauStack_b0[3] + 8);
        bVar31 = (byte)(uVar13 >> 0x38);
        bVar33 = bVar31 >> 1;
        auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
        auVar35 = pshuflw(auVar35,auVar35,0);
        lVar15 = 0;
        uVar19 = uVar13;
        while( true ) {
          uVar19 = uVar19 & uVar12;
          pcVar1 = (char *)(*(longlong *)pauStack_b0[3] + uVar19);
          auVar43[0] = -(*pcVar1 == auVar35[0]);
          auVar43[1] = -(pcVar1[1] == auVar35[1]);
          auVar43[2] = -(pcVar1[2] == auVar35[2]);
          auVar43[3] = -(pcVar1[3] == auVar35[3]);
          auVar43[4] = -(pcVar1[4] == auVar35[4]);
          auVar43[5] = -(pcVar1[5] == auVar35[5]);
          auVar43[6] = -(pcVar1[6] == auVar35[6]);
          auVar43[7] = -(pcVar1[7] == auVar35[7]);
          auVar43[8] = -(pcVar1[8] == auVar35[0]);
          auVar43[9] = -(pcVar1[9] == auVar35[1]);
          auVar43[10] = -(pcVar1[10] == auVar35[2]);
          auVar43[0xb] = -(pcVar1[0xb] == auVar35[3]);
          auVar43[0xc] = -(pcVar1[0xc] == auVar35[4]);
          auVar43[0xd] = -(pcVar1[0xd] == auVar35[5]);
          auVar43[0xe] = -(pcVar1[0xe] == auVar35[6]);
          auVar43[0xf] = -(pcVar1[0xf] == auVar35[7]);
          uVar24 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                   (ushort)(auVar43[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar24;
          while (uVar24 != 0) {
            uVar28 = 0;
            for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            pauVar17 = (undefined1 (*) [16])
                       (*(longlong *)pauStack_b0[3] + (uVar28 + uVar19 & uVar12) * -0x40);
            if ((*(longlong *)pauVar17[-4] == 0) &&
               (*(undefined1 (**) [16])(pauVar17[-4] + 8) == pauStack_b8)) goto LAB_140c3c730;
            uVar24 = (ushort)(uVar27 - 1) & (ushort)uVar27;
            uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar24);
          }
          auVar39[0] = -(*pcVar1 == cVar45);
          auVar39[1] = -(pcVar1[1] == cVar46);
          auVar39[2] = -(pcVar1[2] == cVar47);
          auVar39[3] = -(pcVar1[3] == cVar48);
          auVar39[4] = -(pcVar1[4] == cVar49);
          auVar39[5] = -(pcVar1[5] == cVar50);
          auVar39[6] = -(pcVar1[6] == cVar51);
          auVar39[7] = -(pcVar1[7] == cVar52);
          auVar39[8] = -(pcVar1[8] == cVar53);
          auVar39[9] = -(pcVar1[9] == cVar54);
          auVar39[10] = -(pcVar1[10] == cVar55);
          auVar39[0xb] = -(pcVar1[0xb] == cVar56);
          auVar39[0xc] = -(pcVar1[0xc] == cVar57);
          auVar39[0xd] = -(pcVar1[0xd] == cVar58);
          auVar39[0xe] = -(pcVar1[0xe] == cVar59);
          auVar39[0xf] = -(pcVar1[0xf] == cVar60);
          if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x2f,0) & 1) != 0) || (SUB161(auVar39 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
          uVar19 = uVar19 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
        if (*(longlong *)pauStack_b0[4] == 0) {
          uVar12 = 1;
          pdb_142daf070(pauStack_e8,1,pauStack_d0,CONCAT71((int7)(uVar19 >> 8),1));
        }
        plVar14 = (longlong *)pdb_140f3bda0();
        if ((char)plVar14[2] == '\x01') {
          lVar15 = *plVar14;
          uVar12 = plVar14[1];
        }
        else {
          lVar15 = pdb_140f4fd10();
          *plVar14 = lVar15;
          plVar14[1] = uVar12;
          *(undefined1 *)(plVar14 + 2) = 1;
        }
        *plVar14 = lVar15 + 1;
        pauVar25 = *(undefined1 (**) [16])pauStack_b0[3];
        uVar19 = *(ulonglong *)(pauStack_b0[3] + 8);
        uVar13 = uVar13 & uVar19;
        auVar35 = *(undefined1 (*) [16])(*pauVar25 + uVar13);
        uVar24 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
        uVar27 = (uint)uVar24;
        if (uVar24 == 0) {
          lVar30 = 0x10;
          do {
            uVar13 = uVar13 + lVar30 & uVar19;
            auVar35 = *(undefined1 (*) [16])(*pauVar25 + uVar13);
            lVar30 = lVar30 + 0x10;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
          } while (uVar27 == 0);
        }
        uVar28 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar13 = uVar28 + uVar13 & uVar19;
        bVar33 = (*pauVar25)[uVar13];
        if (-1 < (char)bVar33) {
          auVar35 = *pauVar25;
          uVar27 = 0;
          for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar35[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
              uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar13 = (ulonglong)uVar27;
          bVar33 = (*pauVar25)[uVar13];
        }
        bVar31 = bVar31 >> 1;
        (*pauVar25)[uVar13] = bVar31;
        pauVar25[1][uVar13 - 0x10 & uVar19] = bVar31;
        pauVar17 = pauVar25 + uVar13 * -4;
        *(undefined8 *)pauVar25[uVar13 * -4 + -4] = 0;
        *(undefined1 (**) [16])(pauVar17[-4] + 8) = pauStack_b8;
        pauVar25 = _UNK_14306c4e8;
        *(longlong *)pauVar17[-3] = _DAT_14306c4e0;
        *(undefined1 (**) [16])(pauVar17[-3] + 8) = pauVar25;
        pauVar25 = _UNK_14306c4f8;
        *(ulonglong *)pauVar17[-2] = _DAT_14306c4f0;
        *(undefined1 (**) [16])(pauVar17[-2] + 8) = pauVar25;
        *(longlong *)pauVar17[-1] = lVar15;
        *(ulonglong *)(pauVar17[-1] + 8) = uVar12;
        lVar15 = *(longlong *)(pauStack_b0[4] + 8);
        auVar35._8_4_ = uVar9;
        auVar35._0_8_ = (ulonglong)bVar33 & 0xffffffffffffff01;
        auVar35._12_4_ = uVar10;
        *(ulonglong *)pauStack_b0[4] =
             *(longlong *)pauStack_b0[4] - ((ulonglong)bVar33 & 0xffffffffffffff01);
        *(longlong *)(pauStack_b0[4] + 8) = lVar15 - auVar35._8_8_;
LAB_140c3c730:
        pdb_1403b0de0(pauVar17 + -3,uStack_c0);
      }
      else {
        if ((int)lVar15 != 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14306cb88,0x28,&UNK_14306cbb0);
        }
        lStack_1a8 = 0;
        pauStack_1a0 = pauStack_b8;
        uVar13 = pdb_1417c4640(pauStack_d0,&lStack_1a8);
        uVar12 = *(ulonglong *)(pauStack_b0[3] + 8);
        bVar31 = (byte)(uVar13 >> 0x38);
        bVar33 = bVar31 >> 1;
        auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
        auVar35 = pshuflw(auVar35,auVar35,0);
        lVar15 = 0;
        uVar19 = uVar13;
        while( true ) {
          uVar19 = uVar19 & uVar12;
          pcVar1 = (char *)(*(longlong *)pauStack_b0[3] + uVar19);
          auVar41[0] = -(*pcVar1 == auVar35[0]);
          auVar41[1] = -(pcVar1[1] == auVar35[1]);
          auVar41[2] = -(pcVar1[2] == auVar35[2]);
          auVar41[3] = -(pcVar1[3] == auVar35[3]);
          auVar41[4] = -(pcVar1[4] == auVar35[4]);
          auVar41[5] = -(pcVar1[5] == auVar35[5]);
          auVar41[6] = -(pcVar1[6] == auVar35[6]);
          auVar41[7] = -(pcVar1[7] == auVar35[7]);
          auVar41[8] = -(pcVar1[8] == auVar35[0]);
          auVar41[9] = -(pcVar1[9] == auVar35[1]);
          auVar41[10] = -(pcVar1[10] == auVar35[2]);
          auVar41[0xb] = -(pcVar1[0xb] == auVar35[3]);
          auVar41[0xc] = -(pcVar1[0xc] == auVar35[4]);
          auVar41[0xd] = -(pcVar1[0xd] == auVar35[5]);
          auVar41[0xe] = -(pcVar1[0xe] == auVar35[6]);
          auVar41[0xf] = -(pcVar1[0xf] == auVar35[7]);
          uVar24 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                   (ushort)(auVar41[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar24;
          while (uVar24 != 0) {
            uVar28 = 0;
            for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            pauVar17 = (undefined1 (*) [16])
                       (*(longlong *)pauStack_b0[3] + (uVar28 + uVar19 & uVar12) * -0x40);
            if ((*(longlong *)pauVar17[-4] == 0) &&
               (*(undefined1 (**) [16])(pauVar17[-4] + 8) == pauStack_b8)) goto LAB_140c3c240;
            uVar24 = (ushort)(uVar27 - 1) & (ushort)uVar27;
            uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar24);
          }
          auVar36[0] = -(*pcVar1 == cVar45);
          auVar36[1] = -(pcVar1[1] == cVar46);
          auVar36[2] = -(pcVar1[2] == cVar47);
          auVar36[3] = -(pcVar1[3] == cVar48);
          auVar36[4] = -(pcVar1[4] == cVar49);
          auVar36[5] = -(pcVar1[5] == cVar50);
          auVar36[6] = -(pcVar1[6] == cVar51);
          auVar36[7] = -(pcVar1[7] == cVar52);
          auVar36[8] = -(pcVar1[8] == cVar53);
          auVar36[9] = -(pcVar1[9] == cVar54);
          auVar36[10] = -(pcVar1[10] == cVar55);
          auVar36[0xb] = -(pcVar1[0xb] == cVar56);
          auVar36[0xc] = -(pcVar1[0xc] == cVar57);
          auVar36[0xd] = -(pcVar1[0xd] == cVar58);
          auVar36[0xe] = -(pcVar1[0xe] == cVar59);
          auVar36[0xf] = -(pcVar1[0xf] == cVar60);
          if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x2f,0) & 1) != 0) || (SUB161(auVar36 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
          uVar19 = uVar19 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
        if (*(longlong *)pauStack_b0[4] == 0) {
          uVar12 = 1;
          pdb_142daf070(pauStack_e8,1,pauStack_d0,CONCAT71((int7)(uVar19 >> 8),1));
        }
        plVar14 = (longlong *)pdb_140f3bda0();
        if ((char)plVar14[2] == '\x01') {
          lVar15 = *plVar14;
          uVar12 = plVar14[1];
        }
        else {
          lVar15 = pdb_140f4fd10();
          *plVar14 = lVar15;
          plVar14[1] = uVar12;
          *(undefined1 *)(plVar14 + 2) = 1;
        }
        *plVar14 = lVar15 + 1;
        pauVar25 = *(undefined1 (**) [16])pauStack_b0[3];
        uVar19 = *(ulonglong *)(pauStack_b0[3] + 8);
        uVar13 = uVar13 & uVar19;
        auVar35 = *(undefined1 (*) [16])(*pauVar25 + uVar13);
        uVar24 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
        uVar27 = (uint)uVar24;
        if (uVar24 == 0) {
          lVar30 = 0x10;
          do {
            uVar13 = uVar13 + lVar30 & uVar19;
            auVar35 = *(undefined1 (*) [16])(*pauVar25 + uVar13);
            lVar30 = lVar30 + 0x10;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
          } while (uVar27 == 0);
        }
        uVar28 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar13 = uVar28 + uVar13 & uVar19;
        bVar33 = (*pauVar25)[uVar13];
        if (-1 < (char)bVar33) {
          auVar35 = *pauVar25;
          uVar27 = 0;
          for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar35[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
              uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar13 = (ulonglong)uVar27;
          bVar33 = (*pauVar25)[uVar13];
        }
        bVar31 = bVar31 >> 1;
        (*pauVar25)[uVar13] = bVar31;
        pauVar25[1][uVar13 - 0x10 & uVar19] = bVar31;
        pauVar17 = pauVar25 + uVar13 * -4;
        *(undefined8 *)pauVar25[uVar13 * -4 + -4] = 0;
        *(undefined1 (**) [16])(pauVar17[-4] + 8) = pauStack_b8;
        pauVar25 = _UNK_14306c4e8;
        *(longlong *)pauVar17[-3] = _DAT_14306c4e0;
        *(undefined1 (**) [16])(pauVar17[-3] + 8) = pauVar25;
        pauVar25 = _UNK_14306c4f8;
        *(ulonglong *)pauVar17[-2] = _DAT_14306c4f0;
        *(undefined1 (**) [16])(pauVar17[-2] + 8) = pauVar25;
        *(longlong *)pauVar17[-1] = lVar15;
        *(ulonglong *)(pauVar17[-1] + 8) = uVar12;
        lVar15 = *(longlong *)(pauStack_b0[4] + 8);
        auVar37._8_4_ = uVar9;
        auVar37._0_8_ = (ulonglong)bVar33 & 0xffffffffffffff01;
        auVar37._12_4_ = uVar10;
        *(ulonglong *)pauStack_b0[4] =
             *(longlong *)pauStack_b0[4] - ((ulonglong)bVar33 & 0xffffffffffffff01);
        *(longlong *)(pauStack_b0[4] + 8) = lVar15 - auVar37._8_8_;
LAB_140c3c240:
        pdb_1403b0de0(pauVar17 + -3,uStack_c0);
      }
LAB_140c3c250:
      uVar22 = uVar22 - 1 & uVar22;
      lVar15 = lStack_1d8;
    }
    if ((lStack_100 != 0) && (uStack_f8 != 0)) {
      pub_1406abac0(pbStack_f0,uStack_f8,uStack_d8);
    }
    plVar14 = plStack_c8;
    if (((char)uStack_bc != '\0') && (uStack_208 != 0)) {
      uVar12 = uStack_208 * 4 + 0x13 & 0xfffffffffffffff0;
      uVar19 = uStack_208 + uVar12 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)((longlong)pauStack_210 - uVar12),uVar19,0x10);
      }
    }
  }
  if (*plVar14 != 0) {
    pub_1406abac0((byte *)plVar14[1],*plVar14 << 4,8);
  }
  return;
LAB_140c3c470:
  lVar15 = lVar15 + 0x10;
  if (lStack_1b8 == lVar15) goto LAB_140c3c570;
  goto LAB_140c3c47d;
}

