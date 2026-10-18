// VA 0x140be2a20, PDB extent 21378 bytes
// country_core::systems::wall::eraser::wall_eraser::wall_eraser
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/wall_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::eraser::wall_eraser::wall_eraser
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/wall_eraser.rs
   Extent: 21378 */

void pdb_140be2a20(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14,undefined1 (*param_15) [16])

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  code cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined3 uVar15;
  undefined1 auVar16 [12];
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int7 iVar20;
  char cVar21;
  undefined1 uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  byte *pbVar27;
  code *pcVar28;
  char *pcVar29;
  longlong *plVar30;
  undefined1 (*pauVar31) [12];
  longlong *plVar32;
  code *pcVar33;
  float *pfVar34;
  ulonglong uVar35;
  undefined *puVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  float *pfVar41;
  float *pfVar42;
  undefined4 *puVar43;
  undefined1 (*pauVar44) [16];
  ulonglong uVar45;
  byte *pbVar46;
  ulonglong uVar47;
  undefined8 uVar48;
  int iVar49;
  float *pfVar50;
  float *pfVar51;
  ushort uVar52;
  float *pfVar53;
  undefined *puVar54;
  ulonglong uVar55;
  code *pcVar56;
  code **ppcVar57;
  undefined1 (*pauVar58) [16];
  ulonglong uVar59;
  bool bVar60;
  byte bVar61;
  float extraout_XMM0_Da;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  float fVar92;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [16];
  undefined1 auStack_5e8 [8];
  float fStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  longlong lStack_5c8;
  byte *pbStack_5c0;
  undefined1 *puStack_5b8;
  longlong lStack_5b0;
  undefined8 uStack_5a8;
  undefined1 *puStack_5a0;
  undefined8 uStack_598;
  longlong lStack_578;
  byte *pbStack_570;
  longlong lStack_568;
  undefined8 uStack_560;
  undefined4 *puStack_558;
  undefined4 *puStack_550;
  undefined4 *puStack_548;
  undefined4 *puStack_540;
  undefined4 *puStack_538;
  longlong lStack_530;
  longlong *plStack_528;
  float *pfStack_520;
  float *pfStack_518;
  longlong *plStack_510;
  longlong *plStack_508;
  longlong *plStack_500;
  longlong *plStack_4f8;
  longlong lStack_4f0;
  longlong lStack_4e8;
  longlong lStack_4e0;
  longlong lStack_4d8;
  code *pcStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  longlong lStack_4b0;
  code *pcStack_4a8;
  longlong lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  longlong lStack_470;
  undefined8 uStack_468;
  code *pcStack_460;
  undefined8 uStack_458;
  float *pfStack_450;
  undefined8 uStack_448;
  float *pfStack_440;
  ulonglong uStack_438;
  uint uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined8 uStack_41c;
  undefined4 uStack_414;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  longlong lStack_3f8;
  byte *pbStack_3f0;
  undefined1 *puStack_3e8;
  longlong lStack_3e0;
  byte *pbStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  longlong lStack_3c0;
  undefined8 uStack_3b8;
  undefined4 *puStack_3b0;
  longlong lStack_3a8;
  byte *pbStack_3a0;
  longlong *plStack_398;
  longlong *plStack_390;
  longlong *plStack_388;
  longlong *plStack_380;
  longlong *plStack_378;
  longlong *plStack_370;
  undefined4 *puStack_368;
  longlong lStack_360;
  code *pcStack_358;
  code *pcStack_350;
  undefined1 auStack_348 [16];
  float *pfStack_338;
  float *pfStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  ulonglong uStack_2a0;
  char *pcStack_298;
  longlong lStack_290;
  longlong lStack_288;
  undefined8 *puStack_280;
  longlong lStack_278;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined4 *puStack_258;
  undefined8 uStack_250;
  longlong *plStack_248;
  byte *pbStack_240;
  longlong lStack_238;
  undefined4 *puStack_230;
  code *pcStack_228;
  undefined4 uStack_21c;
  undefined4 *puStack_218;
  float *pfStack_210;
  undefined1 auStack_208 [4];
  undefined1 auStack_204 [4];
  undefined1 (*pauStack_200) [16];
  undefined8 uStack_1f8;
  ushort uStack_1f0;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [12];
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [2];
  char cStack_19e;
  byte bStack_19d;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong *plStack_178;
  byte *pbStack_170;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  code *pcStack_140;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  byte bStack_12f;
  byte bStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  code *pcStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  longlong *plStack_108;
  byte bStack_f9;
  char cStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_560 = *param_12;
  plStack_178 = (longlong *)param_12[4];
  uStack_4b8 = param_12[10];
  uStack_4c8 = param_12[8];
  uStack_4c0 = param_12[9];
  plStack_120 = (longlong *)*param_13;
  puStack_218 = (undefined4 *)param_13[2];
  uStack_12c = *(undefined4 *)((longlong)param_13 + 0x1c);
  uStack_250 = param_13[4];
  puStack_538 = (undefined4 *)param_13[6];
  uStack_2cc = *(undefined4 *)((longlong)param_13 + 0x3c);
  uStack_260 = param_13[8];
  puStack_258 = (undefined4 *)param_13[10];
  uStack_164 = *(undefined4 *)((longlong)param_13 + 0x5c);
  uStack_608 = *(undefined8 *)param_15[2];
  uStack_600 = *(undefined8 *)(param_15[2] + 8);
  auStack_5f8 = param_15[3];
  if ((*(char *)*param_1 == '\x04') && ((byte)((char *)*param_1)[1] < 2)) {
    lStack_2b8 = *(longlong *)param_15[4];
    puStack_548 = *(undefined4 **)param_15[5];
    uStack_2d4 = *(undefined4 *)(param_15[5] + 0xc);
    lStack_2b0 = *(longlong *)param_15[6];
    puStack_540 = *(undefined4 **)param_15[7];
    uStack_2d0 = *(undefined4 *)(param_15[7] + 0xc);
    lStack_2c0 = *(longlong *)param_15[8];
    puStack_550 = *(undefined4 **)param_15[9];
    uStack_2d8 = *(undefined4 *)(param_15[9] + 0xc);
    lVar26 = *(longlong *)param_15[10];
    puVar8 = *(undefined4 **)param_15[0xb];
    uVar90 = *(undefined4 *)(param_15[0xb] + 0xc);
    auVar67._12_4_ = 0;
    auVar67._0_12_ = _auStack_204;
    _auStack_208 = auVar67 << 0x20;
    uStack_1f0 = 0;
    uStack_1ee = 0;
    auStack_1e0._8_4_ = 0;
    uStack_1c0 = 0;
    lVar25 = *(longlong *)param_15[0xc];
    puVar43 = *(undefined4 **)param_15[0xd];
    uVar91 = *(undefined4 *)(param_15[0xd] + 0xc);
    lStack_238 = *(longlong *)param_15[0xe];
    puStack_3b0 = *(undefined4 **)param_15[0xf];
    uStack_26c = *(undefined4 *)(param_15[0xf] + 0xc);
    lStack_2a8 = *(longlong *)param_15[0x10];
    puStack_558 = *(undefined4 **)param_15[0x11];
    uStack_2dc = *(undefined4 *)(param_15[0x11] + 0xc);
    puVar36 = &UNK_143065428;
    uStack_2c8 = param_4;
    plStack_118 = param_3;
    plStack_108 = param_2;
    lVar24 = pdb_1408ffe50(*param_8,&UNK_143065428,6,CONCAT71((int7)((ulonglong)puStack_258 >> 8),6)
                           ,3,auStack_208);
    plVar30 = plStack_120;
    cVar21 = *(char *)(lVar24 + 0x18);
    if (cVar21 != '\0') {
      if ((*(undefined **)(lVar24 + 0x38) == puVar36) && (*(int *)(lVar24 + 0x28) != 2)) {
        uVar7 = *(undefined4 *)((longlong)param_10 + 0x1c);
        puVar38 = (undefined8 *)*param_10;
        puVar9 = (undefined4 *)param_10[2];
        *(undefined1 *)((longlong)puVar38 + 0xc) = 1;
        *puVar9 = uVar7;
        *puVar38 = _DAT_143020eb0;
        *(undefined4 *)(puVar38 + 1) = 0;
        cVar21 = *(char *)(lVar24 + 0x18);
      }
      if ((cVar21 == '\x02') && (*(undefined **)(lVar24 + 0x38) == puVar36)) {
        bVar61 = *(byte *)(lVar24 + 0x19);
        if (bVar61 < 2) {
          if (plStack_120[0xf] != 0) {
            *puVar43 = uVar91;
            lVar24 = *(longlong *)(lVar25 + 0x30);
            uVar66 = *(undefined8 *)(lVar25 + 0x40);
            if (lVar24 == *(longlong *)(lVar25 + 0x20)) {
              pdb_142d7e8a0(lVar25 + 0x20);
            }
            *(undefined8 *)(*(longlong *)(lVar25 + 0x28) + lVar24 * 8) = uVar66;
            *(longlong *)(lVar25 + 0x30) = lVar24 + 1;
            *(longlong *)(lVar25 + 0x40) = *(longlong *)(lVar25 + 0x40) + 1;
          }
          plVar30 = plStack_120;
          *puStack_218 = uStack_12c;
          uVar66 = *param_7;
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          pdb_140c35e90(plStack_120,uVar66,*param_9,*param_5,*param_6,*param_14);
          *puVar8 = uVar90;
          lVar25 = *(longlong *)(lVar26 + 0x30);
          uVar66 = *(undefined8 *)(lVar26 + 0x40);
          if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
            pdb_142d7e8a0(lVar26 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar26 + 0x28) + lVar25 * 8) = uVar66;
          *(longlong *)(lVar26 + 0x30) = lVar25 + 1;
          *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
          lVar26 = plVar30[3];
          if (lVar26 != 0) {
            pauVar44 = (undefined1 (*) [16])*plStack_120;
            auVar67 = *pauVar44;
            uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar67[0xf] >> 7) << 0xf);
            pauVar58 = pauVar44 + 1;
            plStack_120 = (longlong *)(lStack_238 + 0x20);
            do {
              if ((short)uVar23 == 0) {
                do {
                  auVar67 = *pauVar58;
                  pauVar44 = pauVar44 + -0x10;
                  pauVar58 = pauVar58 + 1;
                  uVar23 = (ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar23 == 0);
              }
              iVar49 = 0;
              for (uVar11 = uVar23; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                iVar49 = iVar49 + 1;
              }
              uVar66 = *(undefined8 *)
                        ((longlong)pauVar44 + (-0x10 - (ulonglong)(uint)(iVar49 << 4)));
              *puStack_3b0 = uStack_26c;
              lVar25 = *(longlong *)(lStack_238 + 0x30);
              uVar48 = *(undefined8 *)(lStack_238 + 0x40);
              if (lVar25 == *(longlong *)(lStack_238 + 0x20)) {
                pdb_142d7e980(plStack_120);
              }
              lVar24 = *(longlong *)(lStack_238 + 0x28);
              *(undefined8 *)(lVar24 + lVar25 * 0x10) = uVar48;
              *(undefined8 *)(lVar24 + 8 + lVar25 * 0x10) = uVar66;
              *(longlong *)(lStack_238 + 0x30) = lVar25 + 1;
              *(longlong *)(lStack_238 + 0x40) = *(longlong *)(lStack_238 + 0x40) + 1;
              uVar23 = uVar23 - 1 & uVar23;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
        else if (bVar61 != 2) {
          puVar38 = param_7;
          if (bVar61 == 3) {
            pdb_140c35ca0(auStack_208);
            *puStack_218 = uStack_12c;
            lVar26 = plVar30[1];
            if (lVar26 != 0) {
              lVar25 = lVar26 * 0x10 + 0x10;
              uVar37 = lVar26 + lVar25 + 0x11;
              if (uVar37 != 0) {
                pub_1406abac0((byte *)(*plVar30 - lVar25),uVar37,0x10);
              }
            }
            pdb_140265650(plVar30 + 6,plVar30 + 10,0xe8,0x10);
            pdb_1402642c0(plStack_120 + 0xc,plStack_120 + 0x10,0x90,0x10);
            puVar38 = (undefined8 *)auStack_208;
            pub_142e32760(plStack_120,puVar38,0x90);
          }
          cVar21 = pdb_140e94b40();
          if (cVar21 == '\0') {
            lStack_3c0 = 0;
            plVar30 = plStack_178;
            goto LAB_140be3166;
          }
          pauVar58 = (undefined1 (*) [16])0x3d;
          lVar26 = pdb_140be7fb0(0x3d);
          plVar30 = plStack_178;
          ppcVar57 = (code **)&UNK_143065740;
          if (lVar26 == 1) {
            if ((undefined8 *)0x3d < puVar38) {
LAB_140be6323:
              pdb_142dc8070(&UNK_143065740,0x3d,0);
LAB_140be6343:
              uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2();
            }
            uVar37 = pdb_140be7fb0(puVar38);
            if ((uVar37 & 1) != 0) {
              if (0x3d < (longlong)puVar38 + 2U) {
                pdb_142dc8070(&UNK_143065740,0x3d,(longlong)puVar38 + 2U,0x3d,&UNK_143065818);
LAB_140be639c:
                pdb_142dc7890(&UNK_143326860);
LAB_140be6415:
                    /* WARNING: Does not return */
                pcVar56 = (code *)invalidInstructionException();
                (*pcVar56)();
              }
              pauVar58 = (undefined1 (*) [16])(0x3b - (longlong)puVar38);
              ppcVar57 = (code **)((longlong)puVar38 + 0x143065742);
            }
          }
          puVar36 = &UNK_1430654a3;
          puVar54 = &UNK_143065469;
          do {
            bVar61 = puVar36[-1];
            uVar23 = (uint)(char)bVar61;
            if ((char)bVar61 < '\0') {
              bVar3 = puVar36[-2];
              if ((char)bVar3 < -0x40) {
                bVar4 = puVar36[-3];
                if ((char)bVar4 < -0x40) {
                  pbVar46 = puVar36 + -4;
                  puVar36 = puVar36 + -4;
                  uVar23 = bVar4 & 0x3f | (*pbVar46 & 7) << 6;
                }
                else {
                  puVar36 = puVar36 + -3;
                  uVar23 = bVar4 & 0xf;
                }
                uVar23 = bVar3 & 0x3f | uVar23 << 6;
              }
              else {
                puVar36 = puVar36 + -2;
                uVar23 = bVar3 & 0x1f;
              }
              uVar23 = (uint)(bVar61 & 0x3f) | uVar23 << 6;
            }
            else {
              puVar36 = puVar36 + -1;
            }
            if ((uVar23 == 0x5c) || (uVar23 == 0x2f)) {
              puVar54 = puVar36 + -0x143065468;
              if (puVar54 < (undefined *)0x3b) {
                pbVar46 = (byte *)(0x3a - (longlong)puVar54);
                puVar54 = puVar36 + 1;
                goto LAB_140be30f8;
              }
              pdb_142dc8070(&UNK_143065469,0x3a,puVar54,0x3a,&UNK_1430657e0);
              goto LAB_140be6323;
            }
          } while (puVar36 != &UNK_143065469);
          pbVar46 = (byte *)0x3a;
LAB_140be30f8:
          pbVar27 = (byte *)pdb_140e97000();
          if (pbVar27[0x68] != 1) goto LAB_140be616b;
          do {
            if (*(longlong *)pbVar27 == 0) {
              pbVar27[0] = 0xff;
              pbVar27[1] = 0xff;
              pbVar27[2] = 0xff;
              pbVar27[3] = 0xff;
              pbVar27[4] = 0xff;
              pbVar27[5] = 0xff;
              pbVar27[6] = 0xff;
              pbVar27[7] = 0xff;
              pbStack_170 = pbVar27;
              uStack_3b8 = pdb_140e94f10(pbVar27 + 8,ppcVar57,pauVar58,puVar54,pbVar46,1,0);
              *(longlong *)pbStack_170 = *(longlong *)pbStack_170 + 1;
              lStack_3c0 = 1;
LAB_140be3166:
              pcStack_298 = (char *)*plStack_118;
              pfStack_520 = (float *)(pcStack_298 + 4);
              pfVar50 = (float *)&UNK_143044340;
              if (*pcStack_298 != '\0') {
                pfVar50 = pfStack_520;
              }
              fVar1 = *pfVar50;
              uVar86 = SUB41(fVar1,0);
              uVar87 = (undefined1)((uint)fVar1 >> 8);
              uVar88 = (undefined1)((uint)fVar1 >> 0x10);
              uVar89 = (undefined1)((uint)fVar1 >> 0x18);
              fVar2 = pfVar50[2];
              plStack_118 = (longlong *)*param_7;
              _auStack_208 = (undefined1 (*) [16])*plStack_118;
              uStack_1f8 = *_auStack_208 + plStack_118[1] + 1;
              auVar67 = *_auStack_208;
              uStack_1f0 = ~((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar67[0xf] >> 7) << 0xf);
              pauStack_200 = _auStack_208 + 1;
              uStack_1e8 = (undefined4)plStack_118[3];
              uStack_1e4 = (undefined4)((ulonglong)plStack_118[3] >> 0x20);
              pdb_1415fa090(&lStack_578,auStack_208);
              pfStack_518 = (float *)*param_11;
              uStack_f6 = 1;
              pdb_140defa80(auStack_5e8);
              fVar17 = _DAT_142e3787c;
              lStack_3a8 = lStack_578;
              pbStack_240 = pbStack_570 + lStack_568 * 8;
              lStack_530 = *plStack_108;
              uStack_15c = *(undefined4 *)((longlong)param_7 + 0x1c);
              puStack_230 = (undefined4 *)param_7[2];
              plStack_388 = (longlong *)*param_5;
              plStack_380 = (longlong *)*param_6;
              plStack_398 = (longlong *)*param_14;
              uStack_264 = *(undefined4 *)(param_15[1] + 0xc);
              lStack_290 = *(longlong *)*param_15;
              puStack_368 = *(undefined4 **)param_15[1];
              plStack_248 = plStack_118 + 4;
              plStack_4f8 = plStack_118 + 0xc;
              plStack_510 = plStack_388 + 4;
              plStack_378 = plStack_388 + 6;
              plStack_508 = plStack_380 + 4;
              plStack_370 = plStack_380 + 6;
              plStack_528 = plStack_398 + 4;
              plStack_390 = plStack_398 + 6;
              lStack_360 = lStack_290 + 0x20;
              plStack_500 = plVar30 + 4;
              lStack_4e8 = lStack_2b8 + 0x20;
              lStack_4e0 = lStack_2b0 + 0x20;
              lStack_4f0 = lStack_2c0 + 0x20;
              pbStack_3a0 = pbStack_570;
              uStack_268 = (uint)lStack_4f0;
              pbVar27 = pbStack_570;
              pbVar46 = pbStack_240;
LAB_140be33b4:
              ppcVar57 = &pcStack_358;
              if (pbVar27 != pbVar46) {
                plStack_108 = *(longlong **)pbVar27;
                pbVar27 = pbVar27 + 8;
                lVar26 = *(longlong *)(lStack_530 + 8);
                lVar25 = *(longlong *)(lStack_530 + 0x10) * 0x98;
                while (pbStack_170 = pbVar27, lVar25 != 0) {
                  lVar25 = lVar25 + -0x98;
                  puVar38 = (undefined8 *)(lVar26 + 0x70);
                  lVar26 = lVar26 + 0x98;
                  if ((longlong *)*puVar38 == plStack_108) goto LAB_140be33b4;
                }
                _auStack_208 = (undefined1 (*) [16])plStack_108;
                if (plStack_118[3] == 0) goto LAB_140be5d03;
                uVar37 = pdb_1400af0a0(plStack_248,auStack_208);
                lVar26 = *plStack_118;
                bVar61 = (byte)(uVar37 >> 0x39);
                auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
                auVar67 = pshuflw(auVar67,auVar67,0);
                lVar25 = 0;
                while( true ) {
                  uVar37 = uVar37 & plStack_118[1];
                  pcVar29 = (char *)(lVar26 + uVar37);
                  auVar77[0] = -(*pcVar29 == auVar67[0]);
                  auVar77[1] = -(pcVar29[1] == auVar67[1]);
                  auVar77[2] = -(pcVar29[2] == auVar67[2]);
                  auVar77[3] = -(pcVar29[3] == auVar67[3]);
                  auVar77[4] = -(pcVar29[4] == auVar67[4]);
                  auVar77[5] = -(pcVar29[5] == auVar67[5]);
                  auVar77[6] = -(pcVar29[6] == auVar67[6]);
                  auVar77[7] = -(pcVar29[7] == auVar67[7]);
                  auVar77[8] = -(pcVar29[8] == auVar67[0]);
                  auVar77[9] = -(pcVar29[9] == auVar67[1]);
                  auVar77[10] = -(pcVar29[10] == auVar67[2]);
                  auVar77[0xb] = -(pcVar29[0xb] == auVar67[3]);
                  auVar77[0xc] = -(pcVar29[0xc] == auVar67[4]);
                  auVar77[0xd] = -(pcVar29[0xd] == auVar67[5]);
                  auVar77[0xe] = -(pcVar29[0xe] == auVar67[6]);
                  auVar77[0xf] = -(pcVar29[0xf] == auVar67[7]);
                  uVar52 = (ushort)(SUB161(auVar77 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar77[0xf] >> 7) << 0xf;
                  uVar23 = (uint)uVar52;
                  if (uVar52 != 0) break;
LAB_140be34b4:
                  auVar68[0] = -(*pcVar29 == -1);
                  auVar68[1] = -(pcVar29[1] == -1);
                  auVar68[2] = -(pcVar29[2] == -1);
                  auVar68[3] = -(pcVar29[3] == -1);
                  auVar68[4] = -(pcVar29[4] == -1);
                  auVar68[5] = -(pcVar29[5] == -1);
                  auVar68[6] = -(pcVar29[6] == -1);
                  auVar68[7] = -(pcVar29[7] == -1);
                  auVar68[8] = -(pcVar29[8] == -1);
                  auVar68[9] = -(pcVar29[9] == -1);
                  auVar68[10] = -(pcVar29[10] == -1);
                  auVar68[0xb] = -(pcVar29[0xb] == -1);
                  auVar68[0xc] = -(pcVar29[0xc] == -1);
                  auVar68[0xd] = -(pcVar29[0xd] == -1);
                  auVar68[0xe] = -(pcVar29[0xe] == -1);
                  auVar68[0xf] = -(pcVar29[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar68 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar68 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar68 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x6f,0) & 1) != 0) || (SUB161(auVar68 >> 0x77,0) & 1) != 0
                      ) || auVar68[0xf] < '\0') {
LAB_140be5d03:
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430654a8);
                  }
                  uVar37 = uVar37 + lVar25 + 0x10;
                  lVar25 = lVar25 + 0x10;
                }
LAB_140be3487:
                uVar11 = 0;
                for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                  uVar11 = uVar11 + 1;
                }
                lVar24 = (uVar11 + uVar37 & plStack_118[1]) * -0x78;
                if (plStack_108 != *(longlong **)(lVar26 + -0x78 + lVar24))
                goto code_r0x000140be34a7;
                lVar26 = lVar26 + lVar24;
                uStack_160 = *(uint *)(lVar26 + -0x38);
                uStack_2a0 = CONCAT71(uStack_2a0._1_7_,*(undefined1 *)(lVar26 + -2));
                cVar21 = *(char *)(lVar26 + -7);
                uStack_132 = *(undefined1 *)(lVar26 + -6);
                bStack_f9 = *(byte *)(lVar26 + -5);
                uVar90 = (undefined4)*(undefined8 *)(lVar26 + -0x10);
                uVar91 = (undefined4)((ulonglong)*(undefined8 *)(lVar26 + -0x10) >> 0x20);
                uStack_131 = *(undefined1 *)(lVar26 + -4);
                uStack_130 = *(undefined1 *)(lVar26 + -3);
                lStack_3f8 = -0x8000000000000000;
                pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,1);
                if (uStack_160 == 2) goto LAB_140be3538;
                uStack_f2 = 1;
                uVar23 = pdb_1419aad80(lVar26 + -0x70);
                uVar45 = (ulonglong)uVar23;
                uVar37 = *(ulonglong *)(lVar26 + -0x60);
                if (uVar37 <= uVar45) {
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar45,uVar37,&UNK_14335e4e0);
                }
                uVar35 = uVar45 + 1;
                if (uVar37 <= uVar35) {
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar35,uVar37,&UNK_14335e4f8);
                }
                uVar66 = *(undefined8 *)(*(longlong *)(lVar26 + -0x68) + uVar45 * 8);
                uVar48 = *(undefined8 *)(*(longlong *)(lVar26 + -0x68) + 8 + uVar45 * 8);
                fVar92 = (extraout_XMM0_Da * (float)uVar48 +
                         (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar66) - fVar1;
                fVar62 = (extraout_XMM0_Da * (float)((ulonglong)uVar48 >> 0x20) +
                         (_DAT_142e36f28 - extraout_XMM0_Da) * (float)((ulonglong)uVar66 >> 0x20)) -
                         fVar2;
                pbVar27 = pbStack_170;
                pbVar46 = pbStack_240;
                if (fStack_5e0 <= SQRT(fVar62 * fVar62 + fVar92 * fVar92)) goto LAB_140be33b4;
                uVar37 = *(ulonglong *)(lVar26 + -0x48);
                if (uVar37 <= uVar45) goto LAB_140be6343;
                if (uVar37 <= uVar35) {
                  uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar35,uVar37,&UNK_14335e478);
                }
                if ((extraout_XMM0_Da < 0.0) || (_DAT_142e36f28 < extraout_XMM0_Da))
                goto LAB_140be618a;
                uStack_f2 = 1;
                uVar66 = pdb_140de9fd0(*(undefined4 *)(*(longlong *)(lVar26 + -0x50) + uVar45 * 4));
                uStack_f2 = 1;
                pdb_1409fdc30(auStack_208,lVar26 + -0x70,uVar66);
                uStack_3c8 = stack0xfffffffffffffe28;
                lStack_3f8 = (longlong)_auStack_208;
                pbStack_3f0 = (byte *)pauStack_200;
                puStack_3e8 = uStack_1f8;
                lStack_3e0 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,uStack_1f0));
                pbStack_3d8 = (byte *)CONCAT44(uStack_1e4,uStack_1e8);
                puStack_3d0 = (undefined1 *)auStack_1e0._0_8_;
                if (SBORROW8(0,(longlong)_auStack_208)) goto LAB_140be3538;
                uStack_598 = stack0xfffffffffffffe28;
                puStack_5a0 = (undefined1 *)auStack_1e0._0_8_;
                lStack_5c8 = (longlong)_auStack_208;
                pbStack_5c0 = (byte *)pauStack_200;
                pcVar56 = *(code **)(lVar26 + -0x60);
                uVar37 = (longlong)pcVar56 * 8;
                puStack_5b8 = puStack_3e8;
                lStack_5b0 = lStack_3e0;
                uStack_5a8 = pbStack_3d8;
                if (0x7ffffffffffffffc < uVar37 || (ulonglong)pcVar56 >> 0x3d != 0) {
                  uVar66 = 0;
LAB_140be5e7d:
                  uStack_109 = 1;
                  pdb_142dc7e2a(uVar66,uVar37);
                  goto LAB_140be6415;
                }
                uVar48 = *(undefined8 *)(lVar26 + -0x68);
                cStack_f8 = cVar21;
                if (uVar37 == 0) {
                  pcVar28 = (code *)0x4;
                  pcStack_140 = (code *)0x0;
                  pcVar33 = pcStack_140;
                }
                else {
                  pdb_14007ee60(0,uVar48);
                  uVar66 = 4;
                  pcVar28 = (code *)pub_1406abab0(uVar37,4);
                  pcVar33 = pcVar56;
                  if (pcVar28 == (code *)0x0) goto LAB_140be5e7d;
                }
                pcStack_140 = pcVar33;
                if (pcVar56 != (code *)0x0) {
                  pub_142e32760(pcVar28,uVar48);
                }
                pfVar50 = *(float **)(lVar26 + -0x48);
                uVar37 = (longlong)pfVar50 * 4;
                if (0x7ffffffffffffffc < uVar37 || (ulonglong)pfVar50 >> 0x3e != 0) {
                  uVar66 = 0;
                  pcStack_128 = pcVar28;
LAB_140be60f0:
                  pdb_142dc7e2a(uVar66,uVar37);
                  goto LAB_140be6415;
                }
                if (uVar37 == 0) {
                  pfVar53 = (float *)0x4;
                  pcStack_460 = pcVar28;
                  goto LAB_140be4eef;
                }
                pfVar42 = *(float **)(lVar26 + -0x50);
                pcStack_128 = pcVar28;
                pdb_14007ee60();
                pfVar53 = (float *)pub_1406abab0(uVar37,4);
                uVar66 = 4;
                if (pfVar53 == (float *)0x0) goto LAB_140be60f0;
                pcStack_460 = pcStack_128;
                if (pfVar50 == (float *)0x0) goto LAB_140be4eef;
                pfVar41 = (float *)((longlong)pfVar50 - 1U);
                if (pfVar50 < (float *)((longlong)pfVar50 - 1U)) {
                  pfVar41 = pfVar50;
                }
                if (pfVar41 < (float *)0x8) {
                  lVar25 = 0;
                  pfVar34 = pfVar50;
                  pfVar41 = pfVar42;
                }
                else {
                  uVar45 = (longlong)pfVar41 + 1;
                  uVar37 = (ulonglong)((uint)uVar45 & 7);
                  if ((uVar45 & 7) == 0) {
                    uVar37 = 8;
                  }
                  lVar25 = uVar45 - uVar37;
                  pfVar34 = (float *)((longlong)pfVar50 - lVar25);
                  pfVar41 = pfVar42 + lVar25;
                  lVar24 = 0;
                  do {
                    uVar66 = *(undefined8 *)(pfVar42 + lVar24 + 2);
                    uVar48 = *(undefined8 *)(pfVar42 + lVar24 + 4);
                    uVar14 = *(undefined8 *)(pfVar42 + lVar24 + 4 + 2);
                    *(undefined8 *)(pfVar53 + lVar24) = *(undefined8 *)(pfVar42 + lVar24);
                    *(undefined8 *)(pfVar53 + lVar24 + 2) = uVar66;
                    *(undefined8 *)(pfVar53 + lVar24 + 4) = uVar48;
                    *(undefined8 *)(pfVar53 + lVar24 + 4 + 2) = uVar14;
                    lVar24 = lVar24 + 8;
                  } while (lVar25 != lVar24);
                }
                pfVar51 = pfVar53 + lVar25;
                do {
                  if (pfVar41 == pfVar42 + (longlong)pfVar50) break;
                  fVar92 = *pfVar41;
                  pfVar41 = pfVar41 + 1;
                  *pfVar51 = fVar92;
                  pfVar51 = pfVar51 + 1;
                  pfVar34 = (float *)((longlong)pfVar34 + -1);
                } while (pfVar34 != (float *)0x0);
