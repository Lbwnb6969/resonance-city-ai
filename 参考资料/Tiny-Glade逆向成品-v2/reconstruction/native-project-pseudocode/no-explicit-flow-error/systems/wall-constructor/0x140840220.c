// VA 0x140840220, PDB extent 18274 bytes
// system_wall_constructor::stone_foundation_surface_systems::maintain_stone_foundation_surfaces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::stone_foundation_surface_systems::maintain_stone_foundation_surfaces
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
   Extent: 18274 */

void pdb_140840220(undefined8 *param_1,undefined8 *param_2,byte ******param_3,byte ******param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  byte ***pppbVar1;
  byte *******pppppppbVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  byte *****pppppbVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  byte ***pppbVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [12];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined7 uVar20;
  float fVar21;
  float fVar22;
  longlong *plVar23;
  char cVar24;
  char cVar25;
  int iVar26;
  undefined4 uVar27;
  byte **ppbVar28;
  byte ******ppppppbVar29;
  byte *******pppppppbVar30;
  byte *pbVar31;
  undefined8 uVar32;
  byte *****pppppbVar33;
  longlong lVar34;
  longlong lVar35;
  byte ****ppppbVar36;
  float *pfVar37;
  longlong lVar38;
  byte ******ppppppbVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  byte ******ppppppbVar43;
  longlong lVar44;
  char *pcVar45;
  ushort uVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong *plVar49;
  ulonglong uVar50;
  undefined8 uVar51;
  float *pfVar52;
  ulonglong *puVar53;
  byte ***pppbVar54;
  bool bVar55;
  byte bVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar60 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar61 [16];
  float fVar62;
  uint uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 unaff_XMM12_Ba;
  undefined1 unaff_XMM12_Bb;
  undefined1 unaff_XMM12_Bc;
  char cVar79;
  undefined1 unaff_XMM12_Bd;
  char cVar80;
  undefined1 unaff_XMM12_Be;
  undefined1 unaff_XMM12_Bf;
  char cVar81;
  undefined1 unaff_XMM12_Bg;
  char cVar82;
  undefined1 unaff_XMM12_Bh;
  char cVar83;
  undefined1 unaff_XMM12_Bi;
  undefined1 unaff_XMM12_Bj;
  char cVar84;
  undefined1 unaff_XMM12_Bk;
  char cVar85;
  undefined1 unaff_XMM12_Bl;
  char cVar86;
  undefined1 unaff_XMM12_Bm;
  undefined1 unaff_XMM12_Bn;
  char cVar87;
  undefined1 unaff_XMM12_Bo;
  char cVar88;
  undefined1 unaff_XMM12_Bp;
  char cVar89;
  float fVar90;
  uint uVar91;
  uint uVar92;
  undefined4 uStack_515;
  undefined4 uStack_511;
  float fStack_50d;
  byte *******pppppppbStack_508;
  byte *******pppppppbStack_500;
  byte *******pppppppbStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  byte ******ppppppbStack_4a8;
  undefined8 uStack_4a0;
  longlong *plStack_498;
  undefined8 uStack_490;
  byte *****pppppbStack_488;
  undefined8 uStack_480;
  undefined4 *puStack_478;
  byte *****pppppbStack_470;
  longlong *plStack_468;
  ulonglong *puStack_460;
  longlong lStack_458;
  ulonglong uStack_450;
  float *pfStack_448;
  longlong lStack_440;
  float *pfStack_438;
  ulonglong uStack_430;
  byte *******pppppppbStack_428;
  byte ******ppppppbStack_420;
  byte *******pppppppbStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  byte ******ppppppbStack_3c8;
  byte ******ppppppbStack_3c0;
  byte ******ppppppbStack_3b8;
  ulonglong uStack_3b0;
  ulonglong uStack_3a8;
  longlong lStack_3a0;
  byte *******pppppppbStack_398;
  float *pfStack_390;
  byte *******pppppppbStack_388;
  byte ******ppppppbStack_380;
  byte *******pppppppbStack_378;
  longlong lStack_370;
  float *pfStack_368;
  longlong lStack_360;
  undefined8 uStack_358;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  undefined8 uStack_340;
  float fStack_338;
  byte ******ppppppbStack_330;
  float *pfStack_328;
  byte *pbStack_320;
  byte *******pppppppbStack_318;
  byte *pbStack_310;
  byte *******pppppppbStack_308;
  byte *******pppppppbStack_300;
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  undefined4 uStack_2e8;
  undefined3 uStack_2e4;
  byte *******pppppppbStack_2e0;
  byte ******ppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte ******ppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  undefined8 uStack_2b0;
  byte ******ppppppbStack_2a8;
  longlong lStack_2a0;
  longlong *plStack_298;
  undefined4 uStack_290;
  float fStack_28c;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  byte *******pppppppbStack_270;
  float *pfStack_268;
  byte *******pppppppbStack_260;
  longlong lStack_258;
  undefined8 uStack_250;
  byte ******ppppppbStack_248;
  undefined8 uStack_240;
  byte *******pppppppbStack_238;
  byte ******ppppppbStack_230;
  byte *******pppppppbStack_228;
  byte *******pppppppbStack_218;
  byte *pbStack_210;
  byte *******pppppppbStack_208;
  undefined8 uStack_1f8;
  byte ******ppppppbStack_1f0;
  byte *******pppppppbStack_1e8;
  byte ******ppppppbStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float *pfStack_1c0;
  float *pfStack_1b8;
  ulonglong uStack_1b0;
  float *pfStack_1a8;
  ulonglong uStack_1a0;
  float fStack_194;
  longlong lStack_190;
  byte ******ppppppbStack_188;
  byte *pbStack_180;
  undefined1 auStack_178 [16];
  byte *******pppppppbStack_160;
  undefined8 uStack_158;
  byte *pbStack_150;
  byte *******pppppppbStack_148;
  undefined1 uStack_13d;
  float fStack_13c;
  undefined3 uStack_138;
  undefined4 uStack_135;
  undefined4 uStack_131;
  float fStack_12d;
  undefined1 uStack_129;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  undefined8 uStack_118;
  float *pfStack_110;
  float *pfStack_108;
  byte ******ppppppbStack_100;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  LOCK();
  bVar55 = DAT_143ca4200 == '\0';
  if (bVar55) {
    DAT_143ca4200 = '\x01';
  }
  UNLOCK();
  ppppppbStack_1e0 = (byte ******)param_1;
  if (!bVar55) {
    pdb_142dc6be0(&DAT_143ca4200);
  }
  puVar53 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar63 = 0;
    lVar35 = _DAT_143ca4210;
  }
  else {
    uVar63 = pdb_142dc79e0();
    uVar63 = uVar63 ^ 1;
    lVar35 = _DAT_143ca4210;
  }
  cVar25 = (char)uVar63;
  _DAT_143ca4210 = lVar35;
  if (DAT_143ca4201 != '\0') {
    pppppppbStack_428 = (byte *******)&DAT_143ca4200;
    uVar40 = (ulonglong)ppppppbStack_420 >> 8;
    ppppppbStack_420 = (byte ******)CONCAT71((int7)uVar40,cVar25);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14300b338,0x2b,&pppppppbStack_428,&UNK_14300b318,&UNK_14300b300);
  }
  DAT_143ca4201 = 0;
  if (_DAT_143ca4218 != 0) {
    lVar34 = _DAT_143ca4218 * 0x10;
    uVar40 = lVar34 - 0x10;
    lVar38 = lVar35;
    if ((~(uint)uVar40 & 0x70) != 0) {
      lVar44 = -(ulonglong)(((uint)(uVar40 >> 4) & 0xfffffff) + 1 & 7);
      do {
        *(int *)(lVar38 + 8) = *(int *)(lVar38 + 8) + -1;
        lVar38 = lVar38 + 0x10;
        lVar44 = lVar44 + 1;
      } while (lVar44 != 0);
    }
    if (0x6f < uVar40) {
      do {
        *(int *)(lVar38 + 8) = *(int *)(lVar38 + 8) + -1;
        *(int *)(lVar38 + 0x18) = *(int *)(lVar38 + 0x18) + -1;
        *(int *)(lVar38 + 0x28) = *(int *)(lVar38 + 0x28) + -1;
        *(int *)(lVar38 + 0x38) = *(int *)(lVar38 + 0x38) + -1;
        *(int *)(lVar38 + 0x48) = *(int *)(lVar38 + 0x48) + -1;
        *(int *)(lVar38 + 0x58) = *(int *)(lVar38 + 0x58) + -1;
        *(int *)(lVar38 + 0x68) = *(int *)(lVar38 + 0x68) + -1;
        *(int *)(lVar38 + 0x78) = *(int *)(lVar38 + 0x78) + -1;
        lVar38 = lVar38 + 0x80;
      } while (lVar38 != lVar35 + lVar34);
    }
    if (_DAT_143ca4218 != 0) {
      uVar40 = 0;
      lVar35 = _DAT_143ca4210;
LAB_140840380:
      if (-1 < *(int *)(lVar35 + 8)) goto code_r0x00014084038a;
      lStack_258 = _DAT_143ca4210;
      ppppppbStack_100 = (byte ******)_DAT_143ca4218;
      uVar47 = (ulonglong)uStack_250 >> 0x20;
      uStack_250 = CONCAT44((int)uVar47,uVar63);
      uVar47 = uVar40 + 1;
      uStack_3b0 = uVar40;
      uStack_3a8 = uVar47;
      pdb_1413fffc0();
      while (uVar47 < ppppppbStack_100) {
        while (puVar4 = (undefined8 *)(lStack_258 + uVar47 * 0x10),
              -1 < *(int *)(lStack_258 + 8 + uVar47 * 0x10)) {
          uVar51 = puVar4[1];
          puVar5 = (undefined8 *)(lStack_258 + uVar40 * 0x10);
          *puVar5 = *puVar4;
          puVar5[1] = uVar51;
          uVar40 = uVar40 + 1;
          uVar47 = uVar47 + 1;
          if (ppppppbStack_100 <= uVar47) goto LAB_140842f63;
        }
        uVar47 = uVar47 + 1;
        uStack_3b0 = uVar40;
        uStack_3a8 = uVar47;
        pdb_1413fffc0();
      }
LAB_140842f63:
      cVar25 = (char)uStack_250;
      _DAT_143ca4218 = uVar40;
    }
  }
joined_r0x000140842f80:
  ppppppbStack_188 = param_3;
  ppppppbStack_100 = param_4;
  if (((cVar25 == '\0') && ((*puVar53 & 0x7fffffffffffffff) != 0)) &&
     (cVar25 = pdb_142dc79e0(), cVar25 == '\0')) {
    DAT_143ca4201 = 1;
  }
  cVar25 = DAT_143ca4200;
  LOCK();
  DAT_143ca4200 = 0;
  UNLOCK();
  if (cVar25 == '\x02') {
    pdb_142dc6ca0(&DAT_143ca4200);
  }
  puVar53 = (ulonglong *)*param_8;
  lVar35 = param_8[1];
  uVar40 = *puVar53;
  uVar41 = 0;
  uVar47 = uVar40 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar40 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar47 = uVar41;
  }
  uVar50 = uVar40 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar40 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar50 = uVar41;
  }
  lVar38 = uVar47 * 0x10 + *(longlong *)(lVar35 + 8);
  uVar40 = *(ulonglong *)(lVar35 + 0x10) - uVar47;
  if (*(ulonglong *)(lVar35 + 0x10) < uVar47) {
    lVar38 = 8;
    uVar40 = uVar41;
  }
  lVar34 = uVar50 * 0x10 + *(longlong *)(lVar35 + 0x28);
  uVar47 = *(ulonglong *)(lVar35 + 0x30) - uVar50;
  if (*(ulonglong *)(lVar35 + 0x30) < uVar50) {
    lVar34 = 8;
    uVar47 = uVar41;
  }
  *puVar53 = (*(longlong *)(lVar35 + 0x40) - uVar47) - uVar40;
  lVar44 = uVar47 * 0x10 + lVar34;
  lVar35 = lVar38;
  do {
    if ((lVar35 == 0) || (lVar35 == uVar40 * 0x10 + lVar38)) {
      if ((lVar34 == 0) || (lVar34 == lVar44)) goto LAB_140840492;
      lVar42 = 0;
      lVar35 = lVar34;
      lVar34 = lVar34 + 0x10;
    }
    else {
      lVar42 = lVar35 + 0x10;
    }
    *puVar53 = *puVar53 + 1;
    pdb_14083ff50(ppppppbStack_1e0,param_6,*(undefined8 *)(lVar35 + 8));
    lVar35 = lVar42;
  } while( true );
