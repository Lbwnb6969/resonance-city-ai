// VA 0x141436b60, PDB extent 5403 bytes
// system_wall_constructor::utils::half_timber::place_rectangle_corner_beams
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::half_timber::place_rectangle_corner_beams
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 5403 */

void pdb_141436b60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulonglong uVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int *piVar22;
  undefined4 *puVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  byte *pbVar29;
  undefined1 (*pauVar30) [16];
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  char *pcVar33;
  longlong lVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined8 extraout_XMM0_Qb;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float unaff_XMM6_Da;
  uint unaff_XMM6_Dc;
  uint unaff_XMM6_Dd;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float afStack_39c [3];
  undefined8 uStack_390;
  longlong lStack_388;
  undefined8 uStack_380;
  undefined8 auStack_378 [5];
  undefined8 uStack_350;
  longlong lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  float fStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  longlong lStack_318;
  longlong lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  int iStack_2f8;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined7 uStack_2e3;
  float fStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined8 uStack_2c4;
  undefined1 auStack_2bc [8];
  float fStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  int *piStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  longlong lStack_270;
  byte *pbStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  float fStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  longlong lStack_1d0;
  float *pfStack_1c8;
  longlong lStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int iStack_1a4;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined4 uStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  longlong lStack_180;
  byte *pbStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ulonglong uStack_110;
  byte *pbStack_108;
  int *piStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if ((*_DAT_143ca4500 != '\0') ||
     (uVar28 = param_2, uStack_1f8 = param_2, uStack_1e8 = param_4,
     piStack_100 = (int *)pdb_14092fa10(), piStack_100 == (int *)0x0)) {
    return;
  }
  cStack_f1 = pdb_140b77b50(param_9);
  if (cStack_f1 == '\0') {
    lStack_1d0 = 0;
    pfStack_1c8 = (float *)0x4;
    lStack_1c0 = 0;
  }
  else {
    uVar19 = pdb_140c2b5c0(param_10);
    pdb_1413ec6f0(&lStack_1d0,uVar19,uVar28);
  }
  puVar20 = (undefined8 *)pdb_1413e4400(param_6,&UNK_1433056b0);
  if ((puVar20 == (undefined8 *)0x0) ||
     (lVar21 = (**(code **)(puVar20[1] + 0x18))(*puVar20), lVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143309c28);
  }
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  LOCK();
  bVar37 = *(char *)(lVar3 + 0x18) == '\0';
  if (bVar37) {
    *(char *)(lVar3 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar37) {
    pdb_142dbd1a0(lVar3 + 0x18,1,1000000000);
  }
  pdb_140e9a150(lVar3 + 0x18);
  if ((*(longlong *)(lVar3 + 0x10) == 0) ||
     (piVar22 = (int *)(*(longlong *)(lVar3 + 8) + *(longlong *)(lVar3 + 0x10) * 4 + -4),
     piVar22 == (int *)0x0)) {
    lStack_348 = *(longlong *)(lVar21 + 0x10);
    if (lStack_348 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_2f8 = (int)lStack_348 + -1;
  }
  else {
    iStack_2f8 = *piVar22;
    lStack_348 = *(longlong *)(lVar21 + 0x10);
  }
  uStack_350 = *(undefined8 *)(lVar21 + 8);
  uStack_340 = *(undefined8 *)(lVar21 + 0x18);
  uStack_338 = *(undefined8 *)(lVar21 + 0x20);
  fVar43 = *(float *)(lVar21 + 0x28);
  uStack_324 = *(undefined4 *)(lVar21 + 0x2c);
  uStack_320 = *(undefined4 *)(lVar21 + 0x30);
  uStack_31c = *(undefined4 *)(lVar21 + 0x34);
  lStack_318 = lVar21 + 0x78;
  lStack_310 = lVar21 + 0x58;
  uStack_308 = *(undefined8 *)(lVar21 + 0x38);
  uStack_300 = *(undefined8 *)(lVar21 + 0x40);
  lStack_330 = lVar3;
  fStack_328 = fVar43;
  if (*piStack_100 != 1) {
LAB_141437c1b:
    pcVar33 = (char *)(lStack_330 + 0x18);
    pdb_140e9a350();
    LOCK();
    cVar14 = *pcVar33;
    if (cVar14 == '\x01') {
      *pcVar33 = '\0';
    }
    UNLOCK();
    if (cVar14 != '\x01') {
      pdb_142dbcef0(pcVar33,0);
    }
    if (lStack_1d0 == 0) {
      return;
    }
    pub_1406abac0((byte *)pfStack_1c8,lStack_1d0 << 4,4);
    return;
  }
  piStack_288 = piStack_100;
  lStack_278 = param_1 + 0x2a3;
  uStack_298 = param_3;
  uStack_290 = param_2;
  cVar14 = pdb_1408ff990();
  if (cVar14 == '\0') {
    uVar15 = pdb_140b77b50(param_9);
    cVar14 = pdb_1408ff980(param_1 + 0x29f);
    if (((cVar14 != '\0') && (*(uint *)(param_1 + 600) < 2)) &&
       (fVar43 = 0.0, 0.0 < *(float *)(param_1 + 0x294))) {
      unaff_XMM6_Da =
           (float)pdb_14092ff30(param_1,CONCAT71((int7)((ulonglong)lVar3 >> 8),uVar15) & 0xffffffff)
      ;
      unaff_XMM6_Dc = (uint)extraout_XMM0_Qb;
      unaff_XMM6_Dd = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      bVar37 = true;
      goto LAB_141436dc8;
    }
  }
  bVar37 = false;
LAB_141436dc8:
  fVar12 = _UNK_14300ccfc;
  fVar11 = _UNK_14300ccf8;
  fVar10 = _UNK_14300ccf4;
  fVar9 = _DAT_14300ccf0;
  fVar8 = _DAT_142e36f28;
  piStack_100 = piStack_100 + 1;
  lStack_198 = param_1 + 0x29f;
  uStack_110 = 0;
  uVar31 = 0;
  fVar40 = _DAT_1430151c0;
  fVar41 = _UNK_1430151c4;
LAB_141436e32:
  fVar38 = (float)pdb_140df3e10(piStack_100,uVar31);
  fVar44 = fVar43;
  fVar39 = (float)pdb_140df1dc0(piStack_100,uVar31);
  uStack_2a8 = CONCAT44(fVar43 + fVar44 * fVar41,fVar38 + fVar39 * fVar40);
  fVar43 = (float)pdb_14140ce00(param_5);
  pdb_140df4540(&uStack_18c,&uStack_2a8);
  if (cStack_f1 == '\0') {
    pdb_140930390(param_1);
  }
  else {
    cVar14 = pdb_1408ff980(lStack_198);
    if (cVar14 == '\0') {
      pdb_140930390(param_1);
    }
    else {
      pdb_140930390(param_1);
    }
  }
  pdb_140b771d0(param_9);
  cVar14 = pdb_1408ff980(lStack_198);
  if (cVar14 != '\0') {
    pdb_140b771d0(param_9);
  }
  fVar40 = (float)pdb_140df0700(piStack_100,uVar31);
  fVar41 = (float)pdb_140df3ee0(piStack_100);
  fVar40 = fVar40 * fVar41;
  fVar41 = (float)pdb_14007ee60();
  lVar21 = *(longlong *)(param_1 + 0x98);
  if (lVar21 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143308560);
  }
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
  }
  uStack_168 = *(undefined **)(param_1 + 0x90);
  fStack_160 = (float)lVar21;
  fStack_15c = (float)((ulonglong)lVar21 >> 0x20);
  fStack_158 = 5.4340897;
  fStack_154 = 1.4013e-45;
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  uStack_150 = 0;
  uStack_148 = (undefined *)0x0;
  pdb_14141df70(&uStack_168,fVar41);
  uVar27 = (ulonglong)uStack_148 & 0xffffffff;
  if (param_8 <= uVar27) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar27,param_8,&UNK_143309c40);
  }
  uVar1 = uVar27 + 1;
  if (param_8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,param_8,&UNK_143309c40);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x98);
  if (uVar4 <= uVar27) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar27,uVar4,&UNK_143309c58);
  }
  if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,uVar4,&UNK_143309c58);
  }
  fVar41 = *(float *)(param_7 + uVar27 * 4);
  fVar41 = (*(float *)(param_7 + 4 + uVar27 * 4) - fVar41) * uStack_148._4_4_ + fVar41;
  fVar44 = *(float *)(*(longlong *)(param_1 + 0x90) + 4 + uVar27 * 0xc);
  fVar38 = (*(float *)(*(longlong *)(param_1 + 0x90) + 4 + uVar1 * 0xc) - fVar44) * uStack_148._4_4_
           + fVar44 + fVar41;
  fVar44 = fVar38;
  if (fVar38 <= fStack_188) {
    fVar44 = fStack_188;
  }
  fVar44 = (float)(~-(uint)NAN(fStack_188) & (uint)fVar44 | -(uint)NAN(fStack_188) & (uint)fVar38);
  auVar48 = ZEXT416((uint)fVar44);
  if (((fVar41 <= 0.0) &&
      (fVar38 = _DAT_143309800, (float)((uint)(fVar44 - fVar43) & _DAT_142e377e0) < _DAT_142e37840))
     || ((fStack_188 = fVar44, 0.0 < fVar41 &&
         (cVar14 = pdb_1408ff980(lStack_198), fVar38 = _DAT_143309804, cVar14 != '\0')))) {
    fStack_188 = fVar44 + fVar38;
    auVar48 = ZEXT416((uint)fStack_188);
  }
  if (bVar37) {
    fVar41 = auVar48._0_4_;
    fVar43 = unaff_XMM6_Da;
    if (unaff_XMM6_Da <= fVar41) {
      fVar43 = fVar41;
    }
    auVar49._0_4_ = ~-(uint)NAN(fVar41) & (uint)fVar43;
    auVar49._4_4_ = 0;
    auVar49._8_4_ = ~auVar48._8_4_ & unaff_XMM6_Dc;
    auVar49._12_4_ = ~auVar48._12_4_ & unaff_XMM6_Dd;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = -(uint)NAN(fVar41) & (uint)unaff_XMM6_Da;
    auVar7._8_4_ = auVar48._8_4_ & unaff_XMM6_Dc;
    auVar7._12_4_ = auVar48._12_4_ & unaff_XMM6_Dd;
    auVar48 = auVar49 | auVar7;
    fStack_188 = auVar48._0_4_;
  }
  if (cStack_f1 != '\0') {
    lVar21 = lStack_1c0 << 4;
    pfVar25 = pfStack_1c8;
    do {
      pfVar24 = pfVar25;
      if (lVar21 == 0) break;
      lVar21 = lVar21 + -0x10;
      pfVar25 = pfVar24 + 4;
    } while ((fVar40 < *pfVar24) || (pfVar24[2] <= fVar40));
  }
  fVar43 = auVar48._0_4_;
  pdb_1424bcd90(&lStack_270);
  lStack_180 = 0;
  pbStack_178 = (byte *)0x4;
  lStack_170 = 0;
  piVar22 = (int *)0x0;
  uStack_1f0 = uVar31;
  lStack_1a0 = param_1;
  lVar21 = pdb_140c41030(uStack_298,0,uStack_290);
  if (lVar21 != 0) {
    pauVar32 = *(undefined1 (**) [16])(lVar21 + 0x30);
    auVar48 = *pauVar32;
    pauVar30 = pauVar32 + 1;
    uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
    pbVar29 = *(byte **)(lVar21 + 0x48);
    while (piVar22 = (int *)0x0, pbVar29 != (byte *)0x0) {
      if ((short)uVar35 == 0) {
        do {
          auVar48 = *pauVar30;
          pauVar32 = pauVar32 + -0x68;
          pauVar30 = pauVar30 + 1;
          uVar35 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar35 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar35 = uVar35 - 1 & uVar35;
      lVar21 = (ulonglong)uVar5 * -0x68;
      pbVar29 = pbVar29 + -1;
      if ((*(longlong *)((longlong)pauVar32 + lVar21 + -0x60) == 0) &&
         (pbStack_108 = pbVar29,
         cVar14 = pdb_140c45920(uStack_1e8,*(undefined4 *)((longlong)pauVar32 + lVar21 + -0x68)),
         pbVar29 = pbStack_108, cVar14 == '\x03')) {
        pdb_1424bceb0(&uStack_168,uStack_1e8,3,*(undefined1 *)((longlong)pauVar32 + lVar21 + -7));
        puVar23 = (undefined4 *)pdb_140901130((longlong)pauVar32 + lVar21 + -0x60,&UNK_143309c70);
        pdb_140deead0(&uStack_258,*puVar23);
        pdb_140deec20(&uStack_258);
        fVar43 = fVar40;
        cVar14 = pdb_140deec60(&uStack_258);
        pbVar29 = pbStack_108;
        if (cVar14 != '\0') {
          uVar18 = uStack_258._4_4_;
          uVar13 = uStack_250._4_4_;
          uVar42 = pdb_140deec10(&uStack_258);
          lVar21 = lStack_170;
          if (lStack_170 == lStack_180) {
            pdb_142d7f010(&lStack_180);
          }
          *(undefined4 *)(pbStack_178 + lVar21 * 0xc) = uVar18;
          *(undefined4 *)(pbStack_178 + lVar21 * 0xc + 4) = uVar13;
          *(undefined4 *)(pbStack_178 + lVar21 * 0xc + 8) = uVar42;
          lStack_170 = lVar21 + 1;
          uStack_2ec = uVar18;
          uStack_2e8 = uVar13;
          uStack_2e4 = 0;
          pdb_1424bca00(&lStack_270,&uStack_2ec);
          pbVar29 = pbStack_108;
        }
      }
    }
  }
  uStack_280 = uStack_1f0 + 1;
  pbStack_2a0 = pbStack_178 + lStack_170 * 0xc;
  uStack_118 = uStack_18c;
  uStack_114 = uStack_184;
  pbVar29 = pbStack_178;
  iVar17 = 0;
  while (iVar36 = iVar17, pbVar29 != pbStack_2a0) {
    fVar40 = *(float *)(pbVar29 + 8) * _DAT_142e36f50;
    uStack_168 = (undefined *)CONCAT44(uStack_114,uStack_118);
    pbStack_108 = pbVar29;
    pdb_140df4540(&uStack_1dc,&uStack_168);
    uStack_168 = (undefined *)CONCAT44(fStack_1d4,uStack_1dc);
    fVar43 = fStack_1d4;
    pdb_140df4540(auStack_2bc,&uStack_168);
    piVar22 = piStack_100;
    pdb_140df3060(auStack_378 + 2,piStack_100,uStack_1f0);
    pbStack_108 = pbStack_108 + 0xc;
    iStack_1a4 = iVar36 + 1;
    uStack_380 = 2;
    auStack_378[0] = auStack_378[2];
    auStack_378[1] = auStack_378[3];
    fVar40 = fVar40 + _DAT_142e36f50;
    lVar21 = 0;
LAB_141437533:
    pbVar29 = pbStack_108;
    iVar17 = iStack_1a4;
    if (lVar21 != 2) {
      lVar3 = lVar21 + 1;
      lStack_388 = lVar3;
      uVar28 = auStack_378[lVar21];
      uStack_2b0 = uVar28;
      fStack_160 = fStack_1d4;
      uStack_168 = (undefined *)CONCAT44(uStack_1d8,uStack_1dc);
      fStack_154 = fStack_2b4;
      fStack_15c = auStack_2bc._0_4_;
      fStack_158 = auStack_2bc._4_4_;
      uStack_390 = CONCAT44(fStack_2b4,fStack_158);
      afStack_39c[1] = fStack_1d4;
      afStack_39c[2] = fStack_15c;
      lVar34 = 0;
      do {
        pfVar25 = afStack_39c + lVar34 * 3;
        do {
          pfVar24 = pfVar25;
          lVar21 = lVar3;
          if (lVar34 == 2) goto LAB_141437533;
          lVar34 = lVar34 + 1;
          pfVar25 = pfVar24 + 3;
        } while ((bool)(bVar37 & (*pfVar24 <= unaff_XMM6_Da && unaff_XMM6_Da != *pfVar24)));
        uVar19 = *(undefined8 *)(pfVar24 + -1);
        fVar43 = pfVar24[1];
        pdb_140df4520(&uStack_168,&uStack_2b0);
        fVar41 = fStack_160;
        fVar46 = SUB84(uStack_168,0);
        uVar31 = (ulonglong)uStack_168 >> 0x20;
        pdb_140de88f0(&uStack_168,(int)uVar28);
        fVar44 = fStack_160 * fVar9 * _DAT_142e377d0 + uStack_168._4_4_ * fVar9 * _DAT_142e377c0 +
                 (float)uStack_168 * _DAT_14300cce0 * _DAT_142e377b0 + fStack_15c * _DAT_14300cce0;
        fVar38 = fStack_160 * fVar10 * _UNK_142e377d4 + uStack_168._4_4_ * fVar10 * _UNK_142e377c4 +
                 (float)uStack_168 * _UNK_14300cce4 * _UNK_142e377b4 + fStack_15c * _UNK_14300cce4;
        fVar39 = fStack_160 * fVar11 * _UNK_142e377d8 + uStack_168._4_4_ * fVar11 * _UNK_142e377c8 +
                 (float)uStack_168 * _UNK_14300cce8 * _UNK_142e377b8 + fStack_15c * _UNK_14300cce8;
        fVar45 = fStack_160 * fVar12 * _UNK_142e377dc + uStack_168._4_4_ * fVar12 * _UNK_142e377cc +
                 (float)uStack_168 * _UNK_14300ccec * _UNK_142e377bc + fStack_15c * _UNK_14300ccec;
        fStack_138 = (float)uVar19 + fVar46 * _DAT_143309810;
        fStack_134 = (float)((ulonglong)uVar19 >> 0x20) + (float)uVar31 * _UNK_143309814;
        fStack_130 = fVar43 + fVar41 * _UNK_143309818;
        fVar51 = _DAT_142e3798c + _UNK_142e4e65c * _UNK_14330981c;
        fVar50 = fVar39 + fVar39;
        fVar43 = fVar38 + fVar38;
        fVar47 = fVar44 * (fVar44 + fVar44);
        fVar41 = (fVar44 + fVar44) * fVar45;
        fStack_15c = fVar50 * fVar44 - fVar43 * fVar45;
        fVar46 = fVar41 + fVar50 * fVar38;
        fStack_13c = fVar8 - (fVar47 + fVar38 * fVar43);
        fStack_160 = fVar51 * fStack_15c;
        fStack_15c = fVar51 * fStack_15c;
        uStack_168 = (undefined *)
                     CONCAT44(fVar51 * (fVar43 * fVar44 + fVar45 * fVar50),
                              fVar51 * (fVar8 - (fVar38 * fVar43 + fVar39 * fVar50)));
        fStack_158 = (fVar43 * fVar44 - fVar45 * fVar50) * fVar40;
        fStack_154 = (fVar8 - (fVar39 * fVar50 + fVar47)) * fVar40;
        uStack_150 = CONCAT44(fVar46 * fVar40,fVar46 * fVar40);
        fStack_140 = fStack_13c * _UNK_143309788;
        fStack_13c = fStack_13c * _UNK_14330978c;
        uStack_148 = (undefined *)
                     CONCAT44((fVar50 * fVar38 - fVar41) * _UNK_143309784,
                              (fVar43 * fVar45 + fVar50 * fVar44) * _DAT_143309780);
        fStack_12c = fStack_130;
        pdb_140e07fe0(&uStack_2ec,&uStack_168);
        iVar17 = pdb_140315970(&uStack_1f8);
        uVar18 = pdb_1409012c0(*(undefined4 *)(lStack_1a0 + 0x274));
        pdb_140a77410(&uStack_168);
        iStack_224 = iVar17 + iVar36;
        uStack_258 = CONCAT44(uStack_2e8,uStack_2ec);
        uStack_250 = CONCAT71(uStack_2e3,uStack_2e4);
        uStack_238 = uStack_2cc;
        uStack_230 = uStack_2c4;
        fStack_248 = fStack_2dc;
        uStack_244 = uStack_2d8;
        uStack_240 = uStack_2d4;
        uStack_23c = uStack_2d0;
        uStack_228 = 0;
        uStack_21c = 0;
        uStack_218 = uStack_128;
        uStack_210 = uStack_120;
        piVar22 = (int *)&uStack_258;
        fVar43 = fStack_2dc;
        uStack_220 = uVar18;
        bVar16 = pdb_1413f6d90(&uStack_350);
        uStack_110 = CONCAT71((int7)(uStack_110 >> 8),(byte)uStack_110 | bVar16);
      } while( true );
    }
  }
  pfVar25 = (float *)pdb_14043b7e0(&lStack_270);
  pfVar24 = pfVar25 + (longlong)piVar22 * 3;
  iVar17 = 0;
  do {
    param_1 = lStack_1a0;
    fVar41 = _UNK_1430151c4;
    fVar40 = _DAT_1430151c0;
    uVar35 = -iVar17;
    pfVar26 = pfVar25;
    do {
      if (pfVar26 == pfVar24) {
        if (lStack_180 != 0) {
          pub_1406abac0(pbStack_178,lStack_180 * 0xc,4);
        }
        if (lStack_270 != 0) {
          pub_1406abac0(pbStack_268,lStack_270 * 0xc,4);
        }
        uVar31 = uStack_280;
        if (uStack_280 < 4) goto LAB_141436e32;
        if (((uStack_110 & 1) != 0) && (*_DAT_143ca8e90 != 0)) {
          uStack_168 = &UNK_143309988;
          fStack_160 = 6.02558e-44;
          fStack_15c = 0.0;
          fStack_158 = 176.59973;
          fStack_154 = 1.4013e-45;
          uStack_150 = 0x2b;
          uStack_148 = &UNK_143309cc0;
          pdb_1400c9be0(&UNK_143309c88,0x69,1,&uStack_168);
        }
        goto LAB_141437c1b;
      }
      pfVar25 = pfVar26 + 3;
      fVar44 = *pfVar26;
      pfVar2 = pfVar26 + 1;
      uVar35 = uVar35 - 1;
      pfVar26 = pfVar25;
    } while (*pfVar2 - fVar44 <= _DAT_142e3b1d8);
    uStack_168 = (undefined *)CONCAT44(uStack_114,uStack_118);
    pdb_140df4540(&fStack_1b8,&uStack_168);
    fVar40 = fStack_1b0;
    fVar43 = fStack_1b8;
    uStack_168._0_4_ = fStack_1b8;
    uStack_168._4_4_ = fStack_1b0;
    pdb_140df4540(&fStack_204,&uStack_168);
    pdb_140de88f0(&uStack_168,piStack_288[1]);
    fVar43 = SQRT((fVar40 - fStack_1fc) * (fVar40 - fStack_1fc) +
                  (fStack_1b4 - fStack_200) * (fStack_1b4 - fStack_200) +
                  (fVar43 - fStack_204) * (fVar43 - fStack_204));
    fVar46 = fStack_160 + fStack_160;
    fVar40 = fStack_160 * fVar46;
    fVar44 = uStack_168._4_4_ + uStack_168._4_4_;
    fVar47 = fVar46 * (float)uStack_168;
    fVar50 = fVar46 * uStack_168._4_4_;
    fVar45 = (float)uStack_168 * ((float)uStack_168 + (float)uStack_168);
    fVar41 = fVar44 * fStack_15c;
    fVar38 = ((float)uStack_168 + (float)uStack_168) * fStack_15c;
    fVar46 = fStack_15c * fVar46;
    fStack_15c = fVar47 - fVar41;
    fVar39 = fVar38 + fVar50;
    fStack_13c = fVar8 - (fVar45 + uStack_168._4_4_ * fVar44);
    fStack_160 = fStack_15c * _UNK_143309828;
    fStack_15c = fStack_15c * _UNK_14330982c;
    fStack_158 = fVar43 * (fVar44 * (float)uStack_168 - fVar46);
    fStack_154 = fVar43 * (fVar8 - (fVar40 + fVar45));
    fStack_140 = fStack_13c * _UNK_143309828;
    fStack_13c = fStack_13c * _UNK_14330982c;
    uStack_168 = (undefined *)
                 CONCAT44((fVar44 * (float)uStack_168 + fVar46) * _UNK_143309824,
                          (fVar8 - (uStack_168._4_4_ * fVar44 + fVar40)) * _DAT_143309820);
    uStack_150 = CONCAT44(fVar43 * fVar39,fVar43 * fVar39);
    uStack_148 = (undefined *)
                 CONCAT44((fVar50 - fVar38) * _UNK_143309824,(fVar41 + fVar47) * _DAT_143309820);
    fStack_138 = fStack_1b8;
    fStack_134 = fStack_1b4;
    fStack_130 = fStack_1b0;
    fStack_12c = fStack_1b0;
    pdb_140e07fe0(&uStack_2ec,&uStack_168);
    iVar17 = pdb_140315970(&uStack_1f8);
    uVar18 = pdb_1409012c0(*(undefined4 *)(lStack_1a0 + 0x274));
    pdb_140a77410(&uStack_168);
    iStack_224 = ~uVar35 + iVar17;
    uStack_258 = CONCAT44(uStack_2e8,uStack_2ec);
    uStack_250 = CONCAT71(uStack_2e3,uStack_2e4);
    uStack_238 = uStack_2cc;
    uStack_230 = uStack_2c4;
    fStack_248 = fStack_2dc;
    uStack_244 = uStack_2d8;
    uStack_240 = uStack_2d4;
    uStack_23c = uStack_2d0;
    uStack_228 = 0;
    uStack_21c = 0;
    uStack_218 = uStack_128;
    uStack_210 = uStack_120;
    fVar43 = fStack_2dc;
    uStack_220 = uVar18;
    bVar16 = pdb_1413f6d90(&uStack_350);
    iVar17 = -uVar35;
    uStack_110 = CONCAT71((int7)(uStack_110 >> 8),(byte)uStack_110 | bVar16);
  } while( true );
}

