// VA 0x140bdf650, PDB extent 13252 bytes
// country_core::systems::ui_edit_freehand_walls::ui_edit_freehand_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_freehand_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_edit_freehand_walls::ui_edit_freehand_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_freehand_walls.rs
   Extent: 13252 */

void pdb_140bdf650(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  undefined8 *param_13,longlong *param_14,undefined8 *param_15,longlong *param_16)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *puVar18;
  longlong *plVar19;
  char cVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  float *******pppppppfVar23;
  byte *pbVar24;
  float *******pppppppfVar25;
  float ******ppppppfVar26;
  float *pfVar27;
  ulonglong uVar28;
  float ******ppppppfVar29;
  int iVar30;
  float *******pppppppfVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  float ******ppppppfVar34;
  float ******ppppppfVar35;
  longlong lVar36;
  byte *pbVar37;
  undefined1 (*pauVar38) [16];
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  undefined1 uVar42;
  undefined8 uVar43;
  ushort uVar44;
  longlong lVar45;
  float *******pppppppfVar46;
  longlong lVar47;
  longlong lVar48;
  undefined8 uVar49;
  float *******pppppppfVar50;
  undefined1 (*pauVar51) [16];
  float *******pppppppfVar52;
  bool bVar53;
  bool bVar54;
  byte bVar55;
  undefined4 extraout_XMM0_Da;
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  char cVar67;
  undefined1 unaff_XMM11_Bc;
  char cVar68;
  undefined1 unaff_XMM11_Bd;
  char cVar69;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  char cVar70;
  undefined1 unaff_XMM11_Bg;
  char cVar71;
  undefined1 unaff_XMM11_Bh;
  char cVar72;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  char cVar73;
  undefined1 unaff_XMM11_Bk;
  char cVar74;
  undefined1 unaff_XMM11_Bl;
  char cVar75;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  char cVar76;
  undefined1 unaff_XMM11_Bo;
  char cVar77;
  undefined1 unaff_XMM11_Bp;
  char cVar78;
  float *******pppppppfStack_4a0;
  float *******pppppppfStack_498;
  longlong lStack_490;
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  undefined4 *puStack_478;
  undefined4 *puStack_470;
  longlong lStack_468;
  float *******pppppppfStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 *puStack_448;
  longlong lStack_440;
  longlong lStack_438;
  longlong *plStack_430;
  longlong *plStack_428;
  longlong *plStack_420;
  undefined4 *puStack_418;
  longlong lStack_410;
  undefined8 uStack_408;
  undefined4 *puStack_400;
  longlong lStack_3f8;
  longlong lStack_3f0;
  longlong lStack_3e8;
  undefined4 *puStack_3e0;
  undefined8 uStack_3d8;
  float ******ppppppfStack_3d0;
  longlong lStack_3c8;
  int *piStack_3c0;
  ulonglong *puStack_3b8;
  longlong lStack_3b0;
  undefined4 *puStack_3a8;
  longlong lStack_3a0;
  undefined4 *puStack_398;
  float *pfStack_390;
  longlong lStack_388;
  longlong lStack_380;
  float *******pppppppfStack_378;
  float *******pppppppfStack_370;
  float *******pppppppfStack_368;
  float *******pppppppfStack_358;
  float *******pppppppfStack_350;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  float ******ppppppfStack_300;
  float ******ppppppfStack_2f8;
  float ******ppppppfStack_2f0;
  undefined4 uStack_2e8;
  float *******pppppppfStack_2e0;
  undefined1 uStack_2d0;
  undefined4 uStack_2cc;
  float ******ppppppfStack_2c8;
  undefined4 uStack_2c0;
  undefined2 uStack_2b0;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *plStack_228;
  char *pcStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong *plStack_200;
  undefined1 (*pauStack_1f8) [16];
  longlong lStack_1f0;
  longlong lStack_1e8;
  int *piStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  byte *pbStack_1d0;
  float ******ppppppfStack_1c4;
  undefined4 uStack_1bc;
  byte *pbStack_1b8;
  float *******pppppppfStack_1b0;
  float *******pppppppfStack_1a8;
  float *******pppppppfStack_1a0;
  float *******pppppppfStack_198;
  ulonglong uStack_190;
  float *******pppppppfStack_188;
  float *******pppppppfStack_180;
  float *******pppppppfStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte *pbStack_150;
  float ******ppppppfStack_148;
  longlong lStack_140;
  float *******pppppppfStack_138;
  float *******pppppppfStack_130;
  float *******pppppppfStack_128;
  float *******pppppppfStack_120;
  longlong *plStack_118;
  float *******pppppppfStack_110;
  undefined8 uStack_108;
  float *******pppppppfStack_100;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_2;
  if (*pcVar3 != '\0') {
    return;
  }
  if (*(int *)(pcVar3 + 8) != 1) {
    return;
  }
  pcStack_220 = (char *)*param_5;
  puStack_3b8 = (ulonglong *)param_5[4];
  lStack_490 = param_5[5];
  plStack_228 = (longlong *)*param_6;
  lStack_3c8 = param_6[4];
  puStack_488 = (undefined4 *)param_6[6];
  uStack_24c = *(undefined4 *)((longlong)param_6 + 0x3c);
  piStack_3c0 = (int *)*param_15;
  lStack_210 = param_15[4];
  puStack_478 = (undefined4 *)param_15[6];
  uStack_244 = *(undefined4 *)((longlong)param_15 + 0x3c);
  lStack_208 = param_15[8];
  puStack_470 = (undefined4 *)param_15[10];
  uStack_240 = *(undefined4 *)((longlong)param_15 + 0x5c);
  lStack_218 = param_15[0xc];
  puStack_480 = (undefined4 *)param_15[0xe];
  uStack_248 = *(undefined4 *)((longlong)param_15 + 0x7c);
  pppppppfStack_498 = *(float ********)(pcVar3 + 0x10);
  param_3 = (longlong *)*param_3;
  pppppppfStack_358 = pppppppfStack_498;
  pppppppfStack_130 = pppppppfStack_498;
  plStack_118 = param_1;
  if (param_3[3] != 0) {
    uVar22 = pdb_1400af0a0(param_3 + 4,&pppppppfStack_358);
    fVar17 = _DAT_14301e000;
    fVar16 = _DAT_142e3c608;
    fVar15 = _DAT_142e3b1d8;
    fVar14 = _DAT_142e37988;
    lStack_140 = *param_3;
    bVar55 = (byte)(uVar22 >> 0x39);
    auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
    auVar57 = pshuflw(auVar57,auVar57,0);
    lVar36 = 0;
    while( true ) {
      uVar22 = uVar22 & param_3[1];
      auVar2 = *(undefined1 (*) [16])(lStack_140 + uVar22);
      auVar64[0] = -(auVar2[0] == auVar57[0]);
      auVar64[1] = -(auVar2[1] == auVar57[1]);
      auVar64[2] = -(auVar2[2] == auVar57[2]);
      auVar64[3] = -(auVar2[3] == auVar57[3]);
      auVar64[4] = -(auVar2[4] == auVar57[4]);
      auVar64[5] = -(auVar2[5] == auVar57[5]);
      auVar64[6] = -(auVar2[6] == auVar57[6]);
      auVar64[7] = -(auVar2[7] == auVar57[7]);
      auVar64[8] = -(auVar2[8] == auVar57[0]);
      auVar64[9] = -(auVar2[9] == auVar57[1]);
      auVar64[10] = -(auVar2[10] == auVar57[2]);
      auVar64[0xb] = -(auVar2[0xb] == auVar57[3]);
      auVar64[0xc] = -(auVar2[0xc] == auVar57[4]);
      auVar64[0xd] = -(auVar2[0xd] == auVar57[5]);
      auVar64[0xe] = -(auVar2[0xe] == auVar57[6]);
      auVar64[0xf] = -(auVar2[0xf] == auVar57[7]);
      uVar44 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar39 = (uint)uVar44;
      while (uVar44 != 0) {
        uVar40 = 0;
        for (uVar8 = uVar39; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        lVar47 = (uVar40 + uVar22 & param_3[1]) * -0x2b0;
        if (pppppppfStack_130 == *(float ********)(lStack_140 + -0x2b0 + lVar47)) {
          lStack_140 = lStack_140 + lVar47;
          if ((*(ulonglong *)(lStack_140 + -0x298) < 2) || (*(float *)(lStack_140 + -0x278) <= 0.0))
          {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430652e8);
          }
          if (*(uint *)(lStack_140 + -0x50) < 2) {
            return;
          }
          pppppppfVar50 = *(float ********)(lStack_140 + -0x2a0);
          pppppppfVar52 = pppppppfVar50 + *(longlong *)(lStack_140 + -0x298);
          uStack_450 = *param_7;
          lStack_468 = *param_9;
          uStack_458 = *param_13;
          uStack_234 = *(undefined4 *)((longlong)param_10 + 0x1c);
          uStack_408 = *param_10;
          puStack_400 = (undefined4 *)param_10[2];
          plStack_200 = (longlong *)*param_4;
          puStack_3e0 = (undefined4 *)param_4[2];
          uStack_230 = *(undefined4 *)((longlong)param_4 + 0x1c);
          uStack_23c = *(undefined4 *)((longlong)param_14 + 0x1c);
          lStack_3b0 = *param_14;
          puStack_448 = (undefined4 *)param_14[2];
          uStack_1d8 = *(undefined4 *)((longlong)param_12 + 0x1c);
          lStack_1f0 = *param_12;
          puStack_3a8 = (undefined4 *)param_12[2];
          uStack_1d4 = *(undefined4 *)((longlong)param_16 + 0x1c);
          lStack_1e8 = *param_16;
          puStack_398 = (undefined4 *)param_16[2];
          uStack_238 = *(undefined4 *)((longlong)param_11 + 0x1c);
          lStack_3a0 = *param_11;
          puStack_418 = (undefined4 *)param_11[2];
          iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                                   CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba)))
                         == CONCAT13(unaff_XMM11_Bd,
                                     CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba)
                                             )));
          cVar67 = (char)((uint)iVar9 >> 8);
          cVar68 = (char)((uint)iVar9 >> 0x10);
          cVar69 = (char)((uint)iVar9 >> 0x18);
          iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                                    CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))
                                   ) ==
                          CONCAT13(unaff_XMM11_Bh,
                                   CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be)))
                          );
          cVar70 = (char)((uint)iVar10 >> 8);
          cVar71 = (char)((uint)iVar10 >> 0x10);
          cVar72 = (char)((uint)iVar10 >> 0x18);
          iVar11 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                                    CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))
                                   ) ==
                          CONCAT13(unaff_XMM11_Bl,
                                   CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi)))
                          );
          cVar73 = (char)((uint)iVar11 >> 8);
          cVar74 = (char)((uint)iVar11 >> 0x10);
          cVar75 = (char)((uint)iVar11 >> 0x18);
          iVar12 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                                    CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))
                                   ) ==
                          CONCAT13(unaff_XMM11_Bp,
                                   CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm)))
                          );
          cVar76 = (char)((uint)iVar12 >> 8);
          cVar77 = (char)((uint)iVar12 >> 0x10);
          cVar78 = (char)((uint)iVar12 >> 0x18);
          lStack_440 = lStack_140 + -0x2a8;
          pauStack_1f8 = (undefined1 (*) [16])(plStack_118 + 4);
          pppppppfVar31 = (float *******)(lStack_3b0 + 0x20);
          lStack_388 = lStack_1f0 + 0x20;
          lStack_380 = lStack_1e8 + 0x20;
          plStack_428 = plStack_200 + 4;
          pfStack_390 = (float *)(pcStack_220 + 4);
          piStack_1e0 = piStack_3c0 + 1;
          lStack_3f0 = lStack_210 + 0x20;
          lStack_3e8 = lStack_208 + 0x20;
          lStack_3f8 = lStack_218 + 0x20;
          lStack_438 = lStack_3c8 + 0x30;
          plStack_430 = plStack_228 + 0x12;
          plStack_420 = plStack_228 + 4;
          lStack_410 = lStack_3a0 + 0x20;
          pppppppfStack_4a0 = (float *******)0x0;
          if (pppppppfVar50 == pppppppfVar52) {
            return;
          }
          goto LAB_140bdfb2b;
        }
        uVar44 = (ushort)(uVar39 - 1) & (ushort)uVar39;
        uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar44);
      }
      auVar61[0] = -(auVar2[0] == -1);
      auVar61[1] = -(auVar2[1] == -1);
      auVar61[2] = -(auVar2[2] == -1);
      auVar61[3] = -(auVar2[3] == -1);
      auVar61[4] = -(auVar2[4] == -1);
      auVar61[5] = -(auVar2[5] == -1);
      auVar61[6] = -(auVar2[6] == -1);
      auVar61[7] = -(auVar2[7] == -1);
      auVar61[8] = -(auVar2[8] == -1);
      auVar61[9] = -(auVar2[9] == -1);
      auVar61[10] = -(auVar2[10] == -1);
      auVar61[0xb] = -(auVar2[0xb] == -1);
      auVar61[0xc] = -(auVar2[0xc] == -1);
      auVar61[0xd] = -(auVar2[0xd] == -1);
      auVar61[0xe] = -(auVar2[0xe] == -1);
      auVar61[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar61 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar61 >> 0x3f,0) & 1) != 0) || (SUB161(auVar61 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar61 >> 0x4f,0) & 1) != 0) || (SUB161(auVar61 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar61 >> 0x5f,0) & 1) != 0) || (SUB161(auVar61 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar61 >> 0x6f,0) & 1) != 0) || (SUB161(auVar61 >> 0x77,0) & 1) != 0) ||
          auVar61[0xf] < '\0') break;
      uVar22 = uVar22 + lVar36 + 0x10;
      lVar36 = lVar36 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143065300);