code_r0x00014084038a:
  uVar40 = uVar40 + 1;
  lVar35 = lVar35 + 0x10;
  if (_DAT_143ca4218 == uVar40) goto joined_r0x000140842f80;
  goto LAB_140840380;
LAB_140840492:
  puVar53 = (ulonglong *)*param_7;
  lVar35 = param_7[1];
  uVar40 = *puVar53;
  uVar41 = 0;
  uVar47 = uVar40 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar40 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar47 = uVar41;
  }
  uVar50 = uVar40 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar40 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar50 = uVar41;
  }
  lVar38 = uVar47 * 0x10 + *(longlong *)(lVar35 + 8);
  uVar40 = *(ulonglong *)(lVar35 + 0x10) - uVar47;
  if (*(ulonglong *)(lVar35 + 0x10) < uVar47) {
    lVar38 = 8;
    uVar40 = uVar41;
  }
  lVar34 = uVar50 * 0x10 + *(longlong *)(lVar35 + 0x28);
  uVar47 = *(ulonglong *)(lVar35 + 0x30) - uVar50;
  if (*(ulonglong *)(lVar35 + 0x30) < uVar50) {
    lVar34 = 8;
    uVar47 = uVar41;
  }
  *puVar53 = (*(longlong *)(lVar35 + 0x40) - uVar47) - uVar40;
  fVar22 = _DAT_142e36f50;
  fVar21 = _DAT_142e36f28;
  pppppbVar8 = *ppppppbStack_188;
  plStack_498 = (longlong *)*param_5;
  plStack_298 = (longlong *)param_6[1];
  if (plStack_298 == (longlong *)0x0) {
    plStack_298 = (longlong *)param_6[2];
  }
  lStack_258 = uVar40 * 0x10 + lVar38;
  uStack_250 = uVar47 * 0x10 + lVar34;
  uStack_490 = *param_2;
  pppppbStack_488 = *ppppppbStack_100;
  pppppbStack_470 = ppppppbStack_100[1];
  plStack_468 = plStack_498 + 4;
  uStack_34c = *(undefined4 *)((longlong)ppppppbStack_1e0 + 0x1c);
  uStack_480 = *ppppppbStack_1e0;
  puStack_478 = (undefined4 *)ppppppbStack_1e0[2];
  uStack_4a0 = *param_6;
  iVar13 = -(uint)(CONCAT13(unaff_XMM12_Bd,
                            CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))) ==
                  CONCAT13(unaff_XMM12_Bd,
                           CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))));
  cVar25 = (char)((uint)iVar13 >> 8);
  cVar79 = (char)((uint)iVar13 >> 0x10);
  cVar80 = (char)((uint)iVar13 >> 0x18);
  iVar14 = -(uint)(CONCAT13(unaff_XMM12_Bh,
                            CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))) ==
                  CONCAT13(unaff_XMM12_Bh,
                           CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))));
  cVar81 = (char)((uint)iVar14 >> 8);
  cVar82 = (char)((uint)iVar14 >> 0x10);
  cVar83 = (char)((uint)iVar14 >> 0x18);
  iVar15 = -(uint)(CONCAT13(unaff_XMM12_Bl,
                            CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))) ==
                  CONCAT13(unaff_XMM12_Bl,
                           CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))));
  cVar84 = (char)((uint)iVar15 >> 8);
  cVar85 = (char)((uint)iVar15 >> 0x10);
  cVar86 = (char)((uint)iVar15 >> 0x18);
  iVar16 = -(uint)(CONCAT13(unaff_XMM12_Bp,
                            CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))) ==
                  CONCAT13(unaff_XMM12_Bp,
                           CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))));
  cVar87 = (char)((uint)iVar16 >> 8);
  cVar88 = (char)((uint)iVar16 >> 0x10);
  cVar89 = (char)((uint)iVar16 >> 0x18);
LAB_1408405d0:
  do {
    do {
      if ((lVar38 == 0) || (lVar38 == lStack_258)) {
        if ((lVar34 == 0) || (lVar34 == uStack_250)) {
          return;
        }
        lVar38 = 0;
        lVar35 = lVar34 + 0x10;
        lVar44 = lVar34;
      }
      else {
        lVar35 = lVar34;
        lVar44 = lVar38;
        lVar38 = lVar38 + 0x10;
      }
      lVar34 = lVar35;
      *puVar53 = *puVar53 + 1;
      pdb_14083ff50(ppppppbStack_1e0,param_6,*(undefined8 *)(lVar44 + 8));
    } while (pppppbVar8[3] == (byte ****)0x0);
    plVar49 = (longlong *)(lVar44 + 8);
    uVar40 = pdb_1400af0a0(pppppbVar8 + 4,plVar49);
    ppppbVar9 = *pppppbVar8;
    bVar56 = (byte)(uVar40 >> 0x39);
    auVar60 = ZEXT216(CONCAT11(bVar56,bVar56));
    auVar60 = pshuflw(auVar60,auVar60,0);
    lVar35 = 0;
    while( true ) {
      uVar40 = uVar40 & (ulonglong)pppppbVar8[1];
      auVar61 = *(undefined1 (*) [16])((longlong)ppppbVar9 + uVar40);
      auVar67[0] = -(auVar61[0] == auVar60[0]);
      auVar67[1] = -(auVar61[1] == auVar60[1]);
      auVar67[2] = -(auVar61[2] == auVar60[2]);
      auVar67[3] = -(auVar61[3] == auVar60[3]);
      auVar67[4] = -(auVar61[4] == auVar60[4]);
      auVar67[5] = -(auVar61[5] == auVar60[5]);
      auVar67[6] = -(auVar61[6] == auVar60[6]);
      auVar67[7] = -(auVar61[7] == auVar60[7]);
      auVar67[8] = -(auVar61[8] == auVar60[0]);
      auVar67[9] = -(auVar61[9] == auVar60[1]);
      auVar67[10] = -(auVar61[10] == auVar60[2]);
      auVar67[0xb] = -(auVar61[0xb] == auVar60[3]);
      auVar67[0xc] = -(auVar61[0xc] == auVar60[4]);
      auVar67[0xd] = -(auVar61[0xd] == auVar60[5]);
      auVar67[0xe] = -(auVar61[0xe] == auVar60[6]);
      auVar67[0xf] = -(auVar61[0xf] == auVar60[7]);
      uVar46 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
      uVar63 = (uint)uVar46;
      if (uVar46 != 0) {
        do {
          uVar91 = 0;
          for (uVar92 = uVar63; (uVar92 & 1) == 0; uVar92 = uVar92 >> 1 | 0x80000000) {
            uVar91 = uVar91 + 1;
          }
          uVar47 = uVar91 + uVar40 & (ulonglong)pppppbVar8[1];
          lVar44 = uVar47 * -0x2b0;
          if ((byte ***)*plVar49 == ppppbVar9[uVar47 * -0x56 + -0x56]) {
            cVar24 = pdb_1408ff980((longlong)ppppbVar9 + lVar44 + -9);
            if (((cVar24 == '\0') || (1 < *(uint *)(ppppbVar9 + uVar47 * -0x56 + -10))) ||
               (*(float *)((longlong)ppppbVar9 + lVar44 + -0x14) <= 0.0)) goto LAB_1408405d0;
            uStack_2b0 = 0;
            ppppppbStack_2a8 = (byte ******)0x8;
            lStack_2a0 = 0;
            pppppppbStack_2c8 = (byte *******)0x0;
            ppppppbStack_2c0 = (byte ******)0x8;
            pppppppbStack_2b8 = (byte *******)0x0;
            lStack_3a0 = *plVar49;
            uStack_f1 = 1;
            uStack_f2 = 1;
            puStack_460 = puVar53;
            uVar40 = pdb_140b54b40(pppppbVar8);
            plVar23 = plStack_498;
            if (((((uVar40 & 0xffffffff) == 0) ||
                 (ppppbVar36 = (byte ****)(uVar40 & 0xffffffff ^ 0xffffffff),
                 pppppbStack_470[2] <= ppppbVar36)) ||
                ((ppppbVar36 = pppppbStack_470[1] + (longlong)ppppbVar36 * 3,
                 *(int *)(ppppbVar36 + 2) != (int)(uVar40 >> 0x20) ||
                 ((*(int *)ppppbVar36 == 0 ||
                  (pppbVar54 = ppppbVar36[1],
                  pppppbStack_488[7] <= (byte ****)((ulonglong)pppbVar54 & 0xffffffff))))))) ||
               (((ulonglong)pppppbStack_488[5][(ulonglong)pppbVar54 >> 6 & 0x3ffffff] >>
                 ((ulonglong)pppbVar54 & 0x3f) & 1) == 0)) {
              auVar60._8_8_ = 0;
              auVar60._0_8_ = auStack_178._8_8_;
              auStack_178 = auVar60 << 0x40;
              lVar35 = plStack_498[3];
            }
            else {
              uVar40 = (ulonglong)pppbVar54 >> 0x20;
              ppppbVar10 = pppppbStack_470[0x34];
              if ((pppppbStack_488[0x22] < ppppbVar10[uVar40 * 9 + 8]) &&
                 (ppppbVar10[uVar40 * 9 + 7][(longlong)pppppbStack_488[0x22]] != (byte **)0x0)) {
                ppbVar28 = ppppbVar10[uVar40 * 9 + 3]
                           [~(ulonglong)ppppbVar10[uVar40 * 9 + 7][(longlong)pppppbStack_488[0x22]]
                            * 6 + 2];
              }
              else {
                ppbVar28 = (byte **)0x0;
              }
              auStack_178._0_8_ = ppbVar28 + (ulonglong)~*(uint *)((longlong)ppppbVar36 + 4) * 0xb;
              lVar35 = plStack_498[3];
            }
            if (lVar35 == 0) goto LAB_140840915;
            uVar41 = pdb_1400af0a0(plStack_468,plVar49);
            lVar35 = *plVar23;
            uVar40 = plVar23[1];
            bVar56 = (byte)(uVar41 >> 0x39);
            auVar60 = ZEXT216(CONCAT11(bVar56,bVar56));
            auVar60 = pshuflw(auVar60,auVar60,0);
            lVar42 = 0;
            goto LAB_140840885;
          }
          uVar46 = (ushort)(uVar63 - 1) & (ushort)uVar63;
          uVar63 = CONCAT22((short)(uVar63 - 1 >> 0x10),uVar46);
        } while (uVar46 != 0);
      }
      auVar64[0] = -(auVar61[0] == (char)iVar13);
      auVar64[1] = -(auVar61[1] == cVar25);
      auVar64[2] = -(auVar61[2] == cVar79);
      auVar64[3] = -(auVar61[3] == cVar80);
      auVar64[4] = -(auVar61[4] == (char)iVar14);
      auVar64[5] = -(auVar61[5] == cVar81);
      auVar64[6] = -(auVar61[6] == cVar82);
      auVar64[7] = -(auVar61[7] == cVar83);
      auVar64[8] = -(auVar61[8] == (char)iVar15);
      auVar64[9] = -(auVar61[9] == cVar84);
      auVar64[10] = -(auVar61[10] == cVar85);
      auVar64[0xb] = -(auVar61[0xb] == cVar86);
      auVar64[0xc] = -(auVar61[0xc] == (char)iVar16);
      auVar64[0xd] = -(auVar61[0xd] == cVar87);
      auVar64[0xe] = -(auVar61[0xe] == cVar88);
      auVar64[0xf] = -(auVar61[0xf] == cVar89);
      if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar64 >> 0x5f,0) & 1) != 0) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar64 >> 0x6f,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) ||
          auVar64[0xf] < '\0') break;
      uVar40 = uVar40 + lVar35 + 0x10;
      lVar35 = lVar35 + 0x10;
    }
  } while( true );
