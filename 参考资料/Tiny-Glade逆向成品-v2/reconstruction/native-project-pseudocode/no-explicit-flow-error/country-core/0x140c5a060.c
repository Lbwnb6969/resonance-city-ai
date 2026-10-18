// VA 0x140c5a060, PDB extent 3663 bytes
// country_core::startup::load_prefabs::reload_prefab_meshes_after_mod_swap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_prefabs::reload_prefab_meshes_after_mod_swap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 3663 */

undefined8 *
pdb_140c5a060(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
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
  undefined8 uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  char cVar24;
  ushort uVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 (**ppauVar31) [16];
  uint uVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  longlong lVar38;
  bool bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  longlong ***ppplStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined1 (**ppauStack_1f0) [16];
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  longlong lStack_1d0;
  longlong **pplStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined1 (**ppauStack_170) [16];
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  longlong **pplStack_148;
  undefined1 (*pauStack_140) [16];
  longlong lStack_138;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  longlong ***ppplStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  undefined1 (*pauStack_90) [16];
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_141c86910(&pauStack_128,&UNK_14306eb00,0xe,1,&UNK_14306eb10);
  if (SBORROW8(0,(longlong)pauStack_128)) {
    pauStack_298 = pauStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&pauStack_298,&UNK_14306f570,&UNK_14306ec30);
  }
  uStack_228 = uStack_b8;
  puStack_238 = puStack_c8;
  uStack_230 = uStack_c0;
  pauStack_248 = pauStack_d8;
  ppplStack_240 = ppplStack_d0;
  uStack_258 = uStack_e8;
  pauStack_250 = pauStack_e0;
  uStack_268 = (undefined4)uStack_f8;
  uStack_264 = uStack_f8._4_4_;
  uStack_260 = (undefined4)uStack_f0;
  uStack_25c = uStack_f0._4_4_;
  uStack_278 = puStack_108;
  uStack_270 = uStack_100;
  uStack_288 = puStack_118;
  uStack_280 = uStack_110;
  pauStack_298 = pauStack_128;
  pauStack_290 = pauStack_120;
  puStack_118 = *pauStack_e0 + 1 + (longlong)pauStack_d8;
  auVar41 = *pauStack_e0;
  pauStack_128 = pauStack_e0;
  pauStack_120 = pauStack_e0 + 1;
  uStack_110 = CONCAT62(uStack_110._2_6_,
                        ~((ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar41[0xf] >> 7) << 0xf));
  puStack_108 = puStack_c8;
  ppauVar31 = &pauStack_128;
  uStack_100 = param_2;
  pdb_1415f1f30(&uStack_1e0);
  uStack_82 = 1;
  plVar27 = (longlong *)pdb_140f3bda0();
  if ((char)plVar27[2] == '\x01') {
    lStack_178 = *plVar27;
    ppauVar31 = (undefined1 (**) [16])plVar27[1];
  }
  else {
    uStack_82 = 1;
    lStack_178 = pdb_140f4fd10();
    *plVar27 = lStack_178;
    plVar27[1] = (longlong)ppauVar31;
    *(undefined1 *)(plVar27 + 2) = 1;
  }
  *plVar27 = lStack_178 + 1;
  lVar38 = _UNK_14306f548;
  uVar21 = _DAT_14306f540;
  auVar41 = _DAT_14306f530;
  uStack_188 = _DAT_14306f540;
  lStack_180 = _UNK_14306f548;
  auStack_198 = _DAT_14306f530;
  uStack_83 = 1;
  uStack_84 = 1;
  ppauStack_170 = ppauVar31;
  plVar27 = (longlong *)pdb_140f3bda0();
  if ((char)plVar27[2] == '\x01') {
    lStack_1f8 = *plVar27;
    ppauVar31 = (undefined1 (**) [16])plVar27[1];
  }
  else {
    uStack_83 = 1;
    uStack_84 = 1;
    lStack_1f8 = pdb_140f4fd10();
    *plVar27 = lStack_1f8;
    plVar27[1] = (longlong)ppauVar31;
    *(undefined1 *)(plVar27 + 2) = 1;
  }
  *plVar27 = lStack_1f8 + 1;
  uStack_208 = uVar21;
  lStack_200 = lVar38;
  auStack_218 = auVar41;
  puStack_150 = puStack_1d8 + lStack_1d0 * 2;
  puStack_168 = puStack_1d8;
  puStack_160 = puStack_1d8;
  uStack_158 = uStack_1e0;
  ppauStack_1f0 = ppauVar31;
  uStack_1b0 = param_3;
  puStack_1a0 = param_1;
  plStack_a8 = param_4;
