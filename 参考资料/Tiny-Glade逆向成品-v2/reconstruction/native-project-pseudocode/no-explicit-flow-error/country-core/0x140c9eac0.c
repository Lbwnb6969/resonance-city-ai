// VA 0x140c9eac0, PDB extent 11012 bytes
// country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::ui_terrain_focus_mode::ui_terrain_focus_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_terrain_focus_mode.rs
   Extent: 11012 */

void pdb_140c9eac0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,undefined8 param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 param_13,undefined8 *param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  longlong lVar19;
  char cVar20;
  longlong lVar21;
  float *pfVar22;
  byte *pbVar23;
  byte *pbVar24;
  float *pfVar25;
  ulonglong uVar26;
  float *pfVar27;
  undefined8 *puVar28;
  uint *puVar29;
  uint uVar30;
  longlong lVar31;
  int *piVar32;
  undefined8 uVar33;
  char *pcVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  int *piStack_2e0;
  char *pcStack_2d8;
  undefined8 uStack_2d0;
  float *pfStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  float fStack_28c;
  byte *pbStack_280;
  byte *pbStack_278;
  uint *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  byte *pbStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  longlong lStack_220;
  ulonglong uStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float *pfStack_1d8;
  code *pcStack_1d0;
  undefined8 *puStack_1c8;
  code *pcStack_1c0;
  int iStack_1a8;
  undefined1 uStack_190;
  float *pfStack_18f;
  undefined8 uStack_187;
  undefined8 uStack_17f;
  undefined7 uStack_177;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  undefined3 uStack_144;
  undefined1 uStack_141;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined3 uStack_138;
  undefined4 uStack_135;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined2 uStack_12f;
  float fStack_12d;
  undefined *puStack_128;
  undefined8 uStack_120;
  float fStack_114;
  float *pfStack_110;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_2e8 = *param_11;
  uStack_318 = param_11[4];
  uStack_310 = param_11[5];
  uStack_308 = param_11[6];
  uStack_300 = param_11[7];
  uStack_338 = param_11[8];
  uStack_330 = param_11[9];
  uStack_328 = param_11[10];
  uStack_320 = param_11[0xb];
  uStack_358 = param_11[0xc];
  uStack_350 = param_11[0xd];
  uStack_348 = *(undefined4 *)(param_11 + 0xe);
  uStack_344 = *(undefined4 *)((longlong)param_11 + 0x74);
  uStack_340 = *(undefined4 *)(param_11 + 0xf);
  uStack_33c = *(undefined4 *)((longlong)param_11 + 0x7c);
  pcVar6 = (char *)*param_1;
  if (*pcVar6 != '\0') {
    return;
  }
  if (*(int *)(pcVar6 + 8) != 6) {
    return;
  }
  puStack_270 = (uint *)*param_14;
  pbStack_278 = (byte *)param_14[4];
  pbStack_280 = (byte *)param_14[8];
  uVar33 = param_14[0xc];
  piVar32 = (int *)param_14[0x10];
  pcVar34 = (char *)param_14[0x14];
  fVar37 = *(float *)(pcVar6 + 0xc);
  if ((*(char *)*param_2 != '\x12') && (*(float *)((char *)*param_2 + 0x20) == fVar37)) {
    return;
  }
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  fStack_108 = fVar37;
  lVar21 = pdb_140b14380(*param_3,fVar37);
  pfVar25 = (float *)*param_7;
  if (lVar21 == 0) goto LAB_140ca0a1e;
  lVar31 = *(longlong *)(lVar21 + 0x10);
  if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143077858);
  }
  pfVar27 = *(float **)(lVar21 + 8);
  fStack_2b8 = *pfVar27;
  fStack_2b4 = pfVar27[2];
  auVar39._4_4_ = fStack_2b4;
  auVar39._0_4_ = fStack_2b8;
  auVar39._8_8_ = 0;
  uVar26 = lVar31 * 0xc - 0xc;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar26;
  if ((SUB164(auVar40 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
    auVar45._4_4_ = fStack_2b4;
    auVar45._0_4_ = fStack_2b8;
    auVar45._8_8_ = 0;
    auVar11._4_4_ = pfVar27[2];
    auVar11._0_4_ = *pfVar27;
    auVar11._8_8_ = 0;
    auVar46 = minps(auVar45,auVar11);
    auVar12._4_4_ = pfVar27[2];
    auVar12._0_4_ = *pfVar27;
    auVar12._8_8_ = 0;
    auVar39 = maxps(auVar39,auVar12);
    pfVar22 = pfVar27 + 3;
  }
  else {
    auVar46._4_4_ = fStack_2b4;
    auVar46._0_4_ = fStack_2b8;
    auVar46._8_8_ = 0;
    pfVar22 = pfVar27;
  }
  uVar44 = auVar46._0_8_;
  uVar38 = auVar39._0_8_;
  if (0xb < uVar26) {
    do {
      auVar13._4_4_ = pfVar22[2];
      auVar13._0_4_ = *pfVar22;
      auVar13._8_8_ = 0;
      auVar46 = minps(auVar46,auVar13);
      auVar14._4_4_ = pfVar22[2];
      auVar14._0_4_ = *pfVar22;
      auVar14._8_8_ = 0;
      auVar40 = maxps(auVar39,auVar14);
      auVar15._4_4_ = pfVar22[5];
      auVar15._0_4_ = pfVar22[3];
      auVar15._8_8_ = 0;
      auVar46 = minps(auVar46,auVar15);
      uVar44 = auVar46._0_8_;
      auVar16._4_4_ = pfVar22[5];
      auVar16._0_4_ = pfVar22[3];
      auVar16._8_8_ = 0;
      auVar39 = maxps(auVar40,auVar16);
      uVar38 = auVar39._0_8_;
      pfVar22 = pfVar22 + 6;
    } while (pfVar22 != pfVar27 + lVar31 * 3);
  }
  uVar4 = *(undefined8 *)(pfVar25 + 2);
  fVar51 = pfVar25[5];
  fVar49 = (*(float *)(lVar21 + 0x20) - pfVar25[1]) / pfVar25[4];
  fVar50 = *pfVar25;
  if (*(longlong *)(lVar21 + 0x10) != 0) {
    pfVar22 = *(float **)(lVar21 + 8);
    pfVar27 = pfVar22 + *(longlong *)(lVar21 + 0x10) * 3;
    fVar52 = _DAT_142f61054;
    do {
      fVar47 = *pfVar22 - ((float)uVar38 + (float)uVar44) * _DAT_142e36f60;
      fVar48 = pfVar22[2] -
               ((float)((ulonglong)uVar38 >> 0x20) + (float)((ulonglong)uVar44 >> 0x20)) *
               _UNK_142e36f64;
      fVar47 = SQRT(fVar48 * fVar48 + fVar47 * fVar47);
      if (fVar47 < fVar52) {
        fVar52 = fVar47;
        fStack_2b8 = *pfVar22;
        fStack_2b4 = pfVar22[2];
      }
      pfVar22 = pfVar22 + 3;
    } while (pfVar22 != pfVar27);
  }
  piStack_2e0 = piVar32;
  pcStack_2d8 = pcVar34;
  uStack_2d0 = uVar33;
  pfStack_2c8 = pfVar25;
  fStack_114 = fVar37;
  pdb_140df4540(&fStack_100,&fStack_2b8);
  uStack_2f8 = CONCAT44(_UNK_142e4e654,_DAT_142e4e650);
  uStack_2f0 = CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
  bVar35 = 2 < *(uint *)(*param_12 + 0x10);
  fStack_2bc = *(float *)(lVar21 + 0x18) * _DAT_142f3e570 +
               (_DAT_142e36f28 - *(float *)(lVar21 + 0x18)) * _DAT_142e37874;
  lStack_210 = lVar21;
  pdb_140defa80(&uStack_238,fStack_100,fStack_f8);
  fVar37 = fStack_fc;
  pdb_140defdf0(&uStack_208,&uStack_238,_DAT_142e36f50,fStack_fc);
  fStack_290 = (float)uStack_1f8;
  fStack_28c = uStack_1f8._4_4_;
  pbStack_2a0 = (byte *)CONCAT44(uStack_208._4_4_,(float)uStack_208);
  uStack_298._0_4_ = (uint)(float)uStack_200;
  uStack_298._4_4_ = uStack_200._4_4_;
  uStack_2a8 = CONCAT44(0x3f000000,(uint)uStack_2a8);
  uStack_2a8 = CONCAT71(uStack_2a8._1_7_,1);
  if (CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_1e8._4_4_,(float)uStack_1e8),
                  CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0) << 2,4);
  }
  uStack_218 = *param_4;
  uStack_158 = &fStack_108;
  fStack_150 = 6.316635;
  uStack_14c = 1.4013e-45;
  uStack_f1 = 1;
  pdb_140f60760(&uStack_208,&UNK_143077870,&uStack_158);
  iVar18 = (uint)bVar35 * 2;
  iVar17 = (uint)bVar35 * 3;
  uStack_268 = CONCAT44(uStack_208._4_4_,(float)uStack_208);
  uStack_260 = CONCAT44(uStack_200._4_4_,(float)uStack_200);
  uStack_258 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  uStack_14c._3_1_ = (undefined1)uStack_2a8;
  fStack_148 = (float)(uStack_2a8 >> 8);
  uStack_144 = (undefined3)(uStack_2a8 >> 0x28);
  uStack_141 = SUB81(pbStack_2a0,0);
  uStack_140 = (undefined4)((ulonglong)pbStack_2a0 >> 8);
  uStack_13c._0_3_ = (undefined3)((ulonglong)pbStack_2a0 >> 0x28);
  uStack_13c._3_1_ = (undefined1)(uint)uStack_298;
  uStack_138 = (undefined3)((uint)uStack_298 >> 8);
  uStack_135 = uStack_298._4_4_;
  uStack_131 = SUB41(fStack_290,0);
  uStack_130 = (undefined1)((uint)fStack_290 >> 8);
  uStack_12f = (undefined2)((uint)fStack_290 >> 0x10);
  fStack_12d = fStack_28c;
  uStack_16c = uStack_298._4_4_;
  pfStack_18f = uStack_158;
  uStack_187 = CONCAT44(uStack_14c,fStack_150);
  uStack_17f = CONCAT44(_uStack_144,fStack_148);
  uStack_177 = (undefined7)CONCAT44(uStack_13c,uStack_140);
  uStack_208._0_4_ = 0.0;
  uStack_208._4_4_ = 0.0;
  uStack_200._0_4_ = 1.12104e-44;
  uStack_200._4_4_ = 0.0;
  uStack_1f8._0_4_ = 0.0;
  uStack_1f8._4_4_ = 0.0;
  uVar30 = (uint)bVar35;
  uStack_1e8._0_4_ = 2.8026e-45;
  uStack_1e8._4_4_ = 0.0;
  pfStack_1d8 = (float *)CONCAT44(pfStack_1d8._4_4_,iVar18);
  pcStack_1c0 = (code *)CONCAT44(pcStack_1c0._4_4_,iVar17);
  uStack_190 = 0;
  uStack_160 = 0x100;
  uStack_f1 = 0;
  puVar28 = &uStack_268;
  uVar26 = uStack_218;
  uStack_1f0._0_4_ = (float)uVar30;
  iStack_1a8 = iVar17;
  lVar21 = pdb_1409008d0(uStack_218,puVar28,&uStack_208);
  if ((*(char *)(lVar21 + 0x18) == '\0') || (*(undefined8 **)(lVar21 + 0x38) != puVar28)) {
    uStack_104 = 0;
    fVar52 = _DAT_142e37830;
  }
  else {
    bVar35 = *(int *)(lVar21 + 0x28) != 2;
    uStack_104 = (undefined4)CONCAT71((int7)(uVar26 >> 8),bVar35);
    fVar52 = _DAT_142e37834;
    if (!bVar35) {
      fVar52 = _DAT_142e37830;
    }
  }
  lStack_220 = *param_5;
  uStack_208 = &fStack_108;
  uStack_200._0_4_ = 6.316635;
  uStack_200._4_4_ = 1.4013e-45;
  uStack_1f8 = &fStack_24c;
  uStack_1f0._0_4_ = 7.7194595;
  uStack_1f0._4_4_ = 1.4013e-45;
  uStack_1e8 = &fStack_100;
  uStack_1e0 = pdb_140f33df0;
  pfStack_1d8 = &fStack_2bc;
  pcStack_1d0 = pdb_140f70fc0;
  uStack_f1 = 0;
  fStack_24c = fVar52;
  pdb_140f60760(&uStack_158,&UNK_143077890,&uStack_208);
  pfStack_110 = uStack_158;
  pbVar24 = (byte *)CONCAT44(uStack_14c,fStack_150);
  uVar33 = CONCAT44(_uStack_144,fStack_148);
  uStack_208._0_4_ = (float)uStack_238;
  uStack_208._4_4_ = (float)((ulonglong)uStack_238 >> 0x20);
  uStack_200._0_4_ = (float)uStack_230;
  uStack_200._4_4_ = (float)((ulonglong)uStack_230 >> 0x20);
  pdb_14007ee60();
  pbVar23 = pub_1406abab0(0x28,8);
  pbStack_240 = pbVar24;
  if (pbVar23 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar23[0] = 1;
  pbVar23[1] = 0;
  pbVar23[2] = 0;
  pbVar23[3] = 0;
  pbVar23[4] = 0;
  pbVar23[5] = 0;
  pbVar23[6] = 0;
  pbVar23[7] = 0;
  pbVar23[8] = 1;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  *(ulonglong *)(pbVar23 + 0x10) = CONCAT44(uStack_208._4_4_,(float)uStack_208);
  *(ulonglong *)(pbVar23 + 0x18) = CONCAT44(uStack_200._4_4_,(float)uStack_200);
  *(float *)(pbVar23 + 0x20) = fVar37;
  *(float *)(pbVar23 + 0x24) = fVar52;
  pdb_1409baea0(&uStack_158,pbVar24,uVar33,pbVar23,&UNK_1430778a8);
  pfStack_1d8 = (float *)CONCAT17(uStack_131,CONCAT43(uStack_135,uStack_138));
  uStack_1e8._0_4_ = fStack_148;
  uStack_1e8._4_4_ = _uStack_144;
  uStack_1e0 = (code *)CONCAT44(uStack_13c,uStack_140);
  uStack_1f0._0_4_ = fStack_150;
  uStack_1f0._4_4_ = uStack_14c;
  uStack_208._0_4_ = SUB84(puVar28,0);
  fVar52 = (float)uStack_208;
  uStack_208._4_4_ = (float)((ulonglong)puVar28 >> 0x20);
  fVar47 = uStack_208._4_4_;
  uStack_200._0_4_ = (float)((uint)(float)uStack_200 & 0xffffff00);
  uStack_1f8 = uStack_158;
  pdb_141a88350(lStack_220,&uStack_208);
  if (pfStack_110 != (float *)0x0) {
    pub_1406abac0(pbStack_240,(ulonglong)pfStack_110,1);
  }
  uStack_f1 = 0;
  pdb_140df4540(&uStack_158,&uStack_238,fVar37);
  plVar9 = param_6 + 6;
  uStack_f1 = 0;
  pdb_140df4520(&uStack_208,plVar9);
  fVar57 = fStack_150;
  fVar36 = (float)uStack_200;
  fVar48 = (float)uStack_208;
  fVar56 = (float)uStack_158;
  fVar58 = uStack_208._4_4_ * _DAT_142e37874 + uStack_158._4_4_;
  uStack_f1 = 0;
  pdb_140df4540(&uStack_158,&uStack_238,fVar37);
  uStack_f1 = 0;
  pdb_140df4520(&uStack_208,plVar9);
  fVar50 = fVar49 * (float)((ulonglong)uVar4 >> 0x20) + fVar50;
  fVar51 = fVar49 * fVar51 + (float)uVar4;
  if (*(char *)(lVar21 + 0x18) != '\0') {
    if (*(char *)(lVar21 + 0x18) == '\x02') {
      if (*(undefined8 **)(lVar21 + 0x38) == puVar28) {
        bVar5 = *(byte *)(lVar21 + 0x19);
        if (bVar5 < 2) {
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          pauVar7 = (undefined1 (*) [16])*param_8;
          lVar31 = param_6[7];
          uVar41 = *(undefined4 *)((longlong)param_6 + 0x3c);
          uVar53 = *(undefined4 *)(lStack_210 + 0x18);
          uVar54 = *(undefined4 *)(lStack_210 + 0x20);
          uStack_1e8._0_4_ = (float)*(undefined8 *)pauVar7[2];
          uStack_1e8._4_4_ = (float)((ulonglong)*(undefined8 *)pauVar7[2] >> 0x20);
          auVar40 = *pauVar7;
          uStack_1f8 = *(float **)pauVar7[1];
          uStack_1f0._0_4_ = (float)*(undefined8 *)(pauVar7[1] + 8);
          uStack_1f0._4_4_ = (float)((ulonglong)*(undefined8 *)(pauVar7[1] + 8) >> 0x20);
          uStack_208._0_4_ = auVar40._0_4_;
          uStack_208._4_4_ = auVar40._4_4_;
          uStack_200._0_4_ = auVar40._8_4_;
          uStack_200._4_4_ = auVar40._12_4_;
          *(undefined8 *)*pauVar7 = 0x8000000000000001;
          *(float *)(*pauVar7 + 8) = fStack_114;
          *(int *)(*pauVar7 + 0xc) = (int)lVar31;
          *(undefined4 *)pauVar7[1] = uVar54;
          *(undefined4 *)(pauVar7[1] + 4) = uVar41;
          *(undefined4 *)(pauVar7[1] + 8) = uVar53;
          if (auVar40._0_8_ != -0x7ffffffffffffffe) {
            pdb_140c11450(&uStack_208);
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1430778f0,0x16d,&UNK_143077a60);
          }
        }
        else {
          if (bVar5 == 2) goto LAB_140c9f39c;
          fVar56 = fVar56 + fVar48 * _DAT_143077500;
          fVar57 = fVar57 + fVar36 * _UNK_143077504;
          fVar49 = (float)uStack_158 + (float)uStack_208 * _DAT_143077510;
          fVar48 = fStack_150 + (float)uStack_200 * _UNK_143077514;
          if (bVar5 == 3) {
            fVar49 = fVar49 - fVar56;
            fVar48 = fVar48 - fVar57;
            fVar36 = fVar48 * fVar48 + fVar49 * fVar49;
            if (fVar36 <= _DAT_143006dc0) {
              fVar36 = _DAT_143006dc0;
            }
            *(float *)(param_6 + 5) =
                 ((fVar51 - fVar57) * fVar48 + (fVar50 - fVar56) * fVar49) / fVar36 -
                 *(float *)(lStack_210 + 0x18);
            *(undefined4 *)((longlong)param_6 + 0x3c) = *(undefined4 *)(lStack_210 + 0x18);
            *(undefined4 *)(param_6 + 7) = *(undefined4 *)(lStack_210 + 0x20);
          }
          else {
            fVar36 = uStack_208._4_4_ * _DAT_142f3e570 + uStack_158._4_4_;
            pdb_14007ee60();
            pfVar25 = (float *)pub_1406abab0(0x18,4);
            if (pfVar25 == (float *)0x0) {
              uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,0x18);
            }
            *pfVar25 = fVar56;
            pfVar25[1] = fVar58;
            pfVar25[2] = fVar57;
            pfVar25[3] = fVar49;
            pfVar25[4] = fVar36;
            pfVar25[5] = fVar48;
            uStack_208._0_4_ = 2.8026e-45;
            uStack_208._4_4_ = 0.0;
            uStack_200._0_4_ = SUB84(pfVar25,0);
            uStack_200._4_4_ = (float)((ulonglong)pfVar25 >> 0x20);
            uStack_1f8._0_4_ = 2.8026e-45;
            uStack_1f8._4_4_ = 0.0;
            uStack_1f0._0_4_ = 0.0;
            uStack_1f0._4_4_ = -0.0;
            pfStack_1d8 = (float *)((ulonglong)pfStack_1d8 & 0xffffffff00000000);
            puStack_1c8 = (undefined8 *)CONCAT26(puStack_1c8._6_2_,0x140000000);
            uStack_158._0_4_ = (float)lStack_220;
            uStack_158._4_4_ = (float)((ulonglong)lStack_220 >> 0x20);
            fStack_148 = (float)((uint)fStack_148 & 0xffffff00);
            uStack_f1 = 0;
            fStack_150 = fVar52;
            uStack_14c = fVar47;
            pdb_140ab32d0(&uStack_208,&uStack_158);
            fVar49 = fVar49 - fVar56;
            fVar48 = fVar48 - fVar57;
            fVar36 = fVar48 * fVar48 + fVar49 * fVar49;
            if (fVar36 <= _DAT_143006dc0) {
              fVar36 = _DAT_143006dc0;
            }
            fVar48 = ((fVar51 - fVar57) * fVar48 + (fVar50 - fVar56) * fVar49) / fVar36 -
                     *(float *)(param_6 + 5);
            fVar49 = 0.0;
            if (0.0 <= fVar48) {
              fVar49 = fVar48;
            }
            fVar48 = _DAT_142e36f28;
            if (fVar49 <= _DAT_142e36f28) {
              fVar48 = fVar49;
            }
            if ((fVar48 != *(float *)(lStack_210 + 0x18)) ||
               (NAN(fVar48) || NAN(*(float *)(lStack_210 + 0x18)))) {
              uStack_1f0._0_4_ = fStack_f8;
              uStack_1f8._0_4_ = fStack_100;
              uStack_1f8._4_4_ = fStack_fc;
              uStack_1f0._4_4_ = fStack_114;
              uStack_208._0_4_ = 1.4013e-45;
              uStack_200._0_4_ = 0.0;
              uStack_f1 = 0;
              uStack_208._4_4_ = fVar48;
              pdb_141b75000(param_13,&uStack_208,&UNK_1430778d8);
            }
          }
        }
LAB_140c9f49a:
        if (*(char *)(lVar21 + 0x18) == '\0') goto LAB_140c9f760;
      }
    }
    else if (*(undefined8 **)(lVar21 + 0x38) == puVar28) {
LAB_140c9f39c:
      if (*(int *)(lVar21 + 0x28) != 2) {
        fVar49 = *(float *)(lVar21 + 0x4c) - (float)uStack_238;
        fVar48 = *(float *)(lVar21 + 0x54) - (float)((ulonglong)uStack_238 >> 0x20);
        fVar36 = _DAT_142e36f28 / SQRT(fVar48 * fVar48 + fVar49 * fVar49);
        *plVar9 = CONCAT44(fVar36 * fVar48,fVar36 * fVar49);
      }
      goto LAB_140c9f49a;
    }
    if ((*(undefined8 **)(lVar21 + 0x38) == puVar28) && (*(int *)(lVar21 + 0x28) != 2)) {
      fVar57 = (float)*plVar9;
      fVar58 = (float)((ulonglong)*plVar9 >> 0x20);
      uStack_f1 = 0;
      pdb_140de88f0(&uStack_208,fVar57,fVar58);
      fVar56 = uStack_200._4_4_;
      fVar36 = (float)uStack_200;
      fVar48 = uStack_208._4_4_;
      fVar49 = (float)uStack_208;
      uStack_158._0_4_ = fVar57 * (float)uStack_230 + (float)uStack_238;
      uStack_158._4_4_ = fVar58 * (float)uStack_230 + (float)((ulonglong)uStack_238 >> 0x20);
      uStack_f1 = 0;
      pdb_140df4540(&uStack_208,&uStack_158,fVar37);
      fVar57 = fVar36 * fVar36;
      fVar58 = fVar56 * fVar56;
      fVar43 = fVar48 * fVar48 + fVar49 * fVar49;
      fVar37 = _UNK_143015ec8 * fVar36 + _UNK_143015ec4 * fVar48 + _DAT_143015ec0 * fVar49;
      fVar37 = fVar37 + fVar37;
      fVar42 = fVar56 + fVar56;
      uStack_268 = CONCAT44(uStack_208._4_4_ +
                            fVar42 * (fVar36 * 0.0 - fVar49 * _DAT_142e3787c) +
                            fVar37 * fVar48 + (fVar58 - (fVar43 + fVar57)) * _UNK_143015ec4,
                            (float)uStack_208 +
                            fVar42 * (fVar48 * _DAT_142e3787c - fVar36 * 0.0) +
                            fVar37 * fVar49 + (fVar58 - (fVar43 + fVar57)) * _DAT_143015ec0);
      uStack_260 = CONCAT44(uStack_260._4_4_,
                            fVar42 * (fVar49 * 0.0 - fVar48 * 0.0) +
                            fVar37 * fVar36 + (fVar58 - (fVar43 + fVar57)) * _UNK_143015ec8 +
                            (float)uStack_200);
      uStack_208 = &fStack_108;
      uStack_200._0_4_ = 6.316635;
      uStack_200._4_4_ = 1.4013e-45;
      uStack_1f8 = (float *)&uStack_238;
      uStack_1f0._0_4_ = 6.3164673;
      uStack_1f0._4_4_ = 1.4013e-45;
      uStack_1e8 = (float *)&uStack_268;
      uStack_1e0 = pdb_140f33d80;
      uStack_f1 = 0;
      pdb_140f60760(&uStack_158,&UNK_143077a78,&uStack_208);
      pfStack_110 = (float *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
      pbVar24 = (byte *)CONCAT44(uStack_14c,fStack_150);
      uVar33 = CONCAT44(_uStack_144,fStack_148);
      uStack_200._0_4_ = (float)(uint)uStack_260;
      uStack_208._0_4_ = (float)uStack_268;
      uStack_208._4_4_ = (float)((ulonglong)uStack_268 >> 0x20);
      pdb_14007ee60();
      pbVar23 = pub_1406abab0(0x30,0x10);
      pbStack_240 = pbVar24;
      if (pbVar23 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x30);
      }
      pbVar23[0] = 1;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 1;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      *(float *)(pbVar23 + 0x10) = fVar49;
      *(float *)(pbVar23 + 0x14) = fVar48;
      *(float *)(pbVar23 + 0x18) = fVar36;
      *(float *)(pbVar23 + 0x1c) = fVar56;
      *(ulonglong *)(pbVar23 + 0x20) = CONCAT44(uStack_208._4_4_,(float)uStack_208);
      *(float *)(pbVar23 + 0x28) = (float)uStack_200;
      pdb_1409baea0(&uStack_158,pbVar24,uVar33,pbVar23,&UNK_143077a98);
      pfStack_1d8 = (float *)CONCAT17(uStack_131,CONCAT43(uStack_135,uStack_138));
      uStack_1e8._0_4_ = fStack_148;
      uStack_1e8._4_4_ = _uStack_144;
      uStack_1e0 = (code *)CONCAT44(uStack_13c,uStack_140);
      uStack_1f8._0_4_ = (float)uStack_158;
      uStack_1f8._4_4_ = uStack_158._4_4_;
      uStack_1f0._0_4_ = fStack_150;
      uStack_1f0._4_4_ = uStack_14c;
      uStack_200._0_4_ = (float)((uint)(float)uStack_200 & 0xffffff00);
      uStack_208._0_4_ = fVar52;
      uStack_208._4_4_ = fVar47;
      pdb_141a88350(lStack_220,&uStack_208);
      if (pfStack_110 != (float *)0x0) {
        pub_1406abac0(pbStack_240,(ulonglong)pfStack_110,1);
      }
    }
  }