LAB_140840885:
  uVar41 = uVar41 & uVar40;
  auVar61 = *(undefined1 (*) [16])(lVar35 + uVar41);
  auVar68[0] = -(auVar61[0] == auVar60[0]);
  auVar68[1] = -(auVar61[1] == auVar60[1]);
  auVar68[2] = -(auVar61[2] == auVar60[2]);
  auVar68[3] = -(auVar61[3] == auVar60[3]);
  auVar68[4] = -(auVar61[4] == auVar60[4]);
  auVar68[5] = -(auVar61[5] == auVar60[5]);
  auVar68[6] = -(auVar61[6] == auVar60[6]);
  auVar68[7] = -(auVar61[7] == auVar60[7]);
  auVar68[8] = -(auVar61[8] == auVar60[0]);
  auVar68[9] = -(auVar61[9] == auVar60[1]);
  auVar68[10] = -(auVar61[10] == auVar60[2]);
  auVar68[0xb] = -(auVar61[0xb] == auVar60[3]);
  auVar68[0xc] = -(auVar61[0xc] == auVar60[4]);
  auVar68[0xd] = -(auVar61[0xd] == auVar60[5]);
  auVar68[0xe] = -(auVar61[0xe] == auVar60[6]);
  auVar68[0xf] = -(auVar61[0xf] == auVar60[7]);
  uVar46 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar63 = (uint)uVar46;
  if (uVar46 != 0) {
    do {
      uVar91 = 0;
      for (uVar92 = uVar63; (uVar92 & 1) == 0; uVar92 = uVar92 >> 1 | 0x80000000) {
        uVar91 = uVar91 + 1;
      }
      lVar48 = lVar35 + (uVar91 + uVar41 & uVar40) * -0x20;
      if (*plVar49 == *(longlong *)(lVar48 + -0x20)) {
        lVar35 = *(longlong *)(lVar48 + -0x10);
        puVar53 = *(ulonglong **)(lVar48 + -8);
        goto LAB_140840917;
      }
      uVar46 = (ushort)(uVar63 - 1) & (ushort)uVar63;
      uVar63 = CONCAT22((short)(uVar63 - 1 >> 0x10),uVar46);
    } while (uVar46 != 0);
  }
  auVar65[0] = -(auVar61[0] == (char)iVar13);
  auVar65[1] = -(auVar61[1] == cVar25);
  auVar65[2] = -(auVar61[2] == cVar79);
  auVar65[3] = -(auVar61[3] == cVar80);
  auVar65[4] = -(auVar61[4] == (char)iVar14);
  auVar65[5] = -(auVar61[5] == cVar81);
  auVar65[6] = -(auVar61[6] == cVar82);
  auVar65[7] = -(auVar61[7] == cVar83);
  auVar65[8] = -(auVar61[8] == (char)iVar15);
  auVar65[9] = -(auVar61[9] == cVar84);
  auVar65[10] = -(auVar61[10] == cVar85);
  auVar65[0xb] = -(auVar61[0xb] == cVar86);
  auVar65[0xc] = -(auVar61[0xc] == (char)iVar16);
  auVar65[0xd] = -(auVar61[0xd] == cVar87);
  auVar65[0xe] = -(auVar61[0xe] == cVar88);
  auVar65[0xf] = -(auVar61[0xf] == cVar89);
  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') goto LAB_140840915;
  uVar41 = uVar41 + lVar42 + 0x10;
  lVar42 = lVar42 + 0x10;
  goto LAB_140840885;
LAB_140840915:
  lVar35 = 0;
LAB_140840917:
  if (lVar35 == 0) {
    lVar35 = 8;
    puVar53 = (ulonglong *)0x0;
  }
  uStack_f1 = 1;
  uStack_f2 = 1;
  uStack_240 = pdb_140a92040(uStack_490);
  lStack_2a0 = 0;
  ppppppbStack_188 = (byte ******)pppppppbStack_2b8;
  pppppppbStack_2b8 = (byte *******)0x0;
  ppppppbStack_248 = ppppppbStack_2c0;
  ppppppbStack_100 = (byte ******)0x0;
  ppppppbVar29 = ppppppbStack_2c0;
  while (ppppppbStack_188 != ppppppbStack_100) {
    ppppppbStack_100 = (byte ******)((longlong)ppppppbStack_100 + 1);
    pdb_1413fffc0(ppppppbVar29);
    ppppppbVar29 = ppppppbVar29 + 1;
  }
  fVar7 = *(float *)(ppppbVar9 + uVar47 * -0x56 + -0x4f);
  if (auStack_178._0_8_ == 0) {
    uStack_348 = 0;
  }
  else {
    uStack_f1 = 1;
    uStack_f2 = 1;
    uStack_348 = pdb_140b77b50();
  }
  uStack_f1 = 1;
  uStack_f2 = 1;
  iVar26 = pdb_140930190(ppppbVar9 + uVar47 * -0x56 + -0x55);
  uVar59 = _DAT_142e4e650;
  uVar69 = _UNK_142e4e654;
  uVar70 = _UNK_142e4e658;
  uVar71 = _UNK_142e4e65c;
  if (iVar26 == 0) goto LAB_140842b39;
  fVar57 = _DAT_142e37988;
  if (*(int *)(ppppbVar9 + uVar47 * -0x56 + -10) == 0) {
    fVar57 = (float)pub_142e32b00(fVar7 * _DAT_142e37988);
    if (fVar57 <= fVar21) {
      fVar57 = fVar21;
    }
    fVar57 = fVar57 / fVar7;
  }
  uStack_f1 = 1;
  uStack_f2 = 1;
  fStack_27c = fVar57;
  pdb_1414853f0(&pppppppbStack_428,ppppbVar9 + uVar47 * -0x56 + -0x55,lVar35,puVar53);
  ppppppbVar29 = ppppppbStack_420;
  if (pppppppbStack_418 != (byte *******)0x0) {
    if (pppppppbStack_418 == (byte *******)0x1) {
      uVar40 = 0;
    }
    else {
      ppppppbVar39 = ppppppbStack_420 + 3;
      ppppppbVar43 = ppppppbStack_420 + 2;
      uVar40 = 0;
      do {
        pppppbVar33 = ppppppbVar39[-2];
        *(float *)(ppppppbVar43 + -2) = *(float *)(ppppppbVar39 + -3);
        *(byte ******)((longlong)ppppppbVar43 + -0xc) = pppppbVar33;
        uVar40 = uVar40 + 2;
        pppppbVar33 = *ppppppbVar39;
        *(float *)((longlong)ppppppbVar43 + -4) = *(float *)(ppppppbVar39 + -1);
        *ppppppbVar43 = pppppbVar33;
        ppppppbVar39 = ppppppbVar39 + 4;
        ppppppbVar43 = ppppppbVar43 + 3;
      } while (((ulonglong)pppppppbStack_418 & 0x7fffffffffffffe) != uVar40);
      if (((ulonglong)pppppppbStack_418 & 1) == 0) goto LAB_140840b1f;
    }
    pppppbVar33 = ppppppbStack_420[uVar40 * 2 + 1];
    *(float *)((longlong)ppppppbStack_420 + uVar40 * 0xc) =
         *(float *)(ppppppbStack_420 + uVar40 * 2);
    *(byte ******)((longlong)ppppppbStack_420 + (uVar40 * 3 + 1) * 4) = pppppbVar33;
  }
