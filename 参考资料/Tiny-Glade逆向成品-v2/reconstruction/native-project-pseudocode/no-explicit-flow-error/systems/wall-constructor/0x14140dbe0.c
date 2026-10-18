// VA 0x14140dbe0, PDB extent 14052 bytes
// system_wall_constructor::construct_platform_stairs::wooden::construct_wooden_platform_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::wooden::construct_wooden_platform_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden.rs
   Extent: 14052 */

void pdb_14140dbe0(undefined8 param_1,longlong param_2,int *param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6,float *param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  float *pfVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  float *unaff_RDI;
  longlong lVar23;
  byte *pbVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong *plVar27;
  bool bVar28;
  undefined1 auVar29 [8];
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined4 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined4 uVar51;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar42 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar52;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar41;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 in_stack_fffffffffffffab8;
  undefined *puVar70;
  float *pfStack_528;
  byte *pbStack_520;
  undefined8 uStack_518;
  byte *pbStack_510;
  ulonglong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  float fStack_4f0;
  float fStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  float *pfStack_4d8;
  byte *pbStack_4d0;
  byte *pbStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  byte *pbStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_440;
  undefined8 uStack_418;
  undefined8 uStack_3f0;
  undefined8 uStack_3c8;
  undefined8 uStack_3a0;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [16];
  float fStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong *plStack_348;
  ulonglong uStack_340;
  longlong lStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  undefined8 uStack_320;
  float *pfStack_318;
  byte *pbStack_310;
  float fStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulonglong uStack_2f0;
  longlong lStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float *pfStack_2c8;
  byte *pbStack_2c0;
  float *pfStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  ulonglong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [16];
  float *pfStack_228;
  byte *pbStack_220;
  longlong lStack_210;
  longlong lStack_208;
  ulonglong uStack_200;
  undefined1 auStack_1f8 [16];
  longlong lStack_1e8;
  int iStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  float fStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_155;
  float fStack_154;
  ulonglong uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  byte *pbStack_130;
  longlong lStack_120;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb_03;
  
  fVar69 = _DAT_142e36f28;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_340 = param_4;
  uStack_290 = param_1;
  if (*param_3 == 1) {
    uVar41 = *(undefined8 *)(param_3 + 5);
    uStack_258 = *(undefined8 *)(param_3 + 1);
    pbStack_250 = *(byte **)(param_3 + 3);
    uStack_248._0_4_ = (undefined4)uVar41;
    uStack_248._4_4_ = (undefined4)((ulonglong)uVar41 >> 0x20);
    uStack_2ac = (undefined4)uStack_248;
    uStack_2b0 = uStack_248._4_4_;
    uStack_518 = param_1;
    uStack_248 = uVar41;
    pdb_140df2970(&pfStack_2c8,uVar41,param_3,&UNK_143307d68);
    lStack_210 = 0;
    lStack_208 = 8;
    uStack_200 = 0;
    uStack_150 = param_5 * 0x68 + param_4;
    uStack_288 = 8;
    uVar20 = 0;
    while (param_4 != uStack_150) {
      if (*(longlong *)(param_4 + 0x28) == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143307dc8);
      }
      pfVar15 = *(float **)(param_4 + 0x20);
      pfVar25 = pfVar15 + *(longlong *)(param_4 + 0x28) * 3;
      if (pfVar25 == (float *)0xc) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143307de0);
      }
      fVar69 = pfVar25[-3];
      fVar65 = pfVar25[-1];
      fVar57 = *pfVar15;
      fVar59 = pfVar15[2];
      uStack_f1 = 1;
      pdb_140df1c10(&uStack_4b8,&uStack_258);
      pbVar24 = pbStack_250;
      fVar68 = (float)uStack_4b8;
      fVar54 = uStack_4b8._4_4_;
      fVar55 = (float)uStack_4b0;
      fVar63 = uStack_4b0._4_4_;
      uStack_f1 = 1;
      pdb_140df1c10(&uStack_4b8,&uStack_258);
      fVar61 = (float)((ulonglong)pbVar24 >> 0x20);
      fVar60 = SUB84(pbVar24,0);
      fVar64 = (float)uStack_4b8;
      fVar39 = uStack_4b8._4_4_;
      fVar62 = (float)uStack_4b0;
      fVar58 = uStack_4b0._4_4_;
      uStack_4a8 = pfStack_2b8;
      uStack_4b8 = pfStack_2c8;
      uStack_4b0 = (code *)pbStack_2c0;
      uStack_f1 = 1;
      fVar32 = (float)pdb_140df2570(&uStack_4b8);
      uStack_f1 = 1;
      fVar33 = (float)pdb_140df3ee0(&uStack_4b8);
      fVar36 = (float)uStack_4a8;
      fVar37 = uStack_4a8._4_4_;
      uStack_f1 = 1;
      fVar34 = (float)pdb_140df3ee0(&uStack_4b8);
      fVar32 = fVar32 * fVar33;
      fVar33 = 0.0;
      if ((((_DAT_143009d64 < (float)((uint)fVar32 & _DAT_142e377e0)) &&
           (fVar33 = fVar37, _DAT_143009d64 < (float)((uint)(fVar32 - fVar37) & _DAT_142e377e0))) &&
          (fVar33 = fVar37 + fVar36,
          _DAT_143009d64 < (float)((uint)(fVar32 - fVar33) & _DAT_142e377e0))) &&
         ((fVar33 = fVar37 + fVar37 + fVar36,
          _DAT_143009d64 < (float)((uint)(fVar32 - fVar33) & _DAT_142e377e0) &&
          (fVar33 = fVar34, _DAT_143009d64 < (float)((uint)(fVar32 - fVar34) & _DAT_142e377e0))))) {
        fVar33 = fVar32;
      }
      uStack_4a8 = pfStack_2b8;
      uStack_4b8 = pfStack_2c8;
      uStack_4b0 = (code *)pbStack_2c0;
      uStack_f1 = 1;
      fVar34 = (float)pdb_140df2570(&uStack_4b8);
      uStack_f1 = 1;
      fVar32 = (float)pdb_140df3ee0(&uStack_4b8);
      fVar36 = (float)uStack_4a8;
      fVar37 = uStack_4a8._4_4_;
      uStack_f1 = 1;
      fVar35 = (float)pdb_140df3ee0(&uStack_4b8);
      fVar34 = fVar34 * fVar32;
      fVar32 = 0.0;
      if (((_DAT_143009d64 < (float)((uint)fVar34 & _DAT_142e377e0)) &&
          (fVar32 = fVar37, _DAT_143009d64 < (float)((uint)(fVar34 - fVar37) & _DAT_142e377e0))) &&
         ((fVar32 = fVar37 + fVar36,
          _DAT_143009d64 < (float)((uint)(fVar34 - fVar32) & _DAT_142e377e0) &&
          ((fVar32 = fVar37 + fVar37 + fVar36,
           _DAT_143009d64 < (float)((uint)(fVar34 - fVar32) & _DAT_142e377e0) &&
           (fVar32 = fVar35, _DAT_143009d64 < (float)((uint)(fVar34 - fVar35) & _DAT_142e377e0))))))
         ) {
        fVar32 = fVar34;
      }
      uStack_f1 = 1;
      fVar36 = (float)pdb_140a0bbc0(param_4);
      uStack_f1 = 1;
      fVar37 = (float)pdb_140df3ee0(&uStack_258);
      if (fVar36 <= fVar37 * _DAT_142e36f50) {
        bVar10 = false;
      }
      else {
        fVar68 = ((fVar59 - fVar61) * fVar54 + (fVar57 - fVar60) * fVar68) -
                 ((fVar65 - fVar61) * fVar39 + (fVar69 - fVar60) * fVar64);
        fVar69 = ((fVar59 - fVar61) * fVar63 + (fVar57 - fVar60) * fVar55) -
                 ((fVar65 - fVar61) * fVar58 + (fVar69 - fVar60) * fVar62);
        bVar10 = SQRT(fVar69 * fVar69 + fVar68 * fVar68) <= _DAT_143009d64;
      }
      uStack_1c8 = pfStack_2b8;
      uStack_1d8 = pfStack_2c8;
      uStack_1d0 = pbStack_2c0;
      uStack_f1 = 1;
      fStack_108 = (float)pdb_140df3ee0(&uStack_1d8);
      fVar69 = fVar33;
      if ((bVar10) || (fVar69 = fVar32, fVar32 < fVar33)) {
        fVar32 = fVar69 + fStack_108;
      }
      param_4 = param_4 + 0x68;
      auStack_188 = ZEXT416((uint)(float)uStack_1c8);
      fVar69 = uStack_1c8._4_4_;
      _auStack_118 = ZEXT416((uint)(uStack_1c8._4_4_ + (float)uStack_1c8));
      auStack_238 = ZEXT416((uint)(uStack_1c8._4_4_ + uStack_1c8._4_4_ + (float)uStack_1c8));
      uStack_4b8 = (float *)0x0;
      uStack_4b0 = (code *)0x8;
      uStack_4a8 = (float *)0x0;
      pfVar25 = (float *)0x0;
      bVar10 = true;
      fVar65 = 0.0;
      do {
        bVar28 = bVar10;
        fVar65 = fVar65 * fStack_108;
        fVar68 = fVar65 + 0.0;
        fVar59 = fVar69 + fVar65;
        uVar30 = -(uint)NAN(fVar33);
        fVar57 = fVar68;
        if (fVar68 <= fVar33) {
          fVar57 = fVar33;
        }
        fVar64 = (float)(~uVar30 & (uint)fVar57 | uVar30 & (uint)fVar68);
        uVar31 = -(uint)NAN(fVar32);
        fVar57 = fVar59;
        if (fVar32 <= fVar59) {
          fVar57 = fVar32;
        }
        fVar57 = (float)(~uVar31 & (uint)fVar57 | uVar31 & (uint)fVar59);
        if (_DAT_143009d64 < fVar57 - fVar64) {
          if (pfVar25 == uStack_4b8) {
            pdb_142d7e980(&uStack_4b8);
          }
          lVar16 = (longlong)pfVar25 * 0x10;
          pbVar24 = (byte *)(uStack_4b0 + lVar16);
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(uint *)(uStack_4b0 + lVar16 + 8) = ~-(uint)(fVar64 == fVar65) & (uint)(fVar64 - fVar68);
          *(uint *)(uStack_4b0 + lVar16 + 0xc) =
               -(uint)(fVar57 == fVar59) & (uint)fVar69 |
               ~-(uint)(fVar57 == fVar59) & (uint)(fVar57 - fVar68);
          pfVar25 = (float *)((longlong)pfVar25 + 1);
          uStack_4a8 = pfVar25;
        }
        fVar68 = (float)auStack_118._0_4_ + fVar65;
        fVar57 = fVar59;
        if (fVar59 <= fVar33) {
          fVar57 = fVar33;
        }
        fVar57 = (float)(~uVar30 & (uint)fVar57 | uVar30 & (uint)fVar59);
        fVar64 = fVar68;
        if (fVar32 <= fVar68) {
          fVar64 = fVar32;
        }
        fVar64 = (float)(~uVar31 & (uint)fVar64 | uVar31 & (uint)fVar68);
        if (_DAT_143009d64 < fVar64 - fVar57) {
          if (pfVar25 == uStack_4b8) {
            pdb_142d7e980(&uStack_4b8);
          }
          lVar16 = (longlong)pfVar25 * 0x10;
          pbVar24 = (byte *)(uStack_4b0 + lVar16);
          pbVar24[0] = 1;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(uint *)(uStack_4b0 + lVar16 + 8) = ~-(uint)(fVar57 == fVar59) & (uint)(fVar57 - fVar59);
          *(uint *)(uStack_4b0 + lVar16 + 0xc) =
               -(uint)(fVar64 == fVar68) & auStack_188._0_4_ |
               ~-(uint)(fVar64 == fVar68) & (uint)(fVar64 - fVar59);
          pfVar25 = (float *)((longlong)pfVar25 + 1);
          uStack_4a8 = pfVar25;
        }
        fVar59 = auStack_238._0_4_ + fVar65;
        fVar57 = fVar68;
        if (fVar68 <= fVar33) {
          fVar57 = fVar33;
        }
        fVar64 = (float)(~uVar30 & (uint)fVar57 | uVar30 & (uint)fVar68);
        fVar57 = fVar59;
        if (fVar32 <= fVar59) {
          fVar57 = fVar32;
        }
        fVar57 = (float)(~uVar31 & (uint)fVar57 | uVar31 & (uint)fVar59);
        if (_DAT_143009d64 < fVar57 - fVar64) {
          if (pfVar25 == uStack_4b8) {
            pdb_142d7e980(&uStack_4b8);
          }
          lVar16 = (longlong)pfVar25 * 0x10;
          pbVar24 = (byte *)(uStack_4b0 + lVar16);
          pbVar24[0] = 2;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(uint *)(uStack_4b0 + lVar16 + 8) = ~-(uint)(fVar64 == fVar68) & (uint)(fVar64 - fVar68);
          *(uint *)(uStack_4b0 + lVar16 + 0xc) =
               -(uint)(fVar57 == fVar59) & (uint)fVar69 |
               ~-(uint)(fVar57 == fVar59) & (uint)(fVar57 - fVar68);
          pfVar25 = (float *)((longlong)pfVar25 + 1);
          uStack_4a8 = pfVar25;
        }
        fVar65 = fVar65 + fStack_108;
        fVar57 = fVar59;
        if (fVar59 <= fVar33) {
          fVar57 = fVar33;
        }
        fVar68 = (float)(~uVar30 & (uint)fVar57 | uVar30 & (uint)fVar59);
        fVar57 = fVar65;
        if (fVar32 <= fVar65) {
          fVar57 = fVar32;
        }
        fVar57 = (float)(~uVar31 & (uint)fVar57 | uVar31 & (uint)fVar65);
        if (_DAT_143009d64 < fVar57 - fVar68) {
          if (pfVar25 == uStack_4b8) {
            pdb_142d7e980(&uStack_4b8);
          }
          lVar16 = (longlong)pfVar25 * 0x10;
          pbVar24 = (byte *)(uStack_4b0 + lVar16);
          pbVar24[0] = 3;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(uint *)(uStack_4b0 + lVar16 + 8) = ~-(uint)(fVar68 == fVar59) & (uint)(fVar68 - fVar59);
          *(uint *)(uStack_4b0 + lVar16 + 0xc) =
               -(uint)(fVar65 == fVar57) & auStack_188._0_4_ |
               ~-(uint)(fVar65 == fVar57) & (uint)(fVar57 - fVar59);
          pfVar25 = (float *)((longlong)pfVar25 + 1);
          uStack_4a8 = pfVar25;
        }
        bVar10 = false;
        fVar65 = _DAT_142e36f28;
      } while (bVar28);
      fStack_108 = SUB84(uStack_4b0,0);
      fStack_104 = (float)((ulonglong)uStack_4b0 >> 0x20);
      if ((float *)(lStack_210 - uVar20) < pfVar25) {
        auStack_118 = (undefined1  [8])uStack_4b8;
        in_stack_fffffffffffffab8 = 0;
        pdb_142d7f1b0(&lStack_210,uVar20,pfVar25,8,0x10);
        uStack_288 = lStack_208;
        uVar20 = uStack_200;
        auVar29 = auStack_118;
LAB_14140e493:
        pub_142e32760(uVar20 * 0x10 + uStack_288,CONCAT44(fStack_104,fStack_108),
                      (longlong)pfVar25 << 4);
      }
      else {
        auVar29 = (undefined1  [8])uStack_4b8;
        if (pfVar25 != (float *)0x0) goto LAB_14140e493;
      }
      uVar20 = uVar20 + (longlong)pfVar25;
      uStack_200 = uVar20;
      if (auVar29 != (undefined1  [8])0x0) {
        pub_1406abac0((byte *)CONCAT44(fStack_104,fStack_108),(longlong)auVar29 << 4,8);
      }
    }
    fStack_108 = (float)lStack_208;
    fStack_104 = (float)((ulonglong)lStack_208 >> 0x20);
    uStack_4b8 = (float *)&uStack_155;
    if (1 < uVar20) {
      if (uVar20 < 0x15) {
        uStack_f1 = 1;
        pdb_141460480(lStack_208,uVar20,1,&uStack_4b8);
      }
      else {
        uStack_f1 = 1;
        pdb_141465c20(lStack_208,uVar20,&uStack_4b8);
      }
    }
    fVar69 = _DAT_143009d64;
    auStack_1f8 = ZEXT816(8) << 0x40;
    lStack_1e8 = 0;
    auStack_118 = (undefined1  [8])lStack_210;
    if (uVar20 != 0) {
      plVar27 = (longlong *)CONCAT44(fStack_104,fStack_108);
      plVar21 = plVar27 + uVar20 * 2;
      do {
        while( true ) {
          lVar8 = lStack_1e8;
          lVar4 = *plVar27;
          lVar16 = plVar27[1];
          lVar23 = lStack_1e8 * 0x10;
          if (((lStack_1e8 != 0) &&
              (plVar18 = (longlong *)(auStack_1f8._8_8_ + lVar23 + -0x10),
              plVar18 != (longlong *)0x0)) && (*plVar18 == lVar4)) break;
LAB_14140f440:
          if (lStack_1e8 == auStack_1f8._0_8_) {
            pdb_142d7e980(auStack_1f8);
          }
          *(longlong *)(auStack_1f8._8_8_ + lVar23) = lVar4;
          *(longlong *)(auStack_1f8._8_8_ + 8 + lVar23) = lVar16;
          lStack_1e8 = lVar8 + 1;
          plVar27 = plVar27 + 2;
          if (plVar27 == plVar21) goto LAB_14140f48d;
        }
        fVar65 = *(float *)(auStack_1f8._8_8_ + lVar23 + -4);
        if (fVar65 + fVar69 < (float)lVar16) goto LAB_14140f440;
        fVar59 = (float)((ulonglong)lVar16 >> 0x20);
        fVar57 = fVar59;
        if (fVar59 <= fVar65) {
          fVar57 = fVar65;
        }
        *(uint *)(auStack_1f8._8_8_ + lVar23 + -4) =
             ~-(uint)NAN(fVar65) & (uint)fVar57 | -(uint)NAN(fVar65) & (uint)fVar59;
        plVar27 = plVar27 + 2;
      } while (plVar27 != plVar21);
    }