LAB_140be4eef:
                uStack_414 = *(undefined4 *)(lVar26 + -0x1c);
                uVar23 = *(uint *)(lVar26 + -0x38);
                iVar49 = uVar23 - 2;
                if (uVar23 < 2) {
                  iVar49 = 2;
                }
                uStack_430 = 2;
                uStack_41c = uStack_1f8;
                if (iVar49 != 0) {
                  if (iVar49 == 1) {
                    uStack_430 = 3;
                  }
                  else {
                    uStack_41c = *(undefined1 **)(lVar26 + -0x24);
                    _auStack_208 = *(undefined1 (*) [16])(lVar26 + -0x34);
                    uStack_430 = uVar23;
                  }
                }
                uStack_468 = pcStack_140;
                uStack_438 = CONCAT44(uStack_438._4_4_,*(undefined4 *)(lVar26 + -0x40));
                uStack_42c = auStack_208;
                uStack_428 = auStack_208._4_4_;
                uStack_424 = auStack_208._8_4_;
                uStack_420 = auStack_208._12_4_;
                uStack_400 = *(undefined8 *)(lVar26 + -8);
                uStack_410 = *(undefined8 *)(lVar26 + -0x18);
                uStack_408 = *(undefined8 *)(lVar26 + -0x10);
                *puStack_230 = uStack_15c;
                uStack_1e8 = SUB84(pbStack_3d8,0);
                uStack_1e4 = (undefined4)((ulonglong)pbStack_3d8 >> 0x20);
                stack0xfffffffffffffe28 = uStack_3c8;
                auStack_1e0._0_8_ = puStack_3d0;
                uStack_1f8._0_4_ = SUB84(puStack_3e8,0);
                uStack_1f8._4_4_ = (undefined4)((ulonglong)puStack_3e8 >> 0x20);
                uStack_1f0 = (ushort)lStack_3e0;
                uStack_1ee = (undefined2)((ulonglong)lStack_3e0 >> 0x10);
                uStack_1ec = (undefined4)((ulonglong)lStack_3e0 >> 0x20);
                _auStack_208 = (undefined1 (*) [16])lStack_3f8;
                pauStack_200 = (undefined1 (*) [16])pbStack_3f0;
                uStack_f3 = 1;
                uStack_458 = pcVar56;
                pfStack_450 = pfVar50;
                uStack_448 = pfVar53;
                pfStack_440 = pfVar50;
                pdb_14092e8e0(plStack_118,plStack_108,auStack_208);
                *puStack_230 = uStack_15c;
                uStack_498 = plStack_108;
                uStack_f3 = 1;
                lVar26 = pdb_1417bd890(plStack_118,&uStack_498);
                if (lVar26 == 0) {
                  if (1 < *_DAT_143ca8e90) {
                    pcStack_358 = (code *)&uStack_498;
                    pcStack_350 = pdb_140c04ef0;
                    _auStack_208 = (undefined1 (*) [16])0x0;
                    pauStack_200 = (undefined1 (*) [16])&UNK_143021dde;
                    uStack_1f8._0_4_ = 0x2b;
                    uStack_1f8._4_4_ = 0;
                    uStack_1f0 = 0;
                    uStack_1ee = 0;
                    uStack_1ec = 0;
                    uStack_1e8 = 0x43021da7;
                    uStack_1e4 = 1;
                    stack0xfffffffffffffe28 = 2;
                    auStack_1e0._0_8_ = 0x36;
                    uStack_1d0 = 0x43021dde;
                    uStack_1cc = 1;
                    uStack_1c8 = 0x2b;
                    uStack_1c4 = 0;
                    uStack_1c0 = 1;
                    uStack_1bc = 0xfd;
                    uStack_1b8 = 0x43021d78;
                    fStack_1b4 = 1.4013e-45;
                    uStack_f3 = 1;
                    uStack_1b0 = ppcVar57;
                    pdb_140f332f0(&uStack_133,auStack_208);
                  }
                }
                else {
                  uStack_f3 = 1;
                  pdb_1403b05d0(plStack_4f8,plStack_108);
                  *(undefined4 *)(lVar26 + 0x38) = 2;
                }
                _auStack_208 = (undefined1 (*) [16])plStack_108;
                if (plStack_118[3] == 0) goto LAB_140be60fe;
                uStack_f3 = 1;
                uVar37 = pdb_1400af0a0(plStack_248,auStack_208);
                lVar26 = *plStack_118;
                bVar61 = (byte)(uVar37 >> 0x39);
                auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
                auVar67 = pshuflw(auVar67,auVar67,0);
                lVar25 = 0;
                while( true ) {
                  uVar37 = uVar37 & plStack_118[1];
                  pcVar29 = (char *)(lVar26 + uVar37);
                  auVar84[0] = -(*pcVar29 == auVar67[0]);
                  auVar84[1] = -(pcVar29[1] == auVar67[1]);
                  auVar84[2] = -(pcVar29[2] == auVar67[2]);
                  auVar84[3] = -(pcVar29[3] == auVar67[3]);
                  auVar84[4] = -(pcVar29[4] == auVar67[4]);
                  auVar84[5] = -(pcVar29[5] == auVar67[5]);
                  auVar84[6] = -(pcVar29[6] == auVar67[6]);
                  auVar84[7] = -(pcVar29[7] == auVar67[7]);
                  auVar84[8] = -(pcVar29[8] == auVar67[0]);
                  auVar84[9] = -(pcVar29[9] == auVar67[1]);
                  auVar84[10] = -(pcVar29[10] == auVar67[2]);
                  auVar84[0xb] = -(pcVar29[0xb] == auVar67[3]);
                  auVar84[0xc] = -(pcVar29[0xc] == auVar67[4]);
                  auVar84[0xd] = -(pcVar29[0xd] == auVar67[5]);
                  auVar84[0xe] = -(pcVar29[0xe] == auVar67[6]);
                  auVar84[0xf] = -(pcVar29[0xf] == auVar67[7]);
                  uVar52 = (ushort)(SUB161(auVar84 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar84[0xf] >> 7) << 0xf;
                  uVar23 = (uint)uVar52;
                  if (uVar52 != 0) break;
LAB_140be5203:
                  auVar75[0] = -(*pcVar29 == -1);
                  auVar75[1] = -(pcVar29[1] == -1);
                  auVar75[2] = -(pcVar29[2] == -1);
                  auVar75[3] = -(pcVar29[3] == -1);
                  auVar75[4] = -(pcVar29[4] == -1);
                  auVar75[5] = -(pcVar29[5] == -1);
                  auVar75[6] = -(pcVar29[6] == -1);
                  auVar75[7] = -(pcVar29[7] == -1);
                  auVar75[8] = -(pcVar29[8] == -1);
                  auVar75[9] = -(pcVar29[9] == -1);
                  auVar75[10] = -(pcVar29[10] == -1);
                  auVar75[0xb] = -(pcVar29[0xb] == -1);
                  auVar75[0xc] = -(pcVar29[0xc] == -1);
                  auVar75[0xd] = -(pcVar29[0xd] == -1);
                  auVar75[0xe] = -(pcVar29[0xe] == -1);
                  auVar75[0xf] = -(pcVar29[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar75 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar75 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar75 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar75 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar75 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar75 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar75 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar75 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar75 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar75 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar75 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar75 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar75 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar75 >> 0x6f,0) & 1) != 0) || (SUB161(auVar75 >> 0x77,0) & 1) != 0
                      ) || auVar75[0xf] < '\0') {
LAB_140be60fe:
                    uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430654c0);
                  }
                  uVar37 = uVar37 + lVar25 + 0x10;
                  lVar25 = lVar25 + 0x10;
                }
                while( true ) {
                  uVar11 = 0;
                  for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  lVar24 = (uVar11 + uVar37 & plStack_118[1]) * -0x78;
                  if (plStack_108 == *(longlong **)(lVar26 + -0x78 + lVar24)) break;
                  uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                  uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
                  if (uVar52 == 0) goto LAB_140be5203;
                }
                lVar26 = lVar26 + lVar24;
                *puStack_218 = uStack_12c;
                uStack_2f8 = uStack_408;
                uStack_2f0 = uStack_400;
                uStack_308 = CONCAT44(uStack_414,uStack_41c._4_4_);
                uStack_300 = uStack_410;
                uStack_318 = CONCAT44(uStack_424,uStack_428);
                uStack_310 = CONCAT44((undefined4)uStack_41c,uStack_420);
                uStack_328 = uStack_438;
                uStack_320 = CONCAT44(uStack_42c,uStack_430);
                pfStack_338 = uStack_448;
                pfStack_330 = pfStack_440;
                auStack_348._8_8_ = pfStack_450;
                auStack_348._0_8_ = uStack_458;
                pcStack_358 = uStack_468;
                pcStack_350 = pcStack_460;
                pcVar56 = *(code **)(lVar26 + -0x60);
                uVar37 = (longlong)pcVar56 * 8;
                if (0x7ffffffffffffffc < uVar37 || (ulonglong)pcVar56 >> 0x3d != 0) {
                  uVar66 = 0;
LAB_140be611a:
                  uStack_10b = 1;
                  pdb_142dc7e2a(uVar66,uVar37);
                  goto LAB_140be6415;
                }
                uVar48 = *(undefined8 *)(lVar26 + -0x68);
                if (uVar37 == 0) {
                  pcVar28 = (code *)0x4;
                  pcStack_140 = (code *)0x0;
                  pcVar33 = pcStack_140;
                }
                else {
                  pdb_14007ee60();
                  uVar66 = 4;
                  pcVar28 = (code *)pub_1406abab0(uVar37,4);
                  pcVar33 = pcVar56;
                  if (pcVar28 == (code *)0x0) goto LAB_140be611a;
                }
                pcStack_140 = pcVar33;
                if (pcVar56 != (code *)0x0) {
                  pub_142e32760(pcVar28,uVar48,uVar37);
                }
                uVar45 = *(ulonglong *)(lVar26 + -0x48);
                uVar37 = uVar45 * 4;
                pcStack_128 = pcVar28;
                if (0x7ffffffffffffffc < uVar37 || uVar45 >> 0x3e != 0) {
                  uVar66 = 0;
LAB_140be6135:
                  pdb_142dc7e2a(uVar66,uVar37);
                  goto LAB_140be6415;
                }
                if (uVar37 == 0) {
                  pbVar46 = (byte *)0x4;
                }
                else {
                  puVar8 = *(undefined4 **)(lVar26 + -0x50);
                  pdb_14007ee60();
                  uVar66 = 4;
                  pbVar46 = pub_1406abab0(uVar37,4);
                  if (pbVar46 == (byte *)0x0) goto LAB_140be6135;
                  if (uVar45 != 0) {
                    uVar37 = uVar45 - 1;
                    if (uVar45 < uVar45 - 1) {
                      uVar37 = uVar45;
                    }
                    if (uVar37 < 8) {
                      lVar25 = 0;
                      uVar37 = uVar45;
                      puVar43 = puVar8;
                    }
                    else {
                      uVar37 = uVar37 + 1;
                      uVar35 = (ulonglong)((uint)uVar37 & 7);
                      if ((uVar37 & 7) == 0) {
                        uVar35 = 8;
                      }
                      lVar25 = uVar37 - uVar35;
                      uVar37 = uVar45 - lVar25;
                      puVar43 = puVar8 + lVar25;
                      lVar24 = 0;
                      do {
                        uVar66 = *(undefined8 *)((longlong)(puVar8 + lVar24) + 8);
                        uVar48 = *(undefined8 *)(puVar8 + lVar24 + 4);
                        uVar14 = *(undefined8 *)((longlong)(puVar8 + lVar24 + 4) + 8);
                        *(undefined8 *)(pbVar46 + lVar24 * 4) = *(undefined8 *)(puVar8 + lVar24);
                        *(undefined8 *)(pbVar46 + lVar24 * 4 + 8) = uVar66;
                        *(undefined8 *)(pbVar46 + lVar24 * 4 + 0x10) = uVar48;
                        *(undefined8 *)(pbVar46 + lVar24 * 4 + 0x10 + 8) = uVar14;
                        lVar24 = lVar24 + 8;
                      } while (lVar25 != lVar24);
                    }
                    pbVar27 = pbVar46 + lVar25 * 4;
                    do {
                      if (puVar43 == puVar8 + uVar45) break;
                      uVar7 = *puVar43;
                      puVar43 = puVar43 + 1;
                      *(undefined4 *)pbVar27 = uVar7;
                      pbVar27 = pbVar27 + 4;
                      uVar37 = uVar37 - 1;
                    } while (uVar37 != 0);
                  }
                }
                fStack_1b4 = *(float *)(lVar26 + -0x1c);
                uVar23 = *(uint *)(lVar26 + -0x38);
                iVar49 = uVar23 - 2;
                if (uVar23 < 2) {
                  iVar49 = 2;
                }
                uStack_1d0 = 2;
                if (iVar49 != 0) {
                  if (iVar49 == 1) {
                    uStack_1d0 = 3;
                  }
                  else {
                    uStack_488 = *(undefined8 *)(lVar26 + -0x24);
                    uStack_498 = *(longlong **)(lVar26 + -0x34);
                    uStack_490 = *(undefined8 *)(lVar26 + -0x2c);
                    uStack_1d0 = uVar23;
                  }
                }
                pauStack_200 = (undefined1 (*) [16])pcStack_128;
                _auStack_208 = (undefined1 (*) [16])pcStack_140;
                uStack_1f8._0_4_ = SUB84(pcVar56,0);
                uStack_1f8._4_4_ = (undefined4)((ulonglong)pcVar56 >> 0x20);
                uStack_1f0 = (ushort)uVar45;
                uStack_1ee = (undefined2)(uVar45 >> 0x10);
                uStack_1ec = (undefined4)(uVar45 >> 0x20);
                uStack_1e8 = SUB84(pbVar46,0);
                uStack_1e4 = (undefined4)((ulonglong)pbVar46 >> 0x20);
                auStack_1e0._8_4_ = *(undefined4 *)(lVar26 + -0x40);
                auStack_1e0._0_8_ = uVar45;
                uStack_1bc = (undefined4)uStack_488;
                uStack_1b8 = (undefined4)((ulonglong)uStack_488 >> 0x20);
                uStack_1cc = SUB84(uStack_498,0);
                uStack_1c8 = (undefined4)((ulonglong)uStack_498 >> 0x20);
                uStack_1c4 = (undefined4)uStack_490;
                uStack_1c0 = (undefined4)((ulonglong)uStack_490 >> 0x20);
                _auStack_1a0 = *(undefined8 *)(lVar26 + -8);
                uStack_1b0._0_4_ = (undefined4)*(undefined8 *)(lVar26 + -0x18);
                uStack_1b0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar26 + -0x18) >> 0x20);
                uStack_1a8 = (undefined4)*(undefined8 *)(lVar26 + -0x10);
                uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar26 + -0x10) >> 0x20);
                uStack_10b = 0;
                pdb_140c35220(plStack_120,plStack_108,&uStack_468,auStack_208);
                pcStack_140 = (code *)((ulonglong)pcStack_140 & 0xffffffff00000000);
                cVar21 = cStack_f8;