LAB_140840b1f:
  pppppppbStack_398 = pppppppbStack_418;
  ppppppbStack_248 = (byte ******)((longlong)pppppppbStack_428 << 4);
  ppppppbStack_330 = (byte ******)(((ulonglong)ppppppbStack_248 / 3 & 0xfffffffffffffffc) * 3);
  if (ppppppbStack_248 == ppppppbStack_330) {
    ppppppbStack_188 = ppppppbStack_420;
  }
  else {
    ppppppbStack_188 =
         (byte ******)
         pub_1406abad0((byte *)ppppppbStack_420,(ulonglong)ppppppbStack_248,4,
                       (ulonglong)ppppppbStack_330);
    if (ppppppbStack_188 == (byte ******)0x0) {
      ppppppbStack_1e0 = ppppppbVar29;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,ppppppbStack_330);
    }
  }
  pdb_14017ede0(&uStack_138,ppppbVar9[uVar47 * -0x56 + -0x43],
                (longlong)ppppbVar9[uVar47 * -0x56 + -0x43] +
                (longlong)ppppbVar9[uVar47 * -0x56 + -0x42] * 0xc);
  pppppppbStack_4f8 = pppppppbStack_128;
  pppppppbStack_508 = (byte *******)CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138))
  ;
  pppppppbStack_500 = (byte *******)CONCAT17(uStack_129,CONCAT43(fStack_12d,uStack_131._1_3_));
  pdb_140080c90(&pppppppbStack_428,&pppppppbStack_508,0);
  if (SBORROW8(0,(longlong)pppppppbStack_428)) {
    pppppppbStack_508 = (byte *******)ppppppbStack_420;
    pppppppbStack_500 = pppppppbStack_418;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143306430,0x2b,&pppppppbStack_508,&UNK_143306410,&UNK_143306a30);
  }
  uStack_358 = CONCAT44(uStack_3f4,uStack_3f8);
  lStack_370 = CONCAT44(uStack_40c,uStack_410);
  pfStack_368 = (float *)CONCAT44(uStack_404,uStack_408);
  lStack_360 = CONCAT44(uStack_3fc,uStack_400);
  pppppppbStack_378 = pppppppbStack_418;
  pppppppbStack_388 = pppppppbStack_428;
  ppppppbStack_380 = ppppppbStack_420;
  pdb_140810910(&pppppppbStack_508,ppppbVar9 + uVar47 * -0x56 + -0x55,auStack_178._0_8_);
  pppppppbVar30 = &ppppppbStack_4a8;
  ppppppbStack_3b8 = ppppppbStack_4a8;
  if ((byte ******)0x4 < ppppppbStack_4a8) {
    pppppppbVar30 = (byte *******)&pppppppbStack_500;
    ppppppbStack_3b8 = (byte ******)pppppppbStack_500;
  }
  *pppppppbVar30 = (byte ******)0x0;
  ppppppbStack_3c8 = ppppppbStack_4a8;
  uStack_3d8 = uStack_4b8;
  uStack_3d0 = uStack_4b0;
  uStack_3e8 = uStack_4c8;
  uStack_3e0 = uStack_4c0;
  uStack_3f8 = uStack_4d8;
  uStack_3f4 = uStack_4d4;
  uStack_3f0 = uStack_4d0;
  uStack_3ec = uStack_4cc;
  uStack_408 = uStack_4e8;
  uStack_404 = uStack_4e4;
  uStack_400 = uStack_4e0;
  uStack_3fc = uStack_4dc;
  pppppppbStack_418 = pppppppbStack_4f8;
  uStack_410 = uStack_4f0;
  uStack_40c = uStack_4ec;
  pppppppbStack_428 = pppppppbStack_508;
  ppppppbStack_420 = (byte ******)pppppppbStack_500;
  ppppppbStack_3c0 = (byte ******)0x0;
  ppppppbStack_100 = (byte ******)((longlong)ppppppbStack_188 + (longlong)pppppppbStack_398 * 0xc);
  lStack_458 = (longlong)pppppppbStack_398 * 2;
  uStack_450 = (longlong)pppppppbStack_398 * 0xc - 0xc;
  pfStack_448 = (float *)((longlong)ppppppbStack_188 + 0x14);
  while (ppppppbVar29 = ppppppbStack_3c0, uVar71 = _UNK_142e4e65c, uVar70 = _UNK_142e4e658,
        uVar69 = _UNK_142e4e654, uVar59 = _DAT_142e4e650, ppppppbVar39 = ppppppbStack_3c0,
        ppppppbStack_3c0 != ppppppbStack_3b8) {
    pppppppbVar30 = (byte *******)&pppppppbStack_428;
    if ((byte ******)0x4 < ppppppbStack_3c8) {
      pppppppbVar30 = pppppppbStack_428;
    }
    ppppppbStack_3c0 = (byte ******)((longlong)ppppppbStack_3c0 + 1);
    cVar24 = *(char *)((longlong)pppppppbVar30 + (longlong)ppppppbVar29 * 0x18 + 0x14);
    ppppppbVar39 = ppppppbStack_3b8;
    if (cVar24 == '\x02') break;
    auStack_178[0] = cVar24;
    fVar57 = *(float *)(pppppppbVar30 + (longlong)ppppppbVar29 * 3);
    fVar72 = *(float *)((longlong)pppppppbVar30 + (longlong)ppppppbVar29 * 0x18 + 4);
    uStack_1b0 = 0;
    pfStack_1a8 = (float *)0x4;
    uStack_1a0 = 0;
    pdb_142d89720(&uStack_1b0);
    *pfStack_1a8 = fVar57;
    uStack_1a0 = 1;
    if (uStack_1b0 == 1) {
      pdb_142d89720(&uStack_1b0);
    }
    pfStack_1a8[1] = fVar72;
    uStack_1a0 = 2;
    pfVar52 = pfStack_368 + lStack_360;
    uVar40 = 2;
    pfVar37 = pfStack_368;
    while (pfVar37 != pfVar52) {
      fVar58 = *pfVar37;
      pfVar37 = pfVar37 + 1;
      if ((fVar57 < fVar58) && (fVar58 < fVar72)) {
        if (uVar40 == uStack_1b0) {
          pdb_142d89720(&uStack_1b0);
        }
        pfStack_1a8[uVar40] = fVar58;
        uVar40 = uVar40 + 1;
        uStack_1a0 = uVar40;
      }
    }
    fVar58 = (float)pub_142e329c0(((fVar72 - fVar57) * fVar7) / _DAT_142e3c670);
    uVar41 = 0;
    if (0.0 <= fVar58) {
      uVar41 = (longlong)(fVar58 - _DAT_142e36f2c) & (longlong)fVar58 >> 0x3f | (longlong)fVar58;
    }
    if (_DAT_142e36f30 < fVar58) {
      uVar41 = 0xffffffffffffffff;
    }
    for (uVar50 = 1; ppppppbVar29 = ppppppbStack_188, uVar50 < uVar41; uVar50 = uVar50 + 1) {
      if (uVar40 == uStack_1b0) {
        pdb_142d89720(&uStack_1b0);
      }
      pfStack_1a8[uVar40] =
           ((float)uVar50 / (float)uVar41) * fVar72 +
           (fVar21 - (float)uVar50 / (float)uVar41) * fVar57;
      uVar40 = uVar40 + 1;
      uStack_1a0 = uVar40;
    }
    while (ppppppbVar29 != ppppppbStack_100) {
      uStack_131 = CONCAT31(3,(undefined1)uStack_131);
      fStack_12d = 0.0;
      uStack_129 = 0;
      pppppppbStack_128 = (byte *******)*ppppppbVar29;
      ppppppbVar29 = (byte ******)((longlong)ppppppbVar29 + 0xc);
      pppppppbStack_120 =
           (byte *******)
           CONCAT44(pppppppbStack_120._4_4_,
                    ((float)((ulonglong)pppppppbStack_128 >> 0x20) + SUB84(pppppppbStack_128,0)) *
                    fVar22);
      lVar35 = 0;
      while (lVar35 != 3) {
        fVar58 = *(float *)((longlong)&pppppppbStack_128 + lVar35 * 4);
        lVar35 = lVar35 + 1;
        if ((fVar7 * fVar57 < fVar58) && (fVar58 < fVar7 * fVar72)) {
          uStack_138 = (undefined3)lVar35;
          uStack_135 = (undefined4)((ulonglong)lVar35 >> 0x18);
          uStack_131._0_1_ = (undefined1)((ulonglong)lVar35 >> 0x38);
          if (uVar40 == uStack_1b0) {
            pdb_142d89720(&uStack_1b0);
          }
          pfStack_1a8[uVar40] = fVar58 / fVar7;
          uVar40 = uVar40 + 1;
          uStack_1a0 = uVar40;
        }
      }
    }
    uStack_138 = SUB83(&uStack_13d,0);
    uStack_135 = (undefined4)((ulonglong)&uStack_13d >> 0x18);
    uStack_131._0_1_ = (undefined1)((ulonglong)&uStack_13d >> 0x38);
    if (1 < uVar40) {
      if (uVar40 < 0x15) {
        pdb_14145fee0(pfStack_1a8,uVar40,1);
      }
      else {
        pdb_1414655a0(pfStack_1a8,uVar40,&uStack_138);
      }
      if (1 < uStack_1a0) {
        lVar35 = 0;
LAB_1408410b1:
        if (_DAT_143009d64 <=
            (float)((uint)(pfStack_1a8[lVar35 + 1] - pfStack_1a8[lVar35]) & _DAT_142e377e0))
        goto code_r0x0001408410d2;
        uVar40 = lVar35 + 2;
        uVar41 = lVar35 + 1;
        if (uVar40 < uStack_1a0) {
          if (((int)uStack_1a0 - (int)lVar35 & 1U) != 0) {
            if (_DAT_143009d64 <=
                (float)((uint)(pfStack_1a8[lVar35 + 2] - pfStack_1a8[lVar35]) & _DAT_142e377e0)) {
              pfStack_1a8[lVar35 + 1] = pfStack_1a8[lVar35 + 2];
              uVar41 = lVar35 + 2;
            }
            uVar40 = lVar35 + 3;
          }
          if (uStack_1a0 - 3 != lVar35) {
            do {
              if (_DAT_143009d64 <=
                  (float)((uint)(pfStack_1a8[uVar40] - pfStack_1a8[uVar41 - 1]) & _DAT_142e377e0)) {
                pfStack_1a8[uVar41] = pfStack_1a8[uVar40];
                uVar41 = uVar41 + 1;
              }
              if (_DAT_143009d64 <=
                  (float)((uint)(pfStack_1a8[uVar40 + 1] - pfStack_1a8[uVar41 - 1]) & _DAT_142e377e0
                         )) {
                pfStack_1a8[uVar41] = pfStack_1a8[uVar40 + 1];
                uVar41 = uVar41 + 1;
              }
              uVar40 = uVar40 + 2;
            } while (uStack_1a0 != uVar40);
          }
        }
        uStack_1a0 = uVar41;
LAB_14084113f:
        if (uStack_1a0 < 2) goto LAB_14084104b;
        pppppppbVar30 = (byte *******)(uStack_1a0 + lStack_458);
        if ((byte *******)0x555555555555555 < pppppppbVar30) {
          uVar51 = 0;
          pfVar52 = pfStack_328;
LAB_1408430a5:
          pdb_142dc7e2a(uVar51,pfVar52);
          goto LAB_14084321a;
        }
        pfVar52 = (float *)((longlong)pppppppbVar30 * 0x18);
        if (pfVar52 == (float *)0x0) {
          pfStack_328 = (float *)0x4;
          pppppppbVar30 = (byte *******)0x0;
        }
        else {
          pdb_14007ee60();
          uVar51 = 4;
          pfStack_328 = (float *)pub_1406abab0((ulonglong)pfVar52,4);
          if (pfStack_328 == (float *)0x0) goto LAB_1408430a5;
        }
        pppppppbStack_270 = pppppppbVar30;
        pfStack_268 = pfStack_328;
        pppppppbStack_260 = (byte *******)0x0;
        pfStack_110 = pfStack_1a8 + uStack_1a0;
        pppppppbStack_160 = (byte *******)0x0;
        pfVar52 = pfStack_1a8;
        fVar57 = 2.8026e-45;
        if (pfStack_1a8 != pfStack_1a8 + uStack_1a0) {
          do {
            fVar72 = *pfVar52 * fVar7;
            pppppppbStack_260 = pppppppbStack_160;
            pdb_14007ee60();
            pppbVar54 = ppppbVar9[uVar47 * -0x56 + -0x42];
            if (pppbVar54 == (byte ***)0x1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143308560);
            }
            if (pppbVar54 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
            }
            pppbVar11 = ppppbVar9[uVar47 * -0x56 + -0x43];
            uStack_138 = SUB83(pppbVar11,0);
            uStack_135 = (undefined4)((ulonglong)pppbVar11 >> 0x18);
            uStack_131._0_1_ = (undefined1)((ulonglong)pppbVar11 >> 0x38);
            uStack_131._1_3_ = SUB83(pppbVar54,0);
            fStack_12d = (float)((ulonglong)pppbVar54 >> 0x18);
            uStack_129 = (undefined1)((ulonglong)pppbVar54 >> 0x38);
            pppppppbStack_128 = (byte *******)pdb_140ade410;
            pppppppbStack_120 = (byte *******)0x0;
            uStack_118 = 0;
            pdb_14141df70(&uStack_138);
            pppbVar54 = (byte ***)(uStack_118 & 0xffffffff);
            fVar58 = uStack_118._4_4_;
            iVar26 = pdb_1409301e0(ppppbVar9 + uVar47 * -0x56 + -0x55,uStack_348);
            if (iVar26 != 1) {
              pdb_142dc8110(&UNK_14300b1f0,0x4a,&UNK_14300b240);
              goto LAB_14084321a;
            }
            fVar73 = (float)extraout_XMM0_Qa;
            auVar61._8_4_ = (undefined4)extraout_XMM0_Qb;
            auVar61._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
            uVar40 = uStack_450;
            pfVar37 = pfStack_448;
            ppppppbVar29 = ppppppbStack_188;
            if (pppppppbStack_398 != (byte *******)0x0) {
              do {
                ppppppbVar39 = (byte ******)((longlong)ppppppbVar29 + 0xc);
                if ((*(float *)ppppppbVar29 + _DAT_143009d64 < fVar72) &&
                   (fVar72 < *(float *)((longlong)ppppppbVar29 + 4) + _DAT_14300b120)) {
                  fVar58 = *(float *)(ppppppbVar29 + 1);
                  fStack_1d8 = (float)CONCAT71((int7)((ulonglong)ppppppbVar29 >> 8),1);
                  if (ppppppbVar39 != ppppppbStack_100) {
                    uVar40 = uVar40 / 0xc;
                    do {
                      if (((pfVar37[-2] + _DAT_143009d64 < fVar72) &&
                          (fVar72 < pfVar37[-1] + _DAT_14300b120)) &&
                         (fVar62 = *pfVar37,
                         uVar41 = CONCAT44((uint)((int)fVar62 >> 0x1f) >> 1,
                                           (uint)((int)fVar58 >> 0x1f) >> 1) ^
                                  CONCAT44(fVar62,fVar58), (int)uVar41 <= (int)(uVar41 >> 0x20))) {
                        fVar58 = fVar62;
                      }
                      pfVar37 = pfVar37 + 3;
                      uVar40 = uVar40 - 1;
                    } while (uVar40 != 0);
                  }
                  goto LAB_1408413a6;
                }
                uVar40 = uVar40 - 0xc;
                pfVar37 = pfVar37 + 3;
                ppppppbVar29 = ppppppbVar39;
              } while (ppppppbVar39 != ppppppbStack_100);
            }
            pppbVar11 = ppppbVar9[uVar47 * -0x56 + -0x42];
            if (pppbVar11 <= pppbVar54) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppbVar54,pppbVar11,&UNK_14300b258);
            }
            pppbVar1 = (byte ***)((longlong)pppbVar54 + 1);
            if (pppbVar11 <= pppbVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppbVar1,pppbVar11,&UNK_14300b258);
            }
            fVar62 = *(float *)((longlong)ppppbVar9[uVar47 * -0x56 + -0x43] +
                               (longlong)pppbVar54 * 0xc + 4);
            fVar58 = fVar58 * (*(float *)((longlong)ppppbVar9[uVar47 * -0x56 + -0x43] +
                                         (longlong)pppbVar1 * 0xc + 4) - fVar62) + fVar62 +
                     _DAT_142f684a8;
            fStack_1d8 = 0.0;
LAB_1408413a6:
            fVar62 = *(float *)((longlong)ppppbVar9 + lVar44 + -0x24);
            if (0.0 < fVar62) {
              fVar90 = fVar62;
              if (fVar62 <= fVar58) {
                fVar90 = fVar58;
              }
              fVar58 = (float)(~-(uint)NAN(fVar58) & (uint)fVar90 |
                              -(uint)NAN(fVar58) & (uint)fVar62);
            }
            if (*(uint *)(ppppbVar9 + uVar47 * -0x56 + -10) < 2) {
              pppppppbStack_148 = *(byte ********)((longlong)ppppbVar9 + lVar44 + -0x3c);
              uStack_158 = *(byte ********)((longlong)ppppbVar9 + lVar44 + -0x4c);
              pbStack_150 = *(byte **)((longlong)ppppbVar9 + lVar44 + -0x44);
              fVar62 = fVar72 / fVar7;
              uStack_1f8 = (byte *******)CONCAT44(uStack_1f8._4_4_,fVar62);
              if ((fVar62 < 0.0) || (fVar21 < fVar62)) {
                uStack_138 = SUB83(&uStack_1f8,0);
                uStack_135 = (undefined4)((ulonglong)&uStack_1f8 >> 0x18);
                uStack_131._0_1_ = (undefined1)((ulonglong)&uStack_1f8 >> 0x38);
                uStack_131 = CONCAT31(0xf70fc0,(undefined1)uStack_131);
                fStack_12d = 4.48416e-43;
                uStack_129 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_138,&UNK_14300b270);
              }
              uStack_131._0_1_ = (undefined1)((ulonglong)uStack_158 >> 0x38);
              uStack_138 = SUB83(uStack_158,0);
              uStack_135 = (undefined4)((ulonglong)uStack_158 >> 0x18);
              uStack_129 = (undefined1)((ulonglong)pbStack_150 >> 0x38);
              uStack_131._1_3_ = SUB83(pbStack_150,0);
              fStack_12d = (float)((ulonglong)pbStack_150 >> 0x18);
              if (*(uint *)(ppppbVar9 + uVar47 * -0x56 + -10) == 1) {
                pppppppbStack_128 = pppppppbStack_148;
                uVar59 = pdb_140df17e0(&uStack_138);
                uStack_1f8 = (byte *******)CONCAT44(fVar62,uVar59);
                pdb_140df4520(&uStack_288,&uStack_1f8);
              }
              else {
                uVar59 = pdb_140def5e0(&uStack_138);
                uStack_1f8 = (byte *******)CONCAT44(fVar62,uVar59);
                pdb_140df4520(&uStack_288,&uStack_1f8);
              }
            }
            else {
              pppbVar11 = (byte ***)((longlong)pppbVar54 + 1);
              if (ppppbVar9[uVar47 * -0x56 + -0x42] <= pppbVar11) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pppbVar11,ppppbVar9[uVar47 * -0x56 + -0x42],&UNK_1433067d0);
              }
              pppbVar1 = ppppbVar9[uVar47 * -0x56 + -0x43];
              fVar62 = *(float *)((longlong)pppbVar1 + (longlong)pppbVar11 * 0xc + 8) -
                       *(float *)((longlong)pppbVar1 + (longlong)pppbVar54 * 0xc + 8);
              uVar51 = *(undefined8 *)((longlong)pppbVar1 + (longlong)pppbVar11 * 0xc);
              uVar32 = *(undefined8 *)((longlong)pppbVar1 + (longlong)pppbVar54 * 0xc);
              fVar90 = (float)uVar51 - (float)uVar32;
              fVar74 = (float)((ulonglong)uVar51 >> 0x20) - (float)((ulonglong)uVar32 >> 0x20);
              fVar75 = fVar21 / SQRT(fVar62 * fVar62 + fVar74 * fVar74 + fVar90 * fVar90);
              fVar90 = fVar90 * fVar75;
              fVar75 = fVar75 * fVar62;
              fVar74 = fVar21 / SQRT(fVar90 * fVar90 + fVar75 * fVar75);
              fVar62 = fVar74 * (float)((uint)fVar75 ^ _DAT_142e37820);
              fVar74 = fVar74 * fVar90;
              uStack_138 = SUB43(fVar62,0);
              uStack_135 = (undefined4)(CONCAT44(fVar74,fVar62) >> 0x18);
              uStack_131._0_1_ = (undefined1)((uint)fVar74 >> 0x18);
              pdb_140df4520(&uStack_288,&uStack_138);
            }
            pppppppbVar30 = pppppppbStack_260;
            auVar61._0_8_ = extraout_XMM0_Qa;
            if (fVar58 <= fVar73) {
              auVar61._0_4_ = fVar58;
            }
            fVar58 = (float)(~-(uint)NAN(fVar58) & auVar61._0_4_ | -(uint)NAN(fVar58) & (uint)fVar73
                            );
            if (SUB41(fVar57,0) != 2) {
              fStack_338 = fStack_50d;
              uStack_340 = CONCAT44(uStack_511,uStack_515);
              if (((SUB41(fVar57,0) ^ fStack_1d8._0_1_) & 1) != 0) {
                fVar57 = fVar58;
                if (fStack_1d8._0_1_ == 0) {
                  fStack_338 = fStack_280;
                  uStack_340 = uStack_288;
                  fVar57 = fStack_344;
                  fStack_278 = fVar72;
                  fStack_274 = fVar73;
                }
                if (pppppppbStack_260 == pppppppbStack_270) {
                  pdb_142d89250(&pppppppbStack_270);
                }
                pfStack_268[(longlong)pppppppbVar30 * 6] = fStack_278;
                pfStack_268[(longlong)pppppppbVar30 * 6 + 1] = fVar57;
                pfStack_268[(longlong)pppppppbVar30 * 6 + 2] = fStack_274;
                *(undefined8 *)(pfStack_268 + (longlong)pppppppbVar30 * 6 + 3) = uStack_340;
                pfStack_268[(longlong)pppppppbVar30 * 6 + 5] = fStack_338;
                pppppppbStack_260 = (byte *******)((longlong)pppppppbVar30 + 1);
              }
            }
            pppppppbVar30 = pppppppbStack_260;
            if (pppppppbStack_260 == pppppppbStack_270) {
              pdb_142d89250(&pppppppbStack_270);
            }
            pfVar52 = pfVar52 + 1;
            pfStack_268[(longlong)pppppppbVar30 * 6] = fVar72;
            pfStack_268[(longlong)pppppppbVar30 * 6 + 1] = fVar58;
            pfStack_268[(longlong)pppppppbVar30 * 6 + 2] = fVar73;
            *(undefined8 *)(pfStack_268 + (longlong)pppppppbVar30 * 6 + 3) = uStack_288;
            pfStack_268[(longlong)pppppppbVar30 * 6 + 5] = fStack_280;
            pppppppbStack_160 = (byte *******)((longlong)pppppppbVar30 + 1U);
            pppppppbStack_260 = (byte *******)((longlong)pppppppbVar30 + 1U);
            fStack_12d = fStack_280;
            uStack_135 = (undefined4)uStack_288;
            uStack_131 = (undefined4)((ulonglong)uStack_288 >> 0x20);
            uStack_515 = uStack_135;
            uStack_511 = uStack_131;
            fStack_50d = fStack_280;
            fStack_278 = fVar72;
            fStack_344 = fVar58;
            fStack_274 = fVar73;
            fVar57 = fStack_1d8;
          } while (pfVar52 != pfStack_110);
        }
        pppppppbStack_260 = pppppppbStack_160;
        if (pppppppbStack_160 < (byte *******)0x2) {
LAB_1408429b9:
          if (pppppppbStack_270 != (byte *******)0x0) {
            pub_1406abac0((byte *)pfStack_268,(longlong)pppppppbStack_270 * 0x18,4);
          }
          goto LAB_14084104b;
        }
        if ((byte *******)0x2aaaaaaaaaaaaaa < pppppppbStack_160) {
          uVar51 = 0;
LAB_1408430cb:
          pdb_142dc7e2a(uVar51,pbStack_320);
LAB_14084321a:
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        pfStack_1b8 = pfStack_268;
        pbVar31 = (byte *)((longlong)pppppppbStack_160 * 0x30);
        pdb_14007ee60();
        uVar51 = 4;
        pbStack_180 = pbVar31;
        pbStack_320 = pub_1406abab0((ulonglong)pbVar31,4);
        if (pbStack_320 == (byte *)0x0) {
          pbStack_320 = pbStack_180;
          goto LAB_1408430cb;
        }
        pppppppbStack_218 = pppppppbStack_160;
        pppppppbStack_208 = (byte *******)0x0;
        pbStack_210 = pbStack_320;
        pdb_14007ee60();
        ppppppbVar29 = (byte ******)pub_1406abab0((ulonglong)pbStack_180,4);
        if (ppppppbVar29 == (byte ******)0x0) {
          pdb_142dc7e2a(4,pbStack_180);
          goto LAB_14084321a;
        }
        pppppppbStack_2e0 = pppppppbStack_160;
        pppppppbStack_2d0 = (byte *******)0x0;
        ppppppbStack_2d8 = ppppppbVar29;
        pdb_14007ee60();
        pppppppbVar30 = (byte *******)pub_1406abab0((ulonglong)pbStack_180,4);
        if (pppppppbVar30 == (byte *******)0x0) {
          pdb_142dc7e2a(4,pbStack_180);
          goto LAB_14084321a;
        }
        pppppppbStack_300 = pppppppbStack_160;
        pppppppbStack_2f0 = (byte *******)0x0;
        pppppppbStack_2f8 = pppppppbVar30;
        pdb_14007ee60();
        ppppppbVar29 = (byte ******)pub_1406abab0((ulonglong)pbStack_180,4);
        if (ppppppbVar29 == (byte ******)0x0) {
          pdb_142dc7e2a(4,pbStack_180);
          goto LAB_14084321a;
        }
        pppppppbStack_238 = pppppppbStack_160;
        pppppppbStack_228 = (byte *******)0x0;
        ppppppbStack_230 = ppppppbVar29;
        pdb_14007ee60();
        pbVar31 = pub_1406abab0((ulonglong)pbStack_180,4);
        if (pbVar31 == (byte *)0x0) {
          pdb_142dc7e2a(4,pbStack_180);
          goto LAB_14084321a;
        }
        pppppppbStack_318 = pppppppbStack_160;
        pppppppbStack_308 = (byte *******)0x0;
        pfStack_390 = pfStack_1b8 + (longlong)pppppppbStack_160 * 6;
        pbStack_310 = pbVar31;
        for (pfVar52 = pfStack_1b8; pfVar52 != pfStack_390; pfVar52 = pfVar52 + 6) {
          fVar57 = pfVar52[1];
          ppppppbVar29 = *(byte *******)(pfVar52 + 3);
          fVar62 = SUB84(ppppppbVar29,0);
          fVar90 = (float)((ulonglong)ppppppbVar29 >> 0x20);
          auStack_178 = ZEXT416((uint)pfVar52[5]);
          pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,*pfVar52);
          fStack_13c = fVar57;
          uVar59 = pdb_14007ee60();
          uStack_158 = (byte *******)CONCAT44(fVar57,uVar59);
          fStack_1d8 = fVar57;
          pdb_140dea260(&uStack_138,&uStack_158,ppppbVar9 + uVar47 * -0x56 + -0x55);
          pppppppbVar30 = pppppppbStack_208;
          fVar72 = fVar62 * _DAT_14300b130;
          fVar58 = fVar90 * _UNK_14300b134;
          fVar73 = (float)auStack_178._0_4_ * _DAT_14300b140;
          uVar20 = CONCAT43(uStack_135,uStack_138);
          uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
          fVar57 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
          pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,fStack_13c * _DAT_142e37988);
          if (pppppppbStack_208 == pppppppbStack_218) {
            pdb_142d8d630(&pppppppbStack_218);
          }
          uVar32 = CONCAT44(fStack_1d8,uVar59);
          fStack_1d8 = fStack_27c * pfStack_110._0_4_;
          lVar35 = (longlong)pppppppbVar30 * 0x30;
          *(ulonglong *)(pbStack_210 + lVar35) =
               CONCAT44((float)((ulonglong)uVar51 >> 0x20) + fVar58,(float)uVar20 + fVar72);
          *(float *)(pbStack_210 + lVar35 + 8) = fVar57 + fVar73;
          pbVar31 = pbStack_210 + lVar35 + 0xc;
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          auVar78._8_4_ = auStack_178._0_4_;
          auVar78._0_8_ = ppppppbVar29;
          auVar78._12_4_ = 0;
          *(undefined1 (*) [16])(pbStack_210 + lVar35 + 0x10) = auVar78;
          *(undefined8 *)(pbStack_210 + lVar35 + 0x20) = uVar32;
          *(undefined4 *)(pbStack_210 + lVar35 + 0x28) = pfStack_108._0_4_;
          *(float *)(pbStack_210 + lVar35 + 0x2c) = fStack_1d8;
          pppppppbStack_208 = (byte *******)((longlong)pppppppbVar30 + 1);
          fVar57 = pfVar52[2];
          fVar74 = fVar57;
          uVar59 = pdb_14007ee60();
          pfStack_1c0 = (float *)CONCAT44(pfStack_1c0._4_4_,uVar59);
          lStack_190 = CONCAT44(lStack_190._4_4_,fVar74);
          uStack_158 = (byte *******)CONCAT44(fVar74,uVar59);
          pdb_140dea260(&uStack_138,&uStack_158,ppppbVar9 + uVar47 * -0x56 + -0x55);
          pppppppbVar30 = pppppppbStack_2d0;
          uVar20 = CONCAT43(uStack_135,uStack_138);
          uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
          fVar74 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
          fStack_194 = fVar57 * _DAT_142e37988;
          if (pppppppbStack_2d0 == pppppppbStack_2e0) {
            pdb_142d8d630(&pppppppbStack_2e0);
          }
          ppppppbStack_2d8[(longlong)pppppppbVar30 * 6] =
               (byte *****)
               CONCAT44(fVar58 + (float)((ulonglong)uVar51 >> 0x20),fVar72 + (float)uVar20);
          *(float *)(ppppppbStack_2d8 + (longlong)pppppppbVar30 * 6 + 1) = fVar73 + fVar74;
          pbVar31 = (byte *)((longlong)ppppppbStack_2d8 + (longlong)pppppppbVar30 * 0x30 + 0xc);
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          *(undefined1 (*) [16])(ppppppbStack_2d8 + (longlong)pppppppbVar30 * 6 + 2) = auVar78;
          ppppppbStack_2d8[(longlong)pppppppbVar30 * 6 + 4] =
               (byte *****)CONCAT44((undefined4)lStack_190,pfStack_1c0._0_4_);
          *(float *)(ppppppbStack_2d8 + (longlong)pppppppbVar30 * 6 + 5) = fStack_194;
          *(float *)((longlong)ppppppbStack_2d8 + (longlong)pppppppbVar30 * 0x30 + 0x2c) =
               fStack_1d8;
          pppppppbStack_2d0 = (byte *******)((longlong)pppppppbVar30 + 1);
          fVar72 = fVar57;
          uVar59 = pdb_14007ee60((ulonglong)pfStack_110 & 0xffffffff);
          pfStack_1c0 = (float *)CONCAT44(pfStack_1c0._4_4_,uVar59);
          lStack_190 = CONCAT44(lStack_190._4_4_,fVar72);
          uStack_158 = (byte *******)CONCAT44(fVar72,uVar59);
          pdb_140dea260(&uStack_138,&uStack_158,ppppbVar9 + uVar47 * -0x56 + -0x55);
          pppppppbVar30 = pppppppbStack_2f0;
          fVar58 = _DAT_142e36f28;
          fVar73 = auStack_178._0_4_;
          fVar74 = fVar62 * _DAT_14300a500;
          fVar75 = fVar90 * _UNK_14300a504;
          fVar76 = fVar73 * _UNK_14300a508;
          fVar77 = _DAT_142e36f28 * _UNK_14300a50c;
          uVar20 = CONCAT43(uStack_135,uStack_138);
          uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
          fVar72 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
          if (pppppppbStack_2f0 == pppppppbStack_300) {
            pdb_142d8d630(&pppppppbStack_300);
          }
          fVar77 = fVar77 + _UNK_14300b15c;
          pppppppbVar2 = pppppppbStack_2f8 + (longlong)pppppppbVar30 * 6;
          *(float *)pppppppbVar2 = fVar74 + (float)uVar20;
          *(float *)((longlong)pppppppbVar2 + 4) = fVar75 + (float)((ulonglong)uVar51 >> 0x20);
          *(float *)(pppppppbVar2 + 1) = fVar76 + fVar72;
          *(float *)((longlong)pppppppbVar2 + 0xc) = fVar77;
          pppppppbStack_2f8[(longlong)pppppppbVar30 * 6 + 2] = ppppppbVar29;
          *(undefined4 *)(pppppppbStack_2f8 + (longlong)pppppppbVar30 * 6 + 3) = auStack_178._0_4_;
          pbVar31 = (byte *)((longlong)pppppppbStack_2f8 + (longlong)pppppppbVar30 * 0x30 + 0x1c);
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          pppppppbStack_2f8[(longlong)pppppppbVar30 * 6 + 4] =
               (byte ******)CONCAT44((undefined4)lStack_190,pfStack_1c0._0_4_);
          *(float *)(pppppppbStack_2f8 + (longlong)pppppppbVar30 * 6 + 5) = fStack_194;
          *(float *)((longlong)pppppppbStack_2f8 + (longlong)pppppppbVar30 * 0x30 + 0x2c) =
               fStack_1d8;
          pppppppbStack_2f0 = (byte *******)((longlong)pppppppbVar30 + 1);
          uVar59 = pdb_14007ee60((ulonglong)pfStack_110 & 0xffffffff);
          uStack_158 = (byte *******)CONCAT44(fStack_13c,uVar59);
          pdb_140dea260(&uStack_138,&uStack_158,ppppbVar9 + uVar47 * -0x56 + -0x55);
          pppppppbVar30 = pppppppbStack_228;
          fVar73 = fVar73 * 0.0;
          fVar72 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
          uVar20 = CONCAT43(uStack_135,uStack_138);
          uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
          if (pppppppbStack_228 == pppppppbStack_238) {
            pdb_142d8d630(&pppppppbStack_238);
          }
          uVar91 = (uint)fVar62 ^ _DAT_142e37820;
          uVar92 = (uint)fVar90 ^ _UNK_142e37824;
          uVar63 = auStack_178._0_4_ ^ _DAT_142e37820;
          lVar35 = (longlong)pppppppbVar30 * 0x30;
          ppppppbStack_230[(longlong)pppppppbVar30 * 6] =
               (byte *****)
               CONCAT44((float)((ulonglong)uVar51 >> 0x20) + fVar90 * 0.0,
                        (float)uVar20 + fVar62 * 0.0);
          *(float *)(ppppppbStack_230 + (longlong)pppppppbVar30 * 6 + 1) = fVar73 + fVar72;
          pbVar31 = (byte *)((longlong)ppppppbStack_230 + lVar35 + 0xc);
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          ppppppbStack_230[(longlong)pppppppbVar30 * 6 + 2] = (byte *****)CONCAT44(uVar92,uVar91);
          *(uint *)(ppppppbStack_230 + (longlong)pppppppbVar30 * 6 + 3) = uVar63;
          pbVar31 = (byte *)((longlong)ppppppbStack_230 + lVar35 + 0x1c);
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          ppppppbStack_230[(longlong)pppppppbVar30 * 6 + 4] =
               (byte *****)CONCAT44(fStack_13c,uVar59);
          *(undefined4 *)(ppppppbStack_230 + (longlong)pppppppbVar30 * 6 + 5) = pfStack_108._0_4_;
          *(float *)((longlong)ppppppbStack_230 + lVar35 + 0x2c) = fStack_1d8;
          pppppppbStack_228 = (byte *******)((longlong)pppppppbVar30 + 1);
          uVar59 = pdb_14007ee60((ulonglong)pfStack_110 & 0xffffffff);
          auStack_178._0_4_ = fVar57;
          uStack_158 = (byte *******)CONCAT44(fVar57,uVar59);
          pdb_140dea260(&uStack_138,&uStack_158);
          pppppppbVar30 = pppppppbStack_308;
          uVar20 = CONCAT43(uStack_135,uStack_138);
          uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
          fVar57 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
          if (pppppppbStack_308 == pppppppbStack_318) {
            pdb_142d8d630(&pppppppbStack_318);
          }
          fVar72 = fVar58 * 0.0 + _UNK_14300b15c;
          lVar35 = (longlong)pppppppbVar30 * 0x30;
          pfVar37 = (float *)(pbStack_310 + lVar35);
          *pfVar37 = fVar62 * 0.0 + (float)uVar20;
          pfVar37[1] = fVar90 * 0.0 + (float)((ulonglong)uVar51 >> 0x20);
          pfVar37[2] = fVar73 + fVar57;
          pfVar37[3] = fVar72;
          *(ulonglong *)(pbStack_310 + lVar35 + 0x10) = CONCAT44(uVar92,uVar91);
          *(uint *)(pbStack_310 + lVar35 + 0x18) = uVar63;
          pbVar31 = pbStack_310 + lVar35 + 0x1c;
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          *(undefined4 *)(pbStack_310 + lVar35 + 0x20) = uVar59;
          *(undefined4 *)(pbStack_310 + lVar35 + 0x20 + 4) = auStack_178._0_4_;
          *(float *)(pbStack_310 + lVar35 + 0x28) = fStack_194;
          *(float *)(pbStack_310 + lVar35 + 0x2c) = fStack_1d8;
          pppppppbStack_308 = (byte *******)((longlong)pppppppbVar30 + 1);
        }
        uStack_138 = SUB83(pfStack_1b8,0);
        uStack_135 = (undefined4)((ulonglong)pfStack_1b8 >> 0x18);
        uStack_131._0_1_ = (undefined1)((ulonglong)pfStack_1b8 >> 0x38);
        uStack_131._1_3_ = SUB83(pppppppbStack_160,0);
        fStack_12d = (float)((ulonglong)pppppppbStack_160 >> 0x18);
        uStack_129 = (undefined1)((ulonglong)pppppppbStack_160 >> 0x38);
        pppppppbStack_128 = (byte *******)0x2;
        pdb_1413ee820(&lStack_440,&uStack_138);
        uVar41 = uStack_430;
        pfStack_108 = pfStack_438;
        uStack_138 = SUB83(&uStack_13d,0);
        uStack_135 = (undefined4)((ulonglong)&uStack_13d >> 0x18);
        uStack_131._0_1_ = (undefined1)((ulonglong)&uStack_13d >> 0x38);
        uVar40 = uVar41;
        if (1 < uStack_430) {
          if (uStack_430 < 0x15) {
            uStack_f3 = 1;
            pdb_14145fee0(pfStack_438,uStack_430,1,&uStack_138);
          }
          else {
            uStack_f3 = 1;
            pdb_1414655a0(pfStack_438,uStack_430,&uStack_138);
          }
          lVar35 = 0;
LAB_14084257e:
          if ((pfStack_108[lVar35 + 1] != pfStack_108[lVar35]) ||
             (NAN(pfStack_108[lVar35 + 1]) || NAN(pfStack_108[lVar35]))) goto LAB_140842593;
          uVar50 = lVar35 + 2;
          uVar40 = lVar35 + 1;
          if (uVar50 < uVar41) {
            if (((int)uVar41 - (int)lVar35 & 1U) != 0) {
              fVar57 = pfStack_108[lVar35 + 2];
              if ((fVar57 != pfStack_108[lVar35]) || (NAN(fVar57) || NAN(pfStack_108[lVar35]))) {
                pfStack_108[lVar35 + 1] = fVar57;
                uVar40 = lVar35 + 2;
              }
              uVar50 = lVar35 + 3;
            }
            if (uVar41 - 3 != lVar35) {
              do {
                fVar57 = pfStack_108[uVar50];
                if ((fVar57 != pfStack_108[uVar40 - 1]) ||
                   (NAN(fVar57) || NAN(pfStack_108[uVar40 - 1]))) {
                  pfStack_108[uVar40] = fVar57;
                  uVar40 = uVar40 + 1;
                }
                fVar57 = pfStack_108[uVar50 + 1];
                if ((fVar57 != pfStack_108[uVar40 - 1]) ||
                   (NAN(fVar57) || NAN(pfStack_108[uVar40 - 1]))) {
                  pfStack_108[uVar40] = fVar57;
                  uVar40 = uVar40 + 1;
                }
                uVar50 = uVar50 + 2;
              } while (uVar41 != uVar50);
            }
          }
          lStack_190 = lStack_440;
          uStack_430 = uVar40;
          if (uVar40 == 0) goto LAB_14084261f;
          goto LAB_140842053;
        }
        lStack_190 = lStack_440;
        if (uStack_430 != 0) goto LAB_140842053;
        goto LAB_14084261f;
      }
    }