LAB_14140f48d:
    if (auStack_118 != (undefined1  [8])0x0) {
      pub_1406abac0((byte *)CONCAT44(fStack_104,fStack_108),(longlong)auStack_118 << 4,8);
    }
    fVar64 = _DAT_143307c9c;
    fVar68 = _DAT_142f44720;
    fVar59 = _DAT_142e36f28;
    uStack_4b8 = (float *)0x8000000000000000;
    uStack_490 = 0x8000000000000000;
    uStack_468 = 0x8000000000000000;
    uStack_440 = 0x8000000000000000;
    uStack_418 = 0x8000000000000000;
    uStack_3f0 = 0x8000000000000000;
    uStack_3c8 = 0x8000000000000000;
    uStack_3a0 = 0x8000000000000000;
    lStack_338 = auStack_1f8._0_8_;
    pbStack_510 = (byte *)(auStack_1f8._8_8_ + lStack_1e8 * 0x10);
    auVar56._0_12_ = ZEXT812(0);
    auVar56._12_4_ = 0;
    fStack_4f0 = param_7[3] * 0.0 + 0.0;
    fStack_4ec = param_7[3] * 0.0 + 0.0;
    uStack_4f8 = (float *)CONCAT44(param_7[1] * 0.0 + 0.0,param_7[1] * _DAT_142e36f28 + 0.0);
    uStack_298 = CONCAT44(uStack_298._4_4_,param_7[2]);
    fVar69 = *param_7;
    fVar54 = 0.0;
    fVar65 = 0.0;
    fVar57 = 0.0;
    pfStack_318 = *(float **)(param_7 + 3);
    pbStack_310 = *(byte **)(param_7 + 5);
    pfStack_4d8 = *(float **)(param_7 + 7);
    pbStack_4d0 = *(byte **)(param_7 + 9);
    pbStack_4c8 = *(byte **)(param_7 + 0xb);
    uStack_4c0 = 0;
    fStack_154 = param_7[0xd];
    uStack_354 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_4e8 = (float *)CONCAT44(fVar69,fVar69);
    uStack_4e0 = (byte *)0x0;
    pbStack_330 = (byte *)auStack_1f8._8_8_;
    iStack_1dc = 0;
    pbVar24 = (byte *)auStack_1f8._8_8_;
    fStack_358 = fVar69;