LAB_140c5a29e:
  do {
    if (puStack_160 == puStack_150) {
      pdb_14099d3e0(&puStack_168);
      if (lStack_180 != 0) {
        auVar41 = *(undefined1 (*) [16])auStack_198._0_8_;
        pauVar33 = (undefined1 (*) [16])(auStack_198._0_8_ + 0x10);
        uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar41[0xf] >> 7) << 0xf);
        pauStack_90 = (undefined1 (*) [16])(plStack_a8 + 4);
        lVar38 = lStack_180;
        pauVar37 = (undefined1 (*) [16])auStack_198._0_8_;
        while (bVar39 = lVar38 != 0, lVar38 = lVar38 + -1, bVar39) {
          if ((short)uVar36 == 0) {
            do {
              auVar41 = *pauVar33;
              pauVar37 = pauVar37 + -1;
              pauVar33 = pauVar33 + 1;
              uVar36 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar36 == 0);
          }
          uVar32 = 0;
          for (uVar4 = uVar36; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar32 = uVar32 + 1;
          }
          cVar24 = (*pauVar37)[~(ulonglong)uVar32];
          pauStack_128 = (undefined1 (*) [16])CONCAT71(pauStack_128._1_7_,cVar24);
          if (plStack_a8[3] != 0) {
            uVar29 = pdb_1417c4b30(pauStack_90,&pauStack_128);
            lVar28 = *plStack_a8;
            bVar40 = (byte)(uVar29 >> 0x39);
            auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
            auVar41 = pshuflw(auVar41,auVar41,0);
            lVar35 = 0;
            while( true ) {
              uVar29 = uVar29 & plStack_a8[1];
              auVar42 = *(undefined1 (*) [16])(lVar28 + uVar29);
              auVar44[0] = -(auVar42[0] == auVar41[0]);
              auVar44[1] = -(auVar42[1] == auVar41[1]);
              auVar44[2] = -(auVar42[2] == auVar41[2]);
              auVar44[3] = -(auVar42[3] == auVar41[3]);
              auVar44[4] = -(auVar42[4] == auVar41[4]);
              auVar44[5] = -(auVar42[5] == auVar41[5]);
              auVar44[6] = -(auVar42[6] == auVar41[6]);
              auVar44[7] = -(auVar42[7] == auVar41[7]);
              auVar44[8] = -(auVar42[8] == auVar41[0]);
              auVar44[9] = -(auVar42[9] == auVar41[1]);
              auVar44[10] = -(auVar42[10] == auVar41[2]);
              auVar44[0xb] = -(auVar42[0xb] == auVar41[3]);
              auVar44[0xc] = -(auVar42[0xc] == auVar41[4]);
              auVar44[0xd] = -(auVar42[0xd] == auVar41[5]);
              auVar44[0xe] = -(auVar42[0xe] == auVar41[6]);
              auVar44[0xf] = -(auVar42[0xf] == auVar41[7]);
              uVar25 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
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
                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar44[0xf] >> 7) << 0xf;
              uVar32 = (uint)uVar25;
              while (uVar25 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar32; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar34 = (uVar4 + uVar29 & plStack_a8[1]) * -0xf0;
                if (cVar24 == *(char *)(lVar28 + -0xf0 + lVar34)) {
                  lVar28 = lVar28 + lVar34;
                  pdb_140c52f30(lVar28 + -0xd8);
                  *(undefined1 *)(lVar28 + -8) = 0;
                  goto LAB_140c5a930;
                }
                uVar25 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar25);
              }
              auVar43[0] = -(auVar42[0] == -1);
              auVar43[1] = -(auVar42[1] == -1);
              auVar43[2] = -(auVar42[2] == -1);
              auVar43[3] = -(auVar42[3] == -1);
              auVar43[4] = -(auVar42[4] == -1);
              auVar43[5] = -(auVar42[5] == -1);
              auVar43[6] = -(auVar42[6] == -1);
              auVar43[7] = -(auVar42[7] == -1);
              auVar43[8] = -(auVar42[8] == -1);
              auVar43[9] = -(auVar42[9] == -1);
              auVar43[10] = -(auVar42[10] == -1);
              auVar43[0xb] = -(auVar42[0xb] == -1);
              auVar43[0xc] = -(auVar42[0xc] == -1);
              auVar43[0xd] = -(auVar42[0xd] == -1);
              auVar43[0xe] = -(auVar42[0xe] == -1);
              auVar43[0xf] = -(auVar42[0xf] == -1);
              if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar43 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar43 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x4f,0) & 1) != 0) || (SUB161(auVar43 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
              uVar29 = uVar29 + lVar35 + 0x10;
              lVar35 = lVar35 + 0x10;
            }
          }
