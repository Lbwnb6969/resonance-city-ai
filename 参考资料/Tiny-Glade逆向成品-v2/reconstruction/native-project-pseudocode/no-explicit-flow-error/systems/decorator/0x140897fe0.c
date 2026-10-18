// VA 0x140897fe0, PDB extent 8636 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 8636 */

undefined8 *
pdb_140897fe0(undefined8 *param_1,longlong param_2,char *param_3,char *param_4,float param_5,
             float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
             undefined4 param_12,float param_13,undefined4 param_14)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined1 auVar45 [8];
  char cVar46;
  undefined8 **ppuVar47;
  undefined4 uVar48;
  uint uVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
  undefined8 **ppuVar53;
  bool bVar54;
  longlong lVar55;
  undefined8 **ppuVar56;
  byte *arg0;
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  ulonglong uVar60;
  longlong lVar61;
  undefined8 *******pppppppuVar62;
  ulonglong uVar63;
  undefined8 *******pppppppuVar64;
  ulonglong uVar65;
  undefined4 *puVar66;
  float *pfVar67;
  ulonglong uVar68;
  undefined8 *******pppppppuVar69;
  undefined8 *******pppppppuVar70;
  uint uVar71;
  uint uVar72;
  undefined4 extraout_XMM0_Da;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar87;
  uint uVar88;
  uint uVar89;
  undefined1 auVar86 [16];
  uint uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined4 auStack_324 [3];
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  ulonglong uStack_2f8;
  undefined8 *******pppppppuStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  float fStack_2b8;
  undefined4 uStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  float *pfStack_2a0;
  undefined8 *******pppppppuStack_298;
  float *pfStack_290;
  undefined4 *puStack_288;
  undefined8 *******pppppppuStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 ***pppuStack_258;
  undefined8 **ppuStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 *******pppppppuStack_228;
  longlong lStack_220;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 *puStack_208;
  undefined8 *******pppppppuStack_200;
  undefined1 auStack_1f8 [8];
  longlong lStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 *apuStack_1d8 [2];
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 **ppuStack_150;
  undefined8 ***pppuStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *******pppppppuStack_138;
  byte *pbStack_130;
  undefined8 *******pppppppuStack_128;
  float *pfStack_120;
  undefined8 *******pppppppuStack_118;
  byte *pbStack_110;
  undefined8 *******pppppppuStack_108;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar48 = pdb_14092f860(param_2);
  uStack_140 = uVar48;
  uStack_13c = extraout_XMM0_Da;
  fVar73 = (float)pdb_140dea7c0(&uStack_140);
  if (*(int *)(param_2 + 600) != 1) {
    if (*param_3 != '\x01') {
      param_1[4] = 0;
      param_1[5] = 4;
      param_1[6] = 0;
      param_1[7] = 0x8000000000000000;
      param_1[10] = 0x8000000000000000;
      puStack_208 = param_1;
LAB_140898317:
      puStack_208[0xd] = 0x8000000000000000;
      *puStack_208 = 0;
      return puStack_208;
    }
    pppppppuStack_118 = (undefined8 *******)0x0;
    pbStack_110 = (byte *)0x4;
    pppppppuStack_108 = (undefined8 *******)0x0;
    pppppppuStack_138 = (undefined8 *******)0x0;
    pbStack_130 = (byte *)0x4;
    pppppppuStack_128 = (undefined8 *******)0x0;
    fVar74 = _DAT_142e36f34;
    if (param_3[2] == '\0') {
      fVar74 = _DAT_142e36f28;
    }
    if (_DAT_142e37870 <= (float)(_DAT_142e377e0 & (uint)fVar73)) {
      puStack_208 = param_1;
      cStack_f1 = param_3[2];
      fVar75 = (float)pub_142e329c0();
      uVar60 = 0;
      if (0.0 <= fVar75) {
        uVar60 = (longlong)(fVar75 - _DAT_142e36f2c) & (longlong)fVar75 >> 0x3f | (longlong)fVar75;
      }
      uVar65 = 0xffffffffffffffff;
      if (fVar75 <= _DAT_142e36f30) {
        uVar65 = uVar60;
      }
      pppppppuVar69 = (undefined8 *******)(uVar65 + (uVar65 == 0));
      pppppppuVar70 = (undefined8 *******)((longlong)pppppppuVar69 + 1);
      if (pppppppuVar70 != (undefined8 *******)0x0) {
        pdb_142d7f0f0(&uStack_2a8,0,4,pppppppuVar70,4,8);
        if ((char)uStack_2a8 != '\0') {
          pdb_142dc7e2a(pfStack_2a0,pppppppuStack_298);
          goto LAB_140899e3e;
        }
        pbStack_110 = (byte *)pfStack_2a0;
        pppppppuStack_118 = pppppppuVar70;
      }
      fVar73 = (float)(~-(uint)NAN(fVar73) & (_DAT_142e37820 & (uint)fVar73 | (uint)DAT_142e3c640) |
                      _DAT_143009de0 & -(uint)NAN(fVar73));
      if (param_3[1] != '\0') {
        pdb_140dea610(&uStack_140);
      }
      param_1 = puStack_208;
      if (*param_4 != '\x01') {
        puStack_208[4] = 0;
        puStack_208[5] = 4;
        puStack_208[6] = 0;
        puStack_208[7] = 0x8000000000000000;
        puStack_208[10] = 0x8000000000000000;
        puStack_208[0xd] = 0x8000000000000000;
        *puStack_208 = 0;
        if (pppppppuStack_138 != (undefined8 *******)0x0) {
          pub_1406abac0(pbStack_130,(longlong)pppppppuStack_138 << 2,4);
        }
        if (pppppppuStack_118 == (undefined8 *******)0x0) {
          return param_1;
        }
        uVar60 = (longlong)pppppppuStack_118 << 3;
        arg0 = pbStack_110;
        goto LAB_140898b9b;
      }
      if (param_4[1] == '\x01') {
        pdb_140dea610(&uStack_140);
      }
      pfStack_120 = (float *)CONCAT44(pfStack_120._4_4_,(float)pppppppuVar69);
      fVar84 = (float)((uint)param_8 ^ _DAT_142e37820);
      fVar82 = _DAT_142e36f28 / SQRT(param_7 * param_7 + param_8 * param_8);
      fVar85 = (float)((uint)param_6 ^ _DAT_142e37820);
      fVar75 = _DAT_142e36f28 / SQRT(param_5 * param_5 + param_6 * param_6);
      uVar71 = (uint)((int)fVar82 - 1U < 0x7fffff ||
                     (int)ABS(fVar82) - 0x800000U < 0x7f000000 && -1 < (int)fVar82);
      uVar72 = (uint)((int)fVar75 - 1U < 0x7fffff ||
                     (int)ABS(fVar75) - 0x800000U < 0x7f000000 && -1 < (int)fVar75);
      uStack_318 = CONCAT44(fVar74,fVar74);
      uStack_310 = 0;
      for (pppppppuVar64 = (undefined8 *******)0x0; pppppppuVar62 = pppppppuStack_108,
          pppppppuVar64 < pppppppuVar70;
          pppppppuVar64 = (undefined8 *******)((longlong)pppppppuVar64 + 1)) {
        pdb_140dea7c0(&uStack_140);
        fVar74 = (float)pdb_140dea610(&uStack_140);
        fVar76 = (float)pdb_140de9fd0();
        pppppppuVar62 = pppppppuStack_128;
        if (pppppppuStack_128 == pppppppuStack_138) {
          pdb_142d89720(&pppppppuStack_138);
        }
        *(float *)(pbStack_130 + (longlong)pppppppuVar62 * 4) = fVar76;
        pppppppuStack_128 = (undefined8 *******)((longlong)pppppppuVar62 + 1);
        uStack_2a8 = (float *)CONCAT44(extraout_XMM0_Da,uVar48);
        uVar77 = pdb_140dea610(&uStack_2a8);
        uStack_2a8 = (float *)(ulonglong)uVar77;
        fVar78 = (float)pdb_140dea090(&uStack_2a8,param_2);
        fVar93 = (float)((int)(uVar72 << 0x1f) >> 0x1f & (uint)(fVar85 * fVar75)) * fVar73;
        fVar79 = (float)((int)(uVar72 << 0x1f) >> 0x1f & (uint)(param_5 * fVar75)) * fVar73;
        if ((pppppppuVar64 != (undefined8 *******)0x0) &&
           (fVar93 = (float)((int)(uVar71 << 0x1f) >> 0x1f & (uint)(fVar84 * fVar82)) * fVar73,
           fVar79 = (float)((int)(uVar71 << 0x1f) >> 0x1f & (uint)(param_7 * fVar82)) * fVar73,
           pppppppuVar64 != pppppppuVar69)) {
          fVar93 = fVar74;
          fVar79 = (float)pdb_140dea170(&uStack_2a8,param_2);
          fVar93 = (float)((uint)fVar93 ^ _DAT_142e37820);
        }
        pppppppuVar62 = pppppppuStack_108;
        fVar76 = fVar76 * _DAT_142e36f50;
        if (pppppppuStack_108 == pppppppuStack_118) {
          pdb_142db07d0(&pppppppuStack_118);
        }
        *(ulonglong *)(pbStack_110 + (longlong)pppppppuVar62 * 8) =
             CONCAT44(fVar74 + fVar76 * fVar79 * uStack_318._4_4_,
                      fVar78 + fVar76 * fVar93 * (float)uStack_318);
        pppppppuStack_108 = (undefined8 *******)((longlong)pppppppuVar62 + 1);
      }
      param_1 = puStack_208;
      if ((undefined8 *******)0x1 < pppppppuStack_108) {
        uVar60 = (longlong)pppppppuStack_108 * 8;
        pdb_14007ee60();
        pfVar50 = (float *)pub_1406abab0(uVar60,4);
        if (pfVar50 != (float *)0x0) {
          pub_142e32780(pfVar50,0,uVar60 - 8);
          uVar7 = uStack_318;
          (pfVar50 + (longlong)pppppppuVar62 * 2 + -2)[0] = 0.0;
          uVar32 = _UNK_142e3782c;
          uVar77 = _UNK_142e37828;
          uVar72 = _UNK_142e37824;
          uVar71 = _DAT_142e37820;
          fVar73 = _DAT_142e36f28;
          (pfVar50 + (longlong)pppppppuVar62 * 2 + -2)[1] = 0.0;
          uStack_2f8 = uVar60;
          pfStack_120 = pfVar50;
          if (pppppppuStack_108 < (undefined8 *******)0x2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(1,pppppppuStack_108,&UNK_1430134d0);
          }
          fVar74 = (float)*(undefined8 *)(pbStack_110 + 8) - (float)*(undefined8 *)pbStack_110;
          fVar75 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + 8) >> 0x20) -
                   (float)((ulonglong)*(undefined8 *)pbStack_110 >> 0x20);
          fVar84 = _DAT_142e36f28 / SQRT(fVar75 * fVar75 + fVar74 * fVar74);
          uVar49 = (uint)((int)fVar84 - 1U < 0x7fffff ||
                         (int)ABS(fVar84) - 0x800000U < 0x7f000000 && -1 < (int)fVar84);
          *(ulonglong *)pfVar50 =
               CONCAT44((int)(uVar49 << 0x1f) >> 0x1f,(int)(uVar49 << 0x1f) >> 0x1f) &
               CONCAT44(fVar84 * fVar75,fVar84 * fVar74);
          if (pppppppuVar62 <= (undefined8 *******)((longlong)pppppppuStack_108 - 1U)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((undefined8 *******)((longlong)pppppppuStack_108 - 1U),pppppppuVar62,
                          &UNK_1430134e8);
          }
          fVar74 = (float)*(undefined8 *)(pbStack_110 + (longlong)pppppppuStack_108 * 8 + -8) -
                   (float)*(undefined8 *)(pbStack_110 + (longlong)pppppppuStack_108 * 8 + -0x10);
          fVar75 = (float)((ulonglong)
                           *(undefined8 *)(pbStack_110 + (longlong)pppppppuStack_108 * 8 + -8) >>
                          0x20) -
                   (float)((ulonglong)
                           *(undefined8 *)(pbStack_110 + (longlong)pppppppuStack_108 * 8 + -0x10) >>
                          0x20);
          fVar84 = fVar73 / SQRT(fVar75 * fVar75 + fVar74 * fVar74);
          uVar49 = (uint)((int)fVar84 - 1U < 0x7fffff ||
                         (int)ABS(fVar84) - 0x800000U < 0x7f000000 && -1 < (int)fVar84);
          *(ulonglong *)(pfVar50 + (longlong)pppppppuStack_108 * 2 + -2) =
               CONCAT44((int)(uVar49 << 0x1f) >> 0x1f,(int)(uVar49 << 0x1f) >> 0x1f) &
               CONCAT44(fVar84 * fVar75,fVar84 * fVar74);
          pppppppuStack_200 = pppppppuVar62;
          pppppppuStack_280 = (undefined8 *******)0x2;
          fVar74 = _DAT_14300c294;
          fVar75 = _DAT_142e36f24;
          if (pppppppuStack_108 != (undefined8 *******)0x2) {
            fVar74 = (float)*(undefined8 *)(pbStack_110 + 0x10) - (float)*(undefined8 *)pbStack_110;
            fVar75 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + 0x10) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)pbStack_110 >> 0x20);
            fVar84 = fVar73 / SQRT(fVar75 * fVar75 + fVar74 * fVar74);
            uVar49 = (uint)((int)fVar84 - 1U < 0x7fffff ||
                           (int)ABS(fVar84) - 0x800000U < 0x7f000000 && -1 < (int)fVar84);
            *(ulonglong *)(pfVar50 + 2) =
                 CONCAT44((int)(uVar49 << 0x1f) >> 0x1f,(int)(uVar49 << 0x1f) >> 0x1f) &
                 CONCAT44(fVar84 * fVar75,fVar84 * fVar74);
            iVar44 = _UNK_14301326c;
            iVar43 = _UNK_143013268;
            iVar42 = _UNK_143013264;
            iVar41 = _DAT_143013260;
            iVar40 = _UNK_14301325c;
            iVar39 = _UNK_143013258;
            iVar38 = _UNK_143013254;
            iVar37 = _DAT_143013250;
            iVar36 = _UNK_14301324c;
            iVar35 = _UNK_143013248;
            iVar34 = _UNK_143013244;
            iVar33 = _DAT_143013240;
            auVar80 = _DAT_142e3c640;
            pppppppuStack_280 = (undefined8 *******)0x3;
            fVar74 = _DAT_14300c294;
            fVar75 = _DAT_142e36f24;
            if (pppppppuStack_108 != (undefined8 *******)0x3) {
              pfVar59 = (float *)(pbStack_110 + 8);
              pfVar51 = (float *)(pbStack_110 + 0x10);
              pfVar52 = (float *)(pbStack_110 + 0x18);
              pfVar58 = pfVar50 + 4;
              uVar68 = (longlong)pppppppuVar62 + 0x1ffffffffffffffeU & 0x1fffffffffffffff;
              uVar60 = (longlong)pppppppuStack_108 * 8 - 0x20U >> 3;
              uVar65 = uVar60;
              if (uVar68 < uVar60) {
                uVar65 = uVar68;
              }
              pfVar57 = pfVar52;
              pfVar67 = pfVar58;
              if (0xb < uVar65) {
                uVar63 = uVar60;
                if (uVar68 < uVar60) {
                  uVar63 = uVar68;
                }
                if ((((pfVar58 <= pfVar58 + uVar63 * 2) && (pfVar52 <= pfVar52 + uVar63 * 2)) &&
                    (pbStack_110 + 0x1c <= pbStack_110 + uVar63 * 8 + 0x1c)) &&
                   ((pfVar59 <= pfVar59 + uVar63 * 2 &&
                    (pbStack_110 + 0xc <= pbStack_110 + uVar63 * 8 + 0xc)))) {
                  if (uVar68 < uVar60) {
                    uVar60 = uVar68;
                  }
                  if ((pbStack_110 + uVar60 * 8 + 0x20 <= pfVar58) ||
                     (pfVar50 + uVar60 * 2 + 6 <= pfVar59)) {
                    uVar65 = uVar65 + 1;
                    uVar60 = 4;
                    if ((uVar65 & 3) != 0) {
                      uVar60 = (ulonglong)((uint)uVar65 & 3);
                    }
                    lVar55 = uVar65 - uVar60;
                    pfVar57 = pfVar52 + lVar55 * 2;
                    pfVar59 = pfVar59 + lVar55 * 2;
                    pfVar51 = pfVar51 + lVar55 * 2;
                    pfVar67 = pfVar58 + lVar55 * 2;
                    lVar61 = 0;
                    auVar31._4_4_ = _UNK_142e377e4;
                    auVar31._0_4_ = _DAT_142e377e0;
                    auVar31._8_8_ = _UNK_142e377e8;
                    do {
                      pfVar5 = (float *)(pbStack_110 + lVar61 * 8 + 8);
                      pfVar2 = pfVar52 + lVar61 * 2;
                      pfVar6 = (float *)(pbStack_110 + lVar61 * 8 + 0x28);
                      fVar85 = *pfVar6 - *pfVar2;
                      fVar93 = pfVar6[1] - pfVar2[1];
                      fVar78 = pfVar6[2] - pfVar2[2];
                      fVar91 = pfVar6[3] - pfVar2[3];
                      fVar74 = *pfVar2 - *pfVar5;
                      fVar75 = pfVar2[1] - pfVar5[1];
                      fVar84 = pfVar2[2] - pfVar5[2];
                      fVar82 = pfVar2[3] - pfVar5[3];
                      auVar86._0_4_ = fVar74 * fVar74 + fVar75 * fVar75;
                      auVar86._4_4_ = fVar84 * fVar84 + fVar82 * fVar82;
                      auVar86._8_4_ = fVar85 * fVar85 + fVar93 * fVar93;
                      auVar86._12_4_ = fVar78 * fVar78 + fVar91 * fVar91;
                      auVar86 = sqrtps(auVar86,auVar86);
                      auVar86 = divps(auVar80,auVar86);
                      fVar76 = auVar86._0_4_;
                      fVar79 = auVar86._4_4_;
                      fVar87 = auVar86._8_4_;
                      fVar92 = auVar86._12_4_;
                      auVar86 = auVar86 & auVar31;
                      uVar49 = -(uint)((iVar37 < (int)(auVar86._0_4_ - iVar33 ^ uVar71) ||
                                       (int)fVar76 < 0) && iVar41 < (int)((int)fVar76 - 1U ^ uVar71)
                                      );
                      uVar88 = -(uint)((iVar38 < (int)(auVar86._4_4_ - iVar34 ^ uVar72) ||
                                       (int)fVar79 < 0) && iVar42 < (int)((int)fVar79 - 1U ^ uVar72)
                                      );
                      uVar89 = -(uint)((iVar39 < (int)(auVar86._8_4_ - iVar35 ^ uVar77) ||
                                       (int)fVar87 < 0) && iVar43 < (int)((int)fVar87 - 1U ^ uVar77)
                                      );
                      uVar90 = -(uint)((iVar40 < (int)(auVar86._12_4_ - iVar36 ^ uVar32) ||
                                       (int)fVar92 < 0) && iVar44 < (int)((int)fVar92 - 1U ^ uVar32)
                                      );
                      pfVar2 = pfVar50 + lVar61 * 2 + 8;
                      *pfVar2 = (float)(~uVar89 & (uint)(fVar85 * fVar87));
                      pfVar2[1] = (float)(~uVar89 & (uint)(fVar87 * fVar93));
                      pfVar2[2] = (float)(~uVar90 & (uint)(fVar78 * fVar92));
                      pfVar2[3] = (float)(~uVar90 & (uint)(fVar92 * fVar91));
                      pfVar2 = pfVar58 + lVar61 * 2;
                      *pfVar2 = (float)(~uVar49 & (uint)(fVar74 * fVar76));
                      pfVar2[1] = (float)(~uVar49 & (uint)(fVar76 * fVar75));
                      pfVar2[2] = (float)(~uVar88 & (uint)(fVar84 * fVar79));
                      pfVar2[3] = (float)(~uVar88 & (uint)(fVar79 * fVar82));
                      lVar61 = lVar61 + 4;
                    } while (lVar55 != lVar61);
                  }
                }
              }
              do {
                pfVar52 = pfVar51;
                pppppppuStack_280 = pppppppuStack_108;
                fVar74 = _DAT_14300c294;
                fVar75 = _DAT_142e36f24;
                if (pfVar67 == pfVar50 + (longlong)pppppppuVar62 * 2) break;
                pfVar58 = pfVar57 + 2;
                fVar74 = (float)*(undefined8 *)pfVar57 - (float)*(undefined8 *)pfVar59;
                fVar75 = (float)((ulonglong)*(undefined8 *)pfVar57 >> 0x20) -
                         (float)((ulonglong)*(undefined8 *)pfVar59 >> 0x20);
                fVar84 = fVar73 / SQRT(fVar75 * fVar75 + fVar74 * fVar74);
                uVar72 = (uint)((int)fVar84 - 1U < 0x7fffff ||
                               (int)ABS(fVar84) - 0x800000U < 0x7f000000 && -1 < (int)fVar84);
                *(ulonglong *)pfVar67 =
                     CONCAT44((int)(uVar72 << 0x1f) >> 0x1f,(int)(uVar72 << 0x1f) >> 0x1f) &
                     CONCAT44(fVar84 * fVar75,fVar84 * fVar74);
                pfVar67 = pfVar67 + 2;
                pfVar51 = pfVar57;
                pfVar57 = pfVar58;
                pfVar59 = pfVar52;
                fVar74 = _DAT_14300c294;
                fVar75 = _DAT_142e36f24;
              } while (pfVar58 != (float *)(pbStack_110 + (longlong)pppppppuStack_108 * 8));
            }
          }