LAB_14084104b:
    if (uStack_1b0 != 0) {
      pub_1406abac0((byte *)pfStack_1a8,uStack_1b0 << 2,4);
    }
  }
  pppppppbVar30 = (byte *******)&pppppppbStack_428;
  if ((byte ******)0x4 < ppppppbStack_3c8) {
    pppppppbVar30 = pppppppbStack_428;
  }
  pcVar45 = (char *)((longlong)pppppppbVar30 + (longlong)ppppppbStack_3c0 * 0x18 + 0x14);
  do {
    if ((longlong)((longlong)ppppppbStack_3c0 + 1U) - (longlong)ppppppbVar39 == 1) break;
    ppppppbStack_3c0 = (byte ******)((longlong)ppppppbStack_3c0 + 1U);
    cVar24 = *pcVar45;
    pcVar45 = pcVar45 + 0x18;
  } while (cVar24 != '\x02');
  if ((byte ******)0x4 < ppppppbStack_3c8) {
    pub_1406abac0((byte *)pppppppbStack_428,(longlong)ppppppbStack_3c8 * 0x18,4);
  }
  if (pppppppbStack_388 != (byte *******)0x0) {
    pub_1406abac0((byte *)ppppppbStack_380,(longlong)pppppppbStack_388 << 3,4);
  }
  if (lStack_370 != 0) {
    pub_1406abac0((byte *)pfStack_368,lStack_370 << 2,4);
  }
  if (ppppppbStack_248 != (byte ******)0x0) {
    pub_1406abac0((byte *)ppppppbStack_188,(ulonglong)ppppppbStack_330,4);
  }