LAB_140c5a930:
          uVar36 = uVar36 - 1 & uVar36;
        }
        pdb_140a57030(plStack_a8,param_5);
      }
      puVar22 = puStack_1a0;
      puStack_1a0[4] = lStack_178;
      puStack_1a0[5] = ppauStack_170;
      puStack_1a0[2] = uStack_188;
      puStack_1a0[3] = lStack_180;
      *puStack_1a0 = auStack_198._0_8_;
      puStack_1a0[1] = auStack_198._8_8_;
      uStack_83 = 0;
      uStack_84 = 0;
      pdb_140ca6e20(auStack_218,&lStack_1f8,0x38,0x10);
      pdb_14098c530(&pauStack_298);
      return puVar22;
    }
    plStack_a0 = (longlong *)*puStack_160;
    lStack_98 = puStack_160[1];
    uStack_81 = 1;
    puStack_160 = puStack_160 + 2;
    cVar24 = pdb_14091d1d0(param_3,&plStack_a0);
    if (cVar24 != '\0') {
      if (2 < *_DAT_143ca8e90) {
        pauStack_140 = (undefined1 (*) [16])pdb_140c5dac0;
        pauStack_128 = (undefined1 (*) [16])0x0;
        pauStack_120 = (undefined1 (*) [16])&UNK_14306ec72;
        puStack_118 = (undefined *)0x23;
        uStack_110 = 0;
        puStack_108 = &UNK_14306e798;
        uStack_100 = 0x2f;
        uStack_f8 = 3;
        uStack_f0 = &UNK_14306ec72;
        uStack_e8 = 0x23;
        pauStack_e0 = (undefined1 (*) [16])0x14e00000001;
        pauStack_d8 = (undefined1 (*) [16])&UNK_14306ec95;
        ppplStack_d0 = &pplStack_148;
        uStack_81 = 1;
        pplStack_148 = &plStack_a0;
        pdb_140f332f0(&uStack_85,&pauStack_128);
      }
      uStack_81 = 1;
      lVar28 = pdb_14091cf50(param_3,&plStack_a0);
      lVar38 = *(longlong *)(lVar28 + 8);
      lVar28 = *(longlong *)(lVar28 + 0x10);
      lVar35 = lVar38;
      while (lVar34 = lVar35, lVar34 != lVar28 * 0x98 + lVar38) {
        lVar35 = lVar34 + 0x98;
        if (*(longlong *)(*(longlong *)(lVar34 + 0x88) + 0x20) != 0) {
          uStack_81 = 1;
          pdb_1417b2a00(auStack_198,*(undefined1 *)(lVar34 + 0x90));
        }
      }
      uStack_81 = 1;
      pdb_140a56e00(param_4,&plStack_a0);
      lVar38 = lStack_1a8;
      if (puStack_238 != (undefined *)0x0) {
        uStack_81 = 1;
        uVar29 = pdb_1417c49b0(&uStack_230,&plStack_a0);
        lVar28 = lStack_98;
        plVar23 = plStack_a0;
        bVar40 = (byte)(uVar29 >> 0x39);
        auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
        auVar41 = pshuflw(auVar41,auVar41,0);
        plVar27 = plStack_a0 + 2;
        lVar35 = 0;
        pauVar33 = pauStack_248;
        pauVar37 = pauStack_250;
        while( true ) {
          uVar29 = uVar29 & (ulonglong)pauVar33;
          pcVar1 = *pauVar37 + uVar29;
          cVar24 = *pcVar1;
          cVar6 = pcVar1[1];
          cVar7 = pcVar1[2];
          cVar8 = pcVar1[3];
          cVar9 = pcVar1[4];
          cVar10 = pcVar1[5];
          cVar11 = pcVar1[6];
          cVar12 = pcVar1[7];
          cVar13 = pcVar1[8];
          cVar14 = pcVar1[9];
          cVar15 = pcVar1[10];
          cVar16 = pcVar1[0xb];
          cVar17 = pcVar1[0xc];
          cVar18 = pcVar1[0xd];
          cVar19 = pcVar1[0xe];
          cVar20 = pcVar1[0xf];
          auVar42[0] = -(cVar24 == auVar41[0]);
          auVar42[1] = -(cVar6 == auVar41[1]);
          auVar42[2] = -(cVar7 == auVar41[2]);
          auVar42[3] = -(cVar8 == auVar41[3]);
          auVar42[4] = -(cVar9 == auVar41[4]);
          auVar42[5] = -(cVar10 == auVar41[5]);
          auVar42[6] = -(cVar11 == auVar41[6]);
          auVar42[7] = -(cVar12 == auVar41[7]);
          auVar42[8] = -(cVar13 == auVar41[0]);
          auVar42[9] = -(cVar14 == auVar41[1]);
          auVar42[10] = -(cVar15 == auVar41[2]);
          auVar42[0xb] = -(cVar16 == auVar41[3]);
          auVar42[0xc] = -(cVar17 == auVar41[4]);
          auVar42[0xd] = -(cVar18 == auVar41[5]);
          auVar42[0xe] = -(cVar19 == auVar41[6]);
          auVar42[0xf] = -(cVar20 == auVar41[7]);
          uVar25 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
          uVar36 = (uint)uVar25;
          lVar38 = lStack_1a8;
          while (lStack_1a8 = lVar35, uVar25 != 0) {
            uVar32 = 0;
            for (uVar4 = uVar36; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar32 = uVar32 + 1;
            }
            uVar30 = uVar32 + uVar29 & (ulonglong)pauVar33;
            pauStack_b0 = pauVar33;
            pauStack_90 = pauVar37;
            if ((lVar28 == *(longlong *)(pauVar37[uVar30 * -4 + -4] + 8)) &&
               (iVar26 = pub_142e32750(plVar27,*(longlong *)pauVar37[uVar30 * -4 + -4] + 0x10,lVar28
                                      ), iVar26 == 0)) {
              uStack_81 = 1;
              pdb_140c53680(&pplStack_1c8,plVar23,lVar28,pauVar37 + uVar30 * -4 + -3,auStack_218,
                            &pauStack_298);
              param_4 = plStack_a8;
              param_3 = uStack_1b0;
              pauStack_b0 = (undefined1 (*) [16])(lStack_1b8 * 0x98 + (longlong)pauStack_1c0);
              pauVar33 = pauStack_1c0;
              goto LAB_140c5a6a0;
            }
            uVar25 = (ushort)(uVar36 - 1) & (ushort)uVar36;
            uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar25);
            pauVar33 = pauStack_b0;
            lVar35 = lStack_1a8;
            pauVar37 = pauStack_90;
            lVar38 = lStack_1a8;
          }
          auVar45[0] = -(cVar24 == -1);
          auVar45[1] = -(cVar6 == -1);
          auVar45[2] = -(cVar7 == -1);
          auVar45[3] = -(cVar8 == -1);
          auVar45[4] = -(cVar9 == -1);
          auVar45[5] = -(cVar10 == -1);
          auVar45[6] = -(cVar11 == -1);
          auVar45[7] = -(cVar12 == -1);
          auVar45[8] = -(cVar13 == -1);
          auVar45[9] = -(cVar14 == -1);
          auVar45[10] = -(cVar15 == -1);
          auVar45[0xb] = -(cVar16 == -1);
          auVar45[0xc] = -(cVar17 == -1);
          auVar45[0xd] = -(cVar18 == -1);
          auVar45[0xe] = -(cVar19 == -1);
          auVar45[0xf] = -(cVar20 == -1);
          if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x2f,0) & 1) != 0) || (SUB161(auVar45 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
          uVar29 = uVar29 + lStack_1a8 + 0x10;
          lVar35 = lStack_1a8 + 0x10;
          lStack_1a8 = lVar38;
        }
      }
      lStack_1a8 = lVar38;
      uStack_81 = 1;
      pdb_142dc8110(&UNK_14306e575,0x16,&UNK_14306ecc0);