LAB_1408992a3:
          cVar46 = cStack_f1;
          pfStack_2a0 = (float *)(pbStack_110 + (longlong)pppppppuStack_280 * 8);
          pfStack_290 = pfStack_120 + (longlong)pppppppuVar62 * 2;
          if (pppppppuVar62 < pppppppuStack_280) {
            pppppppuStack_280 = pppppppuVar62;
          }
          pbStack_270 = pbStack_130 + (longlong)pppppppuStack_128 * 4;
          pppppppuStack_260 = pppppppuStack_128;
          if (pppppppuStack_280 <= pppppppuStack_128) {
            pppppppuStack_260 = pppppppuStack_280;
          }
          pppppppuStack_298 = (undefined8 *******)pfStack_120;
          puStack_288 = (undefined4 *)0x0;
          pbStack_278 = pbStack_130;
          pppppppuStack_268 = (undefined8 *******)0x0;
          pppuStack_258 = (undefined8 ***)0x0;
          pppppppuStack_228 = (undefined8 *******)0x0;
          lStack_220 = 0;
          uStack_2a8 = (float *)pbStack_110;
          ppuVar56 = ppuStack_170;
          ppuVar47 = ppuStack_168;
          do {
            ppuStack_168 = ppuVar47;
            ppuStack_170 = ppuVar56;
            if (lStack_220 == 0) {
              if (pppppppuStack_268 < pppppppuStack_260) {
                lVar55 = (longlong)puStack_288 + (longlong)pppppppuStack_268;
                ppuStack_1e8 = (undefined8 **)((longlong)pppppppuStack_298 + lVar55 * 2 * 4);
                ppuStack_1e0 = (undefined8 **)(pbStack_278 + (longlong)pppppppuStack_268 * 4);
                if (pppuStack_258 == (undefined8 ***)0x0) {
                  lStack_1f0 = (longlong)uStack_2a8 + lVar55 * 8;
                  auStack_1f8 = (undefined1  [8])0x1;
                  apuStack_1d8[0] = &uStack_2a8;
                  pppppppuStack_268 = (undefined8 *******)((longlong)pppppppuStack_268 + 1);
                  pdb_1414e3d00(&ppuStack_198,auStack_1f8);
                  ppuVar56 = ppuStack_178;
                  ppuStack_240 = ppuStack_198;
                  if (ppuStack_198 != (undefined8 **)0x0) {
                    ppuStack_198 = ppuStack_190;
                    ppuStack_190 = ppuStack_188;
                    ppuStack_178 = ppuStack_170;
                    ppuStack_188 = ppuStack_180;
                    ppuStack_180 = ppuVar56;
                    goto LAB_1408994be;
                  }
                }
                else {
                  ppuStack_198 = ppuStack_238;
                  ppuStack_190 = ppuStack_230;
                  pppppppuStack_268 = (undefined8 *******)((longlong)pppppppuStack_268 + 1);
                  ppuStack_188 = (undefined8 **)((longlong)uStack_2a8 + lVar55 * 8);
                  ppuStack_180 = ppuStack_1e8;
                  ppuStack_178 = ppuStack_1e0;
                  if (ppuStack_240 != (undefined8 **)0x0) {
LAB_1408994be:
                    ppuStack_2c0 = ppuStack_178;
                    ppuStack_2d0 = ppuStack_188;
                    ppuStack_2c8 = ppuStack_180;
                    ppuStack_2e0 = ppuStack_198;
                    ppuStack_2d8 = ppuStack_190;
                    pppppppuStack_2f0 = pppppppuStack_228;
                    ppuStack_2e8 = ppuStack_240;
                    pppuStack_258 = (undefined8 ***)ppuStack_240;
                    ppuStack_250 = ppuStack_198;
                    ppuStack_248 = ppuStack_190;
                    ppuStack_240 = ppuStack_188;
                    ppuStack_238 = ppuStack_180;
                    ppuStack_230 = ppuStack_178;
                    pppppppuStack_228 = (undefined8 *******)((longlong)pppppppuStack_228 + 1);
                    ppuStack_1c8 = ppuStack_198;
                    ppuStack_1c0 = ppuStack_190;
                    ppuStack_1b8 = ppuStack_188;
                    ppuStack_1b0 = ppuStack_180;
                    ppuStack_1a8 = ppuStack_178;
                    goto LAB_1408994fb;
                  }
                }
              }
LAB_140899a82:
              puStack_208[6] = pppppppuStack_108;
              puStack_208[4] = pppppppuStack_118;
              puStack_208[5] = pbStack_110;
              puStack_208[7] = pppppppuStack_200;
              puStack_208[8] = pfStack_120;
              puStack_208[9] = pppppppuVar62;
              puStack_208[10] = pppppppuStack_138;
              puStack_208[0xb] = pbStack_130;
              puStack_208[0xc] = pppppppuStack_128;
              goto LAB_140898317;
            }
            lStack_220 = 0;
            pdb_140897e10(&pppppppuStack_2f0,&uStack_2a8);
            if (ppuStack_2e8 == (undefined8 **)0x0) goto LAB_140899a82;
LAB_1408994fb:
            pppppppuVar69 = pppppppuStack_2f0;
            fVar82 = (float)((uint)*(float *)((longlong)ppuStack_2e0 + 4) ^ uVar71);
            fVar85 = (float)((uint)*(float *)((longlong)ppuStack_2c8 + 4) ^ uVar71);
            fVar76 = *(float *)ppuStack_2d8 * _DAT_142e36f50 * fVar74;
            fVar79 = *(float *)ppuStack_2c0 * _DAT_142e36f50 * fVar74;
            fVar78 = (float)uVar7;
            fVar87 = (float)((ulonglong)uVar7 >> 0x20);
            fVar93 = fVar76 * *(float *)ppuStack_2e0 * fVar87;
            puVar8 = *ppuStack_2e8;
            fVar84 = (float)((ulonglong)puVar8 >> 0x20);
            ppuStack_1e0 = (undefined8 **)
                           CONCAT44(fVar84 + fVar93,SUB84(puVar8,0) + fVar76 * fVar82 * fVar78);
            auVar12._4_8_ = puVar8;
            auVar12._0_4_ = fVar84 - fVar93;
            auVar80._0_8_ = auVar12._0_8_ << 0x20;
            auVar80._8_4_ = SUB84(puVar8,0) - fVar76 * fVar82 * fVar78;
            auVar80._12_4_ = fVar84 - fVar76 * *(float *)ppuStack_2e0 * fVar87;
            ppuStack_1e8 = auVar80._8_8_;
            fVar82 = fVar79 * *(float *)ppuStack_2c8 * fVar87;
            puVar8 = *ppuStack_2d0;
            fVar84 = (float)((ulonglong)puVar8 >> 0x20);
            auVar83._0_8_ = CONCAT44(fVar84 + fVar82,SUB84(puVar8,0) + fVar79 * fVar85 * fVar78);
            auVar13._4_8_ = puVar8;
            auVar13._0_4_ = fVar84 - fVar82;
            auVar81._0_8_ = auVar13._0_8_ << 0x20;
            auVar81._8_4_ = SUB84(puVar8,0) - fVar79 * fVar85 * fVar78;
            auVar81._12_4_ = fVar84 - fVar79 * *(float *)ppuStack_2c8 * fVar87;
            if (cVar46 == '\0') {
              lStack_1f0 = (longlong)ppuStack_1e8;
              auStack_1f8 = (undefined1  [8])ppuStack_1e0;
              ppuStack_1e0 = (undefined8 **)auVar83._0_8_;
              ppuStack_1e8 = (undefined8 **)auVar81._8_8_;
            }
            else {
              auVar83._8_8_ = auVar81._8_8_;
              _auStack_1f8 = auVar83;
            }
            ppuVar56 = ppuStack_170;
            ppuVar47 = ppuStack_168;
            if ((pppppppuStack_2f0 != (undefined8 *******)0x0) &&
               ((undefined8 *******)((longlong)pppppppuStack_2f0 + 1U) < pppppppuStack_108)) {
              ppuStack_198 = (undefined8 **)auStack_1f8;
              ppuStack_178 = (undefined8 **)0x0;
              lStack_160 = 4;
              bVar54 = true;
              ppuStack_190 = apuStack_1d8;
              ppuStack_188 = ppuStack_198;
              ppuStack_180 = apuStack_1d8;
              do {
                lStack_160 = lStack_160 + -1;
                ppuVar53 = ppuStack_188;
                if (ppuStack_188 == ppuStack_180) {
                  ppuStack_180 = ppuStack_190;
                  ppuVar53 = ppuStack_198;
                  ppuVar56 = ppuStack_170;
                  ppuVar47 = ppuStack_168;
                  if (ppuStack_198 == ppuStack_190) break;
                }
                ppuStack_188 = ppuVar53 + 1;
                if (bVar54) {
                  uStack_158 = 1;
                  pppuStack_148 = &ppuStack_198;
                  ppuStack_150 = ppuVar53;
                  pdb_1414e3f50(&ppuStack_1c8,&uStack_158);
                  ppuStack_178 = ppuStack_1c8;
                  ppuVar53 = ppuStack_1b8;
                  ppuStack_170 = ppuStack_1c8;
                  ppuStack_168 = ppuStack_1c0;
                  ppuVar56 = ppuStack_1c0;
                  ppuVar47 = ppuStack_1b8;
                  if (ppuStack_1c8 == (undefined8 **)0x0) break;
                }
                pppppppuVar70 = pppppppuStack_108;
                fVar84 = SUB84(*ppuStack_168,0);
                fVar82 = (float)((ulonglong)*ppuStack_168 >> 0x20);
                ppuStack_178 = ppuStack_170;
                if (fVar75 < ((float)((ulonglong)*ppuVar53 >> 0x20) - fVar82) *
                             (SUB84(*ppuStack_170,0) - fVar84) -
                             (SUB84(*ppuVar53,0) - fVar84) *
                             ((float)((ulonglong)*ppuStack_170 >> 0x20) - fVar82)) {
                  if (pppppppuStack_108 <= pppppppuVar69) {
                    ppuStack_170 = ppuStack_168;
                    ppuStack_168 = ppuVar53;
                    pdb_142dc7ef8(pppppppuVar69,pppppppuStack_108,&UNK_143013500);
                    goto LAB_140899e3e;
                  }
                  uVar60 = ~(ulonglong)pppppppuVar69;
                  ppuStack_170 = ppuStack_168;
                  ppuStack_168 = ppuVar53;
                  pub_142e32770(pbStack_110 + (longlong)pppppppuVar69 * 8,
                                pbStack_110 + (longlong)pppppppuVar69 * 8 + 8,
                                ((longlong)pppppppuStack_108 + uVar60) * 8);
                  pppppppuStack_108 = (undefined8 *******)((longlong)pppppppuVar70 + -1);
                  if (pppppppuVar62 <= pppppppuVar69) {
                    pdb_142dc7ef8(pppppppuVar69,pppppppuVar62,&UNK_143013518);
                    goto LAB_140899e3e;
                  }
                  pfVar50 = pfStack_120 + (longlong)pppppppuVar69 * 2;
                  pub_142e32770(pfVar50,pfStack_120 + (longlong)pppppppuVar69 * 2 + 2,
                                ((longlong)pppppppuVar62 + uVar60) * 8);
                  pppppppuVar70 = pppppppuStack_128;
                  if (pppppppuStack_128 <= pppppppuVar69) {
                    pdb_142dc7ef8(pppppppuVar69,pppppppuStack_128,&UNK_143013530);
                    goto LAB_140899e3e;
                  }
                  pub_142e32770(pbStack_130 + (longlong)pppppppuVar69 * 4,
                                pbStack_130 + (longlong)pppppppuVar69 * 4 + 4,
                                (uVar60 + (longlong)pppppppuStack_128) * 4);
                  pppppppuStack_128 = (undefined8 *******)((longlong)pppppppuVar70 + -1);
                  if (pppppppuVar69 == (undefined8 *******)0x1) {
                    if (pppppppuStack_108 < (undefined8 *******)0x2) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(1,pppppppuStack_108,&UNK_143013548);
                    }
                    fVar84 = (float)*(undefined8 *)(pbStack_110 + 8) -
                             (float)*(undefined8 *)pbStack_110;
                    fVar85 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + 8) >> 0x20) -
                             (float)((ulonglong)*(undefined8 *)pbStack_110 >> 0x20);
                    fVar76 = fVar73 / SQRT(fVar85 * fVar85 + fVar84 * fVar84);
                    fVar82 = 0.0;
                    if ((int)fVar76 - 1U < 0x7fffff ||
                        (int)ABS(fVar76) - 0x800000U < 0x7f000000 && -1 < (int)fVar76) {
                      fVar84 = fVar84 * fVar76;
                      fVar82 = fVar85 * fVar76;
                    }
                    else {
                      fVar84 = 0.0;
                    }
                    *pfStack_120 = fVar84;
                    pfVar59 = pfStack_120;
                  }
                  else {
                    if (pppppppuStack_108 <= pppppppuVar69) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(pppppppuVar69,pppppppuStack_108,&UNK_143013560);
                    }
                    if (pppppppuStack_108 <= (undefined8 *******)((longlong)pppppppuVar69 - 2U)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2((undefined8 *******)((longlong)pppppppuVar69 - 2U),
                                    pppppppuStack_108,&UNK_143013578);
                    }
                    fVar84 = (float)*(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8) -
                             (float)*(undefined8 *)
                                     (pbStack_110 + (longlong)pppppppuVar69 * 8 + -0x10);
                    fVar85 = (float)((ulonglong)
                                     *(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8) >>
                                    0x20) -
                             (float)((ulonglong)
                                     *(undefined8 *)
                                      (pbStack_110 + (longlong)pppppppuVar69 * 8 + -0x10) >> 0x20);
                    fVar76 = fVar73 / SQRT(fVar85 * fVar85 + fVar84 * fVar84);
                    fVar82 = 0.0;
                    if ((int)fVar76 - 1U < 0x7fffff ||
                        (int)ABS(fVar76) - 0x800000U < 0x7f000000 && -1 < (int)fVar76) {
                      fVar84 = fVar84 * fVar76;
                      fVar82 = fVar85 * fVar76;
                    }
                    else {
                      fVar84 = 0.0;
                    }
                    pfVar59 = pfVar50 + -2;
                    pfVar50[-2] = fVar84;
                  }
                  pppppppuVar62 = (undefined8 *******)((longlong)pppppppuVar62 + -1);
                  pfVar59[1] = fVar82;
                  if ((undefined8 *******)((longlong)pppppppuVar69 + 1U) < pppppppuStack_108) {
                    if (pppppppuStack_108 <= (undefined8 *******)((longlong)pppppppuVar69 - 1U)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2((undefined8 *******)((longlong)pppppppuVar69 - 1U),
                                    pppppppuStack_108,&UNK_1430135c0);
                    }
                    if (pppppppuVar62 <= pppppppuVar69) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(pppppppuVar69,pppppppuVar62,&UNK_1430135d8);
                    }
                    uVar9 = *(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8 + -8);
                    uVar10 = *(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8 + 8);
                  }
                  else {
                    if (pppppppuStack_108 <= pppppppuVar69) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(pppppppuVar69,pppppppuStack_108,&UNK_143013590);
                    }
                    if (pppppppuVar62 <= pppppppuVar69) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(pppppppuVar69,pppppppuVar62,&UNK_1430135a8);
                    }
                    uVar9 = *(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8 + -8);
                    uVar10 = *(undefined8 *)(pbStack_110 + (longlong)pppppppuVar69 * 8);
                  }
                  fVar84 = (float)uVar10 - (float)uVar9;
                  fVar82 = (float)((ulonglong)uVar10 >> 0x20) - (float)((ulonglong)uVar9 >> 0x20);
                  fVar85 = fVar73 / SQRT(fVar82 * fVar82 + fVar84 * fVar84);
                  uVar72 = (uint)((int)fVar85 - 1U < 0x7fffff ||
                                 (int)ABS(fVar85) - 0x800000U < 0x7f000000 && -1 < (int)fVar85);
                  *(ulonglong *)pfVar50 =
                       CONCAT44((int)(uVar72 << 0x1f) >> 0x1f,(int)(uVar72 << 0x1f) >> 0x1f) &
                       CONCAT44(fVar85 * fVar82,fVar85 * fVar84);
                  pppppppuStack_280 = pppppppuStack_108;
                  goto LAB_1408992a3;
                }
                bVar54 = false;
                ppuStack_170 = ppuStack_168;
                ppuVar56 = ppuStack_168;
                ppuStack_168 = ppuVar53;
                ppuVar47 = ppuVar53;
              } while (lStack_160 != 0);
            }
          } while( true );
        }
        pdb_142dc7e2a(4,uVar60);
