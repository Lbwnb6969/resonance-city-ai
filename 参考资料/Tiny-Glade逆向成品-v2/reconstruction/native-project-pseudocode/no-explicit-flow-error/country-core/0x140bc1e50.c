// VA 0x140bc1e50, PDB extent 40654 bytes
// country_core::systems::wall::structure_outline::structure_outline::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::structure_outline::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 40654 */

void pdb_140bc1e50(undefined8 *param_1,float *******param_2,undefined1 param_3,float param_4,
                  float param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float *******pppppppfVar10;
  float *******pppppppfVar11;
  float *******pppppppfVar12;
  float ****ppppfVar13;
  ulonglong uVar14;
  float *******pppppppfVar15;
  byte *pbVar16;
  float *******pppppppfVar17;
  int *piVar18;
  float *******pppppppfVar19;
  undefined8 *puVar20;
  float ****ppppfVar21;
  undefined7 uVar23;
  longlong lVar22;
  longlong lVar24;
  undefined4 *puVar25;
  float ****ppppfVar26;
  longlong lVar27;
  float ******ppppppfVar28;
  float *pfVar29;
  float ****ppppfVar30;
  undefined8 uVar31;
  float ******ppppppfVar32;
  ushort uVar33;
  ulonglong uVar34;
  float ******ppppppfVar35;
  char cVar36;
  float *****pppppfVar37;
  float *****pppppfVar38;
  undefined8 uVar39;
  bool bVar40;
  byte bVar41;
  float fVar42;
  float extraout_XMM0_Da;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined4 auStack_43c [7];
  undefined4 *puStack_420;
  float *******pppppppfStack_418;
  float *******pppppppfStack_410;
  float *******pppppppfStack_408;
  float *******pppppppfStack_400;
  float *****pppppfStack_3f8;
  float *******pppppppfStack_3f0;
  float *******pppppppfStack_3e8;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float *******pppppppfStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  undefined4 uStack_3b0;
  float fStack_3ac;
  float *****pppppfStack_3a8;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  undefined4 uStack_384;
  float *******pppppppfStack_380;
  float *****pppppfStack_378;
  float fStack_370;
  float ******ppppppfStack_368;
  undefined4 uStack_360;
  float ******ppppppfStack_358;
  float fStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  float *******pppppppfStack_330;
  undefined1 auStack_328 [16];
  float *******pppppppfStack_318;
  float *******pppppppfStack_310;
  float *******pppppppfStack_308;
  undefined1 auStack_300 [24];
  float *******pppppppfStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  float fStack_2d0;
  undefined8 *puStack_2c8;
  float *******pppppppfStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float afStack_2a0 [2];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  float *******pppppppfStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float *******pppppppfStack_260;
  float *******pppppppfStack_258;
  float *******pppppppfStack_250;
  undefined *puStack_248;
  float *******pppppppfStack_238;
  float *******pppppppfStack_230;
  float *******pppppppfStack_228;
  undefined8 uStack_218;
  float *******pppppppfStack_210;
  float *******pppppppfStack_208;
  float fStack_1f4;
  float *******pppppppfStack_1f0;
  byte *pbStack_1e8;
  float *******pppppppfStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  float afStack_1b0 [2];
  float *******pppppppfStack_1a8;
  byte *pbStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  float *******pppppppfStack_188;
  float *******pppppppfStack_180;
  float *******pppppppfStack_178;
  undefined1 uStack_169;
  float *******pppppppfStack_168;
  float *******pppppppfStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float *******pppppppfStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char acStack_fe [190];
  
  acStack_fe[0xe] = -2;
  acStack_fe[0xf] = -1;
  acStack_fe[0x10] = -1;
  acStack_fe[0x11] = -1;
  acStack_fe[0x12] = -1;
  acStack_fe[0x13] = -1;
  acStack_fe[0x14] = -1;
  acStack_fe[0x15] = -1;
  pppppppfStack_188 = (float *******)*param_1;
  ppppppfVar35 = *pppppppfStack_188;
  if (ppppppfVar35[3] == (float *****)0x0) {
    return;
  }
  pppppppfStack_160 = (float *******)CONCAT71(pppppppfStack_160._1_7_,param_3);
  pppppppfStack_1d0 = param_2;
  uStack_158 = param_2;
  uVar9 = pdb_1400af0a0(ppppppfVar35 + 4,&uStack_158);
  pppppfVar38 = *ppppppfVar35;
  bVar41 = (byte)(uVar9 >> 0x39);
  auVar49 = ZEXT216(CONCAT11(bVar41,bVar41));
  auVar49 = pshuflw(auVar49,auVar49,0);
  lVar24 = 0;
  do {
    uVar9 = uVar9 & (ulonglong)ppppppfVar35[1];
    auVar53 = *(undefined1 (*) [16])((longlong)pppppfVar38 + uVar9);
    auVar58[0] = -(auVar53[0] == auVar49[0]);
    auVar58[1] = -(auVar53[1] == auVar49[1]);
    auVar58[2] = -(auVar53[2] == auVar49[2]);
    auVar58[3] = -(auVar53[3] == auVar49[3]);
    auVar58[4] = -(auVar53[4] == auVar49[4]);
    auVar58[5] = -(auVar53[5] == auVar49[5]);
    auVar58[6] = -(auVar53[6] == auVar49[6]);
    auVar58[7] = -(auVar53[7] == auVar49[7]);
    auVar58[8] = -(auVar53[8] == auVar49[0]);
    auVar58[9] = -(auVar53[9] == auVar49[1]);
    auVar58[10] = -(auVar53[10] == auVar49[2]);
    auVar58[0xb] = -(auVar53[0xb] == auVar49[3]);
    auVar58[0xc] = -(auVar53[0xc] == auVar49[4]);
    auVar58[0xd] = -(auVar53[0xd] == auVar49[5]);
    auVar58[0xe] = -(auVar53[0xe] == auVar49[6]);
    auVar58[0xf] = -(auVar53[0xf] == auVar49[7]);
    uVar33 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
    uVar7 = (uint)uVar33;
    while (uVar33 != 0) {
      uVar3 = 0;
      for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar34 = uVar3 + uVar9 & (ulonglong)ppppppfVar35[1];
      if (param_2 == (float *******)pppppfVar38[uVar34 * -0x56 + -0x56]) {
        pppppfVar38 = pppppfVar38 + uVar34 * -0x56;
        if ((pppppfVar38[-0x53] < (float ****)0x2) || (*(float *)(pppppfVar38 + -0x4f) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143063540);
        }
        acStack_fe[0] = (char)pppppppfStack_160 == '\x03';
        uVar23 = (undefined7)((ulonglong)lVar24 >> 8);
        uVar46 = (undefined4)CONCAT71(uVar23,1);
        if (((char)pppppppfStack_160 != '\x01') && ((char)pppppppfStack_160 != '\x04')) {
          if ((char)pppppppfStack_160 == '\x02') {
            if ((*(char *)((longlong)pppppfVar38 + -9) == '\x01') &&
               (*(uint *)(pppppfVar38 + -10) < 2)) {
              uVar46 = (undefined4)CONCAT71(uVar23,*(float *)((longlong)pppppfVar38 + -0x14) <= 0.0)
              ;
            }
          }
          else {
            uVar46 = 0;
          }
        }
        pppppppfStack_2c0 = (float *******)(pppppfVar38 + -0x55);
        auStack_43c[0] = 0;
        pppppppfVar12 = (float *******)param_1[1];
        pppppppfVar10 = (float *******)param_1[2];
        puStack_420 = auStack_43c;
        pppppppfStack_418 = pppppppfStack_188;
        pppppppfVar19 = (float *******)&pppppppfStack_1d0;
        pppppppfStack_410 = pppppppfVar19;
        pppppppfStack_408 = pppppppfVar12;
        pppppppfStack_400 = pppppppfVar10;
        if ((char)uVar46 == '\0') goto LAB_140bc3475;
        if (1 < *(uint *)(pppppfVar38 + -10)) {
          pppppppfVar15 = (float *******)pppppfVar38[-0x4c];
          uVar9 = (longlong)pppppppfVar15 * 0xc;
          if (pppppppfVar15 < (float *******)0xaaaaaaaaaaaaaab) goto LAB_140bc2139;
          pppppppfVar19 = (float *******)0x0;
          goto LAB_140bc212e;
        }
        pppppppfStack_1f0 = (float *******)CONCAT44(pppppppfStack_1f0._4_4_,uVar46);
        uStack_158 = (float *******)pppppfVar38[-0x4d];
        uStack_130 = (code *)pppppfVar38[-0x4c];
        uStack_150 = (float *******)((longlong)uStack_158 + (longlong)uStack_130 * 0xc);
        ppppfVar30 = pppppfVar38[-0x4a];
        pppppppfVar15 = (float *******)pppppfVar38[-0x49];
        if (pppppppfVar15 < uStack_130) {
          uStack_130 = (code *)pppppppfVar15;
        }
        uStack_140 = (code *)((longlong)ppppfVar30 + (longlong)pppppppfVar15 * 4);
        uStack_148._0_4_ = SUB84(ppppfVar30,0);
        uStack_148._4_4_ = (float)((ulonglong)ppppfVar30 >> 0x20);
        uStack_138 = (float *******)0x0;
        pppppppfStack_128 = (float *******)(pppppfVar38 + -0x55);
        pppppppfStack_318 = pppppppfVar12;
        pppppppfStack_310 = pppppppfVar10;
        pdb_1415fe680(&pppppppfStack_308,&uStack_158);
        goto LAB_140bc21bb;
      }
      uVar33 = (ushort)(uVar7 - 1) & (ushort)uVar7;
      uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar33);
    }
    auVar54[0] = -(auVar53[0] == -1);
    auVar54[1] = -(auVar53[1] == -1);
    auVar54[2] = -(auVar53[2] == -1);
    auVar54[3] = -(auVar53[3] == -1);
    auVar54[4] = -(auVar53[4] == -1);
    auVar54[5] = -(auVar53[5] == -1);
    auVar54[6] = -(auVar53[6] == -1);
    auVar54[7] = -(auVar53[7] == -1);
    auVar54[8] = -(auVar53[8] == -1);
    auVar54[9] = -(auVar53[9] == -1);
    auVar54[10] = -(auVar53[10] == -1);
    auVar54[0xb] = -(auVar53[0xb] == -1);
    auVar54[0xc] = -(auVar53[0xc] == -1);
    auVar54[0xd] = -(auVar53[0xd] == -1);
    auVar54[0xe] = -(auVar53[0xe] == -1);
    auVar54[0xf] = -(auVar53[0xf] == -1);
    if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
      return;
    }
    uVar9 = uVar9 + lVar24 + 0x10;
    lVar24 = lVar24 + 0x10;
  } while( true );
  while( true ) {
    pdb_14007ee60();
    pppppppfVar19 = (float *******)0x4;
    auStack_300._0_8_ = pub_1406abab0(uVar9,4);
    if ((byte *)auStack_300._0_8_ != (byte *)0x0) break;
LAB_140bc212e:
    uVar34 = uVar9;
    pdb_142dc7e2a();
    uVar46 = (undefined4)uVar34;
LAB_140bc2139:
    pppppppfStack_1f0 = (float *******)CONCAT44(pppppppfStack_1f0._4_4_,uVar46);
    ppppfVar30 = pppppfVar38[-0x4d];
    pppppppfStack_318 = pppppppfVar12;
    pppppppfStack_310 = pppppppfVar10;
    if (uVar9 == 0) {
      auStack_300._0_8_ = (byte *)0x4;
      pppppppfStack_308 = (float *******)0x0;
      goto LAB_140bc2188;
    }
  }
  pppppppfVar19 = (float *******)&pppppppfStack_1d0;
  pppppppfStack_308 = pppppppfVar15;
LAB_140bc2188:
  auStack_300._8_8_ = 0;
  if (pppppppfVar15 != (float *******)0x0) {
    pub_142e32760(auStack_300._0_8_,ppppfVar30,uVar9);
    auStack_300._8_8_ = pppppppfVar15;
  }