LAB_14140f5a5:
    if (pbVar24 != pbStack_510) {
      pfStack_228 = *(float **)pbVar24;
      uVar38 = uStack_2b0;
      if (((ulonglong)pfStack_228 & 1) != 0) {
        uVar38 = uStack_2ac;
      }
      pbStack_328 = (byte *)CONCAT44(pbStack_328._4_4_,uVar38);
      auStack_238._0_4_ = *(undefined4 *)(pbVar24 + 8);
      auStack_188._0_4_ = *(undefined4 *)(pbVar24 + 0xc);
      uVar41 = pdb_140df3e10(&pfStack_2c8,pfStack_228);
      fStack_108 = (float)uVar41;
      fStack_104 = (float)((ulonglong)uVar41 >> 0x20);
      uStack_100 = (undefined4)extraout_XMM0_Qb_05;
      fStack_fc = (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
      fVar39 = fVar69;
      fVar55 = fVar54;
      uVar41 = pdb_140df1760(&pfStack_2c8,pfStack_228);
      auStack_118._4_4_ = fVar55;
      auStack_118._0_4_ = fVar39;
      fStack_110 = fVar65;
      fStack_10c = fVar57;
      uVar38 = pdb_140df1760(&uStack_258,pfStack_228);
      uStack_288 = CONCAT44(uStack_288._4_4_,uVar38);
      auStack_368._0_4_ = fVar39;
      fVar39 = (float)pub_142e32b00(((float)auStack_188._0_4_ - (float)auStack_238._0_4_) *
                                    _DAT_142e36f50);
      if (fVar39 <= _DAT_142e36f28) {
        fVar39 = _DAT_142e36f28;
      }
      uVar20 = (longlong)(fVar39 - _DAT_142e36f2c) & (longlong)fVar39 >> 0x3f | (longlong)fVar39;
      fVar65 = 0.0;
      fVar57 = 0.0;
      if (fVar39 < 0.0) {
        uVar20 = 0;
      }
      if (_DAT_142e36f30 < fVar39) {
        uVar20 = 0xffffffffffffffff;
      }
      uStack_150 = CONCAT44(uStack_150._4_4_,(float)uVar20);
      pbVar24 = pbVar24 + 0x10;
      plStack_348 = &uStack_4b8 + (longlong)pfStack_228 * 10;
      uStack_100 = fStack_104;
      fStack_110 = (float)auStack_118._4_4_;
      auStack_118._4_4_ = (int)uVar41;
      fStack_10c = (float)(int)((ulonglong)uVar41 >> 0x20);
      uVar22 = 0;
      fVar55 = 0.0;
      fVar39 = 0.0;
      uStack_170 = uVar20;
      fStack_104 = fVar69;
      fStack_fc = fVar54;
LAB_14140f754:
      fVar54 = fVar39;
      fVar69 = fVar55;
      uStack_168 = pbStack_250;
      uStack_160 = 0;
      uVar26 = uVar22;
      if (uVar22 < uVar20) {
        do {
          uVar22 = uVar26 + 1;
          pdb_140df1c10(&uStack_1d8,&uStack_258);
          fVar69 = (_DAT_142e36f28 - (float)uVar26 / (float)uStack_150) * (float)auStack_238._0_4_ +
                   (float)auStack_188._0_4_ * ((float)uVar26 / (float)uStack_150);
          fVar54 = fStack_108 + fVar69 * (float)auStack_118._0_4_;
          fVar65 = fStack_104 - fVar69 * (float)auStack_118._4_4_;
          fVar39 = fVar54 * (float)uStack_1d8;
          fVar54 = fVar54 * uStack_1d8._4_4_;
          fVar55 = fVar65 * (float)uStack_1d0;
          fVar65 = fVar65 * uStack_1d0._4_4_;
          pdb_140df1c10(&uStack_1d8,&uStack_258);
          fVar57 = ((float)uVar22 / (float)uStack_150) * (float)auStack_188._0_4_ +
                   (_DAT_142e36f28 - (float)uVar22 / (float)uStack_150) * (float)auStack_238._0_4_;
          fVar69 = fStack_108 + fVar57 * (float)auStack_118._0_4_;
          fVar57 = fStack_104 - fVar57 * (float)auStack_118._4_4_;
          fVar39 = fVar55 + fVar39 + (float)uStack_168;
          fVar55 = fVar65 + fVar54 + uStack_168._4_4_;
          pfStack_528 = (float *)CONCAT44(fVar55,fVar39);
          fVar62 = fVar57 * (float)uStack_1d0 + fVar69 * (float)uStack_1d8 + (float)uStack_168;
          fVar63 = fVar57 * uStack_1d0._4_4_ + fVar69 * uStack_1d8._4_4_ + uStack_168._4_4_;
          pbStack_520 = (byte *)CONCAT44(fVar63,fVar62);
          uStack_2a8 = CONCAT44(auStack_368._0_4_,(float)uStack_288);
          uStack_2a0 = (float)uStack_288;
          uStack_29c = auStack_368._0_4_;
          uVar41 = pdb_140930390(param_2);
          auVar49._8_4_ = (undefined4)extraout_XMM0_Qb_06;
          auVar49._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
          fVar65 = (float)uVar41 + _DAT_143007988 + _DAT_143307c98;
          fVar69 = (float)pdb_140930390();
          uStack_1c8 = pfStack_528;
          pbStack_1c0 = pbStack_520;
          uStack_1a8 = uStack_2a8;
          uStack_1a0 = CONCAT44(uStack_29c,uStack_2a0);
          auStack_198 = auVar56;
          fVar69 = (fVar69 - *(float *)(param_2 + 0x288)) + fVar68;
          bVar10 = false;
          lVar16 = 0;
          pbVar14 = (byte *)0x0;
          do {
            if (pbVar14 == (byte *)0x2) break;
            pbStack_1b8 = pbVar14 + 1;
            fVar54 = (float)pdb_14140ce00(param_6,*(float *)(&uStack_1a8 + (longlong)pbVar14) *
                                                  fVar64 + *(float *)(&uStack_1c8 + lVar16),
                                          *(float *)((longlong)&uStack_1a8 +
                                                    (longlong)pbVar14 * 8 + 4) * fVar64 +
                                          *(float *)((longlong)&uStack_1c8 + lVar16 * 8 + 4));
            fVar54 = fVar54 + fVar68;
            fVar57 = fVar54;
            if (fVar69 <= fVar54) {
              fVar57 = fVar69;
            }
            fVar69 = (float)(~-(uint)NAN(fVar69) & (uint)fVar57 | -(uint)NAN(fVar69) & (uint)fVar54)
            ;
            lVar16 = 1;
            bVar28 = !bVar10;
            bVar10 = true;
            pbVar14 = pbVar14 + 1;
          } while (bVar28);
          fVar54 = fVar65 - fVar69;
          auVar49._4_4_ = (int)((ulonglong)uVar41 >> 0x20);
          auVar49._0_4_ = fVar54;
          auVar50._4_12_ = auVar49._4_12_;
          auVar50._0_4_ = fVar54 / fVar68;
          fVar57 = (float)pub_142e32a40(auVar50._0_8_);
          uVar20 = 0;
          if (0.0 <= fVar57) {
            uVar20 = (longlong)(fVar57 - _DAT_142e36f2c) & (longlong)fVar57 >> 0x3f |
                     (longlong)fVar57;
          }
          if (_DAT_142e36f30 < fVar57) {
            uVar20 = 0xffffffffffffffff;
          }
          if (uVar20 < 3) {
            uVar20 = 2;
          }
          if (3 < uVar20) {
            uVar20 = 4;
          }
          fVar58 = fVar65 - (float)(longlong)uVar20 * fVar68;
          fVar57 = fVar69;
          if (fVar69 <= fVar58) {
            fVar57 = fVar58;
          }
          fVar36 = (float)(longlong)uVar20 * _DAT_143307ca0;
          if (_DAT_142e37838 <= fVar36) {
            fVar36 = _DAT_142e37838;
          }
          fVar65 = fVar65 - (float)(-(uint)NAN(fVar58) & (uint)fVar69 |
                                   ~-(uint)NAN(fVar58) & (uint)fVar57);
          if (fVar65 < fVar54 - fVar65) {
            fVar36 = _DAT_143307ca4;
          }
          uStack_1d8 = uStack_4f8;
          pdb_140df4540(&fStack_148,&uStack_1d8);
          auVar56._0_12_ = ZEXT812(0);
          auVar56._12_4_ = 0;
          fStack_278 = fVar36 * fVar59 + 0.0;
          fStack_274 = fVar36 * 0.0 + 0.0;
          pdb_140df4540(&uStack_1d8,&fStack_278);
          fVar58 = (float)uStack_1d0 - fStack_140;
          fVar69 = SUB84(uStack_1d8,0) - fStack_148;
          fVar54 = (float)((ulonglong)uStack_1d8 >> 0x20);
          fVar65 = fVar54 - fStack_144;
          fVar57 = _DAT_142e36f28 / SQRT(fVar65 * fVar65 + fVar69 * fVar69 + fVar58 * fVar58);
          bVar10 = (int)fVar57 - 1U < 0x7fffff ||
                   (int)ABS(fVar57) - 0x800000U < 0x7f000000 && -1 < (int)fVar57;
          if (bVar10) {
            fVar58 = fVar58 * fVar57;
          }
          else {
            fVar58 = 0.0;
          }
          uVar30 = (uint)bVar10;
          fStack_2d0 = fStack_358;
          fVar69 = SUB84(uStack_1d8,0) +
                   (float)((int)(uVar30 << 0x1f) >> 0x1f & (uint)(fVar69 * fVar57)) *
                   (float)uStack_4e8;
          fVar54 = fVar54 + (float)((int)(uVar30 << 0x1f) >> 0x1f & (uint)(fVar65 * fVar57)) *
                            uStack_4e8._4_4_;
          fVar65 = (float)uStack_4e0 * 0.0 + 0.0;
          fVar57 = uStack_4e0._4_4_ * 0.0 + 0.0;
          fStack_2d4 = (float)uStack_1d0 + fVar58 * fStack_358;
          lStack_2e8 = CONCAT44(fStack_144,fStack_148);
          fStack_2e0 = fStack_140;
          uStack_300 = _DAT_142e4e650;
          uStack_2f8 = _UNK_142e4e658;
          fStack_304 = 2.8026e-45;
          uStack_2f0 = (ulonglong)(uint)fVar59;
          fStack_2dc = fVar69;
          fStack_2d8 = fVar54;
          pdb_1424b4d90(&uStack_1d8,&fStack_304,&lStack_2e8);
          uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffab8 >> 0x20);
          if (!SBORROW8(0,(longlong)uStack_1d8)) goto LAB_14140fcc0;
          uVar26 = uVar22;
          if (uStack_170 <= uVar22) break;
        } while( true );
      }
      goto LAB_14140f5a5;
    }
    if (lStack_338 != 0) {
      pub_1406abac0(pbStack_330,lStack_338 << 4,8);
    }
    uStack_1d8 = pfStack_318;
    uStack_1d0 = pbStack_310;
    uStack_1c8 = pfStack_4d8;
    pbStack_1c0 = pbStack_4d0;
    pbStack_1b8 = pbStack_4c8;
    fStack_1b0 = fStack_154;
    fStack_138 = (float)uStack_248;
    fStack_134 = (float)((ulonglong)uStack_248 >> 0x20);
    fStack_148 = (float)uStack_258;
    fStack_144 = (float)((ulonglong)uStack_258 >> 0x20);
    fStack_140 = SUB84(pbStack_250,0);
    fStack_13c = (float)((ulonglong)pbStack_250 >> 0x20);
    pdb_1424b77b0(uStack_290,*(undefined4 *)(param_2 + 0x274),&fStack_148,&uStack_4b8,&uStack_1d8,
                  param_9,param_10,param_6);
    pdb_1414112d0(&uStack_4b8);
    uVar20 = uStack_340;
  }
  else {
    uStack_378 = *(undefined8 *)(param_3 + 1);
    uStack_370 = *(undefined8 *)(param_3 + 3);
    uStack_298 = param_5 * 0x68 + param_4;
    fStack_280 = param_7[3];
    uStack_150 = CONCAT44(uStack_150._4_4_,param_7[2]);
    fVar65 = *param_7;
    auStack_368 = ZEXT416((uint)fVar65);
    uStack_4e8 = *(float **)(param_7 + 3);
    uStack_4e0 = *(byte **)(param_7 + 5);
    pfStack_228 = *(float **)(param_7 + 7);
    pbStack_220 = *(byte **)(param_7 + 9);
    pbStack_328 = *(byte **)(param_7 + 0xb);
    uStack_320 = 0;
    pfStack_318 = (float *)CONCAT44(pfStack_318._4_4_,param_7[0xd]);
    uStack_168 = (byte *)CONCAT44(fVar65,fVar65);
    uStack_160 = 0;
    uStack_288 = CONCAT44(param_7[1],param_7[1]);
    fStack_358 = 0.0;
    uStack_2a8 = param_1;
    fStack_27c = fStack_280;
    while (uVar20 = uStack_340, param_4 != uStack_298) {
      auVar45._0_8_ = pdb_140a0bbc0(param_4);
      auVar45._8_8_ = extraout_XMM0_Qb;
      auVar42._4_12_ = auVar45._4_12_;
      auVar42._0_4_ = (float)auVar45._0_8_ * _DAT_142e36f50;
      fVar65 = (float)pub_142e32b00(auVar42._0_8_);
      uVar20 = 0;
      if (0.0 <= fVar65) {
        uVar20 = (longlong)(fVar65 - _DAT_142e36f2c) & (longlong)fVar65 >> 0x3f | (longlong)fVar65;
      }
      if (_DAT_142e36f30 < fVar65) {
        uVar20 = 0xffffffffffffffff;
      }
      uStack_4b8 = (float *)pdb_140dedfe0(0);
      puVar70 = &UNK_143307cf0;
      pdb_140de8290(&lStack_2e8,uVar20 + 1 + (ulonglong)(uVar20 == 0));
      lVar16 = *(longlong *)(param_4 + 0x40);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143307d08);
      }
      pfVar25 = *(float **)(param_4 + 0x38);
      if (NAN(*pfVar25)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      uVar41 = pub_142e32a70();
      pfVar25 = pfVar25 + lVar16 + -1;
      if (pfVar25 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143307d20);
      }
      if (NAN(*pfVar25)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      fVar65 = (float)uVar41;
      fVar57 = (float)(~-(uint)(fVar65 < 0.0) & (uint)fVar65 |
                      (uint)(fVar65 + fVar69) & -(uint)(fVar65 < 0.0));
      uVar40 = pub_142e32a70();
      fVar65 = (float)uVar40;
      uVar38 = (undefined4)((ulonglong)uVar40 >> 0x20);
      uVar51 = (undefined4)extraout_XMM0_Qb_01;
      uVar52 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      fVar65 = (float)(~-(uint)(fVar65 < 0.0) & (uint)fVar65 |
                      (uint)(fVar65 + fVar69) & -(uint)(fVar65 < 0.0));
      auStack_118._4_4_ = (int)((ulonglong)uVar41 >> 0x20);
      auStack_118._0_4_ = fVar57;
      fStack_110 = (float)(int)extraout_XMM0_Qb_00;
      fStack_10c = (float)(int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      if (((fVar57 == 0.0) && (!NAN(fVar57))) && (fVar65 == 0.0)) {
        fVar59 = (float)pdb_140a0bbc0();
        fVar57 = (float)auStack_118._0_4_;
        if (0.0 < fVar59) {
          uVar38 = 0;
          uVar51 = 0;
          uVar52 = 0;
          fVar65 = fVar69;
        }
      }
      uStack_170 = param_4 + 0x68;
      pfVar15 = (float *)CONCAT44(fStack_2dc,fStack_2e0);
      pfVar25 = pfVar15 + CONCAT44(fStack_2d4,fStack_2d8);
      fVar59 = fVar65 + fVar69;
      bVar10 = true;
      auStack_238._4_4_ = uVar38;
      auStack_238._0_4_ = fVar65;
      auStack_238._8_4_ = uVar51;
      auStack_238._12_4_ = uVar52;
      auStack_188._0_4_ = fVar59;
      uStack_4f8 = pfVar15;
      while (pfVar12 = unaff_RDI, pfVar15 != pfVar25) {
        while( true ) {
          pfVar9 = pfVar15 + 1;
          unaff_RDI = pfVar15;
          if (bVar10) {
            unaff_RDI = pfVar12;
            if (pfVar9 == pfVar25) goto LAB_14140f320;
            pfVar12 = pfVar15;
            unaff_RDI = pfVar9;
            pfVar9 = pfVar15 + 2;
          }
          pfVar15 = pfVar9;
          fVar68 = *pfVar12;
          fVar64 = *unaff_RDI;
          fVar54 = (fVar69 - fVar68) * fVar57;
          if (fVar57 <= fVar65) {
            if (NAN(fVar68 * fVar65 + fVar54)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            auVar43._0_8_ = pub_142e32a70();
            auVar43._8_8_ = extraout_XMM0_Qb_03;
            if (NAN(fVar64 * fVar65 + (fVar69 - fVar64) * fVar57)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
          }
          else {
            if (NAN(fVar68 * fVar59 + fVar54)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            auVar43._0_8_ = pub_142e32a70();
            auVar43._8_8_ = extraout_XMM0_Qb_02;
            if (NAN(fVar64 * fVar59 + (fVar69 - fVar64) * fVar57)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
          }
          fVar65 = auVar43._0_4_;
          fVar57 = (float)(~-(uint)(fVar65 < 0.0) & (uint)fVar65 |
                          (uint)(fVar65 + fVar69) & -(uint)(fVar65 < 0.0));
          fVar65 = (float)pub_142e32a70();
          uStack_1d8._0_4_ = fVar57;
          if ((fVar57 < 0.0) || (fVar69 < fVar57)) {
            uStack_4b8 = (float *)&uStack_1d8;
            uStack_4b0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_4b8,&UNK_14350fdd0);
          }
          uVar30 = pdb_1413f9030(param_2 + 0x88);
          fVar65 = (float)(~-(uint)(fVar65 < 0.0) & (uint)fVar65 |
                          (uint)(fVar65 + fVar69) & -(uint)(fVar65 < 0.0));
          uStack_1d8 = (float *)CONCAT44(uStack_1d8._4_4_,fVar65);
          if ((fVar65 < 0.0) || (fVar69 < fVar65)) {
            uStack_4b8 = (float *)&uStack_1d8;
            uStack_4b0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_4b8,&UNK_14350fdd0);
          }
          uVar31 = pdb_1413f9030(param_2 + 0x88);
          uVar22 = (ulonglong)uVar30;
          uVar20 = *(ulonglong *)(param_2 + 0x98);
          if (uVar20 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar22,uVar20,&UNK_143306608);
          }
          uVar26 = uVar22 + 1;
          if (uVar20 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26,uVar20,&UNK_143306620);
          }
          uVar17 = (ulonglong)uVar31;
          if (uVar20 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar17,uVar20,&UNK_143306608);
          }
          uVar1 = uVar17 + 1;
          fStack_108 = fVar57;
          fStack_104 = auVar43._4_4_;
          uStack_100 = auVar43._8_4_;
          fStack_fc = auVar43._12_4_;
          if (uVar20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uVar20,&UNK_143306620);
          }
          lVar16 = *(longlong *)(param_2 + 0x90);
          uVar41 = *(undefined8 *)(lVar16 + 8 + uVar22 * 0xc);
          uVar40 = *(undefined8 *)(lVar16 + uVar22 * 0xc);
          uVar2 = *(undefined8 *)(lVar16 + uVar26 * 0xc);
          fVar66 = (float)((ulonglong)uVar2 >> 0x20);
          fVar57 = *(float *)(lVar16 + 8 + uVar26 * 0xc);
          fVar37 = _DAT_142e37950 - extraout_XMM0_Da;
          fVar32 = _UNK_142e37954 - extraout_XMM0_Da_00;
          uVar3 = *(undefined8 *)(lVar16 + 8 + uVar17 * 0xc);
          fVar35 = (float)uVar3;
          fVar64 = (float)((ulonglong)uVar3 >> 0x20);
          fVar54 = (float)uVar41;
          fVar68 = (float)((ulonglong)uVar41 >> 0x20);
          fVar59 = *(float *)(lVar16 + 8 + uVar1 * 0xc);
          uVar41 = *(undefined8 *)(lVar16 + uVar17 * 0xc);
          uVar3 = *(undefined8 *)(lVar16 + uVar1 * 0xc);
          fVar58 = (float)uVar40;
          fVar36 = (float)((ulonglong)uVar40 >> 0x20);
          fVar34 = (float)((ulonglong)uVar41 >> 0x20);
          fVar33 = (float)uVar41;
          fVar67 = (float)((ulonglong)uVar3 >> 0x20);
          fVar39 = (float)uVar2 - fVar58;
          fVar55 = (float)uVar3 - fVar33;
          fVar62 = fVar66 - fVar36;
          fVar63 = fVar67 - fVar34;
          fVar58 = fVar58 * fVar37 + fVar68 * extraout_XMM0_Da;
          fVar33 = fVar33 * fVar32 + fVar64 * extraout_XMM0_Da_00;
          fVar60 = fVar54 * fVar37 + fVar57 * extraout_XMM0_Da;
          fVar61 = fVar35 * fVar32 + fVar59 * extraout_XMM0_Da_00;
          uStack_300 = CONCAT44(fVar60,*(float *)(lVar16 + 4 + uVar26 * 0xc) * extraout_XMM0_Da +
                                       fVar37 * *(float *)(lVar16 + 4 + uVar22 * 0xc));
          uStack_2f8 = CONCAT44(extraout_XMM0_Da_00 * *(float *)(lVar16 + 4 + uVar1 * 0xc) +
                                fVar32 * *(float *)(lVar16 + 4 + uVar17 * 0xc),fVar33);
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,fVar61);
          fVar66 = fVar66 - fVar36;
          fVar67 = fVar67 - fVar34;
          fVar57 = fVar57 - fVar54;
          fVar59 = fVar59 - fVar35;
          fVar68 = 0.0 - fVar68;
          fVar64 = 0.0 - fVar64;
          auVar44._0_4_ = fVar57 * fVar57 + fVar66 * fVar66 + fVar39 * fVar39;
          auVar44._4_4_ = fVar59 * fVar59 + fVar67 * fVar67 + fVar55 * fVar55;
          auVar44._8_4_ = fVar68 * fVar68 + fVar62 * fVar62 + 0.0;
          auVar44._12_4_ = fVar64 * fVar64 + fVar63 * fVar63 + 0.0;
          auVar45 = sqrtps(auVar44,auVar44);
          auVar7._4_4_ = _UNK_142e37954;
          auVar7._0_4_ = _DAT_142e37950;
          auVar7._8_8_ = _UNK_142e37958;
          auVar45 = divps(auVar7,auVar45);
          fVar57 = fVar57 * auVar45._0_4_;
          fVar59 = fVar59 * auVar45._4_4_;
          fVar68 = fVar68 * auVar45._8_4_;
          fVar64 = fVar64 * auVar45._12_4_;
          auVar46._0_4_ = fVar57 * fVar57;
          auVar46._4_4_ = fVar59 * fVar59;
          auVar46._8_4_ = fVar68 * fVar68;
          auVar46._12_4_ = fVar64 * fVar64;
          fVar39 = auVar45._0_4_ * fVar39;
          fVar55 = auVar45._4_4_ * fVar55;
          fVar62 = auVar45._8_4_ * fVar62;
          fVar63 = auVar45._12_4_ * fVar63;
          auVar53._0_4_ = fVar39 * fVar39 + auVar46._0_4_;
          auVar53._4_4_ = fVar55 * fVar55 + auVar46._4_4_;
          auVar53._8_4_ = fVar62 * fVar62 + auVar46._8_4_;
          auVar53._12_4_ = fVar63 * fVar63 + auVar46._12_4_;
          auVar45 = sqrtps(auVar46,auVar53);
          auVar45 = divps(auVar7,auVar45);
          auStack_1f8._0_4_ = (float)((uint)fVar57 ^ _DAT_142e37820) * auVar45._0_4_;
          auStack_1f8._4_4_ = fVar39 * auVar45._0_4_;
          auStack_1f8._8_4_ = (float)((uint)fVar59 ^ _UNK_142e37824) * auVar45._4_4_;
          auStack_1f8._12_4_ = auVar45._4_4_ * fVar55;
          fStack_304 = fVar58;
          pdb_140def850(&uStack_378);
          fVar68 = fStack_108;
          fVar59 = _DAT_143307c9c;
          fVar57 = _DAT_142f44720;
          pdb_140def850(&uStack_378);
          fStack_144 = (float)uStack_378;
          fStack_140 = (float)((ulonglong)uStack_378 >> 0x20);
          fStack_13c = (float)uStack_370;
          fStack_138 = (float)((ulonglong)uStack_370 >> 0x20);
          fStack_148 = 0.0;
          pdb_140a85190(&uStack_4b8,&fStack_148);
          pdb_1413f8b70(&uStack_1d8,&uStack_4b8);
          if (SBORROW8(0,(longlong)uStack_1d8)) break;
          if (uStack_1d8 != (float *)0x0) {
            pub_1406abac0(uStack_1d0,(longlong)uStack_1d8 << 3,4);
          }
          if (pbStack_1c0 != (byte *)0x0) {
            pub_1406abac0(pbStack_1b8,(longlong)pbStack_1c0 << 2,4);
          }
          if (uStack_4b8 != (float *)0x0) {
            pub_1406abac0((byte *)uStack_4b0,(longlong)uStack_4b8 << 3,4);
          }
          if (uStack_4a0 != (byte *)0x0) {
            pub_1406abac0(pbStack_498,(longlong)uStack_4a0 << 2,4);
          }
          uVar41 = pdb_140930390(param_2);
          auVar47._8_4_ = (undefined4)extraout_XMM0_Qb_04;
          auVar47._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          fVar54 = (float)uVar41 + _DAT_143007988 + _DAT_143307c98;
          fVar64 = (float)pdb_140930390();
          uStack_4a8 = (float *)CONCAT44(fVar60,fVar58);
          uStack_4a0 = (byte *)CONCAT44(fVar61,fVar33);
          uStack_488 = auStack_1f8._0_8_;
          uStack_480 = auStack_1f8._8_8_;
          uStack_478 = 0;
          uStack_470 = 0;
          fVar64 = (fVar64 - *(float *)(param_2 + 0x288)) + fVar57;
          bVar10 = false;
          lVar16 = 0;
          pbVar24 = (byte *)0x0;
          do {
            uVar38 = (undefined4)((ulonglong)puVar70 >> 0x20);
            if (pbVar24 == (byte *)0x2) break;
            pbStack_498 = pbVar24 + 1;
            fVar55 = (float)pdb_14140ce00(param_6,*(float *)(&uStack_488 + (longlong)pbVar24) *
                                                  fVar59 + *(float *)(&uStack_4a8 + lVar16),
                                          *(float *)((longlong)&uStack_488 +
                                                    (longlong)pbVar24 * 8 + 4) * fVar59 +
                                          *(float *)((longlong)&uStack_4a8 + lVar16 * 8 + 4));
            uVar38 = (undefined4)((ulonglong)puVar70 >> 0x20);
            fVar55 = fVar55 + fVar57;
            fVar39 = fVar55;
            if (fVar64 <= fVar55) {
              fVar39 = fVar64;
            }
            fVar64 = (float)(~-(uint)NAN(fVar64) & (uint)fVar39 | -(uint)NAN(fVar64) & (uint)fVar55)
            ;
            lVar16 = 1;
            bVar28 = !bVar10;
            bVar10 = true;
            pbVar24 = pbVar24 + 1;
          } while (bVar28);
          fVar39 = fVar54 - fVar64;
          auVar47._4_4_ = (int)((ulonglong)uVar41 >> 0x20);
          auVar47._0_4_ = fVar39;
          auVar48._4_12_ = auVar47._4_12_;
          auVar48._0_4_ = fVar39 / fVar57;
          fVar59 = (float)pub_142e32a40(auVar48._0_8_);
          uVar20 = 0;
          if (0.0 <= fVar59) {
            uVar20 = (longlong)(fVar59 - _DAT_142e36f2c) & (longlong)fVar59 >> 0x3f |
                     (longlong)fVar59;
          }
          if (_DAT_142e36f30 < fVar59) {
            uVar20 = 0xffffffffffffffff;
          }
          if (uVar20 < 3) {
            uVar20 = 2;
          }
          if (3 < uVar20) {
            uVar20 = 4;
          }
          fVar59 = fVar54 - (float)(longlong)uVar20 * fVar57;
          fVar57 = fVar64;
          if (fVar64 <= fVar59) {
            fVar57 = fVar59;
          }
          fVar55 = (float)(longlong)uVar20 * _DAT_143307ca0;
          if (_DAT_142e37838 <= fVar55) {
            fVar55 = _DAT_142e37838;
          }
          fVar54 = fVar54 - (float)(-(uint)NAN(fVar59) & (uint)fVar64 |
                                   ~-(uint)NAN(fVar59) & (uint)fVar57);
          if (fVar54 < fVar39 - fVar54) {
            fVar55 = _DAT_143307ca4;
          }
          puVar70 = (undefined *)CONCAT44(uVar38,fVar55);
          pdb_1407f60f0(&fStack_304,auStack_1f8);
          if (fVar68 <= fVar65) {
            if (NAN(fVar65 * _DAT_142e36f50 + fVar68 * _DAT_142e36f50)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
          }
          else if (NAN((fVar65 + fVar69) * _DAT_142e36f50 + fVar68 * _DAT_142e36f50)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          fVar57 = (float)pub_142e32a70();
          fVar57 = (float)(~-(uint)(fVar57 < 0.0) & (uint)fVar57 |
                          (uint)(fVar57 + fVar69) & -(uint)(fVar57 < 0.0));
          uStack_1d8 = (float *)CONCAT44(uStack_1d8._4_4_,fVar57);
          if ((fVar57 < 0.0) || (fVar69 < fVar57)) {
            uStack_4b8 = (float *)&uStack_1d8;
            uStack_4b0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_4b8,&UNK_143307d38);
          }
          uVar30 = pdb_1413f9030(param_2 + 0x88);
          uVar22 = (ulonglong)uVar30;
          uVar20 = *(ulonglong *)(param_2 + 0x98);
          if (uVar20 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar22,uVar20,&UNK_143306608);
          }
          uVar26 = uVar22 + 1;
          if (uVar20 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26,uVar20,&UNK_143306620);
          }
          lVar16 = *(longlong *)(param_2 + 0x90);
          fVar57 = *(float *)(lVar16 + 8 + uVar26 * 0xc);
          uVar41 = *(undefined8 *)(lVar16 + uVar22 * 0xc);
          uVar40 = *(undefined8 *)(lVar16 + 8 + uVar22 * 0xc);
          fVar64 = (float)uVar40;
          fVar54 = (float)((ulonglong)uVar40 >> 0x20);
          fVar59 = fVar57 - fVar64;
          fVar68 = (float)uVar41;
          fVar64 = extraout_XMM0_Da_01 * fVar57 + (fVar69 - extraout_XMM0_Da_01) * fVar64;
          fVar39 = (fVar69 - extraout_XMM0_Da_01) * fVar68 + extraout_XMM0_Da_01 * fVar54;
          fVar54 = fVar54 - fVar68;
          fVar57 = *(float *)(lVar16 + 4 + uVar26 * 0xc) - (float)((ulonglong)uVar41 >> 0x20);
          fVar57 = fVar69 / SQRT(fVar59 * fVar59 + fVar57 * fVar57 + fVar54 * fVar54);
          fVar54 = fVar54 * fVar57;
          fVar57 = fVar57 * fVar59;
          fVar59 = fVar69 / SQRT(fVar54 * fVar54 + fVar57 * fVar57);
          fVar54 = fVar54 * fVar59;
          fVar59 = (float)((uint)fVar57 ^ _DAT_142e37820) * fVar59;
          uStack_26c = uStack_378;
          uStack_264 = uStack_370;
          fStack_274 = fStack_108;
          fStack_278 = 1.4013e-45;
          uStack_1d8 = (float *)CONCAT44((float)uStack_288 * fVar54 + fVar64,
                                         uStack_288._4_4_ * fVar59 + fVar39);
          fStack_270 = fVar65;
          pdb_140df4540(&lStack_210,&uStack_1d8);
          pfStack_2c8 = (float *)CONCAT44(fVar64 + fVar55 * fVar54,fVar39 + fVar55 * fVar59);
          pdb_140df4540(&uStack_1d8,&pfStack_2c8);
          fVar65 = (float)uStack_1d0 - (float)lStack_208;
          fStack_148 = (float)lStack_210;
          fVar57 = SUB84(uStack_1d8,0) - fStack_148;
          fStack_138 = (float)((ulonglong)uStack_1d8 >> 0x20);
          fStack_144 = (float)((ulonglong)lStack_210 >> 0x20);
          fVar59 = fStack_138 - fStack_144;
          fVar68 = fVar69 / SQRT(fVar59 * fVar59 + fVar57 * fVar57 + fVar65 * fVar65);
          bVar10 = (int)fVar68 - 1U < 0x7fffff ||
                   (int)ABS(fVar68) - 0x800000U < 0x7f000000 && -1 < (int)fVar68;
          if (bVar10) {
            fVar65 = fVar65 * fVar68;
          }
          else {
            fVar65 = 0.0;
          }
          uVar30 = (uint)bVar10;
          fStack_13c = SUB84(uStack_1d8,0) +
                       (float)((int)(uVar30 << 0x1f) >> 0x1f & (uint)(fVar57 * fVar68)) *
                       (float)uStack_168;
          fStack_138 = fStack_138 +
                       (float)((int)(uVar30 << 0x1f) >> 0x1f & (uint)(fVar59 * fVar68)) *
                       uStack_168._4_4_;
          fStack_134 = (float)uStack_1d0 + fVar65 * auStack_368._0_4_;
          fStack_140 = (float)lStack_208;
          pbStack_130 = (byte *)CONCAT44(pbStack_130._4_4_,auStack_368._0_4_);
          pdb_1424b4d90(&uStack_4b8,&fStack_278,&fStack_148);
          uVar38 = (undefined4)((ulonglong)puVar70 >> 0x20);
          if (SBORROW8(0,(longlong)uStack_4b8)) {
            fVar65 = (float)auStack_238._0_4_;
            fVar59 = (float)auStack_188._0_4_;
            fVar57 = (float)auStack_118._0_4_;
          }
          else {
            uStack_1c8 = uStack_4a8;
            pbStack_1c0 = uStack_4a0;
            uStack_1d8 = uStack_4b8;
            uStack_1d0 = (byte *)uStack_4b0;
            uVar51 = *(undefined4 *)(param_2 + 0x274);
            iVar11 = pdb_140315970(&uStack_2a8);
            fVar65 = (float)auStack_238._0_4_;
            fVar59 = (float)auStack_188._0_4_;
            uStack_4b8 = uStack_4e8;
            uStack_4b0 = (code *)uStack_4e0;
            uStack_4a8 = pfStack_228;
            uStack_4a0 = pbStack_220;
            pbStack_498 = pbStack_328;
            uStack_490 = CONCAT44(uStack_490._4_4_,pfStack_318._0_4_);
            puVar70 = (undefined *)CONCAT44(uVar38,iVar11 + (int)fStack_358);
            puVar19 = &uStack_1d8;
            puVar13 = (undefined8 *)
                      pdb_1424b5270(&fStack_278,puVar19,uStack_290,uVar51,puVar70,&uStack_4b8,1,
                                    param_10);
            if ((puVar19 < puVar13) || (*(undefined8 **)(param_10 + 0x10) < puVar19)) {
              pdb_142dc8420(puVar13);
              goto LAB_141410547;
            }
            pdb_1424b6b90((longlong)puVar13 * 0x50 + *(longlong *)(param_10 + 8),
                          (longlong)puVar19 - (longlong)puVar13,param_6);
            fVar57 = (float)auStack_118._0_4_;
            if (uStack_1d8 != (float *)0x0) {
              pub_1406abac0(uStack_1d0,(longlong)uStack_1d8 << 4,4);
            }
            fStack_358 = (float)((int)fStack_358 + 1);
          }
          bVar10 = false;
          pfVar12 = unaff_RDI;
          if (pfVar15 == pfVar25) goto LAB_14140f320;
        }
        fVar59 = (float)auStack_188._0_4_;
        if (uStack_4b8 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_4b0,(longlong)uStack_4b8 << 3,4);
        }
        fVar57 = (float)auStack_118._0_4_;
        fVar65 = (float)auStack_238._0_4_;
        if (uStack_4a0 != (byte *)0x0) {
          pub_1406abac0(pbStack_498,(longlong)uStack_4a0 << 2,4);
        }
        bVar10 = false;
      }