LAB_140899e3e:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
    }
    param_1[6] = pppppppuStack_108;
    param_1[4] = pppppppuStack_118;
    param_1[5] = pbStack_110;
    param_1[7] = 0x8000000000000000;
    param_1[10] = 0x8000000000000000;
    param_1[0xd] = 0x8000000000000000;
    *param_1 = 0;
    if (pppppppuStack_138 == (undefined8 *******)0x0) {
      return param_1;
    }
    uVar60 = (longlong)pppppppuStack_138 << 2;
    arg0 = pbStack_130;
LAB_140898b9b:
    pub_1406abac0(arg0,uVar60,4);
    return param_1;
  }
  pppppppuStack_108 = *(undefined8 ********)(param_2 + 0x26c);
  pppppppuStack_118 = *(undefined8 ********)(param_2 + 0x25c);
  pbStack_110 = *(byte **)(param_2 + 0x264);
  fVar74 = (float)pdb_140b247f0(&uStack_140);
  fVar74 = _DAT_142e36f28 / fVar74;
  if ((param_3[1] & 1U) == 0) {
    fVar75 = 0.0;
  }
  else {
    fVar75 = param_9 * _DAT_142e36f50 * fVar74;
  }
  if (*param_3 != '\x01') {
    fVar75 = 0.0;
  }
  if ((param_4[1] & 1U) == 0) {
    fVar84 = 0.0;
  }
  else {
    fVar84 = _DAT_142e36f50 * param_10 * fVar74;
  }
  if (*param_4 != '\x01') {
    fVar84 = 0.0;
  }
  fVar82 = fVar74 * param_13;
  fVar85 = param_11 * fVar74;
  fStack_20c = param_9;
  fStack_2b0 = param_11;
  uStack_2ac = param_12;
  uStack_2b4 = param_14;
  fStack_2b8 = param_13;
  fStack_210 = param_10;
  fVar76 = fVar84;
  if (fVar73 < 0.0) {
    fVar85 = fVar82;
    fStack_20c = param_10;
    fStack_2b0 = param_13;
    uStack_2ac = param_14;
    uStack_2b4 = param_12;
    fStack_2b8 = param_11;
    fVar82 = param_11 * fVar74;
    fStack_210 = param_9;
    fVar76 = fVar75;
    fVar75 = fVar84;
  }
  puStack_288 = &uStack_2ac;
  pppppppuStack_280 = (undefined8 *******)&uStack_2b4;
  fVar74 = (fVar82 - fVar76) - (fVar75 + fVar85);
  uVar71 = -(uint)NAN(fVar82 - fVar85);
  uVar72 = -(uint)NAN(fVar74);
  uVar71 = -(uint)((float)(uVar72 & _UNK_143013274 |
                          ~uVar72 & (_UNK_142e37954 & _UNK_142e377e4 | (uint)fVar74 & _UNK_142e37824
                                    )) *
                   (float)(uVar71 & _DAT_143013270 |
                          ~uVar71 & (_DAT_142e37950 & _DAT_142e377e0 |
                                    (uint)(fVar82 - fVar85) & _DAT_142e37820)) != _DAT_142e36f28);
  uStack_f2 = 1;
  pppppppuStack_138 = (undefined8 *******)0x0;
  pbStack_130 = (byte *)0x4;
  pppppppuStack_128 = (undefined8 *******)0x0;
  uStack_158 = 0;
  ppuStack_150 = (undefined8 **)0x4;
  pppuStack_148 = (undefined8 ***)0x0;
  ppuStack_1c8 = (undefined8 **)0x0;
  ppuStack_1c0 = (undefined8 **)0x4;
  ppuStack_1b8 = (undefined8 **)0x0;
  auStack_1f8 = (undefined1  [8])0x0;
  auVar45 = auStack_1f8;
  auStack_1f8 = (undefined1  [8])0x0;
  lStack_1f0 = 4;
  ppuStack_1e8 = (undefined8 **)0x0;
  ppuStack_2e0 = (undefined8 **)0x0;
  auStack_324[0] = 0;
  uStack_214 = 0;
  uStack_2a8 = &fStack_20c;
  pfStack_2a0 = &fStack_210;
  pppppppuStack_298 = &pppppppuStack_138;
  pfStack_290 = (float *)&uStack_f2;
  pbStack_278 = (byte *)auStack_324;
  pbStack_270 = (byte *)&uStack_214;
  pppppppuStack_260 = (undefined8 *******)&uStack_158;
  pppuStack_258 = &ppuStack_1c8;
  ppuStack_250 = (undefined8 **)auStack_1f8;
  uStack_f3 = 1;
  uStack_f4 = 0;
  uStack_300 = 0;
  pppppppuStack_268 = &pppppppuStack_2f0;
  if (NAN((float)(~uVar71 & (uint)(fVar75 + fVar85) | (uint)fVar85 & uVar71))) {
    auStack_1f8 = auVar45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143316620,0x1d,&UNK_143316668);
  }
  if (NAN((float)(~uVar71 & (uint)(fVar82 - fVar76) | (uint)fVar82 & uVar71))) {
    auStack_1f8 = auVar45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143316620,0x1d,&UNK_143316668);
  }
  pub_142e32a70();
  pub_142e32a70();
  ppuStack_198 = (undefined8 **)&uStack_f3;
  ppuStack_190 = (undefined8 **)&uStack_f4;
  ppuStack_188 = (undefined8 **)&uStack_2a8;
  ppuStack_180 = (undefined8 **)&uStack_300;
  pdb_1414e44b0(&pppppppuStack_118);
  if (0.0 <= fVar73) goto LAB_140898aad;
  uVar60 = (ulonglong)pppppppuStack_128 >> 1;
  if (uVar60 != 0) {
    lVar55 = (longlong)pbStack_130 + (longlong)pppppppuStack_128 * 8;
    if (uVar60 == 1) {
      uVar65 = 0;
    }
    else {
      lVar61 = (longlong)pppppppuStack_128 - 1;
      uVar65 = 0;
      do {
        uVar7 = *(undefined8 *)((longlong)pbStack_130 + uVar65 * 8);
        *(undefined8 *)((longlong)pbStack_130 + uVar65 * 8) =
             *(undefined8 *)((longlong)pbStack_130 + lVar61 * 8);
        *(undefined8 *)((longlong)pbStack_130 + lVar61 * 8) = uVar7;
        uVar7 = *(undefined8 *)((longlong)pbStack_130 + 8 + uVar65 * 8);
        *(undefined8 *)((longlong)pbStack_130 + 8 + uVar65 * 8) =
             *(undefined8 *)(lVar55 + (uVar65 ^ 0x1ffffffffffffffe) * 8);
        *(undefined8 *)(lVar55 + (uVar65 ^ 0x1ffffffffffffffe) * 8) = uVar7;
        uVar65 = uVar65 + 2;
        lVar61 = lVar61 + -2;
      } while ((uVar60 & 0xfffffffffffffffe) != uVar65);
      if ((uVar60 & 1) == 0) goto LAB_14089872a;
    }
    uVar7 = *(undefined8 *)((longlong)pbStack_130 + uVar65 * 8);
    *(undefined8 *)((longlong)pbStack_130 + uVar65 * 8) = *(undefined8 *)(lVar55 + ~uVar65 * 8);
    *(undefined8 *)(lVar55 + ~uVar65 * 8) = uVar7;
  }
