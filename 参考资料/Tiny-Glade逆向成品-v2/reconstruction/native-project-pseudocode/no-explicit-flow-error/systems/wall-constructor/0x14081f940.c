// VA 0x14081f940, PDB extent 11907 bytes
// system_wall_constructor::construct_playermade_stairs::magic_support::playermade_stair_floating_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/magic_support.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::magic_support::playermade_stair_floating_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/magic_support.rs
   Extent: 11907 */

undefined1 (*) [16]
pdb_14081f940(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,longlong *param_10,longlong *param_11,undefined8 *param_12,
             undefined8 *param_13)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  undefined1 (*pauVar28) [16];
  undefined *puVar29;
  undefined *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  ushort uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  int iVar42;
  byte *pbVar43;
  bool bVar44;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 (*pauStack_3d8) [16];
  byte *pbStack_3d0;
  undefined1 auStack_3c8 [16];
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  float fStack_3a0;
  undefined1 auStack_398 [16];
  longlong lStack_388;
  longlong lStack_380;
  ulonglong *puStack_378;
  longlong lStack_370;
  longlong *plStack_368;
  byte *pbStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  ulonglong *puStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  longlong *plStack_300;
  longlong lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_298;
  undefined1 (*pauStack_290) [16];
  byte *pbStack_288;
  byte *pbStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  longlong lStack_270;
  longlong lStack_268;
  undefined1 auStack_260 [16];
  int iStack_250;
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  byte *pbStack_230;
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  byte *pbStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  undefined1 (*pauStack_200) [16];
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [16];
  int iStack_1d0;
  byte *pbStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 (*pauStack_1b8) [16];
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 (*pauStack_198) [16];
  byte *pbStack_190;
  byte *pbStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined1 (*pauStack_158) [16];
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 *puStack_138;
  longlong *plStack_130;
  ulonglong *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined1 (*pauStack_100) [16];
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_320 = param_4;
  puStack_318 = param_2;
  cStack_f3 = pdb_140e94b40();
  if (cStack_f3 == '\0') goto LAB_14081fb4a;
  pauVar28 = (undefined1 (*) [16])0x65;
  lVar12 = pdb_1408227d0(0x65);
  pauVar26 = (undefined1 (*) [16])&UNK_143009aa0;
  if (lVar12 == 1) {
    if ((undefined8 *)0x65 < param_2) {
LAB_140821acd:
      pdb_142dc8070(&UNK_143009aa0,0x65,0);
LAB_140821aed:
      pdb_142dc8070(&UNK_143009aa0,0x65);
      pcVar9 = (code *)swi(3);
      plVar14 = (longlong *)(*pcVar9)();
      return (undefined1 (*) [16])plVar14;
    }
    uVar13 = pdb_1408227d0(param_2);
    if ((uVar13 & 1) != 0) {
      if (0x65 < (longlong)param_2 + 2U) goto LAB_140821aed;
      pauVar28 = (undefined1 (*) [16])(99 - (longlong)param_2);
      pauVar26 = (undefined1 (*) [16])((longlong)param_2 + 0x143009aa2);
    }
  }
  puVar29 = &UNK_1430099c1;
  pauVar41 = (undefined1 (*) [16])&UNK_143009971;
  do {
    bVar45 = puVar29[-1];
    uVar11 = (uint)(char)bVar45;
    if ((char)bVar45 < '\0') {
      bVar4 = puVar29[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar29[-3];
        if ((char)bVar5 < -0x40) {
          pbVar43 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          uVar11 = bVar5 & 0x3f | (*pbVar43 & 7) << 6;
        }
        else {
          puVar29 = puVar29 + -3;
          uVar11 = bVar5 & 0xf;
        }
        uVar11 = bVar4 & 0x3f | uVar11 << 6;
      }
      else {
        puVar29 = puVar29 + -2;
        uVar11 = bVar4 & 0x1f;
      }
      uVar11 = (uint)(bVar45 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_14081fab4;
LAB_14081fac6:
      puVar30 = puVar29 + -0x143009970;
      if ((undefined *)0x50 < puVar30) {
        pdb_142dc8070(&UNK_143009971,0x50,puVar30,0x50,&UNK_143009b60);
        goto LAB_140821acd;
      }
      lVar12 = 0x50 - (longlong)puVar30;
      pauVar41 = (undefined1 (*) [16])(puVar29 + 1);
      goto LAB_14081fae9;
    }
    puVar29 = puVar29 + -1;
    if (uVar11 == 0x5c) goto LAB_14081fac6;
LAB_14081fab4:
    if (uVar11 == 0x2f) goto LAB_14081fac6;
  } while (puVar29 != &UNK_143009971);
  lVar12 = 0x50;
LAB_14081fae9:
  plVar14 = (longlong *)pdb_140e97000();
  if ((char)plVar14[0xd] != '\x01') goto LAB_140821a57;
LAB_14081faf8:
  if (*plVar14 != 0) goto LAB_140821a4b;
  *plVar14 = -1;
  pauStack_100 = (undefined1 (*) [16])plVar14;
  uStack_2f0 = pdb_140e94f10(plVar14 + 1,pauVar26,pauVar28,pauVar41,lVar12,1,0);
  *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
LAB_14081fb4a:
  uVar17 = *param_3;
  puVar15 = (undefined8 *)pdb_1413e4400(uVar17,&UNK_1433056c0);
  if ((puVar15 != (undefined8 *)0x0) &&
     (lStack_108 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lStack_108 != 0)) {
    puVar15 = (undefined8 *)pdb_1413e4400(uVar17,&UNK_1433056a8);
    if ((puVar15 == (undefined8 *)0x0) ||
       (lStack_110 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lStack_110 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430099e0);
    }
    puVar7 = (ulonglong *)*param_13;
    lVar12 = param_13[1];
    uVar13 = *puVar7;
    uVar31 = 0;
    uVar18 = uVar13 - *(ulonglong *)(lVar12 + 0x18);
    if (uVar13 < *(ulonglong *)(lVar12 + 0x18)) {
      uVar18 = uVar31;
    }
    uVar37 = uVar13 - *(ulonglong *)(lVar12 + 0x38);
    if (uVar13 < *(ulonglong *)(lVar12 + 0x38)) {
      uVar37 = uVar31;
    }
    uVar13 = *(ulonglong *)(lVar12 + 0x30);
    uVar34 = uVar13 - uVar37;
    if (uVar13 < uVar37) {
      uVar34 = uVar31;
    }
    uVar8 = *(ulonglong *)(lVar12 + 0x10);
    uVar36 = uVar8 - uVar18;
    if (uVar8 < uVar18) {
      uVar36 = uVar31;
    }
    uVar31 = *(ulonglong *)(lVar12 + 0x40);
    *puVar7 = uVar31 - (uVar36 + uVar34);
    if ((uVar8 < uVar18 || uVar8 - uVar18 == 0) && (uVar13 < uVar37 || uVar13 - uVar37 == 0))
    goto LAB_14081febc;
    *puVar7 = uVar31;
    lVar12 = _UNK_143307ba8;
    pauVar26 = (undefined1 (*) [16])*param_10;
    pbStack_218 = *pauVar26 + param_10[1] + 1;
    auVar53 = *pauVar26;
    pauVar28 = pauVar26 + 1;
    pbVar43 = (byte *)param_10[3];
    pauStack_200 = (undefined1 (*) [16])*param_10;
    pbStack_1f8 = (byte *)param_10[1];
    auVar3 = *(undefined1 (*) [16])(param_10 + 2);
    pbStack_1f0 = auVar3._0_8_;
    uStack_1e8 = auVar3._8_4_;
    uStack_1e4 = auVar3._12_4_;
    *param_10 = _DAT_143307ba0;
    param_10[1] = lVar12;
    lVar12 = _UNK_143307bb8;
    param_10[2] = _DAT_143307bb0;
    param_10[3] = lVar12;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
    uStack_210 = CONCAT62(uStack_210._2_6_,(short)uVar11);
    auStack_1e0._0_8_ = param_10;
    pauStack_228 = pauVar26;
    pauStack_220 = pauVar28;
    pbStack_208 = pbVar43;
    while (pbVar43 != (byte *)0x0) {
      if ((short)uVar11 == 0) {
        do {
          auVar53 = *pauVar28;
          pauVar26 = pauVar26 + -0x50;
          pauVar28 = pauVar28 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
          pauStack_228 = pauVar26;
          pauStack_220 = pauVar28;
        } while (uVar11 == 0);
      }
      uVar25 = 0;
      for (uVar27 = uVar11; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
        uVar25 = uVar25 + 1;
      }
      uVar13 = (ulonglong)uVar25;
      uVar11 = uVar11 - 1 & uVar11;
      uStack_210 = CONCAT62(uStack_210._2_6_,(short)uVar11);
      pbVar43 = pbVar43 + -1;
      pbVar22 = *(byte **)pauVar26[uVar13 * -5 + -1];
      lStack_270 = *(longlong *)(pauVar26[uVar13 * -5 + -1] + 8);
      uStack_278 = SUB84(pbVar22,0);
      uStack_274 = (undefined4)((ulonglong)pbVar22 >> 0x20);
      pbStack_288 = *(byte **)pauVar26[uVar13 * -5 + -2];
      pbStack_280 = *(byte **)(pauVar26[uVar13 * -5 + -2] + 8);
      uStack_298 = *(undefined8 *)pauVar26[uVar13 * -5 + -3];
      pauStack_290 = *(undefined1 (**) [16])(pauVar26[uVar13 * -5 + -3] + 8);
      pbStack_2a8 = *(byte **)pauVar26[uVar13 * -5 + -4];
      pbStack_2a0 = *(byte **)(pauVar26[uVar13 * -5 + -4] + 8);
      pbStack_208 = pbVar43;
      if (SBORROW8(0,(longlong)*(undefined1 (**) [16])(pauVar26[uVar13 * -5 + -5] + 8)))
      goto LAB_14081fe0a;
      uStack_1a0 = (undefined4)uStack_298;
      uStack_19c = (undefined4)((ulonglong)uStack_298 >> 0x20);
      uStack_1a8 = SUB84(pbStack_2a0,0);
      uStack_1a4 = (undefined4)((ulonglong)pbStack_2a0 >> 0x20);
      pauStack_1b8 = *(undefined1 (**) [16])(pauVar26[uVar13 * -5 + -5] + 8);
      uStack_1b0 = (code *)pbStack_2a8;
      pauStack_198 = pauStack_290;
      pbStack_190 = pbStack_288;
      pbStack_188 = pbStack_280;
      uStack_180 = pbVar22;
      lStack_178 = lStack_270;
      pdb_140b14460(&pauStack_1b8,lStack_108);
      pdb_141401f70(&pauStack_1b8);
    }
    goto LAB_14081fe4e;
  }
  goto LAB_140821a8c;
LAB_14081fe0a:
  while (pbVar43 != (byte *)0x0) {
    if ((short)uVar11 == 0) {
      do {
        auVar53 = *pauVar28;
        pauVar26 = pauVar26 + -0x50;
        pauVar28 = pauVar28 + 1;
        uVar11 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
        pauStack_228 = pauVar26;
        pauStack_220 = pauVar28;
      } while (uVar11 == 0);
    }
    uVar25 = 0;
    for (uVar27 = uVar11; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11;
    uStack_210 = CONCAT62(uStack_210._2_6_,(short)uVar11);
    pbVar43 = pbVar43 + -1;
    pbStack_208 = pbVar43;
    pdb_141401f70(pauVar26[(ulonglong)uVar25 * -5 + -5] + 8);
  }
LAB_14081fe4e:
  pbVar43 = pbStack_1f8;
  if (pbStack_1f8 == (byte *)0x0) {
    pbStack_1f0 = (byte *)0x0;
  }
  else {
    pub_142e32780(pauStack_200,0xff);
    pbStack_1f0 = (byte *)(((ulonglong)(pbVar43 + 1) & 0xfffffffffffffff8) -
                          ((ulonglong)(pbVar43 + 1) >> 3));
    if (pbVar43 < (byte *)0x8) {
      pbStack_1f0 = pbVar43;
    }
  }
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = pbStack_1f0;
  *(undefined1 (**) [16])auStack_1e0._0_8_ = pauStack_200;
  *(byte **)(auStack_1e0._0_8_ + 8) = pbStack_1f8;
  *(undefined1 (*) [16])(auStack_1e0._0_8_ + 0x10) = auVar53;
LAB_14081febc:
  puVar7 = (ulonglong *)*param_6;
  lVar12 = param_6[1];
  uVar13 = *puVar7;
  uVar31 = 0;
  uVar18 = uVar13 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar18 = uVar31;
  }
  uVar37 = uVar13 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar37 = uVar31;
  }
  pauVar28 = (undefined1 (*) [16])(uVar18 * 0x10 + *(longlong *)(lVar12 + 8));
  uVar13 = *(ulonglong *)(lVar12 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar18) {
    pauVar28 = (undefined1 (*) [16])0x8;
    uVar13 = uVar31;
  }
  pauVar26 = (undefined1 (*) [16])(uVar37 * 0x10 + *(longlong *)(lVar12 + 0x28));
  uVar18 = *(ulonglong *)(lVar12 + 0x30) - uVar37;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar37) {
    pauVar26 = (undefined1 (*) [16])0x8;
    uVar18 = uVar31;
  }
  *puVar7 = (*(longlong *)(lVar12 + 0x40) - uVar18) - uVar13;
  pauVar41 = pauVar28 + uVar13;
  pauStack_100 = pauVar26 + uVar18;
  plStack_130 = param_10 + 4;
  do {
    if ((pauVar28 == (undefined1 (*) [16])0x0) || (pauVar28 == pauVar41)) {
      if ((pauVar26 == (undefined1 (*) [16])0x0) || (pauVar26 == pauStack_100)) break;
      pauVar28 = (undefined1 (*) [16])0x0;
      pauVar16 = pauVar26;
      pauVar26 = pauVar26 + 1;
    }
    else {
      pauVar16 = pauVar28;
      pauVar28 = pauVar28 + 1;
    }
    *puVar7 = *puVar7 + 1;
    pbStack_2a8 = *(byte **)(*pauVar16 + 8);
    uVar17 = pdb_1400af0a0(plStack_130,&pbStack_2a8);
    pdb_14140a290(&pauStack_228,param_10,uVar17,&pbStack_2a8);
    if (!SBORROW8(0,(longlong)pauStack_220)) {
      uStack_180 = (byte *)CONCAT44(uStack_1e4,uStack_1e8);
      lStack_178 = auStack_1e0._0_8_;
      pbStack_190 = pbStack_1f8;
      pbStack_188 = pbStack_1f0;
      uStack_1a0 = SUB84(pbStack_208,0);
      uStack_19c = (undefined4)((ulonglong)pbStack_208 >> 0x20);
      pauStack_198 = pauStack_200;
      uStack_1b0 = (code *)pbStack_218;
      uStack_1a8 = (undefined4)uStack_210;
      uStack_1a4 = (undefined4)((ulonglong)uStack_210 >> 0x20);
      pauStack_1b8 = pauStack_220;
      pdb_140b14460(&pauStack_1b8,lStack_108,lStack_110);
      pdb_141401f70(&pauStack_1b8);
    }
  } while( true );
  puStack_128 = (ulonglong *)*param_5;
  lVar12 = param_5[1];
  uVar13 = *puStack_128;
  uVar31 = 0;
  uVar18 = uVar13 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar18 = uVar31;
  }
  uVar37 = uVar13 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar37 = uVar31;
  }
  lVar38 = uVar18 * 0x10 + *(longlong *)(lVar12 + 8);
  uVar13 = *(ulonglong *)(lVar12 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar18) {
    lVar38 = 8;
    uVar13 = uVar31;
  }
  lVar39 = uVar37 * 0x10 + *(longlong *)(lVar12 + 0x28);
  uVar18 = *(ulonglong *)(lVar12 + 0x30) - uVar37;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar37) {
    lVar39 = 8;
    uVar18 = uVar31;
  }
  *puStack_128 = (*(longlong *)(lVar12 + 0x40) - uVar18) - uVar13;
  lStack_348 = uVar13 * 0x10 + lVar38;
  lStack_330 = uVar18 * 0x10 + lVar39;
  puStack_340 = (ulonglong *)*param_7;
  lVar12 = param_7[1];
  uVar13 = *puStack_340;
  uVar18 = uVar13 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar18 = uVar31;
  }
  uVar37 = uVar13 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar37 = uVar31;
  }
  lStack_140 = uVar18 * 0x28 + *(longlong *)(lVar12 + 8);
  uVar13 = *(ulonglong *)(lVar12 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar18) {
    lStack_140 = 8;
    uVar13 = uVar31;
  }
  lStack_2f8 = uVar37 * 0x28 + *(longlong *)(lVar12 + 0x28);
  uVar18 = *(ulonglong *)(lVar12 + 0x30) - uVar37;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar37) {
    lStack_2f8 = 8;
    uVar18 = uVar31;
  }
  *puStack_340 = (*(longlong *)(lVar12 + 0x40) - uVar18) - uVar13;
  puStack_378 = (ulonglong *)*param_8;
  lVar12 = param_8[1];
  uVar31 = *puStack_378;
  uVar37 = uVar31 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar31 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar37 = 0;
  }
  uVar34 = uVar31 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar31 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar34 = 0;
  }
  lStack_150 = uVar37 * 0x28 + *(longlong *)(lVar12 + 8);
  lVar24 = *(ulonglong *)(lVar12 + 0x10) - uVar37;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar37) {
    lStack_150 = 8;
    lVar24 = 0;
  }
  lStack_148 = uVar34 * 0x28 + *(longlong *)(lVar12 + 0x28);
  lVar32 = *(ulonglong *)(lVar12 + 0x30) - uVar34;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar34) {
    lStack_148 = 8;
    lVar32 = 0;
  }
  *puStack_378 = (*(longlong *)(lVar12 + 0x40) - lVar32) - lVar24;
  lStack_338 = lStack_140 + uVar13 * 0x28;
  lStack_328 = lStack_2f8 + uVar18 * 0x28;
  lStack_370 = lStack_150 + lVar24 * 0x28;
  lStack_350 = lStack_148 + lVar32 * 0x28;
  auStack_398._8_8_ = *param_9;
  plStack_300 = (longlong *)*param_11;
  puStack_120 = (undefined1 *)*param_12;
  plStack_368 = plStack_300 + 4;
  pbStack_360 = (byte *)(lStack_110 + 0x78);
  lStack_358 = lStack_110 + 0x58;
  uStack_118 = CONCAT44(uStack_118._4_4_,(int)CONCAT71((int7)((ulonglong)lStack_358 >> 8),1));
  fVar47 = _DAT_142e37ad4;
