// VA 0x1414803f0, PDB extent 10353 bytes
// system_wall_constructor::construct_elevation_supports::find_overlap_segments::find_overhang_support_segments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/find_overlap_segments.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::find_overlap_segments::find_overhang_support_segments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/find_overlap_segments.rs
   Extent: 10353 */

undefined1 (*) [16]
pdb_1414803f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong param_3,uint *param_4,
             undefined8 param_5,undefined8 *param_6,longlong param_7,byte param_8,float param_9)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  char cVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  byte *pbVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined8 uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined *puVar42;
  undefined4 *puVar43;
  longlong lVar44;
  undefined *puVar45;
  undefined1 (*pauVar46) [16];
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float extraout_XMM0_Da;
  float fVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar52;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  byte abStack_35c [4];
  ulonglong uStack_358;
  undefined1 (*pauStack_350) [16];
  ulonglong uStack_348;
  char acStack_340 [8];
  undefined1 auStack_338 [16];
  undefined1 (*pauStack_328) [16];
  undefined1 (*pauStack_320) [16];
  undefined1 auStack_318 [16];
  undefined1 (*pauStack_308) [16];
  longlong lStack_2f8;
  undefined1 (*pauStack_2f0) [16];
  undefined8 uStack_2e8;
  uint uStack_2dc;
  longlong lStack_2d8;
  byte *pbStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  float fStack_2a8;
  undefined4 uStack_2a4;
  longlong lStack_2a0;
  undefined1 (*pauStack_298) [16];
  longlong lStack_290;
  uint *puStack_288;
  undefined8 *puStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined8 uStack_248;
  undefined1 (*pauStack_240) [16];
  ulonglong uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  ulonglong uStack_228;
  undefined1 (*pauStack_220) [16];
  ulonglong uStack_218;
  undefined4 uStack_208;
  undefined1 auStack_1f8 [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined1 (*pauStack_1b8) [16];
  longlong *plStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  byte *pbStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  float fStack_168;
  undefined4 uStack_164;
  undefined1 (*pauStack_160) [16];
  undefined8 uStack_158;
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_121;
  longlong *plStack_120;
  undefined1 (*pauStack_118) [16];
  longlong lStack_110;
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_288 = param_4;
  pauStack_1b8 = param_2;
  plStack_120 = (longlong *)param_3;
  uVar30 = pdb_140e94b40();
  pauVar36 = (undefined1 (*) [16])(ulonglong)uVar30;
  cVar29 = '\0';
  if ((char)uVar30 == '\0') goto LAB_1414805f5;
  pauVar40 = (undefined1 (*) [16])0x6c;
  lVar31 = pdb_141482c70(0x6c);
  pauVar46 = (undefined1 (*) [16])&UNK_14330ced8;
  if (lVar31 == 1) {
    if ((undefined1 (*) [16])0x6c < param_2) {
LAB_141481ced:
      pdb_142dc8070(&UNK_14330ced8,0x6c,0);
LAB_141481d0d:
      pdb_142dc8070(&UNK_14330ced8,0x6c);
      pcVar8 = (code *)swi(3);
      pauVar36 = (undefined1 (*) [16])(*pcVar8)();
      return pauVar36;
    }
    uVar32 = pdb_141482c70(param_2);
    if ((uVar32 & 1) != 0) {
      if ((undefined *)0x6c < *param_2 + 2) goto LAB_141481d0d;
      pauVar40 = (undefined1 (*) [16])(0x6a - (longlong)param_2);
      pauVar46 = (undefined1 (*) [16])(param_2[0x14330ced] + 10);
    }
  }
  puVar42 = &UNK_14330ce03;
  puVar45 = &UNK_14330cdaa;
  do {
    bVar5 = puVar42[-1];
    uVar30 = (uint)(char)bVar5;
    if ((char)bVar5 < '\0') {
      bVar6 = puVar42[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar42[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar42 + -4;
          puVar42 = puVar42 + -4;
          uVar30 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar42 = puVar42 + -3;
          uVar30 = bVar7 & 0xf;
        }
        uVar30 = bVar6 & 0x3f | uVar30 << 6;
      }
      else {
        puVar42 = puVar42 + -2;
        uVar30 = bVar6 & 0x1f;
      }
      uVar30 = (uint)(bVar5 & 0x3f) | uVar30 << 6;
      if (uVar30 != 0x5c) goto LAB_141480564;
LAB_141480575:
      puVar45 = puVar42 + -0x14330cda9;
      if ((undefined *)0x59 < puVar45) {
        pdb_142dc8070(&UNK_14330cdaa,0x59,puVar45,0x59,&UNK_14330cfa0);
        goto LAB_141481ced;
      }
      pauVar41 = (undefined1 (*) [16])(0x59 - (longlong)puVar45);
      puVar45 = puVar42 + 1;
      goto LAB_141480597;
    }
    puVar42 = puVar42 + -1;
    if (uVar30 == 0x5c) goto LAB_141480575;
LAB_141480564:
    if (uVar30 == 0x2f) goto LAB_141480575;
  } while (puVar42 != &UNK_14330cdaa);
  pauVar41 = (undefined1 (*) [16])0x59;
LAB_141480597:
  plVar33 = (longlong *)pdb_140e97000();
  if ((char)plVar33[0xd] != '\x01') goto LAB_141481c74;
  do {
    cVar29 = (char)pauVar36;
    if (*plVar33 == 0) {
      *plVar33 = -1;
      plStack_1b0 = plVar33;
      uStack_2e8 = pdb_140e94f10(plVar33 + 1,pauVar46,pauVar40,puVar45,pauVar41,1,0);
      *plStack_1b0 = *plStack_1b0 + 1;
LAB_1414805f5:
      lStack_2a0 = 0;
      pauStack_298 = (undefined1 (*) [16])0x8;
      lStack_290 = 0;
      pauVar41 = (undefined1 (*) [16])*param_6;
      auVar4 = *pauVar41;
      pauVar36 = pauVar41 + 1;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      pauStack_100 = (undefined1 (*) [16])0x0;
      lVar31 = param_6[3];
      pauStack_328 = param_1;
      cStack_f1 = cVar29;
LAB_141480690:
      plStack_1b0 = (longlong *)lVar31;
      fVar27 = _DAT_14300ccb0;
      fVar26 = _DAT_142e382c0;
      fVar25 = _DAT_142e36f50;
      fVar24 = _DAT_142e36f28;
      if (plStack_1b0 != (longlong *)0x0) {
        if ((short)uVar30 == 0) {
          do {
            auVar4 = *pauVar36;
            pauVar41 = pauVar41 + -0x28;
            pauVar36 = pauVar36 + 1;
            uVar30 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar30 == 0);
        }
        uVar9 = 0;
        for (uVar10 = uVar30; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar32 = (ulonglong)uVar9;
        uVar30 = uVar30 - 1 & uVar30;
        lVar31 = (longlong)plStack_1b0 + -1;
        pauVar46 = *(undefined1 (**) [16])((longlong)pauVar41 + uVar32 * -0x28 + -0x28);
        pauVar40 = *(undefined1 (**) [16])((longlong)pauVar41 + uVar32 * -0x28 + -0x20);
        if (pauVar46 != pauStack_1b8) goto code_r0x000141480700;
        pauVar46 = pauVar40;
        if (pauStack_100 == (undefined1 (*) [16])lStack_2a0) {
          pdb_142d7e980(&lStack_2a0);
        }
        goto LAB_141480658;
      }
      pauStack_118 = (undefined1 (*) [16])0x0;
      lStack_110 = 8;
      pauStack_108 = (undefined1 (*) [16])0x0;
      lStack_2f8 = lStack_2a0;
      pauStack_100 = pauStack_298 + (longlong)pauStack_100;
      uStack_2dc = *puStack_288;
      puStack_280 = (undefined8 *)CONCAT71(puStack_280._1_7_,uStack_2dc != 0 & param_8);
      pauStack_2f0 = pauStack_298;
      pauVar46 = (undefined1 (*) [16])0x0;
      plStack_1b0 = (longlong *)0x0;
      pauVar36 = pauStack_298;
      while (pauVar36 != pauStack_100) {
        pauVar40 = *(undefined1 (**) [16])*pauVar36;
        pauVar41 = *(undefined1 (**) [16])(*pauVar36 + 8);
        pauVar46 = (undefined1 (*) [16])pdb_140b54f80(param_5,pauVar40,&UNK_14330ce48);
        if (pauVar46 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330ce60);
        }
        pauVar36 = pauVar36 + 1;
        if (*(uint *)(pauVar46[0x25] + 8) < 2) {
          fVar49 = *(float *)(pauVar46[0x28] + 4);
          fVar47 = (float)pdb_140930390(pauVar46);
          fVar50 = *(float *)((longlong)plStack_120 + 0x284);
          in_XMM1 = ZEXT416((uint)fVar50);
          if (((fVar49 + fVar26 <= fVar50) && (fVar50 < fVar47 + fVar27)) &&
             (uVar30 = *(uint *)(pauVar46[0x25] + 8), uVar30 < 2)) {
            pauStack_308 = *(undefined1 (**) [16])(pauVar46[0x26] + 0xc);
            auStack_318 = *(undefined1 (*) [16])(pauVar46[0x25] + 0xc);
            if (uVar30 == 1) {
              pauStack_188 = *(undefined1 (**) [16])(pauVar46[0x26] + 0xc);
              _auStack_198 = *(undefined1 (*) [16])(pauVar46[0x25] + 0xc);
              pdb_140df37e0(&lStack_2d8,auStack_198);
            }
            else {
              _auStack_198 = *(undefined1 (*) [16])(pauVar46[0x25] + 0xc);
              pdb_140defcd0(&lStack_2d8,auStack_198);
            }
            uStack_190 = *(longlong *)(*pauVar41 + 8) + *(longlong *)pauVar41[1] * 8;
            auStack_198 = (undefined1  [8])*(longlong *)(*pauVar41 + 8);
            pauStack_188 = (undefined1 (*) [16])&lStack_2d8;
            pdb_1413ebfd0(&uStack_228);
            pauVar46 = (undefined1 (*) [16])(auStack_1f8 + 8);
            if (((byte)puStack_280 & (byte)uVar30) != 0) {
              pauStack_188 = pauStack_308;
              _auStack_198 = auStack_318;
              uVar32 = 0;
              pauVar41 = (undefined1 (*) [16])0x0;
              while ((pauVar41 == (undefined1 (*) [16])0x0 && (uVar32 < 5))) {
                pauVar41 = (undefined1 (*) [16])(ulonglong)(uVar32 == 4);
                uVar28 = uVar32 + 1;
                if (uVar32 == 4) {
                  uVar28 = uVar32;
                }
                uVar32 = uVar28;
                uVar48 = pdb_140df0700(auStack_198);
                uVar28 = uStack_218;
                if (uStack_218 == uStack_228) {
                  pdb_142d8d710(&uStack_228);
                }
                *(undefined4 *)(*pauStack_220 + uVar28 * 4) = uVar48;
                uStack_218 = uVar28 + 1;
              }
            }
            auStack_198 = (undefined1  [8])&uStack_121;
            if (1 < uStack_218) {
              if (uStack_218 < 0x15) {
                pdb_141460860(pauStack_220,uStack_218,1);
              }
              else {
                pdb_141466730(pauStack_220,uStack_218,auStack_198);
              }
            }
            if (uStack_218 != 1 || param_9 != 0.0) {
              pauStack_1e8 = (undefined1 (*) [16])(*pauStack_220 + uStack_218 * 4);
              auStack_1f8._8_8_ = pauStack_220;
              uStack_1d0 = (undefined1 (*) [16])((ulonglong)uStack_1d0 & 0xffffffff00000000);
              pauStack_1d8 = pauStack_1e8;
              pauStack_1e0 = pauStack_220;
              uVar32 = uStack_218;
joined_r0x000141480b7e:
              if (uVar32 != 0) {
                do {
                  auStack_1f8._0_8_ = uVar32 - 1;
                  pauVar35 = pauStack_1e0;
                  if ((pauStack_1e0 == pauStack_1d8) &&
                     (pauStack_1d8 = pauStack_1e8, pauVar35 = (undefined1 (*) [16])auStack_1f8._8_8_
                     , (undefined1 (*) [16])auStack_1f8._8_8_ == pauStack_1e8)) break;
                  pauStack_1e0 = (undefined1 (*) [16])(*pauVar35 + 4);
                  if ((int)uStack_1d0 == 1) {
                    uStack_1d0 = (undefined1 (*) [16])CONCAT44(fStack_1c8,1);
                    fVar49 = fStack_1c8;
                    fVar50 = *(float *)*pauVar35;
                  }
                  else {
                    auStack_198._4_4_ = *(float *)*pauVar35;
                    auStack_198._0_4_ = 1;
                    uStack_190 = (ulonglong)pauVar46;
                    pdb_141413fd0(&fStack_278,auStack_198);
                    fStack_1c8 = fStack_270;
                    uStack_1d0 = (undefined1 (*) [16])CONCAT44(fStack_274,fStack_278);
                    fVar49 = fStack_274;
                    fVar50 = fStack_270;
                    if (fStack_278 != 1.4013e-45) break;
                  }
                  fStack_1c8 = fVar50;
                  if (fVar49 <= fVar50) {
                    if (NAN(fVar49 * fVar25 + fVar50 * fVar25)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                    }
                  }
                  else if (NAN(fVar49 * fVar25 + (fVar50 + fVar24) * fVar25)) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                  }
                  fVar47 = (float)pub_142e32a70();
                  fStack_278 = (float)(~-(uint)(fVar47 < 0.0) & (uint)fVar47 |
                                      (uint)(fVar47 + fVar24) & -(uint)(fVar47 < 0.0));
                  if ((fStack_278 < 0.0) || (fVar24 < fStack_278)) {
                    uStack_190 = (ulonglong)pdb_140f70fc0;
                    auStack_198 = (undefined1  [8])&fStack_278;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_143307ab0,auStack_198,&UNK_143307a98);
                  }
                  uVar30 = pdb_1413f9030(&lStack_2d8);
                  uVar32 = (ulonglong)uVar30;
                  if ((ulonglong)auStack_2c8._0_8_ <= uVar32) goto LAB_141481ca9;
                  if ((ulonglong)auStack_2c8._0_8_ <= uVar32 + 1) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar32 + 1,auStack_2c8._0_8_,&UNK_143306620);
                  }
                  in_XMM1 = ZEXT416((uint)(*(float *)(pbStack_2d0 + uVar32 * 8 + 8) *
                                           extraout_XMM0_Da +
                                          *(float *)(pbStack_2d0 + uVar32 * 8) *
                                          (fVar24 - extraout_XMM0_Da)));
                  cVar29 = pdb_140a84de0(puStack_288,auStack_2c8._0_8_,
                                         *(float *)(pbStack_2d0 + uVar32 * 8 + 0xc) *
                                         extraout_XMM0_Da +
                                         (fVar24 - extraout_XMM0_Da) *
                                         *(float *)(pbStack_2d0 + uVar32 * 8 + 4));
                  if ((cVar29 != '\0') &&
                     (fVar47 = ((float)(~-(uint)(fVar50 < fVar49) & (uint)fVar50 |
                                       (uint)(fVar50 + fVar24) & -(uint)(fVar50 < fVar49)) - fVar49)
                               * fStack_2a8, in_XMM1 = ZEXT416((uint)fVar47), param_9 < fVar47)) {
                    if (param_8 != 0) {
                      fVar49 = (float)pub_142e32a70();
                      fVar49 = (float)(~-(uint)(fVar49 < 0.0) & (uint)fVar49 |
                                      (uint)(fVar49 + fVar24) & -(uint)(fVar49 < 0.0));
                      fVar50 = (float)pub_142e32a70();
                      in_XMM1._0_4_ = (float)((uint)(fVar50 + fVar24) & -(uint)(fVar50 < 0.0));
                      in_XMM1._4_4_ = 0;
                      in_XMM1._8_4_ = (int)extraout_XMM0_Qb;
                      in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                      fVar50 = (float)(~-(uint)(fVar50 < 0.0) & (uint)fVar50 | (uint)in_XMM1._0_4_);
                    }
                    pdb_1413f8b70(&fStack_278,&lStack_2d8);
                    pauVar35 = pauStack_108;
                    if (!SBORROW8(0,CONCAT44(fStack_274,fStack_278))) goto code_r0x000141480e29;
                  }
                  uVar32 = auStack_1f8._0_8_;
                  if (auStack_1f8._0_8_ == 0) break;
                } while( true );
              }
              goto LAB_14148109f;
            }
            if (NAN(_DAT_142e37ae0 / fStack_2a8 + fVar24)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            fVar49 = (float)pub_142e32a70();
            pbVar1 = pbStack_2d0;
            uVar55 = auStack_2c8._0_8_;
            pauVar46 = (undefined1 (*) [16])(auStack_2c8._0_8_ * 8);
            if ((undefined1 (*) [16])0x7ffffffffffffffc < pauVar46 ||
                (ulonglong)auStack_2c8._0_8_ >> 0x3d != 0) {
              uVar39 = 0;
LAB_141481b5e:
              pdb_142dc7e2a(uVar39,pauVar46);
              goto LAB_141481cc8;
            }
            if (pauVar46 == (undefined1 (*) [16])0x0) {
              pbVar34 = (byte *)0x4;
              pauStack_1a8 = (undefined1 (*) [16])0x0;
              pauVar41 = pauStack_1a8;
            }
            else {
              pdb_14007ee60();
              uVar39 = 4;
              pbVar34 = pub_1406abab0((ulonglong)pauVar46,4);
              pauVar41 = (undefined1 (*) [16])uVar55;
              if (pbVar34 == (byte *)0x0) goto LAB_141481b5e;
            }
            pauStack_1a8 = pauVar41;
            if ((undefined1 (*) [16])uVar55 != (undefined1 (*) [16])0x0) {
              pub_142e32760(pbVar34,pbVar1,pauVar46);
            }
            pauVar41 = pauStack_2b8;
            uVar32 = (longlong)pauStack_2b0 * 4;
            if (0x7ffffffffffffffc < uVar32 || (ulonglong)pauStack_2b0 >> 0x3e != 0) {
              pauVar46 = (undefined1 (*) [16])0x0;
              pbStack_1a0 = pbVar34;
LAB_141481b79:
              pdb_142dc7e2a(pauVar46,uVar32);
LAB_141481cc8:
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar32 == 0) {
              pauVar35 = (undefined1 (*) [16])0x4;
              pauStack_180 = pauStack_2b0;
            }
            else {
              pauStack_320 = pauStack_2b0;
              pbStack_1a0 = pbVar34;
              pdb_14007ee60();
              pauVar46 = (undefined1 (*) [16])0x4;
              pauVar35 = (undefined1 (*) [16])pub_1406abab0(uVar32,4);
              if (pauVar35 == (undefined1 (*) [16])0x0) goto LAB_141481b79;
              pauStack_180 = pauStack_320;
              pbVar34 = pbStack_1a0;
              if (pauStack_320 != (undefined1 (*) [16])0x0) {
                pauVar38 = (undefined1 (*) [16])(pauStack_320[-1] + 0xf);
                if (pauStack_320 < (undefined1 (*) [16])(pauStack_320[-1] + 0xf)) {
                  pauVar38 = pauStack_320;
                }
                if (pauVar38 < (undefined1 (*) [16])0x8) {
                  lVar31 = 0;
                  pauVar37 = pauStack_320;
                  pauVar38 = pauVar41;
                }
                else {
                  puVar45 = *pauVar38 + 1;
                  uVar32 = (ulonglong)((uint)puVar45 & 7);
                  if (((ulonglong)puVar45 & 7) == 0) {
                    uVar32 = 8;
                  }
                  lVar31 = (longlong)puVar45 - uVar32;
                  pauVar37 = (undefined1 (*) [16])((longlong)pauStack_320 - lVar31);
                  pauVar38 = (undefined1 (*) [16])((longlong)pauVar41 + lVar31 * 4);
                  lVar44 = 0;
                  do {
                    uVar39 = *(undefined8 *)((longlong)(*pauVar41 + lVar44 * 4) + 8);
                    uVar14 = *(undefined8 *)(pauVar41[1] + lVar44 * 4);
                    uVar15 = *(undefined8 *)((longlong)(pauVar41[1] + lVar44 * 4) + 8);
                    *(undefined8 *)(*pauVar35 + lVar44 * 4) =
                         *(undefined8 *)(*pauVar41 + lVar44 * 4);
                    *(undefined8 *)((longlong)(*pauVar35 + lVar44 * 4) + 8) = uVar39;
                    *(undefined8 *)(pauVar35[1] + lVar44 * 4) = uVar14;
                    *(undefined8 *)((longlong)(pauVar35[1] + lVar44 * 4) + 8) = uVar15;
                    lVar44 = lVar44 + 8;
                  } while (lVar31 != lVar44);
                }
                puVar43 = (undefined4 *)(*pauVar35 + lVar31 * 4);
                do {
                  if (pauVar38 == (undefined1 (*) [16])(*pauVar41 + (longlong)pauStack_320 * 4))
                  break;
                  puVar45 = *pauVar38;
                  pauVar38 = (undefined1 (*) [16])(*pauVar38 + 4);
                  *puVar43 = *(undefined4 *)puVar45;
                  puVar43 = puVar43 + 1;
                  pauVar37 = (undefined1 (*) [16])(pauVar37[-1] + 0xf);
                } while (pauVar37 != (undefined1 (*) [16])0x0);
              }
            }
            pauVar41 = pauStack_108;
            uStack_158 = (ulonglong)
                         (~-(uint)(fVar49 < 0.0) & (uint)fVar49 |
                         (uint)(fVar49 + fVar24) & -(uint)(fVar49 < 0.0)) << 0x20;
            uStack_190 = (ulonglong)pbVar34;
            auStack_198 = (undefined1  [8])pauStack_1a8;
            pauStack_188 = (undefined1 (*) [16])uVar55;
            fStack_168 = fStack_2a8;
            pauStack_150 = (undefined1 (*) [16])((ulonglong)pauStack_150 & 0xffffffffffffff00);
            pauStack_178 = pauVar35;
            pauStack_170 = pauStack_180;
            pauStack_160 = pauVar40;
            if (pauStack_108 == pauStack_118) {
              pdb_142d8d780(&pauStack_118);
            }
            lVar31 = (longlong)pauVar41 * 0x50;
            puVar3 = (ulonglong *)(lStack_110 + 0x40 + lVar31);
            *puVar3 = uStack_158;
            puVar3[1] = (ulonglong)pauStack_150;
            in_XMM1._8_8_ = pauStack_180;
            in_XMM1._0_8_ = (ulonglong)pauStack_188;
            auVar58._8_8_ = pauStack_170;
            auVar58._0_8_ = pauStack_178;
            auVar20._4_4_ = uStack_164;
            auVar20._0_4_ = fStack_168;
            auVar20._8_8_ = pauStack_160;
            *(undefined1 (*) [16])(lStack_110 + 0x30 + lVar31) = auVar20;
            *(undefined1 (*) [16])(lStack_110 + 0x20 + lVar31) = auVar58;
            *(undefined1 (*) [16])(lStack_110 + 0x10 + lVar31) = in_XMM1;
            *(undefined1 (*) [16])(lStack_110 + lVar31) = _auStack_198;
            pauVar41 = (undefined1 (*) [16])(*pauVar41 + 1);
            pauStack_108 = pauVar41;
LAB_14148109f:
            if (uStack_228 != 0) {
              pub_1406abac0((byte *)pauStack_220,uStack_228 << 2,4);
            }
            if (lStack_2d8 != 0) {
              pub_1406abac0(pbStack_2d0,lStack_2d8 << 3,4);
            }
            if (auStack_2c8._8_8_ != 0) {
              pub_1406abac0((byte *)pauStack_2b8,auStack_2c8._8_8_ << 2,4);
            }
          }
        }
      }
      if (lStack_2f8 != 0) {
        pub_1406abac0((byte *)pauStack_2f0,lStack_2f8 << 4,8);
      }
      auVar4 = _DAT_143009bd0;
      fVar49 = _UNK_142e37954;
      fVar25 = _DAT_142e37950;
      puStack_280 = *(undefined8 **)(param_7 + 8) + *(longlong *)(param_7 + 0x10) * 2;
      pauVar36 = (undefined1 (*) [16])*(undefined8 **)(param_7 + 8);
      while (pauStack_100 = pauVar36, pauStack_100 != (undefined1 (*) [16])puStack_280) {
        pauVar41 = *(undefined1 (**) [16])pauStack_100;
        pauVar36 = (undefined1 (*) [16])((longlong)pauStack_100 + 0x10);
        if (pauStack_1b8 != pauVar41) {
          puVar2 = (undefined8 *)((longlong)pauStack_100 + 8);
          pauStack_100 = (undefined1 (*) [16])((longlong)pauStack_100 + 0x10);
          pdb_140b77620(abStack_35c,*puVar2);
          pdb_140b77190(acStack_340);
          pauVar36 = pauStack_100;
          if (((abStack_35c[0] & 1) != 0) && (acStack_340[0] != '\0')) {
            uStack_218 = uStack_348;
            uStack_228 = uStack_358;
            pauStack_220 = pauStack_350;
            auStack_2c8 = auStack_338;
            lVar31 = 0;
            while (pauVar36 = pauStack_100, lVar31 != 2) {
              lVar44 = lVar31 + 1;
              lVar31 = *(longlong *)(auStack_2c8 + lVar31 * 8);
              lStack_2d8 = lVar44;
              uVar48 = pdb_140df3e10(&uStack_228,lVar31);
              pauVar46 = (undefined1 (*) [16])(lVar31 + 1);
              auVar56 = in_XMM1;
              uStack_190._0_4_ = pdb_140df3e10(&uStack_228,pauVar46);
              auStack_198._4_4_ = in_XMM1._0_4_;
              auStack_198._0_4_ = uVar48;
              uStack_190._4_4_ = auVar56._0_4_;
              pdb_140df0700(&uStack_228,lVar31);
              pdb_140df0700(&uStack_228,pauVar46);
              pdb_14092f900(plStack_120);
              pdb_140b74440(&fStack_278);
              fVar47 = fStack_270;
              fVar50 = fStack_274;
              lVar31 = lVar44;
              in_XMM1 = auVar56;
              if (fStack_278 == 1.4013e-45) {
                uVar32 = CONCAT44(fStack_270,fStack_274);
                fVar51 = (float)pdb_140df3ee0(&uStack_228);
                in_XMM1 = ZEXT416((uint)(param_9 / fVar51));
                if (param_9 / fVar51 <=
                    (float)(~-(uint)(fVar47 < fVar50) & (uint)fVar47 |
                           (uint)(fVar47 + fVar24) & -(uint)(fVar47 < fVar50)) - fVar50) {
                  if (param_8 != 0) {
                    uVar55 = pdb_140df3ee0(&uStack_228);
                    uVar39 = pdb_140df3ee0(&uStack_228);
                    auVar66._8_4_ = (int)((ulonglong)uVar55 >> 0x20);
                    auVar66._0_8_ = uVar55;
                    auVar66._12_4_ = (int)((ulonglong)uVar39 >> 0x20);
                    auVar65._8_8_ = auVar66._8_8_;
                    auVar65._0_4_ = (undefined4)uVar55;
                    auVar65._4_4_ = (int)uVar39;
                    auVar56 = divps(auVar4,auVar65);
                    auVar57._4_12_ = auVar56._4_12_;
                    auVar57._0_4_ = auVar56._0_4_ + fVar50;
                    uVar55 = pub_142e32a70(auVar57._0_8_);
                    fVar47 = (float)((ulonglong)uVar55 >> 0x20);
                    uVar39 = pub_142e32a70();
                    fVar51 = (float)((ulonglong)uVar39 >> 0x20);
                    fVar50 = (float)uVar39;
                    fVar63 = (float)uVar55;
                    in_XMM1._0_8_ =
                         CONCAT44(~-(uint)(fVar50 < 0.0) & (uint)fVar50,
                                  ~-(uint)(fVar63 < 0.0) & (uint)fVar63);
                    in_XMM1._8_4_ = ~-(uint)(fVar47 < 0.0) & (uint)fVar47;
                    in_XMM1._12_4_ = ~-(uint)(fVar51 < 0.0) & (uint)fVar51;
                    uVar32 = CONCAT44((uint)(fVar50 + fVar49) & -(uint)(fVar50 < 0.0),
                                      (uint)(fVar63 + fVar25) & -(uint)(fVar63 < 0.0)) |
                             in_XMM1._0_8_;
                  }
                  pdb_140df37e0(&fStack_278,&uStack_228);
                  pdb_1413f8b70(auStack_1f8,&fStack_278);
                  pauVar36 = pauStack_108;
                  if (!SBORROW8(0,auStack_1f8._0_8_)) {
                    fStack_168 = fStack_1c8;
                    uStack_164 = uStack_1c4;
                    pauStack_178 = pauStack_1d8;
                    pauStack_170 = uStack_1d0;
                    pauStack_188 = pauStack_1e8;
                    pauStack_180 = pauStack_1e0;
                    _auStack_198 = auStack_1f8;
                    pauStack_150 = (undefined1 (*) [16])
                                   ((ulonglong)pauStack_150 & 0xffffffffffffff00);
                    pauStack_160 = pauVar41;
                    uStack_158 = uVar32;
                    if (pauStack_108 == pauStack_118) {
                      pdb_142d8d780(&pauStack_118);
                    }
                    lVar44 = (longlong)pauVar36 * 0x50;
                    puVar3 = (ulonglong *)(lStack_110 + 0x40 + lVar44);
                    *puVar3 = uStack_158;
                    puVar3[1] = (ulonglong)pauStack_150;
                    in_XMM1._8_8_ = pauStack_180;
                    in_XMM1._0_8_ = (ulonglong)pauStack_188;
                    auVar18._8_8_ = pauStack_170;
                    auVar18._0_8_ = pauStack_178;
                    auVar21._4_4_ = uStack_164;
                    auVar21._0_4_ = fStack_168;
                    auVar21._8_8_ = pauStack_160;
                    *(undefined1 (*) [16])(lStack_110 + 0x30 + lVar44) = auVar21;
                    *(undefined1 (*) [16])(lStack_110 + 0x20 + lVar44) = auVar18;
                    *(undefined1 (*) [16])(lStack_110 + 0x10 + lVar44) = in_XMM1;
                    *(undefined1 (*) [16])(lStack_110 + lVar44) = _auStack_198;
                    pauStack_108 = (undefined1 (*) [16])(*pauVar36 + 1);
                  }
                  if (CONCAT44(fStack_274,fStack_278) != 0) {
                    pub_1406abac0((byte *)CONCAT44(fStack_26c,fStack_270),
                                  CONCAT44(fStack_274,fStack_278) << 3,4);
                  }
                  if (pauStack_260 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_258,(longlong)pauStack_260 << 2,4);
                  }
                }
              }
            }
          }
        }
      }
      pauVar36 = *(undefined1 (**) [16])(param_7 + 0x20);
      pauStack_1b8 = pauVar36 + *(longlong *)(param_7 + 0x28);
      fVar47 = *(float *)*(undefined1 (*) [16])(puStack_288 + 1);
      fVar51 = (float)puStack_288[2];
      fVar63 = (float)puStack_288[3];
      fVar13 = (float)puStack_288[4];
      auVar56 = *(undefined1 (*) [16])(puStack_288 + 1);
      pauStack_100 = *(undefined1 (**) [16])(puStack_288 + 5);
      fVar50 = (float)puStack_288[3];
      puVar45 = auStack_1f8;