LAB_14089872a:
  uVar60 = (ulonglong)pppuStack_148 >> 1;
  if (uVar60 != 0) {
    if (uVar60 == 1) {
      uVar65 = 0;
    }
    else {
      lVar55 = (longlong)pppuStack_148 - 1;
      uVar65 = 0;
      do {
        uVar7 = ppuStack_150[uVar65];
        ppuStack_150[uVar65] = ppuStack_150[lVar55];
        ppuStack_150[lVar55] = (undefined8 *)uVar7;
        uVar7 = ppuStack_150[uVar65 + 1];
        ppuStack_150[uVar65 + 1] =
             ppuStack_150[(longlong)pppuStack_148 + (uVar65 ^ 0x1ffffffffffffffe)];
        ppuStack_150[(longlong)pppuStack_148 + (uVar65 ^ 0x1ffffffffffffffe)] = (undefined8 *)uVar7;
        uVar65 = uVar65 + 2;
        lVar55 = lVar55 + -2;
      } while ((uVar60 & 0xfffffffffffffffe) != uVar65);
      if ((uVar60 & 1) == 0) goto LAB_1408987d8;
    }
    uVar7 = ppuStack_150[uVar65];
    ppuStack_150[uVar65] = ppuStack_150[(longlong)pppuStack_148 + ~uVar65];
    ppuStack_150[(longlong)pppuStack_148 + ~uVar65] = (undefined8 *)uVar7;
  }
