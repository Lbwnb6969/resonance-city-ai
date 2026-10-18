// VA 0x14089bbd0, PDB extent 10456 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::compute_stair_assembly_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::compute_stair_assembly_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 10456 */

longlong *
pdb_14089bbd0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,char *param_6,char *param_7,float param_8,float param_9,float param_10
             ,float param_11,float param_12,float param_13,float param_14,float param_15,
             undefined8 param_16,ulonglong *param_17,ulonglong *param_18,ulonglong *param_19,
             longlong *param_20,longlong *param_21,byte **param_22)

{
  short *psVar1;
  float *pfVar2;
  char *pcVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  undefined4 uVar26;
  byte bVar27;
  int iVar28;
  float *pfVar29;
  ulonglong uVar30;
  ulonglong *puVar31;
  byte *pbVar32;
  ulonglong uVar33;
  int *******pppppppiVar34;
  uint uVar35;
  ulonglong uVar36;
  int iVar37;
  byte *pbVar38;
  ulonglong *arg0;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong *puVar42;
  longlong lVar43;
  undefined1 uVar44;
  ushort uVar45;
  longlong lVar46;
  ulonglong uVar47;
  byte *pbVar48;
  sbyte sVar49;
  byte *pbVar50;
  ulonglong uVar51;
  bool bVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte *pbStack_308;
  ulonglong uStack_300;
  byte *pbStack_2f8;
  int iStack_2e8;
  int iStack_2e4;
  longlong *plStack_2e0;
  longlong *plStack_2d8;
  byte *pbStack_2d0;
  byte **ppbStack_2c8;
  byte **ppbStack_2c0;
  byte **ppbStack_2b8;
  byte **ppbStack_2b0;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float *pfStack_298;
  float *pfStack_290;
  undefined8 uStack_288;
  byte *pbStack_280;
  float *pfStack_278;
  float *pfStack_270;
  undefined8 uStack_268;
  byte *pbStack_260;
  undefined8 uStack_258;
  undefined4 *puStack_250;
  undefined4 *puStack_248;
  undefined8 uStack_240;
  byte **ppbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  ulonglong uStack_220;
  byte *pbStack_218;
  int ******ppppppiStack_210;
  ulonglong auStack_208 [2];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float *pfStack_1f0;
  float *pfStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  ulonglong uStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  int ******ppppppiStack_198;
  byte *pbStack_190;
  float *pfStack_188;
  float *pfStack_180;
  int ******ppppppiStack_178;
  ulonglong auStack_170 [3];
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  float *pfStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  float *pfStack_120;
  byte *pbStack_118;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1f4 = *(undefined4 *)(param_4 + 0x20);
  uStack_1f8 = *(undefined4 *)(param_5 + 0x20);
  fVar5 = *(float *)(param_4 + 0x2c);
  fVar6 = *(float *)(param_5 + 0x2c);
  if (SBORROW8(0,*param_17)) {
    ppbStack_2b8 = (byte **)param_22[2];
    ppbStack_2c8 = param_22;
    ppbStack_2c0 = (byte **)0x0;
    uStack_fb = 1;
    uStack_fc = 1;
    uStack_fd = 1;
    uStack_fe = 1;
    uStack_ff = 0;
    pdb_141497050(&pbStack_128,&ppbStack_2c8);
  }
  else {
    pbStack_118 = (byte *)param_17[2];
    pbStack_128 = (byte *)*param_17;
    pfStack_120 = (float *)param_17[1];
  }
  plStack_2e0 = param_2;
  if (SBORROW8(0,(longlong)*param_18)) {
    pbVar32 = param_22[5];
    if (pbVar32 == (byte *)0x0) {
      pfVar29 = (float *)0x4;
      fVar54 = _DAT_142e36f28;
    }
    else {
      pbVar11 = param_22[4];
      pdb_14007ee60();
      pfVar29 = (float *)pub_1406abab0((longlong)pbVar32 * 4,4);
      fVar25 = _UNK_142e3c64c;
      fVar57 = _UNK_142e3c648;
      fVar58 = _UNK_142e3c644;
      fVar54 = _DAT_142e3c640;
      if (pfVar29 == (float *)0x0) {
        uStack_100 = 1;
        uStack_101 = 1;
        uStack_102 = 1;
        uStack_103 = 1;
        pdb_142dc7e2a(4,(longlong)pbVar32 * 4);
        goto LAB_14089d51e;
      }
      if ((ulonglong)((longlong)pfVar29 - (longlong)pbVar11) < 0x20 || pbVar32 < (byte *)0x8) {
        pbVar50 = (byte *)0x0;
      }
      else {
        pbVar50 = (byte *)((ulonglong)pbVar32 & 0xfffffffffffffff8);
        pbVar38 = (byte *)0x0;
        do {
          pfVar2 = (float *)(pbVar11 + (longlong)pbVar38 * 4);
          fVar55 = pfVar2[1];
          fVar7 = pfVar2[2];
          fVar8 = pfVar2[3];
          pfVar4 = (float *)(pbVar11 + (longlong)pbVar38 * 4 + 0x10);
          fVar16 = *pfVar4;
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar4 = pfVar29 + (longlong)pbVar38;
          *pfVar4 = *pfVar2 * fVar6 + (fVar54 - *pfVar2) * fVar5;
          pfVar4[1] = fVar55 * fVar6 + (fVar58 - fVar55) * fVar5;
          pfVar4[2] = fVar7 * fVar6 + (fVar57 - fVar7) * fVar5;
          pfVar4[3] = fVar8 * fVar6 + (fVar25 - fVar8) * fVar5;
          pfVar2 = pfVar29 + (longlong)(pbVar38 + 4);
          *pfVar2 = fVar16 * fVar6 + (fVar54 - fVar16) * fVar5;
          pfVar2[1] = fVar17 * fVar6 + (fVar58 - fVar17) * fVar5;
          pfVar2[2] = fVar18 * fVar6 + (fVar57 - fVar18) * fVar5;
          pfVar2[3] = fVar19 * fVar6 + (fVar25 - fVar19) * fVar5;
          pbVar38 = pbVar38 + 8;
        } while (pbVar50 != pbVar38);
        fVar54 = _DAT_142e36f28;
        if (pbVar32 == pbVar50) goto LAB_14089be77;
      }
      pbVar38 = (byte *)((ulonglong)pbVar50 | 1);
      fVar54 = _DAT_142e36f28;
      if (((ulonglong)pbVar32 & 1) != 0) {
        pfVar29[(longlong)pbVar50] =
             *(float *)(pbVar11 + (longlong)pbVar50 * 4) * fVar6 +
             (_DAT_142e36f28 - *(float *)(pbVar11 + (longlong)pbVar50 * 4)) * fVar5;
        pbVar50 = pbVar38;
        fVar54 = _DAT_142e36f28;
      }
      while (fVar58 = _DAT_142e36f28, pbVar32 != pbVar38) {
        fVar57 = _DAT_142e36f28 - *(float *)(pbVar11 + (longlong)pbVar50 * 4);
        _DAT_142e36f28 = fVar54;
        pfVar29[(longlong)pbVar50] =
             *(float *)(pbVar11 + (longlong)pbVar50 * 4) * fVar6 + fVar57 * fVar5;
        pfVar29[(longlong)(pbVar50 + 1)] =
             *(float *)(pbVar11 + (longlong)pbVar50 * 4 + 4) * fVar6 +
             (fVar58 - *(float *)(pbVar11 + (longlong)pbVar50 * 4 + 4)) * fVar5;
        pbVar38 = pbVar50 + 2;
        pbVar50 = pbVar38;
        fVar54 = _DAT_142e36f28;
        _DAT_142e36f28 = fVar58;
      }
    }
LAB_14089be77:
    _DAT_142e36f28 = fVar54;
    pbStack_140 = pbVar32;
    pfStack_138 = pfVar29;
    pbStack_130 = pbVar32;
  }
  else {
    pbStack_140 = (byte *)*param_18;
    pfStack_138 = (float *)param_18[1];
    pbStack_130 = (byte *)param_18[2];
  }
  pbVar11 = param_22[2];
  pbVar32 = pbVar11 + 0x3f;
  pbVar50 = (byte *)((ulonglong)pbVar32 >> 6);
  if (pbVar50 == (byte *)0x0) {
    pbStack_1b8 = (byte *)0x8;
  }
  else {
    pdb_14007ee60();
    pbStack_1b8 = pub_1406abab0((longlong)pbVar50 * 8,8);
    if (pbStack_1b8 == (byte *)0x0) {
      uStack_f7 = 1;
      uStack_f8 = 1;
      uStack_f9 = 1;
      uStack_fa = 1;
      pdb_142dc7e2a(8,(longlong)pbVar50 * 8);
LAB_14089d51e:
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
  }
  uStack_1b0 = 0;
  pbStack_1a8 = pbVar50;
  uVar39 = (ulonglong)((int)pbStack_1b8 * 8 & 0x38);
  pbStack_228 = (byte *)0x0;
  if (uVar39 <= ((ulonglong)pbVar32 & 0x1fffffffffffffc0)) {
    pbStack_228 = (byte *)(((ulonglong)pbVar32 & 0x1fffffffffffffc0) - uVar39);
  }
  pbStack_308 = pbVar11;
  if (pbStack_228 < pbVar11) {
    ppbStack_2c8 = &pbStack_308;
    ppbStack_2c0 = (byte **)pdb_140f72a40;
    ppbStack_2b8 = &pbStack_228;
    ppbStack_2b0 = (byte **)pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143013b58,&ppbStack_2c8,&UNK_143013c50);
  }
  uStack_1b0 = (longlong)pbVar11 << 3;
  if ((ulonglong)(pbVar32 + uVar39) >> 6 != 0) {
    pub_142e32780((ulonglong)pbStack_1b8 & 0xfffffffffffffff8,0,
                  ((ulonglong)(pbVar32 + uVar39) >> 6) << 3);
  }
  pbStack_1c8 = pbStack_1a8;
  pbStack_1d8 = pbStack_1b8;
  uStack_1d0 = uStack_1b0;
  if (SBORROW8(0,(longlong)*param_19)) {
    ppbStack_2c8 = (byte **)param_22[1];
    pbVar32 = param_22[2];
    ppbStack_2c0 = ppbStack_2c8 + (longlong)pbVar32;
    ppbStack_2b8 = (byte **)param_22[4];
    pbVar11 = param_22[5];
    if (pbVar11 < pbVar32) {
      pbVar32 = pbVar11;
    }
    pfStack_290 = pfStack_120 + (longlong)pbStack_118 * 2;
    pbStack_280 = pbStack_118;
    if (pbVar32 <= pbStack_118) {
      pbStack_280 = pbVar32;
    }
    ppbStack_2b0 = (byte **)((longlong)ppbStack_2b8 + (longlong)pbVar11 * 4);
    pfStack_270 = pfStack_138 + (longlong)pbStack_130;
    pbStack_260 = pbStack_130;
    if (pbStack_280 <= pbStack_130) {
      pbStack_260 = pbStack_280;
    }
    uStack_2a8 = 0;
    fStack_2a4 = 0.0;
    fStack_2a0 = SUB84(pbVar32,0);
    uStack_29c = (undefined4)((ulonglong)pbVar32 >> 0x20);
    pfStack_298 = pfStack_120;
    uStack_288 = 0;
    pfStack_278 = pfStack_138;
    uStack_268 = 0;
    uStack_258 = 0;
    puStack_250 = &uStack_1f4;
    puStack_248 = &uStack_1f8;
    ppbStack_238 = &pbStack_1d8;
    uStack_104 = 1;
    uStack_105 = 1;
    uStack_106 = 1;
    uStack_240 = param_3;
    pdb_1414984e0(auStack_170 + 3,&ppbStack_2c8);
  }
  else {
    pbStack_158 = (byte *)*param_19;
    pbStack_150 = (byte *)param_19[1];
    pbStack_148 = (byte *)param_19[2];
  }
  pbVar38 = pbStack_118;
  pbVar50 = pbStack_130;
  pbVar11 = pbStack_148;
  uVar39 = uStack_1d0;
  pbVar32 = pbStack_1d8;
  fVar54 = _DAT_142e36f28;
  if (pbStack_118 == (byte *)0x0) {
    uStack_f4 = 1;
    uStack_f5 = 1;
    uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143013848);
  }
  fVar58 = _DAT_142e36f28 / SQRT(param_13 * param_13 + param_12 * param_12);
  uVar35 = (uint)((int)fVar58 - 1U < 0x7fffff ||
                 (int)ABS(fVar58) - 0x800000U < 0x7f000000 && -1 < (int)fVar58);
  *(ulonglong *)pfStack_120 =
       CONCAT44((int)(uVar35 << 0x1f) >> 0x1f,(int)(uVar35 << 0x1f) >> 0x1f) &
       CONCAT44(fVar58 * param_13,fVar58 * param_12);
  pbVar12 = param_22[2];
  pbVar48 = pbVar12 + -1;
  if (pbStack_118 <= pbVar48) {
    uStack_f4 = 1;
    uStack_f5 = 1;
    uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pbVar48,pbStack_118,&UNK_143013860);
  }
  fVar54 = fVar54 / SQRT(param_15 * param_15 + param_14 * param_14);
  uVar35 = (uint)((int)fVar54 - 1U < 0x7fffff ||
                 (int)ABS(fVar54) - 0x800000U < 0x7f000000 && -1 < (int)fVar54);
  fVar58 = (float)((int)(uVar35 << 0x1f) >> 0x1f & (uint)(fVar54 * param_14));
  fVar54 = (float)((int)(uVar35 << 0x1f) >> 0x1f & (uint)(fVar54 * param_15));
  pfStack_120[(longlong)pbVar12 * 2 + -2] = fVar58;
  (pfStack_120 + (longlong)pbVar12 * 2 + -2)[1] = fVar54;
  plStack_2d8 = param_1;
  if (*param_20 == 1) {
    auStack_170[1] = param_20[3];
    ppppppiStack_178 = (int ******)param_20[1];
    auStack_170[0] = param_20[2];
    pfVar29 = pfStack_120;
  }
  else {
    auStack_208[1] = 0;
    pfStack_1f0 = (float *)*param_22;
    pbStack_190 = param_22[1];
    pbVar48 = param_22[2];
    *param_22 = (byte *)0x0;
    param_22[1] = (byte *)0x4;
    param_22[2] = (byte *)0x0;
    fVar25 = _DAT_142e37ae4;
    fVar57 = _DAT_142e37874;
    uVar35 = _DAT_142e377e0;
    pfStack_1e8 = (float *)pbStack_128;
    pfStack_188 = pfStack_120;
    pbStack_128 = (byte *)0x0;
    pfStack_120 = (float *)0x4;
    pbStack_118 = (byte *)0x0;
    pbStack_1e0 = pbStack_140;
    pfStack_180 = pfStack_138;
    pbStack_140 = (byte *)0x0;
    pfStack_138 = (float *)0x4;
    pbStack_130 = (byte *)0x0;
    pbStack_2d0 = pbStack_158;
    ppppppiStack_198 = (int ******)pbStack_150;
    pbStack_158 = (byte *)0x0;
    pbStack_150 = (byte *)0x4;
    pbStack_148 = (byte *)0x0;
    pbStack_2f8 = pbStack_1c8;
    pbStack_308 = pbStack_1d8;
    uStack_300 = uStack_1d0;
    pbStack_1d8 = _DAT_143013c68;
    uStack_1d0 = _UNK_143013c70;
    pbStack_1c8 = (byte *)0x0;
    pbStack_228 = (byte *)0x0;
    if (pbVar11 < pbVar48) {
      pbVar48 = pbVar11;
    }
    uStack_220 = 4;
    if (pbVar50 < pbVar48) {
      pbVar48 = pbVar50;
    }
    pbStack_218 = (byte *)0x0;
    if (pbVar38 < pbVar48) {
      pbVar48 = pbVar38;
    }
    arg0 = (ulonglong *)((ulonglong)pbVar32 & 0xfffffffffffffff8);
    uVar51 = (ulonglong)((uint)uVar39 & 7) + (ulonglong)((uint)pbVar32 & 7) * 8;
    uVar41 = (uVar39 >> 3) + uVar51;
    pbStack_230 = (byte *)(CONCAT71(pbStack_230._1_7_,(char)uVar41) & 0xffffffffffffff3f);
    bVar52 = false;
    pbVar32 = (byte *)0x0;
    puVar31 = arg0;
    uVar30 = uVar51;
    fVar55 = 0.0;
    if (pbVar48 != (byte *)0x0) {
      do {
        while( true ) {
          sVar49 = (sbyte)uVar30;
          if ((puVar31 == arg0 + (uVar41 >> 6)) && (sVar49 == (sbyte)pbStack_230))
          goto LAB_14089c42a;
          puVar42 = (ulonglong *)
                    ((ulonglong)((uint)(uVar30 + 1 >> 3) & 0x1ffffff8) + (longlong)puVar31);
          if (puVar42 == (ulonglong *)0x0) {
            uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430133d0);
          }
          pbVar11 = pbVar32 + 1;
          uVar30 = (ulonglong)((byte)(uVar30 + 1) & 0x3f);
          uVar47 = *puVar31 >> sVar49;
          fVar16 = *(float *)(pbStack_190 + (longlong)pbVar32 * 8);
          fVar17 = *(float *)((longlong)(pbStack_190 + (longlong)pbVar32 * 8) + 4);
          fVar7 = *(float *)((longlong)ppppppiStack_198 + (longlong)pbVar32 * 4);
          fVar8 = pfStack_180[(longlong)pbVar32];
          uVar9 = *(undefined8 *)(pfStack_188 + (longlong)pbVar32 * 2);
          pbVar32 = pbVar11;
          puVar31 = puVar42;
          if (bVar52) break;
LAB_14089d069:
          if (pbStack_218 == pbStack_228) {
LAB_14089d079:
            pbVar50 = pbStack_218;
            uStack_f3 = 1;
            pdb_142db07d0(&pbStack_228);
            pbStack_218 = pbVar50;
          }
LAB_14089d08d:
          pbVar50 = pbStack_118;
          pfVar29 = (float *)(uStack_220 + (longlong)pbStack_218 * 8);
          *pfVar29 = fVar16;
          pfVar29[1] = fVar17;
          pbStack_218 = pbStack_218 + 1;
          if (pbStack_118 == pbStack_128) {
            uStack_f3 = 1;
            pdb_142db07d0(&pbStack_128);
          }
          pbVar38 = pbStack_130;
          *(undefined8 *)(pfStack_120 + (longlong)pbVar50 * 2) = uVar9;
          pbStack_118 = pbVar50 + 1;
          if (pbStack_130 == pbStack_140) {
            uStack_f3 = 1;
            pdb_142d89720(&pbStack_140);
          }
          pbVar50 = pbStack_148;
          pfStack_138[(longlong)pbVar38] = fVar8;
          pbStack_130 = pbVar38 + 1;
          if (pbStack_148 == pbStack_158) {
            uStack_f3 = 1;
            pdb_142d89720(auStack_170 + 3);
          }
          *(float *)(pbStack_150 + (longlong)pbVar50 * 4) = fVar7;
          pbStack_148 = pbVar50 + 1;
          uStack_f3 = 1;
          bVar52 = true;
          pdb_1408a1a90(&pbStack_1d8,uVar47 & 0xffffff01);
          fVar55 = fVar7;
          fVar58 = fVar16;
          fVar54 = fVar17;
          if (pbVar48 <= pbVar11) goto LAB_14089c42a;
        }
        fVar54 = (float)((uint)(fVar55 - fVar7) & uVar35) /
                 SQRT((fVar54 - fVar17) * (fVar54 - fVar17) + (fVar58 - fVar16) * (fVar58 - fVar16))
        ;
        bVar27 = 3;
        if (fVar54 <= fVar57) {
          bVar27 = (fVar25 < fVar54) + 1;
        }
        pppppppiVar34 = &ppppppiStack_210;
        uVar33 = auStack_208[1];
        if (1 < auStack_208[1]) {
          pppppppiVar34 = (int *******)ppppppiStack_210;
          uVar33 = auStack_208[0];
        }
        if ((uVar33 == 0) ||
           (pbVar50 = (byte *)((longlong)pppppppiVar34 + (uVar33 - 1) * 4), pbVar50 == (byte *)0x0))
        {
LAB_14089d020:
          puVar42 = auStack_208;
          uVar33 = auStack_208[1];
          if (auStack_208[1] < 2) {
            uVar33 = 1;
            puVar42 = auStack_208 + 1;
          }
          uVar36 = auStack_208[auStack_208[1] < 2];
          if (auStack_208[auStack_208[1] < 2] == uVar33) {
            uStack_f3 = 1;
            pdb_142de6980(&ppppppiStack_210);
            puVar42 = auStack_208;
            pppppppiVar34 = (int *******)ppppppiStack_210;
            uVar36 = auStack_208[0];
          }
          *(uint *)((longlong)pppppppiVar34 + uVar36 * 4) = bVar27 | 0x10100;
          *puVar42 = *puVar42 + 1;
          goto LAB_14089d069;
        }
        bVar10 = *pbVar50;
        bVar53 = bVar10 < 2;
        bVar52 = bVar10 == bVar27 && !bVar53;
        if (fVar54 <= fVar25) {
          bVar52 = bVar53;
        }
        if ((bVar10 == bVar27) && ((bool)(bVar53 & bVar52) != false)) {
          if (*(char *)((longlong)pppppppiVar34 + uVar33 * 4 + -3) == '\0') goto LAB_14089d020;
        }
        else if (bVar52 == (bool)(bVar53 & bVar52)) goto LAB_14089d020;
        if (fVar54 <= fVar57) {
          psVar1 = (short *)((longlong)pppppppiVar34 + uVar33 * 4 + -2);
          *psVar1 = *psVar1 + 1;
          if (pbStack_218 == pbStack_228) goto LAB_14089d079;
          goto LAB_14089d08d;
        }
        if (pbStack_218 == (byte *)0x0) {
LAB_14089d3a0:
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430138c0);
        }
        lVar43 = uStack_220 + (longlong)pbStack_218 * 8;
        pfVar29 = (float *)(lVar43 + -8);
        if (pfVar29 == (float *)0x0) goto LAB_14089d3a0;
        *pfVar29 = fVar16;
        *(float *)(lVar43 + -4) = fVar17;
        if ((pbStack_118 == (byte *)0x0) ||
           (pfStack_120 + (longlong)pbStack_118 * 2 + -2 == (float *)0x0)) {
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430138d8);
        }
        *(undefined8 *)(pfStack_120 + (longlong)pbStack_118 * 2 + -2) = uVar9;
        if ((pbStack_130 == (byte *)0x0) ||
           (pfStack_138 + (longlong)(pbStack_130 + -1) == (float *)0x0)) {
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430138f0);
        }
        pfStack_138[(longlong)(pbStack_130 + -1)] = fVar8;
        if ((pbStack_148 == (byte *)0x0) ||
           ((float *)(pbStack_150 + (longlong)pbStack_148 * 4 + -4) == (float *)0x0)) {
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143013908);
        }
        *(float *)(pbStack_150 + (longlong)pbStack_148 * 4 + -4) = fVar7;
        if (uStack_1d0 >> 3 == 0) {
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143013920);
        }
        uVar36 = ((uStack_1d0 >> 3) +
                 (ulonglong)((uint)uStack_1d0 & 7) + (ulonglong)((uint)pbStack_1d8 & 7) * 8) - 1;
        uVar40 = uVar36 >> 6;
        uVar33 = (ulonglong)pbStack_1d8 & 0xfffffffffffffff8;
        uVar36 = 1L << ((byte)uVar36 & 0x3f);
        if ((uVar47 & 1) == 0) {
          uVar36 = ~uVar36 & *(ulonglong *)(uVar33 + uVar40 * 8);
        }
        else {
          uVar36 = uVar36 | *(ulonglong *)(uVar33 + uVar40 * 8);
        }
        *(ulonglong *)(uVar33 + uVar40 * 8) = uVar36;
        bVar52 = true;
        fVar55 = fVar7;
        fVar58 = fVar16;
        fVar54 = fVar17;
      } while (pbVar11 < pbVar48);
    }