LAB_140bc21bb:
  fVar63 = *(float *)(pppppfVar38 + -0x48);
  pbStack_1e8 = (byte *)param_1[3];
  auStack_298._0_8_ = *(undefined8 *)pbStack_1e8;
  pbStack_198 = (byte *)param_1[4];
  uStack_148 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
  uStack_150._0_4_ = 6.009636;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_140 = pdb_140f71a50;
  acStack_fe[6] = 1;
  puStack_2c8 = param_1;
  uStack_158 = pppppppfVar19;
  pdb_140f60760(&pppppppfStack_278,&UNK_143063558,&uStack_158);
  fVar43 = uStack_268._4_4_;
  fVar42 = (float)uStack_268;
  pppppppfVar15 = pppppppfStack_278;
  pppppppfVar10 = pppppppfStack_308;
  pppppppfStack_178 = (float *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
  pppppppfVar12 = (float *******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
  uVar39 = auStack_300._0_8_;
  uVar31 = auStack_300._8_8_;
  pdb_14007ee60();
  pppppppfStack_180 = (float *******)pub_1406abab0(0x38,8);
  pppppppfStack_168 = pppppppfVar15;
  if (pppppppfStack_180 == (float *******)0x0) {
    pppppppfStack_160 = pppppppfVar10;
    pppppppfStack_188 = (float *******)uVar39;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x38);
  }
  auStack_288._0_8_ = pppppfVar38;
  *pppppppfStack_180 = (float ******)0x1;
  pppppppfStack_180[1] = (float ******)0x1;
  pppppppfStack_180[2] = (float ******)pppppppfVar10;
  pppppppfStack_180[3] = (float ******)uVar39;
  pppppppfStack_180[4] = (float ******)uVar31;
  *(float *)(pppppppfStack_180 + 5) = fVar63;
  *(float *)((longlong)pppppppfStack_180 + 0x2c) = param_5;
  *(float *)(pppppppfStack_180 + 6) = param_4;
  uStack_150._0_4_ = 134.20886;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_158 = pppppppfStack_180;
  if ((int)fVar43 < 0) {
    uVar39 = 0;
LAB_140bc22f0:
    pdb_142dc7e2a(uVar39,pppppppfVar12);
    goto LAB_140bc7562;
  }
  if (pppppppfVar12 == (float *******)0x0) {
    pppppppfVar10 = (float *******)0x1;
  }
  else {
    pdb_14007ee60();
    uVar39 = 1;
    pppppppfVar10 = (float *******)pub_1406abab0((ulonglong)pppppppfVar12,1);
    if (pppppppfVar10 == (float *******)0x0) goto LAB_140bc22f0;
    pub_142e32760(pppppppfVar10,pppppppfStack_178,pppppppfVar12);
    pppppppfVar19 = (float *******)&pppppppfStack_1d0;
  }
  pfVar29 = (float *)((longlong)&uStack_1c0 + 4);
  uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
  uStack_148._0_4_ = fVar42;
  uStack_148._4_4_ = fVar43;
  uStack_130 = (code *)pppppppfStack_180;
  pppppppfStack_128 = (float *******)&UNK_143063578;
  uStack_140 = (code *)pppppppfVar10;
  uStack_138 = pppppppfVar12;
  pdb_141a88350(auStack_298._0_8_,&uStack_158);
  if (pppppppfStack_168 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_178,(ulonglong)pppppppfStack_168,1);
  }
  if (*(uint *)(pppppfVar38 + -10) < 2) {
    ppppfVar30 = pppppfVar38[-10];
    auVar49 = *(undefined1 (*) [16])((longlong)pppppfVar38 + -0x44);
    fStack_2a8 = auVar49._4_4_;
    fStack_2a4 = auVar49._8_4_;
    afStack_2a0[0] = auVar49._12_4_;
    fStack_2b8 = SUB84(ppppfVar30,0);
    fStack_2b4 = (float)((ulonglong)ppppfVar30 >> 0x20);
    fStack_2b0 = SUB84(pppppfVar38[-9],0);
    fStack_2ac = (float)((ulonglong)pppppfVar38[-9] >> 0x20);
    uStack_1c0._4_4_ = fStack_2ac;
    uStack_1b8._0_4_ = fStack_2a8;
    fVar63 = _DAT_142f61030;
    uStack_1b8._4_4_ = fStack_2a4;
    if (fStack_2b8 == 1.4013e-45) {
      uStack_1b8._4_4_ = fStack_2a4 + _DAT_14302c60c;
      pfVar29 = afStack_1b0;
      fVar63 = _DAT_14302c60c;
    }
    afStack_1b0[0] = afStack_2a0[0];
    *pfVar29 = fVar63 + *pfVar29;
    acStack_fe[6] = 0;
    uStack_1c8._0_4_ = fStack_2b8;
    uStack_1c8._4_4_ = fStack_2b4;
    uStack_1c0._0_4_ = fStack_2b0;
    lVar24 = pdb_140b54cf0(*pppppppfStack_188,pppppppfStack_1d0,puStack_2c8[5]);
    pppppfVar38 = (float *****)auStack_288._0_8_;
    if (lVar24 == 0) {
      fVar63 = 0.0;
    }
    else {
      uVar7 = _DAT_143007980;
      if (*(char *)(lVar24 + 0x3d) == '\0') {
        uVar7 = 0;
      }
      fVar63 = (float)(-(uint)(*(float *)(lVar24 + 0x30) <= _DAT_142e3b1d8) & uVar7);
    }
    if (*(char *)(auStack_288._0_8_ + -0x1a0) == '\0') {
      acStack_fe[6] = 0;
      pdb_142d8e040();
      goto LAB_140bc7562;
    }
    fVar63 = fVar63 + *(float *)(auStack_288._0_8_ + -0x19c);
    lVar24 = (longlong)&uStack_1c8 + 4;
    fStack_388 = fVar63;
    if (((ulonglong)ppppfVar30 & 1) == 0) {
      acStack_fe[6] = 0;
      pdb_140defcd0(&uStack_158,lVar24,_DAT_142e3787c);
    }
    else {
      acStack_fe[6] = 0;
      pdb_140df37e0(&uStack_158,lVar24);
    }
    pppppppfVar19 = (float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
    uStack_270 = pppppppfVar19 + CONCAT44(uStack_148._4_4_,(float)uStack_148);
    uStack_268 = (float *******)&fStack_388;
    pppppppfStack_278 = pppppppfVar19;
    pdb_1415fad80(&pppppppfStack_238,&pppppppfStack_278);
    if (uStack_158 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfVar19,(longlong)uStack_158 << 3,4);
    }
    if ((float *******)uStack_140 != (float *******)0x0) {
      pub_1406abac0((byte *)uStack_138,(longlong)uStack_140 << 2,4);
    }
    if ((float)uStack_1c8 == 1.4013e-45) {
      acStack_fe[10] = 1;
      fVar42 = (float)pdb_140df3ee0(lVar24);
    }
    else {
      acStack_fe[10] = 1;
      fVar42 = (float)pdb_140deff30(lVar24);
    }
    uVar39 = *(undefined8 *)pbStack_1e8;
    uStack_148 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
    uStack_158 = (float *******)&pppppppfStack_1d0;
    uStack_150._0_4_ = 6.009636;
    uStack_150._4_4_ = 1.4013e-45;
    uStack_140 = pdb_140f71a50;
    acStack_fe[10] = 1;
    pdb_140f60760(&pppppppfStack_278,&UNK_1430635a8,&uStack_158);
    pppppppfVar17 = pppppppfStack_228;
    pppppppfVar15 = pppppppfStack_230;
    pppppppfVar10 = pppppppfStack_238;
    pppppppfVar19 = uStack_268;
    pppppppfVar12 = pppppppfStack_278;
    pppppppfStack_178 = uStack_270;
    pdb_14007ee60();
    pppppppfVar11 = (float *******)pub_1406abab0(0x38,8);
    pppppppfStack_168 = pppppppfVar12;
    if (pppppppfVar11 == (float *******)0x0) {
      pppppppfStack_160 = pppppppfVar10;
      pppppppfStack_188 = pppppppfVar15;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *pppppppfVar11 = (float ******)0x1;
    pppppppfVar11[1] = (float ******)0x1;
    pppppppfVar11[2] = (float ******)pppppppfVar10;
    pppppppfVar11[3] = (float ******)pppppppfVar15;
    pppppppfVar11[4] = (float ******)pppppppfVar17;
    *(float *)(pppppppfVar11 + 5) = fVar42;
    *(float *)((longlong)pppppppfVar11 + 0x2c) = param_5;
    *(float *)(pppppppfVar11 + 6) = param_4;
    uStack_150._0_4_ = 134.21375;
    uStack_150._4_4_ = 1.4013e-45;
    pppppppfStack_180 = pppppppfVar11;
    uStack_158 = pppppppfVar11;
    if ((longlong)pppppppfVar19 < 0) {
      uVar31 = 0;
LAB_140bc2898:
      pdb_142dc7e2a(uVar31,pppppppfVar19);
      goto LAB_140bc7562;
    }
    if (pppppppfVar19 == (float *******)0x0) {
      pppppppfVar12 = (float *******)0x1;
    }
    else {
      pdb_14007ee60();
      uVar31 = 1;
      pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
      if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc2898;
      pub_142e32760(pppppppfVar12,pppppppfStack_178,pppppppfVar19);
    }
    uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
    uStack_130 = (code *)pppppppfStack_180;
    pppppppfStack_128 = (float *******)&UNK_1430636b8;
    uStack_140 = (code *)pppppppfVar12;
    uStack_138 = pppppppfVar19;
    uStack_148 = pppppppfVar19;
    pdb_141a88350(uVar39,&uStack_158);
    if (pppppppfStack_168 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfStack_178,(ulonglong)pppppppfStack_168,1);
    }
    fVar42 = _DAT_142e36f28;
    if (((uint)(float)uStack_1c8 & 1) == 0) {
      uStack_348 = CONCAT44((float)uStack_1c0,uStack_1c8._4_4_);
      uStack_340 = CONCAT44((float)uStack_1b8,uStack_1c0._4_4_);
      acStack_fe[10] = 0;
      pdb_140bcc870(&pppppppfStack_278,&puStack_420,&uStack_348);
      pppppppfVar19 = uStack_268;
      uStack_158 = pppppppfStack_278;
      uStack_150 = uStack_270;
      uStack_148 = uStack_268;
      pppppppfStack_258 = uStack_268;
      uStack_268._0_4_ = SUB84(pppppppfStack_278,0);
      uStack_268._4_4_ = (float)((ulonglong)pppppppfStack_278 >> 0x20);
      pppppppfStack_260 = uStack_270;
      puVar20 = (undefined8 *)puStack_2c8[6];
      lVar24 = 0;
      uStack_148 = pppppppfVar19;
      do {
        auStack_298._0_8_ = (float *******)(lVar24 + 1);
        pppppppfStack_278 = (float *******)(lVar24 + 1);
        uVar46 = *(undefined4 *)((longlong)&uStack_268 + lVar24 * 0xc);
        fVar42 = *(float *)((longlong)&uStack_268 + lVar24 * 0xc + 4);
        uVar48 = *(undefined4 *)((longlong)&pppppppfStack_260 + lVar24 * 0xc);
        uStack_158 = (float *******)CONCAT44(uVar48,uVar46);
        acStack_fe[10] = 0;
        pdb_140df4540(&ppppppfStack_368,&uStack_158);
        uStack_158 = (float *******)CONCAT44(uVar48,uVar46);
        acStack_fe[10] = 0;
        fVar65 = (float)pdb_1419c1ac0(*puVar20);
        fVar43 = *(float *)((longlong)pppppfVar38 + -0x24);
        fVar61 = fVar43;
        if (fVar43 <= fVar65) {
          fVar61 = fVar65;
        }
        acStack_fe[10] = 0;
        pdb_140df4540(&ppppppfStack_358,&uStack_158,
                      ~-(uint)NAN(fVar65) & (uint)fVar61 | -(uint)NAN(fVar65) & (uint)fVar43);
        auStack_328._0_8_ = *(undefined8 *)pbStack_1e8;
        uStack_2e0._0_4_ = 7.6013107;
        uStack_2e0._4_4_ = 1.4013e-45;
        acStack_fe[10] = 0;
        pppppppfStack_2e8 = &ppppppfStack_358;
        pdb_140f60760(&uStack_158,&UNK_1430636e8,&pppppppfStack_2e8);
        uStack_2e0 = uStack_150;
        pppppppfStack_2e8 = uStack_158;
        uStack_138 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
        uStack_158 = (float *******)&pppppppfStack_2e8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pppppppfVar19 = (float *******)&pppppppfStack_1d0;
        uStack_2d8 = uStack_148;
        pdb_140f60760(&uStack_218,&UNK_14306367a,&uStack_158);
        uStack_148 = pppppppfVar19;
        if (pppppppfStack_2e8 != (float *******)0x0) {
          pub_1406abac0((byte *)uStack_2e0,(ulonglong)pppppppfStack_2e8,1);
        }
        pppppppfVar19 = pppppppfStack_208;
        pppppppfStack_168 = uStack_218;
        pppppppfStack_178 = pppppppfStack_210;
        uStack_150._0_4_ = fStack_350;
        uStack_158 = (float *******)ppppppfStack_358;
        uStack_148._4_4_ = (float)uStack_360;
        uStack_150._4_4_ = SUB84(ppppppfStack_368,0);
        uStack_148._0_4_ = (float)((ulonglong)ppppppfStack_368 >> 0x20);
        pdb_14007ee60();
        pppppppfVar12 = (float *******)pub_1406abab0(0x38,8);
        if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar12 = (float ******)0x1;
        pppppppfVar12[1] = (float ******)0x1;
        pppppppfVar12[2] = (float ******)uStack_158;
        pppppppfVar12[3] = (float ******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
        pppppppfVar12[4] = (float ******)CONCAT44(uStack_148._4_4_,(float)uStack_148);
        *(float *)(pppppppfVar12 + 5) = fVar63 - fVar42;
        *(float *)((longlong)pppppppfVar12 + 0x2c) = param_5;
        *(float *)(pppppppfVar12 + 6) = param_4;
        uStack_150._0_4_ = 134.21484;
        uStack_150._4_4_ = 1.4013e-45;
        pppppppfStack_180 = pppppppfVar12;
        uStack_158 = pppppppfVar12;
        if ((longlong)pppppppfVar19 < 0) {
          uVar39 = 0;
LAB_140bc3576:
          pdb_142dc7e2a(uVar39,pppppppfVar19);
          goto LAB_140bc7562;
        }
        if (pppppppfVar19 == (float *******)0x0) {
          pppppppfVar12 = (float *******)0x1;
        }
        else {
          pdb_14007ee60();
          uVar39 = 1;
          pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
          if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc3576;
          pub_142e32760(pppppppfVar12,pppppppfStack_178,pppppppfVar19);
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = SUB84(pppppppfVar19,0);
        uStack_148._4_4_ = (float)((ulonglong)pppppppfVar19 >> 0x20);
        uStack_138 = pppppppfVar19;
        uStack_130 = (code *)pppppppfStack_180;
        pppppppfStack_128 = (float *******)&UNK_143063700;
        uStack_140 = (code *)pppppppfVar12;
        pdb_141a88350(auStack_328._0_8_,&uStack_158);
        if (pppppppfStack_168 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfStack_178,(ulonglong)pppppppfStack_168,1);
        }
        lVar24 = auStack_298._0_8_;
      } while (auStack_298._0_8_ != 2);
    }
    else {
      pppppppfStack_208 = (float *******)CONCAT44(afStack_1b0[0],uStack_1b8._4_4_);
      uStack_218 = (float *******)CONCAT44((float)uStack_1c0,uStack_1c8._4_4_);
      pppppppfStack_210 = (float *******)CONCAT44((float)uStack_1b8,uStack_1c0._4_4_);
      pppppfVar37 = (float *****)0x0;
      while( true ) {
        if ((float *****)0x3 < pppppfVar37) break;
        acStack_fe[10] = 0;
        pppppfStack_3a8 = pppppfVar37;
        uVar39 = pdb_140df3e10(&uStack_218,pppppfVar37);
        acStack_fe[10] = 0;
        auVar52._8_4_ = (int)extraout_XMM0_Qb;
        auVar52._0_8_ = uVar39;
        auVar52._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        uVar7 = pdb_1419aab30((float *****)((undefined8)pppppfVar38 + -0x4e));
        ppppfVar21 = (float ****)(ulonglong)uVar7;
        acStack_fe[10] = 0;
        fVar43 = (float)pdb_140df3e10(&uStack_218,pppppfVar37);
        ppppfVar30 = *(float *****)((undefined8)pppppfVar38 + -0x4c);
        if (ppppfVar30 <= ppppfVar21) {
          acStack_fe[10] = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(ppppfVar21,ppppfVar30,&UNK_14335e4e0);
        }
        ppppfVar26 = (float ****)((longlong)ppppfVar21 + 1);
        if (ppppfVar30 <= ppppfVar26) {
          acStack_fe[10] = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(ppppfVar26,ppppfVar30,&UNK_14335e4f8);
        }
        fVar61 = *(float *)((longlong)*(float *****)((undefined8)pppppfVar38 + -0x4d) +
                           (longlong)ppppfVar21 * 0xc + 4);
        fVar65 = *(float *)((longlong)*(float *****)((undefined8)pppppfVar38 + -0x4d) +
                           (longlong)ppppfVar26 * 0xc + 4);
        uVar39 = *(undefined8 *)pbStack_1e8;
        uStack_270._0_4_ = 7.7239075;
        uStack_270._4_4_ = 1.4013e-45;
        acStack_fe[10] = 0;
        pppppppfStack_278 = (float *******)&pppppfStack_3a8;
        pdb_140f60760(&uStack_158,&UNK_143063c68,&pppppppfStack_278);
        pppppppfStack_278 = uStack_158;
        uStack_270._0_4_ = (float)uStack_150;
        uStack_270._4_4_ = uStack_150._4_4_;
        uStack_138 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        uStack_158 = (float *******)&pppppppfStack_278;
        pppppppfVar19 = (float *******)&pppppppfStack_1d0;
        uStack_268 = uStack_148;
        pdb_140f60760(&pppppppfStack_2e8,&UNK_14306367a,&uStack_158);
        uStack_148 = pppppppfVar19;
        if (pppppppfStack_278 != (float *******)0x0) {
          pub_1406abac0((byte *)CONCAT44(uStack_270._4_4_,(float)uStack_270),
                        (ulonglong)pppppppfStack_278,1);
        }
        iVar6 = (int)uStack_2d8._4_4_;
        uVar46 = (float)uStack_2d8;
        pppppppfStack_168 = pppppppfStack_2e8;
        pppppppfStack_180 = (float *******)CONCAT44(uStack_2e0._4_4_,(float)uStack_2e0);
        pppppppfVar19 = (float *******)CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
        pdb_14007ee60();
        pppppppfVar12 = (float *******)pub_1406abab0(0x30,8);
        if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pppppfVar37 = (float *****)((longlong)pppppfVar37 + 1);
        fVar61 = (fVar42 - extraout_XMM0_Da) * fVar61 + extraout_XMM0_Da * fVar65;
        *pppppppfVar12 = (float ******)0x1;
        pppppppfVar12[1] = (float ******)0x1;
        *(float *)(pppppppfVar12 + 2) = fVar43;
        *(float *)((longlong)pppppppfVar12 + 0x14) = auVar52._0_4_;
        *(float *)(pppppppfVar12 + 3) = fVar61;
        *(float *)((longlong)pppppppfVar12 + 0x1c) = fVar63;
        *(float *)(pppppppfVar12 + 4) = fVar63 - fVar61;
        *(float *)((longlong)pppppppfVar12 + 0x24) = param_5;
        *(float *)(pppppppfVar12 + 5) = param_4;
        uStack_150._0_4_ = 134.23633;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_158 = pppppppfVar12;
        if (iVar6 < 0) {
          uVar31 = 0;
          pppppppfStack_178 = pppppppfVar12;
LAB_140bc3590:
          pdb_142dc7e2a(uVar31,pppppppfVar19);
          goto LAB_140bc7562;
        }
        if (pppppppfVar19 == (float *******)0x0) {
          pppppppfVar10 = (float *******)0x1;
        }
        else {
          pppppppfStack_178 = pppppppfVar12;
          pdb_14007ee60();
          uVar31 = 1;
          pppppppfVar10 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
          if (pppppppfVar10 == (float *******)0x0) goto LAB_140bc3590;
          pub_142e32760(pppppppfVar10,pppppppfStack_180,pppppppfVar19);
          pppppppfVar12 = pppppppfStack_178;
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = (float)uVar46;
        uStack_148._4_4_ = (float)iVar6;
        pppppppfStack_128 = (float *******)&UNK_143063c80;
        uStack_140 = (code *)pppppppfVar10;
        uStack_138 = pppppppfVar19;
        uStack_130 = (code *)pppppppfVar12;
        pdb_141a88350(uVar39,&uStack_158);
        if (pppppppfStack_168 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfStack_180,(ulonglong)pppppppfStack_168,1);
        }
      }
    }
  }
  else {
    pppppfVar38 = (float *****)auStack_288._0_8_;
    uStack_158 = *(float ********)(auStack_288._0_8_ + -0x218);
    uStack_130 = *(code **)(auStack_288._0_8_ + -0x210);
    uStack_150 = (float *******)((longlong)uStack_158 + (longlong)uStack_130 * 0xc);
    ppppfVar30 = *(float *****)(auStack_288._0_8_ + -0x1c8);
    pppppppfVar12 = *(float ********)(auStack_288._0_8_ + -0x1c0);
    if (pppppppfVar12 < uStack_130) {
      uStack_130 = (code *)pppppppfVar12;
    }
    uStack_140 = (code *)((longlong)ppppfVar30 + (longlong)pppppppfVar12 * 4);
    uStack_148._0_4_ = SUB84(ppppfVar30,0);
    uStack_148._4_4_ = (float)((ulonglong)ppppfVar30 >> 0x20);
    uStack_138 = (float *******)0x0;
    acStack_fe[6] = 0;
    pdb_1415efe50(&fStack_2b8,&uStack_158);
    uVar39 = *(undefined8 *)pbStack_1e8;
    uStack_148 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
    uStack_150._0_4_ = 6.009636;
    uStack_150._4_4_ = 1.4013e-45;
    uStack_140 = pdb_140f71a50;
    acStack_fe[1] = 1;
    uStack_158 = pppppppfVar19;
    pdb_140f60760(&pppppppfStack_278,&UNK_1430635a8,&uStack_158);
    fVar42 = uStack_268._4_4_;
    pppppppfVar19 = pppppppfStack_278;
    pppppppfStack_180 = (float *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
    uVar9 = CONCAT44(uStack_268._4_4_,(float)uStack_268);
    ppppppfVar35 = (float ******)CONCAT44(fStack_2b4,fStack_2b8);
    ppppppfVar32 = (float ******)CONCAT44(fStack_2ac,fStack_2b0);
    ppppppfVar28 = (float ******)CONCAT44(fStack_2a4,fStack_2a8);
    pdb_14007ee60();
    pppppppfVar12 = (float *******)pub_1406abab0(0x38,8);
    pppppppfStack_168 = pppppppfVar19;
    if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *pppppppfVar12 = (float ******)0x1;
    pppppppfVar12[1] = (float ******)0x1;
    pppppppfVar12[2] = ppppppfVar35;
    pppppppfVar12[3] = ppppppfVar32;
    pppppppfVar12[4] = ppppppfVar28;
    *(float *)(pppppppfVar12 + 5) = fVar63;
    *(float *)((longlong)pppppppfVar12 + 0x2c) = param_5;
    *(float *)(pppppppfVar12 + 6) = param_4;
    uStack_150._0_4_ = 134.20996;
    uStack_150._4_4_ = 1.4013e-45;
    uStack_158 = pppppppfVar12;
    if ((int)fVar42 < 0) {
      uVar31 = 0;
      pppppppfStack_178 = pppppppfVar12;
LAB_140bc25b4:
      pdb_142dc7e2a(uVar31,uVar9);
      goto LAB_140bc7562;
    }
    if (uVar9 == 0) {
      pbVar16 = (byte *)0x1;
    }
    else {
      pppppppfStack_178 = pppppppfVar12;
      pdb_14007ee60();
      uVar31 = 1;
      pbVar16 = pub_1406abab0(uVar9,1);
      if (pbVar16 == (byte *)0x0) goto LAB_140bc25b4;
      pub_142e32760(pbVar16,pppppppfStack_180,uVar9);
      pppppppfVar12 = pppppppfStack_178;
    }
    uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
    pppppppfStack_128 = (float *******)&UNK_1430635c0;
    uStack_140 = (code *)pbVar16;
    uStack_130 = (code *)pppppppfVar12;
    pdb_141a88350(uVar39,&uStack_158);
    if (pppppppfStack_168 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfStack_180,(ulonglong)pppppppfStack_168,1);
    }
    ppppfVar30 = *(float *****)((undefined8)pppppfVar38 + -0x42);
    if (ppppfVar30 == (float ****)0x0) {
      acStack_fe[1] = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430635f0);
    }
    if (*(float *****)((undefined8)pppppfVar38 + -0x38) == (float ****)0x0) {
      acStack_fe[1] = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143063608);
    }
    ppppfVar21 = *(float *****)((undefined8)pppppfVar38 + -0x43);
    puVar20 = (undefined8 *)((longlong)ppppfVar21 + (longlong)ppppfVar30 * 0xc + -0xc);
    if (puVar20 == (undefined8 *)0x0) {
      acStack_fe[1] = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143063638);
    }
    puVar25 = (undefined4 *)
              ((longlong)*(float *****)((undefined8)pppppfVar38 + -0x39) +
              ((longlong)*(float *****)((undefined8)pppppfVar38 + -0x38) + -1) * 4);
    if (puVar25 == (undefined4 *)0x0) {
      acStack_fe[1] = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143063650);
    }
    uStack_110 = *(undefined4 *)((longlong)ppppfVar21 + (longlong)ppppfVar30 * 0xc + -4);
    uStack_118 = *puVar20;
    uStack_138 = (float *******)*ppppfVar21;
    uStack_158 = (float *******)0x0;
    uStack_150._0_4_ = 2.8026e-45;
    uStack_150._4_4_ = 0.0;
    uStack_148._0_4_ = 134.21143;
    uStack_148._4_4_ = 1.4013e-45;
    uStack_140 = (code *)0x11;
    uStack_130 = (code *)CONCAT44(*(undefined4 *)*(float *****)((undefined8)pppppfVar38 + -0x39),
                                  *(undefined4 *)(ppppfVar21 + 1));
    pppppppfStack_128 = (float *******)&UNK_143063668;
    puStack_120 = (undefined8 *)0x12;
    uStack_10c = *puVar25;
    lVar24 = 0;
    do {
      if ((float *******)(&uStack_148)[lVar24 * 4] == (float *******)0x0) break;
      fVar43 = *(float *)(&uStack_138 + lVar24 * 4);
      fVar63 = *(float *)((longlong)&uStack_138 + lVar24 * 0x20 + 4);
      fVar61 = *(float *)(&uStack_130 + lVar24 * 4);
      fVar42 = *(float *)((longlong)&uStack_130 + lVar24 * 0x20 + 4);
      uStack_2e0._0_4_ = (float)(&uStack_140)[lVar24 * 4];
      uStack_2e0._4_4_ = (float)((ulonglong)(&uStack_140)[lVar24 * 4] >> 0x20);
      uVar39 = *(undefined8 *)pbStack_1e8;
      pppppppfStack_258 = (float *******)(*(longlong *)pbStack_198 + 0x2c);
      uStack_270._0_4_ = 2.7316895;
      uStack_270._4_4_ = 1.4013e-45;
      uStack_268 = (float *******)&pppppppfStack_1d0;
      pppppppfStack_260 = (float *******)pdb_140c04ef0;
      pppppppfStack_250 = (float *******)pdb_140f71a50;
      acStack_fe[1] = 0;
      pppppppfStack_2e8 = (float *******)(&uStack_148)[lVar24 * 4];
      pppppppfStack_278 = (float *******)&pppppppfStack_2e8;
      pdb_140f60760(&uStack_1c8,&UNK_14306367a,&pppppppfStack_278);
      fVar47 = uStack_1b8._4_4_;
      fVar65 = (float)uStack_1b8;
      pppppppfStack_168 = (float *******)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      pppppppfStack_178 = (float *******)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      pppppppfVar19 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      pdb_14007ee60();
      pppppppfVar12 = (float *******)pub_1406abab0(0x30,8);
      if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      lVar24 = lVar24 + 1;
      *pppppppfVar12 = (float ******)0x1;
      pppppppfVar12[1] = (float ******)0x1;
      *(float *)(pppppppfVar12 + 2) = fVar43;
      *(float *)((longlong)pppppppfVar12 + 0x14) = fVar63;
      *(float *)(pppppppfVar12 + 3) = fVar61;
      *(float *)((longlong)pppppppfVar12 + 0x1c) = fVar42;
      *(float *)(pppppppfVar12 + 4) = fVar42 - fVar63;
      *(float *)((longlong)pppppppfVar12 + 0x24) = param_5;
      *(float *)(pppppppfVar12 + 5) = param_4;
      uStack_270._0_4_ = 134.21301;
      uStack_270._4_4_ = 1.4013e-45;
      pppppppfStack_278 = pppppppfVar12;
      pppppppfStack_180 = pppppppfVar12;
      if ((int)fVar47 < 0) {
        uVar31 = 0;
LAB_140bc2c76:
        pdb_142dc7e2a(uVar31,pppppppfVar19);
        goto LAB_140bc7562;
      }
      if (pppppppfVar19 == (float *******)0x0) {
        pppppppfVar12 = (float *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar31 = 1;
        pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
        if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc2c76;
        pub_142e32760(pppppppfVar12,pppppppfStack_178,pppppppfVar19);
      }
      uStack_270._0_4_ = (float)CONCAT31(uStack_270._1_3_,2);
      uStack_268._0_4_ = fVar65;
      uStack_268._4_4_ = fVar47;
      pppppppfStack_250 = pppppppfStack_180;
      puStack_248 = &UNK_143063688;
      pppppppfStack_260 = pppppppfVar12;
      pppppppfStack_258 = pppppppfVar19;
      pdb_141a88350(uVar39,&pppppppfStack_278);
      if (pppppppfStack_168 != (float *******)0x0) {
        pub_1406abac0((byte *)pppppppfStack_178,(ulonglong)pppppppfStack_168,1);
      }
    } while (lVar24 != 2);
  }
  pppppppfVar12 = pppppppfStack_318;
  pppppppfVar10 = pppppppfStack_310;
  param_1 = puStack_2c8;
  uVar46 = pppppppfStack_1f0._0_4_;