LAB_1408987d8:
  uVar32 = _UNK_142e3782c;
  uVar77 = _UNK_142e37828;
  uVar72 = _UNK_142e37824;
  uVar71 = _DAT_142e37820;
  if (pppuStack_148 != (undefined8 ***)0x0) {
    uVar60 = (longlong)pppuStack_148 * 8 - 8;
    ppuVar56 = ppuStack_150;
    if (0x17 < uVar60) {
      uVar60 = (uVar60 >> 3) + 1;
      uVar65 = uVar60 & 0xfffffffffffffffc;
      ppuVar56 = ppuStack_150 + uVar65;
      uVar68 = 0;
      do {
        puVar1 = (uint *)(ppuStack_150 + uVar68);
        uVar49 = puVar1[1];
        uVar88 = puVar1[2];
        uVar89 = puVar1[3];
        puVar3 = (uint *)(ppuStack_150 + uVar68 + 2);
        uVar90 = *puVar3;
        uVar14 = puVar3[1];
        uVar15 = puVar3[2];
        uVar16 = puVar3[3];
        puVar3 = (uint *)(ppuStack_150 + uVar68);
        *puVar3 = *puVar1 ^ uVar71;
        puVar3[1] = uVar49 ^ uVar72;
        puVar3[2] = uVar88 ^ uVar77;
        puVar3[3] = uVar89 ^ uVar32;
        puVar1 = (uint *)(ppuStack_150 + uVar68 + 2);
        *puVar1 = uVar90 ^ uVar71;
        puVar1[1] = uVar14 ^ uVar72;
        puVar1[2] = uVar15 ^ uVar77;
        puVar1[3] = uVar16 ^ uVar32;
        uVar68 = uVar68 + 4;
      } while (uVar65 != uVar68);
      if (uVar60 == uVar65) goto LAB_140898873;
    }
    uVar72 = _UNK_142e37824;
    uVar71 = _DAT_142e37820;
    do {
      *ppuVar56 = (undefined8 *)
                  CONCAT44((uint)((ulonglong)*ppuVar56 >> 0x20) ^ uVar72,(uint)*ppuVar56 ^ uVar71);
      ppuVar56 = ppuVar56 + 1;
    } while (ppuVar56 != ppuStack_150 + (longlong)pppuStack_148);
  }
