// VA 0x140645260, PDB extent 9351 bytes
// tiny_glade::sdl_event_loop::run_event_loop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::sdl_event_loop::run_event_loop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
   Extent: 9351 */

longlong *
pdb_140645260(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,longlong param_6,undefined8 *param_7,longlong param_8,
             undefined8 *param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  int extraout_EAX;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  undefined4 uVar24;
  undefined8 uStack_420;
  undefined4 uStack_418;
  uint uStack_410;
  int iStack_40c;
  char cStack_408;
  undefined7 uStack_407;
  longlong *plStack_400;
  longlong *plStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  char *pcStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulonglong uStack_398;
  byte *pbStack_390;
  undefined8 uStack_380;
  longlong *plStack_378;
  longlong lStack_308;
  undefined8 *puStack_300;
  uint uStack_2b0;
  int iStack_2ac;
  ulonglong *puStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  undefined8 uStack_290;
  longlong lStack_288;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined4 auStack_214 [3];
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulonglong *puStack_1c8;
  char *pcStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulonglong uStack_188;
  byte *pbStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined1 auStack_148 [8];
  longlong *plStack_140;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char *pcStack_108;
  undefined1 *puStack_100;
  undefined8 *puStack_f8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined1 uStack_c4;
  char cStack_c3;
  undefined1 auStack_c2 [130];
  
  auStack_c2._2_8_ = 0xfffffffffffffffe;
  lStack_230 = param_6;
  puStack_228 = param_7;
  lStack_308 = param_8;
  puStack_300 = param_9;
  uStack_380 = param_3;
  uStack_220 = param_4;
  pdb_1406d0630(param_2);
  pdb_1406d0630(param_2);
  puVar15 = param_5;
  pdb_1406d1630(&uStack_208);
  uVar14 = SUB84(puVar15,0);
  uVar13 = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
  iStack_2ac = (uint)uStack_200;
  if ((!SBORROW8(0,uVar13)) && (iStack_2ac = -(uint)uStack_208, uVar13 != 0)) {
    uVar11 = uVar13;
    pub_1406abac0((byte *)CONCAT44(uStack_200._4_4_,(uint)uStack_200),uVar13,1);
    uVar14 = (undefined4)uVar11;
    iStack_2ac = extraout_EAX;
  }
  uStack_2b0 = (uint)SBORROW8(0,uVar13);
  auStack_214[0] = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  pbStack_180 = (byte *)0x8;
  pdb_140951970(&iStack_e0);
  lStack_168 = 0;
  plStack_378 = param_1;
  uStack_238 = pdb_140f3c9d0();
  uStack_398 = 0x8000000000000000;
  cStack_c3 = '\x01';
  uStack_d0 = uVar14;
  pdb_140648e50(&uStack_410,uStack_220);
  plStack_1f0 = plStack_400;
  plStack_1f8 = (longlong *)CONCAT71(uStack_407,cStack_408);
  uStack_200._0_4_ = uStack_410;
  uStack_200._4_4_ = iStack_40c;
  uStack_208._0_4_ = CONCAT31(uStack_208._1_3_,0xe);
  plVar10 = &lStack_230;
  pdb_140558a30(&uStack_410,plVar10,&uStack_208);
  if ((char)uStack_410 != '\x10') {
    pdb_1404c7c30(&uStack_410);
  }
  fVar4 = _DAT_142e382cc;
  uStack_c4 = 0;
  do {
    plVar5 = plStack_378;
    if (cStack_c3 == '\0') {
      plStack_378[2] = lStack_158;
      *plStack_378 = lStack_168;
      plStack_378[1] = lStack_160;
      if ((!SBORROW8(0,uStack_398)) && (uStack_398 != 0)) {
        pub_1406abac0(pbStack_390,uStack_398,1);
      }
      if (uStack_188 != 0) {
        pub_1406abac0(pbStack_180,uStack_188 << 3,8);
      }
      pdb_1406d1b60(auStack_c2);
      pdb_1406d1b60(auStack_c2);
      pdb_1404dbd30(&lStack_308);
      pdb_1404dd540(&lStack_230);
      return plVar5;
    }
    uVar8 = pdb_1406d1900(param_5);
    uVar13 = (ulonglong)plVar10 & 0xffffffff;
    uVar9 = pdb_1406d18a0(param_5);
    auVar22._0_4_ = (float)uVar9;
    auVar22._4_4_ = (float)((ulonglong)plVar10 & 0xffffffff);
    auVar22._8_8_ = 0;
    auVar23._4_4_ = (float)uVar13;
    auVar23._0_4_ = (float)uVar8;
    auVar23._8_8_ = 0;
    auVar23 = divps(auVar22,auVar23);
    uStack_248 = auVar23._0_8_;
    uStack_208 = &uStack_220;
    uStack_200 = &param_5;
    plStack_1f8 = (longlong *)auStack_c2;
    plStack_1f0 = &lStack_230;
    uStack_1e8 = &uStack_2b0;
    uStack_1e0 = auStack_214;
    uStack_1d8 = &iStack_e0;
    uStack_1d0 = &lStack_168;
    puStack_1c8 = &uStack_398;
    pcStack_1c0 = &cStack_c3;
    puStack_1b8 = &uStack_c4;
    puStack_1b0 = &uStack_248;
    pdb_14014e760(uStack_380,&uStack_208);
    iStack_cc = 2;
    uStack_d4 = 0;
    puVar15 = puStack_300;
    if (lStack_308 == 0) {
      pdb_140477ec0(&uStack_410);
    }
    else if ((int)lStack_308 == 1) {
      pdb_140161dd0(&uStack_410);
    }
    else {
      pdb_14053bd20(&uStack_410);
    }
    if (CONCAT44(iStack_40c,uStack_410) != -0x7ffffffffffffff8) {
      uStack_200._0_4_ = (uint)CONCAT71(uStack_407,cStack_408);
      uStack_200._4_4_ = (int)((uint7)uStack_407 >> 0x18);
      uStack_198 = uStack_3a0;
      uStack_1a8 = uStack_3b0;
      uStack_1a0 = uStack_3a8;
      puStack_1b8 = puStack_3c0;
      puStack_1b0 = puStack_3b8;
      pcStack_1c0 = pcStack_3c8;
      plStack_1f8 = plStack_400;
      plStack_1f0 = plStack_3f8;
      lVar17 = 4;
      if (iStack_40c < 0) {
        lVar17 = CONCAT44(iStack_40c,uStack_410);
      }
                    /* WARNING: Could not recover jumptable at 0x00014064567a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar10 = (longlong *)
                (*(code *)(&UNK_142f8c61c + *(int *)(&UNK_142f8c61c + lVar17 * 4)))
                          (CONCAT44(iStack_40c,uStack_410),
                           &UNK_142f8c61c + *(int *)(&UNK_142f8c61c + lVar17 * 4));
      return plVar10;
    }
    if (cStack_408 != '\0') {
      cStack_c3 = '\0';
    }
    puVar2 = uStack_200;
    if ((uStack_d4 & 1) != 0) {
      fVar21 = unaff_XMM9_Da / (float)uStack_248;
      iVar18 = (int)fVar21;
      if (fVar4 < fVar21) {
        iVar18 = 0x7fffffff;
      }
      if (NAN(fVar21)) {
        iVar18 = 0;
      }
      fVar21 = unaff_XMM8_Da / uStack_248._4_4_;
      iVar19 = (int)fVar21;
      if (fVar4 < fVar21) {
        iVar19 = 0x7fffffff;
      }
      if (NAN(fVar21)) {
        iVar19 = 0;
      }
      puVar15 = param_5;
      pdb_1406d0ee0(auStack_c2,param_5,iVar18,iVar19);
      puVar2 = uStack_200;
    }
    uStack_200._4_4_ = (int)((ulonglong)puVar2 >> 0x20);
    if (iStack_cc != 2) {
      uStack_208._0_4_ = iStack_cc;
      uStack_208._4_4_ = (int)uStack_240;
      uStack_200._0_4_ = (uint)((ulonglong)uStack_240 >> 0x20);
      cVar6 = pdb_140958290(&uStack_208);
      uStack_200._0_4_ = uStack_d8;
      uStack_208._0_4_ = iStack_e0;
      uStack_208._4_4_ = uStack_dc;
      cVar7 = pdb_140958290(&uStack_208);
      if (cVar6 != cVar7) {
        uStack_208._0_4_ = iStack_cc;
        uStack_208._4_4_ = (int)uStack_240;
        uStack_200._0_4_ = (uint)((ulonglong)uStack_240 >> 0x20);
        uVar8 = pdb_140958290(&uStack_208);
        puVar15 = (undefined8 *)(ulonglong)uVar8;
        pdb_1406d0ed0(auStack_c2);
      }
      puVar2 = (undefined8 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200);
      iStack_e0 = iStack_cc;
      uStack_dc = (undefined4)uStack_240;
      uStack_d8 = (undefined4)((ulonglong)uStack_240 >> 0x20);
      if (lStack_168 != 0) {
        uStack_200._0_4_ = uStack_d8;
        uStack_208._0_4_ = iStack_cc;
        uStack_208._4_4_ = uStack_dc;
        puVar15 = &uStack_208;
        pdb_140958370(&lStack_168);
        puVar2 = (undefined8 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200);
      }
    }
    lVar17 = lStack_170;
    lStack_170 = 0;
    puStack_2a8 = &uStack_188;
    lStack_2a0 = lVar17;
    uStack_290 = 0;
    lVar20 = 0;
    puVar3 = uStack_208;
    do {
      do {
        uStack_208._4_4_ = (int)((ulonglong)puVar3 >> 0x20);
        uVar14 = SUB84(puVar15,0);
        if (lVar17 == 0) goto LAB_140646588;
        uVar11 = lStack_178 + lVar20;
        uVar13 = 0;
        if (uStack_188 <= uVar11) {
          uVar13 = uStack_188;
        }
        lVar20 = lVar20 + 1;
        lVar17 = lVar17 + -1;
        uStack_208._1_3_ = (undefined3)((ulonglong)puVar3 >> 8);
        uStack_200._0_4_ = (uint)*(undefined8 *)(pbStack_180 + (uVar11 - uVar13) * 8);
        uStack_200._4_4_ =
             (int)((ulonglong)*(undefined8 *)(pbStack_180 + (uVar11 - uVar13) * 8) >> 0x20);
        puVar15 = puStack_228;
        lStack_298 = lVar20;
        lStack_288 = lVar17;
        if (lStack_230 == 2) {
          uStack_208._0_4_ = CONCAT31(uStack_208._1_3_,0xb);
          uVar24 = 1000000000;
          pdb_140534d80(&uStack_410,puStack_228,&uStack_208);
        }
        else if ((int)lStack_230 == 1) {
          uStack_208._0_4_ = CONCAT31(uStack_208._1_3_,0xb);
          uVar24 = 1000000000;
          pdb_1401613b0(&uStack_410,puStack_228,&uStack_208);
        }
        else {
          uStack_208._0_4_ = CONCAT31(uStack_208._1_3_,0xb);
          uVar24 = 1000000000;
          pdb_140476040(&uStack_410,puStack_228,&uStack_208);
        }
        puVar2 = (undefined8 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200);
        puVar3 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
        uVar14 = SUB84(puVar15,0);
      } while (uStack_410 == 2);
      plStack_1f8 = plStack_400;
      plStack_1f0 = plStack_3f8;
      uStack_208._0_4_ = uStack_410;
      uStack_208._4_4_ = iStack_40c;
      puVar3 = (undefined8 *)CONCAT44(iStack_40c,uStack_410);
      uStack_200._0_4_ = (uint)CONCAT71(uStack_407,cStack_408);
      uStack_200._4_4_ = (int)((uint7)uStack_407 >> 0x18);
      puVar2 = (undefined8 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200);
      puStack_1b8 = puStack_3c0;
      puStack_1b0 = puStack_3b8;
      puStack_1c8 = (ulonglong *)CONCAT44(uStack_3cc,uStack_3d0);
      pcStack_1c0 = pcStack_3c8;
      uStack_1d8 = (int *)CONCAT44(uStack_3dc,uStack_3e0);
      uStack_1d0 = (longlong *)CONCAT44(uStack_3d4,uStack_3d8);
      uStack_1e8 = (uint *)CONCAT44(uStack_3ec,uStack_3f0);
      uStack_1e0 = (undefined4 *)CONCAT44(uStack_3e4,uStack_3e8);
      if ((uStack_410 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_142f66cd8,0x28,&UNK_142f66d70,uStack_3e0,uVar24);
      }
      puStack_f8 = puStack_3b8;
      pcStack_108 = pcStack_3c8;
      puStack_100 = puStack_3c0;
      plStack_140 = plStack_400;
      uStack_128 = uStack_3e8;
      uStack_124 = uStack_3e4;
      uStack_120 = uStack_3e0;
      uStack_11c = uStack_3dc;
      uStack_118 = uStack_3d8;
      uStack_114 = uStack_3d4;
      uStack_110 = uStack_3d0;
      uStack_10c = uStack_3cc;
    } while (cStack_408 == '\x10');
    pdb_1404c7c30(auStack_148);
    puVar2 = (undefined8 *)CONCAT44(uStack_200._4_4_,(uint)uStack_200);
    puVar3 = (undefined8 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
LAB_140646588:
    if (lStack_170 == 0) {
      lStack_178 = 0;
    }
    uStack_208 = puVar3;
    uStack_200 = puVar2;
    uVar12 = pdb_140f3c9d0();
    uVar16 = uStack_238;
    uStack_420 = uVar12;
    uStack_418 = uVar14;
    uVar13 = pdb_140f3c790(&uStack_420,uStack_238,uStack_d0);
    bVar1 = (int)uVar16 != 0;
    if (uVar13 != 1) {
      bVar1 = 1 < uVar13;
    }
    uVar16 = uStack_238;
    uVar24 = uStack_d0;
    if (bVar1) {
      uStack_200._0_4_ = uStack_d8;
      uStack_208._0_4_ = iStack_e0;
      uStack_208._4_4_ = uStack_dc;
      uVar13 = pdb_1409582e0(&uStack_208);
      uVar16 = uVar12;
      uVar24 = uVar14;
      if ((uVar13 & 1) != 0) {
        pdb_1406d0ed0(auStack_c2,0);
      }
    }
    uStack_d0 = uVar24;
    uStack_238 = uVar16;
    plVar10 = (longlong *)0xf4240;
    pdb_140f502d0(0);
  } while( true );
}