LAB_14089c42a:
    pbStack_1a8 = pbStack_218;
    pbStack_1b8 = pbStack_228;
    uStack_1b0 = uStack_220;
    uStack_f3 = 0;
    pdb_14148cb10(&ppbStack_2c8,&pbStack_1b8,&UNK_1430138a8);
    if (*param_22 != (byte *)0x0) {
      pub_1406abac0(param_22[1],(longlong)*param_22 << 3,4);
    }
    if (param_22[3] != (byte *)0x0) {
      pub_1406abac0(param_22[4],(longlong)param_22[3] << 2,4);
    }
    param_22[6] = (byte *)pfStack_298;
    param_22[4] = (byte *)CONCAT44(fStack_2a4,uStack_2a8);
    param_22[5] = (byte *)CONCAT44(uStack_29c,fStack_2a0);
    param_22[2] = (byte *)ppbStack_2b8;
    param_22[3] = (byte *)ppbStack_2b0;
    *param_22 = (byte *)ppbStack_2c8;
    param_22[1] = (byte *)ppbStack_2c0;
    ppppppiStack_178 = ppppppiStack_210;
    auStack_170[0] = auStack_208[0];
    auStack_170[1] = auStack_208[1];
    if ((((7 < uVar39) || (arg0 != (ulonglong *)0x8)) || (uVar51 != 0)) &&
       (pbStack_2f8 != (byte *)0x0)) {
      pub_1406abac0((byte *)arg0,(longlong)pbStack_2f8 << 3,8);
    }
    if (pbStack_2d0 != (byte *)0x0) {
      pub_1406abac0((byte *)ppppppiStack_198,(longlong)pbStack_2d0 << 2,4);
    }
    if (pbStack_1e0 != (byte *)0x0) {
      pub_1406abac0((byte *)pfStack_180,(longlong)pbStack_1e0 << 2,4);
    }
    if (pfStack_1e8 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_188,(longlong)pfStack_1e8 << 3,4);
    }
    pfVar29 = (float *)0x0;
    if (pfStack_1f0 != (float *)0x0) {
      pfVar29 = (float *)((longlong)pfStack_1f0 << 3);
      pub_1406abac0(pbStack_190,(ulonglong)pfVar29,4);
    }
  }
  iVar37 = (int)pfVar29;
  if (*param_6 == '\0') {
    bVar27 = param_6[1];
    bVar10 = param_6[2];
    if (((bVar27 | bVar10) & 1) != 0) {
      bVar52 = auStack_170[1] < 2;
      puVar31 = auStack_170 + 1;
      pppppppiVar34 = &ppppppiStack_178;
      if (!bVar52) {
        puVar31 = auStack_170;
        pppppppiVar34 = (int *******)ppppppiStack_178;
      }
      uVar39 = 1;
      if (!bVar52) {
        uVar39 = auStack_170[1];
      }
      uVar51 = auStack_170[bVar52];
      if (auStack_170[bVar52] == uVar39) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142de6980(&ppppppiStack_178);
        pppppppiVar34 = (int *******)ppppppiStack_178;
        uVar51 = auStack_170[0];
        puVar31 = auStack_170;
      }
      if (uVar51 != 0) {
        pub_142e32770((int *)((longlong)pppppppiVar34 + 4),pppppppiVar34,uVar51 * 4);
      }
      *puVar31 = uVar51 + 1;
      *(uint *)pppppppiVar34 = (bVar27 ^ 1) + (bVar10 ^ 1) * 0x100 + 0x10000;
      ppbStack_2b8 = (byte **)*param_22;
      ppbStack_2c8 = (byte **)param_22[1];
      ppbStack_2b0 = ppbStack_2c8 + (longlong)param_22[2];
      uStack_2a8 = 1;
      fStack_2a4 = param_8 - fVar5 * (float)*(undefined8 *)(param_6 + 4);
      fStack_2a0 = param_9 - fVar5 * (float)((ulonglong)*(undefined8 *)(param_6 + 4) >> 0x20);
      uStack_f1 = 1;
      uStack_f2 = 0;
      ppbStack_2c0 = ppbStack_2c8;
      pdb_141498190(&pbStack_1b8,&ppbStack_2c8);
      uStack_f1 = 1;
      uStack_f2 = 0;
      pdb_14148cb10(&ppbStack_2c8,&pbStack_1b8,&UNK_143013878);
      if (param_22[3] != (byte *)0x0) {
        pub_1406abac0(param_22[4],(longlong)param_22[3] << 2,4);
      }
      pbVar32 = pbStack_148;
      uVar26 = uStack_1f4;
      param_22[6] = (byte *)pfStack_298;
      param_22[4] = (byte *)CONCAT44(fStack_2a4,uStack_2a8);
      param_22[5] = (byte *)CONCAT44(uStack_29c,fStack_2a0);
      param_22[2] = (byte *)ppbStack_2b8;
      param_22[3] = (byte *)ppbStack_2b0;
      *param_22 = (byte *)ppbStack_2c8;
      param_22[1] = (byte *)ppbStack_2c0;
      if (pbStack_148 == pbStack_158) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142d89720(auStack_170 + 3);
      }
      pbVar11 = pbStack_150;
      if (pbVar32 != (byte *)0x0) {
        pub_142e32770(pbStack_150 + 4,pbStack_150,(longlong)pbVar32 * 4);
      }
      pbVar50 = pbStack_130;
      *(undefined4 *)pbVar11 = uVar26;
      pbStack_148 = pbVar32 + 1;
      if (pbStack_130 == pbStack_140) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142d89720(&pbStack_140);
      }
      pfVar29 = pfStack_138;
      if (pbVar50 != (byte *)0x0) {
        pub_142e32770(pfStack_138 + 1,pfStack_138,(longlong)pbVar50 * 4);
      }
      pbVar32 = pbStack_118;
      *pfVar29 = fVar5;
      pbStack_130 = pbVar50 + 1;
      if (pbStack_118 == pbStack_128) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142db07d0(&pbStack_128);
      }
      pfVar29 = pfStack_120;
      if (pbVar32 != (byte *)0x0) {
        pub_142e32770(pfStack_120 + 2,pfStack_120,(longlong)pbVar32 * 8);
      }
      *pfVar29 = param_12;
      pfVar29[1] = param_13;
      pbStack_118 = pbVar32 + 1;
      uStack_f1 = 1;
      uStack_f2 = 1;
      iVar37 = 0;
      pdb_1408a1a90(&pbStack_1d8);
      uVar39 = uStack_1d0;
      pbVar32 = pbStack_1d8;
      uVar51 = uStack_1d0 >> 3;
      if (uVar51 != 1) {
        if (uVar51 == 0) {
          uStack_f1 = 1;
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143013dc8,0x6d,&UNK_143013e60);
        }
        ppbStack_2c8 = (byte **)0x0;
        uVar41 = (ulonglong)((uint)uStack_1d0 & 7);
        uVar30 = (uVar41 + (ulonglong)((uint)pbStack_1d8 & 7) * 8 + uVar51) - 1;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_1408a1c10(&ppbStack_2c8,8,
                      (ulonglong)((uint)(uVar30 >> 3) & 7) |
                      ((ulonglong)pbStack_1d8 & 0xfffffffffffffff8) + (uVar30 >> 6) * 8,
                      uStack_1d0 - (uVar51 * 8 + -8) & 0xfffffffffffffff8 |
                      (ulonglong)((uint)uVar30 & 7));
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_1414eaf00(pbVar32,uVar39,uVar51 - 1,1);
        uVar41 = uVar41 | 8;
        iVar37 = (int)uVar41;
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_1408a1c10(pbVar32,uVar41,&ppbStack_2c8);
      }
    }
  }
  if (*param_7 == '\0') {
    bVar27 = param_7[1];
    bVar10 = param_7[2];
    if (((bVar27 | bVar10) & 1) != 0) {
      bVar52 = auStack_170[1] < 2;
      puVar31 = auStack_170 + 1;
      pppppppiVar34 = &ppppppiStack_178;
      if (!bVar52) {
        puVar31 = auStack_170;
        pppppppiVar34 = (int *******)ppppppiStack_178;
      }
      uVar39 = 1;
      if (!bVar52) {
        uVar39 = auStack_170[1];
      }
      uVar51 = auStack_170[bVar52];
      if (auStack_170[bVar52] == uVar39) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142de6980(&ppppppiStack_178);
        puVar31 = auStack_170;
        pppppppiVar34 = (int *******)ppppppiStack_178;
        uVar51 = auStack_170[0];
      }
      *(uint *)((longlong)pppppppiVar34 + uVar51 * 4) =
           (bVar10 ^ 1) + (bVar27 ^ 1) * 0x100 + 0x10000;
      *puVar31 = *puVar31 + 1;
      ppbStack_2b8 = (byte **)*param_22;
      ppbStack_2c8 = (byte **)param_22[1];
      ppbStack_2b0 = ppbStack_2c8 + (longlong)param_22[2];
      uStack_2a8 = 1;
      fStack_2a4 = param_10 - fVar6 * (float)*(undefined8 *)(param_7 + 4);
      fStack_2a0 = param_11 - fVar6 * (float)((ulonglong)*(undefined8 *)(param_7 + 4) >> 0x20);
      uStack_f1 = 1;
      uStack_f2 = 0;
      ppbStack_2c0 = ppbStack_2c8;
      pdb_141496cf0(&pbStack_1b8,&ppbStack_2c8);
      uStack_f1 = 1;
      uStack_f2 = 0;
      pdb_14148cb10(&ppbStack_2c8,&pbStack_1b8,&UNK_143013890);
      uVar39 = 0;
      if (param_22[3] != (byte *)0x0) {
        uVar39 = (longlong)param_22[3] << 2;
        pub_1406abac0(param_22[4],uVar39,4);
      }
      pbVar32 = pbStack_148;
      uVar26 = uStack_1f8;
      param_22[6] = (byte *)pfStack_298;
      param_22[4] = (byte *)CONCAT44(fStack_2a4,uStack_2a8);
      param_22[5] = (byte *)CONCAT44(uStack_29c,fStack_2a0);
      param_22[2] = (byte *)ppbStack_2b8;
      param_22[3] = (byte *)ppbStack_2b0;
      *param_22 = (byte *)ppbStack_2c8;
      param_22[1] = (byte *)ppbStack_2c0;
      if (pbStack_148 == pbStack_158) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142d89720(auStack_170 + 3);
      }
      pbVar11 = pbStack_130;
      *(undefined4 *)(pbStack_150 + (longlong)pbVar32 * 4) = uVar26;
      pbStack_148 = pbVar32 + 1;
      if (pbStack_130 == pbStack_140) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142d89720(&pbStack_140);
      }
      pbVar32 = pbStack_118;
      pfStack_138[(longlong)pbVar11] = fVar6;
      pbStack_130 = pbVar11 + 1;
      if (pbStack_118 == pbStack_128) {
        uStack_f1 = 1;
        uStack_f2 = 1;
        pdb_142db07d0(&pbStack_128);
      }
      pfStack_120[(longlong)pbVar32 * 2] = param_14;
      pfStack_120[(longlong)pbVar32 * 2 + 1] = param_15;
      pbStack_118 = pbVar32 + 1;
      uStack_f1 = 1;
      uStack_f2 = 1;
      iVar37 = (int)CONCAT71((int7)(uVar39 >> 8),1);
      pdb_1408a1a90(&pbStack_1d8);
    }
  }
  uStack_f1 = 1;
  uStack_f2 = 1;
  iVar28 = pdb_140a61840(param_16);
  pbVar50 = pbStack_118;
  pbVar11 = pbStack_130;
  pbVar32 = pbStack_148;
  uVar51 = auStack_170[1];
  uVar39 = auStack_170[0];
  ppppppiStack_198 = ppppppiStack_178;
  pfStack_298 = (float *)param_22[6];
  ppbStack_2c8 = (byte **)*param_22;
  ppbStack_2c0 = (byte **)param_22[1];
  ppbStack_2b8 = (byte **)param_22[2];
  ppbStack_2b0 = (byte **)param_22[3];
  uStack_2a8 = SUB84(param_22[4],0);
  fStack_2a4 = (float)((ulonglong)param_22[4] >> 0x20);
  fStack_2a0 = SUB84(param_22[5],0);
  uStack_29c = (undefined4)((ulonglong)param_22[5] >> 0x20);
  pbStack_190 = pbStack_158;
  pbStack_230 = pbStack_150;
  pfStack_188 = (float *)pbStack_140;
  pfStack_1f0 = pfStack_138;
  pfStack_180 = (float *)pbStack_128;
  pfStack_1e8 = pfStack_120;
  pbStack_1a8 = pbStack_1c8;
  pbStack_1b8 = pbStack_1d8;
  uStack_1b0 = uStack_1d0;
  if (param_21[3] == 0) {
    uVar44 = 0;
  }
  else {
    pbStack_1e0 = (byte *)auStack_170[1];
    iStack_2e8 = iVar28;
    iStack_2e4 = iVar37;
    uVar30 = pdb_1400af680(param_21 + 4,&iStack_2e8);
    bVar27 = (byte)(uVar30 >> 0x39);
    auVar56 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar56 = pshuflw(auVar56,auVar56,0);
    lVar43 = 0;
    while( true ) {
      uVar30 = uVar30 & param_21[1];
      pcVar3 = (char *)(*param_21 + uVar30);
      auVar60[0] = -(*pcVar3 == auVar56[0]);
      auVar60[1] = -(pcVar3[1] == auVar56[1]);
      auVar60[2] = -(pcVar3[2] == auVar56[2]);
      auVar60[3] = -(pcVar3[3] == auVar56[3]);
      auVar60[4] = -(pcVar3[4] == auVar56[4]);
      auVar60[5] = -(pcVar3[5] == auVar56[5]);
      auVar60[6] = -(pcVar3[6] == auVar56[6]);
      auVar60[7] = -(pcVar3[7] == auVar56[7]);
      auVar60[8] = -(pcVar3[8] == auVar56[0]);
      auVar60[9] = -(pcVar3[9] == auVar56[1]);
      auVar60[10] = -(pcVar3[10] == auVar56[2]);
      auVar60[0xb] = -(pcVar3[0xb] == auVar56[3]);
      auVar60[0xc] = -(pcVar3[0xc] == auVar56[4]);
      auVar60[0xd] = -(pcVar3[0xd] == auVar56[5]);
      auVar60[0xe] = -(pcVar3[0xe] == auVar56[6]);
      auVar60[0xf] = -(pcVar3[0xf] == auVar56[7]);
      uVar45 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
      uVar35 = (uint)uVar45;
      while (uVar45 != 0) {
        uVar14 = 0;
        for (uVar15 = uVar35; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        lVar46 = *param_21 + (uVar14 + uVar30 & param_21[1]) * -8;
        if ((iVar28 == *(int *)(lVar46 + -8)) && (uVar44 = 1, iVar37 == *(int *)(lVar46 + -4)))
        goto LAB_14089d1ca;
        uVar45 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar45);
      }
      auVar59[0] = -(*pcVar3 == -1);
      auVar59[1] = -(pcVar3[1] == -1);
      auVar59[2] = -(pcVar3[2] == -1);
      auVar59[3] = -(pcVar3[3] == -1);
      auVar59[4] = -(pcVar3[4] == -1);
      auVar59[5] = -(pcVar3[5] == -1);
      auVar59[6] = -(pcVar3[6] == -1);
      auVar59[7] = -(pcVar3[7] == -1);
      auVar59[8] = -(pcVar3[8] == -1);
      auVar59[9] = -(pcVar3[9] == -1);
      auVar59[10] = -(pcVar3[10] == -1);
      auVar59[0xb] = -(pcVar3[0xb] == -1);
      auVar59[0xc] = -(pcVar3[0xc] == -1);
      auVar59[0xd] = -(pcVar3[0xd] == -1);
      auVar59[0xe] = -(pcVar3[0xe] == -1);
      auVar59[0xf] = -(pcVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar59 >> 0x3f,0) & 1) != 0) || (SUB161(auVar59 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar59 >> 0x4f,0) & 1) != 0) || (SUB161(auVar59 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar59 >> 0x5f,0) & 1) != 0) || (SUB161(auVar59 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar59 >> 0x6f,0) & 1) != 0) || (SUB161(auVar59 >> 0x77,0) & 1) != 0) ||
          auVar59[0xf] < '\0') break;
      uVar30 = uVar30 + lVar43 + 0x10;
      lVar43 = lVar43 + 0x10;
    }
    uVar44 = 0;
  }