LAB_140898873:
  uVar60 = (ulonglong)ppuStack_1b8 >> 1;
  if (uVar60 != 0) {
    if (ppuStack_1b8 < 0x10) {
      uVar65 = 0;
    }
    else {
      uVar65 = uVar60 & 0xfffffffffffffff8;
      puVar66 = (undefined4 *)((longlong)ppuStack_1c0 + 0x10);
      lVar55 = (longlong)ppuStack_1c0 + (longlong)ppuStack_1b8 * 4;
      lVar61 = 0;
      do {
        uVar48 = puVar66[-4];
        uVar17 = puVar66[-3];
        uVar18 = puVar66[-2];
        uVar19 = puVar66[-1];
        uVar20 = *puVar66;
        uVar21 = puVar66[1];
        uVar22 = puVar66[2];
        uVar23 = puVar66[3];
        puVar4 = (undefined4 *)(lVar55 + -0x20 + lVar61 * 4);
        uVar24 = *puVar4;
        uVar25 = puVar4[1];
        uVar26 = puVar4[2];
        uVar27 = puVar4[3];
        puVar4 = (undefined4 *)(lVar55 + -0x10 + lVar61 * 4);
        uVar28 = *puVar4;
        uVar29 = puVar4[1];
        uVar30 = puVar4[2];
        puVar66[-4] = puVar4[3];
        puVar66[-3] = uVar30;
        puVar66[-2] = uVar29;
        puVar66[-1] = uVar28;
        *puVar66 = uVar27;
        puVar66[1] = uVar26;
        puVar66[2] = uVar25;
        puVar66[3] = uVar24;
        puVar4 = (undefined4 *)(lVar55 + -0x10 + lVar61 * 4);
        *puVar4 = uVar19;
        puVar4[1] = uVar18;
        puVar4[2] = uVar17;
        puVar4[3] = uVar48;
        puVar4 = (undefined4 *)(lVar55 + -0x20 + lVar61 * 4);
        *puVar4 = uVar23;
        puVar4[1] = uVar22;
        puVar4[2] = uVar21;
        puVar4[3] = uVar20;
        lVar61 = lVar61 + -8;
        puVar66 = puVar66 + 8;
      } while (-lVar61 != (uVar60 & 0xfffffffffffffff8));
      if (uVar60 == uVar65) goto LAB_14089894d;
    }
    puVar66 = (undefined4 *)((longlong)ppuStack_1c0 + uVar65 * 4);
    lVar55 = -uVar65;
    lVar61 = (longlong)ppuStack_1c0 + (longlong)ppuStack_1b8 * 4 + -4;
    do {
      uVar48 = *puVar66;
      *puVar66 = *(undefined4 *)(lVar61 + lVar55 * 4);
      *(undefined4 *)(lVar61 + lVar55 * 4) = uVar48;
      lVar55 = lVar55 + -1;
      puVar66 = puVar66 + 1;
    } while (-lVar55 != uVar60);
  }