LAB_140bc3475:
  pppppppfVar19 = pppppppfStack_1d0;
  pppppppfStack_1f0 = (float *******)CONCAT44(pppppppfStack_1f0._4_4_,uVar46);
  fVar63 = param_5;
  cVar36 = (char)pppppppfStack_160;
  if (((((char)pppppppfStack_160 != '\x02') && (acStack_fe[0] == '\0')) ||
      (*(char *)((longlong)pppppfVar38 + -9) != '\x01')) ||
     ((1 < *(uint *)(pppppfVar38 + -10) || (*(float *)((longlong)pppppfVar38 + -0x14) <= 0.0))))
  goto LAB_140bc5cea;
  ppppppfVar35 = *pppppppfStack_188;
  uStack_158 = pppppppfStack_1d0;
  pppppppfStack_318 = pppppppfVar12;
  if (ppppppfVar35[9] != (float *****)0x0) {
    uVar9 = pdb_1400af0a0(ppppppfVar35 + 10,&uStack_158);
    pppppfVar37 = ppppppfVar35[6];
    bVar41 = (byte)(uVar9 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar41,bVar41));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar24 = 0;
    do {
      uVar9 = uVar9 & (ulonglong)ppppppfVar35[7];
      auVar53 = *(undefined1 (*) [16])((longlong)pppppfVar37 + uVar9);
      auVar59[0] = -(auVar53[0] == auVar49[0]);
      auVar59[1] = -(auVar53[1] == auVar49[1]);
      auVar59[2] = -(auVar53[2] == auVar49[2]);
      auVar59[3] = -(auVar53[3] == auVar49[3]);
      auVar59[4] = -(auVar53[4] == auVar49[4]);
      auVar59[5] = -(auVar53[5] == auVar49[5]);
      auVar59[6] = -(auVar53[6] == auVar49[6]);
      auVar59[7] = -(auVar53[7] == auVar49[7]);
      auVar59[8] = -(auVar53[8] == auVar49[0]);
      auVar59[9] = -(auVar53[9] == auVar49[1]);
      auVar59[10] = -(auVar53[10] == auVar49[2]);
      auVar59[0xb] = -(auVar53[0xb] == auVar49[3]);
      auVar59[0xc] = -(auVar53[0xc] == auVar49[4]);
      auVar59[0xd] = -(auVar53[0xd] == auVar49[5]);
      auVar59[0xe] = -(auVar53[0xe] == auVar49[6]);
      auVar59[0xf] = -(auVar53[0xf] == auVar49[7]);
      uVar33 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar3 = 0;
        for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar34 = uVar3 + uVar9 & (ulonglong)ppppppfVar35[7];
        if (pppppppfVar19 == (float *******)pppppfVar37[uVar34 * -2 + -2]) {
          uVar9 = (ulonglong)pppppfVar37[uVar34 * -2 + -1] & 0xffffffff;
          if (uVar9 == 0) goto LAB_140bc3668;
          lVar24 = ((longlong *)param_1[5])[1];
          uVar9 = uVar9 ^ 0xffffffff;
          if (((uVar9 < *(ulonglong *)(lVar24 + 0x10)) &&
              (piVar18 = (int *)(uVar9 * 0x18 + *(longlong *)(lVar24 + 8)),
              piVar18[4] == (int)((ulonglong)pppppfVar37[uVar34 * -2 + -1] >> 0x20))) &&
             (*piVar18 != 0)) {
            lVar27 = *(longlong *)param_1[5];
            uVar9 = *(ulonglong *)(piVar18 + 2);
            if ((*(ulonglong *)(lVar27 + 0x38) <= (uVar9 & 0xffffffff)) ||
               ((*(ulonglong *)(*(longlong *)(lVar27 + 0x28) + (uVar9 >> 6 & 0x3ffffff) * 8) >>
                 (uVar9 & 0x3f) & 1) == 0)) goto LAB_140bc3679;
            puVar1 = (ulonglong *)(lVar27 + 0x110);
            if (*puVar1 < *(ulonglong *)
                           (*(longlong *)(lVar24 + 0x1a0) + 0x40 + (uVar9 >> 0x20) * 0x48)) {
              lVar27 = *(longlong *)(lVar24 + 0x1a0) + (uVar9 >> 0x20) * 0x48;
              uVar9 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + *puVar1 * 8);
              if (uVar9 == 0) goto LAB_140bc6d44;
              lVar27 = *(longlong *)(lVar27 + 0x18);
              lVar24 = *(longlong *)(lVar27 + 0x10 + ~uVar9 * 0x30);
            }
            else {
LAB_140bc6d44:
              lVar24 = 0;
            }
            lVar22 = (ulonglong)(uint)~piVar18[1] * 0x58;
            uVar46 = 0;
            bVar40 = *(float *)(lVar24 + 0x30 + lVar22) <= _DAT_142e3b1d8;
            pppppppfStack_168 =
                 (float *******)
                 CONCAT44(pppppppfStack_168._4_4_,
                          (int)CONCAT71((int7)((ulonglong)lVar27 >> 8),bVar40));
            if (((bVar40) || (fVar42 = *(float *)(lVar24 + 0x34 + lVar22), fVar42 != _DAT_142e36f28)
                ) || (NAN(fVar42) || NAN(_DAT_142e36f28))) goto LAB_140bc3685;
            pppppppfStack_3f0 = (float *******)(ulonglong)*(byte *)(lVar24 + lVar22 + 0x3c);
            pppppppfStack_3e8 = (float *******)((longlong)pppppppfStack_3f0 + 2);
            uVar46 = 1;
          }
          else {
LAB_140bc3679:
            uVar46 = 0;
          }
          pppppppfStack_168 = (float *******)((ulonglong)pppppppfStack_168 & 0xffffffff00000000);
          goto LAB_140bc3685;
        }
        uVar33 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar33);
      }
      auVar55[0] = -(auVar53[0] == -1);
      auVar55[1] = -(auVar53[1] == -1);
      auVar55[2] = -(auVar53[2] == -1);
      auVar55[3] = -(auVar53[3] == -1);
      auVar55[4] = -(auVar53[4] == -1);
      auVar55[5] = -(auVar53[5] == -1);
      auVar55[6] = -(auVar53[6] == -1);
      auVar55[7] = -(auVar53[7] == -1);
      auVar55[8] = -(auVar53[8] == -1);
      auVar55[9] = -(auVar53[9] == -1);
      auVar55[10] = -(auVar53[10] == -1);
      auVar55[0xb] = -(auVar53[0xb] == -1);
      auVar55[0xc] = -(auVar53[0xc] == -1);
      auVar55[0xd] = -(auVar53[0xd] == -1);
      auVar55[0xe] = -(auVar53[0xe] == -1);
      auVar55[0xf] = -(auVar53[0xf] == -1);
      if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar55 >> 0x3f,0) & 1) != 0) || (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar55 >> 0x4f,0) & 1) != 0) || (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (SUB161(auVar55 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar55 >> 0x6f,0) & 1) != 0) || (SUB161(auVar55 >> 0x77,0) & 1) != 0) ||
          auVar55[0xf] < '\0') break;
      uVar9 = uVar9 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    } while( true );
  }
LAB_140bc3668:
  uVar46 = 0;
  pppppppfStack_168 = (float *******)((ulonglong)pppppppfStack_168 & 0xffffffff00000000);
