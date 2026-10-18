// VA 0x140b48980, PDB extent 7546 bytes
// country_core::systems::ui_move_freehand_walls::ui_move_freehand_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_freehand_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_freehand_walls::ui_move_freehand_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_freehand_walls.rs
   Extent: 7546 */

void pdb_140b48980(longlong *param_1,byte *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong param_10,undefined8 param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16,longlong *param_17)

{
  undefined8 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  char cVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined8 uVar17;
  ushort uVar18;
  longlong lVar19;
  float *pfVar20;
  longlong **pplVar21;
  undefined *puVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  char cVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  byte bVar32;
  float fVar33;
  undefined4 uVar34;
  int iVar35;
  uint extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  longlong *plVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined4 uVar51;
  longlong lStack_408;
  longlong lStack_400;
  longlong lStack_3f8;
  longlong lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  longlong lStack_358;
  longlong lStack_350;
  undefined4 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong *plStack_318;
  code *pcStack_310;
  longlong *plStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  longlong *plStack_2e8;
  longlong lStack_2e0;
  longlong *plStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong *plStack_2b8;
  longlong lStack_2b0;
  char *pcStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  undefined4 uStack_28c;
  longlong *plStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  longlong lStack_260;
  longlong *plStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong *plStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_188;
  longlong *plStack_180;
  undefined4 *puStack_178;
  longlong *plStack_170;
  undefined8 *puStack_168;
  longlong alStack_160 [2];
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  longlong lStack_c0;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  pcStack_2a0 = (char *)*param_6;
  uStack_368 = param_6[8];
  uStack_388 = param_6[4];
  uStack_380 = param_6[5];
  uStack_378 = param_6[6];
  uStack_370 = param_6[7];
  plStack_d8 = (longlong *)*param_7;
  uStack_f8 = param_7[4];
  pbStack_d0 = (byte *)param_7[6];
  uStack_3a8 = *(undefined8 *)(param_10 + 0x20);
  uStack_3a0 = *(undefined8 *)(param_10 + 0x28);
  uStack_398 = *(undefined8 *)(param_10 + 0x30);
  uStack_390 = *(undefined8 *)(param_10 + 0x38);
  uVar17 = *param_14;
  uVar1 = param_14[4];
  uVar14 = param_14[8];
  uStack_3c8 = param_16[4];
  uStack_3c0 = param_16[5];
  uStack_3b8 = param_16[6];
  uStack_3b0 = param_16[7];
  uStack_3e8 = param_16[8];
  uStack_3e0 = param_16[9];
  uStack_3d8 = param_16[10];
  uStack_3d0 = param_16[0xb];
  uStack_e8 = *param_16;
  lStack_358 = param_17[4];
  lStack_350 = param_17[5];
  puStack_348 = (undefined4 *)param_17[6];
  uStack_340 = param_17[7];
  lStack_408 = param_17[8];
  lStack_400 = param_17[9];
  lStack_3f8 = param_17[10];
  lStack_3f0 = param_17[0xb];
  pcVar2 = (char *)*param_3;
  if ((*pcVar2 != '\0') || (*(int *)(pcVar2 + 8) != 1)) {
    lVar16 = *param_1;
    *param_1 = 0;
    if (lVar16 != 0) {
      *(int *)(param_1 + 0x12) = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
    }
LAB_140b48be2:
    return;
  }
  pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,*(undefined4 *)((longlong)param_7 + 0x3c));
  lVar16 = *(longlong *)(pcVar2 + 0x10);
  param_4 = (longlong *)*param_4;
  uStack_298._0_4_ = (float)lVar16;
  uStack_298._4_4_ = (float)((ulonglong)lVar16 >> 0x20);
  plStack_e0 = param_1;
  pbStack_c8 = param_2;
  lStack_c0 = lVar16;
  if (param_4[3] != 0) {
    uVar12 = pdb_1400af0a0(param_4 + 4,&uStack_298);
    plVar31 = plStack_e0;
    lVar26 = *param_4;
    bVar10 = (byte)(uVar12 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar38 = pshuflw(auVar38,auVar38,0);
    lVar28 = 0;
    do {
      uVar12 = uVar12 & param_4[1];
      auVar44 = *(undefined1 (*) [16])(lVar26 + uVar12);
      auVar43[0] = -(auVar44[0] == auVar38[0]);
      auVar43[1] = -(auVar44[1] == auVar38[1]);
      auVar43[2] = -(auVar44[2] == auVar38[2]);
      auVar43[3] = -(auVar44[3] == auVar38[3]);
      auVar43[4] = -(auVar44[4] == auVar38[4]);
      auVar43[5] = -(auVar44[5] == auVar38[5]);
      auVar43[6] = -(auVar44[6] == auVar38[6]);
      auVar43[7] = -(auVar44[7] == auVar38[7]);
      auVar43[8] = -(auVar44[8] == auVar38[0]);
      auVar43[9] = -(auVar44[9] == auVar38[1]);
      auVar43[10] = -(auVar44[10] == auVar38[2]);
      auVar43[0xb] = -(auVar44[0xb] == auVar38[3]);
      auVar43[0xc] = -(auVar44[0xc] == auVar38[4]);
      auVar43[0xd] = -(auVar44[0xd] == auVar38[5]);
      auVar43[0xe] = -(auVar44[0xe] == auVar38[6]);
      auVar43[0xf] = -(auVar44[0xf] == auVar38[7]);
      uVar18 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar29 = (uVar7 + uVar12 & param_4[1]) * -0x2b0;
        if (lVar16 == *(longlong *)(lVar26 + -0x2b0 + lVar29)) {
          lVar26 = lVar26 + lVar29;
          if ((*(ulonglong *)(lVar26 + -0x298) < 2) || (*(float *)(lVar26 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143059038);
          }
          if (*(uint *)(lVar26 + -0x50) < 2) {
            return;
          }
          lStack_330 = lVar26 + -0x2a8;
          if (((int)*plStack_e0 != 1) || (plStack_e0[1] != lVar16)) {
            if (plStack_e0[8] != 0) {
              pub_1406abac0((byte *)plStack_e0[9],plStack_e0[8] * 0xc,4);
            }
            lVar28 = plVar31[0xb];
            if (!SBORROW8(0,lVar28)) {
              if (lVar28 != 0) {
                pub_1406abac0((byte *)plVar31[0xc],lVar28 << 3,4);
              }
              if (plVar31[0xe] != 0) {
                pub_1406abac0((byte *)plVar31[0xf],plVar31[0xe] << 2,4);
              }
            }
            *plVar31 = 1;
            plVar31[1] = lVar16;
            lVar16 = _UNK_1430593d8;
            plVar31[2] = _DAT_1430593d0;
            plVar31[3] = lVar16;
            lVar16 = _UNK_1430593e8;
            plVar31[4] = _DAT_1430593e0;
            plVar31[5] = lVar16;
            plVar31[6] = 0;
            plVar31[8] = 0;
            plVar31[9] = 4;
            plVar31[10] = 0;
            plVar31[0xb] = -0x8000000000000000;
            *(int *)(plVar31 + 0x12) = 0;
            plVar31[0x13] = 0;
            plVar31[0x14] = 0;
            plVar31[0x15] = 0;
            pbStack_c8[0] = 0;
            pbStack_c8[1] = 0;
            pbStack_c8[2] = 0;
            pbStack_c8[3] = 0;
            pbStack_c8[8] = 0;
            pbStack_c8[9] = 0;
            pbStack_c8[10] = 0;
            pbStack_c8[0xb] = 0;
            pbStack_c8[0x10] = 0;
            pbStack_c8[0x11] = 0;
            pbStack_c8[0x12] = 0;
            pbStack_c8[0x13] = 0;
            pbStack_c8[0x18] = 0;
            pbStack_c8[0x19] = 0;
            pbStack_c8[0x1a] = 0;
            pbStack_c8[0x1b] = 0;
            pbStack_c8[0x20] = 0;
            pbStack_c8[0x21] = 0;
            pbStack_c8[0x22] = 0;
            pbStack_c8[0x23] = 0;
            pbStack_c8[0x24] = 0;
            pbStack_c8[0x25] = 0;
            pbStack_c8[0x26] = 0;
            pbStack_c8[0x27] = 0;
          }
          pdb_140b4a7f0(&uStack_298,lVar26 + -0x2a8);
          uVar51 = uStack_28c;
          fVar37 = fStack_290;
          fVar36 = uStack_298._4_4_;
          if ((char)uStack_298 == '\0') {
            pdb_142dc8110(&UNK_143059068,0x2a,&UNK_143059098);
            goto code_r0x000140b4a08f;
          }
          lVar16 = CONCAT44(fStack_290,uStack_298._4_4_);
          uVar9 = plStack_288._0_4_;
          fVar48 = (float)plVar31[0x13];
          fVar49 = (float)((ulonglong)plVar31[0x13] >> 0x20);
          pdb_140e08fa0(&uStack_298,uVar17);
          fVar47 = _DAT_142e36f28;
          fVar39 = _DAT_142e36f28 /
                   SQRT(fStack_290 * fStack_290 + (float)uStack_298 * (float)uStack_298);
          if ((int)fVar39 - 1U < 0x7fffff ||
              (int)ABS(fVar39) - 0x800000U < 0x7f000000 && -1 < (int)fVar39) {
            fVar33 = (float)((uint)(float)uStack_298 ^ _DAT_142e37820);
            fVar48 = fVar39;
            fVar49 = fVar39;
            fVar39 = (float)((uint)fStack_290 ^ _UNK_142e37824);
LAB_140b48ea6:
            fVar48 = fVar48 * fVar33;
            fVar49 = fVar49 * fVar39;
          }
          else {
            fVar33 = _DAT_142e36f28 / SQRT(fVar49 * fVar49 + fVar48 * fVar48);
            fVar39 = fVar33;
            if ((int)fVar33 - 1U < 0x7fffff ||
                (int)ABS(fVar33) - 0x800000U < 0x7f000000 && -1 < (int)fVar33) goto LAB_140b48ea6;
            fVar48 = (float)_DAT_1430151a0;
            fVar49 = (float)((ulonglong)_DAT_1430151a0 >> 0x20);
          }
          plVar31[0x13] = CONCAT44(fVar49,fVar48);
          uVar34 = pdb_1419c1ac0(*param_13);
          lVar28 = plVar31[0x13];
          fVar48 = (float)lVar28;
          fVar49 = (float)((ulonglong)lVar28 >> 0x20);
          lStack_328 = *(longlong *)(lVar26 + -0x218);
          uVar12 = *(ulonglong *)(lVar26 + -0x210);
          lStack_320 = *(longlong *)(lVar26 + -0x1c8);
          uVar3 = *(ulonglong *)(lVar26 + -0x1c0);
          pdb_140e08f50(alStack_160,uVar17);
          fVar47 = fVar47 / SQRT(fVar49 * fVar49 + fVar48 * fVar48);
          iVar35 = 0;
          lStack_108 = lVar16;
          uStack_fc = uVar34;
          if ((int)fVar47 - 1U < 0x7fffff ||
              (int)ABS(fVar47) - 0x800000U < 0x7f000000 && -1 < (int)fVar47) {
            uStack_1b0 = uVar12;
            if (uVar3 < uVar12) {
              uStack_1b0 = uVar3;
            }
            lStack_1c0 = lStack_320 + uVar3 * 4;
            lStack_1d0 = lStack_328 + uVar12 * 0xc;
            uStack_118 = CONCAT44(fVar49 * fVar47,fVar48 * fVar47);
            uStack_298._0_4_ = 0.0;
            uStack_298._4_4_ = 0.0;
            plStack_238 = (longlong *)0x0;
            lStack_1d8 = lStack_328;
            lStack_1c8 = lStack_320;
            uStack_1b8 = 0;
            uStack_1a8 = 0;
            uStack_188 = 0x3f8ccccd;
            plStack_180 = alStack_160;
            puStack_178 = &uStack_fc;
            plStack_170 = &lStack_108;
            puStack_168 = &uStack_118;
            pdb_1415eb670(&plStack_318,&uStack_298);
            iVar35 = pdb_140c4b290();
          }
          lVar26 = plVar31[0x13];
          if ((int)plVar31[0x12] != 1) {
            *(int *)(plVar31 + 0x12) = 1;
            *(int *)((longlong)plVar31 + 0x94) = iVar35;
          }
          fVar47 = (float)pdb_140de93b0();
          *(float *)((longlong)plVar31 + 0x94) = fVar47;
          fVar48 = fVar47 * (float)lVar26 + fVar36;
          fVar47 = fVar47 * (float)((ulonglong)lVar26 >> 0x20) + fVar37;
          uStack_338 = CONCAT44(fVar47,fVar48);
          pdb_140df4540(&uStack_124,&uStack_338);
          lStack_108 = CONCAT44(fVar47,fVar48);
          uStack_100 = 0x40200000;
          plStack_318 = &lStack_c0;
          pcStack_310 = pdb_140b4b660;
          pdb_140f60760(&uStack_298,&UNK_1430590b0,&plStack_318);
          plStack_318 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298);
          pcStack_310 = (code *)CONCAT44(uStack_28c,fStack_290);
          plStack_308 = plStack_288;
          alStack_160[0] = lStack_330;
          uStack_268 = (longlong *)
                       CONCAT44(*(float *)((longlong)plVar31 + 0x94) + _DAT_142e3c608,uVar34);
          uStack_298 = &lStack_108;
          fStack_290 = 1.4013e-45;
          uStack_28c = 0;
          plStack_288 = alStack_160;
          lStack_280 = 1;
          auVar38._4_12_ = DAT_142f89640._4_12_;
          auVar38._0_4_ = uVar51;
          lStack_260 = auVar38._0_8_;
          plStack_258 = (longlong *)CONCAT71(plStack_258._1_7_,1);
          uVar17 = *param_8;
          uVar4 = *param_15;
          uVar50 = uVar4;
          lStack_278 = lVar16;
          lStack_270 = lVar26;
          bVar10 = pdb_140c4a450(pbStack_c8,&plStack_318,&uStack_298,uVar1,uVar17,uVar4,uVar14);
          uVar51 = (undefined4)((ulonglong)uVar50 >> 0x20);
          uVar27 = 2;
          if (bVar10 < 3) {
            plStack_288 = (longlong *)param_12[2];
            lStack_280 = param_12[3];
            uStack_298._0_4_ = (float)*param_12;
            uStack_298._4_4_ = (float)((ulonglong)*param_12 >> 0x20);
            fStack_290 = (float)param_12[1];
            uStack_28c = (undefined4)((ulonglong)param_12[1] >> 0x20);
            uStack_110 = uStack_11c;
            uStack_118 = uStack_124;
            pdb_140df4520(alStack_160,plVar31 + 0x13);
            pplVar21 = &plStack_318;
            pdb_140de9ab0(pplVar21,alStack_160);
            lVar26 = pdb_140b50920(&uStack_118,pplVar21,&uStack_298,uVar17,lStack_c0,
                                   CONCAT44(uVar51,uVar9),uVar14 & 0xffffffffffffff00,uVar34,uVar4);
            uStack_298 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298);
            if (((lVar26 != 0) &&
                (uStack_298 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298),
                *(char *)(lVar26 + 0x18) == '\x02')) &&
               (uStack_298 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298),
               *(longlong ***)(lVar26 + 0x38) == pplVar21)) {
              uVar27 = (uint)*(byte *)(lVar26 + 0x19);
              uStack_298 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298);
            }
          }
          lVar26 = lStack_c0;
          pbVar23 = pbStack_d0;
          plVar46 = plStack_d8;
          uVar14 = uStack_f8;
          uVar7 = extraout_XMM0_Da;
          if (bVar10 == 2) {
            bVar10 = 5;
            uVar7 = uVar27;
          }
          bVar32 = bVar10;
          if (bVar10 == 5) {
            bVar32 = (byte)uVar7;
          }
          cVar11 = '\x03';
          if (1 < bVar32) {
            cVar11 = bVar32 - 2;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(cVar11) {
          case '\0':
            goto LAB_140b48be2;
          case '\x02':
            if (SBORROW8(0,plVar31[0xb])) {
              return;
            }
            if (bVar10 == 5) {
              pfVar20 = (float *)&UNK_143044340;
              if (*pcStack_2a0 != '\0') {
                pfVar20 = (float *)(pcStack_2a0 + 4);
              }
              fVar47 = (float)plVar31[0x14];
              fVar48 = (float)((ulonglong)plVar31[0x14] >> 0x20);
              plVar46 = (longlong *)
                        CONCAT44((pfVar20[2] - (float)((ulonglong)plVar31[0x15] >> 0x20)) - fVar48,
                                 (*pfVar20 - (float)plVar31[0x15]) - fVar47);
              lVar16 = _DAT_142f94730;
              lVar26 = _UNK_142f94738;
            }
            else {
              fVar47 = (float)plVar31[0x14];
              fVar48 = (float)((ulonglong)plVar31[0x14] >> 0x20);
              fVar36 = (float)pub_142e32b30(uVar7);
              fVar37 = (float)pub_142e329e0(uVar7);
              lVar16 = CONCAT44(fVar36,fVar37);
              lVar26 = CONCAT44(fVar37,(uint)fVar36 ^ _DAT_142e37820);
              plVar46 = (longlong *)
                        CONCAT44(fVar48 - (fVar48 * fVar37 + fVar47 * fVar36),
                                 fVar47 - (fVar48 * (float)((uint)fVar36 ^ _DAT_142e37820) +
                                          fVar47 * fVar37));
            }
            uVar17 = uStack_e8;
            uStack_298._0_4_ = (float)lVar16;
            uStack_298._4_4_ = (float)((ulonglong)lVar16 >> 0x20);
            fStack_290 = (float)lVar26;
            uStack_28c = (undefined4)((ulonglong)lVar26 >> 0x20);
            lStack_278 = CONCAT44(fVar48,fVar47);
            plStack_288 = plVar46;
            pdb_140c49bc0(alStack_160,&uStack_298,plVar31 + 0xb);
            cStack_b1 = 1;
            cVar11 = pdb_140b407b0(uVar17,alStack_160);
            plVar31 = plStack_e0;
            if (cVar11 == '\0') {
              cStack_b1 = 1;
              pdb_140314c70(&uStack_3c8,&UNK_143059108);
              cStack_b1 = 1;
              cVar25 = '\x01';
              pdb_140314c70(&uStack_3e8,&UNK_143059120);
            }
            else {
              lVar28 = *param_5;
              cStack_b1 = 1;
              lVar29 = pdb_140b0e4b0(lVar28,lStack_c0);
              if (lVar29 == 0) {
                cStack_b1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143059138);
              }
              cStack_b1 = 1;
              pdb_140a4f320(&plStack_318,lVar29);
              uStack_268 = plStack_130;
              lStack_278 = lStack_140;
              lStack_270 = lStack_138;
              plStack_288 = plStack_150;
              lStack_280 = lStack_148;
              uStack_298._0_4_ = (float)alStack_160[0];
              uStack_298._4_4_ = (float)((ulonglong)alStack_160[0] >> 0x20);
              fStack_290 = (float)alStack_160[1];
              uStack_28c = (undefined4)((ulonglong)alStack_160[1] >> 0x20);
              pdb_14049c2a0(&plStack_318);
              plStack_2e8 = uStack_268;
              plStack_318 = (longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298);
              pcStack_310 = (code *)CONCAT44(uStack_28c,fStack_290);
              lStack_2f8 = lStack_278;
              lStack_2f0 = lStack_270;
              plStack_308 = plStack_288;
              lStack_300 = lStack_280;
              *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
              plStack_238 = plStack_2b8;
              lStack_230 = lStack_2b0;
              lStack_248 = lStack_2c8;
              lStack_240 = lStack_2c0;
              plStack_258 = plStack_2d8;
              lStack_250 = lStack_2d0;
              lStack_260 = lStack_2e0;
              uStack_b4 = 0;
              pdb_14092f410(lVar28,lStack_c0,&uStack_298);
              plVar31[2] = lVar16;
              plVar31[3] = lVar26;
              plVar31[4] = (longlong)plVar46;
              plVar31[6] = CONCAT44(fVar48,fVar47);
              cVar25 = '\0';
            }
            cStack_b1 = cVar25;
            pdb_140b4a700(&uStack_298,plVar31,lStack_c0);
            cStack_b1 = cVar25;
            pdb_141b74c10(param_17,&uStack_298,&UNK_143059150);
            cStack_b1 = cVar25;
            pdb_141b74e20(&lStack_358,lStack_c0,0,&UNK_143059168);
            fStack_290 = (float)lStack_c0;
            uStack_28c = (undefined4)((ulonglong)lStack_c0 >> 0x20);
            uStack_298._0_4_ = (float)CONCAT31(uStack_298._1_3_,2);
            cStack_b1 = cVar25;
            pdb_141b75220(&lStack_408,&uStack_298,&UNK_143059180);
            if (cVar25 != '\0') {
              pdb_14049c2a0(alStack_160);
            }
            if (cVar11 == '\0') {
              return;
            }
            pdb_1414d1b30(&uStack_298,&uStack_388);
            if ((lStack_280 == lStack_278 || lStack_280 == 0) &&
               ((longlong *)CONCAT44(uStack_28c,fStack_290) == (longlong *)0x0 ||
                (longlong *)CONCAT44(uStack_28c,fStack_290) == plStack_288)) {
              return;
            }
            *(longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298) =
                 *(longlong *)CONCAT44(uStack_298._4_4_,(float)uStack_298) + lStack_270;
            uStack_298._0_4_ = (float)lStack_c0;
            uStack_298._4_4_ = (float)((ulonglong)lStack_c0 >> 0x20);
            plStack_288 = (longlong *)CONCAT26(plStack_288._6_2_,0x100000000);
            fStack_290 = (float)uStack_124;
            uStack_28c = (undefined4)((ulonglong)uStack_124 >> 0x20);
            plStack_288 = (longlong *)CONCAT44(plStack_288._4_4_,uStack_11c);
            pdb_141b75330(param_10,&uStack_298,&UNK_143059198);
            return;
          case '\x03':
            pbVar23 = (byte *)plVar31[10];
            plVar46 = (longlong *)((longlong)pbVar23 * 0xc);
            plStack_d8 = plVar46;
            pbStack_d0 = pbVar23;
            if (pbVar23 == (byte *)0x0) {
              fVar36 = *(float *)(plVar31 + 2);
              fVar37 = *(float *)((longlong)plVar31 + 0x14);
              fVar47 = *(float *)(plVar31 + 3);
              fVar48 = *(float *)((longlong)plVar31 + 0x1c);
              pbVar15 = (byte *)0x4;
            }
            else {
              lVar16 = plVar31[9];
              pdb_14007ee60();
              lVar28 = 4;
              pbVar15 = pub_1406abab0((ulonglong)plVar46,4);
              if (pbVar15 == (byte *)0x0) {
                pdb_142dc7e2a(4,plVar46);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar36 = *(float *)(plVar31 + 2);
              fVar37 = *(float *)((longlong)plVar31 + 0x14);
              fVar47 = *(float *)(plVar31 + 3);
              fVar48 = *(float *)((longlong)plVar31 + 0x1c);
              do {
                uVar17 = *(undefined8 *)(lVar16 + lVar28);
                fVar39 = (float)((ulonglong)uVar17 >> 0x20);
                fVar49 = (float)uVar17;
                *(undefined4 *)(pbVar15 + lVar28 + -4) = *(undefined4 *)(lVar16 + -4 + lVar28);
                *(ulonglong *)(pbVar15 + lVar28) =
                     CONCAT44(fVar39 * fVar48 + fVar49 * fVar37,fVar39 * fVar47 + fVar49 * fVar36);
                lVar28 = lVar28 + 0xc;
                pbVar23 = pbVar23 + -1;
              } while (pbVar23 != (byte *)0x0);
            }
            lVar16 = plVar31[4];
            fVar49 = (float)plVar31[0x14];
            fVar39 = (float)((ulonglong)plVar31[0x14] >> 0x20);
            *(undefined4 *)param_17[2] = *(undefined4 *)((longlong)param_17 + 0x1c);
            lVar28 = *param_17;
            lVar29 = *(longlong *)(lVar28 + 0x30);
            uVar17 = *(undefined8 *)(lVar28 + 0x40);
            pbStack_c8 = pbVar15;
            if (lVar29 == *(longlong *)(lVar28 + 0x20)) {
              pdb_142d7e7c0(lVar28 + 0x20);
            }
            lVar30 = *(longlong *)(lVar28 + 0x28);
            lVar19 = lVar29 * 0x30;
            *(byte **)(lVar30 + lVar19) = pbStack_d0;
            *(byte **)(lVar30 + 8 + lVar19) = pbStack_c8;
            *(byte **)(lVar30 + 0x10 + lVar19) = pbStack_d0;
            *(longlong *)(lVar30 + 0x18 + lVar19) = lVar26;
            *(ulonglong *)(lVar30 + 0x20 + lVar19) =
                 CONCAT44((float)((ulonglong)lVar16 >> 0x20) + fVar48 * fVar39 + fVar37 * fVar49,
                          (float)lVar16 + fVar47 * fVar39 + fVar36 * fVar49);
            *(undefined8 *)(lVar30 + 0x28 + lVar19) = uVar17;
            *(longlong *)(lVar28 + 0x30) = lVar29 + 1;
            *(longlong *)(lVar28 + 0x40) = *(longlong *)(lVar28 + 0x40) + 1;
            plVar46 = (longlong *)plVar31[0xb];
            plVar31[0xb] = -0x8000000000000000;
            if (!SBORROW8(0,(longlong)plVar46)) {
              pcStack_310 = (code *)plVar31[0xc];
              plStack_308 = (longlong *)plVar31[0xd];
              lStack_300 = plVar31[0xe];
              lStack_2f8 = plVar31[0xf];
              lStack_2f0 = plVar31[0x10];
              plStack_2e8 = (longlong *)plVar31[0x11];
              uStack_b2 = 1;
              plStack_318 = plVar46;
              lVar16 = pdb_140b0e4b0(*param_5,lStack_c0);
              if (lVar16 == 0) {
code_r0x000140b4a08f:
                uStack_b2 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1430591b0);
              }
              cVar11 = pdb_140b4b470(&plStack_318,lVar16);
              if (cVar11 == '\0') {
                pdb_14049c2a0(&plStack_318);
              }
              else {
                alStack_160[0] = 0;
                alStack_160[1] = 8;
                plStack_150 = (longlong *)0x0;
                plStack_238 = plStack_2e8;
                lStack_248 = lStack_2f8;
                lStack_240 = lStack_2f0;
                plStack_258 = plStack_308;
                lStack_250 = lStack_300;
                uStack_268 = plStack_318;
                lStack_260 = (longlong)pcStack_310;
                plStack_288 = (longlong *)plVar31[2];
                lStack_280 = plVar31[3];
                lStack_278 = plVar31[4];
                lStack_270 = plVar31[5];
                lStack_230 = lStack_c0;
                lStack_228 = plVar31[6];
                uStack_298._0_4_ = 2.24208e-44;
                uStack_298._4_4_ = -0.0;
                uStack_b3 = 1;
                pdb_140a1aa80(alStack_160,&uStack_298);
                *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
                lVar16 = *param_9;
                plStack_288 = plStack_150;
                uStack_298._0_4_ = (float)alStack_160[0];
                uStack_298._4_4_ = (float)((ulonglong)alStack_160[0] >> 0x20);
                fStack_290 = (float)alStack_160[1];
                uStack_28c = (undefined4)((ulonglong)alStack_160[1] >> 0x20);
                uStack_b3 = 0;
                uVar17 = pdb_140a1ac80(&uStack_298);
                fStack_290 = (float)uVar17;
                uStack_28c = (undefined4)((ulonglong)uVar17 >> 0x20);
                uStack_298._0_4_ = 9.80909e-45;
                uStack_298._4_4_ = 0.0;
                uStack_b3 = 0;
                plStack_288 = param_9;
                pdb_140ae5180(lVar16,&uStack_298,&UNK_1430591c8);
                uStack_b3 = 0;
                pdb_140314c70(&uStack_3a8,&UNK_1430591e0);
              }
            }
            lVar28 = lStack_c0;
            lVar26 = lStack_358;
            *puStack_348 = uStack_340._4_4_;
            lVar16 = *(longlong *)(lStack_358 + 0x30);
            uVar17 = *(undefined8 *)(lStack_358 + 0x40);
            if (lVar16 == *(longlong *)(lStack_358 + 0x20)) {
              pdb_142d7e830(lStack_358 + 0x20);
            }
            lVar29 = *(longlong *)(lVar26 + 0x28);
            *(undefined8 *)(lVar29 + lVar16 * 0x18) = uVar17;
            *(longlong *)(lVar29 + 8 + lVar16 * 0x18) = lVar28;
            *(undefined1 *)(lVar29 + 0x10 + lVar16 * 0x18) = 1;
            *(longlong *)(lVar26 + 0x30) = lVar16 + 1;
            *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
            return;
          }
          uVar51 = pbStack_f0._0_4_;
          *(undefined4 *)pbStack_d0 = pbStack_f0._0_4_;
          uStack_298._0_4_ = 0.0;
          uStack_298._4_4_ = 0.0;
          fStack_290 = (float)lStack_c0;
          uStack_28c = (undefined4)((ulonglong)lStack_c0 >> 0x20);
          plStack_288 = (longlong *)0x1;
          puVar22 = &UNK_1430590da;
          if (bVar10 == 5) {
            puVar22 = &UNK_1430590c8;
          }
          pdb_140aa3450(uStack_f8,&uStack_298,2,plStack_d8,param_11,puVar22,
                        (bVar10 != 5) * '\x02' + '\x12');
          *(undefined4 *)pbVar23 = uVar51;
          pdb_140c419b0(uVar14,lStack_c0,plVar46);
          *(undefined4 *)pbVar23 = uVar51;
          plVar13 = plVar46 + 0x12;
          if (plVar46[0x12] == 0) {
            plVar13 = (longlong *)0x0;
          }
          uStack_298._0_4_ = 1.4013e-45;
          uStack_298._4_4_ = 0.0;
          fStack_290 = SUB84(plVar13,0);
          uStack_28c = (undefined4)((ulonglong)plVar13 >> 0x20);
          plStack_288 = (longlong *)0x0;
          lStack_260 = 0;
          pdb_1414e0e70(&uStack_298,uVar14 + 0x30);
          lVar26 = lStack_c0;
          uStack_298._0_4_ = (float)lStack_c0;
          uStack_298._4_4_ = (float)((ulonglong)lStack_c0 >> 0x20);
          alStack_160[0] = lVar16;
          if (plVar46[3] != 0) {
            uVar14 = pdb_1400af0a0(plVar46 + 4,&uStack_298);
            lVar28 = *plVar46;
            bVar32 = (byte)(uVar14 >> 0x39);
            auVar38 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar38 = pshuflw(auVar38,auVar38,0);
            lVar29 = 0;
            goto code_r0x000140b4946e;
          }
          lVar26 = 0;
          goto code_r0x000140b49c7c;
        }
        uVar18 = (ushort)(uVar27 - 1) & (ushort)uVar27;
        uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar18);
      }
      auVar40[0] = -(auVar44[0] == -1);
      auVar40[1] = -(auVar44[1] == -1);
      auVar40[2] = -(auVar44[2] == -1);
      auVar40[3] = -(auVar44[3] == -1);
      auVar40[4] = -(auVar44[4] == -1);
      auVar40[5] = -(auVar44[5] == -1);
      auVar40[6] = -(auVar44[6] == -1);
      auVar40[7] = -(auVar44[7] == -1);
      auVar40[8] = -(auVar44[8] == -1);
      auVar40[9] = -(auVar44[9] == -1);
      auVar40[10] = -(auVar44[10] == -1);
      auVar40[0xb] = -(auVar44[0xb] == -1);
      auVar40[0xc] = -(auVar44[0xc] == -1);
      auVar40[0xd] = -(auVar44[0xd] == -1);
      auVar40[0xe] = -(auVar44[0xe] == -1);
      auVar40[0xf] = -(auVar44[0xf] == -1);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar12 = uVar12 + lVar28 + 0x10;
      lVar28 = lVar28 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143059050);