LAB_14089d1ca:
  lVar43 = *plStack_2e0;
  lVar46 = plStack_2e0[1];
  lVar20 = plStack_2e0[2];
  lVar21 = plStack_2e0[3];
  lVar22 = plStack_2e0[4];
  lVar23 = plStack_2e0[5];
  lVar24 = plStack_2e0[7];
  plStack_2d8[0x20] = plStack_2e0[6];
  plStack_2d8[0x21] = lVar24;
  plStack_2d8[0x1e] = lVar22;
  plStack_2d8[0x1f] = lVar23;
  plStack_2d8[0x1c] = lVar20;
  plStack_2d8[0x1d] = lVar21;
  plStack_2d8[0x1a] = lVar43;
  plStack_2d8[0x1b] = lVar46;
  *(int *)(plStack_2d8 + 0x25) = iVar28;
  *(int *)((longlong)plStack_2d8 + 300) = iVar37;
  plStack_2d8[6] = (longlong)pfStack_298;
  *plStack_2d8 = (longlong)ppbStack_2c8;
  plStack_2d8[1] = (longlong)ppbStack_2c0;
  plStack_2d8[2] = (longlong)ppbStack_2b8;
  plStack_2d8[3] = (longlong)ppbStack_2b0;
  plStack_2d8[4] = CONCAT44(fStack_2a4,uStack_2a8);
  plStack_2d8[5] = CONCAT44(uStack_29c,fStack_2a0);
  plStack_2d8[7] = (longlong)pbStack_190;
  plStack_2d8[8] = (longlong)pbStack_230;
  plStack_2d8[9] = (longlong)pbVar32;
  plStack_2d8[10] = (longlong)pfStack_188;
  plStack_2d8[0xb] = (longlong)pfStack_1f0;
  plStack_2d8[0xc] = (longlong)pbVar11;
  plStack_2d8[0xd] = (longlong)pfStack_180;
  plStack_2d8[0xe] = (longlong)pfStack_1e8;
  plStack_2d8[0xf] = (longlong)pbVar50;
  plStack_2d8[0x24] = (longlong)pbStack_1a8;
  plStack_2d8[0x22] = (longlong)pbStack_1b8;
  plStack_2d8[0x23] = uStack_1b0;
  plStack_2d8[0x26] = (longlong)ppppppiStack_198;
  plStack_2d8[0x27] = uVar39;
  plStack_2d8[0x28] = uVar51;
  *(undefined1 *)(plStack_2d8 + 0x29) = uVar44;
  plStack_2d8[0x13] = -0x8000000000000000;
  plStack_2d8[0x10] = 0;
  plStack_2d8[0x11] = 4;
  plStack_2d8[0x12] = 0;
  return plStack_2d8;
}