LAB_140c5aa12:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (1 < *_DAT_143ca8e90) {
      pauStack_140 = (undefined1 (*) [16])pdb_140c5dac0;
      pauStack_128 = (undefined1 (*) [16])0x0;
      pauStack_120 = (undefined1 (*) [16])&UNK_14306ec72;
      puStack_118 = (undefined *)0x23;
      uStack_110 = 0;
      puStack_108 = &UNK_14306e798;
      uStack_100 = 0x2f;
      uStack_f8 = 2;
      uStack_f0 = &UNK_14306ec72;
      uStack_e8 = 0x23;
      pauStack_e0 = (undefined1 (*) [16])0x14a00000001;
      pauStack_d8 = (undefined1 (*) [16])&UNK_14306ec48;
      ppplStack_d0 = &pplStack_148;
      uStack_81 = 1;
      pplStack_148 = &plStack_a0;
      pdb_140f332f0(&uStack_85,&pauStack_128);
    }
    LOCK();
    *plStack_a0 = *plStack_a0 + -1;
    UNLOCK();
    if (*plStack_a0 == 0) {
      pdb_1406ed6a0(&plStack_a0);
    }
  } while( true );
LAB_140c5a6a0:
  pauStack_90 = pauVar33;
  if (pauStack_90 != pauStack_b0) {
    pauVar37 = pauStack_90 + 9;
    pauVar33 = (undefined1 (*) [16])(*pauVar37 + 8);
    if (*(longlong *)(*(longlong *)(pauStack_90[8] + 8) + 0x20) != 0) {
      uVar2 = pauStack_90[9][0];
      LOCK();
      lVar38 = *plStack_a0;
      *plStack_a0 = *plStack_a0 + 1;
      UNLOCK();
      if (*plStack_a0 == 0 || SCARRY8(lVar38,1) != *plStack_a0 < 0) goto LAB_140c5aa12;
      pdb_140a58290(param_4,uVar2,plStack_a0,lStack_98,*(longlong *)(pauStack_90[8] + 8) + 0x10);
      pdb_1417b2a00(auStack_198,uVar2);
    }
    goto LAB_140c5a6a0;
  }
  lStack_138 = lStack_1b8;
  pplStack_148 = pplStack_1c8;
  pauStack_140 = pauStack_1c0;
  pdb_1417bc420(&pauStack_128,param_3,plStack_a0,lStack_98,&pplStack_148);
  if (!SBORROW8(0,(longlong)pauStack_128)) {
    pdb_14098e520(&pauStack_128);
  }
  goto LAB_140c5a29e;
}