LAB_140be3538:
                _auStack_208 = (undefined1 (*) [16])plStack_108;
                if (plStack_118[3] == 0) goto LAB_140be5d15;
                uStack_f2 = SUB81(pcStack_140,0);
                uVar37 = pdb_1400af0a0(plStack_248,auStack_208);
                lVar26 = *plStack_118;
                bVar61 = (byte)(uVar37 >> 0x39);
                auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
                auVar67 = pshuflw(auVar67,auVar67,0);
                lVar25 = 0;
                while( true ) {
                  uVar37 = uVar37 & plStack_118[1];
                  auVar77 = *(undefined1 (*) [16])(lVar26 + uVar37);
                  auVar78[0] = -(auVar77[0] == auVar67[0]);
                  auVar78[1] = -(auVar77[1] == auVar67[1]);
                  auVar78[2] = -(auVar77[2] == auVar67[2]);
                  auVar78[3] = -(auVar77[3] == auVar67[3]);
                  auVar78[4] = -(auVar77[4] == auVar67[4]);
                  auVar78[5] = -(auVar77[5] == auVar67[5]);
                  auVar78[6] = -(auVar77[6] == auVar67[6]);
                  auVar78[7] = -(auVar77[7] == auVar67[7]);
                  auVar78[8] = -(auVar77[8] == auVar67[0]);
                  auVar78[9] = -(auVar77[9] == auVar67[1]);
                  auVar78[10] = -(auVar77[10] == auVar67[2]);
                  auVar78[0xb] = -(auVar77[0xb] == auVar67[3]);
                  auVar78[0xc] = -(auVar77[0xc] == auVar67[4]);
                  auVar78[0xd] = -(auVar77[0xd] == auVar67[5]);
                  auVar78[0xe] = -(auVar77[0xe] == auVar67[6]);
                  auVar78[0xf] = -(auVar77[0xf] == auVar67[7]);
                  uVar52 = (ushort)(SUB161(auVar78 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar78[0xf] >> 7) << 0xf;
                  uVar23 = (uint)uVar52;
                  if (uVar52 != 0) break;
LAB_140be3602:
                  auVar69[0] = -(auVar77[0] == -1);
                  auVar69[1] = -(auVar77[1] == -1);
                  auVar69[2] = -(auVar77[2] == -1);
                  auVar69[3] = -(auVar77[3] == -1);
                  auVar69[4] = -(auVar77[4] == -1);
                  auVar69[5] = -(auVar77[5] == -1);
                  auVar69[6] = -(auVar77[6] == -1);
                  auVar69[7] = -(auVar77[7] == -1);
                  auVar69[8] = -(auVar77[8] == -1);
                  auVar69[9] = -(auVar77[9] == -1);
                  auVar69[10] = -(auVar77[10] == -1);
                  auVar69[0xb] = -(auVar77[0xb] == -1);
                  auVar69[0xc] = -(auVar77[0xc] == -1);
                  auVar69[0xd] = -(auVar77[0xd] == -1);
                  auVar69[0xe] = -(auVar77[0xe] == -1);
                  auVar69[0xf] = -(auVar77[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar69 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar69 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar69 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar69 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar69 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x6f,0) & 1) != 0) || (SUB161(auVar69 >> 0x77,0) & 1) != 0
                      ) || auVar69[0xf] < '\0') {
LAB_140be5d15:
                    uStack_f2 = SUB81(pcStack_140,0);
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430654d8);
                  }
                  uVar37 = uVar37 + lVar25 + 0x10;
                  lVar25 = lVar25 + 0x10;
                }
                while( true ) {
                  uVar11 = 0;
                  for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  lVar24 = (uVar11 + uVar37 & plStack_118[1]) * -0x78;
                  uStack_5d8 = uVar90;
                  uStack_5d4 = uVar91;
                  uStack_5d0 = 0;
                  uStack_5cc = 0;
                  cStack_f8 = cVar21;
                  if (plStack_108 == *(longlong **)(lVar26 + -0x78 + lVar24)) break;
                  uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                  uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
                  if (uVar52 == 0) goto LAB_140be3602;
                }
                pcStack_128 = (code *)(lVar26 + lVar24);
                fVar92 = *(float *)(pcStack_128 + -0x40);
                pfStack_158 = (float *)0x0;
                pfStack_150 = (float *)0x4;
                pfStack_148 = (float *)0x0;
                uVar37 = *(ulonglong *)(pcStack_128 + -0x60);
                uVar45 = *(ulonglong *)(pcStack_128 + -0x48);
                uVar35 = uVar37;
                if (uVar45 < uVar37) {
                  uVar35 = uVar45;
                }
                pcStack_228 = pcStack_128 + -0x70;
                uVar47 = (uVar37 - 1) + (ulonglong)(uVar37 == 0);
                uVar45 = (uVar45 - 1) + (ulonglong)(uVar45 == 0);
                uVar37 = *(ulonglong *)(pcStack_128 + -0x50);
                if (uVar47 <= uVar45) {
                  uVar45 = uVar47;
                }
                uVar55 = 0;
                uVar59 = 0;