LAB_140842b39:
  pdb_14007ee60();
  ppppppbStack_100 = (byte ******)pub_1406abab0(8,8);
  if (ppppppbStack_100 == (byte ******)0x0) {
    uStack_f1 = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pppppppbStack_4f8 = pppppppbStack_2b8;
  pppppppbStack_508 = pppppppbStack_2c8;
  pppppppbStack_500 = (byte *******)ppppppbStack_2c0;
  pdb_141416620(&pppppppbStack_428,param_6,&pppppppbStack_508,&UNK_14300b2e8);
  *ppppppbStack_100 = (byte *****)pppppppbStack_428;
  pppppppbStack_388 = (byte *******)0x1;
  ppppppbStack_380 = ppppppbStack_100;
  pppppppbStack_378 = (byte *******)0x1;
  auStack_178._0_8_ = uStack_2b0;
  ppppppbVar29 = ppppppbStack_2a8;
  if (lStack_2a0 != 0) {
    ppppppbStack_188 = (byte ******)(lStack_2a0 * 0x28);
    ppppppbVar39 = (byte ******)0x0;
    ppppppbStack_100 = ppppppbStack_2a8;
    do {
      cVar24 = *(char *)((longlong)(ppppppbStack_100 + 4) + (longlong)ppppppbVar39);
      ppppppbVar29 = ppppppbStack_100;
      if (cVar24 == '\x02') break;
      puVar4 = (undefined8 *)((longlong)ppppppbStack_100 + (longlong)ppppppbVar39);
      uVar51 = *puVar4;
      uVar32 = puVar4[1];
      uVar18 = puVar4[2];
      uVar19 = puVar4[3];
      uVar27 = *(undefined4 *)
                ((longlong)((longlong)ppppppbStack_100 + 0x24U) + (longlong)ppppppbVar39);
      uStack_2e8._0_3_ =
           (undefined3)*(undefined4 *)((longlong)ppppppbStack_100 + 0x21U + (longlong)ppppppbVar39);
      uStack_2e8._3_1_ = (undefined1)uVar27;
      uStack_2e4 = (undefined3)((uint)uVar27 >> 8);
      uVar27 = pdb_1409012c0(0);
      pdb_1408fd550(&pppppppbStack_508,uVar27);
      uStack_138 = SUB83(pppppppbStack_508,0);
      uStack_135 = (undefined4)((ulonglong)pppppppbStack_508 >> 0x18);
      uStack_131._0_1_ = (undefined1)((ulonglong)pppppppbStack_508 >> 0x38);
      uStack_131._1_3_ = SUB83(pppppppbStack_500,0);
      fStack_12d = (float)((ulonglong)pppppppbStack_500 >> 0x18);
      uStack_129 = (undefined1)((ulonglong)pppppppbStack_500 >> 0x38);
      pdb_14007ee60();
      ppppppbStack_420 =
           (byte ******)CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138));
      pppppppbStack_418 = (byte *******)CONCAT17(uStack_129,CONCAT43(fStack_12d,uStack_131._1_3_));
      pppppbVar33 = (byte *****)pdb_140ed5970(uStack_4a0);
      lVar35 = plStack_298[2];
      if ((ulonglong)(*plStack_298 - lVar35) < 0x98) {
        pdb_142d7f1b0(plStack_298,lVar35,0x98,1,1);
      }
      pppppppbVar30 = pppppppbStack_378;
      lVar44 = plStack_298[1];
      *(code **)(lVar44 + lVar35) = pdb_141414330;
      puVar6 = (undefined4 *)(lVar44 + 8 + lVar35);
      *puVar6 = uVar59;
      puVar6[1] = uVar69;
      puVar6[2] = uVar70;
      puVar6[3] = uVar71;
      *(undefined8 *)(lVar44 + 0x18 + lVar35) = 0;
      *(undefined4 *)(lVar44 + 0x20 + lVar35) = 0;
      *(undefined8 *)(lVar44 + 0x24 + lVar35) = 0x3f8000003f800000;
      *(undefined4 *)(lVar44 + 0x2c + lVar35) = 0x3f800000;
      puVar53 = (ulonglong *)(lVar44 + 0x30 + lVar35);
      *puVar53 = (ulonglong)pppppppbStack_428;
      puVar53[1] = (ulonglong)ppppppbStack_420;
      *(byte ********)(lVar44 + 0x40 + lVar35) = pppppppbStack_418;
      *(undefined1 *)(lVar44 + 0x48 + lVar35) = 0x19;
      *(longlong *)(lVar44 + 0x58 + lVar35) = lStack_3a0;
      puVar4 = (undefined8 *)(lVar44 + 0x60 + lVar35);
      *puVar4 = uVar51;
      puVar4[1] = uVar32;
      puVar4 = (undefined8 *)(lVar44 + 0x70 + lVar35);
      *puVar4 = uVar18;
      puVar4[1] = uVar19;
      *(char *)(lVar44 + 0x80 + lVar35) = cVar24;
      *(undefined4 *)(lVar44 + 0x81 + lVar35) = uStack_2e8;
      *(uint *)(lVar44 + 0x84 + lVar35) = CONCAT31(uStack_2e4,uStack_2e8._3_1_);
      *(byte ******)(lVar44 + 0x88 + lVar35) = pppppbVar33;
      plStack_298[2] = lVar35 + 0x98;
      if (pppppppbStack_378 == pppppppbStack_388) {
        pdb_142db0920(&pppppppbStack_388);
      }
      ppppppbStack_380[(longlong)pppppppbVar30] = pppppbVar33;
      pppppppbStack_378 = (byte *******)((longlong)pppppppbVar30 + 1);
      ppppppbVar39 = ppppppbVar39 + 5;
      ppppppbVar29 = ppppppbStack_100;
    } while (ppppppbStack_188 != ppppppbVar39);
  }
  if (auStack_178._0_8_ != 0) {
    pub_1406abac0((byte *)ppppppbVar29,auStack_178._0_8_ * 0x28,8);
  }
  *puStack_478 = uStack_34c;
  pppppppbStack_418 = pppppppbStack_378;
  pppppppbStack_428 = pppppppbStack_388;
  ppppppbStack_420 = ppppppbStack_380;
  uStack_f4 = 0;
  pdb_1414070f0(&pppppppbStack_508,uStack_480,lStack_3a0,&pppppppbStack_428);
  puVar53 = puStack_460;
  if ((!SBORROW8(0,(longlong)pppppppbStack_508)) && (pppppppbStack_508 != (byte *******)0x0)) {
    pub_1406abac0((byte *)pppppppbStack_500,(longlong)pppppppbStack_508 << 3,8);
  }
  goto LAB_1408405d0;