LAB_141481580:
      pauVar40 = pauStack_328;
      if (pauVar36 != pauStack_1b8) {
        pauVar46 = *(undefined1 (**) [16])*pauVar36;
        lVar31 = *(longlong *)(*pauVar36 + 8);
        fVar54 = *(float *)(lVar31 + 0x284);
        fVar52 = (float)pdb_140930390(lVar31);
        pauVar36 = pauVar36 + 1;
        fVar53 = *(float *)((longlong)plStack_120 + 0x284);
        in_XMM1 = ZEXT416((uint)fVar53);
        if ((fVar54 + fVar26 <= fVar53) && (fVar53 < fVar52 + fVar27)) {
          uVar30 = *(uint *)(lVar31 + 600);
          if (1 < uVar30) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14330ce03,0x28,&UNK_14330ce30);
          }
          auVar58 = *(undefined1 (*) [16])(lVar31 + 0x25c);
          fVar54 = auVar58._4_4_;
          fVar53 = auVar58._8_4_;
          fVar52 = auVar58._12_4_;
          pauVar41 = *(undefined1 (**) [16])(lVar31 + 0x26c);
          if ((uStack_2dc & 1) == 0) {
            if ((uVar30 & 1) != 0) {
              uVar32 = 0;
              fStack_278 = fVar47;
              fStack_274 = fVar51;
              fStack_270 = fVar63;
              fStack_26c = fVar13;
              _auStack_198 = auVar58;
              pauStack_188 = pauVar41;
              do {
                if (3 < uVar32) goto LAB_1414816d1;
                uVar55 = pdb_140df3e10(auStack_198);
                in_XMM1._8_4_ = (int)extraout_XMM0_Qb_01;
                in_XMM1._0_8_ = uVar55;
                in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
                cVar29 = pdb_140def450(&fStack_278);
                uVar32 = uVar32 + 1;
              } while (cVar29 != '\0');
              goto LAB_141481580;
            }
            if (fVar50 <= fVar53) goto LAB_141481580;
            fVar53 = auVar58._0_4_ - fVar47;
            fVar54 = (fVar54 - fVar51) * (fVar54 - fVar51);
            fVar52 = (fVar52 - fVar13) * (fVar52 - fVar13);
            auVar62._4_4_ = fVar54;
            auVar62._0_4_ = fVar54;
            auVar62._8_4_ = fVar52;
            auVar62._12_4_ = fVar52;
            in_XMM1._4_12_ = auVar62._4_12_;
            in_XMM1._0_4_ = fVar54 + fVar53 * fVar53;
            if (fVar50 <= SQRT(in_XMM1._0_4_)) goto LAB_141481580;
          }
          else {
            if ((uVar30 & 1) != 0) {
              pauStack_268 = pauStack_100;
              uVar32 = 0;
              fStack_278 = fVar47;
              fStack_274 = fVar51;
              fStack_270 = fVar63;
              fStack_26c = fVar13;
              _auStack_198 = auVar58;
              pauStack_188 = pauVar41;
              do {
                if (3 < uVar32) goto LAB_1414816d1;
                uVar55 = pdb_140df3e10(auStack_198);
                in_XMM1._8_4_ = (int)extraout_XMM0_Qb_00;
                in_XMM1._0_8_ = uVar55;
                in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                cVar29 = pdb_140df1700(&fStack_278);
                uVar32 = uVar32 + 1;
              } while (cVar29 != '\0');
              goto LAB_141481580;
            }
            pauStack_188 = pauStack_100;
            in_XMM1 = auVar58;
            _auStack_198 = auVar56;
            cVar29 = pdb_140df1700(auStack_198);
            if (cVar29 == '\0') goto LAB_141481580;
            auVar11._4_8_ = in_XMM1._8_8_;
            auVar11._0_4_ = fVar54;
            auVar60._0_8_ = auVar11._0_8_ << 0x20;
            auVar60._8_4_ = fVar53;
            auVar60._12_4_ = fVar52;
            uVar30 = pdb_140df32b0(auStack_198);
            auVar12._4_8_ = auVar60._8_8_;
            auVar12._0_4_ = fVar54;
            auVar61._0_8_ = auVar12._0_8_ << 0x20;
            auVar61._8_4_ = fVar53;
            auVar61._12_4_ = fVar52;
            in_XMM1._8_8_ = auVar58._8_8_;
            in_XMM1._0_8_ = auVar61._8_8_;
            if ((float)(uVar30 & _DAT_142e377e0) <= fVar53) goto LAB_141481580;
          }
          auStack_1f8 = auVar58;
          fVar54 = (float)pdb_140deff30(puVar45);
          if (NAN(_DAT_142e37ae0 / fVar54 + fVar24)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          pdb_140defcd0(&fStack_278);
          fVar54 = (float)pub_142e32a70();
          pauVar40 = pauStack_108;
          uStack_158 = (ulonglong)
                       (~-(uint)(fVar54 < 0.0) & (uint)fVar54 |
                       (uint)(fVar54 + fVar24) & -(uint)(fVar54 < 0.0)) << 0x20;
          auStack_198._4_4_ = fStack_274;
          auStack_198._0_4_ = fStack_278;
          uStack_190._4_4_ = fStack_26c;
          uStack_190._0_4_ = fStack_270;
          pauStack_188 = pauStack_268;
          pauStack_180 = pauStack_260;
          pauStack_178 = pauStack_258;
          pauStack_170 = pauStack_250;
          fStack_168 = (float)uStack_248;
          uStack_164 = (undefined4)((ulonglong)uStack_248 >> 0x20);
          pauStack_150 = (undefined1 (*) [16])CONCAT71(pauStack_150._1_7_,1);
          pauStack_160 = pauVar46;
          if (pauStack_108 == pauStack_118) {
            pdb_142d8d780(&pauStack_118);
          }
          lVar31 = (longlong)pauVar40 * 0x50;
          puVar3 = (ulonglong *)(lStack_110 + 0x40 + lVar31);
          *puVar3 = uStack_158;
          puVar3[1] = (ulonglong)pauStack_150;
          in_XMM1._8_8_ = pauStack_180;
          in_XMM1._0_8_ = (ulonglong)pauStack_188;
          auVar19._8_8_ = pauStack_170;
          auVar19._0_8_ = pauStack_178;
          auVar22._4_4_ = uStack_164;
          auVar22._0_4_ = fStack_168;
          auVar22._8_8_ = pauStack_160;
          *(undefined1 (*) [16])(lStack_110 + 0x30 + lVar31) = auVar22;
          *(undefined1 (*) [16])(lStack_110 + 0x20 + lVar31) = auVar19;
          *(undefined1 (*) [16])(lStack_110 + 0x10 + lVar31) = in_XMM1;
          *(undefined8 *)(lStack_110 + lVar31) = auStack_198;
          ((undefined8 *)(lStack_110 + lVar31))[1] = uStack_190;
          pauVar41 = (undefined1 (*) [16])(*pauVar40 + 1);
          pauStack_108 = pauVar41;
        }
        goto LAB_141481580;
      }
      *(undefined1 (**) [16])pauStack_328[1] = pauStack_108;
      lVar31 = lStack_110;
      *(undefined1 (**) [16])*pauStack_328 = pauStack_118;
      *(longlong *)(*pauStack_328 + 8) = lVar31;
      if (cStack_f1 == '\0') {
        return pauStack_328;
      }
      plVar33 = (longlong *)pdb_140e97000();
      if (((char)plVar33[0xd] != '\x01') &&
         (plVar33 = (longlong *)pdb_142dd9610(plVar33,0), plVar33 == (longlong *)0x0)) break;
      param_1 = &auStack_318;
      if (*plVar33 == 0) {
        *plVar33 = -1;
        plStack_120 = plVar33;
        pdb_140e95370(plVar33 + 1);
        *plStack_120 = *plStack_120 + 1;
        return pauVar40;
      }
    }
    plVar33 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_141481c74:
    plVar33 = (longlong *)pdb_142dd9610(plVar33,0);
  } while (plVar33 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_141481ca9:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
code_r0x000141480700:
  if (pauVar40 == pauStack_1b8) {
    if (pauStack_100 == (undefined1 (*) [16])lStack_2a0) {
      pdb_142d7e980(&lStack_2a0);
    }
LAB_141480658:
    *(undefined1 (**) [16])pauStack_298[(longlong)pauStack_100] = pauVar46;
    *(undefined **)(pauStack_298[(longlong)pauStack_100] + 8) =
         (undefined *)((longlong)pauVar41 + uVar32 * -0x28 + -0x18);
    lStack_290 = (longlong)pauStack_100 + 1;
    pauStack_100 = (undefined1 (*) [16])lStack_290;
  }
  goto LAB_141480690;
code_r0x000141480e29:
  fStack_168 = (float)uStack_248;
  uStack_164 = (undefined4)((ulonglong)uStack_248 >> 0x20);
  auStack_198._4_4_ = fStack_274;
  auStack_198._0_4_ = fStack_278;
  uStack_190._4_4_ = fStack_26c;
  uStack_190._0_4_ = fStack_270;
  pauStack_178 = pauStack_258;
  pauStack_170 = pauStack_250;
  pauStack_188 = pauStack_268;
  pauStack_180 = pauStack_260;
  uStack_158 = CONCAT44(fVar50,fVar49);
  pauStack_150 = (undefined1 (*) [16])((ulonglong)pauStack_150 & 0xffffffffffffff00);
  pauStack_160 = pauVar40;
  if (pauStack_108 == pauStack_118) {
    pdb_142d8d780(&pauStack_118);
  }
  lVar31 = (longlong)pauVar35 * 0x50;
  puVar3 = (ulonglong *)(lStack_110 + 0x40 + lVar31);
  *puVar3 = uStack_158;
  puVar3[1] = (ulonglong)pauStack_150;
  in_XMM1._8_8_ = pauStack_180;
  in_XMM1._0_8_ = (ulonglong)pauStack_188;
  auVar4._8_8_ = pauStack_170;
  auVar4._0_8_ = pauStack_178;
  auVar56._4_4_ = uStack_164;
  auVar56._0_4_ = fStack_168;
  auVar56._8_8_ = pauStack_160;
  *(undefined1 (*) [16])(lStack_110 + 0x30 + lVar31) = auVar56;
  *(undefined1 (*) [16])(lStack_110 + 0x20 + lVar31) = auVar4;
  *(undefined1 (*) [16])(lStack_110 + 0x10 + lVar31) = in_XMM1;
  *(undefined1 (*) [16])(lStack_110 + lVar31) = _auStack_198;
  pauVar41 = (undefined1 (*) [16])(*pauVar35 + 1);
  uVar32 = auStack_1f8._0_8_;
  pauStack_108 = pauVar41;
  goto joined_r0x000141480b7e;
LAB_1414816d1:
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uStack_190;
  _auStack_198 = auVar23 << 0x40;
  fStack_168 = 0.0;
  uStack_164 = 0;
  pauStack_160 = (undefined1 (*) [16])0x4;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_140 = 4;
  uStack_138 = 0;
  uStack_130 = 4;
  auStack_318 = auVar58;
  pauStack_308 = pauVar41;
  pauStack_170 = &auStack_318;
  pauStack_150 = &auStack_318;
  while( true ) {
    pdb_1414676a0(&uStack_228);
    if ((int)uStack_228 != 1) break;
    fVar54 = (float)uStack_218;
    uVar32 = CONCAT44(uStack_208,(float)uStack_218);
    if (param_8 != 0) {
      uVar55 = pdb_140df3ee0(&auStack_318);
      uVar39 = pdb_140df3ee0(&auStack_318);
      auVar68._8_4_ = (int)((ulonglong)uVar55 >> 0x20);
      auVar68._0_8_ = uVar55;
      auVar68._12_4_ = (int)((ulonglong)uVar39 >> 0x20);
      auVar67._8_8_ = auVar68._8_8_;
      auVar67._0_4_ = (undefined4)uVar55;
      auVar67._4_4_ = (int)uVar39;
      auVar58 = divps(auVar4,auVar67);
      auVar59._4_12_ = auVar58._4_12_;
      auVar59._0_4_ = auVar58._0_4_ + fVar54;
      uVar55 = pub_142e32a70(auVar59._0_8_);
      fVar53 = (float)((ulonglong)uVar55 >> 0x20);
      uVar39 = pub_142e32a70();
      fVar52 = (float)((ulonglong)uVar39 >> 0x20);
      fVar54 = (float)uVar39;
      fVar64 = (float)uVar55;
      in_XMM1._0_8_ =
           CONCAT44(~-(uint)(fVar54 < 0.0) & (uint)fVar54,~-(uint)(fVar64 < 0.0) & (uint)fVar64);
      in_XMM1._8_4_ = ~-(uint)(fVar53 < 0.0) & (uint)fVar53;
      in_XMM1._12_4_ = ~-(uint)(fVar52 < 0.0) & (uint)fVar52;
      uVar32 = CONCAT44((uint)(fVar54 + fVar49) & -(uint)(fVar54 < 0.0),
                        (uint)(fVar64 + fVar25) & -(uint)(fVar64 < 0.0)) | in_XMM1._0_8_;
    }
    pdb_140df37e0(puVar45,&auStack_318);
    pdb_1413f8b70(&lStack_2d8,puVar45);
    pauVar40 = pauStack_108;
    if (!SBORROW8(0,lStack_2d8)) {
      uStack_248 = CONCAT44(uStack_2a4,fStack_2a8);
      pauStack_258 = pauStack_2b8;
      pauStack_250 = pauStack_2b0;
      pauStack_268 = (undefined1 (*) [16])auStack_2c8._0_8_;
      pauStack_260 = (undefined1 (*) [16])auStack_2c8._8_8_;
      fStack_278 = (float)lStack_2d8;
      fStack_274 = (float)((ulonglong)lStack_2d8 >> 0x20);
      fStack_270 = SUB84(pbStack_2d0,0);
      fStack_26c = (float)((ulonglong)pbStack_2d0 >> 0x20);
      uStack_230 = 1;
      pauStack_240 = pauVar46;
      uStack_238 = uVar32;
      if (pauStack_108 == pauStack_118) {
        pdb_142d8d780(&pauStack_118);
      }
      lVar31 = (longlong)pauVar40 * 0x50;
      puVar3 = (ulonglong *)(lStack_110 + 0x40 + lVar31);
      *puVar3 = uStack_238;
      puVar3[1] = CONCAT71(uStack_22f,uStack_230);
      in_XMM1._8_8_ = pauStack_260;
      in_XMM1._0_8_ = (ulonglong)pauStack_268;
      auVar16._8_8_ = pauStack_250;
      auVar16._0_8_ = pauStack_258;
      auVar17._8_8_ = pauStack_240;
      auVar17._0_8_ = uStack_248;
      *(undefined1 (*) [16])(lStack_110 + 0x30 + lVar31) = auVar17;
      *(undefined1 (*) [16])(lStack_110 + 0x20 + lVar31) = auVar16;
      *(undefined1 (*) [16])(lStack_110 + 0x10 + lVar31) = in_XMM1;
      *(undefined8 *)(lStack_110 + lVar31) = CONCAT44(fStack_274,fStack_278);
      ((undefined8 *)(lStack_110 + lVar31))[1] = CONCAT44(fStack_26c,fStack_270);
      pauVar41 = (undefined1 (*) [16])(*pauVar40 + 1);
      pauStack_108 = pauVar41;
    }
    if (auStack_1f8._0_8_ != 0) {
      pub_1406abac0((byte *)auStack_1f8._8_8_,auStack_1f8._0_8_ << 3,4);
    }
    if (pauStack_1e0 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_1d8,(longlong)pauStack_1e0 << 2,4);
    }
  }
  goto LAB_141481580;
}