LAB_140bc3685:
  puStack_2c8 = param_1;
  if (*(char *)(pppppfVar38 + -10) == '\0') {
    pppppppfStack_310 = pppppppfVar10;
    pdb_1419acfa0(&pppppppfStack_278,pppppfVar38 + -0x44);
    uVar7 = (uint)puStack_248;
    auVar49 = ZEXT416((uint)puStack_248);
    pdb_140225b90(&uStack_158,uStack_268,0,4,0xc);
    if ((char)uStack_158 != '\0') {
      pdb_142dc7e2a((float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150),uStack_148);
LAB_140bc7562:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    auStack_300._8_8_ = 0;
    auStack_300._0_8_ = uStack_148;
    pppppppfStack_308 = (float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
    pdb_140225b90(&uStack_158,uStack_268,0,4,0xc);
    if ((int)uStack_158 == 1) {
      uStack_189 = 1;
      pdb_142dc7e2a((float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150),uStack_148);
      goto LAB_140bc7562;
    }
    pppppppfStack_230 = uStack_148;
    pppppppfStack_228 = (float *******)0x0;
    pppppppfStack_238 = (float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
    pdb_140225b90(&uStack_158,uStack_268,0,4,0xc);
    fVar65 = _UNK_143063434;
    fVar61 = _DAT_143063430;
    fVar43 = _DAT_14301cb98;
    uVar3 = _DAT_142e37820;
    fVar42 = _DAT_142e36f28;
    if ((int)uStack_158 == 1) {
      uStack_18a = 1;
      uStack_18b = 1;
      pdb_142dc7e2a((float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150),uStack_148);
      goto LAB_140bc7562;
    }
    pppppppfStack_210 = uStack_148;
    pppppppfStack_208 = (float *******)0x0;
    pppppppfStack_180 = uStack_270;
    pppppppfVar19 = uStack_268;
    if (pppppppfStack_250 < uStack_268) {
      pppppppfVar19 = pppppppfStack_250;
    }
    if (pppppfVar38[-0x42] < pppppppfVar19) {
      pppppppfVar19 = (float *******)pppppfVar38[-0x42];
    }
    uStack_218 = (float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
    for (pppppppfVar12 = (float *******)0x0; pppppppfVar12 < pppppppfVar19;
        pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + 1)) {
      ppppppfVar35 = pppppppfStack_180[(longlong)pppppppfVar12];
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      uVar8 = pdb_1419a9060(&pppppppfStack_278);
      uVar9 = (ulonglong)uVar8;
      if (uStack_268 <= (float *******)(uVar9 + 1)) {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2((float *******)(uVar9 + 1),uStack_268,&UNK_14335e510);
      }
      fVar47 = SUB84(uStack_270[uVar9 + 1],0) - SUB84(uStack_270[uVar9],0);
      fVar44 = (float)((ulonglong)uStack_270[uVar9 + 1] >> 0x20) -
               (float)((ulonglong)uStack_270[uVar9] >> 0x20);
      fVar66 = fVar42 / SQRT(fVar44 * fVar44 + fVar47 * fVar47);
      fVar47 = fVar66 * fVar47;
      fVar66 = fVar66 * fVar44;
      fVar44 = fVar42 / SQRT(fVar66 * fVar66 + fVar47 * fVar47);
      uStack_1c8._0_4_ = SUB84(ppppppfVar35,0) + fVar66 * (float)((uint)fVar44 ^ uVar3) * fVar61;
      uStack_1c8._4_4_ = (float)((ulonglong)ppppppfVar35 >> 0x20) + fVar47 * fVar44 * fVar65;
      if (((*(char *)((longlong)pppppfVar38 + -9) != '\x01') || (1 < *(uint *)(pppppfVar38 + -10)))
         || (*(float *)((longlong)pppppfVar38 + -0x14) <= 0.0)) {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430638d8);
      }
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      fVar47 = (float)pdb_14092ff30(pppppfVar38 + -0x55,(ulonglong)pppppppfStack_168 & 0xffffffff);
      if (*(char *)(pppppfVar38 + -0x34) == '\0') {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
        pdb_142d8e040();
        goto LAB_140bc7562;
      }
      fVar47 = fVar47 + fVar43;
      fVar66 = *(float *)((longlong)pppppfVar38 + -0x19c);
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      pdb_140df4540(&uStack_158,&uStack_1c8);
      uVar39 = auStack_300._8_8_;
      if ((float *******)auStack_300._8_8_ == pppppppfStack_308) {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
        pdb_142db7820(&pppppppfStack_308);
      }
      fVar44 = fVar66;
      if (fVar47 <= fVar66) {
        fVar44 = fVar47;
      }
      *(float *)(auStack_300._0_8_ + 8 + uVar39 * 0xc) = (float)uStack_150;
      *(float ********)(auStack_300._0_8_ + uVar39 * 0xc) = uStack_158;
      auStack_300._8_8_ = (undefined *)(uVar39 + 1);
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      pdb_140df4540(&uStack_158,&uStack_1c8,
                    ~-(uint)NAN(fVar47) & (uint)fVar44 | -(uint)NAN(fVar47) & (uint)fVar66);
      pppppppfVar10 = pppppppfStack_228;
      if (pppppppfStack_228 == pppppppfStack_238) {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
        pdb_142db7820(&pppppppfStack_238);
      }
      *(float *)((longlong)pppppppfStack_230 + ((longlong)pppppppfVar10 * 3 + 2) * 4) =
           (float)uStack_150;
      *(float ********)((longlong)pppppppfStack_230 + (longlong)pppppppfVar10 * 0xc) = uStack_158;
      pppppppfStack_228 = (float *******)((longlong)pppppppfVar10 + 1);
      if (*(char *)(pppppfVar38 + -0x34) == '\0') {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
        pdb_142d8e040();
        goto LAB_140bc7562;
      }
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      pdb_140df4540(&uStack_158,&uStack_1c8);
      pppppppfVar10 = pppppppfStack_208;
      if (pppppppfStack_208 == uStack_218) {
        acStack_fe[9] = 1;
        acStack_fe[8] = 1;
        acStack_fe[7] = 1;
        pdb_142db7820(&uStack_218);
      }
      *(float *)((longlong)pppppppfStack_210 + ((longlong)pppppppfVar10 * 3 + 2) * 4) =
           (float)uStack_150;
      *(float ********)((longlong)pppppppfStack_210 + (longlong)pppppppfVar10 * 0xc) = uStack_158;
      pppppppfStack_208 = (float *******)((longlong)pppppppfVar10 + 1);
    }
    if (pppppppfStack_228 == (float *******)0x0) {
LAB_140bc5256:
      uVar7 = auVar49._0_4_;
      ppppfVar21 = (float ****)0x0;
LAB_140bc5258:
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      uStack_158 = (float *******)pdb_140bc0fe0(8);
      *uStack_158 = (float ******)ppppfVar21;
      lVar24 = 1;
    }
    else {
      pppppppfStack_168 = (float *******)CONCAT44(pppppppfStack_168._4_4_,uVar7);
      ppppppfVar35 = *pppppppfStack_310;
      ppppfVar21 = (float ****)0x0;
      ppppfVar30 = (float ****)0x0;
      ppppfVar26 = (float ****)0x0;
      pppppppfVar19 = pppppppfStack_230;
      fVar42 = _DAT_142f6e3d8;
      fVar43 = _DAT_142e36f3c;
      do {
        fVar61 = *(float *)pppppppfVar19;
        fVar65 = *(float *)((longlong)pppppppfVar19 + 4);
        fVar47 = *(float *)(pppppppfVar19 + 1);
        fVar66 = fVar47 * *(float *)(ppppppfVar35 + 0x14) +
                 fVar65 * *(float *)(ppppppfVar35 + 0x12) + fVar61 * *(float *)(ppppppfVar35 + 0x10)
                 + *(float *)(ppppppfVar35 + 0x16);
        fVar44 = fVar47 * *(float *)((longlong)ppppppfVar35 + 0xa4) +
                 fVar65 * *(float *)((longlong)ppppppfVar35 + 0x94) +
                 fVar61 * *(float *)((longlong)ppppppfVar35 + 0x84) +
                 *(float *)((longlong)ppppppfVar35 + 0xb4);
        fVar61 = fVar47 * *(float *)(ppppppfVar35 + 0x15) +
                 fVar65 * *(float *)(ppppppfVar35 + 0x13) + fVar61 * *(float *)(ppppppfVar35 + 0x11)
                 + *(float *)(ppppppfVar35 + 0x17);
        fVar61 = (((fVar61 * *(float *)(ppppppfVar35 + 4) +
                    fVar44 * *(float *)(ppppppfVar35 + 2) + fVar66 * *(float *)ppppppfVar35 +
                   *(float *)(ppppppfVar35 + 6)) /
                  (fVar61 * *(float *)((longlong)ppppppfVar35 + 0x2c) +
                   fVar44 * *(float *)((longlong)ppppppfVar35 + 0x1c) +
                   fVar66 * *(float *)((longlong)ppppppfVar35 + 0xc) +
                  *(float *)((longlong)ppppppfVar35 + 0x3c))) * _DAT_142e36f50 + _DAT_142e36f50) *
                 (float)*(uint *)*pppppppfStack_318;
        if (fVar61 < fVar43) {
          ppppfVar21 = ppppfVar26;
        }
        if (fVar42 < fVar61) {
          ppppfVar30 = ppppfVar26;
        }
        ppppfVar26 = (float ****)((longlong)ppppfVar26 + 1);
        fVar65 = fVar61;
        if (fVar43 <= fVar61) {
          fVar65 = fVar43;
        }
        if (fVar61 <= fVar42) {
          fVar61 = fVar42;
        }
        pppppppfVar19 = (float *******)((longlong)pppppppfVar19 + 0xc);
        fVar42 = fVar61;
        fVar43 = fVar65;
      } while (pppppppfVar19 !=
               (float *******)((longlong)pppppppfStack_230 + (longlong)pppppppfStack_228 * 0xc));
      if (ppppfVar21 == ppppfVar30) goto LAB_140bc5258;
      acStack_fe[9] = 1;
      acStack_fe[8] = 1;
      acStack_fe[7] = 1;
      uStack_158 = (float *******)pdb_140bc0fe0(0x10);
      *uStack_158 = (float ******)ppppfVar21;
      uStack_158[1] = (float ******)ppppfVar30;
      lVar24 = 2;
      uVar7 = (uint)pppppppfStack_168;
    }
    uStack_140 = (code *)(uStack_158 + lVar24);
    uStack_150._0_4_ = SUB84(uStack_158,0);
    uStack_150._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
    uStack_148._0_4_ = (float)lVar24;
    uStack_148._4_4_ = 0.0;
    uStack_138 = (float *******)acStack_fe;
    uStack_130 = (code *)&pppppppfStack_308;
    pppppppfStack_128 = (float *******)&pppppppfStack_238;
    puStack_120 = &uStack_218;
    acStack_fe[9] = 1;
    acStack_fe[8] = 1;
    acStack_fe[7] = 1;
    pdb_1415e3040(&pppppppfStack_2e8,&uStack_158);
    pppppppfStack_168 = (float *******)puStack_2c8[3];
    ppppppfVar35 = *pppppppfStack_168;
    if (acStack_fe[0] == '\0') {
      pppppppfStack_180 = (float *******)puStack_2c8[4];
      uStack_148 = (float *******)((longlong)*pppppppfStack_180 + 0x2c);
      uStack_150._0_4_ = 6.009636;
      uStack_150._4_4_ = 1.4013e-45;
      uStack_140 = pdb_140f71a50;
      builtin_strncpy(acStack_fe + 2,"\x01\x01\x01\x01",4);
      uStack_158 = (float *******)&pppppppfStack_1d0;
      pdb_140905540(&uStack_1c8,&UNK_143063730,&uStack_158);
      pbStack_198 = (byte *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      pbStack_1e8 = (byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uVar39 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_148._0_4_ = SUB84(pppppppfStack_228,0);
      uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_228 >> 0x20);
      uStack_158 = pppppppfStack_238;
      uStack_150._0_4_ = SUB84(pppppppfStack_230,0);
      uStack_150._4_4_ = (float)((ulonglong)pppppppfStack_230 >> 0x20);
      uStack_140 = (code *)CONCAT44(fVar63,uVar7);
      uStack_138 = (float *******)CONCAT44(uStack_138._4_4_,param_4);
      uVar31 = pdb_140bcde40(&uStack_158);
      pdb_1409baea0(&uStack_1c8,pbStack_1e8,uVar39,uVar31,&UNK_143063758);
      pppppppfStack_128 = pppppppfStack_1a8;
      uStack_140 = (code *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uStack_138 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_130 = (code *)CONCAT44(afStack_1b0[1],afStack_1b0[0]);
      uStack_148._0_4_ = (float)uStack_1c8;
      uStack_148._4_4_ = uStack_1c8._4_4_;
      uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
      pdb_141a88350(ppppppfVar35,&uStack_158);
      if (pbStack_198 != (byte *)0x0) {
        pub_1406abac0(pbStack_1e8,(ulonglong)pbStack_198,1);
      }
      ppppppfVar35 = *pppppppfStack_168;
      uStack_148 = (float *******)((longlong)*pppppppfStack_180 + 0x2c);
      uStack_150._0_4_ = 6.009636;
      uStack_150._4_4_ = 1.4013e-45;
      uStack_140 = pdb_140f71a50;
      acStack_fe[5] = 1;
      acStack_fe[4] = 1;
      acStack_fe[3] = 1;
      acStack_fe[2] = 0;
      uStack_158 = (float *******)&pppppppfStack_1d0;
      pdb_140905540(&uStack_1c8,&UNK_143063788,&uStack_158);
      pbStack_198 = (byte *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      pbStack_1e8 = (byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uVar39 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_148._0_4_ = SUB84(pppppppfStack_208,0);
      uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_208 >> 0x20);
      uStack_158 = uStack_218;
      uStack_150._0_4_ = SUB84(pppppppfStack_210,0);
      uStack_150._4_4_ = (float)((ulonglong)pppppppfStack_210 >> 0x20);
      uStack_140 = (code *)CONCAT44(fVar63,uVar7);
      uStack_138 = (float *******)CONCAT44(uStack_138._4_4_,param_4);
      uVar31 = pdb_140bcde40(&uStack_158);
      pdb_1409baea0(&uStack_1c8,pbStack_1e8,uVar39,uVar31,&UNK_1430637a8);
      pppppppfStack_128 = pppppppfStack_1a8;
      uStack_140 = (code *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uStack_138 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_130 = (code *)CONCAT44(afStack_1b0[1],afStack_1b0[0]);
      uStack_148._0_4_ = (float)uStack_1c8;
      uStack_148._4_4_ = uStack_1c8._4_4_;
      uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
      uVar39 = pdb_141a88350(ppppppfVar35,&uStack_158);
      uVar46 = (undefined4)CONCAT71((int7)((ulonglong)uVar39 >> 8),1);
      if (pbStack_198 == (byte *)0x0) {
        auStack_298._0_4_ = uVar46;
      }
      else {
        auStack_298._0_4_ = uVar46;
        pub_1406abac0(pbStack_1e8,(ulonglong)pbStack_198,1);
      }
      auVar49._12_4_ = 0;
      auVar49._0_12_ = auStack_288._4_12_;
      auStack_288 = auVar49 << 0x20;
      pppppppfVar19 = uStack_2e0;
    }
    else {
      pppppppfStack_180 = (float *******)puStack_2c8[4];
      uStack_148 = (float *******)((longlong)*pppppppfStack_180 + 0x2c);
      uStack_150._0_4_ = 6.009636;
      uStack_150._4_4_ = 1.4013e-45;
      uStack_140 = pdb_140f71a50;
      builtin_strncpy(acStack_fe + 2,"\x01\x01\x01\x01",4);
      uStack_158 = (float *******)&pppppppfStack_1d0;
      pdb_140905540(&uStack_1c8,&UNK_1430637d8,&uStack_158);
      pbStack_198 = (byte *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      pbStack_1e8 = (byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uVar39 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_148._0_4_ = auStack_300._8_4_;
      uStack_148._4_4_ = auStack_300._12_4_;
      uStack_158 = pppppppfStack_308;
      uStack_150._0_4_ = auStack_300._0_4_;
      uStack_150._4_4_ = auStack_300._4_4_;
      uStack_140 = (code *)CONCAT44(fVar63,uVar7);
      uStack_138 = (float *******)CONCAT44(uStack_138._4_4_,param_4);
      uVar31 = pdb_140bcde40(&uStack_158);
      pdb_1409baea0(&uStack_1c8,pbStack_1e8,uVar39,uVar31,&UNK_143063800);
      pppppppfStack_128 = pppppppfStack_1a8;
      uStack_140 = (code *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uStack_138 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_130 = (code *)CONCAT44(afStack_1b0[1],afStack_1b0[0]);
      uStack_148._0_4_ = (float)uStack_1c8;
      uStack_148._4_4_ = uStack_1c8._4_4_;
      uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
      pdb_141a88350(ppppppfVar35,&uStack_158);
      if (pbStack_198 != (byte *)0x0) {
        pub_1406abac0(pbStack_1e8,(ulonglong)pbStack_198,1);
      }
      ppppppfVar35 = *pppppppfStack_168;
      uStack_148 = (float *******)((longlong)*pppppppfStack_180 + 0x2c);
      uStack_150._0_4_ = 6.009636;
      uStack_150._4_4_ = 1.4013e-45;
      uStack_140 = pdb_140f71a50;
      acStack_fe[5] = 1;
      acStack_fe[4] = 0;
      acStack_fe[3] = 1;
      acStack_fe[2] = 1;
      uStack_158 = (float *******)&pppppppfStack_1d0;
      pdb_140905540(&uStack_1c8,&UNK_143063830,&uStack_158);
      pbStack_198 = (byte *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      pbStack_1e8 = (byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uVar39 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_148._0_4_ = SUB84(pppppppfStack_228,0);
      uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_228 >> 0x20);
      uStack_158 = pppppppfStack_238;
      uStack_150._0_4_ = SUB84(pppppppfStack_230,0);
      uStack_150._4_4_ = (float)((ulonglong)pppppppfStack_230 >> 0x20);
      uStack_140 = (code *)CONCAT44(fVar63,uVar7);
      uStack_138 = (float *******)CONCAT44(uStack_138._4_4_,param_4);
      uVar31 = pdb_140bcde40(&uStack_158);
      pdb_1409baea0(&uStack_1c8,pbStack_1e8,uVar39,uVar31,&UNK_143063858);
      pppppppfStack_128 = pppppppfStack_1a8;
      uStack_140 = (code *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      uStack_138 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
      uStack_130 = (code *)CONCAT44(afStack_1b0[1],afStack_1b0[0]);
      uStack_148._0_4_ = (float)uStack_1c8;
      uStack_148._4_4_ = uStack_1c8._4_4_;
      uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
      uVar39 = pdb_141a88350(ppppppfVar35,&uStack_158);
      uVar46 = (undefined4)CONCAT71((int7)((ulonglong)uVar39 >> 8),1);
      if (pbStack_198 == (byte *)0x0) {
        auStack_288._0_4_ = uVar46;
      }
      else {
        auStack_288._0_4_ = uVar46;
        pub_1406abac0(pbStack_1e8,(ulonglong)pbStack_198,1);
      }
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auStack_298._4_12_;
      auStack_298 = auVar5 << 0x20;
      pppppppfVar19 = uStack_2e0;
    }
    pppppppfStack_318 = pppppppfStack_2e8;
    auStack_328._0_8_ = pppppppfVar19;
    pppppppfVar12 = pppppppfVar19 + (longlong)uStack_2d8 * 5;
    uStack_2e0 = pppppppfVar19;
    if (pppppppfVar19 != pppppppfVar19 + (longlong)uStack_2d8 * 5) {
      do {
        uStack_1c8 = &ppppppfStack_368;
        ppppppfStack_368 = *pppppppfVar19;
        fStack_350 = *(float *)(pppppppfVar19 + 2);
        ppppppfStack_358 = pppppppfVar19[1];
        uStack_340 = CONCAT44(uStack_340._4_4_,*(float *)((longlong)pppppppfVar19 + 0x1c));
        uStack_348 = *(undefined8 *)((longlong)pppppppfVar19 + 0x14);
        fVar42 = *(float *)(pppppppfVar19 + 4);
        ppppppfVar35 = *pppppppfStack_168;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        pdb_140f60760(&uStack_158,&UNK_143063888,&uStack_1c8);
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_1c0._0_4_ = (float)uStack_150;
        uStack_1c0._4_4_ = uStack_150._4_4_;
        uStack_1b8._0_4_ = (float)uStack_148;
        uStack_1b8._4_4_ = uStack_148._4_4_;
        uStack_138 = (float *******)((longlong)*pppppppfStack_180 + 0x2c);
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_148 = (float *******)&pppppppfStack_1d0;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        uStack_158 = (float *******)&uStack_1c8;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0),
                        CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
        }
        fVar61 = fStack_2a4;
        fVar43 = fStack_2a8;
        pbStack_1e8 = (byte *)CONCAT44(fStack_2b4,fStack_2b8);
        pbStack_198 = (byte *)CONCAT44(fStack_2ac,fStack_2b0);
        pppppppfVar10 = (float *******)CONCAT44(fStack_2a4,fStack_2a8);
        uStack_150._0_4_ = fStack_350;
        uStack_158 = (float *******)ppppppfStack_358;
        uStack_148._4_4_ = (float)(undefined4)uStack_340;
        uStack_150._4_4_ = (float)uStack_348;
        uStack_148._0_4_ = (float)((ulonglong)uStack_348 >> 0x20);
        pdb_14007ee60();
        pppppppfVar15 = (float *******)pub_1406abab0(0x38,8);
        if (pppppppfVar15 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        pppppppfVar19 = pppppppfVar19 + 5;
        *pppppppfVar15 = (float ******)0x1;
        pppppppfVar15[1] = (float ******)0x1;
        pppppppfVar15[2] = (float ******)uStack_158;
        pppppppfVar15[3] = (float ******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
        pppppppfVar15[4] = (float ******)CONCAT44(uStack_148._4_4_,(float)uStack_148);
        *(float *)(pppppppfVar15 + 5) = fVar42;
        *(float *)((longlong)pppppppfVar15 + 0x2c) = fVar63;
        *(float *)(pppppppfVar15 + 6) = param_4;
        uStack_150._0_4_ = 134.22131;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_158 = pppppppfVar15;
        if ((int)fVar61 < 0) {
          uVar39 = 0;
          pppppppfStack_178 = pppppppfVar15;
LAB_140bc5e7b:
          pdb_142dc7e2a(uVar39,pppppppfVar10);
          goto LAB_140bc7562;
        }
        pppppppfStack_310 = pppppppfVar12;
        if (pppppppfVar10 == (float *******)0x0) {
          pppppppfVar12 = (float *******)0x1;
        }
        else {
          pppppppfStack_178 = pppppppfVar15;
          pdb_14007ee60();
          uVar39 = 1;
          pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar10,1);
          if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc5e7b;
          pub_142e32760(pppppppfVar12,pbStack_198,pppppppfVar10);
          pppppppfVar15 = pppppppfStack_178;
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar43;
        uStack_148._4_4_ = fVar61;
        pppppppfStack_128 = (float *******)&UNK_1430638a8;
        uStack_140 = (code *)pppppppfVar12;
        uStack_138 = pppppppfVar10;
        uStack_130 = (code *)pppppppfVar15;
        pdb_141a88350(ppppppfVar35,&uStack_158);
        if (pbStack_1e8 != (byte *)0x0) {
          pub_1406abac0(pbStack_198,(ulonglong)pbStack_1e8,1);
        }
        pppppppfVar12 = pppppppfStack_310;
      } while (pppppppfVar19 != pppppppfStack_310);
    }
    if (pppppppfStack_318 != (float *******)0x0) {
      pub_1406abac0((byte *)auStack_328._0_8_,(longlong)pppppppfStack_318 * 0x28,8);
    }
    auVar49 = auStack_298;
    param_1 = puStack_2c8;
    if ((auStack_288[0] != '\0') && (uStack_218 != (float *******)0x0)) {
      pub_1406abac0((byte *)pppppppfStack_210,(longlong)uStack_218 * 0xc,4);
    }
    if ((auVar49[0] != '\0') && (pppppppfStack_308 != (float *******)0x0)) {
      pub_1406abac0((byte *)auStack_300._0_8_,(longlong)pppppppfStack_308 * 0xc,4);
    }
    pdb_14049c2a0(&pppppppfStack_278);
  }
  else {
    pppppppfStack_180 =
         (float *******)CONCAT44(pppppppfStack_180._4_4_,*(undefined4 *)(pppppfVar38 + -0x4f));
    lVar24 = (longlong)pppppfVar38 + -0x4c;
    pppppppfStack_308 = *(float ********)((longlong)pppppfVar38 + -0x4c);
    auVar53._12_4_ =
         (float)((ulonglong)*(undefined8 *)((longlong)pppppfVar38 + -0x3c) >> 0x20) + _UNK_14302c614
    ;
    auVar53._8_4_ = (float)*(undefined8 *)((longlong)pppppfVar38 + -0x3c) + _DAT_14302c610;
    auVar53._0_8_ = *(undefined8 *)((longlong)pppppfVar38 + -0x44);
    pppppppfStack_258 = (float *******)((longlong)pppppfVar38[-0x42] + -1);
    uStack_268._0_4_ = 0.0;
    uStack_268._4_4_ = 0.0;
    pppppppfStack_260 = (float *******)0x0;
    pppppppfStack_278 = (float *******)0x0;
    uStack_270._0_4_ = 0.0;
    uStack_270._4_4_ = 0.0;
    uStack_150 = (float *******)&pppppppfStack_250;
    uStack_158 = (float *******)&pppppppfStack_278;
    uStack_140 = (code *)0x4;
    uStack_138 = (float *******)0x1;
    auStack_300._0_16_ = auVar53;
    pppppppfVar19 = (float *******)0x0;
    while (pppppppfVar12 = uStack_138, uStack_148 = pppppppfVar19, uStack_138 != (float *******)0x0)
    {
      uStack_138 = (float *******)0x0;
      pppppppfVar19 = (float *******)pdb_140bc1020(&uStack_158);
      if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc38aa;
LAB_140bc37ae:
      fVar63 = (float)pdb_140df3e10(lVar24,pppppppfVar19);
      ppppfVar30 = pppppfVar38[-0x42];
      if (ppppfVar30 == (float ****)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143063b10);
      }
      if (ppppfVar30 == (float ****)0x1) {
        ppppppfVar35 = (float ******)0x0;
      }
      else {
        ppppfVar21 = pppppfVar38[-0x43];
        fVar42 = auVar53._0_4_;
        ppppppfVar35 = (float ******)0x0;
        ppppppfVar32 = (float ******)0x1;
        auVar53 = ZEXT416((uint)*(float *)ppppfVar21);
        ppppfVar26 = ppppfVar21;
        do {
          ppppfVar13 = (float ****)((longlong)ppppfVar26 + 0xc);
          fVar43 = auVar53._0_4_ - fVar63;
          fVar61 = *(float *)(ppppfVar21 + 1) - fVar42;
          fVar65 = *(float *)ppppfVar13 - fVar63;
          fVar47 = *(float *)((longlong)ppppfVar26 + 0x14) - fVar42;
          fVar43 = fVar43 * fVar43 + fVar61 * fVar61;
          fVar61 = fVar65 * fVar65 + fVar47 * fVar47;
          if ((int)((uint)((int)fVar61 >> 0x1f) >> 1 ^ (uint)fVar61) <
              (int)((uint)((int)fVar43 >> 0x1f) >> 1 ^ (uint)fVar43)) {
            ppppppfVar35 = ppppppfVar32;
            ppppfVar21 = ppppfVar13;
            auVar53 = ZEXT416((uint)*(float *)ppppfVar13);
          }
          bVar40 = ppppppfVar32 != (float ******)(((longlong)ppppfVar30 * 0xc - 0xcU) / 0xc);
          ppppppfVar32 = (float ******)((longlong)ppppppfVar32 + 1);
          ppppfVar26 = ppppfVar13;
        } while (bVar40);
      }
      *pppppppfVar12 = ppppppfVar35;
      pppppppfVar19 = uStack_148;
    }
    if (((float *******)uStack_140 != (float *******)0x0) &&
       (uStack_140 = (code *)((longlong)uStack_140 + -1), uStack_158 != uStack_150)) {
      pppppppfVar10 = uStack_158 + 1;
      uStack_148 = (float *******)((longlong)pppppppfVar19 + 1);
      bVar40 = uStack_158 != (float *******)0x0;
      pppppppfVar12 = uStack_158;
      uStack_158 = pppppppfVar10;
      if (bVar40) goto LAB_140bc37ae;
    }
LAB_140bc38aa:
    pbStack_198 = (byte *)puStack_2c8[3];
    pppppppfStack_178 = (float *******)puStack_2c8[4];
    pppppppfVar19 = (float *******)0x0;
    fStack_1f4 = param_4;
    do {
      pppppppfVar12 = (float *******)((longlong)pppppppfVar19 + 1);
      pppppppfStack_330 = pppppppfVar19;
      fVar42 = (float)pdb_140df3e10(lVar24,pppppppfVar19);
      fVar63 = auVar53._0_4_;
      fVar43 = (float)pdb_140df3e10(lVar24,pppppppfVar12);
      fVar65 = auVar53._0_4_;
      uVar39 = pdb_140df3e10(&pppppppfStack_308,pppppppfVar19);
      auVar49 = auVar53;
      pbStack_1e8 = (byte *)pdb_140df3e10(&pppppppfStack_308,pppppppfVar12);
      fVar61 = (float)pdb_140df0700(lVar24,pppppppfVar19);
      param_4 = (float)pdb_140df0700(lVar24,pppppppfVar12);
      if ((char)uVar46 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = CONCAT71((int7)((ulonglong)&pppppppfStack_308 >> 8),
                         pppppppfStack_3e8 == pppppppfStack_330 ||
                         pppppppfStack_3f0 == pppppppfStack_330);
      }
      ppppppfVar35 = (float ******)(&pppppppfStack_278)[(longlong)pppppppfVar19];
      ppppppfVar32 = (float ******)(&pppppppfStack_278)[(longlong)pppppppfVar12];
      uVar34 = (longlong)ppppppfVar32 - (longlong)ppppppfVar35;
      pppppppfStack_318 = pppppppfVar12;
      if (ppppppfVar35 <= ppppppfVar32) {
        if (uVar34 == 0xffffffffffffffff) {
          pdb_142dc8110(&UNK_143063d70,0x16,&UNK_143063df8);
LAB_140bc717f:
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
          pdb_142dc8420(ppppppfVar35,ppppppfVar32);
        }
        else {
          if (0xaaaaaaaaaaaaaa9 < uVar34) {
            pdb_142dc7e2a(0,pppppppfStack_310);
            goto LAB_140bc5256;
          }
          auStack_288._0_8_ = pppppfVar38;
          pppppppfVar19 = (float *******)((uVar34 * 4 + 4) * 3);
          pdb_14007ee60();
          pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,4);
          if (pppppppfVar12 == (float *******)0x0) {
            pppppppfStack_310 = pppppppfVar19;
            pdb_142dc7e2a(4,pppppppfVar19);
          }
          else {
            pppppppfVar15 = (float *******)(uVar34 + 1);
            pppppppfStack_228 = (float *******)0x0;
            pppppppfStack_238 = pppppppfVar15;
            pppppppfStack_230 = pppppppfVar12;
            pdb_14007ee60();
            pppppppfVar10 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,4);
            if (pppppppfVar10 != (float *******)0x0) {
              pppppppfStack_208 = (float *******)0x0;
              uStack_218 = pppppppfVar15;
              pppppppfStack_210 = pppppppfVar10;
              pdb_14007ee60();
              pppppppfVar10 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,4);
              if (pppppppfVar10 != (float *******)0x0) {
                pppppfVar38 = (float *****)auStack_288._0_8_;
                goto LAB_140bc39ee;
              }
              uStack_18d = 1;
              uStack_18e = 1;
              pdb_142dc7e2a(4,pppppppfVar19);
              goto LAB_140bc7562;
            }
          }
          uStack_18c = 1;
          pdb_142dc7e2a(4,pppppppfVar19);
        }
        goto LAB_140bc7562;
      }
      pppppppfStack_238 = (float *******)0x0;
      pppppppfStack_230 = (float *******)0x4;
      pppppppfStack_228 = (float *******)0x0;
      uStack_218 = (float *******)0x0;
      pppppppfStack_210 = (float *******)0x4;
      pppppppfStack_208 = (float *******)0x0;
      pppppppfVar12 = (float *******)0x4;
      pppppppfVar15 = (float *******)0x0;
      pppppppfVar10 = (float *******)0x4;
LAB_140bc39ee:
      uStack_2d8._0_4_ = 0.0;
      uStack_2d8._4_4_ = 0.0;
      uStack_2d8 = (float *******)0x0;
      ppppppfVar28 = ppppppfVar32;
      uStack_2e0 = pppppppfVar10;
      pppppppfStack_2e8 = pppppppfVar15;
      if (pppppfVar38[-0x42] <= ppppppfVar32) {
LAB_140bc713d:
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_142dc8420(ppppppfVar35,ppppppfVar28,pppppfVar38[-0x42],&UNK_1430638f0);
        goto LAB_140bc7562;
      }
      ppppppfVar28 = (float ******)((longlong)ppppppfVar32 + 1);
      if (ppppppfVar28 < ppppppfVar35) goto LAB_140bc713d;
      uStack_384 = uVar46;
      pppppppfStack_310 = pppppppfVar12;
      auStack_298 = auVar53;
      auStack_288 = auVar49;
      if (pppppfVar38[-0x38] <= ppppppfVar32) goto LAB_140bc717f;
      fVar43 = fVar43 - fVar42;
      fVar65 = fVar65 - fVar63;
      ppppfVar30 = pppppfVar38[-0x43];
      fVar47 = pbStack_1e8._0_4_;
      auStack_288._0_4_ = auVar49._0_4_;
      uVar48 = auStack_288._0_4_;
      auStack_328._8_4_ = (int)extraout_XMM0_Qb_00;
      auStack_328._0_8_ = uVar39;
      auStack_328._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auStack_298._0_4_ = auVar53._0_4_;
      uVar46 = auStack_298._0_4_;
      uStack_2d8 = (float *******)0x0;
      for (uVar34 = 0; uStack_2e0 = pppppppfVar10,
          uVar34 < ((ulonglong)(((longlong)ppppppfVar28 - (longlong)ppppppfVar35) * 0xc) >> 2) *
                   -0x5555555555555555; uVar34 = uVar34 + 1) {
        fVar44 = ((*(float *)((longlong)ppppfVar30 + uVar34 * 0xc + (longlong)ppppppfVar35 * 0xc + 8
                             ) - fVar63) * fVar65 +
                 (*(float *)((longlong)ppppfVar30 + uVar34 * 0xc + (longlong)ppppppfVar35 * 0xc) -
                 fVar42) * fVar43) / (fVar65 * fVar65 + fVar43 * fVar43);
        fVar66 = 0.0;
        if (0.0 <= fVar44) {
          fVar66 = fVar44;
        }
        fVar44 = _DAT_142e36f28;
        if (fVar66 <= _DAT_142e36f28) {
          fVar44 = fVar66;
        }
        uStack_1c8._0_4_ = fVar44 * fVar47 + (_DAT_142e36f28 - fVar44) * (float)uVar39;
        uStack_1c8._4_4_ = fVar44 * (float)uVar48 + (_DAT_142e36f28 - fVar44) * (float)uVar46;
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        uVar14 = pdb_1409301e0(pppppfVar38 + -0x55,(ulonglong)pppppppfStack_168 & 0xffffffff,
                               (fVar44 * (param_4 - fVar61) + fVar61) * pppppppfStack_180._0_4_,
                               uVar9 & 0xffffffff);
        if ((uVar14 & 1) == 0) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143063af8);
        }
        if (((char)uVar9 == '\0') && (*(char *)(pppppfVar38 + -0x34) == '\0')) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
          pdb_142d8e040();
          goto LAB_140bc7562;
        }
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_140df4540(&uStack_158,&uStack_1c8);
        pppppppfVar19 = pppppppfStack_228;
        if (pppppppfStack_228 == pppppppfStack_238) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
          pdb_142db7820(&pppppppfStack_238);
        }
        *(float *)((longlong)pppppppfStack_230 + ((longlong)pppppppfVar19 * 3 + 2) * 4) =
             (float)uStack_150;
        *(float ********)((longlong)pppppppfStack_230 + (longlong)pppppppfVar19 * 0xc) = uStack_158;
        pppppppfStack_228 = (float *******)((longlong)pppppppfVar19 + 1);
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_140df4540(&uStack_158,&uStack_1c8);
        pppppppfVar19 = pppppppfStack_208;
        if (pppppppfStack_208 == uStack_218) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
          pdb_142db7820(&uStack_218);
        }
        *(float *)((longlong)pppppppfStack_210 + ((longlong)pppppppfVar19 * 3 + 2) * 4) =
             (float)uStack_150;
        *(float ********)((longlong)pppppppfStack_210 + (longlong)pppppppfVar19 * 0xc) = uStack_158;
        pppppppfStack_208 = (float *******)((longlong)pppppppfVar19 + 1);
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_140df4540(&uStack_158,&uStack_1c8);
        pppppppfVar19 = uStack_2d8;
        pppppppfVar10 = uStack_2e0;
        if (uStack_2d8 == pppppppfStack_2e8) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
          pdb_142db7820(&pppppppfStack_2e8);
          pppppppfVar10 = uStack_2e0;
        }
        *(float *)((longlong)pppppppfVar10 + ((longlong)pppppppfVar19 * 3 + 2) * 4) =
             (float)uStack_150;
        *(float ********)((longlong)pppppppfVar10 + (longlong)pppppppfVar19 * 0xc) = uStack_158;
        uStack_2d8 = (float *******)((longlong)pppppppfVar19 + 1);
      }
      if (acStack_fe[0] == '\0') {
        if (pppppppfStack_208 == (float *******)0x0) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143063920);
        }
        pppppppfVar19 = pppppppfStack_210;
        if (uStack_2d8 == (float *******)0x0) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143063938);
        }
      }
      else {
        if (pppppppfStack_228 == (float *******)0x0) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143063950);
        }
        pppppppfVar10 = pppppppfStack_210;
        pppppppfVar19 = pppppppfStack_230;
        if (pppppppfStack_208 == (float *******)0x0) {
          acStack_fe[0xd] = 1;
          acStack_fe[0xc] = 1;
          acStack_fe[0xb] = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143063968);
        }
      }
      auVar53._4_12_ = auStack_298._4_12_;
      fVar63 = auStack_298._0_4_ - (float)auStack_288._0_4_;
      auVar53._0_4_ =
           fVar63 * fVar63 +
           ((float)auStack_328._0_4_ - pbStack_1e8._0_4_) *
           ((float)auStack_328._0_4_ - pbStack_1e8._0_4_);
      fVar44 = SQRT(auVar53._0_4_);
      fVar63 = *(float *)(pppppppfVar10 + 1);
      ppppppfVar35 = *pppppppfVar10;
      fVar47 = SUB84(ppppppfVar35,0);
      fVar61 = *(float *)((longlong)pppppppfVar19 + 4);
      fVar65 = *(float *)(pppppppfVar19 + 1);
      fVar42 = *(float *)(pppppppfVar19 + 1);
      fVar43 = *(float *)pppppppfVar19;
      fVar66 = fVar61 - *(float *)((longlong)pppppppfVar10 + 4);
      lVar24 = *(longlong *)pbStack_198;
      if (acStack_fe[0] == '\0') {
        uStack_1c8 = (float *******)&pppppppfStack_330;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_140f60760(&uStack_158,&UNK_143063980,&uStack_1c8);
        uStack_1c0 = uStack_150;
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_138 = (float *******)((longlong)*pppppppfStack_178 + 0x2c);
        uStack_158 = (float *******)&uStack_1c8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pppppppfVar19 = (float *******)&pppppppfStack_1d0;
        uStack_1b8 = uStack_148;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        uStack_148 = pppppppfVar19;
        fVar45 = fStack_1f4;
        auStack_328._0_8_ = lVar24;
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)uStack_1c0,CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
        }
        pppppppfVar10 = pppppppfStack_208;
        pppppppfVar12 = pppppppfStack_210;
        pppppppfVar19 = uStack_218;
        auVar49 = auStack_288;
        fVar64 = fStack_2a4;
        fVar50 = fStack_2a8;
        pbVar16 = (byte *)CONCAT44(fStack_2b4,fStack_2b8);
        auStack_288._4_4_ = fStack_2ac;
        auStack_288._0_4_ = fStack_2b0;
        auStack_288._8_8_ = auVar49._8_8_;
        uVar9 = CONCAT44(fStack_2a4,fStack_2a8);
        pdb_14007ee60();
        pppppppfVar15 = (float *******)pub_1406abab0(0x38,8);
        pbStack_1e8 = pbVar16;
        if (pppppppfVar15 == (float *******)0x0) {
          pppppppfStack_160 = pppppppfVar19;
          pppppppfStack_188 = pppppppfVar12;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar15 = (float ******)0x1;
        pppppppfVar15[1] = (float ******)0x1;
        pppppppfVar15[2] = (float ******)pppppppfVar19;
        pppppppfVar15[3] = (float ******)pppppppfVar12;
        pppppppfVar15[4] = (float ******)pppppppfVar10;
        *(float *)(pppppppfVar15 + 5) = fVar44;
        *(float *)((longlong)pppppppfVar15 + 0x2c) = param_5;
        *(float *)(pppppppfVar15 + 6) = fVar45;
        uStack_150._0_4_ = 134.2251;
        uStack_150._4_4_ = 1.4013e-45;
        auStack_298._0_8_ = pppppppfVar15;
        uStack_158 = pppppppfVar15;
        if ((int)fVar64 < 0) {
          uVar39 = 0;
LAB_140bc5e8e:
          pdb_142dc7e2a(uVar39,uVar9);
          goto LAB_140bc7562;
        }
        if (uVar9 == 0) {
          pbVar16 = (byte *)0x1;
          uVar31 = auStack_328._0_8_;
        }
        else {
          pdb_14007ee60();
          uVar39 = 1;
          pbVar16 = pub_1406abab0(uVar9,1);
          uVar31 = auStack_328._0_8_;
          if (pbVar16 == (byte *)0x0) goto LAB_140bc5e8e;
          pub_142e32760(pbVar16,auStack_288._0_8_,uVar9);
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar50;
        uStack_148._4_4_ = fVar64;
        uStack_130 = (code *)auStack_298._0_8_;
        pppppppfStack_128 = (float *******)&UNK_1430639a0;
        uStack_140 = (code *)pbVar16;
        uStack_138 = (float *******)uVar9;
        pdb_141a88350(uVar31,&uStack_158);
        if (pbStack_1e8 != (byte *)0x0) {
          pub_1406abac0((byte *)auStack_288._0_8_,(ulonglong)pbStack_1e8,1);
        }
        lVar24 = *(longlong *)pbStack_198;
        uStack_1c8 = (float *******)&pppppppfStack_330;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 0;
        pdb_140f60760(&uStack_158,&UNK_1430639d0,&uStack_1c8);
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_1c0._0_4_ = (float)uStack_150;
        uStack_1c0._4_4_ = uStack_150._4_4_;
        uStack_1b8._0_4_ = (float)uStack_148;
        uStack_1b8._4_4_ = uStack_148._4_4_;
        uStack_138 = (float *******)((longlong)*pppppppfStack_178 + 0x2c);
        uStack_158 = (float *******)&uStack_1c8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_148 = (float *******)&pppppppfStack_1d0;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        fVar45 = fStack_1f4;
        pppppppfVar19 = uStack_2d8;
        pppppppfVar12 = uStack_2e0;
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0),
                        CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
          pppppppfVar19 = uStack_2d8;
          pppppppfVar12 = uStack_2e0;
        }
        auVar49 = auStack_288;
        fVar64 = fStack_2a4;
        fVar50 = fStack_2a8;
        pppppppfVar15 = pppppppfStack_2e8;
        pbStack_1e8 = (byte *)CONCAT44(fStack_2b4,fStack_2b8);
        auStack_288._4_4_ = fStack_2ac;
        auStack_288._0_4_ = fStack_2b0;
        auStack_288._8_8_ = auVar49._8_8_;
        pppppppfVar10 = (float *******)CONCAT44(fStack_2a4,fStack_2a8);
        uStack_2d8 = pppppppfVar19;
        uStack_2e0 = pppppppfVar12;
        pdb_14007ee60();
        pppppppfVar17 = (float *******)pub_1406abab0(0x38,8);
        if (pppppppfVar17 == (float *******)0x0) {
          pppppppfStack_160 = pppppppfVar15;
          pppppppfStack_188 = pppppppfVar12;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar17 = (float ******)0x1;
        pppppppfVar17[1] = (float ******)0x1;
        pppppppfVar17[2] = (float ******)pppppppfVar15;
        pppppppfVar17[3] = (float ******)pppppppfVar12;
        pppppppfVar17[4] = (float ******)pppppppfVar19;
        *(float *)(pppppppfVar17 + 5) = fVar44;
        *(float *)((longlong)pppppppfVar17 + 0x2c) = param_5;
        *(float *)(pppppppfVar17 + 6) = fVar45;
        uStack_150._0_4_ = 134.22632;
        uStack_150._4_4_ = 1.4013e-45;
        auStack_298._0_8_ = pppppppfVar17;
        uStack_158 = pppppppfVar17;
        if ((int)fVar64 < 0) {
          pppppppfVar19 = (float *******)0x0;
LAB_140bc5f42:
          pdb_142dc7e2a(pppppppfVar19,pppppppfVar10);
          goto LAB_140bc7562;
        }
        if (pppppppfVar10 == (float *******)0x0) {
          pppppppfVar12 = (float *******)0x1;
          fVar44 = _DAT_143035f20;
        }
        else {
          pdb_14007ee60();
          pppppppfVar19 = (float *******)0x1;
          pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar10,1);
          fVar44 = _DAT_143035f20;
          if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc5f42;
          pub_142e32760(pppppppfVar12,auStack_288._0_8_,pppppppfVar10);
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar50;
        uStack_148._4_4_ = fVar64;
        uStack_130 = (code *)auStack_298._0_8_;
        pppppppfStack_128 = (float *******)&UNK_1430639f0;
        uStack_140 = (code *)pppppppfVar12;
        uStack_138 = pppppppfVar10;
        pdb_141a88350(lVar24,&uStack_158);
        uVar9 = CONCAT71((int7)((ulonglong)pppppppfVar19 >> 8),1);
        if (pbStack_1e8 != (byte *)0x0) {
          pub_1406abac0((byte *)auStack_288._0_8_,(ulonglong)pbStack_1e8,1);
        }
        uVar34 = 0;
      }
      else {
        uStack_1c8 = (float *******)&pppppppfStack_330;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 1;
        acStack_fe[0xb] = 1;
        pdb_140f60760(&uStack_158,&UNK_143063a20,&uStack_1c8);
        uStack_1c0 = uStack_150;
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_138 = (float *******)((longlong)*pppppppfStack_178 + 0x2c);
        uStack_158 = (float *******)&uStack_1c8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pppppppfVar19 = (float *******)&pppppppfStack_1d0;
        uStack_1b8 = uStack_148;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        uStack_148 = pppppppfVar19;
        fVar45 = fStack_1f4;
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)uStack_1c0,CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
        }
        pppppppfVar10 = pppppppfStack_228;
        pppppppfVar12 = pppppppfStack_230;
        pppppppfVar19 = pppppppfStack_238;
        auVar49 = auStack_288;
        fVar64 = fStack_2a4;
        fVar50 = fStack_2a8;
        pbVar16 = (byte *)CONCAT44(fStack_2b4,fStack_2b8);
        auStack_288._4_4_ = fStack_2ac;
        auStack_288._0_4_ = fStack_2b0;
        auStack_288._8_8_ = auVar49._8_8_;
        uVar9 = CONCAT44(fStack_2a4,fStack_2a8);
        pdb_14007ee60();
        pppppppfVar15 = (float *******)pub_1406abab0(0x38,8);
        pbStack_1e8 = pbVar16;
        if (pppppppfVar15 == (float *******)0x0) {
          pppppppfStack_160 = pppppppfVar19;
          pppppppfStack_188 = pppppppfVar12;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar15 = (float ******)0x1;
        pppppppfVar15[1] = (float ******)0x1;
        pppppppfVar15[2] = (float ******)pppppppfVar19;
        pppppppfVar15[3] = (float ******)pppppppfVar12;
        pppppppfVar15[4] = (float ******)pppppppfVar10;
        *(float *)(pppppppfVar15 + 5) = fVar44;
        *(float *)((longlong)pppppppfVar15 + 0x2c) = param_5;
        *(float *)(pppppppfVar15 + 6) = fVar45;
        uStack_150._0_4_ = 134.22766;
        uStack_150._4_4_ = 1.4013e-45;
        auStack_298._0_8_ = pppppppfVar15;
        uStack_158 = pppppppfVar15;
        if ((int)fVar64 < 0) {
          uVar39 = 0;
LAB_140bc5ea1:
          pdb_142dc7e2a(uVar39,uVar9);
          goto LAB_140bc7562;
        }
        if (uVar9 == 0) {
          pbVar16 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar39 = 1;
          pbVar16 = pub_1406abab0(uVar9,1);
          if (pbVar16 == (byte *)0x0) goto LAB_140bc5ea1;
          pub_142e32760(pbVar16,auStack_288._0_8_,uVar9);
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar50;
        uStack_148._4_4_ = fVar64;
        uStack_130 = (code *)auStack_298._0_8_;
        pppppppfStack_128 = (float *******)&UNK_143063a48;
        uStack_140 = (code *)pbVar16;
        uStack_138 = (float *******)uVar9;
        pdb_141a88350(lVar24,&uStack_158);
        if (pbStack_1e8 != (byte *)0x0) {
          pub_1406abac0((byte *)auStack_288._0_8_,(ulonglong)pbStack_1e8,1);
        }
        lVar24 = *(longlong *)pbStack_198;
        uStack_1c8 = (float *******)&pppppppfStack_330;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        acStack_fe[0xd] = 1;
        acStack_fe[0xc] = 0;
        acStack_fe[0xb] = 1;
        pdb_140f60760(&uStack_158,&UNK_143063a78,&uStack_1c8);
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_1c0._0_4_ = (float)uStack_150;
        uStack_1c0._4_4_ = uStack_150._4_4_;
        uStack_1b8._0_4_ = (float)uStack_148;
        uStack_1b8._4_4_ = uStack_148._4_4_;
        uStack_138 = (float *******)((longlong)*pppppppfStack_178 + 0x2c);
        uStack_158 = (float *******)&uStack_1c8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_148 = (float *******)&pppppppfStack_1d0;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        fVar45 = fStack_1f4;
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0),
                        CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
        }
        pppppppfVar15 = pppppppfStack_208;
        pppppppfVar10 = pppppppfStack_210;
        pppppppfVar12 = uStack_218;
        auVar49 = auStack_288;
        fVar64 = fStack_2a4;
        fVar50 = fStack_2a8;
        pbStack_1e8 = (byte *)CONCAT44(fStack_2b4,fStack_2b8);
        auStack_288._4_4_ = fStack_2ac;
        auStack_288._0_4_ = fStack_2b0;
        auStack_288._8_8_ = auVar49._8_8_;
        pppppppfVar19 = (float *******)CONCAT44(fStack_2a4,fStack_2a8);
        pdb_14007ee60();
        pppppppfVar17 = (float *******)pub_1406abab0(0x38,8);
        if (pppppppfVar17 == (float *******)0x0) {
          pppppppfStack_160 = pppppppfVar12;
          pppppppfStack_188 = pppppppfVar10;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar17 = (float ******)0x1;
        pppppppfVar17[1] = (float ******)0x1;
        pppppppfVar17[2] = (float ******)pppppppfVar12;
        pppppppfVar17[3] = (float ******)pppppppfVar10;
        pppppppfVar17[4] = (float ******)pppppppfVar15;
        *(float *)(pppppppfVar17 + 5) = fVar44;
        *(float *)((longlong)pppppppfVar17 + 0x2c) = param_5;
        *(float *)(pppppppfVar17 + 6) = fVar45;
        uStack_150._0_4_ = 134.22888;
        uStack_150._4_4_ = 1.4013e-45;
        auStack_298._0_8_ = pppppppfVar17;
        uStack_158 = pppppppfVar17;
        if ((int)fVar64 < 0) {
          uVar39 = 0;
LAB_140bc5f2f:
          pdb_142dc7e2a(uVar39,pppppppfVar19);
          goto LAB_140bc7562;
        }
        if (pppppppfVar19 == (float *******)0x0) {
          pppppppfVar12 = (float *******)0x1;
          fVar44 = _DAT_143035f20;
        }
        else {
          pdb_14007ee60();
          uVar39 = 1;
          pppppppfVar12 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
          fVar44 = _DAT_143035f20;
          if (pppppppfVar12 == (float *******)0x0) goto LAB_140bc5f2f;
          pub_142e32760(pppppppfVar12,auStack_288._0_8_,pppppppfVar19);
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar50;
        uStack_148._4_4_ = fVar64;
        uStack_130 = (code *)auStack_298._0_8_;
        pppppppfStack_128 = (float *******)&UNK_143063a98;
        uStack_140 = (code *)pppppppfVar12;
        uStack_138 = pppppppfVar19;
        pdb_141a88350(lVar24,&uStack_158);
        uVar23 = (undefined7)((ulonglong)lVar24 >> 8);
        if (pbStack_1e8 != (byte *)0x0) {
          pbVar16 = (byte *)auStack_288._0_8_;
          pub_1406abac0((byte *)auStack_288._0_8_,(ulonglong)pbStack_1e8,1);
          uVar23 = (undefined7)((ulonglong)pbVar16 >> 8);
        }
        uVar34 = CONCAT71(uVar23,1);
        uVar9 = 0;
      }
      fVar45 = fVar43 - fVar47;
      fVar42 = fVar42 - fVar63;
      fVar42 = SQRT(fVar42 * fVar42 + fVar66 * fVar66 + fVar45 * fVar45);
      if (fVar44 < fVar42) {
        lVar24 = *(longlong *)pbStack_198;
        uStack_1c8 = (float *******)&pppppppfStack_330;
        uStack_1c0._0_4_ = 7.7239075;
        uStack_1c0._4_4_ = 1.4013e-45;
        pbStack_1e8 = (byte *)CONCAT44(pbStack_1e8._4_4_,(int)uVar34);
        acStack_fe[0xd] = (char)uVar34;
        auStack_298._0_4_ = (int)uVar9;
        acStack_fe[0xc] = (char)uVar9;
        acStack_fe[0xb] = 0;
        pdb_140f60760(&uStack_158,&UNK_143063888,&uStack_1c8);
        uStack_1c8._0_4_ = SUB84(uStack_158,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
        uStack_1c0._0_4_ = (float)uStack_150;
        uStack_1c0._4_4_ = uStack_150._4_4_;
        uStack_1b8._0_4_ = (float)uStack_148;
        uStack_1b8._4_4_ = uStack_148._4_4_;
        uStack_138 = (float *******)((longlong)*pppppppfStack_178 + 0x2c);
        uStack_158 = (float *******)&uStack_1c8;
        uStack_150._0_4_ = 2.0009842;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_148 = (float *******)&pppppppfStack_1d0;
        uStack_140 = pdb_140c04ef0;
        uStack_130 = pdb_140f71a50;
        pdb_140f60760(&fStack_2b8,&UNK_14306367a,&uStack_158);
        fVar66 = fStack_1f4;
        if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0),
                        CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
        }
        auVar58 = auStack_288;
        fVar45 = fStack_2a4;
        fVar44 = fStack_2a8;
        auVar49 = auStack_328;
        auStack_288._4_4_ = fStack_2b4;
        auStack_288._0_4_ = fStack_2b8;
        auStack_288._8_8_ = auVar58._8_8_;
        auStack_328._4_4_ = fStack_2ac;
        auStack_328._0_4_ = fStack_2b0;
        auStack_328._8_8_ = auVar49._8_8_;
        pppppppfVar19 = (float *******)CONCAT44(fStack_2a4,fStack_2a8);
        pdb_14007ee60();
        pppppppfVar12 = (float *******)pub_1406abab0(0x38,8);
        if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x38);
        }
        *pppppppfVar12 = (float ******)0x1;
        pppppppfVar12[1] = (float ******)0x1;
        *(float *)(pppppppfVar12 + 2) = fVar43;
        *(float *)((longlong)pppppppfVar12 + 0x14) = fVar61;
        *(float *)(pppppppfVar12 + 3) = fVar65;
        *(float *)((longlong)pppppppfVar12 + 0x1c) = fVar47;
        *(float *)(pppppppfVar12 + 4) = (float)((ulonglong)ppppppfVar35 >> 0x20);
        *(float *)((longlong)pppppppfVar12 + 0x24) = fVar63;
        *(float *)(pppppppfVar12 + 5) = fVar42;
        *(float *)((longlong)pppppppfVar12 + 0x2c) = param_5;
        *(float *)(pppppppfVar12 + 6) = fVar66;
        uStack_150._0_4_ = 134.22961;
        uStack_150._4_4_ = 1.4013e-45;
        uStack_158 = pppppppfVar12;
        if ((int)fVar45 < 0) {
          uVar39 = 0;
          pppppppfStack_380 = pppppppfVar12;
LAB_140bc6d1b:
          pdb_142dc7e2a(uVar39,pppppppfVar19);
          goto LAB_140bc7562;
        }
        if (pppppppfVar19 == (float *******)0x0) {
          pppppppfVar10 = (float *******)0x1;
        }
        else {
          pppppppfStack_380 = pppppppfVar12;
          pdb_14007ee60();
          uVar39 = 1;
          pppppppfVar10 = (float *******)pub_1406abab0((ulonglong)pppppppfVar19,1);
          if (pppppppfVar10 == (float *******)0x0) goto LAB_140bc6d1b;
          pub_142e32760(pppppppfVar10,auStack_328._0_8_,pppppppfVar19);
          pppppppfVar12 = pppppppfStack_380;
        }
        uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
        uStack_148._0_4_ = fVar44;
        uStack_148._4_4_ = fVar45;
        pppppppfStack_128 = (float *******)&UNK_143063ac8;
        uStack_140 = (code *)pppppppfVar10;
        uStack_138 = pppppppfVar19;
        uStack_130 = (code *)pppppppfVar12;
        pdb_141a88350(lVar24,&uStack_158);
        uVar9 = (ulonglong)(uint)auStack_298._0_4_;
        uVar34 = (ulonglong)pbStack_1e8 & 0xffffffff;
        if (auStack_288._0_8_ != 0) {
          pub_1406abac0((byte *)auStack_328._0_8_,auStack_288._0_8_,1);
          uVar34 = (ulonglong)pbStack_1e8 & 0xffffffff;
        }
      }
      lVar24 = (longlong)pppppfVar38 + -0x4c;
      if (((char)uVar34 != '\0') && (pppppppfStack_2e8 != (float *******)0x0)) {
        pub_1406abac0((byte *)uStack_2e0,(longlong)pppppppfStack_2e8 * 0xc,4);
      }
      if (((char)uVar9 != '\0') && (pppppppfStack_238 != (float *******)0x0)) {
        pub_1406abac0((byte *)pppppppfStack_230,(longlong)pppppppfStack_238 * 0xc,4);
      }
      pppppppfVar19 = pppppppfStack_318;
      param_1 = puStack_2c8;
      param_4 = fStack_1f4;
      fVar63 = param_5;
      uVar46 = uStack_384;
    } while (pppppppfStack_318 < (float *******)0x4);
  }
  cVar36 = (char)pppppppfStack_160;