LAB_140be388f:
                fVar63 = 0.0;
                fVar62 = 0.0;
                while (((pfVar50 = pfStack_148, uVar47 != 0 && (uVar55 < uVar35)) &&
                       (uVar59 < uVar45))) {
                  fVar65 = *(float *)(uVar37 + 4 + uVar59 * 4);
                  pdb_140def380(auStack_208);
                  uVar47 = uVar47 - 1;
                  uVar55 = uVar55 + 1;
                  uVar59 = uVar59 + 1;
                  if ((auStack_208 != (undefined1  [4])0x1) || (_DAT_142e36f28 < (float)auStack_204)
                     ) {
LAB_140be390e:
                    fVar64 = fVar65;
                    if (fVar65 <= fVar62) {
                      fVar64 = fVar62;
                    }
                    fVar62 = (float)(~-(uint)NAN(fVar62) & (uint)fVar64 |
                                    -(uint)NAN(fVar62) & (uint)fVar65);
                  }
                  else {
                    fVar64 = pauStack_200._0_4_;
                    if (0.0 <= (float)auStack_204) {
                      if (((float)auStack_204 < 0.0) || (_DAT_142e36f28 < (float)auStack_204)) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
                      }
                      fVar62 = (float)pdb_140de9fd0();
                      if (((fVar63 != 0.0) || (fVar62 != 0.0)) || (NAN(fVar62))) {
                        if (((pfStack_148 == (float *)0x0) ||
                            (pfStack_150 + (longlong)pfStack_148 * 2 == (float *)0x8)) ||
                           (_DAT_142e3b1d8 <=
                            (fVar63 - pfStack_150[(longlong)pfStack_148 * 2 + -1]) * fVar92)) {
                          pfStack_210 = pfStack_148;
                          if (pfStack_148 == pfStack_158) {
                            pdb_142d8d7f0(&pfStack_158);
                          }
                          pfStack_150[(longlong)pfStack_210 * 2] = fVar63;
                          pfStack_150[(longlong)pfStack_210 * 2 + 1] = fVar62;
                          pfStack_148 = (float *)((longlong)pfStack_210 + 1);
                        }
                        else {
                          pfStack_150[(longlong)pfStack_148 * 2 + -1] = fVar62;
                        }
                        fVar63 = 0.0;
                        fVar62 = 0.0;
                      }
                      if (fVar64 <= _DAT_142e36f28) {
                        if (fVar64 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
                        }
                        fVar63 = (float)pdb_140de9fd0();
                        fVar62 = fVar65;
                      }
                    }
                    else if (pauStack_200._0_4_ <= _DAT_142e36f28) {
                      if (pauStack_200._0_4_ < 0.0) goto LAB_140be390e;
                      if (((fVar63 != 0.0) || (NAN(fVar63))) || ((fVar62 != 0.0 || (NAN(fVar62)))))
                      {
                        if (((pfStack_148 == (float *)0x0) ||
                            (pfStack_150 + (longlong)pfStack_148 * 2 == (float *)0x8)) ||
                           (_DAT_142e3b1d8 <=
                            (fVar63 - pfStack_150[(longlong)pfStack_148 * 2 + -1]) * fVar92)) {
                          pfStack_210 = pfStack_148;
                          if (pfStack_148 == pfStack_158) {
                            pdb_142d8d7f0(&pfStack_158);
                          }
                          pfStack_150[(longlong)pfStack_210 * 2] = fVar63;
                          pfStack_150[(longlong)pfStack_210 * 2 + 1] = fVar62;
                          pfStack_148 = (float *)((longlong)pfStack_210 + 1);
                        }
                        else {
                          pfStack_150[(longlong)pfStack_148 * 2 + -1] = fVar62;
                        }
                      }
                      if ((fVar64 < 0.0) || (_DAT_142e36f28 < fVar64)) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
                      }
                      fVar63 = (float)pdb_140de9fd0();
                      fVar62 = fVar65;
                    }
                    else if (((fVar63 != 0.0) || (NAN(fVar63))) ||
                            ((fVar62 != 0.0 || (NAN(fVar62))))) goto LAB_140be3b8f;
                  }
                }
                if (((fVar63 != 0.0) || (NAN(fVar63))) || ((fVar62 != 0.0 || (NAN(fVar62))))) {
                  if (((pfStack_148 == (float *)0x0) ||
                      (pfStack_150 + (longlong)pfStack_148 * 2 == (float *)0x8)) ||
                     (_DAT_142e3b1d8 <=
                      (fVar63 - pfStack_150[(longlong)pfStack_148 * 2 + -1]) * fVar92)) {
                    if (pfStack_148 == pfStack_158) {
                      pdb_142d8d7f0(&pfStack_158);
                    }
                    pfStack_150[(longlong)pfVar50 * 2] = fVar63;
                    pfStack_150[(longlong)pfVar50 * 2 + 1] = fVar62;
                    pfStack_148 = (float *)((longlong)pfVar50 + 1);
                  }
                  else {
                    pfStack_150[(longlong)pfStack_148 * 2 + -1] = fVar62;
                  }
                }
                if (((pfStack_148 != (float *)0x1) || (*pfStack_150 != 0.0)) || (NAN(*pfStack_150)))
                {
LAB_140be3d06:
                  *puStack_258 = uStack_164;
                  pdb_140aa2f60(uStack_260,0,plStack_108,uStack_250,uStack_2c8,&UNK_1430654f0,0x13);
                  *puStack_258 = uStack_164;
                  pdb_140c419b0(uStack_260,plStack_108,uStack_250);
                  *puStack_218 = uStack_12c;
                  pdb_140c356c0(plStack_120,plStack_108);
                  if (pfStack_148 == (float *)0x0) goto LAB_140be5559;
                  pfVar50 = (float *)0x0;
                  goto LAB_140be3dc8;
                }
                if ((pfStack_150[1] != _DAT_142e36f28) ||
                   (NAN(pfStack_150[1]) || NAN(_DAT_142e36f28))) goto LAB_140be3d06;
LAB_140be43ee:
                if (pfStack_158 != (float *)0x0) {
                  pub_1406abac0((byte *)pfStack_150,(longlong)pfStack_158 << 3,4);
                }
                pbVar27 = pbStack_170;
                pbVar46 = pbStack_240;
                if (((byte)pcStack_140 & !SBORROW8(0,lStack_3f8)) != 0) {
                  if (lStack_3f8 != 0) {
                    pub_1406abac0(pbStack_3f0,lStack_3f8 << 3,4);
                  }
                  pbVar27 = pbStack_170;
                  pbVar46 = pbStack_240;
                  if (lStack_3e0 != 0) {
                    pub_1406abac0(pbStack_3d8,lStack_3e0 << 2,4);
                    pbVar27 = pbStack_170;
                    pbVar46 = pbStack_240;
                  }
                }
                goto LAB_140be33b4;
              }
              if (lStack_3a8 != 0) {
                pub_1406abac0(pbStack_3a0,lStack_3a8 << 3,8);
              }
              plVar30 = plStack_120;
              if (plStack_120[3] == 0) {
                lVar26 = 0;
              }
              else {
                pfVar50 = (float *)&UNK_143044340;
                if (*pcStack_298 != '\0') {
                  pfVar50 = pfStack_520;
                }
                uStack_468 = (code *)CONCAT44(pfVar50[2],*pfVar50);
                uStack_f6 = 0;
                pdb_140df4540(&pcStack_358,&uStack_468);
                fVar1 = *pfStack_518;
                uStack_1f8._0_4_ = pcStack_350._0_4_;
                pauStack_200 = (undefined1 (*) [16])pcStack_358;
                *puStack_558 = uStack_2dc;
                lVar26 = *(longlong *)(lStack_2a8 + 0x30);
                uVar66 = *(undefined8 *)(lStack_2a8 + 0x40);
                if (lVar26 == *(longlong *)(lStack_2a8 + 0x20)) {
                  uStack_f6 = 0;
                  pdb_142d7e7c0(lStack_2a8 + 0x20);
                }
                fVar1 = fVar1 * _DAT_1430651ec;
                uVar86 = SUB41(fVar1,0);
                uVar87 = (undefined1)((uint)fVar1 >> 8);
                uVar88 = (undefined1)((uint)fVar1 >> 0x10);
                uVar89 = (undefined1)((uint)fVar1 >> 0x18);
                lVar25 = *(longlong *)(lStack_2a8 + 0x28);
                lVar24 = lVar26 * 0x30;
                *(undefined8 *)(lVar25 + lVar24) = 0;
                puVar38 = (undefined8 *)(lVar25 + 8 + lVar24);
                *puVar38 = _auStack_208;
                puVar38[1] = pauStack_200;
                *(undefined4 *)(lVar25 + 0x18 + lVar24) = (undefined4)uStack_1f8;
                *(float *)(lVar25 + 0x1c + lVar24) = fVar1;
                *(undefined4 *)(lVar25 + 0x20 + lVar24) = 0x41200000;
                *(float *)(lVar25 + 0x24 + lVar24) = fVar1;
                *(undefined8 *)(lVar25 + 0x28 + lVar24) = uVar66;
                pbVar46 = (byte *)(lVar26 + 1);
                *(byte **)(lStack_2a8 + 0x30) = pbVar46;
                *(longlong *)(lStack_2a8 + 0x40) = *(longlong *)(lStack_2a8 + 0x40) + 1;
                lVar26 = plVar30[3];
              }
              pauVar58 = (undefined1 (*) [16])*plVar30;
              auVar67 = *pauVar58;
              param_15 = pauVar58 + 1;
              puVar54 = (undefined *)
                        (ulonglong)
                        ~(uint)(ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar67[0xf] >> 7) << 0xf);
              plStack_120 = (longlong *)(lStack_238 + 0x20);
              iVar49 = -(uint)(CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))) ==
                              CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))));