LAB_140c9f760:
  fVar37 = _DAT_142e36f28;
  fVar49 = fStack_100 + _DAT_142e378e0;
  fVar52 = fStack_fc + _UNK_142e378e4;
  fVar47 = fStack_f8 + 0.0;
  uStack_1f8._0_4_ = (float)_DAT_143077520 + fVar49;
  uStack_1f8._4_4_ = (float)((ulonglong)_DAT_143077520 >> 0x20) + fVar52;
  uStack_208._0_4_ = (float)_DAT_142e4e650;
  uStack_208._4_4_ = (float)_UNK_142e4e654;
  uStack_200._0_4_ = (float)_UNK_142e4e658;
  uStack_200._4_4_ = (float)_UNK_142e4e65c;
  uStack_1f0._4_4_ = 1.0;
  uStack_1e8._0_4_ = 1.0;
  uStack_1e8._4_4_ = 1.0;
  uStack_1f0._0_4_ = fVar47;
  pdb_140b3d590(&uStack_268,_DAT_142f95160,_DAT_142e36f28,_DAT_142e36f50,&uStack_208);
  uStack_158 = &fStack_108;
  fStack_150 = 6.316635;
  uStack_14c = 1.4013e-45;
  uStack_f2 = 1;
  pdb_140f60760(&uStack_208,&UNK_143077ac8,&uStack_158);
  uStack_2a8 = CONCAT44(uStack_208._4_4_,(float)uStack_208);
  pbStack_2a0 = (byte *)CONCAT44(uStack_200._4_4_,(float)uStack_200);
  uStack_298 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  uStack_158._7_1_ = (undefined1)uStack_268;
  fStack_150 = (float)((ulonglong)uStack_268 >> 8);
  uStack_14c._0_3_ = (undefined3)((ulonglong)uStack_268 >> 0x28);
  uStack_14c._3_1_ = (undefined1)uStack_260;
  fStack_148 = (float)((ulonglong)uStack_260 >> 8);
  uStack_144 = (undefined3)((ulonglong)uStack_260 >> 0x28);
  uStack_141 = (undefined1)uStack_258;
  uStack_140 = (undefined4)((ulonglong)uStack_258 >> 8);
  uStack_13c._0_3_ = (undefined3)((ulonglong)uStack_258 >> 0x28);
  uStack_17f = CONCAT44(uStack_158._4_4_,(float)uStack_158);
  uStack_177 = (undefined7)CONCAT44(uStack_14c,fStack_150);
  uStack_170 = (undefined4)uStack_260;
  uStack_16c = (undefined4)((ulonglong)uStack_260 >> 0x20);
  uStack_208._0_4_ = 0.0;
  uStack_208._4_4_ = 0.0;
  uStack_200._0_4_ = 1.12104e-44;
  uStack_200._4_4_ = 0.0;
  uStack_1f8._0_4_ = 0.0;
  uStack_1f8._4_4_ = 0.0;
  uStack_1e8._0_4_ = 2.8026e-45;
  uStack_1e8._4_4_ = 0.0;
  pfStack_1d8 = (float *)CONCAT44(pfStack_1d8._4_4_,iVar18);
  pcStack_1c0 = (code *)CONCAT44(pcStack_1c0._4_4_,iVar17);
  uStack_190 = 0;
  uStack_187 = CONCAT17(2,(undefined7)uStack_187);
  uStack_160 = 0x100;
  uStack_f2 = 0;
  puVar28 = &uStack_2a8;
  uStack_1f0._0_4_ = (float)uVar30;
  iStack_1a8 = iVar17;
  lVar21 = pdb_1409008d0(uStack_218,puVar28,&uStack_208);
  if ((*(char *)(lVar21 + 0x18) != '\0') && (*(undefined8 **)(lVar21 + 0x38) == puVar28)) {
    uStack_104 = CONCAT31((int3)((uint)uStack_104 >> 8),
                          (byte)uStack_104 | *(int *)(lVar21 + 0x28) != 2);
    if (*(char *)(lVar21 + 0x18) == '\x01') {
      if ((*(byte *)(lVar21 + 0x19) & 1) != 0) {
LAB_140c9f948:
        fVar37 = _DAT_142e37990;
      }
    }
    else if (*(byte *)(lVar21 + 0x19) != 2) goto LAB_140c9f948;
  }
  uStack_208 = &fStack_108;
  uStack_200._0_4_ = 6.316635;
  uStack_200._4_4_ = 1.4013e-45;
  uStack_1f8 = (float *)&uStack_2f8;
  uStack_1f0._0_4_ = 7.6004868;
  uStack_1f0._4_4_ = 1.4013e-45;
  uStack_1e8 = &fStack_100;
  uStack_1e0 = pdb_140f33d80;
  pfStack_1d8 = &fStack_2c0;
  pcStack_1d0 = pdb_140f70fc0;
  uStack_f2 = 0;
  fStack_2c0 = fVar37;
  pdb_140f60760(&uStack_158,&UNK_143077adf,&uStack_208);
  pfStack_110 = (float *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
  pbVar24 = (byte *)CONCAT44(uStack_14c,fStack_150);
  uVar33 = CONCAT44(_uStack_144,fStack_148);
  pdb_14007ee60();
  pbVar23 = pub_1406abab0(0x30,0x10);
  pbStack_240 = pbVar24;
  if (pbVar23 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x30);
  }
  pbVar23[0] = 1;
  pbVar23[1] = 0;
  pbVar23[2] = 0;
  pbVar23[3] = 0;
  pbVar23[4] = 0;
  pbVar23[5] = 0;
  pbVar23[6] = 0;
  pbVar23[7] = 0;
  pbVar23[8] = 1;
  uVar55 = _UNK_142e4e65c;
  uVar54 = _UNK_142e4e658;
  uVar53 = _UNK_142e4e654;
  uVar41 = _DAT_142e4e650;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  *(undefined4 *)(pbVar23 + 0x10) = _DAT_142e4e650;
  *(undefined4 *)(pbVar23 + 0x14) = uVar53;
  *(undefined4 *)(pbVar23 + 0x18) = uVar54;
  *(undefined4 *)(pbVar23 + 0x1c) = uVar55;
  *(float *)(pbVar23 + 0x20) = fVar37;
  *(ulonglong *)(pbVar23 + 0x24) = CONCAT44(fVar52,fVar49);
  *(float *)(pbVar23 + 0x2c) = fVar47;
  pdb_1409baea0(&uStack_158,pbVar24,uVar33,pbVar23,&UNK_143077af8);
  pfStack_1d8 = (float *)CONCAT17(uStack_131,CONCAT43(uStack_135,uStack_138));
  uStack_1e8._0_4_ = fStack_148;
  uStack_1e8._4_4_ = _uStack_144;
  uStack_1e0 = (code *)CONCAT44(uStack_13c,uStack_140);
  uStack_1f8._0_4_ = (float)uStack_158;
  uStack_1f8._4_4_ = uStack_158._4_4_;
  uStack_1f0._0_4_ = fStack_150;
  uStack_1f0._4_4_ = uStack_14c;
  uStack_208._0_4_ = SUB84(puVar28,0);
  uStack_208._4_4_ = (float)((ulonglong)puVar28 >> 0x20);
  uStack_200._0_4_ = (float)((uint)(float)uStack_200 & 0xffffff00);
  pdb_141a88350(lStack_220,&uStack_208);
  if (pfStack_110 != (float *)0x0) {
    pub_1406abac0(pbStack_240,(ulonglong)pfStack_110,1);
  }
  if ((*(char *)(lVar21 + 0x18) == '\x02') && (*(undefined8 **)(lVar21 + 0x38) == puVar28)) {
    bVar5 = *(byte *)(lVar21 + 0x19);
    if (bVar5 < 2) {
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      pauVar7 = (undefined1 (*) [16])*param_8;
      lVar21 = param_6[7];
      uVar1 = *(undefined4 *)((longlong)param_6 + 0x3c);
      uVar2 = *(undefined4 *)(lStack_210 + 0x18);
      uVar3 = *(undefined4 *)(lStack_210 + 0x20);
      uStack_1e8._0_4_ = (float)*(undefined8 *)pauVar7[2];
      uStack_1e8._4_4_ = (float)((ulonglong)*(undefined8 *)pauVar7[2] >> 0x20);
      auVar40 = *pauVar7;
      uStack_1f8._0_4_ = (float)*(undefined8 *)pauVar7[1];
      uStack_1f8._4_4_ = (float)((ulonglong)*(undefined8 *)pauVar7[1] >> 0x20);
      uStack_1f0._0_4_ = (float)*(undefined8 *)(pauVar7[1] + 8);
      uStack_1f0._4_4_ = (float)((ulonglong)*(undefined8 *)(pauVar7[1] + 8) >> 0x20);
      uStack_208._0_4_ = auVar40._0_4_;
      uStack_208._4_4_ = auVar40._4_4_;
      uStack_200._0_4_ = auVar40._8_4_;
      uStack_200._4_4_ = auVar40._12_4_;
      *(undefined8 *)*pauVar7 = 0x8000000000000001;
      *(float *)(*pauVar7 + 8) = fStack_114;
      *(int *)(*pauVar7 + 0xc) = (int)lVar21;
      *(undefined4 *)pauVar7[1] = uVar3;
      *(undefined4 *)(pauVar7[1] + 4) = uVar1;
      *(undefined4 *)(pauVar7[1] + 8) = uVar2;
      if (auVar40._0_8_ != -0x7ffffffffffffffe) {
        pdb_140c11450(&uStack_208);
        uStack_f2 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1430778f0,0x16d,&UNK_143077b40);
      }
    }
    else if (bVar5 != 2) {
      if (bVar5 == 4) {
        fStack_2b0 = fStack_100;
        fStack_2ac = fStack_f8;
        uStack_f2 = 0;
        pdb_140df4540(&uStack_238,&fStack_2b0,0);
        uStack_158._0_4_ = (float)*puStack_270;
        uStack_158._4_4_ = (float)puStack_270[1];
        fVar48 = (float)uStack_158 / uStack_158._4_4_;
        uStack_14c = 1.0;
        uVar41 = *(undefined4 *)(pbStack_278 + 4);
        uStack_f2 = 0;
        fStack_150 = fVar48;
        fVar37 = (float)pdb_140de83c0(puStack_270[1],uVar41);
        uStack_200._0_4_ = (float)uStack_230;
        uStack_208._0_4_ = (float)uStack_238;
        uStack_208._4_4_ = (float)((ulonglong)uStack_238 >> 0x20);
        uStack_200._4_4_ = 0.0;
        uStack_1f8._0_4_ = 1.0;
        uStack_1f8._4_4_ = 0.0;
        uStack_2a8 = _DAT_14305d860;
        pbStack_2a0 = (byte *)((ulonglong)pbStack_2a0 & 0xffffffffffffff00);
        uStack_f2 = 0;
        pdb_140bce5a0(&fStack_24c,fVar48 * fVar37,uVar41,&uStack_158,pbStack_280,&uStack_208,
                      &uStack_2a8);
        uStack_158._0_4_ = fStack_100;
        uStack_158._4_4_ = fStack_f8;
        uStack_f2 = 0;
        pdb_140df4540(&uStack_208,&uStack_158,0);
        fVar48 = SQRT((fStack_244 - (float)uStack_200) * (fStack_244 - (float)uStack_200) +
                      (fStack_248 - uStack_208._4_4_) * (fStack_248 - uStack_208._4_4_) +
                      (fStack_24c - (float)uStack_208) * (fStack_24c - (float)uStack_208)) -
                 *(float *)((longlong)param_6 + 0x2c);
        fVar37 = 0.0;
        if (0.0 <= fVar48) {
          fVar37 = fVar48;
        }
        uStack_200._4_4_ = _DAT_142e382c8;
        if (fVar37 <= _DAT_142e382c8) {
          uStack_200._4_4_ = fVar37;
        }
        if ((uStack_200._4_4_ != *(float *)(lStack_210 + 0x20)) ||
           (uVar41 = _DAT_142e4e650, uVar53 = _UNK_142e4e654, uVar54 = _UNK_142e4e658,
           uVar55 = _UNK_142e4e65c, NAN(uStack_200._4_4_) || NAN(*(float *)(lStack_210 + 0x20)))) {
          uStack_1f0._4_4_ = fStack_114;
          uStack_208._0_4_ = 0.0;
          uStack_200._0_4_ = 1.4013e-45;
          uStack_f2 = 0;
          uStack_1f8._0_4_ = fVar49;
          uStack_1f8._4_4_ = fVar52;
          uStack_1f0._0_4_ = fVar47;
          pdb_141b75000(param_13,&uStack_208,&UNK_143077b28);
          uVar41 = _DAT_142e4e650;
          uVar53 = _UNK_142e4e654;
          uVar54 = _UNK_142e4e658;
          uVar55 = _UNK_142e4e65c;
        }
      }
      else {
        fStack_2b0 = fStack_100;
        fStack_2ac = fStack_f8;
        uStack_f2 = 0;
        pdb_140df4540(&uStack_238,&fStack_2b0,0);
        uStack_158._0_4_ = (float)*puStack_270;
        uStack_158._4_4_ = (float)puStack_270[1];
        fVar49 = (float)uStack_158 / uStack_158._4_4_;
        uStack_14c = 1.0;
        uVar41 = *(undefined4 *)(pbStack_278 + 4);
        uStack_f2 = 0;
        fStack_150 = fVar49;
        fVar37 = (float)pdb_140de83c0(puStack_270[1],uVar41);
        uStack_200._0_4_ = (float)uStack_230;
        uStack_208._0_4_ = (float)uStack_238;
        uStack_208._4_4_ = (float)((ulonglong)uStack_238 >> 0x20);
        uStack_200._4_4_ = 0.0;
        uStack_1f8._0_4_ = 1.0;
        uStack_1f8._4_4_ = 0.0;
        uStack_2a8 = _DAT_14305d860;
        pbStack_2a0 = (byte *)((ulonglong)pbStack_2a0 & 0xffffffffffffff00);
        uStack_f2 = 0;
        pdb_140bce5a0(&fStack_24c,fVar49 * fVar37,uVar41,&uStack_158,pbStack_280,&uStack_208,
                      &uStack_2a8);
        *(undefined4 *)(param_6 + 5) = 0;
        *(float *)((longlong)param_6 + 0x2c) =
             SQRT((fStack_244 - fStack_f8) * (fStack_244 - fStack_f8) +
                  (fStack_248 - fStack_fc) * (fStack_248 - fStack_fc) +
                  (fStack_24c - fStack_100) * (fStack_24c - fStack_100));
        *(undefined4 *)((longlong)param_6 + 0x3c) = *(undefined4 *)(lStack_210 + 0x18);
        *(undefined4 *)(param_6 + 7) = *(undefined4 *)(lStack_210 + 0x20);
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        *(undefined1 *)(*param_9 + 0x1e0) = 1;
        uVar41 = _DAT_142e4e650;
        uVar53 = _UNK_142e4e654;
        uVar54 = _UNK_142e4e658;
        uVar55 = _UNK_142e4e65c;
      }
    }
  }
  uStack_1f0._0_4_ = fStack_f8;
  uStack_1f8._0_4_ = fStack_100;
  uStack_1f8._4_4_ = fStack_fc;
  uStack_1f0._4_4_ = 1.0;
  uStack_1e8._0_4_ = 1.0;
  uStack_1e8._4_4_ = 1.0;
  uStack_208._0_4_ = (float)uVar41;
  uStack_208._4_4_ = (float)uVar53;
  uStack_200._0_4_ = (float)uVar54;
  uStack_200._4_4_ = (float)uVar55;
  pdb_140b3d590(&uStack_268,_DAT_142e37838,_DAT_142e36f50,_DAT_142e37838,&uStack_208);
  uStack_158 = &fStack_108;
  fStack_150 = 6.316635;
  uStack_14c = 1.4013e-45;
  uStack_f4 = 1;
  pdb_140f60760(&uStack_208,&UNK_143077b58,&uStack_158);
  uStack_2a8 = CONCAT44(uStack_208._4_4_,(float)uStack_208);
  pbStack_2a0 = (byte *)CONCAT44(uStack_200._4_4_,(float)uStack_200);
  uStack_298 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  uStack_158._7_1_ = (undefined1)uStack_268;
  fStack_150 = (float)((ulonglong)uStack_268 >> 8);
  uStack_14c._0_3_ = (undefined3)((ulonglong)uStack_268 >> 0x28);
  uStack_14c._3_1_ = (undefined1)uStack_260;
  fStack_148 = (float)((ulonglong)uStack_260 >> 8);
  uStack_144 = (undefined3)((ulonglong)uStack_260 >> 0x28);
  uStack_141 = (undefined1)uStack_258;
  uStack_140 = (undefined4)((ulonglong)uStack_258 >> 8);
  uStack_13c._0_3_ = (undefined3)((ulonglong)uStack_258 >> 0x28);
  uStack_17f = CONCAT44(uStack_158._4_4_,(float)uStack_158);
  uStack_177 = (undefined7)CONCAT44(uStack_14c,fStack_150);
  uStack_170 = (undefined4)uStack_260;
  uStack_16c = (undefined4)((ulonglong)uStack_260 >> 0x20);
  uStack_208._0_4_ = 0.0;
  uStack_208._4_4_ = 0.0;
  uStack_200._0_4_ = 1.12104e-44;
  uStack_200._4_4_ = 0.0;
  uStack_1f8._0_4_ = 0.0;
  uStack_1f8._4_4_ = 0.0;
  uStack_1e8._0_4_ = 2.8026e-45;
  uStack_1e8._4_4_ = 0.0;
  pfStack_1d8 = (float *)CONCAT44(pfStack_1d8._4_4_,iVar18);
  pcStack_1c0 = (code *)CONCAT44(pcStack_1c0._4_4_,iVar17);
  uStack_190 = 0;
  uStack_187 = CONCAT17(2,(undefined7)uStack_187);
  uStack_160 = 0x100;
  uStack_f4 = 0;
  puVar29 = (uint *)&uStack_2a8;
  uStack_1f0._0_4_ = (float)uVar30;
  iStack_1a8 = iVar17;
  lVar21 = pdb_1409008d0(uStack_218,puVar29,&uStack_208);
  fVar37 = _DAT_142e36f28;
  if ((*(char *)(lVar21 + 0x18) != '\0') && (*(uint **)(lVar21 + 0x38) == puVar29)) {
    uStack_104 = CONCAT31((int3)((uint)uStack_104 >> 8),
                          (byte)uStack_104 | *(int *)(lVar21 + 0x28) != 2);
    if (*(char *)(lVar21 + 0x18) == '\x01') {
      if ((*(byte *)(lVar21 + 0x19) & 1) != 0) {
LAB_140ca05bb:
        fVar37 = _DAT_142e37990;
      }
    }
    else if (*(byte *)(lVar21 + 0x19) != 2) goto LAB_140ca05bb;
  }
  uStack_158._0_4_ = 0.0;
  uStack_158._4_4_ = 0.0;
  fStack_150 = 2.8026e-45;
  uStack_14c = 0.0;
  fStack_148 = (float)((uint)fStack_148 & 0xffffff00);
  uStack_140 = 0x43077b67;
  uStack_13c = 1;
  uStack_138 = 10;
  uStack_135 = 0;
  uStack_131 = 0;
  uStack_130 = 1;
  puStack_128 = &UNK_143077b71;
  uStack_120 = 0x12;
  lVar31 = 0;
  puStack_270 = puVar29;
  fStack_24c = fVar37;
  do {
    bVar5 = *(byte *)(&fStack_148 + lVar31 * 6);
    if (bVar5 == 2) break;
    uVar33 = *(undefined8 *)(&uStack_140 + lVar31 * 6);
    uVar38 = *(undefined8 *)(&uStack_138 + lVar31 * 6);
    uStack_208 = &fStack_108;
    uStack_200._0_4_ = 6.316635;
    uStack_200._4_4_ = 1.4013e-45;
    uStack_1f8 = &fStack_100;
    uStack_1f0._0_4_ = 7.6012573;
    uStack_1f0._4_4_ = 1.4013e-45;
    uStack_1e8 = (float *)&uStack_238;
    uStack_1e0 = pdb_1402ed400;
    pfStack_1d8 = &fStack_24c;
    pcStack_1d0 = pdb_140f70fc0;
    puStack_1c8 = &uStack_2f8;
    pcStack_1c0 = pdb_140f33730;
    uStack_f4 = 0;
    uStack_238 = uVar33;
    uStack_230 = uVar38;
    pdb_140f60760(&uStack_2a8,&UNK_143077db8,&uStack_208);
    uVar26 = uStack_298;
    uStack_218 = uStack_2a8;
    pbStack_280 = pbStack_2a0;
    uStack_200._0_4_ = fStack_f8;
    uStack_208._0_4_ = fStack_100;
    uStack_208._4_4_ = fStack_fc;
    pdb_14007ee60();
    pbVar24 = pub_1406abab0(0x50,0x10);
    if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x50);
    }
    lVar31 = lVar31 + 1;
    pbVar24[0] = 1;
    pbVar24[1] = 0;
    pbVar24[2] = 0;
    pbVar24[3] = 0;
    pbVar24[4] = 0;
    pbVar24[5] = 0;
    pbVar24[6] = 0;
    pbVar24[7] = 0;
    pbVar24[8] = 1;
    pbVar24[9] = 0;
    pbVar24[10] = 0;
    pbVar24[0xb] = 0;
    pbVar24[0xc] = 0;
    pbVar24[0xd] = 0;
    pbVar24[0xe] = 0;
    pbVar24[0xf] = 0;
    *(undefined8 *)(pbVar24 + 0x10) = uVar33;
    *(undefined8 *)(pbVar24 + 0x18) = uVar38;
    *(undefined4 *)(pbVar24 + 0x20) = uVar41;
    *(undefined4 *)(pbVar24 + 0x24) = uVar53;
    *(undefined4 *)(pbVar24 + 0x28) = uVar54;
    *(undefined4 *)(pbVar24 + 0x2c) = uVar55;
    *(float *)(pbVar24 + 0x30) = fVar37;
    *(ulonglong *)(pbVar24 + 0x34) = CONCAT44(uStack_208._4_4_,(float)uStack_208);
    *(float *)(pbVar24 + 0x3c) = (float)uStack_200;
    pbVar24[0x40] = bVar5 & 1;
    uStack_208._0_4_ = SUB84(pbVar24,0);
    uStack_208._4_4_ = (float)((ulonglong)pbVar24 >> 0x20);
    uStack_200._0_4_ = 135.49146;
    uStack_200._4_4_ = 1.4013e-45;
    if ((longlong)uVar26 < 0) {
      uVar33 = 0;
      pbStack_278 = pbVar24;
LAB_140ca05a1:
      pdb_142dc7e2a(uVar33,uVar26);
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (uVar26 == 0) {
      pbVar23 = (byte *)0x1;
    }
    else {
      pbStack_278 = pbVar24;
      pdb_14007ee60();
      uVar33 = 1;
      pbVar23 = pub_1406abab0(uVar26,1);
      if (pbVar23 == (byte *)0x0) goto LAB_140ca05a1;
      pub_142e32760(pbVar23,pbStack_280,uVar26);
      pbVar24 = pbStack_278;
    }
    uStack_208._0_4_ = SUB84(puStack_270,0);
    uStack_208._4_4_ = (float)((ulonglong)puStack_270 >> 0x20);
    uStack_200._0_4_ = (float)((uint)(float)uStack_200 & 0xffffff00);
    uStack_1f8._0_4_ = (float)uVar26;
    uStack_1f8._4_4_ = (float)(uVar26 >> 0x20);
    uStack_1f0._0_4_ = SUB84(pbVar23,0);
    uStack_1f0._4_4_ = (float)((ulonglong)pbVar23 >> 0x20);
    pfStack_1d8 = (float *)&UNK_143077dd0;
    uStack_1e8._0_4_ = (float)uStack_1f8;
    uStack_1e8._4_4_ = uStack_1f8._4_4_;
    uStack_1e0 = (code *)pbVar24;
    pdb_141a88350(lStack_220,&uStack_208);
    if (uStack_218 != 0) {
      pub_1406abac0(pbStack_280,uStack_218,1);
    }
  } while (lVar31 != 2);
  fVar37 = fStack_114;
  uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
  if ((*(char *)(lVar21 + 0x18) == '\x02') &&
     (uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0),
     *(uint **)(lVar21 + 0x38) == puStack_270)) {
    bVar5 = *(byte *)(lVar21 + 0x19);
    if (bVar5 < 2) {
      lVar21 = *param_6;
      *param_6 = -0x8000000000000000;
      uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
      if (!SBORROW8(0,lVar21)) {
        lVar31 = param_6[1];
        lVar8 = param_6[2];
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        if (*(longlong *)(lStack_210 + 0x10) == 0) {
          lStack_220 = lVar21;
          uStack_218 = lVar31;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143077c30);
        }
        if ((*(byte *)(param_6 + 3) & 1) == 0) {
          lStack_220 = lVar21;
          uStack_218 = lVar31;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143077c48);
        }
        plVar9 = (longlong *)*param_8;
        fVar52 = *(float *)((longlong)param_6 + 0x1c);
        fVar51 = **(float **)(lStack_210 + 8);
        fVar50 = (*(float **)(lStack_210 + 8))[2];
        fVar49 = *(float *)((longlong)param_6 + 0x24);
        uStack_1e8._0_4_ = (float)plVar9[4];
        uStack_1e8._4_4_ = (float)((ulonglong)plVar9[4] >> 0x20);
        lVar19 = *plVar9;
        uStack_1f8._0_4_ = *(float *)(plVar9 + 2);
        uStack_1f8._4_4_ = *(float *)((longlong)plVar9 + 0x14);
        uStack_1f0._0_4_ = (float)plVar9[3];
        uStack_1f0._4_4_ = *(float *)((longlong)plVar9 + 0x1c);
        uStack_208._0_4_ = (float)lVar19;
        uStack_208._4_4_ = (float)((ulonglong)lVar19 >> 0x20);
        uStack_200._0_4_ = (float)plVar9[1];
        uStack_200._4_4_ = (float)((ulonglong)plVar9[1] >> 0x20);
        *plVar9 = lVar21;
        plVar9[1] = lVar31;
        plVar9[2] = lVar8;
        plVar9[3] = CONCAT44(fVar50 - fVar49,fVar51 - fVar52);
        *(float *)(plVar9 + 4) = fStack_114;
        pdb_140c11450(&uStack_208);
        if (lVar19 != -0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143077c60,0x140,&UNK_143077da0);
        }
      }
    }
    else if (bVar5 == 4) {
      if (SBORROW8(0,*param_6)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143077bb8);
      }
      if (param_6[2] == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143077bd0);
      }
      puVar28 = (undefined8 *)param_6[1];
      uStack_260 = CONCAT44(uStack_260._4_4_,*(undefined4 *)(puVar28 + 1));
      uStack_268 = *puVar28;
      uStack_238 = CONCAT44(fVar51 - (float)((ulonglong)param_6[5] >> 0x20),
                            fVar50 - (float)param_6[5]);
      uStack_200 = (longlong)puVar28 + param_6[2] * 0xc;
      uStack_208._0_4_ = SUB84(puVar28,0);
      uStack_208._4_4_ = (float)((ulonglong)puVar28 >> 0x20);
      uStack_1f8 = (float *)&uStack_238;
      uStack_1f0 = &uStack_268;
      pdb_1415f9a20(&uStack_158,&uStack_208);
      uStack_f3 = 1;
      pdb_140defa80(&uStack_2a8,fVar50,fVar51,_DAT_142e37830);
      uStack_208._4_4_ = (float)uStack_2a8;
      uStack_200._0_4_ = (float)(uStack_2a8 >> 0x20);
      uStack_200._4_4_ = SUB84(pbStack_2a0,0);
      uStack_1f8._0_4_ = (float)((ulonglong)pbStack_2a0 >> 0x20);
      uStack_208._0_4_ = 0.0;
      uStack_f3 = 1;
      cVar20 = pdb_140b404c0(uStack_2e8,&uStack_208);
      if (cVar20 == '\0') {
        uStack_f3 = 1;
        pdb_140314c70(&uStack_318,&UNK_143077be8);
        uStack_f3 = 1;
        pdb_140314c70(&uStack_338,&UNK_143077c00);
        if (CONCAT44(uStack_158._4_4_,(float)uStack_158) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_14c,fStack_150),
                        CONCAT44(uStack_158._4_4_,(float)uStack_158) * 0xc,4);
        }
      }
      else {
        uStack_1f8._0_4_ = fStack_148;
        uStack_1f8._4_4_ = _uStack_144;
        uStack_208._0_4_ = (float)uStack_158;
        uStack_208._4_4_ = uStack_158._4_4_;
        uStack_200._0_4_ = fStack_150;
        uStack_200._4_4_ = uStack_14c;
        uStack_1f0._0_4_ = fStack_100;
        uStack_1f0._4_4_ = fStack_fc;
        uStack_1e8._0_4_ = fStack_f8;
        uStack_1e8._4_4_ = fVar37;
        uStack_f3 = 0;
        pdb_141b74c10(param_10,&uStack_208,&UNK_143077c18);
        uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
      }
    }
    else {
      uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
      if (bVar5 == 3) {
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        *(undefined1 *)(*param_9 + 0x1e0) = 1;
        pdb_1401751d0(&uStack_208,lStack_210);
        lVar21 = *param_6;
        if ((!SBORROW8(0,lVar21)) && (lVar21 != 0)) {
          pub_1406abac0((byte *)param_6[1],lVar21 * 0xc,4);
        }
        param_6[2] = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        *param_6 = CONCAT44(uStack_208._4_4_,(float)uStack_208);
        param_6[1] = CONCAT44(uStack_200._4_4_,(float)uStack_200);
        if (*(longlong *)(lStack_210 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143077b88);
        }
        uStack_200._0_4_ = *(float *)(*(undefined8 **)(lStack_210 + 8) + 1);
        uVar33 = **(undefined8 **)(lStack_210 + 8);
        uStack_208._0_4_ = (float)uVar33;
        uStack_208._4_4_ = (float)((ulonglong)uVar33 >> 0x20);
        *(undefined4 *)(param_6 + 3) = 1;
        *(undefined8 *)((longlong)param_6 + 0x1c) = uVar33;
        *(float *)((longlong)param_6 + 0x24) = (float)uStack_200;
        if (*(longlong *)(lStack_210 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143077ba0);
        }
        fVar49 = (*(float **)(lStack_210 + 8))[2];
        *(float *)(param_6 + 5) = fVar50 - **(float **)(lStack_210 + 8);
        *(float *)((longlong)param_6 + 0x2c) = fVar51 - fVar49;
        uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
      }
    }
  }
  piVar32 = piStack_2e0;
  uVar33 = uStack_2d0;
  pfVar25 = pfStack_2c8;
  pcVar34 = pcStack_2d8;
  if ((char)uStack_104 != '\0') {
    return;
  }