code_r0x0001408410d2:
  lVar35 = lVar35 + 1;
  if (uStack_1a0 - 1 == lVar35) goto LAB_14084113f;
  goto LAB_1408410b1;
LAB_140842593:
  lVar35 = lVar35 + 1;
  if (uVar41 - 1 == lVar35) goto code_r0x00014084259b;
  goto LAB_14084257e;
code_r0x00014084259b:
  lStack_190 = lStack_440;
LAB_140842053:
  pfVar52 = pfStack_108 + uVar40;
  pfStack_1c0 = pfStack_108;
  lStack_440 = lStack_190;
  do {
    fStack_13c = *pfStack_1c0;
    pdb_14007ee60();
    ppppppbVar29 = (byte ******)pub_1406abab0((ulonglong)pbStack_180,4);
    if (ppppppbVar29 == (byte ******)0x0) {
      pdb_142dc7e2a(4,pbStack_180);
      goto LAB_14084321a;
    }
    uStack_1f8 = pppppppbStack_160;
    pppppppbStack_1e8 = (byte *******)0x0;
    ppppppbStack_1f0 = ppppppbVar29;
    pdb_14007ee60();
    pbVar31 = pub_1406abab0((ulonglong)pbStack_180,4);
    if (pbVar31 == (byte *)0x0) {
      pdb_142dc7e2a(4,pbStack_180);
      goto LAB_14084321a;
    }
    pfStack_1c0 = pfStack_1c0 + 1;
    uStack_158 = pppppppbStack_160;
    pppppppbStack_148 = (byte *******)0x0;
    pbStack_150 = pbVar31;
    for (pfVar37 = pfStack_1b8; pfVar37 != pfStack_390; pfVar37 = pfVar37 + 6) {
      fVar57 = pfVar37[1];
      fVar72 = pfVar37[2];
      fVar58 = fVar57;
      if (fVar57 <= fStack_13c) {
        fVar58 = fStack_13c;
      }
      fVar58 = (float)(~-(uint)NAN(fStack_13c) & (uint)fVar58 |
                      -(uint)NAN(fStack_13c) & (uint)fVar57);
      fVar57 = fVar72;
      if (fVar58 <= fVar72) {
        fVar57 = fVar58;
      }
      fVar72 = (float)(-(uint)NAN(fVar58) & (uint)fVar72 | ~-(uint)NAN(fVar58) & (uint)fVar57);
      uVar51 = *(undefined8 *)*(undefined1 (*) [12])(pfVar37 + 3);
      fVar74 = (float)uVar51;
      fVar75 = (float)((ulonglong)uVar51 >> 0x20);
      fVar57 = pfVar37[5];
      auVar17 = *(undefined1 (*) [12])(pfVar37 + 3);
      fStack_194 = *pfVar37;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      fStack_1d8 = fVar72;
      uStack_290 = pdb_14007ee60();
      auStack_178._0_4_ = uStack_290;
      pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,fVar72);
      fStack_28c = fVar72;
      pdb_140dea260(&uStack_138,&uStack_290,ppppbVar9 + uVar47 * -0x56 + -0x55);
      pppppppbVar30 = pppppppbStack_1e8;
      fVar90 = fVar57 * _DAT_14300b140;
      fVar58 = fVar74 * _DAT_14300b130;
      fVar73 = fVar75 * _UNK_14300b134;
      uVar20 = CONCAT43(uStack_135,uStack_138);
      uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
      fVar72 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
      fVar62 = fStack_1d8 * _DAT_142e37988;
      if (pppppppbStack_1e8 == uStack_1f8) {
        pdb_142d8d630(&uStack_1f8);
      }
      fVar76 = fStack_27c * fStack_194;
      ppppppbStack_1f0[(longlong)pppppppbVar30 * 6] =
           (byte *****)CONCAT44(fVar73 + (float)((ulonglong)uVar51 >> 0x20),fVar58 + (float)uVar20);
      *(float *)(ppppppbStack_1f0 + (longlong)pppppppbVar30 * 6 + 1) = fVar90 + fVar72;
      pbVar31 = (byte *)((longlong)ppppppbStack_1f0 + (longlong)pppppppbVar30 * 0x30 + 0xc);
      pbVar31[0] = 0;
      pbVar31[1] = 0;
      pbVar31[2] = 0;
      pbVar31[3] = 0;
      auVar66._12_4_ = 0;
      auVar66._0_12_ = auVar17;
      *(undefined1 (*) [16])(ppppppbStack_1f0 + (longlong)pppppppbVar30 * 6 + 2) = auVar66;
      ppppppbStack_1f0[(longlong)pppppppbVar30 * 6 + 4] =
           (byte *****)CONCAT44(pfStack_110._0_4_,auStack_178._0_4_);
      *(float *)(ppppppbStack_1f0 + (longlong)pppppppbVar30 * 6 + 5) = fVar62;
      *(float *)((longlong)ppppppbStack_1f0 + (longlong)pppppppbVar30 * 0x30 + 0x2c) = fVar76;
      pppppppbStack_1e8 = (byte *******)((longlong)pppppppbVar30 + 1);
      fVar72 = fStack_1d8;
      uStack_290 = pdb_14007ee60();
      auStack_178._0_4_ = uStack_290;
      pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,fVar72);
      fStack_28c = fVar72;
      pdb_140dea260(&uStack_138,&uStack_290);
      pppppppbVar30 = pppppppbStack_148;
      uVar20 = CONCAT43(uStack_135,uStack_138);
      uVar51 = CONCAT17((undefined1)uStack_131,uVar20);
      fVar72 = (float)CONCAT13(fStack_12d._0_1_,uStack_131._1_3_);
      if (pppppppbStack_148 == uStack_158) {
        pdb_142d8d630(&uStack_158);
      }
      uVar63 = (uint)fVar74 ^ _DAT_142e37820;
      uVar91 = (uint)fVar75 ^ _UNK_142e37824;
      uVar92 = (uint)fVar57 ^ _DAT_142e37820;
      fVar58 = _UNK_14300b15c + _DAT_142e36f28 * 0.0;
      lVar35 = (longlong)pppppppbVar30 * 0x30;
      pfVar3 = (float *)(pbStack_150 + lVar35);
      *pfVar3 = (float)uVar20 + fVar74 * 0.0;
      pfVar3[1] = (float)((ulonglong)uVar51 >> 0x20) + fVar75 * 0.0;
      pfVar3[2] = fVar72 + fVar57 * 0.0;
      pfVar3[3] = fVar58;
      *(ulonglong *)(pbStack_150 + lVar35 + 0x10) = CONCAT44(uVar91,uVar63);
      *(uint *)(pbStack_150 + lVar35 + 0x18) = uVar92;
      pbVar31 = pbStack_150 + lVar35 + 0x1c;
      pbVar31[0] = 0;
      pbVar31[1] = 0;
      pbVar31[2] = 0;
      pbVar31[3] = 0;
      *(ulonglong *)(pbStack_150 + lVar35 + 0x20) = CONCAT44(pfStack_110._0_4_,auStack_178._0_4_);
      *(float *)(pbStack_150 + lVar35 + 0x28) = fVar62;
      *(float *)(pbStack_150 + lVar35 + 0x2c) = fVar76;
      pppppppbStack_148 = (byte *******)((longlong)pppppppbVar30 + 1);
    }
    uStack_138 = SUB83(pbStack_210,0);
    uStack_135 = (undefined4)((ulonglong)pbStack_210 >> 0x18);
    uStack_131._0_1_ = (undefined1)((ulonglong)pbStack_210 >> 0x38);
    uStack_131._1_3_ = SUB83(pppppppbStack_208,0);
    fStack_12d = (float)((ulonglong)pppppppbStack_208 >> 0x18);
    uStack_129 = (undefined1)((ulonglong)pppppppbStack_208 >> 0x38);
    pppppppbStack_128 = (byte *******)ppppppbStack_1f0;
    pppppppbStack_120 = pppppppbStack_1e8;
    pdb_140844990(uStack_240,&uStack_138,0);
    uStack_138 = SUB83(pbStack_150,0);
    uStack_135 = (undefined4)((ulonglong)pbStack_150 >> 0x18);
    uStack_131._0_1_ = (undefined1)((ulonglong)pbStack_150 >> 0x38);
    uStack_131._1_3_ = SUB83(pppppppbStack_148,0);
    fStack_12d = (float)((ulonglong)pppppppbStack_148 >> 0x18);
    uStack_129 = (undefined1)((ulonglong)pppppppbStack_148 >> 0x38);
    pppppppbStack_128 = (byte *******)ppppppbStack_230;
    pppppppbStack_120 = pppppppbStack_228;
    pdb_140844990(uStack_240,&uStack_138);
    pppppppbStack_128 = pppppppbStack_1e8;
    uStack_138 = SUB83(uStack_1f8,0);
    uStack_135 = (undefined4)((ulonglong)uStack_1f8 >> 0x18);
    uStack_131._0_1_ = (undefined1)((ulonglong)uStack_1f8 >> 0x38);
    uStack_131._1_3_ = SUB83(ppppppbStack_1f0,0);
    fStack_12d = (float)((ulonglong)ppppppbStack_1f0 >> 0x18);
    uStack_129 = (undefined1)((ulonglong)ppppppbStack_1f0 >> 0x38);
    if (pppppppbStack_218 != (byte *******)0x0) {
      pub_1406abac0(pbStack_210,(longlong)pppppppbStack_218 * 0x30,4);
    }
    pppppppbStack_208 = pppppppbStack_128;
    pppppppbStack_218 =
         (byte *******)CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138));
    pbStack_210 = (byte *)CONCAT17(uStack_129,CONCAT43(fStack_12d,uStack_131._1_3_));
    pppppppbStack_128 = pppppppbStack_148;
    uStack_138 = SUB83(uStack_158,0);
    uStack_135 = (undefined4)((ulonglong)uStack_158 >> 0x18);
    uStack_131._0_1_ = (undefined1)((ulonglong)uStack_158 >> 0x38);
    uStack_131._1_3_ = SUB83(pbStack_150,0);
    fStack_12d = (float)((ulonglong)pbStack_150 >> 0x18);
    uStack_129 = (undefined1)((ulonglong)pbStack_150 >> 0x38);
    if (pppppppbStack_238 != (byte *******)0x0) {
      pub_1406abac0((byte *)ppppppbStack_230,(longlong)pppppppbStack_238 * 0x30,4);
    }
    pppppppbStack_228 = pppppppbStack_128;
    pppppppbStack_238 =
         (byte *******)CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138));
    ppppppbStack_230 = (byte ******)CONCAT17(uStack_129,CONCAT43(fStack_12d,uStack_131._1_3_));
  } while (pfStack_1c0 != pfVar52);