code_r0x000140b4946e:
  uVar14 = uVar14 & plVar46[1];
  pcVar2 = (char *)(lVar28 + uVar14);
  auVar44[0] = -(*pcVar2 == auVar38[0]);
  auVar44[1] = -(pcVar2[1] == auVar38[1]);
  auVar44[2] = -(pcVar2[2] == auVar38[2]);
  auVar44[3] = -(pcVar2[3] == auVar38[3]);
  auVar44[4] = -(pcVar2[4] == auVar38[4]);
  auVar44[5] = -(pcVar2[5] == auVar38[5]);
  auVar44[6] = -(pcVar2[6] == auVar38[6]);
  auVar44[7] = -(pcVar2[7] == auVar38[7]);
  auVar44[8] = -(pcVar2[8] == auVar38[0]);
  auVar44[9] = -(pcVar2[9] == auVar38[1]);
  auVar44[10] = -(pcVar2[10] == auVar38[2]);
  auVar44[0xb] = -(pcVar2[0xb] == auVar38[3]);
  auVar44[0xc] = -(pcVar2[0xc] == auVar38[4]);
  auVar44[0xd] = -(pcVar2[0xd] == auVar38[5]);
  auVar44[0xe] = -(pcVar2[0xe] == auVar38[6]);
  auVar44[0xf] = -(pcVar2[0xf] == auVar38[7]);
  uVar18 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar27 = (uint)uVar18;
  while (uVar18 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar30 = (uVar7 + uVar14 & plVar46[1]) * -0x98;
    if (lVar26 == *(longlong *)(lVar28 + -0x98 + lVar30)) {
      lVar28 = lVar28 + lVar30;
      goto code_r0x000140b49c6e;
    }
    uVar18 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar18);
  }
  auVar41[0] = -(*pcVar2 == -1);
  auVar41[1] = -(pcVar2[1] == -1);
  auVar41[2] = -(pcVar2[2] == -1);
  auVar41[3] = -(pcVar2[3] == -1);
  auVar41[4] = -(pcVar2[4] == -1);
  auVar41[5] = -(pcVar2[5] == -1);
  auVar41[6] = -(pcVar2[6] == -1);
  auVar41[7] = -(pcVar2[7] == -1);
  auVar41[8] = -(pcVar2[8] == -1);
  auVar41[9] = -(pcVar2[9] == -1);
  auVar41[10] = -(pcVar2[10] == -1);
  auVar41[0xb] = -(pcVar2[0xb] == -1);
  auVar41[0xc] = -(pcVar2[0xc] == -1);
  auVar41[0xd] = -(pcVar2[0xd] == -1);
  auVar41[0xe] = -(pcVar2[0xe] == -1);
  auVar41[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto code_r0x000140b49c6c;
  uVar14 = uVar14 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto code_r0x000140b4946e;
code_r0x000140b49c6c:
  lVar28 = 0;
code_r0x000140b49c6e:
  lVar26 = lVar28 + -0x90;
  if (lVar28 == 0) {
    lVar26 = 0;
  }
code_r0x000140b49c7c:
  uStack_298._0_4_ = 1.4013e-45;
  uStack_298._4_4_ = 0.0;
  fStack_290 = (float)lVar26;
  uStack_28c = (undefined4)((ulonglong)lVar26 >> 0x20);
  plStack_288 = (longlong *)0x0;
  lStack_260 = 0;
  plStack_238 = alStack_160;
  pdb_1415fcaf0(&plStack_318,&uStack_298);
  if (plVar31[8] != 0) {
    pub_1406abac0((byte *)plVar31[9],plVar31[8] * 0xc,4);
  }
  lVar26 = lStack_c0;
  plVar31[10] = (longlong)plStack_308;
  plVar31[8] = (longlong)plStack_318;
  plVar31[9] = (longlong)pcStack_310;
  param_5 = (longlong *)*param_5;
  uStack_298._0_4_ = (float)lStack_c0;
  uStack_298._4_4_ = (float)((ulonglong)lStack_c0 >> 0x20);
  if (param_5[3] == 0) {
code_r0x000140b49def:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430590f0);
  }
  uVar14 = pdb_1400af0a0(param_5 + 4,&uStack_298);
  lVar28 = *param_5;
  bVar32 = (byte)(uVar14 >> 0x39);
  auVar38 = ZEXT216(CONCAT11(bVar32,bVar32));
  auVar38 = pshuflw(auVar38,auVar38,0);
  lVar29 = 0;
  while( true ) {
    uVar14 = uVar14 & param_5[1];
    auVar44 = *(undefined1 (*) [16])(lVar28 + uVar14);
    auVar45[0] = -(auVar44[0] == auVar38[0]);
    auVar45[1] = -(auVar44[1] == auVar38[1]);
    auVar45[2] = -(auVar44[2] == auVar38[2]);
    auVar45[3] = -(auVar44[3] == auVar38[3]);
    auVar45[4] = -(auVar44[4] == auVar38[4]);
    auVar45[5] = -(auVar44[5] == auVar38[5]);
    auVar45[6] = -(auVar44[6] == auVar38[6]);
    auVar45[7] = -(auVar44[7] == auVar38[7]);
    auVar45[8] = -(auVar44[8] == auVar38[0]);
    auVar45[9] = -(auVar44[9] == auVar38[1]);
    auVar45[10] = -(auVar44[10] == auVar38[2]);
    auVar45[0xb] = -(auVar44[0xb] == auVar38[3]);
    auVar45[0xc] = -(auVar44[0xc] == auVar38[4]);
    auVar45[0xd] = -(auVar44[0xd] == auVar38[5]);
    auVar45[0xe] = -(auVar44[0xe] == auVar38[6]);
    auVar45[0xf] = -(auVar44[0xf] == auVar38[7]);
    uVar18 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
    uVar27 = (uint)uVar18;
    if (uVar18 != 0) break;
code_r0x000140b49d9a:
    auVar42[0] = -(auVar44[0] == -1);
    auVar42[1] = -(auVar44[1] == -1);
    auVar42[2] = -(auVar44[2] == -1);
    auVar42[3] = -(auVar44[3] == -1);
    auVar42[4] = -(auVar44[4] == -1);
    auVar42[5] = -(auVar44[5] == -1);
    auVar42[6] = -(auVar44[6] == -1);
    auVar42[7] = -(auVar44[7] == -1);
    auVar42[8] = -(auVar44[8] == -1);
    auVar42[9] = -(auVar44[9] == -1);
    auVar42[10] = -(auVar44[10] == -1);
    auVar42[0xb] = -(auVar44[0xb] == -1);
    auVar42[0xc] = -(auVar44[0xc] == -1);
    auVar42[0xd] = -(auVar44[0xd] == -1);
    auVar42[0xe] = -(auVar44[0xe] == -1);
    auVar42[0xf] = -(auVar44[0xf] == -1);
    if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto code_r0x000140b49def;
    uVar14 = uVar14 + lVar29 + 0x10;
    lVar29 = lVar29 + 0x10;
  }
  while( true ) {
    uVar7 = 0;
    for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar30 = (uVar7 + uVar14 & param_5[1]) * -0x78;
    if (lVar26 == *(longlong *)(lVar28 + -0x78 + lVar30)) break;
    uVar18 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar18);
    if (uVar18 == 0) goto code_r0x000140b49d9a;
  }
  lVar28 = lVar28 + lVar30;
  uVar12 = *(ulonglong *)(lVar28 + -0x60);
  uVar14 = uVar12 * 8;
  if (0x7ffffffffffffffc < uVar14 || uVar12 >> 0x3d != 0) {
    uVar17 = 0;
code_r0x000140b49de4:
    pdb_142dc7e2a(uVar17,uVar14);
    goto code_r0x000140b49def;
  }
  if (uVar14 == 0) {
    pbStack_d0 = (byte *)0x4;
    pbStack_c8 = (byte *)0x0;
    plVar31 = *(longlong **)(lVar28 + -0x68);
    pbVar23 = pbStack_c8;
  }
  else {
    plStack_d8 = *(longlong **)(lVar28 + -0x68);
    pdb_14007ee60();
    uVar17 = 4;
    pbStack_d0 = pub_1406abab0(uVar14,4);
    plVar31 = plStack_d8;
    pbVar23 = (byte *)uVar12;
    if (pbStack_d0 == (byte *)0x0) goto code_r0x000140b49de4;
  }
  pbStack_c8 = pbVar23;
  if (uVar12 != 0) {
    pub_142e32760(pbStack_d0,plVar31,uVar14);
  }
  plVar31 = *(longlong **)(lVar28 + -0x48);
  uVar14 = (longlong)plVar31 * 4;
  if (uVar14 < 0x7ffffffffffffffd && (ulonglong)plVar31 >> 0x3e == 0) {
    uStack_f8 = uVar12;
    plStack_d8 = plVar31;
    if (uVar14 == 0) {
      pbStack_f0 = (byte *)0x4;
      goto code_r0x000140b49f85;
    }
    puVar5 = *(undefined4 **)(lVar28 + -0x50);
    pdb_14007ee60();
    uVar17 = 4;
    pbVar23 = pub_1406abab0(uVar14,4);
    if (pbVar23 != (byte *)0x0) {
      pbStack_f0 = pbVar23;
      if (plStack_d8 == (longlong *)0x0) goto code_r0x000140b49f85;
      plVar31 = (longlong *)((longlong)plStack_d8 - 1U);
      if (plStack_d8 < (longlong *)((longlong)plStack_d8 - 1U)) {
        plVar31 = plStack_d8;
      }
      if (plVar31 < (longlong *)0x8) {
        lVar26 = 0;
        puVar24 = puVar5;
        plVar31 = plStack_d8;
      }
      else {
        uVar12 = (longlong)plVar31 + 1;
        uVar14 = 8;
        if ((uVar12 & 7) != 0) {
          uVar14 = (ulonglong)((uint)uVar12 & 7);
        }
        lVar26 = uVar12 - uVar14;
        plVar31 = (longlong *)((longlong)plStack_d8 - lVar26);
        puVar24 = puVar5 + lVar26;
        lVar29 = 0;
        do {
          uVar17 = *(undefined8 *)((longlong)(puVar5 + lVar29) + 8);
          uVar1 = *(undefined8 *)(puVar5 + lVar29 + 4);
          uVar4 = *(undefined8 *)((longlong)(puVar5 + lVar29 + 4) + 8);
          *(undefined8 *)(pbVar23 + lVar29 * 4) = *(undefined8 *)(puVar5 + lVar29);
          *(undefined8 *)(pbVar23 + lVar29 * 4 + 8) = uVar17;
          *(undefined8 *)(pbVar23 + lVar29 * 4 + 0x10) = uVar1;
          *(undefined8 *)(pbVar23 + lVar29 * 4 + 0x10 + 8) = uVar4;
          lVar29 = lVar29 + 8;
        } while (lVar26 != lVar29);
      }
      pbVar23 = pbVar23 + lVar26 * 4;
      do {
        if (puVar24 == puVar5 + (longlong)plStack_d8) break;
        uVar51 = *puVar24;
        puVar24 = puVar24 + 1;
        *(undefined4 *)pbVar23 = uVar51;
        pbVar23 = pbVar23 + 4;
        plVar31 = (longlong *)((longlong)plVar31 + -1);
      } while (plVar31 != (longlong *)0x0);
code_r0x000140b49f85:
      uStack_e8 = CONCAT44(uStack_e8._4_4_,*(undefined4 *)(lVar28 + -0x40));
      if (!SBORROW8(0,plStack_e0[0xb])) {
        pdb_14049c2a0(plStack_e0 + 0xb);
      }
      plStack_e0[0xb] = (longlong)pbStack_c8;
      plStack_e0[0xc] = (longlong)pbStack_d0;
      plStack_e0[0xd] = uStack_f8;
      plStack_e0[0xe] = (longlong)plStack_d8;
      plStack_e0[0xf] = (longlong)pbStack_f0;
      plStack_e0[0x10] = (longlong)plStack_d8;
      *(int *)(plStack_e0 + 0x11) = (int)uStack_e8;
      plStack_e0[0x14] = lVar16;
      lVar26 = _UNK_14306e1c8;
      plStack_e0[2] = _DAT_14306e1c0;
      plStack_e0[3] = lVar26;
      lVar26 = _UNK_14306e1d8;
      plStack_e0[4] = _DAT_14306e1d0;
      plStack_e0[5] = lVar26;
      plStack_e0[6] = lVar16;
      if (bVar10 != 5) {
        return;
      }
      pfVar20 = (float *)&UNK_143044340;
      if (*pcStack_2a0 != '\0') {
        pfVar20 = (float *)(pcStack_2a0 + 4);
      }
      plStack_e0[0x15] = CONCAT44(pfVar20[2] - fVar37,*pfVar20 - fVar36);
      return;
    }
  }
  else {
    uVar17 = 0;
  }
  pdb_142dc7e2a(uVar17,uVar14);
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