LAB_140be5ee9:
              if (lVar26 != 0) {
                if ((short)puVar54 == 0) {
                  do {
                    auVar67 = *param_15;
                    pauVar58 = pauVar58 + -0x10;
                    param_15 = param_15 + 1;
                    uVar23 = (ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) ^ 0xffff;
                    puVar54 = (undefined *)(ulonglong)uVar23;
                  } while (uVar23 == 0);
                }
                uVar11 = (uint)puVar54;
                iVar12 = 0;
                for (uVar23 = uVar11; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
                  iVar12 = iVar12 + 1;
                }
                puVar54 = (undefined *)(ulonglong)(uVar11 - 1 & uVar11);
                lVar26 = lVar26 + -1;
                pbVar46 = *(byte **)((longlong)pauVar58 + (-0x10 - (ulonglong)(uint)(iVar12 << 4)));
                _auStack_208 = (undefined1 (*) [16])pbVar46;
                if (plStack_118[3] != 0) {
                  uStack_f6 = 0;
                  uVar37 = pdb_1400af0a0(plStack_248,auStack_208);
                  bVar61 = (byte)(uVar37 >> 0x39);
                  auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
                  auVar67 = pshuflw(auVar67,auVar67,0);
                  lVar25 = 0;
                  while( true ) {
                    uVar37 = uVar37 & plStack_118[1];
                    auVar77 = *(undefined1 (*) [16])(*plStack_118 + uVar37);
                    auVar85[0] = -(auVar77[0] == auVar67[0]);
                    auVar85[1] = -(auVar77[1] == auVar67[1]);
                    auVar85[2] = -(auVar77[2] == auVar67[2]);
                    auVar85[3] = -(auVar77[3] == auVar67[3]);
                    auVar85[4] = -(auVar77[4] == auVar67[4]);
                    auVar85[5] = -(auVar77[5] == auVar67[5]);
                    auVar85[6] = -(auVar77[6] == auVar67[6]);
                    auVar85[7] = -(auVar77[7] == auVar67[7]);
                    auVar85[8] = -(auVar77[8] == auVar67[0]);
                    auVar85[9] = -(auVar77[9] == auVar67[1]);
                    auVar85[10] = -(auVar77[10] == auVar67[2]);
                    auVar85[0xb] = -(auVar77[0xb] == auVar67[3]);
                    auVar85[0xc] = -(auVar77[0xc] == auVar67[4]);
                    auVar85[0xd] = -(auVar77[0xd] == auVar67[5]);
                    auVar85[0xe] = -(auVar77[0xe] == auVar67[6]);
                    auVar85[0xf] = -(auVar77[0xf] == auVar67[7]);
                    uVar52 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar85[0xf] >> 7) << 0xf;
                    uVar23 = (uint)uVar52;
                    while (uVar52 != 0) {
                      uVar11 = 0;
                      for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                        uVar11 = uVar11 + 1;
                      }
                      if (pbVar46 ==
                          *(byte **)(*plStack_118 + -0x78 +
                                    (uVar11 + uVar37 & plStack_118[1]) * -0x78)) {
                        *puStack_3b0 = uStack_26c;
                        lVar25 = *(longlong *)(lStack_238 + 0x30);
                        uVar66 = *(undefined8 *)(lStack_238 + 0x40);
                        if (lVar25 == *(longlong *)(lStack_238 + 0x20)) {
                          uStack_f6 = 0;
                          pdb_142d7e980(plStack_120);
                        }
                        lVar24 = *(longlong *)(lStack_238 + 0x28);
                        *(undefined8 *)(lVar24 + lVar25 * 0x10) = uVar66;
                        *(byte **)(lVar24 + 8 + lVar25 * 0x10) = pbVar46;
                        ppcVar57 = (code **)(lVar25 + 1);
                        *(code ***)(lStack_238 + 0x30) = ppcVar57;
                        *(longlong *)(lStack_238 + 0x40) = *(longlong *)(lStack_238 + 0x40) + 1;
                        goto LAB_140be5ee9;
                      }
                      uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
                      uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
                    }
                    auVar76[0] = -(auVar77[0] == (char)iVar49);
                    auVar76[1] = -(auVar77[1] == (char)((uint)iVar49 >> 8));
                    auVar76[2] = -(auVar77[2] == (char)((uint)iVar49 >> 0x10));
                    auVar76[3] = -(auVar77[3] == (char)((uint)iVar49 >> 0x18));
                    auVar76[4] = -(auVar77[4] == -1);
                    auVar76[5] = -(auVar77[5] == -1);
                    auVar76[6] = -(auVar77[6] == -1);
                    auVar76[7] = -(auVar77[7] == -1);
                    auVar76[8] = -(auVar77[8] == -1);
                    auVar76[9] = -(auVar77[9] == -1);
                    auVar76[10] = -(auVar77[10] == -1);
                    auVar76[0xb] = -(auVar77[0xb] == -1);
                    auVar76[0xc] = -(auVar77[0xc] == -1);
                    auVar76[0xd] = -(auVar77[0xd] == -1);
                    auVar76[0xe] = -(auVar77[0xe] == -1);
                    auVar76[0xf] = -(auVar77[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar76 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar76 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar76 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar76 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar76 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar76 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar76 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
                    uVar37 = uVar37 + lVar25 + 0x10;
                    lVar25 = lVar25 + 0x10;
                  }
                }
                goto LAB_140be5ee9;
              }
              if (lStack_3c0 == 0) {
                return;
              }
              plVar32 = (longlong *)pdb_140e97000();
              if ((char)plVar32[0xd] != '\x01') {
                plVar32 = (longlong *)pdb_142d8ec20(plVar32,0);
                if (plVar32 == (longlong *)0x0) break;
              }
              plVar30 = (longlong *)0x0;
              if (*plVar32 == 0) {
                *plVar32 = -1;
                plStack_120 = plVar32;
                pdb_140e95370(plVar32 + 1,uStack_3b8);
                *plStack_120 = *plStack_120 + 1;
                return;
              }
            }
            pbVar27 = (byte *)pdb_142dc8090(&UNK_143326a50);
LAB_140be616b:
            pbVar27 = (byte *)pdb_142d8ec20(pbVar27,0);
          } while (pbVar27 != (byte *)0x0);
          pdb_142dc7890(&UNK_143326860);
LAB_140be618a:
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
        }
      }
    }
  }
  return;
code_r0x000140be34a7:
  uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
  uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
  if (uVar52 == 0) goto LAB_140be34b4;
  goto LAB_140be3487;
LAB_140be3b8f:
  if (((pfStack_148 == (float *)0x0) || (pfStack_150 + (longlong)pfStack_148 * 2 == (float *)0x8))
     || (_DAT_142e3b1d8 <= (fVar63 - pfStack_150[(longlong)pfStack_148 * 2 + -1]) * fVar92)) {
    pfStack_210 = pfStack_148;
    if (pfStack_148 == pfStack_158) {
      pdb_142d8d7f0(&pfStack_158);
    }
    pfStack_150[(longlong)pfStack_210 * 2] = fVar63;
    pfStack_150[(longlong)pfStack_210 * 2 + 1] = fVar62;
    pfStack_148 = (float *)((longlong)pfStack_210 + 1);
  }
  else {
    pfStack_150[(longlong)pfStack_148 * 2 + -1] = fVar62;
  }
  goto LAB_140be388f;
  while (pfVar50 = (float *)((longlong)pfVar50 + 1), pfVar53 = pfStack_148, pfStack_148 != pfVar50)
  {
LAB_140be3dc8:
    if ((pfStack_150[(longlong)pfVar50 * 2 + 1] - pfStack_150[(longlong)pfVar50 * 2]) * fVar92 <
        fVar17) {
      pfVar42 = (float *)((longlong)pfVar50 + 1);
      pfVar53 = pfVar50;
      if (pfVar42 < pfStack_148) {
        if (((int)pfStack_148 + (int)pfVar50 & 1U) == 0) {
          if (fVar17 <= (pfStack_150[(longlong)pfVar50 * 2 + 3] -
                        pfStack_150[(longlong)pfVar50 * 2 + 2]) * fVar92) {
            *(undefined8 *)(pfStack_150 + (longlong)pfVar50 * 2) =
                 *(undefined8 *)(pfStack_150 + (longlong)pfVar50 * 2 + 2);
            pfVar53 = (float *)((longlong)pfVar50 + 1);
          }
          pfVar42 = (float *)((longlong)pfVar50 + 2);
        }
        if ((float *)((longlong)pfStack_148 + -2) != pfVar50) {
          do {
            if (fVar17 <= (pfStack_150[(longlong)pfVar42 * 2 + 1] -
                          pfStack_150[(longlong)pfVar42 * 2]) * fVar92) {
              *(undefined8 *)(pfStack_150 + (longlong)pfVar53 * 2) =
                   *(undefined8 *)(pfStack_150 + (longlong)pfVar42 * 2);
              pfVar53 = (float *)((longlong)pfVar53 + 1);
            }
            if (fVar17 <= (pfStack_150[(longlong)pfVar42 * 2 + 3] -
                          pfStack_150[(longlong)pfVar42 * 2 + 2]) * fVar92) {
              *(undefined8 *)(pfStack_150 + (longlong)pfVar53 * 2) =
                   *(undefined8 *)(pfStack_150 + (longlong)pfVar42 * 2 + 2);
              pfVar53 = (float *)((longlong)pfVar53 + 1);
            }
            pfVar42 = (float *)((longlong)pfVar42 + 2);
          } while (pfStack_148 != pfVar42);
        }
      }
      break;
    }
  }
  pfStack_148 = pfVar53;
  if (pfStack_148 == (float *)0x0) goto LAB_140be5559;
  if (pfStack_148 == (float *)0x1) {
    pcVar29 = "";
    if (*pcStack_298 != '\0') {
      pcVar29 = pcStack_298 + 4;
    }
    pauStack_200._0_4_ = (float)*(undefined4 *)(pcVar29 + 8);
    _auStack_208 = (undefined1 (*) [16])*(undefined8 *)pcVar29;
    *puStack_368 = uStack_264;
    lVar26 = *(longlong *)(lStack_290 + 0x30);
    uVar66 = *(undefined8 *)(lStack_290 + 0x40);
    if (lVar26 == *(longlong *)(lStack_290 + 0x20)) {
      pdb_142d7e6e0(lStack_360,auStack_208);
    }
    lVar25 = *(longlong *)(lStack_290 + 0x28);
    lVar24 = lVar26 * 0x20;
    *(undefined8 *)(lVar25 + lVar24) = uVar66;
    *(longlong **)(lVar25 + 8 + lVar24) = plStack_108;
    *(undefined1 (**) [16])(lVar25 + 0x10 + lVar24) = _auStack_208;
    *(float *)(lVar25 + 0x18 + lVar24) = pauStack_200._0_4_;
    *(undefined2 *)(lVar25 + 0x1c + lVar24) = 0x202;
    *(longlong *)(lStack_290 + 0x40) = *(longlong *)(lStack_290 + 0x40) + 1;
    *(longlong *)(lStack_290 + 0x30) = lVar26 + 1;
    if (uStack_160 < 2) {
      lVar26 = pdb_140b54cf0(plStack_178,plStack_108,&uStack_4c8);
      if (lVar26 != 0) {
        bStack_f9 = bStack_f9 |
                    (*(char *)(lVar26 + 0x3d) != '\0' && *(float *)(lVar26 + 0x30) <= _DAT_142e3b1d8
                    );
      }
    }
    if (pfStack_148 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143065508);
    }
    pdb_1419a77d0(&pcStack_358,pcStack_228,*pfStack_150,pfStack_150[1],&UNK_143065520);
    if (((ulonglong)auStack_348._0_8_ < 2) || ((float)uStack_328 <= 0.0)) {
      uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143065538,0x2b,&UNK_143065568);
    }
    *puStack_218 = uStack_12c;
    if (pfStack_148 == (float *)0x0) {
      uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143065580);
    }
    uStack_f4 = 1;
    pdb_140c34c40(plStack_120,plStack_108,*pfStack_150,pfStack_150[1]);
    _auStack_208 = (undefined1 (*) [16])plStack_108;
    if (plStack_118[3] == 0) goto LAB_140be6146;
    uStack_f4 = 1;
    uVar37 = pdb_1400af0a0(plStack_248,auStack_208);
    lVar26 = *plStack_118;
    bVar61 = (byte)(uVar37 >> 0x39);
    auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
    auVar67 = pshuflw(auVar67,auVar67,0);
    lVar25 = 0;
    while( true ) {
      uVar37 = uVar37 & plStack_118[1];
      pcVar29 = (char *)(lVar26 + uVar37);
      auVar82[0] = -(*pcVar29 == auVar67[0]);
      auVar82[1] = -(pcVar29[1] == auVar67[1]);
      auVar82[2] = -(pcVar29[2] == auVar67[2]);
      auVar82[3] = -(pcVar29[3] == auVar67[3]);
      auVar82[4] = -(pcVar29[4] == auVar67[4]);
      auVar82[5] = -(pcVar29[5] == auVar67[5]);
      auVar82[6] = -(pcVar29[6] == auVar67[6]);
      auVar82[7] = -(pcVar29[7] == auVar67[7]);
      auVar82[8] = -(pcVar29[8] == auVar67[0]);
      auVar82[9] = -(pcVar29[9] == auVar67[1]);
      auVar82[10] = -(pcVar29[10] == auVar67[2]);
      auVar82[0xb] = -(pcVar29[0xb] == auVar67[3]);
      auVar82[0xc] = -(pcVar29[0xc] == auVar67[4]);
      auVar82[0xd] = -(pcVar29[0xd] == auVar67[5]);
      auVar82[0xe] = -(pcVar29[0xe] == auVar67[6]);
      auVar82[0xf] = -(pcVar29[0xf] == auVar67[7]);
      uVar52 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf;
      uVar23 = (uint)uVar52;
      if (uVar52 != 0) break;
LAB_140be46e2:
      auVar73[0] = -(*pcVar29 == -1);
      auVar73[1] = -(pcVar29[1] == -1);
      auVar73[2] = -(pcVar29[2] == -1);
      auVar73[3] = -(pcVar29[3] == -1);
      auVar73[4] = -(pcVar29[4] == -1);
      auVar73[5] = -(pcVar29[5] == -1);
      auVar73[6] = -(pcVar29[6] == -1);
      auVar73[7] = -(pcVar29[7] == -1);
      auVar73[8] = -(pcVar29[8] == -1);
      auVar73[9] = -(pcVar29[9] == -1);
      auVar73[10] = -(pcVar29[10] == -1);
      auVar73[0xb] = -(pcVar29[0xb] == -1);
      auVar73[0xc] = -(pcVar29[0xc] == -1);
      auVar73[0xd] = -(pcVar29[0xd] == -1);
      auVar73[0xe] = -(pcVar29[0xe] == -1);
      auVar73[0xf] = -(pcVar29[0xf] == -1);
      if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar73 >> 0x17,0) & 1) != 0) || (SUB161(auVar73 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar73 >> 0x27,0) & 1) != 0) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar73 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar73 >> 0x3f,0) & 1) != 0) || (SUB161(auVar73 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar73 >> 0x4f,0) & 1) != 0) || (SUB161(auVar73 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar73 >> 0x5f,0) & 1) != 0) || (SUB161(auVar73 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar73 >> 0x6f,0) & 1) != 0) || (SUB161(auVar73 >> 0x77,0) & 1) != 0) ||
          auVar73[0xf] < '\0') {
LAB_140be6146:
        uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143065598);
      }
      uVar37 = uVar37 + lVar25 + 0x10;
      lVar25 = lVar25 + 0x10;
    }
    while( true ) {
      uVar11 = 0;
      for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      lVar24 = (uVar11 + uVar37 & plStack_118[1]) * -0x78;
      if (plStack_108 == *(longlong **)(lVar26 + -0x78 + lVar24)) break;
      uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
      uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
      if (uVar52 == 0) goto LAB_140be46e2;
    }
    fVar92 = *(float *)(lVar26 + lVar24 + -0x1c);
    uStack_f4 = 1;
    fVar63 = (float)pdb_140de8220();
    fVar65 = 0.0;
    fVar62 = 0.0;
    if (0.0 <= fVar63) {
      fVar62 = fVar63;
    }
    fVar63 = _DAT_142e36f28;
    if (fVar62 <= _DAT_142e36f28) {
      fVar63 = fVar62;
    }
    fVar62 = (_DAT_142e36f28 - fVar63) * _DAT_142f95160;
    fVar63 = fVar63 * _DAT_143008730;
    if (uStack_160 < 2) {
      uStack_f4 = 1;
      lVar26 = pdb_140b54cf0(plStack_178,plStack_108,&uStack_4c8);
      if (lVar26 != 0) {
        uVar23 = _DAT_142e3c604;
        if (*(char *)(lVar26 + 0x3d) == '\0') {
          uVar23 = 0;
        }
        fVar65 = (float)(-(uint)(*(float *)(lVar26 + 0x30) <= _DAT_142e3b1d8) & uVar23);
      }
    }
    fVar63 = fVar63 + fVar62;
    fVar62 = fVar92;
    if (fVar63 <= fVar92) {
      fVar62 = fVar63;
    }
    uStack_1e8 = SUB84(pfStack_338,0);
    uStack_1e4 = (undefined4)((ulonglong)pfStack_338 >> 0x20);
    stack0xfffffffffffffe28 = uStack_328;
    auStack_1e0._0_8_ = pfStack_330;
    uStack_1f8._0_4_ = auStack_348._0_4_;
    uStack_1f8._4_4_ = auStack_348._4_4_;
    uStack_1f0 = auStack_348._8_2_;
    uStack_1ee = auStack_348._10_2_;
    uStack_1ec = auStack_348._12_4_;
    bVar60 = DAT_143cb2d0c == '\0';
    pauStack_200 = (undefined1 (*) [16])pcStack_350;
    _auStack_208 = (undefined1 (*) [16])pcStack_358;
    cVar5 = pcStack_128[-2];
    fStack_1b4 = (float)(-(uint)NAN(fVar63) & (uint)fVar92 | ~-(uint)NAN(fVar63) & (uint)fVar62) +
                 fVar65;
    uStack_1a4 = *(undefined4 *)(pcStack_128 + -0xc);
    uVar15 = *(undefined3 *)(pcStack_128 + -8);
    uVar6 = *(undefined2 *)(pcStack_128 + -4);
    uStack_1d0 = 2;
    uStack_1b0._0_4_ = 0;
    uVar66 = *(undefined8 *)(pcStack_128 + -0x14);
    *puStack_230 = uStack_15c;
    uStack_1b0._4_4_ = (undefined4)uVar66;
    uStack_1a8 = (undefined4)((ulonglong)uVar66 >> 0x20);
    _auStack_1a0 = CONCAT13(bStack_f9,uVar15);
    _auStack_1a0 = CONCAT24(uVar6,_auStack_1a0);
    _auStack_1a0 = CONCAT16(cVar5 == (code)0x1,_auStack_1a0);
    _auStack_1a0 = CONCAT17(bVar60 * '\x05',_auStack_1a0);
    uStack_f4 = 0;
    pdb_14092f410(plStack_118,plStack_108,auStack_208);