LAB_14140f320:
      param_4 = uStack_170;
      if (lStack_2e8 != 0) {
        pub_1406abac0((byte *)uStack_4f8,lStack_2e8 << 2,4);
        param_4 = uStack_170;
      }
    }
  }
  for (; param_5 != 0; param_5 = param_5 + -1) {
    pdb_140a0c900(uVar20);
    uVar20 = uVar20 + 0x68;
  }
  return;
LAB_14140fcc0:
  fStack_138 = SUB84(uStack_1c8,0);
  fStack_134 = (float)((ulonglong)uStack_1c8 >> 0x20);
  pbStack_130 = pbStack_1c0;
  fStack_148 = SUB84(uStack_1d8,0);
  fStack_144 = (float)((ulonglong)uStack_1d8 >> 0x20);
  fStack_140 = SUB84(uStack_1d0,0);
  fStack_13c = (float)((ulonglong)uStack_1d0 >> 0x20);
  uStack_26c = CONCAT44(fVar63,fVar62);
  uStack_264 = CONCAT44(auStack_368._0_4_,(int)uStack_288);
  fStack_278 = 2.8026e-45;
  uStack_f2 = 1;
  fStack_274 = fVar39;
  fStack_270 = fVar55;
  iVar11 = pdb_140315970(&uStack_518);
  uVar17 = (ulonglong)(uint)(iVar11 + iStack_1dc);
  uStack_1d8 = pfStack_318;
  uStack_1d0 = pbStack_310;
  uStack_1c8 = pfStack_4d8;
  pbStack_1c0 = pbStack_4d0;
  pbStack_1b8 = pbStack_4c8;
  fStack_1b0 = fStack_154;
  uStack_f2 = 1;
  pfVar25 = &fStack_148;
  pfVar15 = (float *)pdb_1424b5270(&fStack_278,pfVar25,uStack_290,*(undefined4 *)(param_2 + 0x274),
                                   CONCAT44(uVar38,iVar11 + iStack_1dc),&uStack_1d8,1,param_10);
  if ((pfVar25 < pfVar15) || (*(float **)(param_10 + 0x10) < pfVar25)) {
    uStack_f2 = 1;
    pdb_142dc8420(pfVar15);
    goto LAB_141410547;
  }
  uStack_f2 = 1;
  pdb_1424b6b90((longlong)pfVar15 * 0x50 + *(longlong *)(param_10 + 8),
                (longlong)pfVar25 - (longlong)pfVar15,param_6);
  uStack_1d8 = pfStack_318;
  uStack_1d0 = pbStack_310;
  uStack_1c8 = pfStack_4d8;
  pbStack_1c0 = pbStack_4d0;
  pbStack_1b8 = pbStack_4c8;
  fStack_1b0 = fStack_154;
  uStack_f2 = 1;
  in_stack_fffffffffffffab8 = param_9;
  pdb_1424b7100(&pfStack_528,&uStack_2a8,&fStack_148,&uStack_1d8,param_9);
  fVar39 = 0.0;
  fVar65 = 0.0;
  fVar57 = 0.0;
  uVar20 = uStack_170;
  fVar55 = (float)auStack_238._0_4_;
  if ((float)auStack_238._0_4_ == 0.0 && uVar26 == 0) {
    lVar16 = CONCAT44(fStack_134,fStack_138);
    uVar26 = lVar16 << 4;
    uStack_508 = uVar17;
    if (0x7ffffffffffffffc < uVar26 || (uint)fStack_134 >> 0x1c != 0) {
      uVar41 = 0;
LAB_1414100fa:
      uStack_f2 = 1;
      pdb_142dc7e2a(uVar41,uVar26);
LAB_141410547:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar38 = pbStack_130._0_4_;
    if (uVar26 == 0) {
      uStack_168 = (byte *)0x4;
      lStack_120 = 0;
      lVar4 = lStack_120;
      uVar40 = CONCAT44(fStack_13c,fStack_140);
    }
    else {
      uStack_500 = CONCAT44(fStack_13c,fStack_140);
      pdb_14007ee60();
      uStack_168 = pub_1406abab0(uVar26,4);
      uVar41 = 4;
      lVar4 = lVar16;
      uVar20 = uStack_170;
      uVar40 = uStack_500;
      if (uStack_168 == (byte *)0x0) goto LAB_1414100fa;
    }
    lStack_120 = lVar4;
    uStack_170 = uVar20;
    if (lVar16 != 0) {
      pub_142e32760(uStack_168,uVar40,uVar26);
    }
    plVar27 = plStack_348;
    if ((float *)0x3 < pfStack_228) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfStack_228,4,&UNK_143307d98);
    }
    lVar4 = *plStack_348;
    if ((!SBORROW8(0,lVar4)) && (lVar4 != 0)) {
      pub_1406abac0((byte *)plStack_348[1],lVar4 << 4,4);
    }
    bVar10 = NAN((float)auStack_188._0_4_);
    bVar28 = NAN(pbStack_328._0_4_);
    bVar5 = (float)auStack_188._0_4_ != pbStack_328._0_4_;
    *plVar27 = lStack_120;
    plVar27[1] = (longlong)uStack_168;
    plVar27[2] = lVar16;
    *(undefined4 *)(plVar27 + 3) = uVar38;
    *(int *)(plVar27 + 4) = (int)uStack_508;
    if (((bVar5) || (bVar10 || bVar28)) || (uVar22 != uVar20)) goto LAB_14141009f;
    uStack_168 = (byte *)CONCAT44(fStack_144,fStack_148);
    lStack_120 = CONCAT44(fStack_13c,fStack_140);
    uStack_1d8 = (float *)CONCAT44(fStack_134,fStack_138);
    uVar17 = uStack_508;
  }
  else {
    if ((((float)auStack_188._0_4_ != pbStack_328._0_4_) ||
        (NAN((float)auStack_188._0_4_) || NAN(pbStack_328._0_4_))) || (uVar22 != uStack_170)) {
LAB_14141009f:
      if (CONCAT44(fStack_144,fStack_148) != 0) {
        pub_1406abac0((byte *)CONCAT44(fStack_13c,fStack_140),CONCAT44(fStack_144,fStack_148) << 4,4
                     );
      }
      iStack_1dc = iStack_1dc + 1;
      goto LAB_14140f754;
    }
    uStack_168 = (byte *)CONCAT44(fStack_144,fStack_148);
    lStack_120 = CONCAT44(fStack_13c,fStack_140);
    uStack_1d8 = (float *)CONCAT44(fStack_134,fStack_138);
    uStack_1d0 = pbStack_130;
    plVar27 = plStack_348;
    if ((float *)0x3 < pfStack_228) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfStack_228,4,&UNK_143307db0);
    }
  }
  lVar16 = plVar27[5];
  uStack_1d0 = pbStack_130;
  if ((!SBORROW8(0,lVar16)) && (lVar16 != 0)) {
    pub_1406abac0((byte *)plVar27[6],lVar16 << 4,4);
  }
  plVar27[5] = (longlong)uStack_168;
  plVar27[6] = lStack_120;
  plVar27[7] = (longlong)uStack_1d8;
  plVar27[8] = (longlong)uStack_1d0;
  *(int *)(plVar27 + 9) = (int)uVar17;
  iStack_1dc = iStack_1dc + 1;
  goto LAB_14140f754;
}

