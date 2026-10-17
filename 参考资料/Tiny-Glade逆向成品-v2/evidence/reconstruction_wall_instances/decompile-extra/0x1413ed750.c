// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::filter_map::FilterMap<core::ops::range::Range<usize>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges::closure_env$0> >
// VA 0x1413ed750, PDB extent 3095 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::filter_map::FilterMap<core::ops::range::Range<usize>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges::closure_env$0>
   >
   Extent: 3095 bytes. No whole-program auto-analysis. */

longlong * pdb_1413ed750(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  longlong lVar22;
  float *pfVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  float fVar42;
  ulonglong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  longlong lVar48;
  longlong lVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulonglong uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  ulonglong uVar69;
  undefined1 auVar70 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float afStack_268 [4];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  ulonglong uStack_158;
  ulonglong uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  longlong lStack_130;
  float *pfStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f0;
  ulonglong uVar34;
  ulonglong uVar35;
  
  fVar44 = _DAT_142e37ad4;
  uStack_f0 = 0xfffffffffffffffe;
  uVar26 = param_2[3];
  uVar2 = param_2[4];
  if (uVar26 < uVar2) {
    pfVar3 = (float *)*param_2;
    pfVar4 = (float *)param_2[1];
    pfVar5 = (float *)param_2[2];
    do {
      fVar50 = (float)uVar26 * *pfVar4 + *pfVar3;
      fVar52 = fVar50 + *pfVar5;
      if (_DAT_142e37ad4 <= fVar52 - fVar50) {
        pdb_14007ee60();
        pfVar23 = (float *)func_0x0001406abab0(0x20,4);
        if (pfVar23 == (float *)0x0) {
          pdb_142dc7e2a(4,0x20);
          pcVar6 = (code *)swi(3);
          plVar24 = (longlong *)(*pcVar6)();
          return plVar24;
        }
        uVar26 = uVar26 + 1;
        *pfVar23 = fVar50;
        pfVar23[1] = fVar52;
        lStack_130 = 4;
        pfStack_128 = pfVar23;
        lStack_120 = 1;
        lVar22 = lStack_120;
        goto joined_r0x0001413ed8b3;
      }
      uVar26 = uVar26 + 1;
    } while (uVar2 != uVar26);
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return param_1;
joined_r0x0001413ed8b3:
  if (uVar2 <= uVar26) {
LAB_1413ee1df:
    param_1[2] = lVar22;
    *param_1 = lStack_130;
    param_1[1] = (longlong)pfStack_128;
    return param_1;
  }
  fVar50 = *pfVar3;
  fVar52 = *pfVar4;
  fVar1 = *pfVar5;
  uVar27 = uVar2 - uVar26;
  if (uVar27 < 0x30) {
LAB_1413ee150:
    while( true ) {
      fVar51 = (float)uVar26 * fVar52 + fVar50;
      fVar54 = fVar1 + fVar51;
      if (fVar44 <= fVar54 - fVar51) break;
      uVar26 = uVar26 + 1;
      if (uVar2 == uVar26) goto LAB_1413ee1df;
    }
    uVar26 = uVar26 + 1;
  }
  else {
    uVar28 = uVar27 & 0xfffffffffffffff0;
    fStack_1b8 = fVar50;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    fStack_1e8 = fVar50;
    fStack_1e4 = fVar50;
    fStack_1e0 = fVar50;
    fStack_1dc = fVar50;
    fStack_1a8 = fVar52;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    fStack_1d8 = fVar52;
    fStack_1d4 = fVar52;
    fStack_1d0 = fVar52;
    fStack_1cc = fVar52;
    auStack_198 = ZEXT416((uint)fVar1);
    fStack_1c8 = fVar1;
    fStack_1c4 = fVar1;
    fStack_1c0 = fVar1;
    fStack_1bc = fVar1;
    auVar62._8_4_ = (int)uVar26;
    auVar62._0_8_ = uVar26;
    auVar62._12_4_ = (int)(uVar26 >> 0x20);
    lVar25 = auVar62._8_8_;
    auVar73._0_8_ = uVar26 + _DAT_143007780;
    auVar73._8_8_ = lVar25 + _UNK_143007788;
    auVar61._0_8_ = uVar26 + _DAT_143007790;
    auVar61._8_8_ = lVar25 + _UNK_143007798;
    auVar64._0_8_ = uVar26 + _DAT_1430077a0;
    auVar64._8_8_ = lVar25 + _UNK_1430077a8;
    uStack_118 = uVar26 + _DAT_1430077b0;
    uStack_110 = lVar25 + _UNK_1430077b8;
    auVar67._0_8_ = uVar26 + _DAT_1430077c0;
    auVar67._8_8_ = lVar25 + _UNK_1430077c8;
    uStack_158 = uVar26 + _DAT_1430077d0;
    uStack_150 = lVar25 + _UNK_1430077d8;
    auVar70._0_8_ = uVar26 + _DAT_1430077e0;
    auVar70._8_8_ = lVar25 + _UNK_1430077e8;
    auVar72._0_8_ = uVar26 + _DAT_142e4ff80;
    auVar72._8_8_ = lVar25 + _UNK_142e4ff88;
    lVar25 = 0xf - uVar26;
    uVar29 = uVar28;
    do {
      uVar29 = uVar29 - 0x10;
      uVar30 = auVar72._0_8_;
      if ((longlong)uVar30 < 0) {
        fVar44 = (float)((ulonglong)(auVar72._0_4_ & 1) | uVar30 >> 1);
        fVar44 = fVar44 + fVar44;
      }
      else {
        fVar44 = (float)(longlong)uVar30;
      }
      uVar40 = auVar72._8_8_;
      uVar31 = auVar70._0_8_;
      if (auVar72._12_4_ < 0) {
        fVar54 = (float)((ulonglong)(auVar72._8_4_ & 1) | uVar40 >> 1);
        fVar54 = fVar54 + fVar54;
        if (-1 < (longlong)uVar31) goto LAB_1413eda9a;
LAB_1413eda4c:
        fVar37 = (float)((ulonglong)(auVar70._0_4_ & 1) | uVar31 >> 1);
        fVar37 = fVar37 + fVar37;
      }
      else {
        fVar54 = (float)(longlong)uVar40;
        if ((longlong)uVar31 < 0) goto LAB_1413eda4c;
LAB_1413eda9a:
        fVar37 = (float)(longlong)uVar31;
      }
      auStack_188 = ZEXT416((uint)fVar37);
      uVar41 = auVar70._8_8_;
      if (auVar70._12_4_ < 0) {
        fVar38 = (float)((ulonglong)(auVar70._8_4_ & 1) | uVar41 >> 1);
        fVar38 = fVar38 + fVar38;
      }
      else {
        fVar38 = (float)(longlong)uVar41;
      }
      auStack_178 = ZEXT416((uint)fVar38);
      uVar32 = auVar67._0_8_;
      if ((longlong)uStack_158 < 0) {
        fVar39 = (float)uStack_158;
        if (-1 < (longlong)uStack_150) goto LAB_1413edb8c;
LAB_1413edb1d:
        auStack_168 = ZEXT416((uint)(float)uStack_150);
        if ((longlong)uVar32 < 0) goto LAB_1413edb47;
LAB_1413edba5:
        fVar75 = (float)(longlong)uVar32;
      }
      else {
        fVar39 = (float)(longlong)uStack_158;
        if ((longlong)uStack_150 < 0) goto LAB_1413edb1d;
LAB_1413edb8c:
        auStack_168 = ZEXT416((uint)(float)(longlong)uStack_150);
        if (-1 < (longlong)uVar32) goto LAB_1413edba5;
LAB_1413edb47:
        fVar75 = (float)((ulonglong)(auVar67._0_4_ & 1) | uVar32 >> 1);
        fVar75 = fVar75 + fVar75;
      }
      uVar43 = auVar67._8_8_;
      uVar33 = auVar64._0_8_;
      uVar34 = auVar61._0_8_;
      uVar59 = auVar61._8_8_;
      uVar35 = auVar64._8_8_;
      if (auVar67._12_4_ < 0) {
        fVar71 = (float)((ulonglong)(auVar67._8_4_ & 1) | uVar43 >> 1);
        fVar71 = fVar71 + fVar71;
        if (-1 < (longlong)uStack_118) goto LAB_1413edd11;
LAB_1413edbe1:
        fVar55 = (float)uStack_118;
        if ((longlong)uStack_110 < 0) goto LAB_1413edc0f;
LAB_1413edd2d:
        fVar42 = (float)(longlong)uStack_110;
        if (-1 < (longlong)uVar33) goto LAB_1413edd43;
LAB_1413edc36:
        fVar47 = (float)((ulonglong)(auVar64._0_4_ & 1) | uVar33 >> 1);
        fVar47 = fVar47 + fVar47;
        if (auVar64._12_4_ < 0) goto LAB_1413edc60;
LAB_1413edd5c:
        fVar53 = (float)(longlong)uVar35;
        if (-1 < (longlong)uVar34) goto LAB_1413edd6f;
LAB_1413edc84:
        fVar51 = (float)((ulonglong)(auVar61._0_4_ & 1) | uVar34 >> 1);
        fVar51 = fVar51 + fVar51;
        if (auVar61._12_4_ < 0) goto LAB_1413edcb1;
LAB_1413edd8b:
        fVar58 = (float)(longlong)uVar59;
      }
      else {
        fVar71 = (float)(longlong)uVar43;
        if ((longlong)uStack_118 < 0) goto LAB_1413edbe1;
LAB_1413edd11:
        fVar55 = (float)(longlong)uStack_118;
        if (-1 < (longlong)uStack_110) goto LAB_1413edd2d;
LAB_1413edc0f:
        fVar42 = (float)uStack_110;
        if ((longlong)uVar33 < 0) goto LAB_1413edc36;
LAB_1413edd43:
        fVar47 = (float)(longlong)uVar33;
        if (-1 < auVar64._12_4_) goto LAB_1413edd5c;
LAB_1413edc60:
        fVar53 = (float)uVar35;
        if ((longlong)uVar34 < 0) goto LAB_1413edc84;
LAB_1413edd6f:
        fVar51 = (float)(longlong)uVar34;
        if (-1 < auVar61._12_4_) goto LAB_1413edd8b;
LAB_1413edcb1:
        fVar58 = (float)uVar59;
      }
      auStack_218 = auVar64;
      uVar36 = auVar73._0_8_;
      auStack_228 = auVar61;
      auStack_208 = auVar72;
      auStack_1f8 = auVar70;
      if ((longlong)uVar36 < 0) {
        fVar63 = (float)((ulonglong)(auVar73._0_4_ & 1) | uVar36 >> 1);
        fVar63 = fVar63 + fVar63;
      }
      else {
        fVar63 = (float)(longlong)uVar36;
      }
      uVar69 = auVar73._8_8_;
      if (auVar73._12_4_ < 0) {
        fVar68 = (float)((ulonglong)(auVar73._8_4_ & 1) | uVar69 >> 1);
        fVar68 = fVar68 + fVar68;
      }
      else {
        fVar68 = (float)(longlong)uVar69;
      }
      auStack_148._0_4_ = fVar44 * fVar52 + fVar50;
      auStack_148._4_4_ = fVar54 * fVar52 + fVar50;
      fVar45 = fVar37 * fVar52 + fVar50;
      fVar46 = fVar38 * fVar52 + fVar50;
      fVar54 = fVar39 * fVar52 + fVar50;
      fVar37 = (float)auStack_168._0_4_ * fVar52 + fVar50;
      fVar38 = fVar75 * fVar52 + fVar50;
      fVar39 = fVar71 * fVar52 + fVar50;
      fVar56 = fVar55 * fVar52 + fVar50;
      fVar57 = fVar42 * fVar52 + fVar50;
      fVar47 = fVar47 * fVar52 + fVar50;
      fVar53 = fVar53 * fVar52 + fVar50;
      fVar75 = fVar51 * fVar52 + fVar50;
      fVar71 = fVar58 * fVar52 + fVar50;
      fVar55 = fVar63 * fVar52 + fVar50;
      fVar42 = fVar68 * fVar52 + fVar50;
      uStack_140._0_4_ = fVar45;
      uStack_140._4_4_ = fVar46;
      auVar60._4_4_ =
           -(uint)(_UNK_143043974 <= (fVar1 + (float)auStack_148._4_4_) - (float)auStack_148._4_4_);
      auVar60._0_4_ =
           -(uint)(_DAT_143043970 <= (fVar1 + (float)auStack_148._0_4_) - (float)auStack_148._0_4_);
      auVar60._8_4_ = -(uint)(_UNK_143043978 <= (fVar1 + fVar45) - fVar45);
      auVar60._12_4_ = -(uint)(_UNK_14304397c <= (fVar1 + fVar46) - fVar46);
      auVar65._4_4_ = -(uint)(_UNK_143043974 <= (fVar1 + fVar37) - fVar37);
      auVar65._0_4_ = -(uint)(_DAT_143043970 <= (fVar1 + fVar54) - fVar54);
      auVar65._8_4_ = -(uint)(_UNK_143043978 <= (fVar1 + fVar38) - fVar38);
      auVar65._12_4_ = -(uint)(_UNK_14304397c <= (fVar1 + fVar39) - fVar39);
      auVar61 = packssdw(auVar60,auVar65);
      auVar66._4_4_ = -(uint)(_UNK_143043974 <= (fVar1 + fVar57) - fVar57);
      auVar66._0_4_ = -(uint)(_DAT_143043970 <= (fVar1 + fVar56) - fVar56);
      auVar66._8_4_ = -(uint)(_UNK_143043978 <= (fVar1 + fVar47) - fVar47);
      auVar66._12_4_ = -(uint)(_UNK_14304397c <= (fVar1 + fVar53) - fVar53);
      auVar74._4_4_ = -(uint)(_UNK_143043974 <= (fVar1 + fVar71) - fVar71);
      auVar74._0_4_ = -(uint)(_DAT_143043970 <= (fVar1 + fVar75) - fVar75);
      auVar74._8_4_ = -(uint)(_UNK_143043978 <= (fVar1 + fVar55) - fVar55);
      auVar74._12_4_ = -(uint)(_UNK_14304397c <= (fVar1 + fVar42) - fVar42);
      auVar67 = packssdw(auVar66,auVar74);
      auVar62 = packsswb(auVar61,auVar67);
      bVar7 = SUB161(auVar62 >> 7,0) & 1;
      bVar8 = SUB161(auVar62 >> 0xf,0) & 1;
      bVar9 = SUB161(auVar62 >> 0x17,0) & 1;
      bVar10 = SUB161(auVar62 >> 0x1f,0) & 1;
      bVar11 = SUB161(auVar62 >> 0x27,0) & 1;
      bVar12 = SUB161(auVar62 >> 0x2f,0) & 1;
      bVar13 = SUB161(auVar62 >> 0x37,0) & 1;
      cVar14 = SUB161(auVar62 >> 0x3f,0) << 7;
      bVar15 = SUB161(auVar62 >> 0x47,0) & 1;
      bVar16 = SUB161(auVar62 >> 0x4f,0) & 1;
      bVar17 = SUB161(auVar62 >> 0x57,0) & 1;
      bVar18 = SUB161(auVar62 >> 0x5f,0) & 1;
      bVar19 = SUB161(auVar62 >> 0x67,0) & 1;
      bVar20 = SUB161(auVar62 >> 0x6f,0) & 1;
      bVar21 = SUB161(auVar62 >> 0x77,0) & 1;
      lVar25 = lVar25 + -0x10;
      if (((((((((((((((bVar7 != 0 || bVar8 != 0) || bVar9 != 0) || bVar10 != 0) || bVar11 != 0) ||
                   bVar12 != 0) || bVar13 != 0) || cVar14 != '\0') || bVar15 != 0) || bVar16 != 0)
              || bVar17 != 0) || bVar18 != 0) || bVar19 != 0) || bVar20 != 0) || bVar21 != 0) ||
          auVar62[0xf] < '\0') break;
      lVar48 = (longlong)DAT_1430077f0;
      auVar72._0_8_ = uVar30 + lVar48;
      lVar49 = DAT_1430077f0._8_8_;
      auVar72._8_8_ = uVar40 + lVar49;
      auVar70._0_8_ = uVar31 + lVar48;
      auVar70._8_8_ = uVar41 + lVar49;
      uStack_158 = uStack_158 + lVar48;
      uStack_150 = uStack_150 + lVar49;
      auVar67._0_8_ = uVar32 + lVar48;
      auVar67._8_8_ = uVar43 + lVar49;
      uStack_118 = uStack_118 + lVar48;
      uStack_110 = uStack_110 + lVar49;
      auVar64._0_8_ = uVar33 + lVar48;
      auVar64._8_8_ = uVar35 + lVar49;
      auVar61._0_8_ = uVar34 + lVar48;
      auVar61._8_8_ = uVar59 + lVar49;
      auVar73._0_8_ = uVar36 + lVar48;
      auVar73._8_8_ = uVar69 + lVar49;
    } while (uVar29 != 0);
    fVar44 = _DAT_142e37ad4;
    if (((((((((((((((bVar7 == 0 && bVar8 == 0) && bVar9 == 0) && bVar10 == 0) && bVar11 == 0) &&
                 bVar12 == 0) && bVar13 == 0) && cVar14 == '\0') && bVar15 == 0) && bVar16 == 0) &&
            bVar17 == 0) && bVar18 == 0) && bVar19 == 0) && bVar20 == 0) && bVar21 == 0) &&
        -1 < auVar62[0xf]) {
      uVar26 = uVar26 + uVar28;
      if (uVar27 != uVar28) goto LAB_1413ee150;
      goto LAB_1413ee1df;
    }
    auVar62 = auVar62 & _DAT_142f97e80;
    auStack_108 = auVar62;
    auVar61 = auStack_108;
    auStack_108[1] = auVar62[1];
    auStack_108[0] = auVar62[0];
    if (auStack_108[1] < auStack_108[0]) {
      auStack_108[1] = auStack_108[0];
    }
    auStack_108[4] = auVar62[4];
    auStack_108[2] = auVar62[2];
    if (auStack_108[1] <= auStack_108[2]) {
      auStack_108[1] = auStack_108[2];
    }
    auStack_108[3] = auVar62[3];
    if (auStack_108[1] <= auStack_108[3]) {
      auStack_108[1] = auStack_108[3];
    }
    if (auStack_108[1] <= auStack_108[4]) {
      auStack_108[1] = auStack_108[4];
    }
    auStack_108[5] = auVar62[5];
    if (auStack_108[1] <= auStack_108[5]) {
      auStack_108[1] = auStack_108[5];
    }
    auStack_108[6] = auVar62[6];
    if (auStack_108[1] <= auStack_108[6]) {
      auStack_108[1] = auStack_108[6];
    }
    auStack_108[7] = auVar62[7];
    if (auStack_108[1] <= auStack_108[7]) {
      auStack_108[1] = auStack_108[7];
    }
    auStack_108[8] = auVar62[8];
    if (auStack_108[1] <= auStack_108[8]) {
      auStack_108[1] = auStack_108[8];
    }
    auStack_108[9] = auVar62[9];
    if (auStack_108[1] <= auStack_108[9]) {
      auStack_108[1] = auStack_108[9];
    }
    auStack_108[10] = auVar62[10];
    if (auStack_108[1] <= auStack_108[10]) {
      auStack_108[1] = auStack_108[10];
    }
    auStack_108[0xb] = auVar62[0xb];
    if (auStack_108[1] <= auStack_108[0xb]) {
      auStack_108[1] = auStack_108[0xb];
    }
    auStack_108[0xc] = auVar62[0xc];
    if (auStack_108[1] <= auStack_108[0xc]) {
      auStack_108[1] = auStack_108[0xc];
    }
    auStack_108[0xd] = auVar62[0xd];
    if (auStack_108[1] <= auStack_108[0xd]) {
      auStack_108[1] = auStack_108[0xd];
    }
    auStack_108[0xe] = auVar62[0xe];
    if (auStack_108[1] <= auStack_108[0xe]) {
      auStack_108[1] = auStack_108[0xe];
    }
    auStack_108[0xf] = auVar62[0xf];
    if (auStack_108[1] <= auStack_108[0xf]) {
      auStack_108[1] = auStack_108[0xf];
    }
    uVar26 = (ulonglong)(((byte)(0x10 - auStack_108[1]) & 0xf) << 2);
    uStack_2a8 = auStack_148;
    uStack_2a0 = uStack_140;
    fStack_298 = fVar54;
    fStack_294 = fVar37;
    fStack_290 = fVar38;
    fStack_28c = fVar39;
    fStack_288 = fVar56;
    fStack_284 = fVar57;
    fStack_280 = fVar47;
    fStack_27c = fVar53;
    fStack_278 = fVar75;
    fStack_274 = fVar71;
    fStack_270 = fVar55;
    fStack_26c = fVar42;
    fVar51 = *(float *)((longlong)&uStack_2a8 + uVar26);
    afStack_268[0] = fVar1 + (float)auStack_148._0_4_;
    afStack_268[1] = fVar1 + (float)auStack_148._4_4_;
    afStack_268[2] = fVar1 + fVar45;
    afStack_268[3] = fVar1 + fVar46;
    fStack_258 = fVar1 + fVar54;
    fStack_254 = fVar1 + fVar37;
    fStack_250 = fVar1 + fVar38;
    fStack_24c = fVar1 + fVar39;
    fStack_248 = fVar1 + fVar56;
    fStack_244 = fVar1 + fVar57;
    fStack_240 = fVar1 + fVar47;
    fStack_23c = fVar1 + fVar53;
    fStack_238 = fVar1 + fVar75;
    fStack_234 = fVar1 + fVar71;
    fStack_230 = fVar1 + fVar55;
    fStack_22c = fVar1 + fVar42;
    fVar54 = *(float *)((longlong)afStack_268 + uVar26);
    uVar26 = (ulonglong)(byte)(0x10 - auStack_108[1]) - lVar25;
    auStack_108 = auVar61;
  }
  if (lVar22 == lStack_130) {
    lStack_120 = lVar22;
    pdb_142d7f1b0(&lStack_130,lVar22,1,4,8);
    pfVar23 = pfStack_128;
  }
  pfVar23[lVar22 * 2] = fVar51;
  pfVar23[lVar22 * 2 + 1] = fVar54;
  lStack_120 = lVar22 + 1;
  lVar22 = lStack_120;
  goto joined_r0x0001413ed8b3;
}