LAB_140be5b3a:
    goto LAB_140be5b41;
  }
  pauStack_200 = (undefined1 (*) [16])(pfStack_150 + (longlong)pfStack_148 * 2);
  _auStack_208 = (undefined1 (*) [16])pfStack_150;
  uStack_1f8._0_4_ = SUB84(pcStack_228,0);
  uStack_1f8._4_4_ = (undefined4)((ulonglong)pcStack_228 >> 0x20);
  pdb_141603010(&lStack_4b0);
  cVar5 = pcStack_128[-6];
  if (cVar5 == (code)0x0) {
    if (pcStack_128[-7] == (code)0x0) {
      _auStack_208 = (undefined1 (*) [16])plStack_108;
      plVar30 = plStack_378;
      if (plStack_388[3] != 0) {
        uStack_f5 = 1;
        uVar37 = pdb_1400af0a0(plStack_510,auStack_208);
        bVar61 = (byte)(uVar37 >> 0x39);
        auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
        auVar67 = pshuflw(auVar67,auVar67,0);
        lVar26 = 0;
        while( true ) {
          uVar37 = uVar37 & plStack_388[1];
          auVar77 = *(undefined1 (*) [16])(*plStack_388 + uVar37);
          auVar81[0] = -(auVar77[0] == auVar67[0]);
          auVar81[1] = -(auVar77[1] == auVar67[1]);
          auVar81[2] = -(auVar77[2] == auVar67[2]);
          auVar81[3] = -(auVar77[3] == auVar67[3]);
          auVar81[4] = -(auVar77[4] == auVar67[4]);
          auVar81[5] = -(auVar77[5] == auVar67[5]);
          auVar81[6] = -(auVar77[6] == auVar67[6]);
          auVar81[7] = -(auVar77[7] == auVar67[7]);
          auVar81[8] = -(auVar77[8] == auVar67[0]);
          auVar81[9] = -(auVar77[9] == auVar67[1]);
          auVar81[10] = -(auVar77[10] == auVar67[2]);
          auVar81[0xb] = -(auVar77[0xb] == auVar67[3]);
          auVar81[0xc] = -(auVar77[0xc] == auVar67[4]);
          auVar81[0xd] = -(auVar77[0xd] == auVar67[5]);
          auVar81[0xe] = -(auVar77[0xe] == auVar67[6]);
          auVar81[0xf] = -(auVar77[0xf] == auVar67[7]);
          uVar52 = (ushort)(SUB161(auVar81 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar81[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar11 = 0;
            for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            lVar25 = *plStack_388 + (uVar11 + uVar37 & plStack_388[1]) * -0x10;
            if (plStack_108 == *(longlong **)(lVar25 + -0x10)) goto LAB_140be40ed;
            uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
          }
          auVar72[0] = -(auVar77[0] == -1);
          auVar72[1] = -(auVar77[1] == -1);
          auVar72[2] = -(auVar77[2] == -1);
          auVar72[3] = -(auVar77[3] == -1);
          auVar72[4] = -(auVar77[4] == -1);
          auVar72[5] = -(auVar77[5] == -1);
          auVar72[6] = -(auVar77[6] == -1);
          auVar72[7] = -(auVar77[7] == -1);
          auVar72[8] = -(auVar77[8] == -1);
          auVar72[9] = -(auVar77[9] == -1);
          auVar72[10] = -(auVar77[10] == -1);
          auVar72[0xb] = -(auVar77[0xb] == -1);
          auVar72[0xc] = -(auVar77[0xc] == -1);
          auVar72[0xd] = -(auVar77[0xd] == -1);
          auVar72[0xe] = -(auVar77[0xe] == -1);
          auVar72[0xf] = -(auVar77[0xf] == -1);
          plVar30 = plStack_378;
          if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x2f,0) & 1) != 0) || (SUB161(auVar72 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x47,0) & 1) != 0) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
          uVar37 = uVar37 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
    }
    else {
      _auStack_208 = (undefined1 (*) [16])plStack_108;
      plVar30 = plStack_370;
      if (plStack_380[3] != 0) {
        uStack_f5 = 1;
        uVar37 = pdb_1400af0a0(plStack_508,auStack_208);
        bVar61 = (byte)(uVar37 >> 0x39);
        auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
        auVar67 = pshuflw(auVar67,auVar67,0);
        lVar26 = 0;
        while( true ) {
          uVar37 = uVar37 & plStack_380[1];
          auVar77 = *(undefined1 (*) [16])(*plStack_380 + uVar37);
          auVar80[0] = -(auVar77[0] == auVar67[0]);
          auVar80[1] = -(auVar77[1] == auVar67[1]);
          auVar80[2] = -(auVar77[2] == auVar67[2]);
          auVar80[3] = -(auVar77[3] == auVar67[3]);
          auVar80[4] = -(auVar77[4] == auVar67[4]);
          auVar80[5] = -(auVar77[5] == auVar67[5]);
          auVar80[6] = -(auVar77[6] == auVar67[6]);
          auVar80[7] = -(auVar77[7] == auVar67[7]);
          auVar80[8] = -(auVar77[8] == auVar67[0]);
          auVar80[9] = -(auVar77[9] == auVar67[1]);
          auVar80[10] = -(auVar77[10] == auVar67[2]);
          auVar80[0xb] = -(auVar77[0xb] == auVar67[3]);
          auVar80[0xc] = -(auVar77[0xc] == auVar67[4]);
          auVar80[0xd] = -(auVar77[0xd] == auVar67[5]);
          auVar80[0xe] = -(auVar77[0xe] == auVar67[6]);
          auVar80[0xf] = -(auVar77[0xf] == auVar67[7]);
          uVar52 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar80[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar11 = 0;
            for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            lVar25 = *plStack_380 + (uVar11 + uVar37 & plStack_380[1]) * -0x10;
            if (plStack_108 == *(longlong **)(lVar25 + -0x10)) goto LAB_140be40ed;
            uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
          }
          auVar71[0] = -(auVar77[0] == -1);
          auVar71[1] = -(auVar77[1] == -1);
          auVar71[2] = -(auVar77[2] == -1);
          auVar71[3] = -(auVar77[3] == -1);
          auVar71[4] = -(auVar77[4] == -1);
          auVar71[5] = -(auVar77[5] == -1);
          auVar71[6] = -(auVar77[6] == -1);
          auVar71[7] = -(auVar77[7] == -1);
          auVar71[8] = -(auVar77[8] == -1);
          auVar71[9] = -(auVar77[9] == -1);
          auVar71[10] = -(auVar77[10] == -1);
          auVar71[0xb] = -(auVar77[0xb] == -1);
          auVar71[0xc] = -(auVar77[0xc] == -1);
          auVar71[0xd] = -(auVar77[0xd] == -1);
          auVar71[0xe] = -(auVar77[0xe] == -1);
          auVar71[0xf] = -(auVar77[0xf] == -1);
          plVar30 = plStack_370;
          if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x2f,0) & 1) != 0) || (SUB161(auVar71 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
          uVar37 = uVar37 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
    }
  }
  else {
    _auStack_208 = (undefined1 (*) [16])plStack_108;
    plVar30 = plStack_390;
    if (plStack_398[3] != 0) {
      uStack_f5 = 1;
      uVar37 = pdb_1400af0a0(plStack_528,auStack_208);
      bVar61 = (byte)(uVar37 >> 0x39);
      auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
      auVar67 = pshuflw(auVar67,auVar67,0);
      lVar26 = 0;
      while( true ) {
        uVar37 = uVar37 & plStack_398[1];
        auVar77 = *(undefined1 (*) [16])(*plStack_398 + uVar37);
        auVar79[0] = -(auVar77[0] == auVar67[0]);
        auVar79[1] = -(auVar77[1] == auVar67[1]);
        auVar79[2] = -(auVar77[2] == auVar67[2]);
        auVar79[3] = -(auVar77[3] == auVar67[3]);
        auVar79[4] = -(auVar77[4] == auVar67[4]);
        auVar79[5] = -(auVar77[5] == auVar67[5]);
        auVar79[6] = -(auVar77[6] == auVar67[6]);
        auVar79[7] = -(auVar77[7] == auVar67[7]);
        auVar79[8] = -(auVar77[8] == auVar67[0]);
        auVar79[9] = -(auVar77[9] == auVar67[1]);
        auVar79[10] = -(auVar77[10] == auVar67[2]);
        auVar79[0xb] = -(auVar77[0xb] == auVar67[3]);
        auVar79[0xc] = -(auVar77[0xc] == auVar67[4]);
        auVar79[0xd] = -(auVar77[0xd] == auVar67[5]);
        auVar79[0xe] = -(auVar77[0xe] == auVar67[6]);
        auVar79[0xf] = -(auVar77[0xf] == auVar67[7]);
        uVar52 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe | (ushort)(auVar79[0xf] >> 7) << 0xf
        ;
        uVar23 = (uint)uVar52;
        while (uVar52 != 0) {
          uVar11 = 0;
          for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar25 = *plStack_398 + (uVar11 + uVar37 & plStack_398[1]) * -0x10;
          if (plStack_108 == *(longlong **)(lVar25 + -0x10)) goto LAB_140be40ed;
          uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
          uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
        }
        auVar70[0] = -(auVar77[0] == -1);
        auVar70[1] = -(auVar77[1] == -1);
        auVar70[2] = -(auVar77[2] == -1);
        auVar70[3] = -(auVar77[3] == -1);
        auVar70[4] = -(auVar77[4] == -1);
        auVar70[5] = -(auVar77[5] == -1);
        auVar70[6] = -(auVar77[6] == -1);
        auVar70[7] = -(auVar77[7] == -1);
        auVar70[8] = -(auVar77[8] == -1);
        auVar70[9] = -(auVar77[9] == -1);
        auVar70[10] = -(auVar77[10] == -1);
        auVar70[0xb] = -(auVar77[0xb] == -1);
        auVar70[0xc] = -(auVar77[0xc] == -1);
        auVar70[0xd] = -(auVar77[0xd] == -1);
        auVar70[0xe] = -(auVar77[0xe] == -1);
        auVar70[0xf] = -(auVar77[0xf] == -1);
        plVar30 = plStack_390;
        if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 || (SUB161(auVar70 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x1f,0) & 1) != 0) || (SUB161(auVar70 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x37,0) & 1) != 0) || (SUB161(auVar70 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x47,0) & 1) != 0) || (SUB161(auVar70 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar70 >> 0x57,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
        uVar37 = uVar37 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
  }
LAB_140be41b7:
  lVar26 = *plVar30;
  fVar92 = *(float *)(pcStack_128 + -0x1c);
  if (uStack_160 < 2) {
    uStack_f5 = 1;
    lVar25 = pdb_140b54cf0(plStack_178,plStack_108,&uStack_4c8);
    if (lVar25 == 0) {
      fVar62 = 0.0;
    }
    else {
      uVar23 = _DAT_142e3c604;
      if (*(char *)(lVar25 + 0x3d) == '\0') {
        uVar23 = 0;
      }
      fVar62 = (float)(-(uint)(*(float *)(lVar25 + 0x30) <= _DAT_142e3b1d8) & uVar23);
    }
    uVar90 = *(undefined4 *)(pcStack_128 + -0x14);
    uStack_160 = CONCAT31(uStack_160._1_3_,pcStack_128[-8]);
    uVar23 = *(uint *)(pcStack_128 + -0x38);
    uStack_f5 = 1;
    lVar25 = pdb_140b54cf0(plStack_178,plStack_108,&uStack_4c8);
    fVar92 = fVar92 + fVar62;
    if (lVar25 != 0) {
      bStack_f9 = bStack_f9 |
                  (*(char *)(lVar25 + 0x3d) != '\0' && *(float *)(lVar25 + 0x30) <= _DAT_142e3b1d8);
    }
  }
  else {
    fVar92 = fVar92 + 0.0;
    uVar90 = *(undefined4 *)(pcStack_128 + -0x14);
    uStack_160 = CONCAT31(uStack_160._1_3_,pcStack_128[-8]);
    uVar23 = *(uint *)(pcStack_128 + -0x38);
  }
  lVar25 = lStack_4a0;
  uVar66 = uStack_560;
  if (0x20000 < (ulonglong)(plStack_118[3] + lStack_4a0)) {
    if (1 < *_DAT_143ca8e90) {
      _auStack_208 = ZEXT816(0x1430655eb) << 0x40;
      uStack_1f8._0_4_ = 0x30;
      uStack_1f8._4_4_ = 0;
      uStack_1f0 = 0;
      uStack_1ee = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0x4306542e;
      uStack_1e4 = 1;
      stack0xfffffffffffffe28 = 2;
      auStack_1e0._0_8_ = 0x3a;
      uStack_1d0 = 0x430655eb;
      uStack_1cc = 1;
      uStack_1c8 = 0x30;
      uStack_1c4 = 0;
      uStack_1c0 = 1;
      uStack_1bc = 0x1c2;
      uStack_1b8 = 0x430655b0;
      fStack_1b4 = 1.4013e-45;
      uStack_1b0._0_4_ = 0x77;
      uStack_1b0._4_4_ = 0;
      uStack_f5 = 1;
      pdb_140f332f0(&uStack_133,auStack_208);
    }
    pcVar56 = pcStack_4a8;
    if (lVar25 != 0) {
      pcVar33 = pcStack_4a8 + 0x20;
      do {
        if (*(ulonglong *)(pcVar33 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pcVar33 + -0x18),*(ulonglong *)(pcVar33 + -0x20) << 3,4);
        }
        if (*(ulonglong *)(pcVar33 + -8) != 0) {
          pub_1406abac0(*(byte **)pcVar33,*(ulonglong *)(pcVar33 + -8) << 2,4);
        }
        pcVar33 = pcVar33 + 0x38;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    if (lStack_4b0 != 0) {
      pub_1406abac0((byte *)pcVar56,lStack_4b0 * 0x38,8);
    }
    goto LAB_140be43ee;
  }
  lStack_288 = 0;
  puStack_280 = (undefined8 *)0x8;
  lStack_278 = 0;
  pcStack_228 = pcStack_4a8 + lStack_4a0 * 0x38;
  pfStack_330 = pfStack_150 + (longlong)pfStack_148 * 2;
  uStack_328 = 0;
  uStack_320 = 0;
  pcStack_358 = pcStack_4a8;
  lStack_4d8 = lStack_4b0;
  auStack_348._8_8_ = pcStack_228;
  auStack_348._0_8_ = lStack_4b0;
  pfStack_338 = pfStack_150;
  bStack_12f = 1 < uVar23 & bStack_f9;
  bStack_12e = (char)uStack_2a0 == '\x01';
  pcVar56 = pcStack_4a8 + 0x58;
  pcStack_4d0 = pcStack_4a8;
  pcVar33 = pcStack_4a8;
  pfVar50 = pfStack_150;
  uVar37 = lStack_4a0 * 0x38;
  uStack_21c = (int)lVar26;
  pfStack_210 = pfStack_330;
  uStack_12d = cVar5;
  do {
    uVar37 = uVar37 - 0x38;
    if (pcVar33 == pcStack_228) {
LAB_140be584d:
      if (lStack_4d8 != 0) {
        pub_1406abac0((byte *)pcStack_4d0,lStack_4d8 * 0x38,8);
      }
      *puStack_230 = uStack_15c;
      uStack_10a = 1;
      pdb_140b0e830(auStack_208,plStack_118,plStack_108);
      if (SBORROW8(0,(longlong)_auStack_208)) {
        uStack_10a = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143065620);
      }
      uStack_2f8 = CONCAT44(uStack_1a4,uStack_1a8);
      uStack_2f0 = _auStack_1a0;
      uStack_308 = CONCAT44(fStack_1b4,uStack_1b8);
      uStack_300 = CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
      uStack_318 = CONCAT44(uStack_1c4,uStack_1c8);
      uStack_310 = CONCAT44(uStack_1bc,uStack_1c0);
      auStack_348._4_4_ = uStack_1f8._4_4_;
      auStack_348._0_4_ = (undefined4)uStack_1f8;
      auStack_348._8_2_ = uStack_1f0;
      auStack_348._10_2_ = uStack_1ee;
      auStack_348._12_4_ = uStack_1ec;
      pfStack_338 = (float *)CONCAT44(uStack_1e4,uStack_1e8);
      uStack_328 = auStack_1e0._8_8_;
      uStack_320 = CONCAT44(uStack_1cc,uStack_1d0);
      pfStack_330 = (float *)auStack_1e0._0_8_;
      pcStack_358 = (code *)_auStack_208;
      pcStack_350 = (code *)pauStack_200;
      *puStack_218 = uStack_12c;
      uStack_f7 = 1;
      pdb_140c34f30(plStack_120,plStack_108,puStack_280,lStack_278);
      *puStack_258 = uStack_164;
      uStack_f7 = 1;
      pdb_140aa2f60(uStack_260,0,plStack_108,uStack_250,uStack_2c8,&UNK_143065638,0xc);
      *puStack_258 = uStack_164;
      uStack_f7 = 1;
      pdb_140c419b0(uStack_260,plStack_108,uStack_250);
      if (lStack_278 == 0) {
        uStack_f7 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143065648);
      }
      uVar66 = *puStack_280;
      pauVar31 = (undefined1 (*) [12])&UNK_143044340;
      if (*pcStack_298 != '\0') {
        pauVar31 = (undefined1 (*) [12])(pcStack_298 + 4);
      }
      auVar16 = *pauVar31;
      _auStack_208 = auVar16;
      *puStack_368 = uStack_264;
      lVar26 = *(longlong *)(lStack_290 + 0x30);
      uVar48 = *(undefined8 *)(lStack_290 + 0x40);
      if (lVar26 == *(longlong *)(lStack_290 + 0x20)) {
        uStack_f7 = 1;
        pdb_142d7e6e0(lStack_360);
        auVar16 = _auStack_208;
      }
      _auStack_208 = auVar16;
      lVar25 = *(longlong *)(lStack_290 + 0x28);
      lVar24 = lVar26 * 0x20;
      *(undefined8 *)(lVar25 + lVar24) = uVar48;
      *(undefined8 *)(lVar25 + 8 + lVar24) = uVar66;
      *(undefined1 (**) [16])(lVar25 + 0x10 + lVar24) = _auStack_208;
      *(float *)(lVar25 + 0x18 + lVar24) = pauStack_200._0_4_;
      *(undefined2 *)(lVar25 + 0x1c + lVar24) = 0x203;
      *(longlong *)(lStack_290 + 0x30) = lVar26 + 1;
      *(longlong *)(lStack_290 + 0x40) = *(longlong *)(lStack_290 + 0x40) + 1;
      *puStack_538 = uStack_2cc;
      uStack_1f8._0_4_ = (undefined4)lStack_278;
      uStack_1f8._4_4_ = (undefined4)((ulonglong)lStack_278 >> 0x20);
      pauStack_200 = (undefined1 (*) [16])puStack_280;
      _auStack_208 = (undefined1 (*) [16])lStack_288;
      uStack_f7 = 0;
      pdb_140c3bb80(uStack_250,plStack_108,auStack_208,&pcStack_358);
      if (pcStack_358 != (code *)0x0) {
        pub_1406abac0((byte *)pcStack_350,(longlong)pcStack_358 << 3,4);
      }
      if (auStack_348._8_8_ != 0) {
        pub_1406abac0((byte *)pfStack_338,auStack_348._8_8_ << 2,4);
      }
      goto LAB_140be5b3a;
    }
    pcVar28 = pcVar33 + 0x38;
    pcVar10 = *(code **)pcVar33;
    pcStack_350 = pcVar28;
    if (SBORROW8(0,(longlong)pcVar10)) {
LAB_140be57e5:
      if (pcStack_228 != pcVar28) {
        uVar37 = uVar37 / 0x38;
        do {
          if (*(ulonglong *)(pcVar56 + -0x20) != 0) {
            pub_1406abac0(*(byte **)(pcVar56 + -0x18),*(ulonglong *)(pcVar56 + -0x20) << 3,4);
          }
          if (*(ulonglong *)(pcVar56 + -8) != 0) {
            pub_1406abac0(*(byte **)pcVar56,*(ulonglong *)(pcVar56 + -8) << 2,4);
          }
          pcVar56 = pcVar56 + 0x38;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
      goto LAB_140be584d;
    }
    auVar67 = *(undefined1 (*) [16])(pcVar33 + 0x18);
    _auStack_1e0 = *(undefined1 (*) [16])(pcVar33 + 0x28);
    uStack_1f0 = auVar67._0_2_;
    uStack_1ee = auVar67._2_2_;
    uStack_1ec = auVar67._4_4_;
    uStack_1e8 = auVar67._8_4_;
    uStack_1e4 = auVar67._12_4_;
    uStack_1f8._0_4_ = (undefined4)*(ulonglong *)(pcVar33 + 0x10);
    uStack_1f8._4_4_ = (undefined4)(*(ulonglong *)(pcVar33 + 0x10) >> 0x20);
    pauStack_200 = (undefined1 (*) [16])*(ulonglong *)(pcVar33 + 8);
    _auStack_208 = (undefined1 (*) [16])pcVar10;
    if (pfVar50 == pfStack_210) {
      pdb_14049c2a0(auStack_208);
      goto LAB_140be57e5;
    }
    pfVar53 = pfVar50 + 2;
    pcStack_460 = *(code **)(pcVar33 + 8);
    uStack_458 = *(code **)(pcVar33 + 0x10);
    pfStack_450 = *(float **)(pcVar33 + 0x18);
    uStack_448 = *(float **)(pcVar33 + 0x20);
    pfStack_440 = *(float **)(pcVar33 + 0x28);
    uStack_438 = *(ulonglong *)(pcVar33 + 0x30);
    uStack_468 = pcVar10;
    pfStack_338 = pfVar53;
    if ((uStack_458 < (code *)0x2) || ((float)uStack_438 <= 0.0)) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143065660,0x27,&UNK_143065688);
    }
    uVar48 = *(undefined8 *)pfVar50;
    fVar62 = fVar92;
    uStack_2a0 = uVar37;
    pcStack_128 = pcVar28;
    if (bStack_12f != 0) {
      pcVar33 = pcStack_460 + (longlong)uStack_458 * 8;
      pcVar28 = pcStack_460;
      fVar63 = _DAT_142f61034;
      while (pcVar28 != pcVar33) {
        uStack_f1 = 1;
        fVar64 = (float)pdb_1419c1ac0(uVar66);
        pcVar28 = pcVar28 + 8;
        fVar65 = fVar64;
        if (fVar64 <= fVar63) {
          fVar65 = fVar63;
        }
        fVar63 = (float)(~-(uint)NAN(fVar63) & (uint)fVar65 | -(uint)NAN(fVar63) & (uint)fVar64);
      }
      _auStack_208 = (undefined1 (*) [16])plStack_108;
      if (plStack_178[3] != 0) {
        uStack_f1 = 1;
        uVar37 = pdb_1400af0a0(plStack_500,auStack_208);
        lVar26 = *plStack_178;
        bVar61 = (byte)(uVar37 >> 0x39);
        auVar67 = ZEXT216(CONCAT11(bVar61,bVar61));
        auVar67 = pshuflw(auVar67,auVar67,0);
        lVar25 = 0;
        while( true ) {
          uVar37 = uVar37 & plStack_178[1];
          auVar77 = *(undefined1 (*) [16])(lVar26 + uVar37);
          auVar83[0] = -(auVar77[0] == auVar67[0]);
          auVar83[1] = -(auVar77[1] == auVar67[1]);
          auVar83[2] = -(auVar77[2] == auVar67[2]);
          auVar83[3] = -(auVar77[3] == auVar67[3]);
          auVar83[4] = -(auVar77[4] == auVar67[4]);
          auVar83[5] = -(auVar77[5] == auVar67[5]);
          auVar83[6] = -(auVar77[6] == auVar67[6]);
          auVar83[7] = -(auVar77[7] == auVar67[7]);
          auVar83[8] = -(auVar77[8] == auVar67[0]);
          auVar83[9] = -(auVar77[9] == auVar67[1]);
          auVar83[10] = -(auVar77[10] == auVar67[2]);
          auVar83[0xb] = -(auVar77[0xb] == auVar67[3]);
          auVar83[0xc] = -(auVar77[0xc] == auVar67[4]);
          auVar83[0xd] = -(auVar77[0xd] == auVar67[5]);
          auVar83[0xe] = -(auVar77[0xe] == auVar67[6]);
          auVar83[0xf] = -(auVar77[0xf] == auVar67[7]);
          uVar52 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar83[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar11 = 0;
            for (uVar13 = uVar23; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            lVar24 = (uVar11 + uVar37 & plStack_178[1]) * -0x2b0;
            if (plStack_108 == *(longlong **)(lVar26 + -0x2b0 + lVar24)) {
              lVar26 = lVar26 + lVar24;
              if ((*(ulonglong *)(lVar26 + -0x298) < 2) || (*(float *)(lVar26 + -0x278) <= 0.0)) {
                uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430656a0);
              }
              if (*(char *)(lVar26 + -0x1a0) != '\0') {
                fVar62 = *(float *)(lVar26 + -0x19c) - fVar63;
                goto LAB_140be4a72;
              }
              uStack_f1 = 1;
              pdb_142d8e040();
              goto LAB_140be6415;
            }
            uVar52 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar52);
          }
          auVar74[0] = -(auVar77[0] == -1);
          auVar74[1] = -(auVar77[1] == -1);
          auVar74[2] = -(auVar77[2] == -1);
          auVar74[3] = -(auVar77[3] == -1);
          auVar74[4] = -(auVar77[4] == -1);
          auVar74[5] = -(auVar77[5] == -1);
          auVar74[6] = -(auVar77[6] == -1);
          auVar74[7] = -(auVar77[7] == -1);
          auVar74[8] = -(auVar77[8] == -1);
          auVar74[9] = -(auVar77[9] == -1);
          auVar74[10] = -(auVar77[10] == -1);
          auVar74[0xb] = -(auVar77[0xb] == -1);
          auVar74[0xc] = -(auVar77[0xc] == -1);
          auVar74[0xd] = -(auVar77[0xd] == -1);
          auVar74[0xe] = -(auVar77[0xe] == -1);
          auVar74[0xf] = -(auVar77[0xf] == -1);
          if ((((((((((((((((SUB161(auVar74 >> 7,0) & 1) != 0 || (SUB161(auVar74 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar74 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar74 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar74 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar74 >> 0x2f,0) & 1) != 0) || (SUB161(auVar74 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar74 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar74 >> 0x47,0) & 1) != 0) || (SUB161(auVar74 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar74 >> 0x57,0) & 1) != 0) || (SUB161(auVar74 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar74 >> 0x67,0) & 1) != 0) || (SUB161(auVar74 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar74 >> 0x77,0) & 1) != 0) || auVar74[0xf] < '\0') break;
          uVar37 = uVar37 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
      }
    }
LAB_140be4a72:
    uStack_f1 = 1;
    fVar65 = (float)pdb_140de8220();
    fVar63 = 0.0;
    if (0.0 <= fVar65) {
      fVar63 = fVar65;
    }
    fVar65 = _DAT_142e36f28;
    if (fVar63 <= _DAT_142e36f28) {
      fVar65 = fVar63;
    }
    fVar65 = fVar65 * _DAT_143008730 + (_DAT_142e36f28 - fVar65) * _DAT_142f95160;
    *puStack_230 = uStack_15c;
    uStack_1e8 = (undefined4)uStack_448;
    uStack_1e4 = uStack_448._4_4_;
    stack0xfffffffffffffe28 = uStack_438;
    auStack_1e0._0_8_ = pfStack_440;
    uStack_1f8._0_4_ = SUB84(uStack_458,0);
    uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_458 >> 0x20);
    uStack_1f0 = (ushort)pfStack_450;
    uStack_1ee = (undefined2)((ulonglong)pfStack_450 >> 0x10);
    uStack_1ec = (undefined4)((ulonglong)pfStack_450 >> 0x20);
    pauStack_200 = (undefined1 (*) [16])pcStack_460;
    _auStack_208 = (undefined1 (*) [16])uStack_468;
    fVar63 = fVar62;
    if (fVar65 <= fVar62) {
      fVar63 = fVar65;
    }
    fStack_1b4 = (float)(-(uint)NAN(fVar65) & (uint)fVar62 | ~-(uint)NAN(fVar65) & (uint)fVar63);
    uStack_1d0 = 2;
    uStack_1b0._0_4_ = 0;
    _auStack_1a0 = (uint7)bStack_12e << 0x30;
    iVar20 = _auStack_1a0;
    _auStack_1a0 = CONCAT12(uStack_132,CONCAT11(cStack_f8,(undefined1)uStack_160));
    _auStack_1a0 = CONCAT17((DAT_143cb2d0c == '\0') * '\x05',
                            CONCAT43((int)((uint7)iVar20 >> 0x18),_auStack_1a0));
    uVar14 = _auStack_1a0;
    _auStack_1a0 = CONCAT13(bStack_f9,_auStack_1a0);
    uStack_19c._2_2_ = SUB82(uVar14,6);
    _auStack_1a0 = CONCAT15(uStack_130,CONCAT14(uStack_131,_auStack_1a0));
    uStack_1a8 = uStack_5d8;
    uStack_1a4 = uStack_5d4;
    uStack_f1 = 0;
    puVar39 = auStack_208;
    uStack_1b0._4_4_ = uVar90;
    lVar25 = pdb_140b0eb60(plStack_118);
    lVar26 = lStack_278;
    if (lVar25 == 1) {
      if ((float)((ulonglong)uVar48 >> 0x20) < (float)uVar48) {
        uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306c500,0x22,&UNK_14306c550);
      }
      puVar40 = puVar39;
      if (lStack_278 == lStack_288) {
        uStack_f1 = 0;
        pdb_142d7e980(&lStack_288);
      }
      puStack_280[lVar26 * 2] = puVar39;
      puStack_280[lVar26 * 2 + 1] = uVar48;
      lStack_278 = lVar26 + 1;
      *puStack_258 = uStack_164;
      uStack_f1 = 0;
      plVar30 = (longlong *)pdb_14008d710(0);
      if (plVar30 == (longlong *)0x0) {
        uStack_f1 = 0;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140be6415;
      }
      lStack_478 = *plVar30;
      lStack_470 = plVar30[1];
      *plVar30 = *plVar30 + 1;
      uVar14 = _UNK_14306c4f8;
      uVar48 = _DAT_14306c4f0;
      uVar19 = _UNK_14306c4ec;
      uVar18 = _UNK_14306c4e8;
      uVar7 = _UNK_14306c4e4;
      uVar91 = _DAT_14306c4e0;
      uStack_488 = _DAT_14306c4f0;
      uStack_480 = _UNK_14306c4f8;
      uStack_498 = (longlong *)CONCAT44(_UNK_14306c4e4,_DAT_14306c4e0);
      uStack_490 = CONCAT44(_UNK_14306c4ec,_UNK_14306c4e8);
      plVar30 = (longlong *)pdb_140f3bda0();
      if ((char)plVar30[2] == '\x01') {
        uStack_5a8 = (byte *)*plVar30;
        puVar40 = (undefined1 *)plVar30[1];
      }
      else {
        uStack_5a8 = (byte *)pdb_140f4fd10();
        *plVar30 = (longlong)uStack_5a8;
        plVar30[1] = (longlong)puVar40;
        *(undefined1 *)(plVar30 + 2) = 1;
      }
      *plVar30 = (longlong)(uStack_5a8 + 1);
      puStack_5b8 = _DAT_143065880;
      lStack_5b0 = _UNK_143065888;
      lStack_5c8 = _DAT_143065870;
      pbStack_5c0 = _UNK_143065878;
      puStack_5a0 = puVar40;
      plVar30 = (longlong *)pdb_14008d710(0);
      if (plVar30 != (longlong *)0x0) {
        lStack_188 = *plVar30;
        lStack_180 = plVar30[1];
        *plVar30 = *plVar30 + 1;
        uStack_1b8 = (undefined4)lStack_478;
        fStack_1b4 = (float)((ulonglong)lStack_478 >> 0x20);
        uStack_1b0._0_4_ = (undefined4)lStack_470;
        uStack_1b0._4_4_ = (undefined4)((ulonglong)lStack_470 >> 0x20);
        uStack_1c8 = (undefined4)uStack_488;
        uStack_1c4 = (undefined4)((ulonglong)uStack_488 >> 0x20);
        uStack_1c0 = (undefined4)uStack_480;
        uStack_1bc = (undefined4)((ulonglong)uStack_480 >> 0x20);
        uStack_1d0 = (uint)uStack_490;
        uStack_1cc = (undefined4)((ulonglong)uStack_490 >> 0x20);
        pauStack_200 = (undefined1 (*) [16])pbStack_5c0;
        _auStack_208 = (undefined1 (*) [16])lStack_5c8;
        uStack_1f8._0_4_ = SUB84(puStack_5b8,0);
        uStack_1f8._4_4_ = (undefined4)((ulonglong)puStack_5b8 >> 0x20);
        uStack_1f0 = (ushort)lStack_5b0;
        uStack_1ee = (undefined2)((ulonglong)lStack_5b0 >> 0x10);
        uStack_1ec = (undefined4)((ulonglong)lStack_5b0 >> 0x20);
        uStack_1e8 = (undefined4)uStack_5a8;
        uStack_1e4 = uStack_5a8._4_4_;
        stack0xfffffffffffffe28 = uStack_498;
        auStack_1e0._0_8_ = puStack_5a0;
        uStack_198 = uVar48;
        uStack_190 = uVar14;
        uStack_1a8 = uVar91;
        uStack_1a4 = uVar7;
        _auStack_1a0 = CONCAT44(uVar19,uVar18);
        pdb_140aa21c0(uStack_260,0,puVar39,auStack_208,uStack_2c8,&UNK_1430656b8,0x10);
        uStack_f1 = 0;
        pdb_1404d6920(auStack_208);
        if (uStack_12d == (code)0x0) {
          if (cStack_f8 == '\0') {
            *puStack_548 = uStack_2d4;
            lVar26 = *(longlong *)(lStack_2b8 + 0x30);
            uVar48 = *(undefined8 *)(lStack_2b8 + 0x40);
            lVar25 = lStack_2b8;
            if (lVar26 == *(longlong *)(lStack_2b8 + 0x20)) {
              uStack_f1 = 0;
              pdb_142d7e830(lStack_4e8);
              lVar25 = lStack_2b8;
            }
          }
          else {
            *puStack_540 = uStack_2d0;
            lVar26 = *(longlong *)(lStack_2b0 + 0x30);
            uVar48 = *(undefined8 *)(lStack_2b0 + 0x40);
            lVar25 = lStack_2b0;
            if (lVar26 == *(longlong *)(lStack_2b0 + 0x20)) {
              uStack_f1 = 0;
              pdb_142d7e830(lStack_4e0);
              lVar25 = lStack_2b0;
            }
          }
        }
        else {
          *puStack_550 = uStack_2d8;
          lVar26 = *(longlong *)(lStack_2c0 + 0x30);
          uVar48 = *(undefined8 *)(lStack_2c0 + 0x40);
          lVar25 = lStack_2c0;
          if (lVar26 == *(longlong *)(lStack_2c0 + 0x20)) {
            uStack_f1 = 0;
            pdb_142d7e830(lStack_4f0);
            lVar25 = lStack_2c0;
          }
        }
        lVar24 = *(longlong *)(lVar25 + 0x28);
        *(undefined8 *)(lVar24 + lVar26 * 0x18) = uVar48;
        *(undefined1 **)(lVar24 + 8 + lVar26 * 0x18) = puVar39;
        *(undefined4 *)(lVar24 + 0x10 + lVar26 * 0x18) = uStack_21c;
        *(undefined1 *)(lVar24 + 0x14 + lVar26 * 0x18) = 0;
        *(longlong *)(lVar25 + 0x30) = lVar26 + 1;
        *(longlong *)(lVar25 + 0x40) = *(longlong *)(lVar25 + 0x40) + 1;
        goto LAB_140be480d;
      }
      goto LAB_140be639c;
    }
LAB_140be480d:
    pcVar56 = pcVar56 + 0x38;
    pcVar33 = pcStack_128;
    pfVar50 = pfVar53;
    uVar37 = uStack_2a0;
  } while( true );
LAB_140be5559:
  *puStack_218 = uStack_12c;
  pdb_140c35390(plStack_120,plStack_108);
  *puStack_230 = uStack_15c;
  pdb_140b0e830(&pcStack_358,plStack_118,plStack_108);
  if (!SBORROW8(0,(longlong)pcStack_358)) {
    uStack_1a8 = (undefined4)uStack_2f8;
    uStack_1a4 = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
    _auStack_1a0 = uStack_2f0;
    uVar66 = _auStack_1a0;
    uStack_1b8 = (undefined4)uStack_308;
    fStack_1b4 = (float)((ulonglong)uStack_308 >> 0x20);
    uStack_1b0._0_4_ = (undefined4)uStack_300;
    uStack_1b0._4_4_ = (undefined4)((ulonglong)uStack_300 >> 0x20);
    uStack_1c8 = (undefined4)uStack_318;
    uStack_1c4 = (undefined4)((ulonglong)uStack_318 >> 0x20);
    uStack_1c0 = (undefined4)uStack_310;
    uStack_1bc = (undefined4)((ulonglong)uStack_310 >> 0x20);
    auStack_1e0._8_4_ = (float)uStack_328;
    uStack_1d4 = uStack_328._4_4_;
    uStack_1d0 = (uint)uStack_320;
    uStack_1cc = uStack_320._4_4_;
    uStack_1e8 = SUB84(pfStack_338,0);
    uStack_1e4 = (undefined4)((ulonglong)pfStack_338 >> 0x20);
    auStack_1e0._0_8_ = pfStack_330;
    uStack_1f8._0_4_ = auStack_348._0_4_;
    uStack_1f8._4_4_ = auStack_348._4_4_;
    uStack_1f0 = auStack_348._8_2_;
    uStack_1ee = auStack_348._10_2_;
    uStack_1ec = auStack_348._12_4_;
    pauStack_200 = (undefined1 (*) [16])pcStack_350;
    _auStack_208 = (undefined1 (*) [16])pcStack_358;
    cStack_19e = (char)((ulonglong)uStack_2f0 >> 0x10);
    auStack_1a0[1] = (byte)((ulonglong)uStack_2f0 >> 8);
    if (cStack_19e != '\0') {
      auStack_1a0[1] = (byte)uStack_268;
    }
    uVar22 = 0;
    if (cStack_19e != '\0') {
      uVar22 = 6;
    }
    plVar30 = (longlong *)&UNK_143044340;
    if (*pcStack_298 != '\0') {
      plVar30 = (longlong *)(pcStack_298 + 4);
    }
    pcStack_460 = (code *)*plVar30;
    uStack_268 = (uint)auStack_1a0[1];
    uStack_468._0_2_ = CONCAT11(auStack_1a0[1],uVar22);
    pfStack_450 = (float *)CONCAT71(pfStack_450._1_7_,2);
    uStack_458 = (code *)CONCAT44(0x3f800000,(int)plVar30[1]);
    _auStack_1a0 = uVar66;
    pdb_14146bf80(&uStack_608,&uStack_468,&UNK_1430656c8);
    pdb_14049c2a0(auStack_208);
  }
LAB_140be5b41:
  pbVar46 = pbStack_240;
  pbVar27 = pbStack_170;
  if (pfStack_158 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_150,(longlong)pfStack_158 << 3,4);
    pbVar27 = pbStack_170;
  }
  goto LAB_140be33b4;
LAB_140be40ed:
  plVar30 = (longlong *)(lVar25 + -8);
  goto LAB_140be41b7;
}