LAB_140bc5cea:
  pppppppfVar19 = pppppppfStack_1d0;
  pfVar29 = &fStack_2ac;
  if ((byte)(cVar36 - 1U) < 3) {
    return;
  }
  ppppppfVar35 = *pppppppfStack_188;
  uStack_158 = pppppppfStack_1d0;
  if (ppppppfVar35[9] == (float *****)0x0) {
    return;
  }
  uVar9 = pdb_1400af0a0(ppppppfVar35 + 10,&uStack_158);
  pppppfVar37 = ppppppfVar35[6];
  bVar41 = (byte)(uVar9 >> 0x39);
  auVar49 = ZEXT216(CONCAT11(bVar41,bVar41));
  auVar49 = pshuflw(auVar49,auVar49,0);
  lVar24 = 0;
  do {
    uVar9 = uVar9 & (ulonglong)ppppppfVar35[7];
    auVar53 = *(undefined1 (*) [16])((longlong)pppppfVar37 + uVar9);
    auVar60[0] = -(auVar53[0] == auVar49[0]);
    auVar60[1] = -(auVar53[1] == auVar49[1]);
    auVar60[2] = -(auVar53[2] == auVar49[2]);
    auVar60[3] = -(auVar53[3] == auVar49[3]);
    auVar60[4] = -(auVar53[4] == auVar49[4]);
    auVar60[5] = -(auVar53[5] == auVar49[5]);
    auVar60[6] = -(auVar53[6] == auVar49[6]);
    auVar60[7] = -(auVar53[7] == auVar49[7]);
    auVar60[8] = -(auVar53[8] == auVar49[0]);
    auVar60[9] = -(auVar53[9] == auVar49[1]);
    auVar60[10] = -(auVar53[10] == auVar49[2]);
    auVar60[0xb] = -(auVar53[0xb] == auVar49[3]);
    auVar60[0xc] = -(auVar53[0xc] == auVar49[4]);
    auVar60[0xd] = -(auVar53[0xd] == auVar49[5]);
    auVar60[0xe] = -(auVar53[0xe] == auVar49[6]);
    auVar60[0xf] = -(auVar53[0xf] == auVar49[7]);
    uVar33 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
             (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
    uVar7 = (uint)uVar33;
    while (uVar33 != 0) {
      uVar3 = 0;
      for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar34 = uVar3 + uVar9 & (ulonglong)ppppppfVar35[7];
      if (pppppppfVar19 == (float *******)pppppfVar37[uVar34 * -2 + -2]) {
        uVar9 = (ulonglong)pppppfVar37[uVar34 * -2 + -1] & 0xffffffff;
        if (uVar9 == 0) {
          return;
        }
        lVar24 = ((longlong *)param_1[5])[1];
        uVar9 = uVar9 ^ 0xffffffff;
        if (*(ulonglong *)(lVar24 + 0x10) <= uVar9) {
          return;
        }
        piVar18 = (int *)(uVar9 * 0x18 + *(longlong *)(lVar24 + 8));
        if (piVar18[4] != (int)((ulonglong)pppppfVar37[uVar34 * -2 + -1] >> 0x20)) {
          return;
        }
        if (*piVar18 == 0) {
          return;
        }
        lVar27 = *(longlong *)param_1[5];
        uVar9 = *(ulonglong *)(piVar18 + 2);
        if (*(ulonglong *)(lVar27 + 0x38) <= (uVar9 & 0xffffffff)) {
          return;
        }
        if ((*(ulonglong *)(*(longlong *)(lVar27 + 0x28) + (uVar9 >> 6 & 0x3ffffff) * 8) >>
             (uVar9 & 0x3f) & 1) == 0) {
          return;
        }
        if (*(ulonglong *)(lVar27 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar24 + 0x1a0) + 0x40 + (uVar9 >> 0x20) * 0x48)) {
          lVar24 = *(longlong *)(lVar24 + 0x1a0) + (uVar9 >> 0x20) * 0x48;
          uVar9 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lVar27 + 0x110) * 8);
          if (uVar9 == 0) goto LAB_140bc5eb2;
          pppppppfStack_160 = *(float ********)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar9 * 0x30)
          ;
        }
        else {
LAB_140bc5eb2:
          pppppppfStack_160 = (float *******)0x0;
        }
        if (1 < *(uint *)(pppppfVar38 + -10)) {
          return;
        }
        uVar7 = piVar18[1];
        pppppppfStack_2e8 = (float *******)pppppfVar38[-10];
        uStack_2d8._0_4_ =
             (float)((ulonglong)*(undefined8 *)((longlong)pppppfVar38 + -0x44) >> 0x20);
        uStack_2d8._4_4_ = (float)*(undefined8 *)((longlong)pppppfVar38 + -0x3c);
        fStack_2d0 = (float)((ulonglong)*(undefined8 *)((longlong)pppppfVar38 + -0x3c) >> 0x20);
        uStack_2e0._0_4_ = SUB84(pppppfVar38[-9],0);
        uStack_2e0._4_4_ = (float)((ulonglong)pppppfVar38[-9] >> 0x20);
        fStack_2b8 = SUB84(pppppppfStack_2e8,0);
        fStack_2b4 = (float)((ulonglong)pppppppfStack_2e8 >> 0x20);
        fStack_2ac = uStack_2e0._4_4_;
        fStack_2a8 = (float)uStack_2d8;
        fVar42 = _DAT_142f61030;
        fStack_2a4 = uStack_2d8._4_4_;
        if (fStack_2b8 == 1.4013e-45) {
          fStack_2a4 = uStack_2d8._4_4_ + _DAT_14302c60c;
          pfVar29 = afStack_2a0;
          fVar42 = _DAT_14302c60c;
        }
        afStack_2a0[0] = fStack_2d0;
        *pfVar29 = fVar42 + *pfVar29;
        fStack_2b0 = (float)uStack_2e0;
        if ((char)pppppppfStack_1f0 == '\0') {
          pdb_140a85190(&uStack_158,&fStack_2b8);
          pppppppfStack_278 = (float *******)CONCAT44(uStack_150._4_4_,(float)uStack_150);
          uStack_270 = pppppppfStack_278 + (longlong)uStack_148;
          uStack_268._0_4_ = SUB84(pppppppfStack_2c0,0);
          uStack_268._4_4_ = (float)((ulonglong)pppppppfStack_2c0 >> 0x20);
          pdb_1415ec580(&uStack_1c8,&pppppppfStack_278);
          uStack_169 = 1;
          pdb_14049c2a0(&uStack_158);
          uStack_169 = 1;
          uVar46 = pdb_140a85220(&fStack_2b8);
          pppppppfStack_2c0 = *(float ********)param_1[3];
          uStack_148 = (float *******)(*(longlong *)param_1[4] + 0x2c);
          uStack_150._0_4_ = 6.009636;
          uStack_150._4_4_ = 1.4013e-45;
          uStack_140 = pdb_140f71a50;
          uStack_169 = 1;
          uStack_158 = (float *******)&pppppppfStack_1d0;
          pdb_140f60760(&pppppppfStack_278,&UNK_1430635a8,&uStack_158);
          pppppppfVar19 = uStack_270;
          pppppppfStack_188 = pppppppfStack_278;
          pppppppfStack_1f0 = (float *******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
          uVar39 = CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
          uVar31 = CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
          uVar4 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
          puStack_2c8 = param_1;
          pdb_14007ee60();
          pbVar16 = pub_1406abab0(0x38,8);
          pppppppfStack_168 = pppppppfVar19;
          if (pbVar16 == (byte *)0x0) {
            pppppppfStack_2c0 = (float *******)uVar31;
            pppppppfStack_160 = (float *******)uVar39;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x38);
          }
          pbVar16[0] = 1;
          pbVar16[1] = 0;
          pbVar16[2] = 0;
          pbVar16[3] = 0;
          pbVar16[4] = 0;
          pbVar16[5] = 0;
          pbVar16[6] = 0;
          pbVar16[7] = 0;
          pbVar16[8] = 1;
          pbVar16[9] = 0;
          pbVar16[10] = 0;
          pbVar16[0xb] = 0;
          pbVar16[0xc] = 0;
          pbVar16[0xd] = 0;
          pbVar16[0xe] = 0;
          pbVar16[0xf] = 0;
          *(undefined8 *)(pbVar16 + 0x10) = uVar39;
          *(undefined8 *)(pbVar16 + 0x18) = uVar31;
          *(undefined8 *)(pbVar16 + 0x20) = uVar4;
          *(undefined4 *)(pbVar16 + 0x28) = uVar46;
          *(float *)(pbVar16 + 0x2c) = fVar63;
          *(float *)(pbVar16 + 0x30) = param_4;
          pdb_1409baea0(&pppppppfStack_278,pppppppfVar19,pppppppfStack_1f0,pbVar16,&UNK_143063b28);
          pppppppfStack_128 = pppppppfStack_258;
          uStack_140 = (code *)uStack_270;
          uStack_138 = (float *******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
          uStack_130 = (code *)pppppppfStack_260;
          uStack_148._0_4_ = SUB84(pppppppfStack_278,0);
          uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_278 >> 0x20);
          uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
          pdb_141a88350(pppppppfStack_2c0,&uStack_158);
          param_1 = puStack_2c8;
          if (pppppppfStack_188 != (float *******)0x0) {
            pub_1406abac0((byte *)pppppppfStack_168,(ulonglong)pppppppfStack_188,1);
          }
        }
        auVar49 = auStack_300._0_16_;
        pppppppfVar19 = pppppppfStack_160 + (ulonglong)~uVar7 * 0xb;
        fStack_1f4 = param_4;
        if (((uint)fStack_2b8 & 1) == 0) {
          pppppppfStack_308 = (float *******)CONCAT44(fStack_2b0,fStack_2b4);
          auStack_300._4_4_ = fStack_2a8;
          auStack_300._0_4_ = fStack_2ac;
          auStack_300._8_8_ = auVar49._8_8_;
          pdb_140bcc870(&uStack_158,&puStack_420,&pppppppfStack_308);
          fVar61 = _DAT_142e3b1d8;
          fVar42 = _DAT_142e3798c;
          fVar63 = _DAT_142e36f28;
          fStack_3c8 = (float)uStack_150;
          pppppppfStack_3d0 = uStack_158;
          fStack_3c4 = uStack_150._4_4_;
          pppppppfStack_1a8 = uStack_148;
          uStack_1b8._0_4_ = SUB84(uStack_158,0);
          uStack_1b8._4_4_ = (float)((ulonglong)uStack_158 >> 0x20);
          afStack_1b0[0] = (float)uStack_150;
          afStack_1b0[1] = uStack_150._4_4_;
          pppppppfStack_168 = (float *******)param_1[4];
          lVar24 = 0;
          pppppppfStack_160 = pppppppfVar19;
          pppppppfStack_180 = (float *******)param_1[3];
          fVar43 = _DAT_142e37ad8;
          uStack_3c0 = uStack_148;
          goto LAB_140bc6812;
        }
        pppppppfVar12 = (float *******)CONCAT44(fStack_2b0,fStack_2b4);
        pppppppfVar10 = (float *******)CONCAT44(fStack_2a8,fStack_2ac);
        pdb_140b73b80(&uStack_158,pppppppfVar19);
        fVar63 = uStack_150._4_4_;
        if ((char)uStack_158 == '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14305b6be,0x28,&UNK_14305b988);
        }
        pdb_140df2970(&pppppppfStack_308);
        auStack_300._0_8_ = pppppppfVar10;
        pppppppfStack_308 = pppppppfVar12;
        pdb_140df2970(&pppppppfStack_238);
        fVar65 = _DAT_142e3b1d8;
        fVar43 = _DAT_142e3798c;
        fVar42 = _DAT_142e36f28;
        pbVar16 = (byte *)param_1[3];
        pppppppfStack_168 = (float *******)param_1[4];
        pppppfVar38 = (float *****)0x0;
        fVar61 = _DAT_142e37ad8;
        pppppppfStack_238 = pppppppfVar12;
        pppppppfStack_230 = pppppppfVar10;
        pbStack_1e8 = pbVar16;
        goto LAB_140bc6269;
      }
      uVar33 = (ushort)(uVar7 - 1) & (ushort)uVar7;
      uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar33);
    }
    auVar56[0] = -(auVar53[0] == -1);
    auVar56[1] = -(auVar53[1] == -1);
    auVar56[2] = -(auVar53[2] == -1);
    auVar56[3] = -(auVar53[3] == -1);
    auVar56[4] = -(auVar53[4] == -1);
    auVar56[5] = -(auVar53[5] == -1);
    auVar56[6] = -(auVar53[6] == -1);
    auVar56[7] = -(auVar53[7] == -1);
    auVar56[8] = -(auVar53[8] == -1);
    auVar56[9] = -(auVar53[9] == -1);
    auVar56[10] = -(auVar53[10] == -1);
    auVar56[0xb] = -(auVar53[0xb] == -1);
    auVar56[0xc] = -(auVar53[0xc] == -1);
    auVar56[0xd] = -(auVar53[0xd] == -1);
    auVar56[0xe] = -(auVar53[0xe] == -1);
    auVar56[0xf] = -(auVar53[0xf] == -1);
    if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') {
      return;
    }
    uVar9 = uVar9 + lVar24 + 0x10;
    lVar24 = lVar24 + 0x10;
  } while( true );