LAB_140820280:
  do {
    if ((uStack_118 & 1) == 0) {
      if (lStack_150 == 0) {
LAB_1408203c0:
        if ((lStack_148 == 0) || (lStack_148 == lStack_350)) break;
        lVar12 = 0;
        lStack_150 = lStack_148;
        lStack_148 = lStack_148 + 0x28;
      }
      else {
LAB_1408202ce:
        if (lStack_150 == lStack_370) goto LAB_1408203c0;
        lVar12 = lStack_150 + 0x28;
      }
      *puStack_378 = *puStack_378 + 1;
      plVar14 = (longlong *)(lStack_150 + 0x18);
      uStack_118 = (ulonglong)uStack_118._4_4_ << 0x20;
      lStack_150 = lVar12;
    }
    else if (puStack_128 == (ulonglong *)0x0) {
LAB_140820320:
      if ((lStack_140 == 0) || (lStack_140 == lStack_338)) {
        if ((lStack_2f8 == 0) || (lStack_2f8 == lStack_328)) {
          puStack_128 = (ulonglong *)0x0;
          lStack_140 = 0;
          if (lStack_150 != 0) goto LAB_1408202ce;
          goto LAB_1408203c0;
        }
        lVar12 = 0;
        lStack_140 = lStack_2f8;
        lStack_2f8 = lStack_2f8 + 0x28;
      }
      else {
        lVar12 = lStack_140 + 0x28;
      }
      *puStack_340 = *puStack_340 + 1;
      plVar14 = (longlong *)(lStack_140 + 0x18);
      uStack_118 = CONCAT44(uStack_118._4_4_,(int)CONCAT71((int7)((ulonglong)lStack_140 >> 8),1));
      puStack_128 = (ulonglong *)0x0;
      lStack_140 = lVar12;
    }
    else {
      if ((lVar38 == 0) || (lVar38 == lStack_348)) {
        if (lVar39 == 0) {
          lVar38 = 0;
        }
        else {
          lVar38 = 0;
          if (lVar39 != lStack_330) {
            lVar24 = lVar39 + 0x10;
            lVar12 = 0;
            lVar38 = lVar39;
            goto LAB_1408202fb;
          }
        }
        goto LAB_140820320;
      }
      lVar12 = lVar38 + 0x10;
      lVar24 = lVar39;
LAB_1408202fb:
      *puStack_128 = *puStack_128 + 1;
      plVar14 = (longlong *)(lVar38 + 8);
      uStack_118 = CONCAT44(uStack_118._4_4_,(int)CONCAT71((int7)((ulonglong)lStack_108 >> 8),1));
      lVar38 = lVar12;
      lVar39 = lVar24;
    }
    pauStack_240 = (undefined1 (*) [16])*plVar14;
    pauStack_158 = pauStack_240;
    lVar12 = pdb_140b54f80(auStack_398._8_8_,pauStack_240,&UNK_143009a28);
    if (lVar12 != 0) {
      uVar17 = pdb_1400af0a0(plStack_130,&pauStack_240);
      pdb_14140a290(&pauStack_228,param_10,uVar17,&pauStack_240);
      if (!SBORROW8(0,(longlong)pauStack_220)) {
        uStack_180 = (byte *)CONCAT44(uStack_1e4,uStack_1e8);
        lStack_178 = auStack_1e0._0_8_;
        pbStack_190 = pbStack_1f8;
        pbStack_188 = pbStack_1f0;
        uStack_1a0 = SUB84(pbStack_208,0);
        uStack_19c = (undefined4)((ulonglong)pbStack_208 >> 0x20);
        pauStack_198 = pauStack_200;
        uStack_1b0 = (code *)pbStack_218;
        uStack_1a8 = (undefined4)uStack_210;
        uStack_1a4 = (undefined4)((ulonglong)uStack_210 >> 0x20);
        pauStack_1b8 = pauStack_220;
        pdb_140b14460(&pauStack_1b8,lStack_108,lStack_110);
        pdb_141401f70(&pauStack_1b8);
      }
      plVar14 = plStack_300;
      if (plStack_300[3] != 0) {
        uVar18 = pdb_1400af0a0(plStack_368,&pauStack_240);
        lVar24 = *plVar14;
        uVar13 = plVar14[1];
        bVar45 = (byte)(uVar18 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar45,bVar45));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar32 = 0;
        while( true ) {
          uVar18 = uVar18 & uVar13;
          auVar3 = *(undefined1 (*) [16])(lVar24 + uVar18);
          auVar56[0] = -(auVar3[0] == auVar53[0]);
          auVar56[1] = -(auVar3[1] == auVar53[1]);
          auVar56[2] = -(auVar3[2] == auVar53[2]);
          auVar56[3] = -(auVar3[3] == auVar53[3]);
          auVar56[4] = -(auVar3[4] == auVar53[4]);
          auVar56[5] = -(auVar3[5] == auVar53[5]);
          auVar56[6] = -(auVar3[6] == auVar53[6]);
          auVar56[7] = -(auVar3[7] == auVar53[7]);
          auVar56[8] = -(auVar3[8] == auVar53[0]);
          auVar56[9] = -(auVar3[9] == auVar53[1]);
          auVar56[10] = -(auVar3[10] == auVar53[2]);
          auVar56[0xb] = -(auVar3[0xb] == auVar53[3]);
          auVar56[0xc] = -(auVar3[0xc] == auVar53[4]);
          auVar56[0xd] = -(auVar3[0xd] == auVar53[5]);
          auVar56[0xe] = -(auVar3[0xe] == auVar53[6]);
          auVar56[0xf] = -(auVar3[0xf] == auVar53[7]);
          uVar33 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar56[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar33;
          while (uVar33 != 0) {
            uVar25 = 0;
            for (uVar27 = uVar11; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
              uVar25 = uVar25 + 1;
            }
            lVar35 = lVar24 + (uVar25 + uVar18 & uVar13) * -0x40;
            if (pauStack_158 == *(undefined1 (**) [16])(lVar35 + -0x40)) {
              bVar44 = true;
              if ((*(char *)(lVar35 + -8) == '\0') && (*(longlong *)(lVar35 + -0x20) == 0)) {
                bVar44 = *(longlong *)(lVar35 + -0x18) != 0;
              }
              goto LAB_1408205c0;
            }
            uVar33 = (ushort)(uVar11 - 1) & (ushort)uVar11;
            uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar33);
          }
          auVar55[0] = -(auVar3[0] == -1);
          auVar55[1] = -(auVar3[1] == -1);
          auVar55[2] = -(auVar3[2] == -1);
          auVar55[3] = -(auVar3[3] == -1);
          auVar55[4] = -(auVar3[4] == -1);
          auVar55[5] = -(auVar3[5] == -1);
          auVar55[6] = -(auVar3[6] == -1);
          auVar55[7] = -(auVar3[7] == -1);
          auVar55[8] = -(auVar3[8] == -1);
          auVar55[9] = -(auVar3[9] == -1);
          auVar55[10] = -(auVar3[10] == -1);
          auVar55[0xb] = -(auVar3[0xb] == -1);
          auVar55[0xc] = -(auVar3[0xc] == -1);
          auVar55[0xd] = -(auVar3[0xd] == -1);
          auVar55[0xe] = -(auVar3[0xe] == -1);
          auVar55[0xf] = -(auVar3[0xf] == -1);
          if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x2f,0) & 1) != 0) || (SUB161(auVar55 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
          uVar18 = uVar18 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
      bVar44 = false;
LAB_1408205c0:
      pbStack_1c8 = (byte *)(lVar12 + 0x38);
      puVar1 = *(undefined4 **)(lVar12 + 0x40) + *(longlong *)(lVar12 + 0x48) * 3;
      puVar10 = *(undefined4 **)(lVar12 + 0x40);
      do {
        puVar19 = puVar10;
        if (puVar19 == puVar1) break;
        fVar54 = (float)puVar19[1];
        fVar46 = (float)pdb_14140ce00(puStack_120,*puVar19,puVar19[2]);
        puVar10 = puVar19 + 3;
      } while (fVar54 - fVar46 <= fVar47);
      auStack_398._0_8_ = pdb_140315970(&pauStack_240);
      if ((byte)(bVar44 | puVar19 == puVar1 | *(byte *)(lVar12 + 0x2a2) ^ 1) != 1) {
        lStack_388 = lVar38;
        pdb_14007ee60();
        pbVar43 = pub_1406abab0(0x20,8);
        if (pbVar43 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43[8] = 4;
        pbVar43[9] = 0;
        pbVar43[10] = 0;
        pbVar43[0xb] = 0;
        pbVar43[0xc] = 0;
        pbVar43[0xd] = 0;
        pbVar43[0xe] = 0;
        pbVar43[0xf] = 0;
        pbVar43[0x10] = 0;
        pbVar43[0x11] = 0;
        pbVar43[0x12] = 0;
        pbVar43[0x13] = 0;
        pbVar43[0x14] = 0;
        pbVar43[0x15] = 0;
        pbVar43[0x16] = 0;
        pbVar43[0x17] = 0;
        pbVar43[0x18] = 0;
        pbVar22 = *(byte **)(lStack_110 + 0x48);
LAB_1408206a2:
        lVar38 = *(longlong *)(pbVar22 + 8);
        do {
          if (lVar38 == -1) goto LAB_1408206a2;
          if (lVar38 < 0) {
            pauStack_228 = (undefined1 (*) [16])&UNK_143308338;
            pauStack_220 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143308348,&pauStack_228,&UNK_1433083d0);
          }
          lVar24 = lVar38 + 1;
          LOCK();
          lVar32 = *(longlong *)(pbVar22 + 8);
          bVar44 = lVar38 == lVar32;
          if (bVar44) {
            *(longlong *)(pbVar22 + 8) = lVar24;
            lVar32 = lVar38;
          }
          UNLOCK();
          lVar38 = lVar32;
        } while (!bVar44);
        LOCK();
        bVar44 = pbVar43[0x18] == 0;
        if (bVar44) {
          pbVar43[0x18] = 1;
        }
        UNLOCK();
        pbStack_310 = pbVar22;
        pbStack_308 = pbVar43;
        if (!bVar44) {
          uStack_f2 = 1;
          pdb_142dbd1a0(pbVar43 + 0x18,lVar24,1000000000);
        }
        uStack_f2 = 1;
        pdb_140e9a150(pbVar43 + 0x18);
        lStack_380 = lVar39;
        if ((*(longlong *)(pbVar43 + 0x10) == 0) ||
           (piVar20 = (int *)(*(longlong *)(pbVar43 + 8) + *(longlong *)(pbVar43 + 0x10) * 4 + -4),
           piVar20 == (int *)0x0)) {
          pauVar28 = *(undefined1 (**) [16])(lStack_110 + 0x10);
          if (pauVar28 == (undefined1 (*) [16])0x0) {
            uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b88);
          }
          iStack_1d0 = (int)pauVar28 + -1;
        }
        else {
          iStack_1d0 = *piVar20;
          pauVar28 = *(undefined1 (**) [16])(lStack_110 + 0x10);
        }
        pauStack_228 = *(undefined1 (**) [16])(lStack_110 + 8);
        pbStack_218 = *(byte **)(lStack_110 + 0x18);
        uStack_210 = *(undefined8 *)(lStack_110 + 0x20);
        auStack_1e0 = *(undefined1 (*) [16])(lStack_110 + 0x38);
        pauStack_200 = SUB168(*(undefined1 (*) [16])(lStack_110 + 0x28),0);
        pbStack_1f8 = SUB168(*(undefined1 (*) [16])(lStack_110 + 0x28),8);
        pbStack_1f0 = pbStack_360;
        uStack_1e8 = (undefined4)lStack_358;
        uStack_1e4 = (undefined4)((ulonglong)lStack_358 >> 0x20);
        uStack_2e8 = (undefined1 (*) [16])0x0;
        uStack_2e0 = (byte *)0x10;
        uStack_2d8 = (undefined1 (*) [16])0x0;
        lVar38 = *(longlong *)(lVar12 + 0x40);
        lVar39 = *(longlong *)(lVar12 + 0x58);
        uVar13 = *(ulonglong *)(lVar12 + 0x48);
        if (*(ulonglong *)(lVar12 + 0x60) < *(ulonglong *)(lVar12 + 0x48)) {
          uVar13 = *(ulonglong *)(lVar12 + 0x60);
        }
        uVar18 = 0;
        pauStack_220 = pauVar28;
        pbStack_208 = pbVar43;
        while (pauVar28 = uStack_2d8, uVar18 < uVar13) {
          uStack_f1 = 1;
          uVar11 = pdb_1413f9030(pbStack_1c8,*(undefined4 *)(lVar39 + uVar18 * 4));
          uVar37 = (ulonglong)uVar11;
          uVar31 = uVar37 + 1;
          if (*(ulonglong *)(lVar12 + 0x48) <= uVar31) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar31,*(ulonglong *)(lVar12 + 0x48),&UNK_143306638);
          }
          lVar24 = *(longlong *)(lVar12 + 0x40);
          fVar47 = *(float *)(lVar24 + 4 + uVar31 * 0xc) - *(float *)(lVar24 + 4 + uVar37 * 0xc);
          uVar17 = *(undefined8 *)(lVar24 + 8 + uVar37 * 0xc);
          fVar54 = *(float *)(lVar24 + 8 + uVar31 * 0xc) - (float)uVar17;
          fVar46 = (float)((ulonglong)uVar17 >> 0x20) - *(float *)(lVar24 + uVar37 * 0xc);
          fVar47 = _DAT_142e36f28 / SQRT(fVar46 * fVar46 + fVar47 * fVar47 + fVar54 * fVar54);
          pauStack_1b8 = (undefined1 (*) [16])
                         CONCAT44(fVar47 * fVar46,(float)((uint)fVar47 ^ _DAT_142e37820) * fVar54);
          uStack_f1 = 1;
          pdb_140df4520(&uStack_3a8,&pauStack_1b8);
          uStack_f1 = 1;
          fVar47 = (float)pdb_140e02880(&auStack_398);
          fVar54 = fStack_3a0;
          pfVar2 = (float *)(lVar38 + uVar18 * 0xc);
          fVar58 = fVar47 * _DAT_142e3787c + _DAT_143009854;
          fVar61 = fVar58 * fStack_3a0;
          fVar63 = (float)uStack_3a8;
          fVar62 = (float)((ulonglong)uStack_3a8 >> 0x20);
          uVar17 = *(undefined8 *)pfVar2;
          fVar47 = pfVar2[2];
          uStack_f1 = 1;
          fVar46 = (float)pdb_140e02880(&auStack_398);
          uStack_f1 = 1;
          fVar48 = (float)pdb_140e02880(&auStack_398);
          uStack_f1 = 1;
          uVar49 = pdb_140e02880(&auStack_398);
          uStack_f1 = 1;
          uVar50 = pdb_140e02880(&auStack_398);
          uStack_f1 = 1;
          uStack_1a4 = pdb_140e02880(&auStack_398);
          pauStack_1b8 = (undefined1 (*) [16])
                         CONCAT44(_UNK_143009864 +
                                  fVar58 * fVar62 + (float)((ulonglong)uVar17 >> 0x20),
                                  (fVar46 + _DAT_142e36f38) * _DAT_142e3787c +
                                  fVar58 * fVar63 + (float)uVar17);
          uStack_1b0 = (code *)CONCAT44(uVar49,fVar61 + fVar47 +
                                               (fVar48 + _DAT_142e36f38) * _DAT_142e3787c);
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_f1 = 1;
          uStack_1a8 = uVar50;
          pdb_1413f7520(&pauStack_228,&pauStack_1b8);
          uStack_f1 = 1;
          fVar47 = (float)pdb_140e02880(&auStack_398);
          uVar18 = uVar18 + 1;
          if (_DAT_142e3787c <= fVar47) {
            uStack_f1 = 1;
            fVar47 = (float)pdb_140e02880(&auStack_398);
            fVar58 = fVar47 * _DAT_142e3787c + _DAT_143009854;
            fVar47 = *pfVar2;
            fVar46 = pfVar2[1];
            fVar48 = pfVar2[2];
            uStack_f1 = 1;
            fVar61 = (float)pdb_140e02880(&auStack_398);
            uStack_f1 = 1;
            fVar51 = (float)pdb_140e02880(&auStack_398);
            uStack_f1 = 1;
            fVar52 = (float)pdb_140e02880(&auStack_398);
            pauStack_100 = (undefined1 (*) [16])CONCAT44(pauStack_100._4_4_,fVar52);
            fVar62 = fVar62 * fVar58 + fVar46 + _DAT_142e42360;
            fVar52 = fVar52 * _DAT_143009870;
            uStack_f1 = 1;
            fVar46 = (float)pdb_140e02880(&auStack_398);
            fVar46 = fVar46 * _DAT_143009874 + (_DAT_142e36f28 - fVar46) * _DAT_142e37848;
            if (fVar46 <= _DAT_142e3c608) {
              fVar46 = _DAT_142e3c608;
            }
            fVar59 = fVar46 * _DAT_143009880;
            fVar60 = fVar46 * _UNK_143009884;
            uStack_f1 = 1;
            pdb_140de9620(&pauStack_1b8,&auStack_398);
            pauStack_238 = pauStack_1b8;
            pbStack_230 = (byte *)uStack_1b0;
            uStack_f1 = 1;
            uVar49 = pdb_140e02880(&auStack_398);
            puStack_138 = (undefined1 *)CONCAT44(puStack_138._4_4_,uVar49);
            uStack_f1 = 1;
            uVar49 = pdb_140e02880(&auStack_398);
            uStack_f1 = 1;
            uVar50 = pdb_140e02880(&auStack_398);
            pauVar28 = uStack_2d8;
            if (uStack_2d8 == uStack_2e8) {
              uStack_f1 = 1;
              pdb_142d8d860(&uStack_2e8);
            }
            fVar57 = (fVar61 + _DAT_142e36f38) * _DAT_142e3787c;
            fVar51 = (fVar51 + _DAT_142e36f38) * _DAT_142e3787c;
            fVar61 = _DAT_142e36f28 - pauStack_100._0_4_;
            lVar24 = (longlong)pauVar28 * 0x40;
            *(undefined1 (**) [16])(uStack_2e0 + lVar24) = pauStack_238;
            *(byte **)(uStack_2e0 + lVar24 + 8) = pbStack_230;
            *(float *)(uStack_2e0 + lVar24 + 0x10) = fVar63 * fVar58 + fVar47 + fVar57;
            *(float *)(uStack_2e0 + lVar24 + 0x14) = fVar62 - (fVar52 + fVar61 * 0.0);
            *(float *)(uStack_2e0 + lVar24 + 0x18) = fVar54 * fVar58 + fVar48 + fVar51;
            *(float *)(uStack_2e0 + lVar24 + 0x1c) = fVar46;
            *(ulonglong *)(uStack_2e0 + lVar24 + 0x20) = CONCAT44(fVar60,fVar59);
            pbVar43 = uStack_2e0 + lVar24 + 0x30;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0x80;
            pbVar43[3] = 0x3f;
            *(undefined4 *)(uStack_2e0 + lVar24 + 0x34) = puStack_138._0_4_;
            *(undefined4 *)(uStack_2e0 + lVar24 + 0x38) = uVar49;
            *(undefined4 *)(uStack_2e0 + lVar24 + 0x3c) = uVar50;
            uStack_2d8 = (undefined1 (*) [16])(*pauVar28 + 1);
          }
        }
        pdb_14007ee60();
        pbVar21 = pub_1406abab0(0x20,8);
        pauVar26 = uStack_2d8;
        pbVar22 = pbStack_308;
        pbVar43 = pbStack_310;
        if (pbVar21 == (byte *)0x0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar21[0] = 0;
        pbVar21[1] = 0;
        pbVar21[2] = 0;
        pbVar21[3] = 0;
        pbVar21[4] = 0;
        pbVar21[5] = 0;
        pbVar21[6] = 0;
        pbVar21[7] = 0;
        pbVar21[8] = 4;
        pbVar21[9] = 0;
        pbVar21[10] = 0;
        pbVar21[0xb] = 0;
        pbVar21[0xc] = 0;
        pbVar21[0xd] = 0;
        pbVar21[0xe] = 0;
        pbVar21[0xf] = 0;
        pbVar21[0x10] = 0;
        pbVar21[0x11] = 0;
        pbVar21[0x12] = 0;
        pbVar21[0x13] = 0;
        pbVar21[0x14] = 0;
        pbVar21[0x15] = 0;
        pbVar21[0x16] = 0;
        pbVar21[0x17] = 0;
        pbVar21[0x18] = 0;
        pauVar41 = *(undefined1 (**) [16])(lStack_108 + 0x48);
        do {
          lVar38 = *(longlong *)(*pauVar41 + 8);
          while (lVar38 != -1) {
            if (lVar38 < 0) {
              pauStack_1b8 = (undefined1 (*) [16])&UNK_143308338;
              uStack_1b0 = pdb_1402ed400;
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143308348,&pauStack_1b8,&UNK_1433083d0);
            }
            LOCK();
            lVar39 = *(longlong *)(*pauVar41 + 8);
            bVar44 = lVar38 == lVar39;
            if (bVar44) {
              *(longlong *)(*pauVar41 + 8) = lVar38 + 1;
              lVar39 = lVar38;
            }
            UNLOCK();
            lVar38 = lVar39;
            if (bVar44) {
              pauStack_238 = pauVar28;
              pbStack_2a8 = pbStack_310;
              pbStack_2a0 = pbStack_308;
              pauStack_100 = uStack_2e8;
              pbStack_1c8 = uStack_2e0;
              pauStack_3d8 = pauVar41;
              pbStack_3d0 = pbVar21;
              uStack_19c = pdb_1409012c0(*(undefined4 *)(lVar12 + 0x274));
              pbStack_188 = pbVar43;
              uStack_180 = pbVar22;
              pauStack_1b8 = pauStack_100;
              uStack_1b0 = (code *)pbStack_1c8;
              uStack_1a8 = SUB84(pauVar26,0);
              uStack_1a4 = (undefined4)((ulonglong)pauVar26 >> 0x20);
              uStack_1a0 = 1;
              lStack_178 = CONCAT71(lStack_178._1_7_,pauStack_238 != (undefined1 (*) [16])0x0);
              uStack_f1 = 0;
              pauStack_198 = pauVar41;
              pbStack_190 = pbVar21;
              pdb_141408c90(&pbStack_2a8,param_10,pauStack_158,&pauStack_1b8);
              if (!SBORROW8(0,(longlong)pbStack_2a8)) {
                uStack_f1 = 0;
                pdb_141401f70(&pbStack_2a8);
              }
              pbVar43 = pbStack_208 + 0x18;
              uStack_f2 = 0;
              pdb_140e9a350();
              lVar39 = lStack_380;
              fVar47 = _DAT_142e37ad4;
              LOCK();
              bVar45 = *pbVar43;
              if (bVar45 == 1) {
                *pbVar43 = 0;
              }
              UNLOCK();
              lVar38 = lStack_388;
              if (bVar45 != 1) {
                uStack_f2 = 0;
                pdb_142dbcef0(pbVar43,0);
                lVar38 = lStack_388;
              }
              goto LAB_140820280;
            }
          }
        } while( true );
      }
    }
  } while( true );
  *(undefined4 *)puStack_318[2] = *(undefined4 *)((longlong)puStack_318 + 0x1c);
  pauVar26 = *(undefined1 (**) [16])*puStack_318;
  uVar13 = ((undefined8 *)*puStack_318)[3];
  auVar53 = *pauVar26;
  pauVar28 = pauVar26 + 1;
  uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  pauStack_100 = (undefined1 (*) [16])*puStack_320;
  lStack_110 = lStack_108 + 0x78;
  plStack_130 = (longlong *)(lStack_108 + 0x58);
  pauVar41 = &auStack_398;
  while (uVar13 != 0) {
    if ((short)uVar11 == 0) {
      do {
        auVar53 = *pauVar28;
        pauVar26 = pauVar26 + -0x140;
        pauVar28 = pauVar28 + 1;
        uVar11 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar11 == 0);
    }
    uVar25 = 0;
    for (uVar27 = uVar11; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar18 = (ulonglong)uVar25;
    if (*(longlong *)(pauVar26[uVar18 * -0x14 + -0xc] + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143009a10);
    }
    pbVar43 = *(byte **)pauVar26[uVar18 * -0x14 + -0xb];
    if (pbVar43 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b70);
    }
    puStack_120 = (undefined1 *)
                  CONCAT44(puStack_120._4_4_,*(undefined4 *)pauVar26[uVar18 * -0x14 + -0xc]);
    pauStack_238 = (undefined1 (*) [16])
                   CONCAT44(pauStack_238._4_4_,*(undefined4 *)(pauVar26[uVar18 * -0x14 + -0xc] + 4))
    ;
    uVar25 = *(int *)(pauVar26[uVar18 * -0x14 + -0x14] + 4) +
             *(int *)pauVar26[uVar18 * -0x14 + -0x14];
    puStack_138 = (undefined1 *)(ulonglong)uVar25;
    LOCK();
    bVar44 = pbVar43[0x18] == 0;
    if (bVar44) {
      pbVar43[0x18] = 1;
    }
    UNLOCK();
    if (!bVar44) {
      pdb_142dbd1a0(pbVar43 + 0x18,CONCAT71((uint7)(uint3)(uVar25 >> 8),1),1000000000);
    }
    pdb_140e9a150(pbVar43 + 0x18);
    uStack_118 = uVar13 - 1;
    if ((*(longlong *)(pbVar43 + 0x10) == 0) ||
       (piVar20 = (int *)(*(longlong *)(pbVar43 + 8) + *(longlong *)(pbVar43 + 0x10) * 4 + -4),
       piVar20 == (int *)0x0)) {
      pbVar22 = *(byte **)(lStack_108 + 0x10);
      if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      iStack_250 = (int)pbVar22 + -1;
    }
    else {
      iStack_250 = *piVar20;
      pbVar22 = *(byte **)(lStack_108 + 0x10);
    }
    pbStack_2a8 = *(byte **)(lStack_108 + 8);
    uStack_298 = *(undefined8 *)(lStack_108 + 0x18);
    pauStack_290 = *(undefined1 (**) [16])(lStack_108 + 0x20);
    auVar53 = *(undefined1 (*) [16])(lStack_108 + 0x28);
    auStack_260 = *(undefined1 (*) [16])(lStack_108 + 0x38);
    pbStack_280 = auVar53._0_8_;
    uStack_278 = auVar53._8_4_;
    uStack_274 = auVar53._12_4_;
    lStack_270 = lStack_110;
    lStack_268 = (longlong)plStack_130;
    pbStack_2a0 = pbVar22;
    pbStack_288 = pbVar43;
    pdb_1413f7bd0(&pbStack_2a8);
    uVar11 = uVar11 - 1 & uVar11;
    pauVar41 = *(undefined1 (**) [16])pauVar26[uVar18 * -0x14 + -0xd];
    pauVar16 = pauVar41 + *(longlong *)(pauVar26[uVar18 * -0x14 + -0xd] + 8) * 4;
    iVar42 = 0;
    for (; pauVar41 != pauVar16; pauVar41 = pauVar41 + 4) {
      fVar54 = *(float *)((longlong)pauStack_100 + 0x28) / _DAT_142e37988 + *(float *)pauVar41[3];
      fVar47 = 0.0;
      if (0.0 <= fVar54) {
        fVar47 = fVar54;
      }
      fVar54 = _DAT_142e36f28;
      if (fVar47 <= _DAT_142e36f28) {
        fVar54 = fVar47;
      }
      *(float *)pauVar41[3] = fVar54;
      fVar47 = *(float *)(pauVar41[1] + 0xc);
      fVar54 = *(float *)pauVar41[2];
      fVar46 = *(float *)(pauVar41[2] + 4);
      fVar52 = (float)pdb_140dedcd0(&UNK_143009918);
      fVar51 = _DAT_142e36f28;
      fVar47 = fVar47 * fVar52;
      fVar59 = (_DAT_142e36f28 - *(float *)(pauVar41[3] + 0xc)) * _DAT_142e3b1d8;
      fVar57 = *(float *)(pauVar41[3] + 0xc) * _DAT_142e3787c;
      fVar48 = *(float *)*pauVar41;
      fVar58 = *(float *)(*pauVar41 + 4);
      fVar61 = *(float *)(*pauVar41 + 8);
      fVar63 = *(float *)(*pauVar41 + 0xc);
      fVar62 = *(float *)(pauVar41[1] + 4);
      pbStack_1c8 = *(byte **)pauVar41[1];
      uStack_1c0 = *(undefined4 *)(pauVar41[1] + 8);
      uStack_1bc = *(undefined4 *)(pauVar41[1] + 0xc);
      fVar60 = (float)pub_142e32b30(CONCAT44((int)((ulonglong)
                                                   *(double *)((longlong)pauStack_100 + 0x10) >>
                                                  0x20),
                                             (float)*(double *)((longlong)pauStack_100 + 0x10) *
                                             (*(float *)(pauVar41[3] + 8) + _DAT_142e37830) +
                                             *(float *)(pauVar41[3] + 4)));
      fVar46 = fVar46 * fVar52;
      fVar54 = fVar54 * fVar52;
      fStack_2b4 = fVar62 - fVar60 * (fVar57 + fVar59);
      fVar62 = fVar58 + fVar58;
      fVar60 = fVar61 + fVar61;
      fVar57 = fVar48 * (fVar48 + fVar48);
      fVar59 = (fVar48 + fVar48) * fVar63;
      fVar52 = fVar60 * fVar48 - fVar63 * fVar62;
      fStack_2bc = _UNK_142e378e4 - (fVar57 + fVar58 * fVar62);
      fStack_2d0 = (fVar58 * fVar60 + fVar59) * fVar54;
      fStack_2c8 = (fVar60 * fVar48 + fVar63 * fVar62) * fVar46;
      fStack_2c4 = (fVar58 * fVar60 - fVar59) * fVar46;
      fStack_2c0 = fStack_2bc * fVar46;
      fStack_2bc = fStack_2bc * fVar46;
      uStack_2e8 = (undefined1 (*) [16])
                   CONCAT44(fVar47 * (fVar62 * fVar48 + fVar63 * fVar60),
                            fVar47 * (fVar51 - (fVar58 * fVar62 + fVar61 * fVar60)));
      uStack_2e0 = (byte *)CONCAT44(fVar47 * fVar52,fVar47 * fVar52);
      uStack_2d8 = (undefined1 (*) [16])
                   CONCAT44((fVar51 - (fVar61 * fVar60 + fVar57)) * fVar54,
                            (fVar62 * fVar48 - fVar63 * fVar60) * fVar54);
      uStack_2b8 = pbStack_1c8._0_4_;
      uStack_2b0 = uStack_1c0;
      uStack_2ac = uStack_1c0;
      fStack_2cc = fStack_2d0;
      pdb_140e07fe0(&pauStack_3d8,&uStack_2e8);
      uVar49 = pauStack_238._0_4_;
      if ((char)puStack_120 == '\0') {
        uVar49 = pdb_14094c330(0x186a3);
      }
      pdb_140951920(&pauStack_228);
      iStack_16c = (int)puStack_138 + iVar42 * 2;
      pauStack_198 = auStack_3b8._0_8_;
      pbStack_190 = auStack_3b8._8_8_;
      uStack_1a8 = auStack_3c8._0_4_;
      uStack_1a4 = auStack_3c8._4_4_;
      uStack_1a0 = auStack_3c8._8_4_;
      uStack_19c = auStack_3c8._12_4_;
      pauStack_1b8 = pauStack_3d8;
      uStack_1b0 = (code *)pbStack_3d0;
      pbStack_188 = pbStack_1f8;
      uStack_180 = pbStack_1f0;
      uStack_170 = auStack_1e0._0_4_;
      lStack_178 = CONCAT44(uStack_1e4,uStack_1e8);
      uStack_164 = 0;
      uStack_15c = 0x40;
      uStack_168 = uVar49;
      fStack_160 = fVar47;
      pdb_14094c790(&pauStack_228,&pauStack_1b8);
      pdb_1413f66a0(&pbStack_2a8);
      iVar42 = iVar42 + 1;
    }
    pbVar43 = pbStack_288 + 0x18;
    pdb_140e9a350();
    uVar13 = uStack_118;
    LOCK();
    bVar45 = *pbVar43;
    if (bVar45 == 1) {
      *pbVar43 = 0;
    }
    UNLOCK();
    if (bVar45 != 1) {
      pdb_142dbcef0(pbVar43);
    }
  }
  pauVar40 = (undefined1 (*) [16])*param_10;
  uVar13 = param_10[3];
  auVar53 = *pauVar40;
  pauVar16 = pauVar40 + 1;
  param_3 = (undefined8 *)
            (ulonglong)
            ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  pauVar23 = (undefined1 (*) [16])param_10;
  while (uVar13 != 0) {
    if ((short)param_3 == 0) {
      do {
        auVar53 = *pauVar16;
        pauVar40 = pauVar40 + -0x50;
        pauVar16 = pauVar16 + 1;
        uVar11 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
        param_3 = (undefined8 *)(ulonglong)uVar11;
      } while (uVar11 == 0);
    }
    uVar11 = 0;
    uVar27 = (uint)param_3;
    for (uVar25 = uVar27; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    pauVar26 = (undefined1 (*) [16])((ulonglong)uVar11 * -0x50);
    if (*(longlong *)(pauVar40[-3] + 8 + (longlong)pauVar26) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430099f8);
    }
    puStack_120 = *pauVar40 + (longlong)*pauVar26;
    pbVar43 = *(byte **)(puStack_120 + -0x20);
    if (pbVar43 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b70);
    }
    LOCK();
    bVar44 = pbVar43[0x18] == 0;
    if (bVar44) {
      pbVar43[0x18] = 1;
    }
    UNLOCK();
    if (!bVar44) {
      pdb_142dbd1a0(pbVar43 + 0x18,1,1000000000);
    }
    pdb_140e9a150(pbVar43 + 0x18);
    pauStack_158 = pauVar16;
    uStack_118 = uVar13 - 1;
    if ((*(longlong *)(pbVar43 + 0x10) == 0) ||
       (piVar20 = (int *)(*(longlong *)(pbVar43 + 8) + *(longlong *)(pbVar43 + 0x10) * 4 + -4),
       piVar20 == (int *)0x0)) {
      pbVar22 = *(byte **)(lStack_108 + 0x10);
      if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      iStack_250 = (int)pbVar22 + -1;
    }
    else {
      iStack_250 = *piVar20;
      pbVar22 = *(byte **)(lStack_108 + 0x10);
    }
    pbStack_2a8 = *(byte **)(lStack_108 + 8);
    uStack_298 = *(undefined8 *)(lStack_108 + 0x18);
    pauStack_290 = *(undefined1 (**) [16])(lStack_108 + 0x20);
    auVar53 = *(undefined1 (*) [16])(lStack_108 + 0x28);
    auStack_260 = *(undefined1 (*) [16])(lStack_108 + 0x38);
    pbStack_280 = auVar53._0_8_;
    uStack_278 = auVar53._8_4_;
    uStack_274 = auVar53._12_4_;
    lStack_270 = lStack_110;
    lStack_268 = (longlong)plStack_130;
    pbStack_2a0 = pbVar22;
    pbStack_288 = pbVar43;
    pdb_1413f7bd0(&pbStack_2a8);
    param_3 = (undefined8 *)(ulonglong)(uVar27 - 1 & uVar27);
    puStack_138 = pauVar40[-5] + (longlong)*pauVar26;
    pauVar41 = *(undefined1 (**) [16])(puStack_120 + -0x40);
    pauStack_238 = pauVar41 + *(longlong *)(puStack_120 + -0x38) * 4;
    iVar42 = 0;
    if (pauVar41 != pauStack_238) {
      do {
        pauVar26 = (undefined1 (*) [16])pdb_140315970(puStack_138);
        iVar6 = *(int *)(puStack_120 + -0x30);
        uVar49 = *(undefined4 *)(puStack_120 + -0x2c);
        fVar54 = *(float *)((longlong)pauStack_100 + 0x28) / _DAT_142e37988 + *(float *)pauVar41[3];
        fVar47 = 0.0;
        if (0.0 <= fVar54) {
          fVar47 = fVar54;
        }
        fVar54 = _DAT_142e36f28;
        if (fVar47 <= _DAT_142e36f28) {
          fVar54 = fVar47;
        }
        *(float *)pauVar41[3] = fVar54;
        fVar47 = *(float *)(pauVar41[1] + 0xc);
        fVar54 = *(float *)pauVar41[2];
        fVar46 = *(float *)(pauVar41[2] + 4);
        fVar52 = (float)pdb_140dedcd0(&UNK_143009918);
        fVar51 = _DAT_142e36f28;
        fVar47 = fVar47 * fVar52;
        fVar59 = (_DAT_142e36f28 - *(float *)(pauVar41[3] + 0xc)) * _DAT_142e3b1d8;
        fVar57 = *(float *)(pauVar41[3] + 0xc) * _DAT_142e3787c;
        fVar48 = *(float *)*pauVar41;
        fVar58 = *(float *)(*pauVar41 + 4);
        fVar61 = *(float *)(*pauVar41 + 8);
        fVar63 = *(float *)(*pauVar41 + 0xc);
        fVar62 = *(float *)(pauVar41[1] + 4);
        pbStack_1c8 = *(byte **)pauVar41[1];
        uStack_1c0 = *(undefined4 *)(pauVar41[1] + 8);
        uStack_1bc = *(undefined4 *)(pauVar41[1] + 0xc);
        fVar60 = (float)pub_142e32b30(CONCAT44((int)((ulonglong)
                                                     *(double *)((longlong)pauStack_100 + 0x10) >>
                                                    0x20),
                                               (float)*(double *)((longlong)pauStack_100 + 0x10) *
                                               (*(float *)(pauVar41[3] + 8) + _DAT_142e37830) +
                                               *(float *)(pauVar41[3] + 4)));
        fVar46 = fVar46 * fVar52;
        fVar54 = fVar54 * fVar52;
        fStack_2b4 = fVar62 - fVar60 * (fVar57 + fVar59);
        fVar62 = fVar58 + fVar58;
        fVar59 = fVar61 + fVar61;
        fVar57 = fVar48 * (fVar48 + fVar48);
        fVar52 = (fVar48 + fVar48) * fVar63;
        fVar60 = fVar59 * fVar48 - fVar63 * fVar62;
        fStack_2bc = _UNK_142e378e4 - (fVar57 + fVar58 * fVar62);
        fStack_2d0 = (fVar58 * fVar59 + fVar52) * fVar54;
        fStack_2c8 = (fVar59 * fVar48 + fVar63 * fVar62) * fVar46;
        fStack_2c4 = (fVar58 * fVar59 - fVar52) * fVar46;
        fStack_2c0 = fStack_2bc * fVar46;
        fStack_2bc = fStack_2bc * fVar46;
        uStack_2e8 = (undefined1 (*) [16])
                     CONCAT44(fVar47 * (fVar62 * fVar48 + fVar63 * fVar59),
                              fVar47 * (fVar51 - (fVar58 * fVar62 + fVar61 * fVar59)));
        uStack_2e0 = (byte *)CONCAT44(fVar47 * fVar60,fVar47 * fVar60);
        uStack_2d8 = (undefined1 (*) [16])
                     CONCAT44((fVar51 - (fVar61 * fVar59 + fVar57)) * fVar54,
                              (fVar62 * fVar48 - fVar63 * fVar59) * fVar54);
        uStack_2b8 = pbStack_1c8._0_4_;
        uStack_2b0 = uStack_1c0;
        uStack_2ac = uStack_1c0;
        fStack_2cc = fStack_2d0;
        pdb_140e07fe0(&pauStack_3d8,&uStack_2e8);
        if (iVar6 == 0) {
          uVar49 = pdb_14094c330(0x186a3);
        }
        pdb_140951920(&pauStack_228);
        iStack_16c = iVar42 + (int)pauVar26 + 10000000;
        pauStack_198 = auStack_3b8._0_8_;
        pbStack_190 = auStack_3b8._8_8_;
        uStack_1a8 = auStack_3c8._0_4_;
        uStack_1a4 = auStack_3c8._4_4_;
        uStack_1a0 = auStack_3c8._8_4_;
        uStack_19c = auStack_3c8._12_4_;
        pauStack_1b8 = pauStack_3d8;
        uStack_1b0 = (code *)pbStack_3d0;
        pbStack_188 = pbStack_1f8;
        uStack_180 = pbStack_1f0;
        uStack_170 = auStack_1e0._0_4_;
        lStack_178 = CONCAT44(uStack_1e4,uStack_1e8);
        uStack_164 = 0;
        uStack_15c = 0x40;
        uStack_168 = uVar49;
        fStack_160 = fVar47;
        pdb_14094c790(&pauStack_228,&pauStack_1b8);
        pdb_1413f66a0(&pbStack_2a8);
        pauVar41 = pauVar41 + 4;
        iVar42 = iVar42 + 1;
      } while (pauVar41 != pauStack_238);
    }
    pauVar28 = (undefined1 (*) [16])(pbStack_288 + 0x18);
    pdb_140e9a350();
    uVar13 = uStack_118;
    pauVar16 = pauStack_158;
    pauVar23 = (undefined1 (*) [16])0x1;
    LOCK();
    bVar45 = (*pauVar28)[0];
    if (bVar45 == 1) {
      (*pauVar28)[0] = 0;
    }
    else {
      pauVar23 = (undefined1 (*) [16])(ulonglong)bVar45;
    }
    UNLOCK();
    if (bVar45 != 1) {
      pauVar23 = (undefined1 (*) [16])pdb_142dbcef0(pauVar28);
    }
  }
  if (cStack_f3 != '\0') {
    plVar14 = (longlong *)pdb_140e97000();
    if (((char)plVar14[0xd] != '\x01') &&
       (plVar14 = (longlong *)pdb_142dd9610(plVar14,0), plVar14 == (longlong *)0x0))
    goto LAB_140821a7f;
    lVar12 = -1;
    if (*plVar14 != 0) {
LAB_140821a4b:
      plVar14 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_140821a57:
      plVar14 = (longlong *)pdb_142dd9610(plVar14,0);
      if (plVar14 == (longlong *)0x0) {
LAB_140821a7f:
        pdb_142dc7890(&UNK_143307940);
LAB_140821a8c:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430099c8);
      }
      goto LAB_14081faf8;
    }
    *plVar14 = -1;
    pauStack_100 = (undefined1 (*) [16])plVar14;
    pdb_140e95370(plVar14 + 1);
    *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
    pauVar23 = pauStack_100;
  }
  return pauVar23;
}