LAB_140bdfb2b:
  ppppppfVar35 = *pppppppfVar50;
  ppppppfStack_3d0 = ppppppfVar35;
  pppppppfStack_110 = pppppppfStack_4a0;
  pdb_1419c1ac0(uStack_450);
  pdb_140df4540(&ppppppfStack_1c4,&ppppppfStack_3d0);
  pppppppfStack_358 = (float *******)&pppppppfStack_498;
  pppppppfStack_350 = (float *******)pdb_140be83d0;
  auStack_348._0_8_ = &pppppppfStack_4a0;
  auStack_348._8_8_ = pdb_140090b90;
  pdb_140f60760(&pppppppfStack_188,&UNK_143065318,&pppppppfStack_358);
  lVar36 = lStack_468;
  pppppppfStack_378 = pppppppfStack_188;
  pppppppfStack_370 = pppppppfStack_180;
  pppppppfStack_368 = pppppppfStack_178;
  uStack_2c0 = uStack_1bc;
  ppppppfStack_2c8 = ppppppfStack_1c4;
  pppppppfStack_358 = (float *******)0x0;
  pppppppfStack_350 = (float *******)0x8;
  auStack_348._0_12_ = ZEXT412(1) << 0x40;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = auStack_338._8_8_;
  auStack_338 = auVar57 << 0x40;
  uStack_328 = (undefined *)CONCAT44(uStack_328._4_4_,2);
  uStack_310 = 3;
  ppppppfStack_2f8 = (float ******)CONCAT44(ppppppfStack_2f8._4_4_,3);
  pppppppfStack_2e0 = (float *******)((ulonglong)pppppppfStack_2e0 & 0xffffffffffffff00);
  uStack_2d0 = 0;
  uStack_2cc = 0x3f400000;
  uStack_2b0 = 0x100;
  pppppppfVar25 = (float *******)&pppppppfStack_378;
  lVar47 = lStack_468;
  pppppppfStack_198 = (float *******)pdb_1409008d0(lStack_468,pppppppfVar25,&pppppppfStack_358);
  fVar65 = fVar16;
  if (((*(char *)(pppppppfStack_198 + 3) != '\0') &&
      ((float *******)pppppppfStack_198[7] == pppppppfVar25)) &&
     (*(int *)(pppppppfStack_198 + 5) != 2)) {
    fVar65 = fVar14;
  }
  if ((*(char *)(lVar36 + 0x18) == '\x02') && (*(char *)(lVar36 + 0x19) == '\x04')) {
    uStack_108 = (float *******)
                 CONCAT44(uStack_108._4_4_,
                          (int)CONCAT71((int7)((ulonglong)lVar47 >> 8),
                                        *(float ********)(lVar36 + 0x38) == pppppppfVar25 &&
                                        fVar17 <= *(float *)(lVar36 + 200)));
  }
  else {
    uStack_108 = (float *******)((ulonglong)uStack_108._4_4_ << 0x20);
  }
  pppppppfStack_350 = (float *******)pdb_140f33d80;
  auStack_348._8_8_ = pdb_140f705d0;
  auStack_348._0_8_ = &fStack_250;
  pppppppfStack_358 = &ppppppfStack_1c4;
  fStack_250 = fVar65;
  pppppppfStack_138 = pppppppfVar25;
  pdb_140f60760(&pppppppfStack_188,&UNK_143065328,&pppppppfStack_358);
  pppppppfVar25 = pppppppfStack_178;
  pppppppfStack_128 = pppppppfStack_188;
  pppppppfStack_100 = pppppppfStack_180;
  pppppppfStack_350 = (float *******)CONCAT44(pppppppfStack_350._4_4_,uStack_1bc);
  pppppppfStack_358 = (float *******)ppppppfStack_1c4;
  pdb_14007ee60();
  pppppppfVar23 = (float *******)pub_1406abab0(0x20,8);
  if (pppppppfVar23 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pppppppfVar50 = pppppppfVar50 + 1;
  pppppppfStack_460 = (float *******)((longlong)pppppppfStack_110 + 1);
  *pppppppfVar23 = (float ******)0x1;
  pppppppfVar23[1] = (float ******)0x1;
  pppppppfVar23[2] = (float ******)pppppppfStack_358;
  *(undefined4 *)(pppppppfVar23 + 3) = pppppppfStack_350._0_4_;
  *(float *)((longlong)pppppppfVar23 + 0x1c) = fVar65;
  pppppppfStack_350 = (float *******)&UNK_143065340;
  pppppppfStack_358 = pppppppfVar23;
  pppppppfStack_120 = pppppppfVar23;
  if ((longlong)pppppppfVar25 < 0) {
    uVar49 = 0;
LAB_140be18d1:
    pdb_142dc7e2a(uVar49,pppppppfVar25);
    goto LAB_140be1b90;
  }
  if (pppppppfVar25 == (float *******)0x0) {
    pbVar24 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar49 = 1;
    pbVar24 = pub_1406abab0((ulonglong)pppppppfVar25,1);
    if (pbVar24 == (byte *)0x0) goto LAB_140be18d1;
    pub_142e32760(pbVar24,pppppppfStack_100,pppppppfVar25);
  }
  pppppppfStack_358 = pppppppfStack_138;
  pppppppfStack_350 = (float *******)CONCAT71(pppppppfStack_350._1_7_,(char)uStack_108);
  auStack_348._8_8_ = pbVar24;
  auStack_348._0_8_ = pppppppfVar25;
  auStack_338._8_8_ = pppppppfStack_120;
  auStack_338._0_8_ = pppppppfVar25;
  uStack_328 = &UNK_143065340;
  pdb_141a88350(uStack_458,&pppppppfStack_358);
  if (pppppppfStack_128 != (float *******)0x0) {
    pub_1406abac0((byte *)pppppppfStack_100,(ulonglong)pppppppfStack_128,1);
  }
  if ((char)uStack_108 != '\0') {
    pdb_14007ee60();
    pppppppfVar25 = (float *******)pub_1406abab0(0x10,8);
    if (pppppppfVar25 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x10);
    }
    *pppppppfVar25 = (float ******)pppppppfStack_130;
    *(undefined4 *)(pppppppfVar25 + 1) = 0x3f800000;
    *puStack_448 = uStack_23c;
    lVar36 = *(longlong *)(lStack_3b0 + 0x30);
    uVar49 = *(undefined8 *)(lStack_3b0 + 0x40);
    pppppppfStack_128 = pppppppfVar25;
    if (lVar36 == *(longlong *)(lStack_3b0 + 0x20)) {
      pdb_142d7ede0(pppppppfVar31);
    }
    lVar47 = *(longlong *)(lStack_3b0 + 0x28);
    *(undefined8 *)(lVar47 + lVar36 * 0x28) = 1;
    *(float ********)(lVar47 + 8 + lVar36 * 0x28) = pppppppfStack_128;
    *(undefined8 *)(lVar47 + 0x10 + lVar36 * 0x28) = 1;
    *(undefined4 *)(lVar47 + 0x18 + lVar36 * 0x28) = 0x3f800000;
    *(undefined1 *)(lVar47 + 0x1c + lVar36 * 0x28) = 4;
    *(undefined8 *)(lVar47 + 0x20 + lVar36 * 0x28) = uVar49;
    *(longlong *)(lStack_3b0 + 0x30) = lVar36 + 1;
    *(longlong *)(lStack_3b0 + 0x40) = *(longlong *)(lStack_3b0 + 0x40) + 1;
  }
  pppppppfVar25 = pppppppfStack_130;
  plVar19 = plStack_228;
  uVar1 = uStack_24c;
  lVar36 = lStack_3c8;
  puVar4 = puStack_488;
  pppppppfVar23 = (float *******)&pppppppfStack_358;
  if ((*(char *)(pppppppfStack_198 + 3) == '\x02') &&
     ((float *******)pppppppfStack_198[7] == pppppppfStack_138)) {
    bVar55 = *(byte *)((longlong)pppppppfStack_198 + 0x19);
    if (bVar55 < 2) {
      pppppppfVar25 = (float *******)plStack_118[2];
      pppppppfVar23 = (float *******)((longlong)pppppppfVar25 * 0xc);
      pppppppfStack_110 = pppppppfVar23;
      if ((float *******)0xaaaaaaaaaaaaaaa < pppppppfVar25) {
        uVar22 = 0;
LAB_140be18e4:
        pdb_142dc7e2a(uVar22,pppppppfStack_110);
LAB_140be18f3:
        uVar49 = 0;
LAB_140be18f6:
        uStack_f2 = 0;
        pdb_142dc7e2a(uVar49,uVar22);
        goto LAB_140be1b90;
      }
      pppppppfStack_120 = pppppppfVar25;
      if (pppppppfVar23 == (float *******)0x0) {
        pppppppfStack_100 = (float *******)0x4;
        pppppppfStack_128 = pppppppfVar31;
      }
      else {
        puVar41 = (undefined8 *)plStack_118[1];
        pppppppfStack_128 = pppppppfVar31;
        pdb_14007ee60();
        uVar22 = 4;
        pppppppfStack_100 = (float *******)pub_1406abab0((ulonglong)pppppppfVar23,4);
        if (pppppppfStack_100 == (float *******)0x0) goto LAB_140be18e4;
        if (pppppppfStack_120 != (float *******)0x0) {
          pppppppfVar25 = (float *******)0x0;
          pppppppfVar31 = pppppppfStack_120;
          do {
            if (pppppppfStack_110 == pppppppfVar25) break;
            uVar1 = *(undefined4 *)(puVar41 + 1);
            uVar49 = *puVar41;
            puVar41 = (undefined8 *)((longlong)puVar41 + 0xc);
            *(undefined8 *)((longlong)pppppppfStack_100 + (longlong)pppppppfVar25) = uVar49;
            *(undefined4 *)((longlong)(pppppppfStack_100 + 1) + (longlong)pppppppfVar25) = uVar1;
            pppppppfVar25 = (float *******)((longlong)pppppppfVar25 + 0xc);
            pppppppfVar31 = (float *******)((longlong)pppppppfVar31 + -1);
          } while (pppppppfVar31 != (float *******)0x0);
        }
      }
      lVar47 = lStack_140;
      *puStack_3a8 = uStack_1d8;
      lVar36 = *(longlong *)(lStack_1f0 + 0x30);
      uVar49 = *(undefined8 *)(lStack_1f0 + 0x40);
      uStack_108 = pppppppfVar52;
      if (lVar36 == *(longlong *)(lStack_1f0 + 0x20)) {
        pdb_142d7ede0(lStack_388);
      }
      lVar45 = *(longlong *)(lStack_1f0 + 0x28);
      *(float ********)(lVar45 + lVar36 * 0x28) = pppppppfStack_120;
      *(float ********)(lVar45 + 8 + lVar36 * 0x28) = pppppppfStack_100;
      *(float ********)(lVar45 + 0x10 + lVar36 * 0x28) = pppppppfStack_120;
      *(float ********)(lVar45 + 0x18 + lVar36 * 0x28) = pppppppfStack_130;
      *(undefined8 *)(lVar45 + 0x20 + lVar36 * 0x28) = uVar49;
      *(longlong *)(lStack_1f0 + 0x30) = lVar36 + 1;
      *(longlong *)(lStack_1f0 + 0x40) = *(longlong *)(lStack_1f0 + 0x40) + 1;
      pppppppfVar31 = (float *******)plStack_118[3];
      plStack_118[3] = -0x8000000000000000;
      if (!SBORROW8(0,(longlong)pppppppfVar31)) {
        pppppppfStack_378 = (float *******)0x0;
        pppppppfStack_370 = (float *******)0x8;
        pppppppfStack_368 = (float *******)0x0;
        pppppppfStack_180 = *(float ********)*pauStack_1f8;
        pppppppfStack_178 = *(float ********)((longlong)*pauStack_1f8 + 8);
        uStack_170 = *(undefined8 *)pauStack_1f8[1];
        uStack_168 = *(undefined8 *)((longlong)pauStack_1f8[1] + 8);
        uStack_160 = *(undefined8 *)pauStack_1f8[2];
        uStack_158 = *(undefined8 *)((longlong)pauStack_1f8[2] + 8);
        pppppppfVar52 = *(float ********)(lVar47 + -0x298);
        uVar22 = (longlong)pppppppfVar52 * 8;
        pppppppfStack_188 = pppppppfVar31;
        if (0x7ffffffffffffffc < uVar22 || (ulonglong)pppppppfVar52 >> 0x3d != 0) {
          uVar49 = 0;
LAB_140be1911:
          pdb_142dc7e2a(uVar49,uVar22);
          goto LAB_140be1b90;
        }
        uVar43 = *(undefined8 *)(lVar47 + -0x2a0);
        if (uVar22 == 0) {
          pppppppfVar25 = (float *******)0x4;
          pppppppfStack_110 = (float *******)0x0;
          pppppppfStack_120 = pppppppfVar50;
          pppppppfVar50 = pppppppfStack_110;
        }
        else {
          pppppppfStack_120 = pppppppfVar50;
          pdb_14007ee60();
          uVar49 = 4;
          pppppppfVar25 = (float *******)pub_1406abab0(uVar22,4);
          pppppppfVar50 = pppppppfVar52;
          if (pppppppfVar25 == (float *******)0x0) goto LAB_140be1911;
        }
        pppppppfStack_110 = pppppppfVar50;
        if (pppppppfVar52 != (float *******)0x0) {
          pub_142e32760(pppppppfVar25,uVar43,uVar22);
        }
        ppppppfVar35 = *(float *******)(lVar47 + -0x280);
        uVar22 = (longlong)ppppppfVar35 * 4;
        pppppppfStack_100 = pppppppfVar25;
        if (0x7ffffffffffffffc < uVar22 || (ulonglong)ppppppfVar35 >> 0x3e != 0) {
          uVar49 = 0;
LAB_140be1959:
          pdb_142dc7e2a(uVar49,uVar22);
          goto LAB_140be1b90;
        }
        if (uVar22 == 0) {
          ppppppfVar26 = (float ******)0x4;
        }
        else {
          puVar4 = *(undefined4 **)(lVar47 + -0x288);
          pdb_14007ee60();
          uVar49 = 4;
          ppppppfVar26 = (float ******)pub_1406abab0(uVar22,4);
          if (ppppppfVar26 == (float ******)0x0) goto LAB_140be1959;
          if (ppppppfVar35 != (float ******)0x0) {
            ppppppfVar34 = (float ******)((longlong)ppppppfVar35 - 1U);
            if (ppppppfVar35 < (float ******)((longlong)ppppppfVar35 - 1U)) {
              ppppppfVar34 = ppppppfVar35;
            }
            if (ppppppfVar34 < (float ******)0x8) {
              lVar36 = 0;
              ppppppfVar34 = ppppppfVar35;
              puVar32 = puVar4;
            }
            else {
              uVar33 = (longlong)ppppppfVar34 + 1;
              uVar22 = (ulonglong)((uint)uVar33 & 7);
              if ((uVar33 & 7) == 0) {
                uVar22 = 8;
              }
              lVar36 = uVar33 - uVar22;
              ppppppfVar34 = (float ******)((longlong)ppppppfVar35 - lVar36);
              puVar32 = puVar4 + lVar36;
              lVar47 = 0;
              do {
                uVar49 = *(undefined8 *)((longlong)(puVar4 + lVar47) + 8);
                uVar43 = *(undefined8 *)(puVar4 + lVar47 + 4);
                uVar13 = *(undefined8 *)((longlong)(puVar4 + lVar47 + 4) + 8);
                pbVar24 = (byte *)((longlong)ppppppfVar26 + lVar47 * 4);
                *(undefined8 *)pbVar24 = *(undefined8 *)(puVar4 + lVar47);
                *(undefined8 *)(pbVar24 + 8) = uVar49;
                pbVar24 = (byte *)((longlong)ppppppfVar26 + (lVar47 + 4) * 4);
                *(undefined8 *)pbVar24 = uVar43;
                *(undefined8 *)(pbVar24 + 8) = uVar13;
                lVar47 = lVar47 + 8;
              } while (lVar36 != lVar47);
            }
            pbVar24 = (byte *)((longlong)ppppppfVar26 + lVar36 * 4);
            do {
              lVar47 = lStack_140;
              if (puVar32 == puVar4 + (longlong)ppppppfVar35) break;
              uVar1 = *puVar32;
              puVar32 = puVar32 + 1;
              *(undefined4 *)pbVar24 = uVar1;
              pbVar24 = pbVar24 + 4;
              ppppppfVar34 = (float ******)((longlong)ppppppfVar34 - 1);
            } while (ppppppfVar34 != (float ******)0x0);
          }
        }
        uStack_2e8 = *(undefined4 *)(lVar47 + -0x278);
        pppppppfStack_2e0 = pppppppfStack_130;
        auStack_348 = *pauStack_1f8;
        auStack_338 = pauStack_1f8[1];
        uStack_328 = *(undefined **)pauStack_1f8[2];
        uStack_320 = (uint)*(undefined8 *)((longlong)pauStack_1f8[2] + 8);
        uStack_31c = (undefined4)((ulonglong)*(undefined8 *)((longlong)pauStack_1f8[2] + 8) >> 0x20)
        ;
        uStack_318 = SUB84(pppppppfStack_110,0);
        uStack_314 = (undefined4)((ulonglong)pppppppfStack_110 >> 0x20);
        uStack_310 = SUB84(pppppppfStack_100,0);
        uStack_30c = (undefined4)((ulonglong)pppppppfStack_100 >> 0x20);
        uStack_308 = SUB84(pppppppfVar52,0);
        uStack_304 = (undefined4)((ulonglong)pppppppfVar52 >> 0x20);
        pppppppfStack_358 = (float *******)0x800000000000000f;
        uStack_f5 = 1;
        pppppppfStack_350 = pppppppfVar31;
        ppppppfStack_300 = ppppppfVar35;
        ppppppfStack_2f8 = ppppppfVar26;
        ppppppfStack_2f0 = ppppppfVar35;
        pdb_140a1aa80(&pppppppfStack_378,&pppppppfStack_358);
        pppppppfVar50 = pppppppfStack_120;
        *puStack_400 = uStack_234;
        pppppppfStack_188 = (float *******)0x0;
        pppppppfStack_180 = (float *******)0x8;
        pppppppfStack_178 = (float *******)0x0;
        auStack_348._8_8_ = pppppppfStack_370 + (longlong)pppppppfStack_368 * 3;
        pppppppfStack_358 = pppppppfStack_370;
        pppppppfStack_350 = pppppppfStack_370;
        auStack_348._0_8_ = pppppppfStack_378;
        pppppppfVar31 = pppppppfStack_370;
        pppppppfStack_350 = (float *******)pdb_140c69b60(&pppppppfStack_358);
        auStack_348._0_8_ = pppppppfVar31;
        pppppppfStack_358 = (float *******)0x7;
        uStack_f5 = 0;
        pdb_140ae5180(uStack_408,&pppppppfStack_358,&UNK_143065410);
      }
      *puStack_398 = uStack_1d4;
      lVar36 = *(longlong *)(lStack_1e8 + 0x30);
      uVar49 = *(undefined8 *)(lStack_1e8 + 0x40);
      if (lVar36 == *(longlong *)(lStack_1e8 + 0x20)) {
        pdb_142d7e830(lStack_380);
      }
      lVar47 = *(longlong *)(lStack_1e8 + 0x28);
      *(undefined8 *)(lVar47 + lVar36 * 0x18) = uVar49;
      *(float ********)(lVar47 + 8 + lVar36 * 0x18) = pppppppfStack_130;
      *(undefined1 *)(lVar47 + 0x10 + lVar36 * 0x18) = 1;
      *(longlong *)(lStack_1e8 + 0x30) = lVar36 + 1;
      *(longlong *)(lStack_1e8 + 0x40) = *(longlong *)(lStack_1e8 + 0x40) + 1;
      pppppppfVar31 = pppppppfStack_128;
      pppppppfVar52 = uStack_108;
    }
    else {
      if (bVar55 == 2) goto LAB_140be0ccb;
      if (bVar55 != 3) {
        pppppppfStack_358 = pppppppfStack_130;
        if (plStack_200[3] == 0) {
LAB_140be1922:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430653c8);
        }
        uVar22 = pdb_1400af0a0(plStack_428,pppppppfVar23);
        lVar36 = *plStack_200;
        bVar55 = (byte)(uVar22 >> 0x39);
        auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar57 = pshuflw(auVar57,auVar57,0);
        lVar47 = 0;
        while( true ) {
          uVar22 = uVar22 & plStack_200[1];
          auVar2 = *(undefined1 (*) [16])(lVar36 + uVar22);
          auVar63[0] = -(auVar2[0] == auVar57[0]);
          auVar63[1] = -(auVar2[1] == auVar57[1]);
          auVar63[2] = -(auVar2[2] == auVar57[2]);
          auVar63[3] = -(auVar2[3] == auVar57[3]);
          auVar63[4] = -(auVar2[4] == auVar57[4]);
          auVar63[5] = -(auVar2[5] == auVar57[5]);
          auVar63[6] = -(auVar2[6] == auVar57[6]);
          auVar63[7] = -(auVar2[7] == auVar57[7]);
          auVar63[8] = -(auVar2[8] == auVar57[0]);
          auVar63[9] = -(auVar2[9] == auVar57[1]);
          auVar63[10] = -(auVar2[10] == auVar57[2]);
          auVar63[0xb] = -(auVar2[0xb] == auVar57[3]);
          auVar63[0xc] = -(auVar2[0xc] == auVar57[4]);
          auVar63[0xd] = -(auVar2[0xd] == auVar57[5]);
          auVar63[0xe] = -(auVar2[0xe] == auVar57[6]);
          auVar63[0xf] = -(auVar2[0xf] == auVar57[7]);
          uVar44 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar63[0xf] >> 7) << 0xf;
          uVar39 = (uint)uVar44;
          if (uVar44 != 0) break;
LAB_140be02f9:
          auVar60[0] = -(auVar2[0] == (char)iVar9);
          auVar60[1] = -(auVar2[1] == cVar67);
          auVar60[2] = -(auVar2[2] == cVar68);
          auVar60[3] = -(auVar2[3] == cVar69);
          auVar60[4] = -(auVar2[4] == (char)iVar10);
          auVar60[5] = -(auVar2[5] == cVar70);
          auVar60[6] = -(auVar2[6] == cVar71);
          auVar60[7] = -(auVar2[7] == cVar72);
          auVar60[8] = -(auVar2[8] == (char)iVar11);
          auVar60[9] = -(auVar2[9] == cVar73);
          auVar60[10] = -(auVar2[10] == cVar74);
          auVar60[0xb] = -(auVar2[0xb] == cVar75);
          auVar60[0xc] = -(auVar2[0xc] == (char)iVar12);
          auVar60[0xd] = -(auVar2[0xd] == cVar76);
          auVar60[0xe] = -(auVar2[0xe] == cVar77);
          auVar60[0xf] = -(auVar2[0xf] == cVar78);
          if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x2f,0) & 1) != 0) || (SUB161(auVar60 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') goto LAB_140be1922;
          uVar22 = uVar22 + lVar47 + 0x10;
          lVar47 = lVar47 + 0x10;
        }
LAB_140be02cc:
        uVar40 = 0;
        for (uVar8 = uVar39; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        lVar45 = (uVar40 + uVar22 & plStack_200[1]) * -0x78;
        if (pppppppfStack_130 != *(float ********)(lVar36 + -0x78 + lVar45))
        goto code_r0x000140be02ec;
        pppppppfVar25 = (float *******)(lVar36 + lVar45);
        pfVar27 = (float *)&UNK_143044340;
        if (*pcStack_220 != '\0') {
          pfVar27 = pfStack_390;
        }
        pppppppfVar46 = (float *******)pppppppfVar25[-0xc];
        uVar22 = (longlong)pppppppfVar46 * 8;
        if (0x7ffffffffffffffc < uVar22 || (ulonglong)pppppppfVar46 >> 0x3d != 0) {
          uVar49 = 0;
LAB_140be1931:
          pdb_142dc7e2a(uVar49,uVar22);
          goto LAB_140be193c;
        }
        lVar36 = plStack_118[10];
        fVar65 = *pfVar27;
        fVar66 = pfVar27[2];
        ppppppfVar35 = pppppppfVar25[-0xd];
        if (uVar22 == 0) {
          uStack_108 = (float *******)0x4;
          pppppppfStack_100 = (float *******)0x0;
          pppppppfStack_120 = pppppppfVar50;
          pppppppfVar50 = pppppppfStack_100;
        }
        else {
          pppppppfStack_128 = pppppppfVar25;
          pppppppfStack_120 = pppppppfVar50;
          pdb_14007ee60(plStack_118,ppppppfVar35);
          uVar49 = 4;
          uStack_108 = (float *******)pub_1406abab0(uVar22,4);
          pppppppfVar25 = pppppppfStack_128;
          pppppppfVar50 = pppppppfVar46;
          if (uStack_108 == (float *******)0x0) goto LAB_140be1931;
        }
        pppppppfStack_100 = pppppppfVar50;
        if (pppppppfVar46 != (float *******)0x0) {
          pub_142e32760(uStack_108,ppppppfVar35);
        }
        ppppppfVar35 = pppppppfVar25[-9];
        uVar22 = (longlong)ppppppfVar35 * 4;
        if (0x7ffffffffffffffc < uVar22 || (ulonglong)ppppppfVar35 >> 0x3e != 0) {
          uVar49 = 0;
LAB_140be196c:
          pdb_142dc7e2a(uVar49,uVar22);
          goto LAB_140be1b90;
        }
        if (uVar22 == 0) {
          pbVar24 = (byte *)0x4;
          pppppppfStack_128 = pppppppfVar31;
          goto LAB_140be0f55;
        }
        ppppppfVar26 = pppppppfVar25[-10];
        pppppppfStack_138 = pppppppfVar46;
        pppppppfStack_128 = pppppppfVar31;
        pdb_14007ee60();
        uVar49 = 4;
        pbVar24 = pub_1406abab0(uVar22,4);
        if (pbVar24 == (byte *)0x0) goto LAB_140be196c;
        pppppppfVar46 = pppppppfStack_138;
        if (ppppppfVar35 == (float ******)0x0) goto LAB_140be0f55;
        ppppppfVar34 = (float ******)((longlong)ppppppfVar35 - 1U);
        if (ppppppfVar35 < (float ******)((longlong)ppppppfVar35 - 1U)) {
          ppppppfVar34 = ppppppfVar35;
        }
        if (ppppppfVar34 < (float ******)0x8) {
          lVar47 = 0;
          ppppppfVar29 = ppppppfVar35;
          ppppppfVar34 = ppppppfVar26;
        }
        else {
          uVar28 = (longlong)ppppppfVar34 + 1;
          uVar33 = (ulonglong)((uint)uVar28 & 7);
          if ((uVar28 & 7) == 0) {
            uVar33 = 8;
          }
          lVar47 = uVar28 - uVar33;
          ppppppfVar29 = (float ******)((longlong)ppppppfVar35 - lVar47);
          ppppppfVar34 = (float ******)((longlong)ppppppfVar26 + lVar47 * 4);
          lVar45 = 0;
          do {
            puVar41 = (undefined8 *)((longlong)ppppppfVar26 + lVar45 * 4);
            uVar49 = puVar41[1];
            auVar57 = *(undefined1 (*) [16])((longlong)ppppppfVar26 + (lVar45 + 4) * 4);
            *(undefined8 *)(pbVar24 + lVar45 * 4) = *puVar41;
            *(undefined8 *)(pbVar24 + lVar45 * 4 + 8) = uVar49;
            *(undefined1 (*) [16])(pbVar24 + lVar45 * 4 + 0x10) = auVar57;
            lVar45 = lVar45 + 8;
          } while (lVar47 != lVar45);
        }
        pbVar37 = pbVar24 + lVar47 * 4;
        do {
          if (ppppppfVar34 == (float ******)((longlong)ppppppfVar26 + (longlong)ppppppfVar35 * 4))
          break;
          uVar1 = *(undefined4 *)ppppppfVar34;
          ppppppfVar34 = (float ******)((longlong)ppppppfVar34 + 4);
          *(undefined4 *)pbVar37 = uVar1;
          pbVar37 = pbVar37 + 4;
          ppppppfVar29 = (float ******)((longlong)ppppppfVar29 - 1);
        } while (ppppppfVar29 != (float ******)0x0);
LAB_140be0f55:
        pppppppfVar31 = uStack_108;
        pbStack_1b8 = pbVar24;
        pppppppfStack_1b0 = (float *******)ppppppfVar35;
        if (pppppppfVar46 <= pppppppfStack_110) {
          pppppppfStack_1a0 = pppppppfStack_100;
          pppppppfStack_1a8 = uStack_108;
          uStack_f3 = 1;
          uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pppppppfStack_110,pppppppfVar46,&UNK_1430653e0);
        }
        fVar65 = fVar65 - (float)lVar36;
        fVar66 = fVar66 - (float)((ulonglong)lVar36 >> 0x20);
        uStack_108[(longlong)pppppppfStack_110] = (float ******)CONCAT44(fVar66,fVar65);
        if (*(int *)(lStack_140 + -0x50) != 2) {
          pppppppfVar50 = (float *******)((longlong)pppppppfVar46 + -1);
          if (pppppppfStack_110 == (float *******)0x0) {
            pppppppfVar23 = uStack_108 + (longlong)pppppppfVar50;
            *(float *)(uStack_108 + (longlong)pppppppfVar50) = fVar65;
          }
          else {
            if (pppppppfStack_110 != pppppppfVar50) goto LAB_140be0fa4;
            *(float *)uStack_108 = fVar65;
            pppppppfVar23 = uStack_108;
          }
          *(float *)((longlong)pppppppfVar23 + 4) = fVar66;
        }
LAB_140be0fa4:
        pppppppfStack_188 = pppppppfStack_100;
        pppppppfStack_180 = uStack_108;
        pppppppfStack_1a0 = pppppppfStack_100;
        pppppppfStack_1a8 = uStack_108;
        uStack_f3 = 1;
        uStack_f4 = 0;
        pppppppfStack_178 = pppppppfVar46;
        pdb_140080c90(&pppppppfStack_358,&pppppppfStack_188,0);
        puVar18 = uStack_328;
        pppppppfVar50 = pppppppfStack_358;
        uVar49 = auStack_348._0_8_;
        if (SBORROW8(0,(longlong)pppppppfStack_358)) {
          pppppppfStack_188 = pppppppfStack_350;
          pppppppfStack_180 = (float *******)auStack_348._0_8_;
          pppppppfStack_1a0 = pppppppfStack_100;
          pppppppfStack_1a8 = pppppppfVar31;
          uStack_f3 = 1;
          uStack_f4 = 0;
          pbStack_1b8 = pbVar24;
          pppppppfStack_1b0 = (float *******)ppppppfVar35;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&pppppppfStack_188,&UNK_14335e258,&UNK_1430653f8);
        }
        uStack_108 = pppppppfStack_350;
        pppppppfStack_138 = (float *******)auStack_348._8_8_;
        pbStack_1d0 = (byte *)auStack_338._0_8_;
        uStack_3d8 = auStack_338._8_8_;
        uStack_22c = uStack_328._4_4_;
        if (ppppppfVar35 != (float ******)0x0) {
          pub_1406abac0(pbVar24,uVar22,4);
        }
        pdb_14007ee60();
        pppppppfStack_198 = pppppppfVar50;
        if (pppppppfStack_110 == (float *******)0x0) {
          pppppppfVar23 = (float *******)pub_1406abab0(8,8);
          if (pppppppfVar23 == (float *******)0x0) {
            pppppppfStack_1a0 = pppppppfStack_198;
            pppppppfStack_1a8 = uStack_108;
            pppppppfStack_1b0 = pppppppfStack_138;
            pbStack_1b8 = pbStack_1d0;
            uStack_f3 = 1;
            uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,8);
          }
          *pppppppfVar23 = (float ******)0x1;
          pppppppfStack_100 = (float *******)0x8;
        }
        else {
          pppppppfVar23 = (float *******)pub_1406abab0(0x10,8);
          if (pppppppfVar23 == (float *******)0x0) {
            pppppppfStack_1a0 = pppppppfVar50;
            pppppppfStack_1a8 = uStack_108;
            pppppppfStack_1b0 = pppppppfStack_138;
            pbStack_1b8 = pbStack_1d0;
            uStack_f3 = 1;
            uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x10);
          }
          *pppppppfVar23 = (float ******)((longlong)pppppppfStack_110 + -1);
          pppppppfVar23[1] = (float ******)((longlong)pppppppfStack_110 + 1);
          pppppppfStack_100 = (float *******)0x10;
        }
        pppppppfVar31 = pppppppfStack_128;
        if (((*pppppppfVar23 < (ulonglong)uVar49) &&
            (fVar56 = SUB84(uStack_108[(longlong)*pppppppfVar23],0) - fVar65,
            fVar58 = (float)((ulonglong)uStack_108[(longlong)*pppppppfVar23] >> 0x20) - fVar66,
            bVar53 = true, SQRT(fVar58 * fVar58 + fVar56 * fVar56) < fVar15)) ||
           ((pppppppfStack_110 != (float *******)0x0 &&
            ((pppppppfVar23[1] < (ulonglong)uVar49 &&
             (fVar65 = SUB84(uStack_108[(longlong)pppppppfVar23[1]],0) - fVar65,
             fVar66 = (float)((ulonglong)uStack_108[(longlong)pppppppfVar23[1]] >> 0x20) - fVar66,
             bVar53 = true, SQRT(fVar66 * fVar66 + fVar65 * fVar65) < fVar15)))))) {
LAB_140be1188:
          pppppppfVar50 = uStack_108 + uVar49;
          if (*piStack_3c0 == 1) {
            uStack_f1 = 1;
            pppppppfStack_110 = pppppppfVar23;
            cVar20 = pdb_140df1700(piStack_1e0,*(undefined4 *)uStack_108,
                                   *(undefined4 *)((longlong)uStack_108 + 4));
            pppppppfVar23 = uStack_108;
            while (cVar20 != '\0') {
              if (pppppppfVar23 + 1 == pppppppfVar50) goto LAB_140be144d;
              uStack_f1 = 1;
              cVar20 = pdb_140df1700(piStack_1e0,*(undefined4 *)(pppppppfVar23 + 1),
                                     *(undefined4 *)((longlong)pppppppfVar23 + 0xc));
              pppppppfVar23 = pppppppfVar23 + 1;
            }
LAB_140be1253:
            *puStack_478 = uStack_244;
            lVar36 = *(longlong *)(lStack_210 + 0x30);
            uVar49 = *(undefined8 *)(lStack_210 + 0x40);
            if (lVar36 == *(longlong *)(lStack_210 + 0x20)) {
              uStack_f1 = 1;
              pdb_142d7e8a0(lStack_3f0);
            }
            *(undefined8 *)(*(longlong *)(lStack_210 + 0x28) + lVar36 * 8) = uVar49;
            *(longlong *)(lStack_210 + 0x30) = lVar36 + 1;
            *(longlong *)(lStack_210 + 0x40) = *(longlong *)(lStack_210 + 0x40) + 1;
            *puStack_470 = uStack_240;
            lVar36 = *(longlong *)(lStack_208 + 0x30);
            uVar49 = *(undefined8 *)(lStack_208 + 0x40);
            if (lVar36 == *(longlong *)(lStack_208 + 0x20)) {
              uStack_f1 = 1;
              pdb_142d7e8a0(lStack_3e8);
            }
            *(undefined8 *)(*(longlong *)(lStack_208 + 0x28) + lVar36 * 8) = uVar49;
            *(longlong *)(lStack_208 + 0x30) = lVar36 + 1;
            *(longlong *)(lStack_208 + 0x40) = *(longlong *)(lStack_208 + 0x40) + 1;
          }
          else {
            uStack_f1 = 1;
            pppppppfStack_110 = pppppppfVar23;
            cVar20 = pdb_140def450(piStack_1e0);
            pppppppfVar23 = uStack_108;
            while( true ) {
              if (cVar20 == '\0') goto LAB_140be1253;
              if (pppppppfVar23 + 1 == pppppppfVar50) break;
              uStack_f1 = 1;
              cVar20 = pdb_140def450(piStack_1e0,*(undefined4 *)(pppppppfVar23 + 1),
                                     *(undefined4 *)((longlong)pppppppfVar23 + 0xc));
              pppppppfVar23 = pppppppfVar23 + 1;
            }
LAB_140be144d:
            if (!bVar53) goto LAB_140be1459;
          }
          uVar42 = 1;
          bVar53 = false;
        }
        else {
          pppppppfStack_110 = pppppppfVar23;
          if ((float ******)uVar49 != (float ******)0x0) {
            bVar53 = false;
            goto LAB_140be1188;
          }
LAB_140be1459:
          ppppppfStack_148 = (float ******)plStack_118[2];
          uVar22 = (longlong)ppppppfStack_148 * 0xc;
          if ((float ******)0xaaaaaaaaaaaaaaa < ppppppfStack_148) {
            uVar43 = 0;
LAB_140be1997:
            uStack_f1 = 1;
            pdb_142dc7e2a(uVar43,uVar22);
            goto LAB_140be1b90;
          }
          uStack_190 = uVar22;
          if (uVar22 == 0) {
            pbStack_150 = (byte *)0x4;
          }
          else {
            puVar41 = (undefined8 *)plStack_118[1];
            pdb_14007ee60();
            uVar22 = uStack_190;
            uVar43 = 4;
            pbStack_150 = pub_1406abab0(uStack_190,4);
            if (pbStack_150 == (byte *)0x0) goto LAB_140be1997;
            if (ppppppfStack_148 != (float ******)0x0) {
              uVar22 = 0;
              ppppppfVar35 = ppppppfStack_148;
              do {
                if (uStack_190 == uVar22) break;
                uVar1 = *(undefined4 *)(puVar41 + 1);
                uVar43 = *puVar41;
                puVar41 = (undefined8 *)((longlong)puVar41 + 0xc);
                *(undefined8 *)(pbStack_150 + uVar22) = uVar43;
                *(undefined4 *)(pbStack_150 + uVar22 + 8) = uVar1;
                uVar22 = uVar22 + 0xc;
                ppppppfVar35 = (float ******)((longlong)ppppppfVar35 - 1);
              } while (ppppppfVar35 != (float ******)0x0);
            }
          }
          *puStack_3a8 = uStack_1d8;
          lVar36 = *(longlong *)(lStack_1f0 + 0x30);
          uVar43 = *(undefined8 *)(lStack_1f0 + 0x40);
          if (lVar36 == *(longlong *)(lStack_1f0 + 0x20)) {
            pdb_142d7ede0(lStack_388);
          }
          lVar47 = *(longlong *)(lStack_1f0 + 0x28);
          *(float *******)(lVar47 + lVar36 * 0x28) = ppppppfStack_148;
          *(byte **)(lVar47 + 8 + lVar36 * 0x28) = pbStack_150;
          *(float *******)(lVar47 + 0x10 + lVar36 * 0x28) = ppppppfStack_148;
          *(float ********)(lVar47 + 0x18 + lVar36 * 0x28) = pppppppfStack_130;
          *(undefined8 *)(lVar47 + 0x20 + lVar36 * 0x28) = uVar43;
          *(longlong *)(lStack_1f0 + 0x30) = lVar36 + 1;
          *(longlong *)(lStack_1f0 + 0x40) = *(longlong *)(lStack_1f0 + 0x40) + 1;
          ppppppfVar35 = pppppppfVar25[-0xc];
          uVar22 = (longlong)ppppppfVar35 * 8;
          if (0x7ffffffffffffffc < uVar22 || (ulonglong)ppppppfVar35 >> 0x3d != 0) {
            uVar43 = 0;
LAB_140be19c7:
            uStack_f1 = 1;
            pdb_142dc7e2a(uVar43,uVar22);
            goto LAB_140be1b90;
          }
          ppppppfVar26 = pppppppfVar25[-0xd];
          if (uVar22 == 0) {
            pbStack_150 = (byte *)0x4;
            ppppppfStack_148 = (float ******)0x0;
            ppppppfVar34 = ppppppfStack_148;
          }
          else {
            pdb_14007ee60();
            uVar43 = 4;
            pbStack_150 = pub_1406abab0(uVar22,4);
            ppppppfVar34 = ppppppfVar35;
            if (pbStack_150 == (byte *)0x0) goto LAB_140be19c7;
          }
          ppppppfStack_148 = ppppppfVar34;
          if (ppppppfVar35 != (float ******)0x0) {
            pub_142e32760(pbStack_150,ppppppfVar26);
          }
          ppppppfVar35 = pppppppfVar25[-9];
          uStack_190 = (longlong)ppppppfVar35 * 4;
          if (0x7ffffffffffffffc < uStack_190 || (ulonglong)ppppppfVar35 >> 0x3e != 0) {
            uVar43 = 0;
LAB_140be19e1:
            pdb_142dc7e2a(uVar43,uStack_190);
            goto LAB_140be1b90;
          }
          if (((ulonglong)ppppppfVar35 & 0x3fffffffffffffff) == 0) {
            pbVar24 = (byte *)0x4;
          }
          else {
            ppppppfVar26 = pppppppfVar25[-10];
            pdb_14007ee60();
            uVar43 = 4;
            pbVar24 = pub_1406abab0((longlong)ppppppfVar35 * 4,4);
            if (pbVar24 == (byte *)0x0) goto LAB_140be19e1;
            if (ppppppfVar35 != (float ******)0x0) {
              ppppppfVar34 = (float ******)((longlong)ppppppfVar35 - 1U);
              if (ppppppfVar35 < (float ******)((longlong)ppppppfVar35 - 1U)) {
                ppppppfVar34 = ppppppfVar35;
              }
              if (ppppppfVar34 < (float ******)0x8) {
                lVar36 = 0;
                ppppppfVar29 = ppppppfVar35;
                ppppppfVar34 = ppppppfVar26;
              }
              else {
                uVar33 = (longlong)ppppppfVar34 + 1;
                uVar22 = (ulonglong)((uint)uVar33 & 7);
                if ((uVar33 & 7) == 0) {
                  uVar22 = 8;
                }
                lVar36 = uVar33 - uVar22;
                ppppppfVar29 = (float ******)((longlong)ppppppfVar35 - lVar36);
                ppppppfVar34 = (float ******)((longlong)ppppppfVar26 + lVar36 * 4);
                lVar47 = 0;
                do {
                  puVar41 = (undefined8 *)((longlong)ppppppfVar26 + lVar47 * 4);
                  uVar43 = puVar41[1];
                  auVar57 = *(undefined1 (*) [16])((longlong)ppppppfVar26 + (lVar47 + 4) * 4);
                  *(undefined8 *)(pbVar24 + lVar47 * 4) = *puVar41;
                  *(undefined8 *)(pbVar24 + lVar47 * 4 + 8) = uVar43;
                  *(undefined1 (*) [16])(pbVar24 + lVar47 * 4 + 0x10) = auVar57;
                  lVar47 = lVar47 + 8;
                } while (lVar36 != lVar47);
              }
              pbVar37 = pbVar24 + lVar36 * 4;
              do {
                if (ppppppfVar34 ==
                    (float ******)((longlong)ppppppfVar26 + (longlong)ppppppfVar35 * 4)) break;
                uVar1 = *(undefined4 *)ppppppfVar34;
                ppppppfVar34 = (float ******)((longlong)ppppppfVar34 + 4);
                *(undefined4 *)pbVar37 = uVar1;
                pbVar37 = pbVar37 + 4;
                ppppppfVar29 = (float ******)((longlong)ppppppfVar29 - 1);
              } while (ppppppfVar29 != (float ******)0x0);
            }
          }
          uVar1 = *(undefined4 *)((longlong)pppppppfVar25 + -0x1c);
          uVar39 = *(uint *)(pppppppfVar25 + -7);
          iVar30 = uVar39 - 2;
          if (uVar39 < 2) {
            iVar30 = 2;
          }
          uVar40 = 2;
          if (iVar30 != 0) {
            if (iVar30 == 1) {
              uVar40 = 3;
            }
            else {
              auStack_348._0_8_ = *(undefined8 *)((longlong)pppppppfVar25 + -0x24);
              pppppppfStack_358 = *(float ********)((longlong)pppppppfVar25 + -0x34);
              pppppppfStack_350 = *(float ********)((longlong)pppppppfVar25 + -0x2c);
              uVar40 = uVar39;
            }
          }
          ppppppfVar26 = pppppppfVar25[-1];
          ppppppfVar34 = pppppppfVar25[-3];
          ppppppfVar29 = pppppppfVar25[-2];
          pppppppfStack_178 = (float *******)auStack_348._0_8_;
          pppppppfStack_188 = pppppppfStack_358;
          pppppppfStack_180 = pppppppfStack_350;
          if (ppppppfStack_148 != (float ******)0x0) {
            pub_1406abac0(pbStack_150,(longlong)ppppppfStack_148 << 3,4);
          }
          if (ppppppfVar35 != (float ******)0x0) {
            pub_1406abac0(pbVar24,uStack_190,4);
          }
          *puStack_3e0 = uStack_230;
          uStack_30c = SUB84(pppppppfStack_178,0);
          uStack_308 = (undefined4)((ulonglong)pppppppfStack_178 >> 0x20);
          uStack_31c = SUB84(pppppppfStack_188,0);
          uStack_318 = (undefined4)((ulonglong)pppppppfStack_188 >> 0x20);
          uStack_314 = SUB84(pppppppfStack_180,0);
          uStack_310 = (undefined4)((ulonglong)pppppppfStack_180 >> 0x20);
          pppppppfStack_358 = pppppppfStack_198;
          pppppppfStack_350 = uStack_108;
          auStack_348._8_8_ = pppppppfStack_138;
          auStack_348 = CONCAT88(auStack_348._8_8_,uVar49);
          auStack_338._8_8_ = uStack_3d8;
          auStack_338._0_8_ = pbStack_1d0;
          uStack_328 = (undefined *)CONCAT44(uStack_22c,(int)puVar18);
          uStack_f1 = 0;
          uStack_320 = uVar40;
          uStack_304 = uVar1;
          ppppppfStack_300 = ppppppfVar34;
          ppppppfStack_2f8 = ppppppfVar29;
          ppppppfStack_2f0 = ppppppfVar26;
          pdb_14092f410(plStack_200,pppppppfStack_130,&pppppppfStack_358);
          bVar53 = true;
          uVar42 = 0;
          pppppppfVar31 = pppppppfStack_128;
        }
        *puStack_398 = uStack_1d4;
        lVar36 = *(longlong *)(lStack_1e8 + 0x30);
        uVar49 = *(undefined8 *)(lStack_1e8 + 0x40);
        if (lVar36 == *(longlong *)(lStack_1e8 + 0x20)) {
          uStack_f1 = uVar42;
          pdb_142d7e830(lStack_380);
        }
        lVar47 = *(longlong *)(lStack_1e8 + 0x28);
        *(undefined8 *)(lVar47 + lVar36 * 0x18) = uVar49;
        *(float ********)(lVar47 + 8 + lVar36 * 0x18) = pppppppfStack_130;
        *(undefined1 *)(lVar47 + 0x10 + lVar36 * 0x18) = 0;
        *(longlong *)(lStack_1e8 + 0x30) = lVar36 + 1;
        *(longlong *)(lStack_1e8 + 0x40) = *(longlong *)(lStack_1e8 + 0x40) + 1;
        *puStack_480 = uStack_248;
        lVar36 = *(longlong *)(lStack_218 + 0x30);
        uVar49 = *(undefined8 *)(lStack_218 + 0x40);
        if (lVar36 == *(longlong *)(lStack_218 + 0x20)) {
          uStack_f1 = uVar42;
          pdb_142d7ee50(lStack_3f8);
        }
        lVar47 = *(longlong *)(lStack_218 + 0x28);
        lVar45 = lVar36 * 0x40;
        *(undefined1 *)(lVar47 + lVar45) = 2;
        *(float ********)(lVar47 + 8 + lVar45) = pppppppfStack_130;
        *(undefined8 *)(lVar47 + 0x38 + lVar45) = uVar49;
        *(longlong *)(lStack_218 + 0x30) = lVar36 + 1;
        *(longlong *)(lStack_218 + 0x40) = *(longlong *)(lStack_218 + 0x40) + 1;
        pub_1406abac0((byte *)pppppppfStack_110,(ulonglong)pppppppfStack_100,8);
        pppppppfVar50 = pppppppfStack_120;
        if (bVar53) goto LAB_140be0bae;
        if (pppppppfStack_198 != (float *******)0x0) {
          pub_1406abac0((byte *)uStack_108,(longlong)pppppppfStack_198 << 3,4);
        }
        if (pppppppfStack_138 != (float *******)0x0) {
          pub_1406abac0(pbStack_1d0,(longlong)pppppppfStack_138 << 2,4);
        }
        goto LAB_140be0ccb;
      }
      *puStack_488 = uStack_24c;
      pppppppfStack_358 = (float *******)0x0;
      pppppppfStack_350 = pppppppfStack_130;
      auStack_348._0_8_ = 1;
      pppppppfStack_128 = pppppppfVar31;
      pppppppfStack_120 = pppppppfVar50;
      uStack_108 = pppppppfVar52;
      pdb_140aa3450(lStack_3c8,pppppppfVar23,2,plStack_228,param_8,&UNK_143065370,0x12);
      *puVar4 = uVar1;
      pdb_140c419b0(lVar36,pppppppfVar25);
      *puVar4 = uVar1;
      pppppppfStack_350 = (float *******)(longlong *)0x0;
      if (plVar19[0x12] != 0) {
        pppppppfStack_350 = (float *******)plStack_430;
      }
      pppppppfStack_358 = (float *******)0x1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auStack_348._8_8_;
      auStack_348 = auVar2 << 0x40;
      uStack_320 = 0;
      uStack_31c = 0;
      pdb_1414e0e70(pppppppfVar23,lStack_438);
      pppppppfStack_188 = (float *******)0x0;
      pppppppfStack_180 = (float *******)0x4;
      pppppppfStack_178 = (float *******)0x0;
      pppppppfStack_358 = pppppppfVar25;
      lVar36 = lStack_140;
      if (plVar19[3] != 0) {
        uStack_f2 = 1;
        uVar22 = pdb_1400af0a0(plStack_420,&pppppppfStack_358);
        lVar47 = *plStack_228;
        bVar55 = (byte)(uVar22 >> 0x39);
        auVar57 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar57 = pshuflw(auVar57,auVar57,0);
        lVar45 = 0;
        do {
          uVar22 = uVar22 & plStack_228[1];
          pcVar3 = (char *)(lVar47 + uVar22);
          auVar62[0] = -(*pcVar3 == auVar57[0]);
          auVar62[1] = -(pcVar3[1] == auVar57[1]);
          auVar62[2] = -(pcVar3[2] == auVar57[2]);
          auVar62[3] = -(pcVar3[3] == auVar57[3]);
          auVar62[4] = -(pcVar3[4] == auVar57[4]);
          auVar62[5] = -(pcVar3[5] == auVar57[5]);
          auVar62[6] = -(pcVar3[6] == auVar57[6]);
          auVar62[7] = -(pcVar3[7] == auVar57[7]);
          auVar62[8] = -(pcVar3[8] == auVar57[0]);
          auVar62[9] = -(pcVar3[9] == auVar57[1]);
          auVar62[10] = -(pcVar3[10] == auVar57[2]);
          auVar62[0xb] = -(pcVar3[0xb] == auVar57[3]);
          auVar62[0xc] = -(pcVar3[0xc] == auVar57[4]);
          auVar62[0xd] = -(pcVar3[0xd] == auVar57[5]);
          auVar62[0xe] = -(pcVar3[0xe] == auVar57[6]);
          auVar62[0xf] = -(pcVar3[0xf] == auVar57[7]);
          uVar44 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar62[0xf] >> 7) << 0xf;
          uVar39 = (uint)uVar44;
          lVar36 = lStack_140;
          if (uVar44 != 0) {
LAB_140be0141:
            uVar40 = 0;
            for (uVar8 = uVar39; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            lVar48 = (uVar40 + uVar22 & plStack_228[1]) * -0x98;
            if (pppppppfStack_130 != *(float ********)(lVar47 + -0x98 + lVar48))
            goto code_r0x000140be016b;
            lVar47 = lVar47 + lVar48;
            pauVar38 = *(undefined1 (**) [16])(lVar47 + -0x60);
            lVar47 = *(longlong *)(lVar47 + -0x48);
            auVar57 = *pauVar38;
            pauVar51 = pauVar38 + 1;
            uVar39 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
            while (lVar47 != 0) {
              if ((short)uVar39 == 0) {
                do {
                  auVar57 = *pauVar51;
                  pauVar38 = pauVar38 + -0x68;
                  pauVar51 = pauVar51 + 1;
                  uVar39 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar39 == 0);
              }
              uVar40 = 0;
              for (uVar8 = uVar39; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar40 = uVar40 + 1;
              }
              uVar39 = uVar39 - 1 & uVar39;
              lVar47 = lVar47 + -1;
              uVar22 = (ulonglong)*(byte *)((longlong)pauVar38 + (ulonglong)uVar40 * -0x68 + -0x2e);
              lVar45 = uVar22 - 1;
              if (uVar22 < 2) {
                lVar45 = 0;
              }
              if (lVar45 == 0) {
                uVar1 = *(undefined4 *)((longlong)pauVar38 + (ulonglong)uVar40 * -0x68 + -0x68);
                uStack_f2 = 1;
                uVar21 = pdb_1419aad80(lStack_440);
                pppppppfVar31 = pppppppfStack_178;
                if (pppppppfStack_178 == pppppppfStack_188) {
                  uStack_f2 = 1;
                  pdb_142d7f010(&pppppppfStack_188);
                }
                *(undefined4 *)((longlong)pppppppfStack_180 + (longlong)pppppppfVar31 * 0xc) = uVar1
                ;
                *(undefined4 *)((longlong)pppppppfStack_180 + ((longlong)pppppppfVar31 * 3 + 1) * 4)
                     = uVar21;
                *(undefined4 *)((longlong)pppppppfStack_180 + ((longlong)pppppppfVar31 * 3 + 2) * 4)
                     = extraout_XMM0_Da;
                pppppppfStack_178 = (float *******)((longlong)pppppppfVar31 + 1);
                lVar36 = lStack_140;
              }
              else if ((int)lVar45 != 1) {
                uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143065382,0x28,&UNK_1430653b0);
              }
            }
            break;
          }
LAB_140be0178:
          auVar59[0] = -(*pcVar3 == (char)iVar9);
          auVar59[1] = -(pcVar3[1] == cVar67);
          auVar59[2] = -(pcVar3[2] == cVar68);
          auVar59[3] = -(pcVar3[3] == cVar69);
          auVar59[4] = -(pcVar3[4] == (char)iVar10);
          auVar59[5] = -(pcVar3[5] == cVar70);
          auVar59[6] = -(pcVar3[6] == cVar71);
          auVar59[7] = -(pcVar3[7] == cVar72);
          auVar59[8] = -(pcVar3[8] == (char)iVar11);
          auVar59[9] = -(pcVar3[9] == cVar73);
          auVar59[10] = -(pcVar3[10] == cVar74);
          auVar59[0xb] = -(pcVar3[0xb] == cVar75);
          auVar59[0xc] = -(pcVar3[0xc] == (char)iVar12);
          auVar59[0xd] = -(pcVar3[0xd] == cVar76);
          auVar59[0xe] = -(pcVar3[0xe] == cVar77);
          auVar59[0xf] = -(pcVar3[0xf] == cVar78);
          if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x2f,0) & 1) != 0) || (SUB161(auVar59 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
          uVar22 = uVar22 + lVar45 + 0x10;
          lVar45 = lVar45 + 0x10;
        } while( true );
      }
      auStack_348._0_8_ = pppppppfStack_178;
      pppppppfStack_358 = pppppppfStack_188;
      pppppppfStack_350 = pppppppfStack_180;
      if (*plStack_118 != 0) {
        pub_1406abac0((byte *)plStack_118[1],*plStack_118 * 0xc,4);
      }
      pppppppfVar50 = pppppppfStack_120;
      plStack_118[2] = auStack_348._0_8_;
      *plStack_118 = (longlong)pppppppfStack_358;
      plStack_118[1] = (longlong)pppppppfStack_350;
      pppppppfVar52 = *(float ********)(lVar36 + -0x298);
      uVar22 = (longlong)pppppppfVar52 * 8;
      if (0x7ffffffffffffffc < uVar22 || (ulonglong)pppppppfVar52 >> 0x3d != 0) goto LAB_140be18f3;
      uVar43 = *(undefined8 *)(lVar36 + -0x2a0);
      if (uVar22 == 0) {
        pppppppfVar23 = (float *******)0x4;
        pppppppfStack_110 = (float *******)0x0;
        pppppppfVar31 = pppppppfStack_110;
      }
      else {
        pdb_14007ee60();
        uVar49 = 4;
        pppppppfVar23 = (float *******)pub_1406abab0(uVar22,4);
        pppppppfVar31 = pppppppfVar52;
        if (pppppppfVar23 == (float *******)0x0) goto LAB_140be18f6;
      }
      pppppppfStack_110 = pppppppfVar31;
      if (pppppppfVar52 != (float *******)0x0) {
        pub_142e32760(pppppppfVar23,uVar43);
      }
      uVar33 = *(ulonglong *)(lVar36 + -0x280);
      uVar22 = uVar33 * 4;
      if (0x7ffffffffffffffc < uVar22 || uVar33 >> 0x3e != 0) {
LAB_140be193c:
        uVar49 = 0;
        pppppppfStack_100 = pppppppfVar23;
LAB_140be1946:
        pdb_142dc7e2a(uVar49,uVar22);
LAB_140be1b90:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (uVar22 == 0) {
        pbVar24 = (byte *)0x4;
      }
      else {
        puVar4 = *(undefined4 **)(lVar36 + -0x288);
        pppppppfStack_100 = pppppppfVar23;
        pdb_14007ee60();
        uVar49 = 4;
        pbVar24 = pub_1406abab0(uVar22,4);
        if (pbVar24 == (byte *)0x0) goto LAB_140be1946;
        pppppppfVar23 = pppppppfStack_100;
        pppppppfVar50 = pppppppfStack_120;
        if (uVar33 != 0) {
          uVar22 = uVar33 - 1;
          if (uVar33 < uVar33 - 1) {
            uVar22 = uVar33;
          }
          if (uVar22 < 8) {
            lVar36 = 0;
            uVar22 = uVar33;
            puVar32 = puVar4;
          }
          else {
            uVar22 = uVar22 + 1;
            uVar28 = (ulonglong)((uint)uVar22 & 7);
            if ((uVar22 & 7) == 0) {
              uVar28 = 8;
            }
            lVar36 = uVar22 - uVar28;
            uVar22 = uVar33 - lVar36;
            puVar32 = puVar4 + lVar36;
            lVar47 = 0;
            do {
              uVar49 = *(undefined8 *)((longlong)(puVar4 + lVar47) + 8);
              uVar43 = *(undefined8 *)(puVar4 + lVar47 + 4);
              uVar13 = *(undefined8 *)((longlong)(puVar4 + lVar47 + 4) + 8);
              *(undefined8 *)(pbVar24 + lVar47 * 4) = *(undefined8 *)(puVar4 + lVar47);
              *(undefined8 *)(pbVar24 + lVar47 * 4 + 8) = uVar49;
              *(undefined8 *)(pbVar24 + lVar47 * 4 + 0x10) = uVar43;
              *(undefined8 *)(pbVar24 + lVar47 * 4 + 0x10 + 8) = uVar13;
              lVar47 = lVar47 + 8;
            } while (lVar36 != lVar47);
          }
          pbVar37 = pbVar24 + lVar36 * 4;
          do {
            lVar36 = lStack_140;
            if (puVar32 == puVar4 + uVar33) break;
            uVar1 = *puVar32;
            puVar32 = puVar32 + 1;
            *(undefined4 *)pbVar37 = uVar1;
            pbVar37 = pbVar37 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      pppppppfVar31 = pppppppfStack_128;
      uVar1 = *(undefined4 *)(lVar36 + -0x278);
      lVar36 = plStack_118[3];
      if (!SBORROW8(0,lVar36)) {
        if (lVar36 != 0) {
          pub_1406abac0(*(byte **)*pauStack_1f8,lVar36 << 3,4);
        }
        if (plStack_118[6] != 0) {
          pub_1406abac0((byte *)plStack_118[7],plStack_118[6] << 2,4);
        }
      }
      plStack_118[3] = (longlong)pppppppfStack_110;
      plStack_118[4] = (longlong)pppppppfVar23;
      plStack_118[5] = (longlong)pppppppfVar52;
      plStack_118[6] = uVar33;
      plStack_118[7] = (longlong)pbVar24;
      plStack_118[8] = uVar33;
      *(undefined4 *)(plStack_118 + 9) = uVar1;
      *(undefined4 *)(plStack_118 + 0xb) = 1;
      *(float *******)((longlong)plStack_118 + 0x5c) = ppppppfVar35;
      pfVar27 = (float *)&UNK_143044340;
      if (*pcStack_220 != '\0') {
        pfVar27 = pfStack_390;
      }
      plStack_118[10] =
           CONCAT44(pfVar27[2] - (float)((ulonglong)ppppppfVar35 >> 0x20),
                    *pfVar27 - SUB84(ppppppfVar35,0));
      pppppppfVar52 = uStack_108;
    }
LAB_140be0bae:
    uVar22 = *puStack_3b8;
    uVar33 = uVar22 - *(ulonglong *)(lStack_490 + 0x18);
    if (uVar22 < *(ulonglong *)(lStack_490 + 0x18)) {
      uVar33 = 0;
    }
    uVar28 = uVar22 - *(ulonglong *)(lStack_490 + 0x38);
    if (uVar22 < *(ulonglong *)(lStack_490 + 0x38)) {
      uVar28 = 0;
    }
    uVar22 = *(ulonglong *)(lStack_490 + 0x30);
    lVar36 = uVar22 - uVar28;
    bVar53 = lVar36 != 0;
    if (uVar22 < uVar28) {
      lVar36 = 0;
    }
    uVar5 = *(ulonglong *)(lStack_490 + 0x10);
    lVar47 = uVar5 - uVar33;
    bVar54 = lVar47 != 0;
    if (uVar5 < uVar33) {
      lVar47 = 0;
    }
    uVar6 = *(ulonglong *)(lStack_490 + 0x40);
    *puStack_3b8 = uVar6 - (lVar47 + lVar36);
    if (uVar5 >= uVar33 && bVar54 || uVar22 >= uVar28 && bVar53) {
      *puStack_3b8 = uVar6;
      cVar20 = *(char *)(lStack_140 + -8);
      pdb_140df4540(&pppppppfStack_358,&ppppppfStack_3d0);
      *puStack_418 = uStack_238;
      lVar36 = *(longlong *)(lStack_3a0 + 0x30);
      uVar49 = *(undefined8 *)(lStack_3a0 + 0x40);
      if (lVar36 == *(longlong *)(lStack_3a0 + 0x20)) {
        pdb_142d7e6e0(lStack_410);
      }
      lVar47 = *(longlong *)(lStack_3a0 + 0x28);
      lVar45 = lVar36 * 0x20;
      *(undefined8 *)(lVar47 + lVar45) = uVar49;
      *(float ********)(lVar47 + 8 + lVar45) = pppppppfStack_130;
      *(float ********)(lVar47 + 0x10 + lVar45) = pppppppfStack_358;
      *(undefined4 *)(lVar47 + 0x18 + lVar45) = pppppppfStack_350._0_4_;
      *(char *)(lVar47 + 0x1c + lVar45) = cVar20 * '\x02';
      *(undefined1 *)(lVar47 + 0x1d + lVar45) = 0;
      *(longlong *)(lStack_3a0 + 0x30) = lVar36 + 1;
      *(longlong *)(lStack_3a0 + 0x40) = *(longlong *)(lStack_3a0 + 0x40) + 1;
    }
  }
LAB_140be0ccb:
  pppppppfStack_4a0 = pppppppfStack_460;
  if (pppppppfVar50 == pppppppfVar52) {
    return;
  }
  goto LAB_140bdfb2b;
code_r0x000140be02ec:
  uVar44 = (ushort)(uVar39 - 1) & (ushort)uVar39;
  uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar44);
  if (uVar44 == 0) goto LAB_140be02f9;
  goto LAB_140be02cc;
code_r0x000140be016b:
  uVar44 = (ushort)(uVar39 - 1) & (ushort)uVar39;
  uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar44);
  if (uVar44 == 0) goto LAB_140be0178;
  goto LAB_140be0141;
}