LAB_140bc6812:
  pppppppfVar12 = pppppppfStack_180;
  fStack_370 = afStack_1b0[lVar24 * 3];
  pppppfStack_378 = *(float ******)(afStack_1b0 + lVar24 * 3 + -2);
  uStack_158 = (float *******)CONCAT44(fStack_370,(int)pppppfStack_378);
  pdb_140df4540(&fStack_3a0,&uStack_158);
  fVar64 = fStack_398;
  fVar50 = fStack_39c;
  fVar45 = fStack_3a0;
  uVar9 = (ulonglong)(uint)((int)*(float *)(pppppppfVar19 + 1) * 8);
  fVar65 = *(float *)((longlong)pppppppfVar19 + uVar9 + 0xc);
  fVar47 = *(float *)((longlong)pppppppfVar19 + uVar9 + 0x10);
  fVar66 = *(float *)((longlong)pppppppfVar19 + 0x4c);
  fVar44 = *(float *)(pppppppfVar19 + 6);
  fVar62 = 0.0;
  if (fVar61 < fVar44) {
    if (SUB41(*(float *)(pppppppfVar19 + 1),0) == '\0') {
      fVar51 = (*(float *)((longlong)pppppppfVar19 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar62 = _DAT_142f57bc8;
    }
    else {
      fVar62 = *(float *)((longlong)pppppppfVar19 + 0x1c);
      fVar51 = *(float *)(pppppppfVar19 + 4);
      fVar57 = fVar51;
      if (fVar51 <= fVar62) {
        fVar57 = fVar62;
      }
      fVar51 = ((float)(~-(uint)NAN(fVar62) & (uint)fVar57 | -(uint)NAN(fVar62) & (uint)fVar51) +
               _DAT_14303c690) / _DAT_14303c698;
      fVar62 = _DAT_142f895fc;
    }
    fVar51 = fVar51 / fVar42;
    fVar57 = 0.0;
    if (0.0 <= fVar51) {
      fVar57 = fVar51;
    }
    fVar51 = fVar63;
    if (fVar57 <= fVar63) {
      fVar51 = fVar57;
    }
    fVar51 = (_DAT_142e3788c - (fVar51 + fVar51)) * fVar51 * fVar51;
    fVar62 = fVar51 * fVar43 + (fVar63 - fVar51) * fVar62;
    if (fVar62 < 0.0) {
      uStack_218 = (float *******)((ulonglong)uStack_218 & 0xffffffff00000000);
      pppppppfStack_278 = (float *******)CONCAT44(pppppppfStack_278._4_4_,fVar62);
      uStack_158 = (float *******)&uStack_218;
      goto LAB_140bc73d4;
    }
    fVar44 = fVar44 * fVar43 + (fVar63 - fVar44) * fVar42;
    fVar43 = 0.0;
    if (0.0 <= fVar44) {
      fVar43 = fVar44;
    }
    if (fVar43 <= fVar62) {
      fVar62 = fVar43;
    }
  }
  uStack_348 = CONCAT44(fStack_370,(int)pppppfStack_378);
  uStack_218 = (float *******)CONCAT44(fVar47,fVar65);
  pdb_140b772d0(&uStack_158,pppppppfVar19);
  uStack_270 = (float *******)&uStack_348;
  uStack_268 = (float *******)&uStack_218;
  pppppppfStack_258 = (float *******)0x0;
  pppppppfStack_250 = (float *******)0x5;
  pppppppfStack_278 = (float *******)&uStack_158;
  pppppppfStack_260 = pppppppfVar19;
  pdb_141600140(&pppppppfStack_238,&pppppppfStack_278);
  if (uStack_158 != (float *******)0x0) {
    pub_1406abac0((byte *)CONCAT44(uStack_150._4_4_,(float)uStack_150),(longlong)uStack_158 << 3,4);
  }
  if ((float *******)uStack_140 != (float *******)0x0) {
    pub_1406abac0((byte *)uStack_138,(longlong)uStack_140 << 2,4);
  }
  ppppppfVar35 = *pppppppfVar12;
  pppppppfStack_278 = (float *******)&pppppfStack_378;
  uStack_270._0_4_ = 7.6013107;
  uStack_270._4_4_ = 1.4013e-45;
  uStack_18f = 1;
  pdb_140f60760(&uStack_158,&UNK_143063b58,&pppppppfStack_278);
  pppppppfStack_278 = uStack_158;
  uStack_270._0_4_ = (float)uStack_150;
  uStack_270._4_4_ = uStack_150._4_4_;
  uStack_138 = (float *******)((longlong)*pppppppfStack_168 + 0x2c);
  uStack_150._0_4_ = 2.0009842;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_140 = pdb_140c04ef0;
  uStack_130 = pdb_140f71a50;
  uStack_158 = (float *******)&pppppppfStack_278;
  pppppppfVar19 = (float *******)&pppppppfStack_1d0;
  uStack_268 = uStack_148;
  pdb_140f60760(&uStack_218,&UNK_14306367a,&uStack_158);
  uStack_148 = pppppppfVar19;
  if (pppppppfStack_278 != (float *******)0x0) {
    pub_1406abac0((byte *)CONCAT44(uStack_270._4_4_,(float)uStack_270),(ulonglong)pppppppfStack_278,
                  1);
  }
  pppppppfVar15 = pppppppfStack_208;
  pppppppfVar10 = pppppppfStack_228;
  pppppppfVar12 = pppppppfStack_230;
  pppppppfVar19 = pppppppfStack_238;
  pppppppfStack_188 = uStack_218;
  pppppppfStack_2c0 = pppppppfStack_210;
  pdb_14007ee60();
  pppppppfVar17 = (float *******)pub_1406abab0(0x38,8);
  if (pppppppfVar17 == (float *******)0x0) {
    pppppppfStack_160 = pppppppfVar19;
    pppppppfStack_1f0 = pppppppfVar12;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x38);
  }
  lVar24 = lVar24 + 1;
  fVar45 = fVar45 - (fVar65 + fVar62 * 0.0);
  fVar50 = fVar50 - (fVar66 + fVar62);
  fVar64 = fVar64 - (fVar47 + fVar62 * 0.0);
  *pppppppfVar17 = (float ******)0x1;
  pppppppfVar17[1] = (float ******)0x1;
  pppppppfVar17[2] = (float ******)pppppppfVar19;
  pppppppfVar17[3] = (float ******)pppppppfVar12;
  pppppppfVar17[4] = (float ******)pppppppfVar10;
  *(float *)(pppppppfVar17 + 5) = SQRT(fVar64 * fVar64 + fVar50 * fVar50 + fVar45 * fVar45);
  *(float *)((longlong)pppppppfVar17 + 0x2c) = param_5;
  *(float *)(pppppppfVar17 + 6) = fStack_1f4;
  uStack_150._0_4_ = 134.23218;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_158 = pppppppfVar17;
  if ((longlong)pppppppfVar15 < 0) {
    uVar39 = 0;
    pppppppfStack_1f0 = pppppppfVar17;
LAB_140bc6ce9:
    pdb_142dc7e2a(uVar39,pppppppfVar15);
    goto LAB_140bc7562;
  }
  if (pppppppfVar15 == (float *******)0x0) {
    pppppppfVar19 = (float *******)0x1;
    fVar43 = _DAT_142e37ad8;
  }
  else {
    pppppppfStack_1f0 = pppppppfVar17;
    pdb_14007ee60();
    uVar39 = 1;
    pppppppfVar19 = (float *******)pub_1406abab0((ulonglong)pppppppfVar15,1);
    fVar43 = _DAT_142e37ad8;
    if (pppppppfVar19 == (float *******)0x0) goto LAB_140bc6ce9;
    pub_142e32760(pppppppfVar19,pppppppfStack_2c0,pppppppfVar15);
    pppppppfVar17 = pppppppfStack_1f0;
  }
  uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
  uStack_148._0_4_ = SUB84(pppppppfVar15,0);
  uStack_148._4_4_ = (float)((ulonglong)pppppppfVar15 >> 0x20);
  uStack_138 = pppppppfVar15;
  pppppppfStack_128 = (float *******)&UNK_143063b70;
  uStack_140 = (code *)pppppppfVar19;
  uStack_130 = (code *)pppppppfVar17;
  pdb_141a88350(ppppppfVar35,&uStack_158);
  pppppppfVar19 = pppppppfStack_160;
  if (pppppppfStack_188 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_2c0,(ulonglong)pppppppfStack_188,1);
  }
  if (lVar24 == 2) {
    return;
  }
  goto LAB_140bc6812;