LAB_14089894d:
  uVar60 = (ulonglong)ppuStack_1e8 >> 1;
  if (uVar60 != 0) {
    if (ppuStack_1e8 < 0x10) {
      uVar65 = 0;
    }
    else {
      uVar65 = uVar60 & 0xfffffffffffffff8;
      puVar66 = (undefined4 *)(lStack_1f0 + 0x10);
      lVar55 = lStack_1f0 + (longlong)ppuStack_1e8 * 4;
      lVar61 = 0;
      do {
        uVar48 = puVar66[-4];
        uVar17 = puVar66[-3];
        uVar18 = puVar66[-2];
        uVar19 = puVar66[-1];
        uVar20 = *puVar66;
        uVar21 = puVar66[1];
        uVar22 = puVar66[2];
        uVar23 = puVar66[3];
        puVar4 = (undefined4 *)(lVar55 + -0x20 + lVar61 * 4);
        uVar24 = *puVar4;
        uVar25 = puVar4[1];
        uVar26 = puVar4[2];
        uVar27 = puVar4[3];
        puVar4 = (undefined4 *)(lVar55 + -0x10 + lVar61 * 4);
        uVar28 = *puVar4;
        uVar29 = puVar4[1];
        uVar30 = puVar4[2];
        puVar66[-4] = puVar4[3];
        puVar66[-3] = uVar30;
        puVar66[-2] = uVar29;
        puVar66[-1] = uVar28;
        *puVar66 = uVar27;
        puVar66[1] = uVar26;
        puVar66[2] = uVar25;
        puVar66[3] = uVar24;
        puVar4 = (undefined4 *)(lVar55 + -0x10 + lVar61 * 4);
        *puVar4 = uVar19;
        puVar4[1] = uVar18;
        puVar4[2] = uVar17;
        puVar4[3] = uVar48;
        puVar4 = (undefined4 *)(lVar55 + -0x20 + lVar61 * 4);
        *puVar4 = uVar23;
        puVar4[1] = uVar22;
        puVar4[2] = uVar21;
        puVar4[3] = uVar20;
        lVar61 = lVar61 + -8;
        puVar66 = puVar66 + 8;
      } while (-lVar61 != (uVar60 & 0xfffffffffffffff8));
      if (uVar60 == uVar65) goto LAB_140898a1d;
    }
    puVar66 = (undefined4 *)(lStack_1f0 + uVar65 * 4);
    lVar55 = -uVar65;
    lVar61 = lStack_1f0 + (longlong)ppuStack_1e8 * 4 + -4;
    do {
      uVar48 = *puVar66;
      *puVar66 = *(undefined4 *)(lVar61 + lVar55 * 4);
      *(undefined4 *)(lVar61 + lVar55 * 4) = uVar48;
      lVar55 = lVar55 + -1;
      puVar66 = puVar66 + 1;
    } while (-lVar55 != uVar60);
  }