LAB_14084261f:
  if (lStack_190 != 0) {
    pub_1406abac0((byte *)pfStack_108,lStack_190 << 2,4);
  }
  uStack_138 = SUB83(pbStack_210,0);
  uStack_135 = (undefined4)((ulonglong)pbStack_210 >> 0x18);
  uStack_131._0_1_ = (undefined1)((ulonglong)pbStack_210 >> 0x38);
  uStack_131._1_3_ = SUB83(pppppppbStack_208,0);
  fStack_12d = (float)((ulonglong)pppppppbStack_208 >> 0x18);
  uStack_129 = (undefined1)((ulonglong)pppppppbStack_208 >> 0x38);
  pppppppbStack_128 = (byte *******)ppppppbStack_2d8;
  pppppppbStack_120 = pppppppbStack_2d0;
  uStack_f3 = 0;
  pdb_140844990(uStack_240,&uStack_138,0);
  uStack_138 = SUB83(pbStack_310,0);
  uStack_135 = (undefined4)((ulonglong)pbStack_310 >> 0x18);
  uStack_131._0_1_ = (undefined1)((ulonglong)pbStack_310 >> 0x38);
  uStack_131._1_3_ = SUB83(pppppppbStack_308,0);
  fStack_12d = (float)((ulonglong)pppppppbStack_308 >> 0x18);
  uStack_129 = (undefined1)((ulonglong)pppppppbStack_308 >> 0x38);
  pppppppbStack_128 = (byte *******)ppppppbStack_230;
  pppppppbStack_120 = pppppppbStack_228;
  uStack_f3 = 0;
  pdb_140844990(uStack_240,&uStack_138,0);
  uStack_158 = (byte *******)0x0;
  pbStack_150 = (byte *)0x4;
  pppppppbVar30 = (byte *******)0x0;
  auStack_178._0_8_ = pppppppbStack_160;
  lVar35 = 0;
LAB_14084271d:
  bVar55 = false;
  lVar42 = lVar35;
  do {
    iVar26 = (int)lVar42;
    uVar51 = auStack_178._0_8_;
    pppppppbStack_148 = pppppppbVar30;
    if ((ulonglong)auStack_178._0_8_ < 2) {
      if (bVar55) {
        if (pppppppbVar30 == uStack_158) {
          pdb_142d8d7f0(&uStack_158);
        }
        *(float *)(pbStack_150 + (longlong)pppppppbVar30 * 8) = pfStack_110._0_4_;
        *(int *)(pbStack_150 + (longlong)pppppppbVar30 * 8 + 4) = (int)pppppppbStack_160 + -1;
        pppppppbStack_148 = (byte *******)((longlong)pppppppbVar30 + 1);
      }
LAB_140842882:
      uStack_138 = SUB83(ppppppbStack_2d8,0);
      uStack_135 = (undefined4)((ulonglong)ppppppbStack_2d8 >> 0x18);
      uStack_131._0_1_ = (undefined1)((ulonglong)ppppppbStack_2d8 >> 0x38);
      uStack_131._1_3_ = SUB83(pppppppbStack_2d0,0);
      fStack_12d = (float)((ulonglong)pppppppbStack_2d0 >> 0x18);
      uStack_129 = (undefined1)((ulonglong)pppppppbStack_2d0 >> 0x38);
      pppppppbStack_128 = pppppppbStack_2f8;
      pppppppbStack_120 = pppppppbStack_2f0;
      pdb_140844990(uStack_240,&uStack_138,pbStack_150,pppppppbStack_148,1,&uStack_2b0,
                    &pppppppbStack_2c8);
      if (uStack_158 != (byte *******)0x0) {
        pub_1406abac0(pbStack_150,(longlong)uStack_158 << 3,4);
      }
      if (pppppppbStack_318 != (byte *******)0x0) {
        pub_1406abac0(pbStack_310,(longlong)pppppppbStack_318 * 0x30,4);
      }
      if (pppppppbStack_238 != (byte *******)0x0) {
        pub_1406abac0((byte *)ppppppbStack_230,(longlong)pppppppbStack_238 * 0x30,4);
      }
      if (pppppppbStack_300 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_2f8,(longlong)pppppppbStack_300 * 0x30,4);
      }
      if (pppppppbStack_2e0 != (byte *******)0x0) {
        pub_1406abac0((byte *)ppppppbStack_2d8,(longlong)pppppppbStack_2e0 * 0x30,4);
      }
      if (pppppppbStack_218 != (byte *******)0x0) {
        pub_1406abac0(pbStack_210,(longlong)pppppppbStack_218 * 0x30,4);
      }
      goto LAB_1408429b9;
    }
    auStack_178._0_8_ = auStack_178._0_8_ - 1;
    pfVar52 = pfStack_1b8 + 6;
    lVar35 = lVar42 + 1;
    if ((pfStack_1b8[2] < pfStack_1b8[1] || pfStack_1b8[2] == pfStack_1b8[1]) &&
       (pfStack_1b8[8] < pfStack_1b8[7] || pfStack_1b8[8] == pfStack_1b8[7])) {
      if (bVar55) break;
      pfVar52 = pfStack_1b8 + 0xe;
      lVar35 = 0;
      do {
        lVar48 = lVar35;
        pfStack_1b8 = pfVar52;
        if ((uVar51 + lVar48) - 1U < 2) goto LAB_140842882;
        if (pfStack_1b8[-7] <= pfStack_1b8[-6] && pfStack_1b8[-6] != pfStack_1b8[-7]) break;
        pfVar52 = pfStack_1b8 + 6;
        lVar35 = lVar48 + -1;
      } while (*pfStack_1b8 < pfStack_1b8[-1] || *pfStack_1b8 == pfStack_1b8[-1]);
      auStack_178._0_8_ = uVar51 + lVar48 + -2;
      iVar26 = (int)(lVar42 - lVar48) + 1;
      lVar35 = (lVar42 - lVar48) + 2;
      bVar55 = false;
      pfVar52 = pfStack_1b8 + -2;
    }
    pfStack_1b8 = pfVar52;
    if (bVar55) {
      iVar26 = (int)pfStack_110._0_4_;
    }
    bVar55 = true;
    pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,iVar26);
    lVar42 = lVar35;
  } while( true );
  pfStack_1b8 = pfVar52;
  if (pppppppbVar30 == uStack_158) {
    pdb_142d8d7f0(&uStack_158);
  }
  *(float *)(pbStack_150 + (longlong)pppppppbVar30 * 8) = pfStack_110._0_4_;
  *(int *)(pbStack_150 + (longlong)pppppppbVar30 * 8 + 4) = iVar26;
  pppppppbVar30 = (byte *******)((longlong)pppppppbVar30 + 1);
  goto LAB_14084271d;
}