LAB_140bc6269:
  if ((float *****)0x3 < pppppfVar38) {
    bVar41 = *(byte *)((longlong)pppppppfVar19 + 0x3c);
    uVar46 = pdb_140df3e10(&pppppppfStack_238,0);
    fVar43 = fVar63;
    uVar48 = pdb_140df3e10(&pppppppfStack_238,(bVar41 ^ 1) * 2 + 1);
    fVar42 = *(float *)((longlong)pppppppfVar19 + 0x4c);
    fVar61 = (float)pdb_140b77a00(pppppppfVar19);
    uVar39 = *(undefined8 *)pbVar16;
    uStack_148 = (float *******)((longlong)*pppppppfStack_168 + 0x2c);
    uStack_150._0_4_ = 6.009636;
    uStack_150._4_4_ = 1.4013e-45;
    uStack_140 = pdb_140f71a50;
    uStack_158 = (float *******)&pppppppfStack_1d0;
    pdb_140f60760(&uStack_1c8,&UNK_143063bd0,&uStack_158);
    pppppppfStack_160 = (float *******)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
    uVar31 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
    pdb_14007ee60();
    pbVar16 = pub_1406abab0(0x30,8);
    if (pbVar16 != (byte *)0x0) {
      pbVar16[0] = 1;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16[8] = 1;
      pbVar16[9] = 0;
      pbVar16[10] = 0;
      pbVar16[0xb] = 0;
      pbVar16[0xc] = 0;
      pbVar16[0xd] = 0;
      pbVar16[0xe] = 0;
      pbVar16[0xf] = 0;
      *(undefined4 *)(pbVar16 + 0x10) = uVar46;
      *(float *)(pbVar16 + 0x14) = fVar63;
      *(undefined4 *)(pbVar16 + 0x18) = uVar48;
      *(float *)(pbVar16 + 0x1c) = fVar43;
      *(float *)(pbVar16 + 0x20) = fVar42 + fVar61;
      *(float *)(pbVar16 + 0x24) = param_5;
      *(float *)(pbVar16 + 0x28) = fStack_1f4;
      pdb_1409baea0(&pppppppfStack_278,pppppppfStack_160,uVar31,pbVar16,&UNK_143063bf0);
      pppppppfStack_128 = pppppppfStack_258;
      uStack_140 = (code *)uStack_270;
      uStack_138 = uStack_268;
      uStack_130 = (code *)pppppppfStack_260;
      uStack_148._0_4_ = SUB84(pppppppfStack_278,0);
      uStack_148._4_4_ = (float)((ulonglong)pppppppfStack_278 >> 0x20);
      uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
      pdb_141a88350(uVar39,&uStack_158);
      if (CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8) != 0) {
        pub_1406abac0((byte *)pppppppfStack_160,CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8),1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pppppfStack_3f8 = pppppfVar38;
  uVar46 = pdb_140df3e10(&pppppppfStack_308,pppppfVar38);
  fVar66 = fVar63;
  uStack_3b0 = uVar46;
  fStack_3ac = fVar63;
  fVar45 = (float)pdb_140df3e10(&pppppppfStack_238,pppppfVar38);
  fStack_3b8 = fVar45;
  fStack_3b4 = fVar66;
  pdb_140df4540(&fStack_3dc,&uStack_3b0);
  fVar47 = *(float *)(pppppppfVar19 + 6);
  fVar44 = 0.0;
  if (fVar65 < fVar47) {
    if (*(float *)(pppppppfVar19 + 1) == 1.4013e-45) {
      fVar44 = *(float *)((longlong)pppppppfVar19 + 0x1c);
      fVar50 = *(float *)(pppppppfVar19 + 4);
      fVar64 = fVar50;
      if (fVar50 <= fVar44) {
        fVar64 = fVar44;
      }
      fVar50 = ((float)(~-(uint)NAN(fVar44) & (uint)fVar64 | -(uint)NAN(fVar44) & (uint)fVar50) +
               _DAT_14303c690) / _DAT_14303c698;
      fVar44 = _DAT_142f895fc;
    }
    else {
      fVar50 = (*(float *)((longlong)pppppppfVar19 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar44 = _DAT_142f57bc8;
    }
    fVar50 = fVar50 / fVar43;
    fVar64 = 0.0;
    if (0.0 <= fVar50) {
      fVar64 = fVar50;
    }
    fVar50 = fVar42;
    if (fVar64 <= fVar42) {
      fVar50 = fVar64;
    }
    fVar50 = (_DAT_142e3788c - (fVar50 + fVar50)) * fVar50 * fVar50;
    fVar44 = fVar50 * fVar61 + (fVar42 - fVar50) * fVar44;
    if (fVar44 < 0.0) {
      uStack_1c8._0_4_ = 0.0;
      pppppppfStack_278 = (float *******)CONCAT44(pppppppfStack_278._4_4_,fVar44);
      uStack_158 = (float *******)&uStack_1c8;
LAB_140bc73d4:
      uStack_148 = (float *******)&pppppppfStack_278;
      uStack_150._4_4_ = 1.4013e-45;
      uStack_150._0_4_ = 7.7194595;
      uStack_140 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14305bf5c,&uStack_158,&UNK_14305bff8);
    }
    fVar47 = fVar47 * fVar61 + (fVar42 - fVar47) * fVar43;
    fVar61 = 0.0;
    if (0.0 <= fVar47) {
      fVar61 = fVar47;
    }
    if (fVar61 <= fVar44) {
      fVar44 = fVar61;
    }
  }
  pdb_140df4540(&fStack_394,&fStack_3b8);
  fVar50 = fStack_3dc - fStack_394;
  fVar61 = fStack_3d8 - fStack_390;
  fVar47 = fStack_3d4 - fStack_38c;
  uStack_348 = CONCAT44(fVar63,uVar46);
  fVar63 = fVar44;
  uStack_1c8._0_4_ = fVar45;
  uStack_1c8._4_4_ = fVar66;
  pdb_140b772d0(&uStack_158,pppppppfVar19);
  uStack_270 = (float *******)&uStack_348;
  uStack_268 = (float *******)&uStack_1c8;
  pppppppfStack_258 = (float *******)0x0;
  pppppppfStack_250 = (float *******)0x5;
  pppppppfStack_278 = (float *******)&uStack_158;
  pppppppfStack_260 = pppppppfVar19;
  pdb_141600140(&uStack_218,&pppppppfStack_278);
  if (uStack_158 != (float *******)0x0) {
    pub_1406abac0((byte *)CONCAT44(uStack_150._4_4_,(float)uStack_150),(longlong)uStack_158 << 3,4);
  }
  if ((float *******)uStack_140 != (float *******)0x0) {
    pub_1406abac0((byte *)uStack_138,(longlong)uStack_140 << 2,4);
  }
  pppppppfVar12 = *(float ********)pbVar16;
  pppppppfStack_278 = (float *******)&pppppfStack_3f8;
  uStack_270._0_4_ = 7.7239075;
  uStack_270._4_4_ = 1.4013e-45;
  uStack_190 = 1;
  pdb_140f60760(&uStack_158,&UNK_143063c20,&pppppppfStack_278);
  pppppppfStack_278 = uStack_158;
  uStack_270._0_4_ = (float)uStack_150;
  uStack_270._4_4_ = uStack_150._4_4_;
  uStack_138 = (float *******)((longlong)*pppppppfStack_168 + 0x2c);
  uStack_150._0_4_ = 2.0009842;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_140 = pdb_140c04ef0;
  uStack_130 = pdb_140f71a50;
  uStack_158 = (float *******)&pppppppfStack_278;
  pppppppfVar10 = (float *******)&pppppppfStack_1d0;
  uStack_268 = uStack_148;
  pdb_140f60760(&uStack_1c8,&UNK_14306367a,&uStack_158);
  uStack_148 = pppppppfVar10;
  pppppppfStack_180 = pppppppfVar12;
  if (pppppppfStack_278 != (float *******)0x0) {
    pub_1406abac0((byte *)CONCAT44(uStack_270._4_4_,(float)uStack_270),(ulonglong)pppppppfStack_278,
                  1);
  }
  fVar44 = uStack_1b8._4_4_;
  fVar66 = (float)uStack_1b8;
  pppppppfVar17 = pppppppfStack_208;
  pppppppfVar15 = pppppppfStack_210;
  pppppppfVar10 = uStack_218;
  pppppppfStack_188 = (float *******)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
  pppppppfStack_2c0 = (float *******)CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
  pppppppfVar12 = (float *******)CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
  pdb_14007ee60();
  pppppppfVar11 = (float *******)pub_1406abab0(0x38,8);
  if (pppppppfVar11 == (float *******)0x0) {
    pppppppfStack_160 = pppppppfVar10;
    pppppppfStack_1f0 = pppppppfVar15;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x38);
  }
  pppppfVar38 = (float *****)((longlong)pppppfVar38 + 1);
  *pppppppfVar11 = (float ******)0x1;
  pppppppfVar11[1] = (float ******)0x1;
  pppppppfVar11[2] = (float ******)pppppppfVar10;
  pppppppfVar11[3] = (float ******)pppppppfVar15;
  pppppppfVar11[4] = (float ******)pppppppfVar17;
  *(float *)(pppppppfVar11 + 5) = SQRT(fVar47 * fVar47 + fVar61 * fVar61 + fVar50 * fVar50);
  *(float *)((longlong)pppppppfVar11 + 0x2c) = param_5;
  *(float *)(pppppppfVar11 + 6) = fStack_1f4;
  uStack_150._0_4_ = 134.23523;
  uStack_150._4_4_ = 1.4013e-45;
  uStack_158 = pppppppfVar11;
  if ((int)fVar44 < 0) {
    uVar39 = 0;
    pppppppfStack_1f0 = pppppppfVar11;
LAB_140bc6d04:
    pdb_142dc7e2a(uVar39,pppppppfVar12);
    goto LAB_140bc7562;
  }
  if (pppppppfVar12 == (float *******)0x0) {
    pppppppfVar15 = (float *******)0x1;
    pppppppfVar10 = pppppppfStack_180;
    fVar61 = _DAT_142e37ad8;
  }
  else {
    pppppppfStack_1f0 = pppppppfVar11;
    pdb_14007ee60();
    uVar39 = 1;
    pppppppfVar15 = (float *******)pub_1406abab0((ulonglong)pppppppfVar12,1);
    pppppppfVar10 = pppppppfStack_180;
    fVar61 = _DAT_142e37ad8;
    if (pppppppfVar15 == (float *******)0x0) goto LAB_140bc6d04;
    pub_142e32760(pppppppfVar15,pppppppfStack_2c0,pppppppfVar12);
    pppppppfVar11 = pppppppfStack_1f0;
  }
  uStack_150._0_4_ = (float)CONCAT31(uStack_150._1_3_,2);
  uStack_148._0_4_ = fVar66;
  uStack_148._4_4_ = fVar44;
  pppppppfStack_128 = (float *******)&UNK_143063c38;
  uStack_140 = (code *)pppppppfVar15;
  uStack_138 = pppppppfVar12;
  uStack_130 = (code *)pppppppfVar11;
  pdb_141a88350(pppppppfVar10,&uStack_158);
  pbVar16 = pbStack_1e8;
  if (pppppppfStack_188 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_2c0,(ulonglong)pppppppfStack_188,1);
  }
  goto LAB_140bc6269;
}