LAB_140ca0a1e:
  pdb_1409f9030(&uStack_208,uVar33,pfVar25,0);
  if ((char)uStack_208 == '\x11') {
    fVar51 = pfVar25[1];
    fVar50 = pfVar25[2];
    fVar49 = _DAT_142e36f3c;
  }
  else {
    fVar51 = pfVar25[1];
    fVar50 = pfVar25[2];
    fVar49 = (float)uStack_1f0 - *pfVar25;
    fVar49 = SQRT(((float)uStack_1e8 - fVar50) * ((float)uStack_1e8 - fVar50) +
                  (uStack_1f0._4_4_ - fVar51) * (uStack_1f0._4_4_ - fVar51) + fVar49 * fVar49);
  }
  pfVar27 = (float *)&UNK_143044340;
  if (*pcVar34 != '\0') {
    pfVar27 = (float *)(pcVar34 + 4);
  }
  fVar52 = *pfVar27 - *pfVar25;
  if (((SQRT((pfVar27[2] - fVar50) * (pfVar27[2] - fVar50) +
             (pfVar27[1] - fVar51) * (pfVar27[1] - fVar51) + fVar52 * fVar52) < fVar49) &&
      (*piVar32 == 1)) && (fVar37 != (float)*(undefined8 *)(piVar32 + 2))) {
    pdb_141b74dc0(&uStack_358,*(undefined8 *)(piVar32 + 2),&UNK_143077e00);
  }
  return;
}