LAB_140898a1d:
  ppuVar56 = ppuStack_2e0;
  pppppppuVar69 = &pppppppuStack_2f0;
  if ((undefined8 **)0x1 < ppuStack_2e0) {
    ppuVar56 = ppuStack_2e8;
    pppppppuVar69 = pppppppuStack_2f0;
  }
  uVar60 = (ulonglong)ppuVar56 >> 1;
  if (uVar60 != 0) {
    if (uVar60 == 1) {
      uVar65 = 0;
    }
    else {
      lVar55 = (longlong)ppuVar56 + -1;
      uVar65 = 0;
      do {
        uVar48 = *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4);
        *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4) =
             *(undefined4 *)((longlong)pppppppuVar69 + lVar55 * 4);
        *(undefined4 *)((longlong)pppppppuVar69 + lVar55 * 4) = uVar48;
        uVar48 = *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4 + 4);
        *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4 + 4) =
             *(undefined4 *)
              ((longlong)pppppppuVar69 + (uVar65 ^ 0x3ffffffffffffffe) * 4 + (longlong)ppuVar56 * 4)
        ;
        *(undefined4 *)
         ((longlong)pppppppuVar69 + (uVar65 ^ 0x3ffffffffffffffe) * 4 + (longlong)ppuVar56 * 4) =
             uVar48;
        uVar65 = uVar65 + 2;
        lVar55 = lVar55 + -2;
      } while ((uVar60 & 0xfffffffffffffffe) != uVar65);
      if ((uVar60 & 1) == 0) goto LAB_140898aad;
    }
    uVar48 = *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4);
    *(undefined4 *)((longlong)pppppppuVar69 + uVar65 * 4) =
         *(undefined4 *)((longlong)pppppppuVar69 + ~uVar65 * 4 + (longlong)ppuVar56 * 4);
    *(undefined4 *)((longlong)pppppppuVar69 + ~uVar65 * 4 + (longlong)ppuVar56 * 4) = uVar48;
  }
LAB_140898aad:
  param_1[6] = pppppppuStack_128;
  param_1[4] = pppppppuStack_138;
  param_1[5] = pbStack_130;
  param_1[9] = pppuStack_148;
  param_1[7] = uStack_158;
  param_1[8] = ppuStack_150;
  param_1[0xc] = ppuStack_1b8;
  param_1[10] = ppuStack_1c8;
  param_1[0xb] = ppuStack_1c0;
  param_1[0xd] = auStack_1f8;
  param_1[0xe] = lStack_1f0;
  param_1[0xf] = ppuStack_1e8;
  param_1[1] = pppppppuStack_2f0;
  param_1[2] = ppuStack_2e8;
  param_1[3] = ppuStack_2e0;
  *param_1 = 1;
  return param_1;
}

