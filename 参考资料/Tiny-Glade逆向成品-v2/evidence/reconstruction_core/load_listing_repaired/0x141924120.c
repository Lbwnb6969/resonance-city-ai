// Matched PDB: country_core::systems::save::load_game::load_game
// VA 0x141924120, PDB extent 24263 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Instruction at (ram,0x00014192d49e) overlaps instruction at (ram,0x00014192d49c)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014192a2ba) */
/* WARNING: Removing unreachable block (ram,0x00014192a839) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::systems::save::load_game::load_game
   Extent: 24263 bytes. No whole-program auto-analysis. */

undefined1 (*) [16]
pdb_141924120(undefined1 (*param_1) [16],longlong *param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 param_8,
             undefined1 (*param_9) [16],longlong *param_10,undefined8 *param_11,longlong *param_12,
             undefined8 *param_13)

{
  int *piVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 auVar22 [8];
  char cVar23;
  byte bVar24;
  byte bVar25;
  char cVar26;
  int iVar27;
  ulonglong uVar28;
  char *pcVar29;
  undefined1 (*pauVar30) [16];
  byte *pbVar31;
  undefined1 (*extraout_RAX) [16];
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  undefined7 uVar36;
  undefined1 (*extraout_RAX_00) [16];
  undefined1 (*extraout_RAX_01) [16];
  undefined1 (*extraout_RAX_02) [16];
  undefined1 (*extraout_RAX_03) [16];
  char *pcVar35;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar39;
  undefined4 uVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined *puVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (**ppauVar46) [16];
  ulonglong uVar47;
  undefined1 (*pauVar48) [16];
  byte *pbVar49;
  undefined1 (**ppauVar50) [16];
  undefined8 **ppuVar51;
  longlong lVar52;
  undefined1 (*pauVar53) [16];
  undefined1 (*pauVar54) [16];
  longlong lVar55;
  longlong lVar56;
  undefined1 (**ppauVar57) [16];
  int *piVar58;
  int iVar59;
  ulonglong uVar60;
  undefined1 (*pauVar61) [16];
  ulonglong uVar62;
  ulonglong uVar63;
  longlong lVar64;
  longlong *plVar65;
  undefined8 uVar66;
  longlong *plVar67;
  undefined *puVar68;
  int iVar69;
  undefined8 uVar70;
  bool bVar71;
  bool bVar72;
  undefined1 (*pauVar73) [16];
  undefined1 (*extraout_XMM0_Qb) [16];
  undefined1 (*extraout_XMM0_Qb_00) [16];
  undefined1 (*extraout_XMM0_Qb_01) [16];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined8 *apuStack_d10 [5];
  undefined1 (*pauStack_ce8) [16];
  undefined1 (*pauStack_ce0) [16];
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  undefined1 (*pauStack_cb8) [16];
  undefined1 (*pauStack_cb0) [16];
  undefined1 (*pauStack_ca8) [16];
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined4 uStack_c90;
  undefined2 uStack_c8c;
  undefined1 auStack_c8a [4];
  undefined2 uStack_c86;
  undefined4 uStack_c84;
  undefined8 uStack_c80;
  ulonglong uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  byte *pbStack_c60;
  ulonglong uStack_c58;
  undefined8 uStack_c50;
  byte *pbStack_c48;
  byte *pbStack_c38;
  undefined1 uStack_c29;
  undefined4 uStack_c28;
  undefined1 (*pauStack_ae8) [16];
  undefined1 (*pauStack_ae0) [16];
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  undefined4 uStack_ac0;
  uint uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  longlong lStack_a88;
  longlong lStack_a80;
  longlong lStack_a58;
  longlong lStack_a50;
  undefined1 (*pauStack_8e8) [16];
  undefined1 (*pauStack_8e0) [16];
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 (*pauStack_8b8) [16];
  undefined1 (*pauStack_8b0) [16];
  undefined1 auStack_8a8 [8];
  undefined1 (*pauStack_8a0) [16];
  undefined1 (*pauStack_898) [16];
  undefined1 auStack_890 [12];
  undefined4 uStack_884;
  undefined1 (*pauStack_880) [16];
  undefined1 (*pauStack_878) [16];
  undefined1 (**ppauStack_870) [16];
  byte *pbStack_868;
  undefined8 uStack_830;
  undefined1 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7e0;
  undefined1 uStack_7d8;
  ulonglong uStack_6b8;
  byte *pbStack_6b0;
  undefined1 (*pauStack_6a8) [16];
  undefined1 (*pauStack_6a0) [16];
  undefined1 (*pauStack_698) [16];
  undefined1 (*pauStack_690) [16];
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  longlong lStack_658;
  longlong lStack_650;
  undefined4 *puStack_648;
  undefined4 *puStack_640;
  undefined4 *puStack_638;
  longlong lStack_630;
  longlong lStack_628;
  undefined4 *puStack_620;
  longlong lStack_618;
  ulonglong uStack_610;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined8 uStack_600;
  undefined4 *puStack_5f0;
  undefined4 *puStack_5e8;
  longlong *plStack_5e0;
  undefined4 *puStack_5d8;
  undefined1 (*pauStack_5d0) [16];
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 (*pauStack_5b0) [16];
  undefined1 (*pauStack_5a8) [16];
  undefined1 (*pauStack_5a0) [16];
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 (*pauStack_578) [16];
  undefined1 (**ppauStack_570) [16];
  byte *pbStack_568;
  undefined1 (**ppauStack_560) [16];
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined1 uStack_544;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined1 uStack_51f;
  char cStack_51c;
  undefined7 uStack_51b;
  int iStack_514;
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined1 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 (*pauStack_4c0) [16];
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined2 uStack_4ac;
  undefined4 uStack_4a8;
  undefined1 (*pauStack_4a4) [16];
  undefined1 (*pauStack_49c) [16];
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined8 uStack_480;
  undefined7 uStack_2b8;
  int iStack_2b1;
  undefined5 uStack_2ad;
  undefined1 (*pauStack_2a8) [16];
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  undefined1 (*pauStack_288) [16];
  undefined8 uStack_280;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  longlong lStack_260;
  undefined1 (*pauStack_258) [16];
  longlong lStack_250;
  undefined1 (**ppauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte *pbStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1a8) [16];
  ulonglong uStack_1a0;
  undefined8 *puStack_198;
  undefined1 (**ppauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  byte *pbStack_170;
  longlong lStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  longlong *plStack_140;
  undefined1 (*pauStack_138) [16];
  int *piStack_130;
  undefined1 (*pauStack_128) [16];
  undefined8 uStack_120;
  undefined1 (*pauStack_110) [16];
  longlong *plStack_108;
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
  undefined8 *puVar45;
  
  ppuVar51 = (undefined8 **)(auStack_c8a + 2);
  uStack_f0 = 0xfffffffffffffffe;
  lVar55 = param_13[1];
  uVar42 = *(ulonglong *)*param_13;
  uVar37 = 0;
  uVar38 = uVar42 - *(ulonglong *)(lVar55 + 0x18);
  if (uVar42 < *(ulonglong *)(lVar55 + 0x18)) {
    uVar38 = uVar37;
  }
  uVar28 = uVar42 - *(ulonglong *)(lVar55 + 0x38);
  if (uVar42 < *(ulonglong *)(lVar55 + 0x38)) {
    uVar28 = uVar37;
  }
  uStack_1a0 = *(ulonglong *)(lVar55 + 0x10);
  pauStack_178 = *(undefined1 (**) [16])(lVar55 + 0x30);
  bVar71 = pauStack_178 < uVar28;
  uVar60 = (longlong)pauStack_178 - uVar28;
  uVar42 = uVar60;
  if (bVar71) {
    uVar42 = uVar37;
  }
  bVar72 = uStack_1a0 < uVar38;
  uVar62 = uStack_1a0 - uVar38;
  uVar63 = uVar62;
  if (bVar72) {
    uVar63 = uVar37;
  }
  uVar47 = uVar42 + uVar63;
  if (!bVar72 && uVar62 != 0 || !bVar71 && uVar60 != 0) {
    uVar47 = uVar37;
  }
  pauVar30 = (undefined1 (*) [16])param_12[0x16];
  lStack_250 = *param_12;
  puStack_5f0 = (undefined4 *)param_12[2];
  uStack_22c = *(undefined4 *)((longlong)param_12 + 0x1c);
  puStack_208 = (undefined8 *)param_12[4];
  auStack_298._0_8_ = param_12[6];
  pauStack_288 = (undefined1 (*) [16])
                 CONCAT44(pauStack_288._4_4_,*(undefined4 *)((longlong)param_12 + 0x3c));
  puStack_5c8 = (undefined8 *)param_12[8];
  pauStack_240 = (undefined1 (*) [16])param_12[10];
  uStack_274 = *(undefined4 *)((longlong)param_12 + 0x5c);
  pauStack_188 = (undefined1 (*) [16])param_12[0xc];
  puStack_5e8 = (undefined4 *)param_12[0xe];
  uStack_228 = *(undefined4 *)((longlong)param_12 + 0x7c);
  pauStack_2a8 = (undefined1 (*) [16])param_12[0x10];
  puStack_648 = (undefined4 *)param_12[0x12];
  uStack_270 = *(undefined4 *)((longlong)param_12 + 0x9c);
  lStack_628 = param_12[0x14];
  lStack_630 = param_12[0x15];
  puStack_198 = (undefined8 *)param_12[0x17];
  puStack_640 = (undefined4 *)param_12[0x19];
  uStack_26c = *(undefined4 *)((longlong)param_12 + 0xd4);
  plStack_5e0 = (longlong *)param_12[0x1b];
  puStack_638 = (undefined4 *)param_12[0x1d];
  uStack_268 = *(undefined4 *)((longlong)param_12 + 0xf4);
  lStack_260 = param_12[0x1f];
  puStack_620 = (undefined4 *)param_12[0x21];
  uStack_264 = *(undefined4 *)((longlong)param_12 + 0x114);
  lVar33 = param_13[5];
  puVar7 = (undefined4 *)param_13[7];
  uVar40 = *(undefined4 *)((longlong)param_13 + 0x44);
  lStack_168 = param_13[9];
  pbStack_218 = (byte *)param_13[0xb];
  uStack_210 = CONCAT44(uStack_210._4_4_,*(undefined4 *)((longlong)param_13 + 100));
  pauStack_138 = (undefined1 (*) [16])param_13[0xd];
  pauStack_1a8 = (undefined1 (*) [16])param_13[0xf];
  pbStack_148 = (byte *)CONCAT44(pbStack_148._4_4_,*(undefined4 *)((longlong)param_13 + 0x84));
  piStack_130 = (int *)param_13[0x11];
  pauStack_200 = (undefined1 (*) [16])param_13[0x13];
  ppauStack_248 =
       (undefined1 (**) [16])
       CONCAT44(ppauStack_248._4_4_,*(undefined4 *)((longlong)param_13 + 0xa4));
  lVar64 = *(longlong *)(lVar55 + 8);
  lVar52 = *(longlong *)(lVar55 + 0x28);
  *(ulonglong *)*param_13 = *(longlong *)(lVar55 + 0x40) - uVar47;
  pbStack_170 = (byte *)param_3;
  pauStack_128 = (undefined1 (*) [16])param_2;
  pauStack_110 = param_1;
  plStack_108 = param_4;
  if (!bVar72 && uVar62 != 0 || !bVar71 && uVar60 != 0) {
    lVar52 = lVar52 + uVar28 * 0x38;
    lVar64 = lVar64 + uVar38 * 0x38;
    if (uStack_1a0 < uVar38) {
      lVar64 = 8;
    }
    pcVar35 = (char *)0x0;
    if (uVar38 < uStack_1a0) {
      pcVar35 = (char *)(lVar64 + -0x38 + uVar63 * 0x38);
    }
    if (pauStack_178 < uVar28) {
      lVar52 = 8;
    }
    pcVar29 = (char *)(lVar52 + -0x38 + uVar42 * 0x38);
    if (pauStack_178 <= uVar28) {
      pcVar29 = pcVar35;
    }
    if (*pcVar29 == '\n') {
      lVar55 = *param_2;
      if (*(longlong *)(lVar55 + 0x18) == -0x7fffffffffffffff) {
        lStack_650 = lVar55 + 0x20;
        apuStack_d10[0] = (undefined8 *)0x141924482;
        pdb_140f4f620(&uStack_5b8,*(undefined8 *)(lVar55 + 0x28),*(undefined8 *)(lVar55 + 0x30));
        if ((int)uStack_5b8 == 2) {
          pauStack_8b8 = (undefined1 (*) [16])0x2;
LAB_1419277bb:
          apuStack_d10[0] = (undefined8 *)0x1419277c7;
          pdb_1404b38e0(&pauStack_8b0);
          uStack_5b8 = (undefined1 (*) [16])&lStack_650;
          pauStack_5b0 = (undefined1 (*) [16])pdb_140117660;
                    /* WARNING: Subroutine does not return */
          apuStack_d10[0] = (undefined8 *)0x1419277fd;
          pdb_142dc83d0(&UNK_14335986c,&uStack_5b8,&UNK_143359880);
        }
        pauStack_8b8 = uStack_5b8;
        pauStack_8b0 = pauStack_5b0;
        pbStack_868 = pbStack_568;
        pauStack_878 = pauStack_578;
        ppauStack_870 = ppauStack_570;
        auStack_890._8_4_ = (undefined4)uStack_588;
        uStack_884 = uStack_588._4_4_;
        pauStack_880 = uStack_580;
        pauStack_898 = uStack_598;
        auStack_890._0_8_ = uStack_590;
        pauStack_8a0._0_4_ = pauStack_5a0._0_4_;
        auStack_8a8 = (undefined1  [8])pauStack_5a8;
        pauStack_8a0._4_4_ = pauStack_5a0._4_4_;
        if (uStack_5b8 == (undefined1 (*) [16])0x2) goto LAB_1419277bb;
      }
      if (*(char *)(lVar55 + 0x68) != '\0') {
                    /* WARNING: Subroutine does not return */
        apuStack_d10[0] = (undefined8 *)0x1419271f8;
        pdb_142dc83b0(&UNK_143359898,0x58,&UNK_1433598f0);
      }
    }
  }
  if ((**(undefined1 (**) [16])*pauStack_110)[0] != '\n') {
    return *(undefined1 (**) [16])*pauStack_110;
  }
  pauStack_178 = *(undefined1 (**) [16])pauStack_128;
  if (pauStack_178[6][8] != '\0') {
    if (pauStack_178[6][8] == '\x01') {
      iVar27 = *(int *)(pauStack_178[6] + 0xc);
      if (iVar27 < 0) {
        for (iVar69 = 0; iVar69 < -iVar27; iVar69 = iVar69 + 1) {
          *puVar7 = uVar40;
          lVar55 = *(longlong *)(lVar33 + 0x30);
          uVar70 = *(undefined8 *)(lVar33 + 0x40);
          if (lVar55 == *(longlong *)(lVar33 + 0x20)) {
            uStack_150 = 0x8000000000000000;
            uStack_f2 = 1;
            apuStack_d10[0] = (undefined8 *)0x141924c4c;
            pdb_142d7e980(lVar33 + 0x20);
          }
          lVar64 = *(longlong *)(lVar33 + 0x28);
          *(undefined8 *)(lVar64 + lVar55 * 0x10) = uVar70;
          *(undefined4 *)(lVar64 + 8 + lVar55 * 0x10) = 0x3010001;
          *(longlong *)(lVar33 + 0x30) = lVar55 + 1;
          *(longlong *)(lVar33 + 0x40) = *(longlong *)(lVar33 + 0x40) + 1;
        }
      }
      else {
        for (iVar69 = 0; iVar69 < iVar27; iVar69 = iVar69 + 1) {
          *puVar7 = uVar40;
          lVar55 = *(longlong *)(lVar33 + 0x30);
          uVar70 = *(undefined8 *)(lVar33 + 0x40);
          if (lVar55 == *(longlong *)(lVar33 + 0x20)) {
            uStack_150 = 0x8000000000000000;
            uStack_f2 = 1;
            apuStack_d10[0] = (undefined8 *)0x1419245b0;
            pdb_142d7e980(lVar33 + 0x20);
          }
          lVar64 = *(longlong *)(lVar33 + 0x28);
          *(undefined8 *)(lVar64 + lVar55 * 0x10) = uVar70;
          *(undefined4 *)(lVar64 + 8 + lVar55 * 0x10) = 0x3010101;
          *(longlong *)(lVar33 + 0x30) = lVar55 + 1;
          *(longlong *)(lVar33 + 0x40) = *(longlong *)(lVar33 + 0x40) + 1;
        }
      }
      **(undefined4 **)((longlong)pauStack_128 + 0x10) =
           *(undefined4 *)((longlong)pauStack_128 + 0x1c);
      pauStack_178[6][8] = 2;
      return pauStack_178;
    }
    **(undefined4 **)((longlong)pauStack_128 + 0x10) =
         *(undefined4 *)((longlong)pauStack_128 + 0x1c);
    auStack_8a8 = *(undefined1 (*) [8])*pauStack_178;
    pauStack_8b0 = *(undefined1 (**) [16])(*pauStack_178 + 8);
    lVar55 = *(longlong *)pauStack_178[1];
    *(undefined8 *)*pauStack_178 = 0;
    *(undefined8 *)(*pauStack_178 + 8) = 8;
    *(undefined8 *)pauStack_178[1] = 0;
    pauStack_8a0 = pauStack_8b0 + lVar55 * 2;
    pauStack_8b8 = pauStack_8b0;
    pauVar30 = pauStack_8b0;
    if (lVar55 != 0) {
      pauStack_128 = (undefined1 (*) [16])
                     CONCAT44(pauStack_128._4_4_,*(undefined4 *)((longlong)pbStack_170 + 0x1c));
      uVar70 = *(undefined8 *)pbStack_170;
      puVar7 = *(undefined4 **)((longlong)pbStack_170 + 0x10);
      pauStack_110 = pauStack_138 + 2;
      do {
        pauVar30 = pauStack_8b0 + 2;
        pauVar54 = *(undefined1 (**) [16])*pauStack_8b0;
        if (pauVar54 == (undefined1 (*) [16])0x8000000000000003) break;
        pauVar53 = *(undefined1 (**) [16])(*pauStack_8b0 + 8);
        uVar42 = (ulonglong)pauVar54 ^ 0x8000000000000000;
        if (-1 < (longlong)pauVar54) {
          uVar42 = 1;
        }
        if (uVar42 == 0) {
          uStack_5b8 = *(undefined1 (**) [16])pauStack_8b0[1];
          pauStack_5b0 = *(undefined1 (**) [16])(pauStack_8b0[1] + 8);
          *(undefined4 *)*pauStack_1a8 = pbStack_148._0_4_;
          lVar55 = *(longlong *)pauStack_138[3];
          uVar8 = *(undefined8 *)pauStack_138[4];
          pauStack_8b0 = pauVar30;
          if (lVar55 == *(longlong *)pauStack_138[2]) {
            apuStack_d10[0] = (undefined8 *)0x141924ac0;
            pdb_142d7e6e0(pauStack_110);
          }
          lVar33 = *(longlong *)(pauStack_138[2] + 8);
          lVar64 = lVar55 * 0x20;
          *(undefined1 (**) [16])(lVar33 + lVar64) = pauVar53;
          puVar45 = (undefined8 *)(lVar33 + 8 + lVar64);
          *puVar45 = uStack_5b8;
          puVar45[1] = pauStack_5b0;
          *(undefined8 *)(lVar33 + 0x18 + lVar64) = uVar8;
          *(longlong *)pauStack_138[3] = lVar55 + 1;
          *(longlong *)pauStack_138[4] = *(longlong *)pauStack_138[4] + 1;
        }
        else if (uVar42 == 1) {
          pauStack_5a8 = *(undefined1 (**) [16])pauStack_8b0[1];
          pauStack_5a0 = *(undefined1 (**) [16])(pauStack_8b0[1] + 8);
          *puVar7 = pauStack_128._0_4_;
          apuStack_d10[0] = (undefined8 *)0x141924a72;
          pauStack_8b0 = pauVar30;
          uStack_5b8 = pauVar54;
          pauStack_5b0 = pauVar53;
          pdb_140928690(uVar70,&uStack_5b8);
        }
        else {
          LOCK();
          pauVar53[1][0] = 0;
          UNLOCK();
          LOCK();
          *(longlong *)*pauVar53 = *(longlong *)*pauVar53 + -1;
          UNLOCK();
          pauStack_8b0 = pauVar30;
          uStack_5b8 = pauVar53;
          if (*(longlong *)*pauVar53 == 0) {
            apuStack_d10[0] = (undefined8 *)0x141924af2;
            pdb_140315620(&uStack_5b8);
          }
        }
        pauVar30 = pauStack_8b0;
      } while (pauStack_8b0 != pauStack_8a0);
    }
    pauStack_8b0 = pauVar30;
    uStack_150 = 0x8000000000000000;
    uStack_f2 = 1;
    apuStack_d10[0] = (undefined8 *)0x141924b1c;
    pauVar30 = (undefined1 (*) [16])pdb_140970d20(&pauStack_8b8);
    return pauVar30;
  }
  lStack_658 = *(longlong *)pauStack_178[7];
  uVar4 = pauStack_178[6][9];
  cVar26 = pauStack_178[6][10];
  uVar5 = pauStack_178[6][0xb];
  lStack_618 = lStack_658;
  if (3 < *_DAT_143ca8e90) {
    uStack_5b8 = (undefined1 (*) [16])0x0;
    pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
    pauStack_5a8 = (undefined1 (*) [16])0x26;
    pauStack_5a0 = (undefined1 (*) [16])0x0;
    uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
    uStack_590 = (undefined1 (*) [16])0x31;
    uStack_588 = (undefined1 (*) [16])0x4;
    uStack_580 = (undefined1 (*) [16])&UNK_143359270;
    pauStack_578 = (undefined1 (*) [16])0x26;
    ppauStack_570 = (undefined1 (**) [16])0xd500000001;
    pbStack_568 = &UNK_143359908;
    ppauStack_560 = (undefined1 (**) [16])0x37;
    uStack_150 = 0x8000000000000000;
    uStack_f2 = 1;
    apuStack_d10[0] = (undefined8 *)0x1419246a8;
    pdb_140f332f0(&uStack_f8,&uStack_5b8);
  }
  lVar55 = *plStack_108;
  uStack_5b8 = *(undefined1 (**) [16])(lVar55 + 0xa0);
  pauStack_5b0 = *(undefined1 (**) [16])(lVar55 + 0xa8);
  ppauStack_190 = (undefined1 (**) [16])0x8000000000000000;
  uStack_150 = 0x8000000000000000;
  uStack_f2 = 1;
  apuStack_d10[0] = (undefined8 *)0x1419246f1;
  pdb_140b7e580(&uStack_5b8);
  if (cVar26 != '\0') {
    if (2 < *_DAT_143ca8e90) {
      uStack_5b8 = (undefined1 (*) [16])0x0;
      pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_5a8 = (undefined1 (*) [16])0x26;
      pauStack_5a0 = (undefined1 (*) [16])0x0;
      uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
      uStack_590 = (undefined1 (*) [16])0x31;
      uStack_588 = (undefined1 (*) [16])0x3;
      uStack_580 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_578 = (undefined1 (*) [16])0x26;
      ppauStack_570 = (undefined1 (**) [16])0xdd00000001;
      pbStack_568 = &UNK_143359923;
      ppauStack_560 = (undefined1 (**) [16])0x57;
      uStack_150 = 0x8000000000000000;
      uStack_f2 = 1;
      apuStack_d10[0] = (undefined8 *)0x1419247c8;
      pdb_140f332f0(&uStack_f8,&uStack_5b8);
    }
    *(undefined4 *)pbStack_218 = (undefined4)uStack_210;
    lVar33 = *(longlong *)(lStack_168 + 0x30);
    uVar70 = *(undefined8 *)(lStack_168 + 0x40);
    if (lVar33 == *(longlong *)(lStack_168 + 0x20)) {
      uStack_150 = 0x8000000000000000;
      uStack_f2 = 1;
      apuStack_d10[0] = (undefined8 *)0x141924815;
      pdb_142d7e8a0(lStack_168 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lStack_168 + 0x28) + lVar33 * 8) = uVar70;
    *(longlong *)(lStack_168 + 0x30) = lVar33 + 1;
    *(longlong *)(lStack_168 + 0x40) = *(longlong *)(lStack_168 + 0x40) + 1;
  }
  pauVar48 = pauStack_178;
  uStack_224 = *(undefined4 *)((longlong)pauStack_128 + 0x1c);
  puStack_5d8 = *(undefined4 **)((longlong)pauStack_128 + 0x10);
  *puStack_5d8 = uStack_224;
  pauVar54 = *(undefined1 (**) [16])(pauStack_178[1] + 8);
  pauVar53 = *(undefined1 (**) [16])pauStack_178[4];
  *(undefined8 *)(pauStack_178[1] + 8) = 0x8000000000000000;
  uVar42 = 2;
  if ((longlong)pauVar54 < 0) {
    uVar42 = (ulonglong)pauVar54 ^ 0x8000000000000000;
  }
  if (uVar42 == 1) {
    pauStack_110 = (undefined1 (*) [16])CONCAT71(pauStack_110._1_7_,uVar5);
    pauStack_1d0 = *(undefined1 (**) [16])pauStack_178[2];
    pbStack_148 = *(byte **)(pauStack_178[2] + 8);
    pauVar61 = *(undefined1 (**) [16])pauStack_178[3];
    apuStack_d10[0] = (undefined8 *)0x141924b5c;
    pdb_141920a00(&uStack_5b8,pbStack_148,pauVar61,*param_11);
    apuStack_d10[0] = (undefined8 *)0x141924b6c;
    pauVar54 = pauVar61;
    lVar33 = pdb_140f3eaf0(pbStack_148,pauVar61);
    if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
      apuStack_d10[0] = (undefined8 *)0x1419276b6;
      pdb_142dc8150(&UNK_143359990);
    }
    pauStack_ce8 = (undefined1 (*) [16])0x9;
    apuStack_d10[0] = (undefined8 *)0x141924b9b;
    pdb_140f3e9e0(&uStack_6b8,lVar33,pauVar54,&UNK_1433599a8);
    uStack_1a0 = uStack_6b8;
    pbStack_170 = pbStack_6b0;
  }
  else {
    if (uVar42 != 2) {
      uStack_150 = 0x8000000000000000;
      uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
      apuStack_d10[0] = (undefined8 *)0x1419276a4;
      pdb_142dc83b0(&UNK_14335994e,0x28,&UNK_143359978);
    }
    pauVar48 = *(undefined1 (**) [16])pauStack_178[2];
    pauVar61 = *(undefined1 (**) [16])(pauStack_178[2] + 8);
    pauStack_5a0 = *(undefined1 (**) [16])pauStack_178[3];
    uStack_598 = *(undefined1 (**) [16])(pauStack_178[3] + 8);
    uVar42 = *(ulonglong *)(pauStack_178[4] + 8);
    pbStack_170 = *(byte **)pauStack_178[5];
    pauStack_8b8 = *(undefined1 (**) [16])(pauStack_178[5] + 8);
    pauStack_8b0 = *(undefined1 (**) [16])pauStack_178[6];
    uStack_5b8 = pauVar54;
    pauStack_5b0 = pauVar48;
    pauStack_5a8 = pauVar61;
    uStack_590 = pauVar53;
    uStack_1a0 = uVar42;
    if ((longlong)pauVar61 < 0) {
      uVar70 = 0;
LAB_1419248f0:
      apuStack_d10[0] = (undefined8 *)0x1419248fb;
      pdb_142dc7e2a(uVar70,pauVar61);
      goto LAB_14192782b;
    }
    pauStack_110 = (undefined1 (*) [16])CONCAT71(pauStack_110._1_7_,uVar5);
    if (pauVar61 == (undefined1 (*) [16])0x0) {
      pbStack_148 = (byte *)0x1;
    }
    else {
      apuStack_d10[0] = (undefined8 *)0x141924c84;
      pdb_14007ee60();
      uVar70 = 1;
      apuStack_d10[0] = (undefined8 *)0x141924c97;
      pbVar31 = pub_1406abab0((ulonglong)pauVar61,1);
      if (pbVar31 == (byte *)0x0) goto LAB_1419248f0;
      apuStack_d10[0] = (undefined8 *)0x141924cb5;
      pbStack_148 = pbVar31;
      pub_142e32760(pbVar31,pauVar48,pauVar61);
    }
    pauStack_6a8 = pauStack_8b8;
    pauStack_6a0 = pauStack_8b0;
    pauVar48 = pauStack_178;
    uStack_6b8 = uVar42;
    pauStack_1d0 = pauVar61;
  }
  pauVar54 = (undefined1 (*) [16])(lVar55 + 0xa0);
  pauStack_1a8 = pauStack_6a8;
  uStack_688._0_4_ = SUB84(pauStack_5a8,0);
  uStack_688._4_4_ = (undefined4)((ulonglong)pauStack_5a8 >> 0x20);
  uStack_680._0_4_ = SUB84(pauStack_5a0,0);
  uStack_680._4_4_ = (undefined4)((ulonglong)pauStack_5a0 >> 0x20);
  uStack_678._0_4_ = SUB84(uStack_598,0);
  uStack_678._4_4_ = (undefined4)((ulonglong)uStack_598 >> 0x20);
  uStack_670._0_4_ = SUB84(uStack_590,0);
  uStack_670._4_4_ = (uint)((ulonglong)uStack_590 >> 0x20);
  uStack_8c8 = (undefined4)uStack_678;
  uStack_8c4 = uStack_678._4_4_;
  uStack_8c0 = (undefined4)uStack_670;
  uStack_8bc = uStack_670._4_4_;
  uStack_8d8 = (undefined4)uStack_688;
  uStack_8d4 = uStack_688._4_4_;
  uStack_8d0 = (undefined4)uStack_680;
  uStack_8cc = uStack_680._4_4_;
  pauStack_8e8 = uStack_5b8;
  pauStack_8e0 = pauStack_5b0;
  uStack_158 = 0x8000000000000000;
  uStack_f3 = 1;
  uStack_f4 = 1;
  apuStack_d10[0] = (undefined8 *)0x141924d93;
  pbStack_6b0 = pbStack_170;
  pauStack_698 = uStack_5b8;
  pauStack_690 = pauStack_5b0;
  uStack_688 = pauStack_5a8;
  uStack_680 = pauStack_5a0;
  uStack_678 = uStack_598;
  uStack_670 = uStack_590;
  pdb_140a937d0(&pauStack_1c8,pauVar54);
  pauStack_ce8 = (undefined1 (*) [16])0xc;
  pauStack_138 = pauStack_1c0;
  apuStack_d10[0] = (undefined8 *)0x141924dc5;
  pdb_140f3e9e0(&pauStack_1f0,pauStack_1c0,pauStack_1b8,&UNK_1433599b1);
  pauVar53 = pauStack_1e0;
  pauStack_128 = pauStack_1e8;
  apuStack_d10[0] = (undefined8 *)0x141924dee;
  pdb_140f3ddd0(&uStack_cd8,pbStack_148,pauVar61);
  apuStack_d10[0] = (undefined8 *)0x141924e05;
  pdb_140f3ddd0(&pauStack_ae8,pauStack_128,pauVar53);
  if (uStack_cd0 == pauStack_ae0) {
    if ((((char)uStack_ca0 != (char)uStack_ab0) || (uStack_ca0._1_1_ != '\x02')) ||
       (uStack_ab0._1_1_ != '\x02')) goto LAB_141924e5b;
    if ((byte)uStack_ad8 < 3 != (byte)uStack_cc8 < 3) goto LAB_141924e5b;
    apuStack_d10[0] = (undefined8 *)0x141924e53;
    iVar27 = pub_142e32750(uStack_cd8,pauStack_ae8);
    if (iVar27 != 0) goto LAB_141924e5b;
    bVar24 = 0;
  }
  else {
LAB_141924e5b:
    pauStack_8a0._4_4_ = uStack_cbc;
    pauStack_8a0._0_4_ = uStack_cc0;
    pauStack_880 = uStack_ca0;
    pauStack_898 = pauStack_cb8;
    stack0xfffffffffffff778 = pauStack_ca8;
    auStack_890._0_8_ = pauStack_cb0;
    auStack_8a8 = (undefined1  [8])uStack_cc8;
    pauStack_8b8 = uStack_cd8;
    pauStack_8b0 = uStack_cd0;
    uStack_588 = (undefined1 (*) [16])CONCAT44(uStack_ab4,uStack_ab8);
    uStack_580 = (undefined1 (*) [16])CONCAT44(uStack_aac,uStack_ab0);
    uStack_598 = (undefined1 (*) [16])CONCAT44(uStack_ac4,uStack_ac8);
    uStack_590 = (undefined1 (*) [16])CONCAT44(uStack_abc,uStack_ac0);
    pauStack_5a8 = uStack_ad8;
    pauStack_5a0 = uStack_ad0;
    uStack_5b8 = pauStack_ae8;
    pauStack_5b0 = pauStack_ae0;
    apuStack_d10[0] = (undefined8 *)0x141924ed4;
    bVar24 = pdb_141b03d50(&pauStack_8b8,&uStack_5b8);
    bVar24 = bVar24 ^ 1;
  }
  if (pauStack_1f0 != (undefined1 (*) [16])0x0) {
    apuStack_d10[0] = (undefined8 *)0x141924ef9;
    pub_1406abac0((byte *)pauStack_128,(ulonglong)pauStack_1f0,1);
  }
  if (pauStack_1c8 != (undefined1 (*) [16])0x0) {
    apuStack_d10[0] = (undefined8 *)0x141924f17;
    pub_1406abac0((byte *)pauStack_138,(ulonglong)pauStack_1c8,1);
  }
  pauVar53 = uStack_678;
  pauVar32 = pauStack_8e0;
  if (SBORROW8(0,(longlong)pauStack_8e8)) {
LAB_141924f38:
    uStack_5b8 = *(undefined1 (**) [16])*pauVar54;
    pauStack_5b0 = *(undefined1 (**) [16])(lVar55 + 0xa8);
    apuStack_d10[0] = (undefined8 *)0x141924f57;
    pauStack_1f0 = pauVar32;
    pdb_140b7f050(&uStack_5b8);
    apuStack_d10[0] = (undefined8 *)0x141924f64;
    pdb_140eacc10(&uStack_5b8);
    *(undefined4 *)plStack_108[2] = *(undefined4 *)((longlong)plStack_108 + 0x1c);
    *(undefined1 (**) [16])*pauVar54 = uStack_5b8;
    *(undefined1 (**) [16])(lVar55 + 0xa8) = pauStack_5b0;
    apuStack_d10[0] = (undefined8 *)0x141924fa0;
    pdb_141b1e240(&pauStack_8b8,pbStack_148,pauVar61,3);
    pauStack_5b0 = (undefined1 (*) [16])pdb_140f58250;
    pauStack_5a0 = (undefined1 (*) [16])pdb_140f36c30;
    apuStack_d10[0] = (undefined8 *)0x141924fe5;
    uStack_5b8 = (undefined1 (*) [16])&pauStack_8b8;
    pauStack_5a8 = (undefined1 (*) [16])&pauStack_1f0;
    pdb_140f60760(&pauStack_ae8,&UNK_143359a98,&uStack_5b8);
    if (pauStack_8b8 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x141925004;
      pub_1406abac0((byte *)pauStack_8b0,(ulonglong)pauStack_8b8,1);
    }
    pauStack_1c8 = pauStack_ae8;
    pauStack_1c0 = pauStack_ae0;
    pauStack_1b8 = uStack_ad8;
    if (*_DAT_143ca8e90 != 0) {
      pauStack_8b8 = (undefined1 (*) [16])&pauStack_1c8;
      pauStack_8b0 = (undefined1 (*) [16])pdb_140001020;
      uStack_5b8 = (undefined1 (*) [16])0x0;
      pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_5a8 = (undefined1 (*) [16])0x26;
      pauStack_5a0 = (undefined1 (*) [16])0x0;
      uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
      uStack_590 = (undefined1 (*) [16])0x31;
      uStack_588 = (undefined1 (*) [16])0x1;
      uStack_580 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_578 = (undefined1 (*) [16])0x26;
      ppauStack_570 = (undefined1 (**) [16])0x14300000001;
      pbStack_568 = &UNK_143359ac0;
      apuStack_d10[0] = (undefined8 *)0x1419250ef;
      ppauStack_560 = &pauStack_8b8;
      pdb_140f332f0(&uStack_f8,&uStack_5b8);
    }
    apuStack_d10[0] = (undefined8 *)0x141925103;
    pdb_140a43130(pauStack_1c0,pauStack_1b8);
    piVar58 = piStack_130;
    pauVar48[6][8] = 2;
    *puStack_5d8 = uStack_224;
    uStack_cc8 = *(undefined1 (**) [16])pauVar48[1];
    uStack_cd8 = *(undefined1 (**) [16])*pauVar48;
    uStack_cd0 = *(undefined1 (**) [16])(*pauVar48 + 8);
    *(undefined8 *)*pauVar48 = 0;
    *(undefined8 *)(*pauVar48 + 8) = 8;
    *(undefined8 *)pauVar48[1] = 0;
    *(undefined4 *)*pauStack_200 = ppauStack_248._0_4_;
    lVar55 = *(longlong *)(piStack_130 + 0xc);
    uVar70 = *(undefined8 *)(piStack_130 + 0x10);
    if (lVar55 == *(longlong *)(piStack_130 + 8)) {
      uStack_f9 = 1;
      apuStack_d10[0] = (undefined8 *)0x141925173;
      pdb_142d7e8a0(piStack_130 + 8);
    }
    *(undefined8 *)(*(longlong *)(piVar58 + 10) + lVar55 * 8) = uVar70;
    *(longlong *)(piVar58 + 0xc) = lVar55 + 1;
    *(longlong *)(piVar58 + 0x10) = *(longlong *)(piVar58 + 0x10) + 1;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *(undefined1 *)*param_7 = 2;
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    *(longlong *)(*param_6 + 1000) = *(longlong *)(*param_6 + 1000) + 1;
    pauStack_898 = (undefined1 (*) [16])0x1;
    _auStack_890 = (undefined1  [16])0x0;
    pauStack_880 = (undefined1 (*) [16])0x8;
    pauStack_878 = (undefined1 (*) [16])0x0;
    ppauStack_870 = (undefined1 (**) [16])0x8000000000000000;
    uStack_830 = 0x8000000000000000;
    uStack_808 = 0;
    uStack_800 = 0x8000000000000000;
    pauStack_8b8 = (undefined1 (*) [16])0x0;
    pauStack_8b0 = (undefined1 (*) [16])0x8;
    _auStack_8a8 = (undefined1  [16])0x0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    uStack_ad0 = uStack_cd0 + (longlong)uStack_cc8 * 2;
    pauStack_ae8 = uStack_cd0;
    pauStack_ae0 = uStack_cd0;
    uStack_ad8 = uStack_cd8;
    while (pauVar30 = pauStack_ae0, pauStack_ae0 != uStack_ad0) {
      pauVar30 = pauStack_ae0 + 2;
      ppauVar57 = *(undefined1 (***) [16])*pauStack_ae0;
      if (ppauVar57 == (undefined1 (**) [16])0x8000000000000003) break;
      uVar42 = (ulonglong)ppauVar57 ^ 0x8000000000000000;
      if (-1 < (longlong)ppauVar57) {
        uVar42 = 1;
      }
      if (uVar42 == 0) {
        pauStack_ae0 = pauVar30;
        if (1 < *_DAT_143ca8e90) {
          uStack_5b8 = (undefined1 (*) [16])0x0;
          pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
          pauStack_5a8 = (undefined1 (*) [16])0x26;
          pauStack_5a0 = (undefined1 (*) [16])0x0;
          uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
          uStack_590 = (undefined1 (*) [16])0x31;
          uStack_588 = (undefined1 (*) [16])0x2;
          uStack_580 = (undefined1 (*) [16])&UNK_143359270;
          pauStack_578 = (undefined1 (*) [16])0x26;
          ppauStack_570 = (undefined1 (**) [16])0x15e00000001;
          pbStack_568 = &UNK_143359ae0;
          ppauStack_560 = (undefined1 (**) [16])0x57;
          apuStack_d10[0] = (undefined8 *)0x1419253ff;
          pdb_140f332f0(&uStack_f8,&uStack_5b8);
        }
      }
      else {
        pauStack_5b0 = *(undefined1 (**) [16])(*pauStack_ae0 + 8);
        auVar22 = auStack_8a8;
        if (uVar42 == 1) {
          pauStack_5a8 = *(undefined1 (**) [16])pauStack_ae0[1];
          pauStack_5a0 = *(undefined1 (**) [16])(pauStack_ae0[1] + 8);
          pauStack_ae0 = pauVar30;
          uStack_5b8 = (undefined1 (*) [16])ppauVar57;
          if (auStack_8a8 == (undefined1  [8])pauStack_8b8) {
            apuStack_d10[0] = (undefined8 *)0x141925347;
            pdb_142d7e6e0(&pauStack_8b8);
          }
        }
        else {
          uStack_5b8 = (undefined1 (*) [16])0x8000000000000000;
          pauStack_ae0 = pauVar30;
          if (auStack_8a8 == (undefined1  [8])pauStack_8b8) {
            apuStack_d10[0] = (undefined8 *)0x14192543a;
            pdb_142d7e6e0(&pauStack_8b8);
          }
        }
        *(undefined1 (**) [16])pauStack_8b0[(longlong)auVar22 * 2 + 1] = pauStack_5a8;
        *(undefined1 (**) [16])(pauStack_8b0[(longlong)auVar22 * 2 + 1] + 8) = pauStack_5a0;
        *(undefined1 (**) [16])pauStack_8b0[(longlong)auVar22 * 2] = uStack_5b8;
        *(undefined1 (**) [16])(pauStack_8b0[(longlong)auVar22 * 2] + 8) = pauStack_5b0;
        auStack_8a8 = (undefined1  [8])((undefined *)auVar22 + 1);
      }
    }
    pauStack_ae0 = pauVar30;
    uStack_fa = 1;
    apuStack_d10[0] = (undefined8 *)0x141925453;
    pdb_140970d20(&pauStack_ae8);
    apuStack_d10[0] = (undefined8 *)0x141925470;
    pub_142e32760(&uStack_5b8,&pauStack_8b8,0xe8);
    uStack_fa = 0;
    apuStack_d10[0] = (undefined8 *)0x14192548d;
    pdb_141618e00(param_8,&uStack_5b8,&UNK_143359ac8);
    if (pauStack_1c8 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x1419254ac;
      pub_1406abac0((byte *)pauStack_1c0,(ulonglong)pauStack_1c8,1);
    }
    uStack_158 = 0x8000000000000000;
    uStack_f3 = 1;
    uStack_f4 = 0;
    apuStack_d10[0] = (undefined8 *)0x1419254cd;
    pauVar30 = (undefined1 (*) [16])pdb_140f36c40(&pauStack_1f0);
    pauVar54 = pauStack_1d0;
    if (uStack_1a0 != 0) {
      apuStack_d10[0] = (undefined8 *)0x1419254ec;
      pub_1406abac0(pbStack_170,uStack_1a0,1);
      pauVar30 = extraout_RAX;
      pauVar54 = pauStack_1d0;
    }
joined_r0x000141926e69:
    if (pauVar54 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x141926e80;
      pub_1406abac0(pbStack_148,(ulonglong)pauVar54,1);
      pauVar30 = extraout_RAX_01;
    }
    return pauVar30;
  }
  pauStack_138 = (undefined1 (*) [16])CONCAT71(pauStack_138._1_7_,uVar4);
  pauStack_ae8 = pauStack_8e8;
  pauStack_238 = pauStack_8e0;
  pauStack_ae0 = pauStack_8e0;
  uStack_ac8 = (undefined4)uStack_678;
  uStack_ac4 = uStack_678._4_4_;
  uStack_ac0 = (undefined4)uStack_670;
  uStack_abc = uStack_670._4_4_;
  uVar21 = uStack_abc;
  uStack_ad8 = uStack_688;
  uStack_ad0 = uStack_680;
  pauStack_180 = uStack_678;
  lVar33 = *(longlong *)uStack_678[2];
  lVar64 = *(longlong *)(uStack_678[2] + 8) << 4;
  do {
    lVar52 = lVar64;
    if (lVar52 == 0) break;
    piVar58 = (int *)(lVar33 + 8);
    lVar33 = lVar33 + 0x10;
    lVar64 = lVar52 + -0x10;
  } while (*piVar58 < *(int *)uStack_678[1]);
  puVar43 = (undefined *)0x0;
  uStack_abc._0_1_ = (char)((ulonglong)uStack_670 >> 0x20);
  if ((char)uStack_abc != '\0') {
    puVar43 = &UNK_143359b0b;
  }
  puVar68 = &UNK_143359b22;
  if (lVar52 == 0) {
    puVar68 = puVar43;
  }
  pauStack_1f8 = pauStack_8e8;
  uStack_abc = uVar21;
  if (bVar24 == 0 && puVar68 != (undefined *)0x0) {
    iStack_2b1._1_3_ = (lVar52 == 0) + 0x16;
    uStack_2b8 = SUB87(puVar68,0);
    iStack_2b1 = (uint)iStack_2b1._1_3_ << 8;
    uStack_2ad = 0;
    apuStack_d10[0] = (undefined8 *)0x1419255db;
    pdb_140a939a0(&uStack_610,pauVar54);
    pauStack_128 = (undefined1 (*) [16])CONCAT44(uStack_604,uStack_608);
    apuStack_d10[0] = (undefined8 *)0x141925600;
    pdb_140dee3a0((undefined1 (*) [16])&pauStack_8b8);
    uStack_5b8 = (undefined1 (*) [16])&uStack_2b8;
    pauStack_5b0 = (undefined1 (*) [16])pdb_1402ed400;
    pauStack_5a0 = (undefined1 (*) [16])pdb_140001020;
    apuStack_d10[0] = (undefined8 *)0x141925649;
    pauStack_5a8 = (undefined1 (*) [16])&pauStack_8b8;
    pdb_140f60760(&uStack_cd8,&UNK_143359b38,&uStack_5b8);
    if (pauStack_8b8 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x141925668;
      pub_1406abac0((byte *)pauStack_8b0,(ulonglong)pauStack_8b8,1);
    }
    pauStack_258 = uStack_cd8;
    pauStack_ce8 = uStack_cc8;
    pauStack_5d0 = uStack_cd0;
    apuStack_d10[0] = (undefined8 *)0x14192569d;
    pdb_140f3e9e0(&pauStack_1f0,pauStack_128,uStack_600);
    if (pauStack_258 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x1419256bc;
      pub_1406abac0((byte *)pauStack_5d0,(ulonglong)pauStack_258,1);
    }
    if (2 < *_DAT_143ca8e90) {
      apuStack_d10[0] = (undefined8 *)0x1419256ef;
      pdb_141b1e240(&pauStack_1c8,pbStack_148,pauVar61,3);
      apuStack_d10[0] = (undefined8 *)0x141925710;
      pdb_141b1e240(&uStack_cd8,pauStack_1e8,pauStack_1e0,3);
      pauStack_8b8 = (undefined1 (*) [16])&pauStack_1c8;
      pauStack_8b0 = (undefined1 (*) [16])pdb_140f58250;
      pauStack_8a0 = (undefined1 (*) [16])pdb_140f58250;
      auStack_8a8 = (undefined1  [8])&uStack_cd8;
      uStack_5b8 = (undefined1 (*) [16])0x0;
      pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_5a8 = (undefined1 (*) [16])0x26;
      pauStack_5a0 = (undefined1 (*) [16])0x0;
      uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
      uStack_590 = (undefined1 (*) [16])0x31;
      uStack_588 = (undefined1 (*) [16])0x3;
      uStack_580 = (undefined1 (*) [16])&UNK_143359270;
      pauStack_578 = (undefined1 (*) [16])0x26;
      ppauStack_570 = (undefined1 (**) [16])0x12300000001;
      pbStack_568 = &UNK_143359b41;
      ppauStack_560 = &pauStack_8b8;
      apuStack_d10[0] = (undefined8 *)0x1419257e0;
      pdb_140f332f0(&uStack_f8,&uStack_5b8);
      if (uStack_cd8 != (undefined1 (*) [16])0x0) {
        apuStack_d10[0] = (undefined8 *)0x1419257fc;
        pub_1406abac0((byte *)uStack_cd0,(ulonglong)uStack_cd8,1);
      }
      if (pauStack_1c8 != (undefined1 (*) [16])0x0) {
        apuStack_d10[0] = (undefined8 *)0x14192581a;
        pub_1406abac0((byte *)pauStack_1c0,(ulonglong)pauStack_1c8,1);
      }
    }
    uStack_5b8 = (undefined1 (*) [16])CONCAT71(uStack_5b8._1_7_,1);
    apuStack_d10[0] = (undefined8 *)0x141925837;
    pauVar32 = (undefined1 (*) [16])pdb_140f46c40(&uStack_5b8,pauStack_128,uStack_600);
    if (pauVar32 == (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x141925864;
      pauVar32 = pauVar61;
      lVar33 = pdb_140f4f180(pbStack_148,pauVar61,pauStack_1e8,pauStack_1e0);
    }
    else {
      lVar33 = 1;
    }
    if (lVar33 == 1) {
      uStack_fb = 1;
      apuStack_d10[0] = (undefined8 *)0x141925889;
      uStack_cd8 = pauVar32;
      pdb_140f3f5b0(&uStack_5b8);
      pauStack_898 = uStack_598;
      auStack_890._0_8_ = uStack_590;
      pauStack_8a0._0_4_ = pauStack_5a0._0_4_;
      auStack_8a8 = (undefined1  [8])pauStack_5a8;
      pauStack_8a0._4_4_ = pauStack_5a0._4_4_;
      pauStack_8b8 = uStack_5b8;
      pauStack_8b0 = pauStack_5b0;
      uStack_5b8 = (undefined1 (*) [16])&UNK_143359b55;
      pauStack_5b0 = (undefined1 (*) [16])0x2c;
      uStack_fb = 0;
      apuStack_d10[0] = (undefined8 *)0x1419258f0;
      pauStack_5a8 = pauVar32;
      pauVar32 = (undefined1 (*) [16])pdb_142dea990(&uStack_5b8,&pauStack_8b8);
      if (pauStack_1f0 != (undefined1 (*) [16])0x0) {
        apuStack_d10[0] = (undefined8 *)0x141925912;
        pub_1406abac0((byte *)pauStack_1e8,(ulonglong)pauStack_1f0,1);
      }
      if (uStack_610 != 0) {
        apuStack_d10[0] = (undefined8 *)0x141925930;
        pub_1406abac0((byte *)pauStack_128,uStack_610,1);
      }
      apuStack_d10[0] = (undefined8 *)0x141925939;
      pdb_140994f20(pauVar53);
      apuStack_d10[0] = (undefined8 *)0x141925958;
      pub_1406abac0((byte *)pauStack_180,0x140,8);
      if (pauStack_1f8 != (undefined1 (*) [16])0x0) {
        apuStack_d10[0] = (undefined8 *)0x141925976;
        pub_1406abac0((byte *)pauStack_238,(ulonglong)pauStack_1f8,1);
      }
      goto LAB_141924f38;
    }
    if (pauStack_1f0 != (undefined1 (*) [16])0x0) {
      apuStack_d10[0] = (undefined8 *)0x14192599c;
      pub_1406abac0((byte *)pauStack_1e8,(ulonglong)pauStack_1f0,1);
    }
    if (uStack_610 != 0) {
      apuStack_d10[0] = (undefined8 *)0x1419259ba;
      pub_1406abac0((byte *)pauStack_128,uStack_610,1);
    }
  }
  uVar21 = uStack_abc;
  uVar40 = uStack_ac0;
  if ((char)pauStack_110 != '\0') {
    *(undefined4 *)pauVar53[0x11] = 0x1e;
  }
  *puStack_648 = uStack_270;
  *puStack_5f0 = uStack_22c;
  *(undefined4 *)auStack_298._0_8_ = pauStack_288._0_4_;
  *(undefined4 *)*pauStack_240 = uStack_274;
  *puStack_5e8 = uStack_228;
  *puStack_640 = uStack_26c;
  *puStack_638 = uStack_268;
  iVar27 = *(int *)pauVar53[0x11];
  *(bool *)_DAT_143ca4b38 = 0x19 < iVar27;
  DAT_143ca4321 = 0x1a < iVar27;
  plStack_140 = (longlong *)0x8000000000000000;
  uStack_f1 = 1;
  apuStack_d10[0] = (undefined8 *)0x141925a8e;
  pauStack_200 = pauVar54;
  pdb_140a34510(lStack_250,pauVar53[0x11] + 4,1);
  cVar23 = (char)pauStack_138;
  plStack_140 = (longlong *)0x8000000000000000;
  uStack_f1 = 1;
  apuStack_d10[0] = (undefined8 *)0x141925ab9;
  pdb_140a34f80(lStack_250);
  pauVar53 = pauStack_188;
  uVar70 = *(undefined8 *)(pauStack_180[0xe] + 4);
  uVar8 = *(undefined8 *)(pauStack_180[0xe] + 0xc);
  uVar66 = *(undefined8 *)(pauStack_180[0xf] + 4);
  uVar15 = *(undefined8 *)(pauStack_180[0xf] + 0xc);
  uVar16 = *(undefined8 *)(pauStack_180[0x10] + 8);
  *(undefined8 *)((longlong)puStack_208 + 0x1c) = *(undefined8 *)pauStack_180[0x10];
  *(undefined8 *)((longlong)puStack_208 + 0x24) = uVar16;
  puStack_208[2] = uVar66;
  puStack_208[3] = uVar15;
  *puStack_208 = uVar70;
  puStack_208[1] = uVar8;
  cVar26 = pauStack_180[7][4];
  if (cVar26 != '\x02') {
    uVar74 = *(undefined4 *)pauStack_180[7];
    *puStack_5c8 = *(undefined8 *)(pauStack_180[6] + 8);
    *(undefined4 *)(puStack_5c8 + 1) = uVar74;
    *(char *)((longlong)puStack_5c8 + 0x14) = cVar26;
  }
  cVar26 = pauStack_180[6][4];
  if (cVar26 != '\x02') {
    *(undefined4 *)(puStack_5c8 + 2) = *(undefined4 *)pauStack_180[6];
    *(char *)((longlong)puStack_5c8 + 0x15) = cVar26;
  }
  plStack_108 = *(longlong **)(pauStack_180[4] + 8);
  piStack_130 = *(int **)pauStack_180[5];
  ppauStack_248 = *(undefined1 (***) [16])(pauStack_180[5] + 8);
  uVar70 = *(undefined8 *)pauStack_180[8];
  uVar8 = *(undefined8 *)(pauStack_180[8] + 8);
  uVar74 = *(undefined4 *)pauStack_180[9];
  uVar75 = *(undefined4 *)(pauStack_180[9] + 4);
  uVar76 = *(undefined4 *)(pauStack_180[9] + 8);
  uVar77 = *(undefined4 *)(pauStack_180[9] + 0xc);
  uVar78 = *(undefined4 *)pauStack_180[10];
  uVar79 = *(undefined4 *)(pauStack_180[10] + 4);
  uVar80 = *(undefined4 *)(pauStack_180[10] + 8);
  uVar81 = *(undefined4 *)(pauStack_180[10] + 0xc);
  uVar11 = *(undefined4 *)pauStack_180[0xb];
  uVar12 = *(undefined4 *)(pauStack_180[0xb] + 4);
  uVar13 = *(undefined4 *)(pauStack_180[0xb] + 8);
  uVar14 = *(undefined4 *)(pauStack_180[0xb] + 0xc);
  uVar66 = *(undefined8 *)pauStack_180[0xc];
  uVar15 = *(undefined8 *)(pauStack_180[0xc] + 8);
  uVar16 = *(undefined8 *)pauStack_180[0xd];
  uVar17 = *(undefined8 *)(pauStack_180[0xd] + 8);
  *(undefined4 *)(puStack_198 + 0xc) = *(undefined4 *)pauStack_180[0xe];
  puStack_198[10] = uVar16;
  puStack_198[0xb] = uVar17;
  puStack_198[8] = uVar66;
  puStack_198[9] = uVar15;
  *(undefined4 *)(puStack_198 + 6) = uVar11;
  *(undefined4 *)((longlong)puStack_198 + 0x34) = uVar12;
  *(undefined4 *)(puStack_198 + 7) = uVar13;
  *(undefined4 *)((longlong)puStack_198 + 0x3c) = uVar14;
  *(undefined4 *)(puStack_198 + 4) = uVar78;
  *(undefined4 *)((longlong)puStack_198 + 0x24) = uVar79;
  *(undefined4 *)(puStack_198 + 5) = uVar80;
  *(undefined4 *)((longlong)puStack_198 + 0x2c) = uVar81;
  *(undefined4 *)(puStack_198 + 2) = uVar74;
  *(undefined4 *)((longlong)puStack_198 + 0x14) = uVar75;
  *(undefined4 *)(puStack_198 + 3) = uVar76;
  *(undefined4 *)((longlong)puStack_198 + 0x1c) = uVar77;
  *puStack_198 = uVar70;
  puStack_198[1] = uVar8;
  pauStack_128 = *(undefined1 (**) [16])(pauStack_180[0x13] + 8);
  uStack_120 = 0;
  uStack_cd8 = *(undefined1 (**) [16])*pauStack_180;
  uStack_cd0 = *(undefined1 (**) [16])(*pauStack_180 + 8);
  uStack_ad8 = *(undefined1 (**) [16])pauStack_180[1];
  pauStack_5a8 = *(undefined1 (**) [16])(pauStack_180[1] + 8);
  uStack_5b8 = *(undefined1 (**) [16])pauStack_180[2];
  pauStack_288 = *(undefined1 (**) [16])(pauStack_180[7] + 8);
  pauVar61 = (undefined1 (*) [16])(ulonglong)*(uint *)pauStack_180[0x11];
  pauStack_110 = (undefined1 (*) [16])CONCAT44(pauStack_110._4_4_,*(uint *)pauStack_180[0x11]);
  pauStack_ae8 = *(undefined1 (**) [16])*pauStack_180;
  pauStack_ae0 = *(undefined1 (**) [16])(*pauStack_180 + 8);
  auStack_298._0_8_ = uStack_ad8;
  pauStack_5a0 = uStack_5b8 + *(longlong *)(pauStack_180[2] + 8);
  pauVar48 = (undefined1 (*) [16])&uStack_5b8;
  apuStack_d10[0] = (undefined8 *)0x141925c43;
  pauStack_5b0 = uStack_5b8;
  pdb_140c7e590(&pauStack_8b8);
  uStack_5b8 = pauStack_8b8;
  pauStack_5b0 = pauStack_8b0;
  pauStack_5a8 = (undefined1 (*) [16])auStack_8a8;
  pauStack_8b8 = uStack_cd8;
  pauStack_8b0 = uStack_cd0;
  apuStack_d10[0] = (undefined8 *)0x141925c73;
  pdb_14098f1a0(pauVar53);
  pauVar32 = pauStack_188;
  *(undefined1 (**) [16])*pauStack_188 = pauStack_8b8;
  *(undefined1 (**) [16])(*pauStack_188 + 8) = pauStack_8b0;
  *(undefined8 *)pauStack_188[1] = auStack_298._0_8_;
  *(undefined1 (**) [16])(pauStack_188[1] + 8) = uStack_5b8;
  *(undefined1 (**) [16])pauStack_188[2] = pauStack_5b0;
  *(undefined1 (**) [16])(pauStack_188[2] + 8) = pauStack_5a8;
  *(undefined8 *)pauStack_188[3] = 0x8000000000000000;
  *(undefined8 *)(pauStack_188[5] + 8) = auStack_298._0_8_;
  *(undefined1 (**) [16])pauStack_188[6] = pauStack_288;
  *(undefined1 (**) [16])(pauStack_188[6] + 8) = pauStack_128;
  *(undefined4 *)pauStack_188[7] = pauStack_110._0_4_;
  if ((uVar21 & 0x1000000) != 0) {
    *(undefined4 *)pbStack_218 = (undefined4)uStack_210;
    lVar55 = *(longlong *)(lStack_168 + 0x30);
    pauVar54 = *(undefined1 (**) [16])(lStack_168 + 0x40);
    if (lVar55 == *(longlong *)(lStack_168 + 0x20)) {
      plStack_140 = plStack_108;
      piStack_160 = piStack_130;
      uStack_f1 = 0;
      apuStack_d10[0] = (undefined8 *)0x141925d3b;
      pdb_142d7e8a0(lStack_168 + 0x20);
    }
    *(undefined1 (**) [16])(*(longlong *)(lStack_168 + 0x28) + lVar55 * 8) = pauVar54;
    pauVar53 = (undefined1 (*) [16])(lVar55 + 1);
    *(undefined1 (**) [16])(lStack_168 + 0x30) = pauVar53;
    *(longlong *)(lStack_168 + 0x40) = *(longlong *)(lStack_168 + 0x40) + 1;
  }
  if (cVar23 == '\0') {
    plStack_140 = plStack_108;
    piStack_160 = piStack_130;
    uStack_f1 = 0;
    pauStack_ce8 = param_9;
    apuStack_d10[0] = (undefined8 *)0x141925daa;
    pauVar48 = pauVar32;
    pauVar61 = pauStack_1a8;
    pdb_141bf6820(&uStack_5b8,pauVar32,pbStack_170);
    pauVar53 = pauStack_5a8;
    pauVar34 = uStack_5b8;
    if (pauStack_5a8 == (undefined1 (*) [16])0x3) goto LAB_141925de5;
    iVar27 = (int)pauStack_5b0;
    pauVar48 = (undefined1 (*) [16])&pauStack_5a0;
    apuStack_d10[0] = (undefined8 *)0x141925ddc;
    pub_142e32760(&uStack_cd8,pauVar48,0x1f0);
    if ((int)pauVar53 == 2) goto LAB_141925de5;
    pauStack_1c8 = pauVar34;
    pauStack_1c0 = (undefined1 (*) [16])CONCAT44(pauStack_1c0._4_4_,iVar27);
    pauStack_ae8 = pauVar53;
    apuStack_d10[0] = (undefined8 *)0x141926f24;
    pub_142e32760(&pauStack_ae0,&uStack_cd8,0x1f0);
    if ((uVar21 & 0x10000) != 0) {
      if (2 < *_DAT_143ca8e90) {
        uStack_5b8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5b0 = (undefined1 (*) [16])0x26;
        pauStack_5a8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5a0 = (undefined1 (*) [16])0x26;
        uStack_598 = (undefined1 (*) [16])&UNK_143359760;
        uStack_f7 = 1;
        pauVar61 = (undefined1 (*) [16])&uStack_5b8;
        apuStack_d10[0] = (undefined8 *)0x141926f9d;
        pdb_1400c9be0(&UNK_143359722,0x77,3);
      }
      if (lStack_a80 != 0) {
        pauVar61 = (undefined1 (*) [16])0x2492492492492493;
        lVar55 = lStack_a88;
        do {
          if (*(longlong *)(lVar55 + 0x20) != 0) {
            lVar33 = *(longlong *)(lVar55 + 0x18);
            lVar52 = *(longlong *)(lVar55 + 0x20) * 0x70;
            uVar42 = lVar52 - 0x70;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar42 >> 4;
            uVar41 = SUB164(auVar3 * ZEXT816(0x2492492492492493),8);
            lVar64 = lVar33;
            if ((~uVar41 & 3) != 0) {
              lVar56 = -(ulonglong)(uVar41 + 1 & 3);
              do {
                if (*(int *)(lVar64 + 8) == 2) {
                  *(undefined4 *)(lVar64 + 0x48) = 999;
                }
                lVar64 = lVar64 + 0x70;
                lVar56 = lVar56 + 1;
              } while (lVar56 != 0);
            }
            if (0x14f < uVar42) {
              do {
                if (*(int *)(lVar64 + 8) == 2) {
                  *(undefined4 *)(lVar64 + 0x48) = 999;
                  if (*(int *)(lVar64 + 0x78) == 2) goto LAB_141927066;
LAB_14192703e:
                  if (*(int *)(lVar64 + 0xe8) != 2) goto LAB_141927079;
LAB_141927047:
                  *(undefined4 *)(lVar64 + 0x128) = 999;
                  iVar69 = *(int *)(lVar64 + 0x158);
                }
                else {
                  if (*(int *)(lVar64 + 0x78) != 2) goto LAB_14192703e;
LAB_141927066:
                  *(undefined4 *)(lVar64 + 0xb8) = 999;
                  if (*(int *)(lVar64 + 0xe8) == 2) goto LAB_141927047;
LAB_141927079:
                  iVar69 = *(int *)(lVar64 + 0x158);
                }
                if (iVar69 == 2) {
                  *(undefined4 *)(lVar64 + 0x198) = 999;
                }
                lVar64 = lVar64 + 0x1c0;
              } while (lVar64 != lVar33 + lVar52);
            }
          }
          lVar55 = lVar55 + 0x28;
        } while (lVar55 != lStack_a88 + lStack_a80 * 0x28);
      }
    }
    pauStack_128 = pauVar34;
    if ((uVar21 & 0x100) != 0) {
      if (2 < *_DAT_143ca8e90) {
        uStack_5b8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5b0 = (undefined1 (*) [16])0x26;
        pauStack_5a8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5a0 = (undefined1 (*) [16])0x26;
        uStack_598 = (undefined1 (*) [16])&UNK_1433597b0;
        uStack_f7 = 1;
        pauVar61 = (undefined1 (*) [16])&uStack_5b8;
        apuStack_d10[0] = (undefined8 *)0x14192713c;
        pdb_1400c9be0(&UNK_143359778,0x6d,3);
      }
      if (lStack_a50 != 0) {
        uVar42 = lStack_a50 * 0x10 - 0x10;
        lVar55 = lStack_a58;
        if ((uVar42 & 0x10) == 0) {
          uVar41 = *(uint *)(lStack_a58 + 8);
          switch((undefined1 (*) [16])(ulonglong)uVar41) {
          case (undefined1 (*) [16])0x0:
          case (undefined1 (*) [16])0x6:
          case (undefined1 (*) [16])0x7:
code_r0x0001419271db:
            pauVar61 = (undefined1 (*) [16])(ulonglong)uVar41;
            break;
          case (undefined1 (*) [16])0x1:
            pauVar61 = (undefined1 (*) [16])0x2;
            break;
          case (undefined1 (*) [16])0x2:
            pauVar61 = (undefined1 (*) [16])0x5;
            break;
          case (undefined1 (*) [16])0x3:
          case (undefined1 (*) [16])0x5:
            pauVar61 = (undefined1 (*) [16])0x3;
            break;
          case (undefined1 (*) [16])0x4:
            pauVar61 = (undefined1 (*) [16])0x8;
            break;
          case (undefined1 (*) [16])0x8:
            pauVar61 = (undefined1 (*) [16])0x4;
            break;
          default:
            pauVar61 = (undefined1 (*) [16])0x1;
            if (uVar41 == 999) goto code_r0x0001419271db;
          }
          lVar55 = lStack_a58 + 0x10;
          *(int *)(lStack_a58 + 8) = (int)pauVar61;
        }
        if (uVar42 != 0) {
          do {
            iVar69 = *(int *)(lVar55 + 8);
            switch(iVar69) {
            case 0:
            case 6:
            case 7:
code_r0x000141927279:
              iVar59 = iVar69;
              break;
            case 1:
              iVar59 = 2;
              break;
            case 2:
              iVar59 = 5;
              break;
            case 3:
            case 5:
              iVar59 = 3;
              break;
            case 4:
              iVar59 = 8;
              break;
            case 8:
              iVar59 = 4;
              break;
            default:
              iVar59 = 1;
              if (iVar69 == 999) goto code_r0x000141927279;
            }
            *(int *)(lVar55 + 8) = iVar59;
            uVar41 = *(uint *)(lVar55 + 0x18);
            switch((undefined1 (*) [16])(ulonglong)uVar41) {
            case (undefined1 (*) [16])0x0:
            case (undefined1 (*) [16])0x6:
            case (undefined1 (*) [16])0x7:
LAB_14192723a:
              pauVar61 = (undefined1 (*) [16])(ulonglong)uVar41;
              break;
            case (undefined1 (*) [16])0x1:
              pauVar61 = (undefined1 (*) [16])0x2;
              break;
            case (undefined1 (*) [16])0x2:
              pauVar61 = (undefined1 (*) [16])0x5;
              break;
            case (undefined1 (*) [16])0x3:
            case (undefined1 (*) [16])0x5:
              pauVar61 = (undefined1 (*) [16])0x3;
              break;
            case (undefined1 (*) [16])0x4:
              pauVar61 = (undefined1 (*) [16])0x8;
              break;
            case (undefined1 (*) [16])0x8:
              pauVar61 = (undefined1 (*) [16])0x4;
              break;
            default:
              pauVar61 = (undefined1 (*) [16])0x1;
              if (uVar41 == 999) goto LAB_14192723a;
            }
            *(int *)(lVar55 + 0x18) = (int)pauVar61;
            lVar55 = lVar55 + 0x20;
          } while (lVar55 != lStack_a58 + lStack_a50 * 0x10);
        }
      }
      if (lStack_a80 != 0) {
        lVar55 = lStack_a88 + lStack_a80 * 0x28;
        pauVar61 = (undefined1 (*) [16])0x2492492492492493;
        do {
          if (*(longlong *)(lStack_a88 + 0x20) != 0) {
            lVar52 = *(longlong *)(lStack_a88 + 0x20) * 0x70;
            uVar42 = lVar52 - 0x70;
            lVar64 = *(longlong *)(lStack_a88 + 0x18);
            lVar33 = lVar64;
            if (((uVar42 / 0x70 & 1) == 0) && (lVar33 = lVar64 + 0x70, *(uint *)(lVar64 + 8) < 3)) {
              iVar69 = *(int *)(lVar64 + 0x48);
              switch(iVar69) {
              case 0:
              case 6:
              case 7:
code_r0x00014192739c:
                iVar59 = iVar69;
                break;
              case 1:
                iVar59 = 2;
                break;
              case 2:
                iVar59 = 5;
                break;
              case 3:
              case 5:
                iVar59 = 3;
                break;
              case 4:
                iVar59 = 8;
                break;
              case 8:
                iVar59 = 4;
                break;
              default:
                iVar59 = 1;
                if (iVar69 == 999) goto code_r0x00014192739c;
              }
              *(int *)(lVar64 + 0x48) = iVar59;
              pauVar32 = pauStack_188;
            }
            if (0x6f < uVar42) {
              do {
                if (*(uint *)(lVar33 + 8) < 3) {
                  iVar69 = *(int *)(lVar33 + 0x48);
                  switch(iVar69) {
                  case 0:
                  case 6:
                  case 7:
code_r0x000141927405:
                    iVar59 = iVar69;
                    break;
                  case 1:
                    iVar59 = 2;
                    break;
                  case 2:
                    iVar59 = 5;
                    break;
                  case 3:
                  case 5:
                    iVar59 = 3;
                    break;
                  case 4:
                    iVar59 = 8;
                    break;
                  case 8:
                    iVar59 = 4;
                    break;
                  default:
                    iVar59 = 1;
                    if (iVar69 == 999) goto code_r0x000141927405;
                  }
                  *(int *)(lVar33 + 0x48) = iVar59;
                  uVar41 = *(uint *)(lVar33 + 0x78);
                }
                else {
                  uVar41 = *(uint *)(lVar33 + 0x78);
                }
                if (uVar41 < 3) {
                  iVar69 = *(int *)(lVar33 + 0xb8);
                  switch(iVar69) {
                  case 0:
                  case 6:
                  case 7:
LAB_1419273b4:
                    iVar59 = iVar69;
                    break;
                  case 1:
                    iVar59 = 2;
                    break;
                  case 2:
                    iVar59 = 5;
                    break;
                  case 3:
                  case 5:
                    iVar59 = 3;
                    break;
                  case 4:
                    iVar59 = 8;
                    break;
                  case 8:
                    iVar59 = 4;
                    break;
                  default:
                    iVar59 = 1;
                    if (iVar69 == 999) goto LAB_1419273b4;
                  }
                  *(int *)(lVar33 + 0xb8) = iVar59;
                }
                lVar33 = lVar33 + 0xe0;
              } while (lVar33 != lVar64 + lVar52);
            }
          }
          lStack_a88 = lStack_a88 + 0x28;
        } while (lStack_a88 != lVar55);
      }
    }
    apuStack_d10[0] = (undefined8 *)0x1419274ca;
    pub_142e32760(&pauStack_8b8,&pauStack_ae8,0x1f8);
    pauVar54 = (undefined1 (*) [16])&uStack_5b8;
    apuStack_d10[0] = (undefined8 *)0x1419274e6;
    pub_142e32760(pauVar54,param_9,0x300);
    uStack_f7 = 0;
    apuStack_d10[0] = (undefined8 *)0x1419274ff;
    pauVar48 = pauStack_2a8;
    pdb_141bf3100(&pauStack_8b8,pauStack_2a8,pauVar54);
    pauVar53 = pauStack_128;
    *(int *)(pauVar32[6] + 8) = iVar27;
    lStack_168 = CONCAT44(lStack_168._4_4_,uVar40);
    if ((int)*(undefined1 (**) [16])pauVar32[1] <= iVar27) {
      if (1 < *_DAT_143ca8e90) {
        pauStack_8b8 = (undefined1 (*) [16])&pauStack_1f0;
        pauStack_8b0 = (undefined1 (*) [16])pdb_140f72a40;
        pauStack_8a0 = (undefined1 (*) [16])pdb_140bbbec0;
        auStack_8a8 = (undefined1  [8])&pauStack_1c0;
        uStack_5b8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5b0 = (undefined1 (*) [16])0x26;
        pauStack_5a8 = (undefined1 (*) [16])&UNK_143359270;
        pauStack_5a0 = (undefined1 (*) [16])0x26;
        uStack_598 = (undefined1 (*) [16])&UNK_143359828;
        uStack_f7 = 0;
        pauVar61 = (undefined1 (*) [16])&uStack_5b8;
        apuStack_d10[0] = (undefined8 *)0x1419275d2;
        pauStack_1f0 = *(undefined1 (**) [16])pauVar32[1];
        pdb_1400c9be0(&UNK_1433597c8,&pauStack_8b8,2);
      }
      uStack_f7 = 0;
      apuStack_d10[0] = (undefined8 *)0x1419275e5;
      pauVar48 = pauVar53;
      pdb_140ae4430(pauVar32);
      lStack_168 = CONCAT44(lStack_168._4_4_,*(undefined4 *)(pauVar32[6] + 8));
    }
    if ((uVar21 & 0x100) != 0) {
      pauStack_138 = *(undefined1 (**) [16])pauVar32[2];
      pauVar34 = *(undefined1 (**) [16])(pauVar32[2] + 8);
      *(undefined8 *)(pauVar32[2] + 8) = 0;
      pauStack_110 = pauVar34;
      if (pauVar34 != (undefined1 (*) [16])0x0) {
        pauVar54 = (undefined1 (*) [16])-(longlong)pauVar34;
        pauVar73 = (undefined1 (*) [16])0x1;
        pauVar53 = pauStack_138;
        do {
          plVar67 = *(longlong **)*pauVar53;
          LOCK();
          *plVar67 = *plVar67 + -1;
          UNLOCK();
          pauStack_128 = pauVar73;
          if (*plVar67 == 0) {
            apuStack_d10[0] = (undefined8 *)0x141927671;
            pdb_140315620(pauVar53);
          }
          pauVar73 = (undefined1 (*) [16])(*pauStack_128 + 1);
          pauVar53 = pauVar53 + 1;
        } while (pauStack_128 != pauVar34);
      }
    }
  }
  else {
LAB_141925de5:
    *(undefined4 *)(pauVar32[6] + 8) = 0xffffffff;
    lStack_168 = CONCAT44(lStack_168._4_4_,uVar40);
  }
  plStack_140 = plStack_108;
  piStack_160 = piStack_130;
  uStack_f1 = 0;
  apuStack_d10[0] = (undefined8 *)0x141925e1c;
  pauVar34 = (undefined1 (*) [16])pdb_140f3bda0();
  if (pauVar34[1][0] == '\x01') {
    uStack_598 = *(undefined1 (**) [16])*pauVar34;
    pauVar48 = *(undefined1 (**) [16])(*pauVar34 + 8);
  }
  else {
    plStack_140 = plStack_108;
    piStack_160 = piStack_130;
    uStack_f1 = 0;
    apuStack_d10[0] = (undefined8 *)0x1419276e7;
    uStack_598 = (undefined1 (*) [16])pdb_140f4fd10();
    *(undefined1 (**) [16])*pauVar34 = uStack_598;
    *(undefined1 (**) [16])(*pauVar34 + 8) = pauVar48;
    pauVar34[1][0] = 1;
    pauVar53 = pauVar34;
  }
  puVar43 = *uStack_598 + 1;
  *(undefined **)*pauVar34 = puVar43;
  pauStack_5a8 = _DAT_143359bb0;
  pauStack_5a0 = _UNK_143359bb8;
  uStack_5b8 = _DAT_143359ba0;
  pauStack_5b0 = _UNK_143359ba8;
  uStack_590 = pauVar48;
  if (*(longlong *)pauVar32[1] != 0) {
    pauVar34 = *(undefined1 (**) [16])(*pauStack_188 + 8);
    pauStack_1a8 = (undefined1 (*) [16])((longlong)pauVar34 + *(longlong *)pauVar32[1] * 0x28);
    pauVar48 = (undefined1 (*) [16])0x8000000000000001;
    puVar68 = &UNK_143359d60;
    pauVar32 = (undefined1 (*) [16])&uStack_5b8;
    pauVar73 = _DAT_143359ba0;
    pauStack_ce0 = _UNK_143359ba8;
    do {
      pauStack_110 = pauVar34;
      if (*(longlong *)pauVar34[1] != 0) {
        pauVar44 = *(undefined1 (**) [16])(*pauVar34 + 8);
        pauStack_138 = (undefined1 (*) [16])((longlong)pauVar44 + *(longlong *)pauVar34[1] * 0x18);
LAB_141925f38:
        pauStack_128 = pauVar44;
        if (*(longlong *)*pauVar44 == 7) {
          pauVar54 = *(undefined1 (**) [16])(*pauVar44 + 8) + *(longlong *)pauVar44[1];
          pauVar34 = *(undefined1 (**) [16])(*pauVar44 + 8);
          while (pauVar34 != pauVar54) {
            pauVar53 = pauVar34 + 1;
            plVar67 = *(longlong **)*pauVar34;
            plVar65 = plVar67 + *(longlong *)(*pauVar34 + 8);
            for (; pauVar34 = pauVar53, plVar67 != plVar65; plVar67 = plVar67 + 1) {
              lVar55 = *(longlong *)(*plVar67 + 0x10);
              apuStack_d10[0] = (undefined8 *)0x14192601d;
              pauVar73 = (undefined1 (*) [16])
                         pdb_1403b05d0(pauVar32,*(undefined8 *)
                                                 (*plVar67 + 0x10 +
                                                 *(longlong *)
                                                  (&UNK_143359d60 +
                                                  (lVar55 >> 0x3f & lVar55 + 0x8000000000000001U) *
                                                  8)));
              pauStack_ce0 = extraout_XMM0_Qb_01;
            }
          }
          goto LAB_141925f20;
        }
        iVar27 = (int)*(longlong *)*pauVar44;
        if (iVar27 == 8) {
          apuStack_d10[0] = (undefined8 *)0x141925f1f;
          pauVar73 = (undefined1 (*) [16])
                     pdb_1403b05d0(pauVar32,*(undefined8 *)
                                             (*(longlong *)(*pauVar44 + 8) +
                                             *(longlong *)
                                              (&UNK_143359e08 +
                                              (ulonglong)
                                              *(byte *)(*(longlong *)(*pauVar44 + 8) + 0x10) * 8)));
          pauStack_ce0 = extraout_XMM0_Qb;
          goto LAB_141925f20;
        }
        if (iVar27 != 9) goto LAB_141925f20;
        pauVar34 = *(undefined1 (**) [16])(*pauVar44 + 8);
        bVar24 = pauVar34[1][8] - 3;
        if ((byte)pauVar34[1][8] < 3) {
          bVar24 = 5;
        }
        pauVar44 = (undefined1 (*) [16])&UNK_143359fbc;
        uVar42 = (ulonglong)*(int *)(&UNK_143359fbc + (ulonglong)bVar24 * 4);
        bVar71 = 0xfffffffebcca6043 < uVar42;
        pbVar31 = &UNK_143359fbc + uVar42;
        bVar25 = (byte)pauVar34;
        iVar27 = (int)pauVar34;
        uVar36 = (undefined7)((ulonglong)pauVar34 >> 8);
        cVar26 = (char)pbVar31;
        uStack_cc0 = uVar80;
        uStack_cbc = uVar81;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar24) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
          pauVar34 = pauVar34 + 2;
          goto code_r0x000141925f86;
        case 5:
          pauVar34 = pauVar34 + 1;
code_r0x000141925f86:
          apuStack_d10[0] = (undefined8 *)0x141925f91;
          pauVar73 = (undefined1 (*) [16])pdb_1403b05d0(pauVar32,*(undefined8 *)*pauVar34);
          pauStack_ce0 = extraout_XMM0_Qb_00;
LAB_141925f20:
          pauVar44 = (undefined1 (*) [16])(pauStack_128[1] + 8);
          if (pauVar44 == pauStack_138) goto LAB_141925eb0;
          goto LAB_141925f38;
        default:
          goto LAB_141925f20;
        case 0x12:
          pbVar31 = (byte *)0x4335a004;
          goto code_r0x00014192a29d;
        case 0x13:
        case 0x14:
          pauVar30 = (undefined1 (*) [16])CONCAT71(uVar36,(bVar25 - 1) - bVar71);
          pcVar35 = pauVar30[0x20c4834] + 8;
          *pcVar35 = *pcVar35 + '\x01';
          return pauVar30;
        case 0x15:
          goto code_r0x00014192a29d;
        case 0x16:
          uStack_c28 = 0xfffffffe;
          pauVar34 = (undefined1 (*) [16])(ulonglong)UNK_143359fbc;
          pbVar31 = &UNK_14335a004;
          goto code_r0x00014192a29d;
        case 0x17:
          (*pauVar54)[0] = (byte)(*pauVar54)[0] >> 1 | (*pauVar54)[0] << 7;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          pauVar34[-5][8] = pauVar34[-5][8] + cVar26;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          pauVar34[-0x16f976c][8] = pauVar34[-0x16f976c][8] + bVar25;
          *(int *)*pauVar34 = *(int *)*pauVar34 + iVar27;
          pauVar34[-8][3] = pauVar34[-8][3] + cVar26;
          return pauVar34;
        case 0x18:
          in(0x9fbc);
          apuStack_d10[0] = (undefined8 *)0x14192a55a;
          func_0x00018992a55a();
        case 0x1b:
          *(undefined8 *)(((ulonglong)(auStack_c8a + 2) & 0xffffffff) + 0x60) = 0xfffffffffffffffe;
          if (pbVar31 == (byte *)0x0) {
            return (undefined1 (*) [16])0x2;
          }
          pauVar34 = (undefined1 (*) [16])(ulonglong)*pbVar31;
code_r0x00014192a577:
                    /* WARNING: Could not recover jumptable at 0x00014192a585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pauVar30 = (undefined1 (*) [16])
                     (*(code *)(&UNK_14335a01c + *(int *)(&UNK_14335a01c + (longlong)pauVar34 * 4)))
                               ();
          return pauVar30;
        case 0x19:
        case 0x1a:
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          apuStack_d10[0] = (undefined8 *)0x14192a538;
          pub_1406abac0(pbStack_c38,0x143359fbc,8);
          return extraout_RAX_02;
        case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x1d:
          (*pauVar54)[0] = (*pauVar54)[0] + cVar26;
          goto code_r0x00014192a577;
        case 0x1e:
          goto code_r0x00014192a7dd;
        case 0x1f:
        case 0x20:
          iRam5b38c4834890feb8 = iVar27;
          return pauVar34;
        case 0x21:
          pauVar34[0x38c4834][8] = pauVar34[0x38c4834][8] + 1;
          return pauVar34;
        case 0x22:
          (*pauVar54)[0] = bVar25;
          (*pauVar34)[0] = (*pauVar34)[0];
          puVar43 = (undefined *)0x8;
          goto code_r0x00014192a7dd;
        case 0x23:
          LOCK();
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          UNLOCK();
          pauVar34[-8][0xd] = pauVar34[-8][0xd] + cVar26;
          pcVar35 = (char *)(CONCAT71(uVar36,(*pauVar53)[0]) & 0xffffffffffffff80);
          *pcVar35 = *pcVar35 + (char)pcVar35;
          pcVar35[-0x39] = pcVar35[-0x39] + cVar26;
          apuStack_d10[0] = (undefined8 *)0xfffffffffffffffe;
                    /* WARNING: Could not recover jumptable at 0x00014192a823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pauVar30 = (undefined1 (*) [16])
                     (*(code *)(&UNK_14335a034 +
                               *(int *)(&UNK_14335a034 + (ulonglong)UNK_143359fbc * 4)))();
          return pauVar30;
        case 0x24:
          goto code_r0x00014192ac74;
        case 0x25:
        case 0x26:
          pauVar30 = (undefined1 (*) [16])(ulonglong)_UNK_143359fcc;
          *(undefined1 (**) [16])(&UNK_143359fcc + uVar42) = pauVar30;
          uVar70 = _UNK_143359fc4;
          *(ulonglong *)pbVar31 = CONCAT71(_UNK_143359fbd,UNK_143359fbc);
          *(undefined8 *)(&UNK_143359fc4 + uVar42) = uVar70;
          return pauVar30;
        case 0x27:
          goto code_r0x00014192ac8d;
        case 0x28:
          *(uint *)(*pauVar34 + 1) = *(uint *)(*pauVar34 + 1) | 0xfe0ffc8;
          UNK_143359fbc = UNK_143359fbc + bVar25;
          uStack_c98 = (undefined1 (*) [16])CONCAT44(_UNK_143359fd0,_UNK_143359fcc);
          uStack_c90 = _UNK_143359fd4;
          uStack_c8c = (undefined2)_UNK_143359fd8;
          auStack_c8a._0_2_ = (undefined2)((uint)_UNK_143359fd8 >> 0x10);
          apuStack_d10[0] = (undefined8 *)0x14192ac62;
          pauStack_ca8 = pauVar73;
          uStack_ca0 = pauStack_ce0;
          lVar55 = pdb_1414fff30(&pauStack_ca8);
          if (lVar55 != 1) {
            return (undefined1 (*) [16])0x0;
          }
          uStack_c70 = CONCAT17(1,(undefined7)uStack_c70);
          pauStack_cb0 = pauVar44;
          goto code_r0x00014192ac74;
        case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x2b:
        case 0x2c:
          (*pauVar34)[0] = ((*pauVar34)[0] - 1) - bVar71;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          do {
            uVar42 = *(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(pauVar54[0x11] + 8) + 0x118) + 0x118) +
                          0x118) + 0x118) + 0x118);
code_r0x00014192cfba:
            pauVar54 = *(undefined1 (**) [16])(*(longlong *)(uVar42 + 0x118) + 0x118);
            pbVar31 = pbVar31 + -8;
          } while (pbVar31 != (byte *)0x0);
          for (pauVar30 = *(undefined1 (**) [16])*pauVar54; pauVar30 != (undefined1 (*) [16])0x0;
              pauVar30 = *(undefined1 (**) [16])*pauVar30) {
            bVar71 = pauVar48 == (undefined1 (*) [16])0x0;
            pauVar48 = (undefined1 (*) [16])(*pauVar48 + 1);
            uVar42 = 0x178;
            if (bVar71) {
              uVar42 = 0x118;
            }
            apuStack_d10[0] = (undefined8 *)&UNK_14192ce2e;
            pub_1406abac0((byte *)pauVar54,uVar42,8);
            pauVar54 = pauVar30;
          }
          uVar42 = 0x178;
          if (pauVar48 == (undefined1 (*) [16])0x0) {
            uVar42 = 0x118;
          }
          apuStack_d10[0] = (undefined8 *)&UNK_14192ce58;
          pub_1406abac0((byte *)pauVar54,uVar42,8);
          *(undefined8 *)*pauVar53 = 0;
          return pauVar53;
        case 0x2d:
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          pauVar30 = (undefined1 (*) [16])0x178;
          if ((*pauVar34)[0] == 0) {
            pauVar30 = pauVar34;
          }
          apuStack_d10[0] = (undefined8 *)&UNK_14192cfef;
          pub_1406abac0(pbVar31,(ulonglong)pauVar30,8);
                    /* WARNING: Subroutine does not return */
          apuStack_d10[0] = (undefined8 *)&UNK_14192cffc;
          pdb_142dc8150(&UNK_143359c30);
        case 0x2e:
          uVar42 = (ulonglong)*(uint *)(pauVar34[0x11] + 8);
          goto code_r0x00014192cfba;
        case 0x2f:
                    /* WARNING: Subroutine does not return */
          apuStack_d10[0] = (undefined8 *)&UNK_14192d00b;
          bRam0f900149b154e801 = bVar25;
          pdb_142dc8150((uint)pbVar31 | *(uint *)(pauVar34[-8] + 0xd));
        case 0x30:
          cVar26 = bVar25 + 5 + bVar71;
          pauVar34 = (undefined1 (*) [16])CONCAT71(uVar36,cVar26);
          (*pauVar34)[0] = (*pauVar34)[0] + cVar26;
          break;
        case 0x31:
        case 0x32:
          (&UNK_14335a294)[uVar42] = (&UNK_14335a294)[uVar42] + '\x01';
          apuStack_d10[0] = (undefined8 *)0x14192d201;
          pauVar34 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pbVar31,8);
          if (pauVar34 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
            apuStack_d10[0] = (undefined8 *)0x14192d746;
            pdb_142dc7e11(8,0x2d8);
          }
          *(byte *)((longlong)(pauVar34 + 0x16) + 0) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 1) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 2) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 3) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 4) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 5) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 6) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 7) = 0;
          goto code_r0x00014192d215;
        case 0x33:
          break;
        case 0x34:
          (*pauVar54)[0] = (byte)(*pauVar54)[0] >> 4 | (*pauVar54)[0] << 4;
          pauVar34 = (undefined1 (*) [16])(ulonglong)(iVar27 + 0xb7fffffb);
          *(byte *)((longlong)(pauVar34 + 0x16) + 0) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 1) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 2) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 3) = 0;
code_r0x00014192d215:
          *(byte *)((longlong)(pauVar34 + 0x27) + 2) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 3) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 8) = 1;
          *(byte *)((longlong)(pauVar34 + 0x27) + 9) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 10) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 0xb) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 0xc) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 0xd) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 0xe) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 0xf) = 0x80;
          pbVar31 = (byte *)((longlong)&uStack_5b8 + 1);
          uStack_cc8 = pauVar34;
          if (pbVar31 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            apuStack_d10[0] = (undefined8 *)0x14192d755;
            pdb_142dc8150(&UNK_1433a43e8);
          }
          break;
        case 0x35:
          goto code_r0x00014192d265;
        case 0x36:
          auStack_c8a = (undefined1  [4])
                        ((CONCAT22(auStack_c8a._2_2_,auStack_c8a._0_2_) - (int)pauVar53) -
                        (uint)bVar71);
          pbVar31 = (byte *)0x278;
          pauVar44 = (undefined1 (*) [16])0x8;
          goto code_r0x00014192d4d2;
        case 0x37:
        case 0x38:
          pauVar61[-2][(longlong)pbVar31 * 4 + 0xe] =
               pauVar61[-2][(longlong)pbVar31 * 4 + 0xe] | (byte)pauVar61;
          if (&UNK_143359d60 < (undefined *)(ulonglong)*(ushort *)(pauVar54[0x27] + 2))
          goto code_r0x00014192d280;
          goto LAB_14192d49c;
        case 0x39:
          (*pauVar34)[0] = (*pauVar34)[0] | bVar25;
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
code_r0x00014192d4d2:
          apuStack_d10[0] = (undefined8 *)0x14192d4d7;
          pauVar34 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pbVar31,(ulonglong)pauVar44);
          if (pauVar34 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
            apuStack_d10[0] = (undefined8 *)0x14192d767;
            pdb_142dc7e11(8,0x278);
          }
          *(byte *)((longlong)(pauVar34 + 0x16) + 0) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 1) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 2) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 3) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 4) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 5) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 6) = 0;
          *(byte *)((longlong)(pauVar34 + 0x16) + 7) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 2) = 0;
          *(byte *)((longlong)(pauVar34 + 0x27) + 3) = 0;
          pauVar48 = pauVar34;
code_r0x00014192d4f7:
          uStack_c90 = SUB84(pauVar34,0);
          uStack_c8c = (undefined2)((ulonglong)pauVar34 >> 0x20);
          auStack_c8a._0_2_ = (undefined2)((ulonglong)pauVar34 >> 0x30);
          auStack_c8a._2_2_ = 0;
          uStack_c86 = 0;
          uStack_c84 = 0;
          uStack_c80 = 0;
          uVar42 = 0;
          if (*(short *)(pauVar54[0x27] + 2) != 0) {
            do {
              lVar55 = uStack_c80;
              apuStack_d10[0] = (undefined8 *)0x14192d548;
              pdb_140f60be0(&pauStack_ca8,(undefined *)((longlong)pauVar54 + uVar42 * 0x18 + 0x168))
              ;
              pauVar30 = pauVar54 + uVar42 * 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((*pauVar30)[0]) {
              case 0:
                uStack_c78 = uStack_c78 & 0xffffffffffffff00;
                break;
              default:
                uStack_c78 = *(ulonglong *)*pauVar30;
                uStack_c70 = *(ulonglong *)(*pauVar30 + 8);
                uStack_c68 = *(undefined8 *)pauVar30[1];
                pbStack_c60 = *(byte **)(pauVar30[1] + 8);
                break;
              case 3:
                uStack_c29 = 1;
                apuStack_d10[0] = (undefined8 *)0x14192d5b7;
                pdb_140f60be0(&uStack_c58,*pauVar30 + 8);
                pbStack_c60 = pbStack_c48;
                uStack_c70 = uStack_c58;
                uStack_c68 = uStack_c50;
                uStack_c78 = CONCAT71(uStack_c78._1_7_,3);
                break;
              case 4:
                uStack_c29 = 1;
                apuStack_d10[0] = (undefined8 *)0x14192d584;
                pdb_1415e5d30(&uStack_c58,*pauVar30 + 8);
                pbStack_c60 = pbStack_c48;
                uStack_c70 = uStack_c58;
                uStack_c68 = uStack_c50;
                uStack_c78 = CONCAT71(uStack_c78._1_7_,4);
                break;
              case 5:
                if (*(longlong *)(pauVar30[1] + 8) == 0) {
                  uStack_c58 = 0;
                  pbStack_c48 = (byte *)0x0;
                }
                else {
                  if (*(longlong *)(*pauVar30 + 8) == 0) {
                    uStack_c29 = 1;
                    /* WARNING: Subroutine does not return */
                    apuStack_d10[0] = (undefined8 *)0x14192d725;
                    pdb_142dc8150(&UNK_143359d48);
                  }
                  uStack_c29 = 1;
                  apuStack_d10[0] = (undefined8 *)0x14192d5f5;
                  pdb_14192d190(&uStack_c58,*(longlong *)(*pauVar30 + 8),*(undefined8 *)pauVar30[1])
                  ;
                }
                pbStack_c60 = pbStack_c48;
                uStack_c70 = uStack_c58;
                uStack_c68 = uStack_c50;
                uStack_c78 = CONCAT71(uStack_c78._1_7_,5);
              }
              uVar10 = *(ushort *)(pauVar48[0x27] + 2);
              uVar38 = (ulonglong)uVar10;
              if (10 < uVar38) {
                    /* WARNING: Subroutine does not return */
                apuStack_d10[0] = (undefined8 *)0x14192d6e9;
                pdb_142dc83b0(&UNK_1433a4350,0x20,&UNK_1433a4370);
              }
              uVar42 = uVar42 + 1;
              *(ushort *)(pauVar48[0x27] + 2) = uVar10 + 1;
              *(undefined1 (**) [16])((longlong)pauVar34 + uVar38 * 0x18 + 0x178) = uStack_c98;
              pbVar31 = (byte *)((longlong)pauVar34 + uVar38 * 0x18 + 0x168);
              *(undefined1 (**) [16])pbVar31 = pauStack_ca8;
              *(undefined1 (**) [16])(pbVar31 + 8) = uStack_ca0;
              *(undefined8 *)pauVar48[(ulonglong)uVar10 * 2 + 1] = uStack_c68;
              *(byte **)(pauVar48[(ulonglong)uVar10 * 2 + 1] + 8) = pbStack_c60;
              *(ulonglong *)pauVar48[(ulonglong)uVar10 * 2] = uStack_c78;
              *(ulonglong *)(pauVar48[(ulonglong)uVar10 * 2] + 8) = uStack_c70;
              uStack_c80 = lVar55 + 1;
            } while (uVar42 < *(ushort *)(pauVar54[0x27] + 2));
          }
          goto LAB_14192d49c;
        case 0x3a:
          *(int *)(pauVar34[-8] + 0xb) = *(int *)(pauVar34[-8] + 0xb) + -1;
          puVar43[-0x75] = puVar43[-0x75] | (byte)pauVar61;
          apuStack_d10[0] = ppuVar51;
          (*pauVar54)[0] = (*pauVar54)[0] + cVar26;
          ppuVar51 = apuStack_d10;
          goto LAB_14192d49c;
        case 0x3b:
          (*pauVar34)[0] = (*pauVar34)[0] + bVar25;
          goto code_r0x00014192d4f7;
        }
        uStack_cd0 = pauVar32;
        uRam8000000000000271 = 0;
        uStack_c90 = SUB84(pauVar34,0);
        uStack_c8c = (undefined2)((ulonglong)pauVar34 >> 0x20);
        auStack_c8a._0_2_ = (undefined2)((ulonglong)pauVar34 >> 0x30);
        auStack_c8a._2_2_ = SUB82(pbVar31,0);
        uStack_c86 = (undefined2)((ulonglong)pbVar31 >> 0x10);
        uStack_c84 = (undefined4)((ulonglong)pbVar31 >> 0x20);
        puVar68 = (undefined *)0x0;
        pauVar32 = (undefined1 (*) [16])&UNK_14335a07c;
        pauRam8000000000000161 = pauVar34;
code_r0x00014192d265:
        if (puVar68 < (undefined *)(ulonglong)*(ushort *)(pauVar54[0x27] + 2)) {
code_r0x00014192d280:
          apuStack_d10[0] = (undefined8 *)0x14192d298;
          pdb_140f60be0(&pauStack_ca8,
                        (undefined *)((longlong)pauVar54 + (longlong)puVar68 * 0x18 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00014192d2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pauVar30 = (undefined1 (*) [16])
                     (*(code *)(*pauVar32 +
                               *(int *)(*pauVar32 +
                                       (ulonglong)(byte)pauVar54[(longlong)puVar68 * 2][0] * 4)))();
          return pauVar30;
        }
LAB_14192d49c:
        pauVar30 = (undefined1 (*) [16])ppuVar51[1];
        puVar45 = ppuVar51[-7];
        puVar45[2] = pauVar30;
        uVar70 = *ppuVar51;
        *puVar45 = ppuVar51[-1];
        puVar45[1] = uVar70;
        return pauVar30;
      }
LAB_141925eb0:
      pauVar34 = (undefined1 (*) [16])(pauStack_110[2] + 8);
    } while (pauVar34 != pauStack_1a8);
  }
  pauVar48 = pauStack_188;
  plVar67 = plStack_5e0;
  pauStack_898 = uStack_598;
  auStack_890._0_8_ = uStack_590;
  pauStack_8a0._0_4_ = pauStack_5a0._0_4_;
  auStack_8a8 = (undefined1  [8])pauStack_5a8;
  pauStack_8a0._4_4_ = pauStack_5a0._4_4_;
  pauStack_8b8 = uStack_5b8;
  pauStack_8b0 = pauStack_5b0;
  pauVar54 = *(undefined1 (**) [16])*pauStack_2a8;
  lVar55 = *(longlong *)(*pauStack_2a8 + 8);
  auVar3 = *pauVar54;
  pauVar53 = *(undefined1 (**) [16])(pauStack_2a8[1] + 8);
  pauVar61 = (undefined1 (*) [16])((ulonglong)(*pauVar53 + 1) >> 1);
  if (pauStack_8a0 == (undefined1 (*) [16])0x0) {
    pauVar61 = pauVar53;
  }
  if (pauStack_5a8 < pauVar61) {
    apuStack_d10[0] = (undefined8 *)0x14192771a;
    pdb_142d974a0(&pauStack_8b8,pauVar61,&pauStack_898);
  }
  pauStack_5a8 = (undefined1 (*) [16])(*pauVar54 + lVar55 + 1);
  uStack_cd8 = (undefined1 (*) [16])&pauStack_8b8;
  pauStack_ae8 = (undefined1 (*) [16])&uStack_cd8;
  pauStack_5b0 = pauVar54 + 1;
  pauStack_5a0 = (undefined1 (*) [16])
                 CONCAT62(pauStack_5a0._2_6_,
                          ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf));
  apuStack_d10[0] = (undefined8 *)0x1419260fd;
  uStack_5b8 = pauVar54;
  pdb_140ca82b0(&uStack_5b8,pauVar53,&pauStack_ae8);
  pauVar54 = pauStack_180 + 3;
  apuStack_d10[0] = (undefined8 *)0x141926118;
  pdb_1415e5900(&uStack_5b8,pauVar54);
  pbVar31 = (byte *)plVar67[1];
  lVar55 = plVar67[2];
  if (lVar55 != 0) {
    pbVar49 = pbVar31 + 8;
    do {
      if (*(longlong *)(pbVar49 + -8) != 0) {
        apuStack_d10[0] = (undefined8 *)0x141926154;
        pub_1406abac0(*(byte **)pbVar49,*(longlong *)(pbVar49 + -8) << 3,8);
      }
      pbVar49 = pbVar49 + 0x18;
      lVar55 = lVar55 + -1;
    } while (lVar55 != 0);
  }
  if (*plVar67 != 0) {
    apuStack_d10[0] = (undefined8 *)0x141926174;
    pub_1406abac0(pbVar31,*plVar67 * 0x18,8);
  }
  plVar67[2] = (longlong)pauStack_5a8;
  *plVar67 = (longlong)uStack_5b8;
  plVar67[1] = (longlong)pauStack_5b0;
  apuStack_d10[0] = (undefined8 *)0x14192619b;
  pdb_140b43320(plVar67,&pauStack_8b8);
  if (pauStack_8a0 == (undefined1 (*) [16])0x0) {
    uVar42 = 0;
  }
  else {
    pauStack_5a8 = (undefined1 (*) [16])(*pauStack_8b8 + (longlong)(*pauStack_8b0 + 1));
    auVar3 = *pauStack_8b8;
    uVar10 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf
    ;
    uStack_5b8 = pauStack_8b8;
    pauStack_5b0 = pauStack_8b8;
    while( true ) {
      uVar21 = uVar10 ^ 0xffff;
      pauStack_5b0 = pauStack_5b0 + 1;
      if (uVar21 != 0) break;
      auVar3 = *pauStack_5b0;
      uStack_5b8 = uStack_5b8 + -8;
      uVar10 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    }
    uVar10 = (ushort)uVar21;
    iVar27 = 0;
    for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
      iVar27 = iVar27 + 1;
    }
    pauStack_ae8 = (undefined1 (*) [16])&uStack_f8;
    pauStack_5a0 = (undefined1 (*) [16])CONCAT62(pauStack_5a0._2_6_,uVar10 - 1 & uVar10);
    apuStack_d10[0] = (undefined8 *)0x141926256;
    uVar42 = pdb_140ca8500(&uStack_5b8,(longlong)pauStack_8a0 + -1,
                           *(undefined8 *)
                            ((longlong)uStack_5b8 + (-8 - (ulonglong)(uint)(iVar27 << 3))));
  }
  uVar38 = *(ulonglong *)pauStack_2a8[0xc];
  if (*(ulonglong *)pauStack_2a8[0xc] < uVar42) {
    uVar38 = uVar42;
  }
  *(ulonglong *)pauStack_2a8[0xc] = uVar38;
  iVar27 = 0;
  if (0 < *(int *)(pauVar48[6] + 0xc)) {
    iVar27 = *(int *)(pauVar48[6] + 0xc);
  }
  *(int *)(pauVar48[6] + 0xc) = iVar27;
  apuStack_d10[0] = (undefined8 *)0x141926289;
  pauVar53 = pauStack_2a8;
  uStack_610 = pdb_140f3c9d0();
  uStack_608 = SUB84(pauVar53,0);
  uVar66 = *(undefined8 *)pauVar48[6];
  uVar76 = *(undefined4 *)pauStack_180[0x11];
  apuStack_d10[0] = (undefined8 *)0x1419262bc;
  pdb_140a34930(&pauStack_ae8,lStack_250);
  uVar6 = *(undefined2 *)(puStack_208 + 5);
  pauStack_138 = (undefined1 (*) [16])CONCAT44(pauStack_138._4_4_,*(undefined4 *)puStack_208);
  uVar15 = *(undefined8 *)((longlong)puStack_208 + 4);
  uVar16 = *(undefined8 *)((longlong)puStack_208 + 0xc);
  pauVar53 = *(undefined1 (**) [16])((longlong)puStack_208 + 0x14);
  uVar17 = *(undefined8 *)((longlong)puStack_208 + 0x1c);
  uVar40 = *(undefined4 *)((longlong)puStack_208 + 0x24);
  uVar70 = *puStack_5c8;
  uVar74 = *(undefined4 *)(puStack_5c8 + 1);
  uVar4 = *(undefined1 *)((longlong)puStack_5c8 + 0x14);
  uVar75 = *(undefined4 *)(puStack_5c8 + 2);
  pauStack_128 = (undefined1 (*) [16])
                 CONCAT71(pauStack_128._1_7_,*(undefined1 *)((longlong)puStack_5c8 + 0x15));
  uVar8 = *(undefined8 *)(pauVar48[6] + 8);
  apuStack_d10[0] = (undefined8 *)0x141926327;
  pdb_1415e9150(&pauStack_1f0,*(longlong *)(*pauVar48 + 8),
                *(longlong *)(*pauVar48 + 8) + *(longlong *)pauVar48[1] * 0x28);
  pauStack_110 = (undefined1 (*) [16])CONCAT71(pauStack_110._1_7_,uVar4);
  apuStack_d10[0] = (undefined8 *)0x14192634a;
  pdb_1415ed4a0(&pauStack_1c8,*(longlong *)pauVar48[2],
                *(longlong *)(pauVar48[2] + 8) * 0x10 + *(longlong *)pauVar48[2]);
  ppauVar46 = ppauStack_248;
  pbVar31 = (byte *)-(longlong)plStack_108;
  ppauVar57 = ppauStack_248;
  pauStack_1a8 = (undefined1 (*) [16])CONCAT62(pauStack_1a8._2_6_,uVar6);
  if (SBORROW8(0,(longlong)plStack_108)) {
    puStack_208 = (undefined8 *)CONCAT44(puStack_208._4_4_,uVar40);
    pauStack_2a8 = pauVar53;
    uStack_2a0 = uVar17;
    pauStack_240 = pauVar54;
    uStack_210 = uVar66;
  }
  else {
    uVar42 = (longlong)ppauStack_248 * 0x28;
    if ((undefined1 (**) [16])0x333333333333333 < ppauStack_248) {
      uVar66 = 0;
LAB_1419268df:
      apuStack_d10[0] = (undefined8 *)0x1419268ea;
      pdb_142dc7e2a(uVar66,uVar42);
LAB_14192782b:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    puStack_208 = (undefined8 *)CONCAT44(puStack_208._4_4_,uVar40);
    if (uVar42 == 0) {
      pbVar31 = (byte *)0x4;
      ppauStack_190 = (undefined1 (**) [16])0x0;
      pauStack_2a8 = pauVar53;
      uStack_2a0 = uVar17;
      pauStack_240 = pauVar54;
      uStack_210 = uVar66;
    }
    else {
      apuStack_d10[0] = (undefined8 *)0x141926aea;
      pauStack_2a8 = pauVar53;
      uStack_2a0 = uVar17;
      pauStack_240 = pauVar54;
      uStack_210 = uVar66;
      pdb_14007ee60();
      uVar66 = 4;
      apuStack_d10[0] = (undefined8 *)0x141926afd;
      pbVar31 = pub_1406abab0(uVar42,4);
      if (pbVar31 == (byte *)0x0) goto LAB_1419268df;
      if (ppauVar46 == (undefined1 (**) [16])0x0) {
        ppauStack_190 = (undefined1 (**) [16])0x0;
      }
      else {
        uVar38 = 0;
        piVar58 = piStack_130;
        do {
          ppauStack_190 = ppauVar57;
          if (uVar42 == uVar38) break;
          if (*piVar58 == 1) {
            pauStack_5b0 = (undefined1 (*) [16])
                           CONCAT44(pauStack_5b0._4_4_,
                                    *(undefined4 *)((longlong)piStack_130 + uVar38 + 0xc));
            uStack_5b8 = *(undefined1 (**) [16])((longlong)piStack_130 + uVar38 + 4);
          }
          ppauVar46 = (undefined1 (**) [16])((longlong)ppauVar46 + -1);
          uStack_cd0 = (undefined1 (*) [16])CONCAT44(uStack_cd0._4_4_,(int)pauStack_5b0);
          uStack_cd8 = uStack_5b8;
          *(uint *)(pbVar31 + uVar38) = (uint)(*piVar58 == 1);
          *(int *)(pbVar31 + uVar38 + 0xc) = (int)pauStack_5b0;
          *(undefined1 (**) [16])(pbVar31 + uVar38 + 4) = uStack_5b8;
          *(undefined8 *)(pbVar31 + uVar38 + 0x10) = *(undefined8 *)(piVar58 + 4);
          *(int *)(pbVar31 + uVar38 + 0x18) = piVar58[6];
          *(undefined8 *)(pbVar31 + uVar38 + 0x1c) = *(undefined8 *)(piVar58 + 7);
          piVar1 = piVar58 + 9;
          piVar58 = piVar58 + 10;
          *(int *)(pbVar31 + uVar38 + 0x24) = *piVar1;
          uVar38 = uVar38 + 0x28;
        } while (ppauVar46 != (undefined1 (**) [16])0x0);
      }
    }
  }
  puVar45 = puStack_198;
  uStack_280 = 0;
  uVar40 = *(undefined4 *)puStack_198;
  uVar77 = *(undefined4 *)((longlong)puStack_198 + 4);
  cVar26 = *(char *)((longlong)puStack_198 + 0x1c);
  if (cVar26 != '\x03') {
    uStack_2b8 = (undefined7)*(undefined8 *)((longlong)puStack_198 + 0x1d);
    iStack_2b1._1_3_ = (uint3)((uint)*(undefined4 *)((longlong)puStack_198 + 0x24) >> 8);
    iStack_2b1._0_1_ =
         (undefined1)((ulonglong)*(undefined8 *)((longlong)puStack_198 + 0x1d) >> 0x38);
  }
  puStack_5c8 = (undefined8 *)puStack_198[5];
  uStack_5c0 = puStack_198[6];
  uVar80 = *(undefined4 *)(puStack_198 + 7);
  puStack_198 = (undefined8 *)CONCAT71(puStack_198._1_7_,*(undefined1 *)(puStack_198 + 0xc));
  uVar78 = *(undefined4 *)((longlong)puVar45 + 0x3c);
  uVar17 = puVar45[8];
  uVar18 = puVar45[9];
  uVar66 = puVar45[10];
  auStack_298 = ZEXT416(*(uint *)((longlong)puVar45 + 0x5c));
  uVar79 = *(undefined4 *)(puVar45 + 0xb);
  uVar4 = *(undefined1 *)(puVar45 + 3);
  uVar5 = *(undefined1 *)((longlong)puVar45 + 0x19);
  uVar19 = puVar45[1];
  uVar20 = puVar45[2];
  apuStack_d10[0] = (undefined8 *)0x141926418;
  pauStack_288 = pauVar30;
  pbStack_218 = pbVar31;
  pdb_1415e5900(&uStack_cd8,plStack_5e0);
  uStack_540 = uStack_210;
  pauStack_4a4 = pauStack_ae8;
  pauStack_49c = pauStack_ae0;
  uStack_494 = (undefined4)uStack_ad8;
  uStack_490 = uStack_ad8._4_4_;
  uStack_48c = (undefined4)uStack_ad0;
  uStack_488 = uStack_ad0._4_4_;
  uStack_484 = uStack_ac8;
  uStack_4d4 = pauStack_138._0_4_;
  pauStack_4c0 = pauStack_2a8;
  uStack_4b8 = uStack_2a0;
  uStack_4b0 = puStack_208._0_4_;
  uStack_4ac = pauStack_1a8._0_2_;
  uStack_544 = (char)pauStack_110;
  uStack_554 = pauStack_128._0_1_;
  pauStack_5a8 = pauStack_1e0;
  uStack_5b8 = pauStack_1f0;
  pauStack_5b0 = pauStack_1e8;
  pauStack_5a0 = pauStack_1c8;
  uStack_598 = pauStack_1c0;
  uStack_590 = pauStack_1b8;
  ppauStack_570 = ppauStack_190;
  pbStack_568 = pbStack_218;
  ppauStack_560 = ppauStack_190;
  uStack_51b = uStack_2b8;
  iStack_514 = iStack_2b1;
  puStack_510 = puStack_5c8;
  uStack_508 = uStack_5c0;
  uStack_4dc = auStack_298._0_4_;
  uStack_4d8 = puStack_198._0_1_;
  uStack_588 = uStack_cd8;
  uStack_580 = uStack_cd0;
  pauStack_578 = uStack_cc8;
  apuStack_d10[0] = (undefined8 *)0x1419265de;
  uStack_558 = uVar75;
  uStack_550 = uVar70;
  uStack_548 = uVar74;
  uStack_538 = uVar40;
  uStack_534 = uVar77;
  uStack_530 = uVar19;
  uStack_528 = uVar20;
  uStack_520 = uVar4;
  uStack_51f = uVar5;
  cStack_51c = cVar26;
  uStack_500 = uVar80;
  uStack_4fc = uVar78;
  uStack_4f8 = uVar17;
  uStack_4f0 = uVar18;
  uStack_4e8 = uVar66;
  uStack_4e0 = uVar79;
  uStack_4d0 = uVar15;
  uStack_4c8 = uVar16;
  uStack_4a8 = uVar76;
  uStack_480 = uVar8;
  pdb_14007ee60();
  apuStack_d10[0] = (undefined8 *)0x1419265ed;
  pauVar30 = (undefined1 (*) [16])pub_1406abab0(0x140,8);
  if (pauVar30 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack_d10[0] = (undefined8 *)0x141927731;
    pdb_142dc7e11(8,0x140);
  }
  puVar45 = &uStack_5b8;
  apuStack_d10[0] = (undefined8 *)0x141926612;
  pauStack_128 = pauVar30;
  pub_142e32760(pauVar30,puVar45,0x140);
  pauVar54 = pauStack_188;
  pauVar30 = pauStack_288;
  lVar33 = lStack_628;
  lVar55 = lStack_630;
  uVar40 = SUB84(puVar45,0);
  if (3 < *_DAT_143ca8e90) {
    apuStack_d10[0] = (undefined8 *)0x14192664e;
    uStack_cd8 = (undefined1 (*) [16])pdb_140f3cb70(&uStack_610);
    uStack_cd0 = (undefined1 (*) [16])CONCAT44(uStack_cd0._4_4_,uVar40);
    pauStack_ae8 = (undefined1 (*) [16])&uStack_cd8;
    pauStack_ae0 = (undefined1 (*) [16])pdb_140f72840;
    uStack_5b8 = (undefined1 (*) [16])0x0;
    pauStack_5b0 = (undefined1 (*) [16])&UNK_143359270;
    pauStack_5a8 = (undefined1 (*) [16])0x26;
    pauStack_5a0 = (undefined1 (*) [16])0x0;
    uStack_598 = (undefined1 (*) [16])&UNK_1433591c4;
    uStack_590 = (undefined1 (*) [16])0x31;
    uStack_588 = (undefined1 (*) [16])0x4;
    uStack_580 = (undefined1 (*) [16])&UNK_143359270;
    pauStack_578 = (undefined1 (*) [16])0x26;
    ppauStack_570 = (undefined1 (**) [16])0x3e600000001;
    pbStack_568 = &UNK_143359840;
    ppauStack_560 = &pauStack_ae8;
    apuStack_d10[0] = (undefined8 *)0x141926714;
    pdb_140f332f0(&uStack_f8,&uStack_5b8);
  }
  pauVar53 = pauStack_1f8;
  if (pauStack_8b0 != (undefined1 (*) [16])0x0) {
    uVar42 = (longlong)pauStack_8b0 * 8 + 0x17U & 0xfffffffffffffff0;
    if (pauStack_8b0[1] + uVar42 + 1 != (undefined *)0x0) {
      apuStack_d10[0] = (undefined8 *)0x141926752;
      pub_1406abac0((byte *)((longlong)pauStack_8b8 - uVar42),
                    (ulonglong)(pauStack_8b0[1] + uVar42 + 1),0x10);
    }
  }
  pbVar31 = *(byte **)(pauStack_180[3] + 8);
  lVar64 = *(longlong *)pauStack_180[4];
  if (lVar64 != 0) {
    pbVar49 = pbVar31 + 8;
    do {
      if (*(longlong *)(pbVar49 + -8) != 0) {
        apuStack_d10[0] = (undefined8 *)0x141926794;
        pub_1406abac0(*(byte **)pbVar49,*(longlong *)(pbVar49 + -8) << 3,8);
      }
      pbVar49 = pbVar49 + 0x18;
      lVar64 = lVar64 + -1;
    } while (lVar64 != 0);
  }
  if (*(longlong *)*pauStack_240 != 0) {
    apuStack_d10[0] = (undefined8 *)0x1419267bb;
    pub_1406abac0(pbVar31,*(longlong *)*pauStack_240 * 0x18,8);
  }
  apuStack_d10[0] = (undefined8 *)0x1419267d2;
  pub_1406abac0((byte *)pauStack_180,0x140,8);
  pauVar48 = pauStack_178;
  if (pauVar53 != (undefined1 (*) [16])0x0) {
    apuStack_d10[0] = (undefined8 *)0x1419267f3;
    pub_1406abac0((byte *)pauStack_238,(ulonglong)pauVar53,1);
  }
  uVar40 = *(undefined4 *)(*param_10 + 0x114);
  *puStack_5f0 = uStack_22c;
  *(undefined4 *)(lStack_250 + 0x194) = uVar40;
  iVar27 = *(int *)(pauVar54[6] + 8);
  iStack_278 = (int)lStack_168 - iVar27;
  if (lStack_618 == 0) {
    lVar64 = 0;
  }
  else {
    if (iVar27 != -1) {
      uStack_f5 = 1;
      uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
      apuStack_d10[0] = (undefined8 *)0x14192782a;
      pdb_142dc83d0(&UNK_1433599bd,0x73,&UNK_1433599f8);
    }
    lVar64 = lStack_618;
    if (iStack_278 < (int)lStack_618) {
      uStack_5b8 = (undefined1 (*) [16])&lStack_658;
      pauStack_5b0 = (undefined1 (*) [16])pdb_140f72a40;
      pauStack_5a8 = (undefined1 (*) [16])&iStack_278;
      pauStack_5a0 = (undefined1 (*) [16])pdb_140f71c50;
      uStack_f5 = 1;
      uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
      apuStack_d10[0] = (undefined8 *)0x1419268b7;
      pdb_142dc83d0(&UNK_143359a10,&uStack_5b8,&UNK_143359a50);
    }
  }
  *puStack_5d8 = uStack_224;
  pauVar48[6][8] = 1;
  *(int *)(pauVar48[6] + 0xc) = iStack_278 - (int)lVar64;
  puVar39 = *(uint **)(lVar33 + 0xf8);
  lVar64 = *(longlong *)(lVar33 + 0x100);
  puVar2 = puVar39 + lVar64;
  cVar26 = *(char *)(lVar33 + 0x108);
  if (cVar26 == '\0') {
    ppauVar57 = &pauStack_5b0;
    lVar64 = lVar64 << 2;
    do {
      if (lVar64 == 0) {
        pauVar53 = (undefined1 (*) [16])0x0;
        pauVar30 = (undefined1 (*) [16])0x0;
        puVar39 = puVar2;
        goto LAB_141926c00;
      }
      uVar21 = *puVar39;
      puVar39 = puVar39 + 1;
      lVar52 = *(longlong *)(*(longlong *)(lVar55 + 0x100) + 0x58 + (ulonglong)uVar21 * 0xa0);
      lVar64 = lVar64 + -4;
    } while (lVar52 == 0);
    lVar56 = *(longlong *)(lVar55 + 0x100) + (ulonglong)uVar21 * 0xa0;
    uVar42 = (ulonglong)*(uint *)(lVar56 + 0x94);
    lVar64 = *(longlong *)(*(longlong *)(lVar55 + 0x1a0) + 0x18 + uVar42 * 0x48);
    lVar33 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar55 + 0x1a0) + 0x38 + uVar42 * 0x48) +
               *(longlong *)(lVar33 + 0x110) * 8) * 0x30;
    uVar42 = (ulonglong)~*(uint *)(*(longlong *)(lVar56 + 0x50) + 8);
    pauVar53 = (undefined1 (*) [16])(uVar42 * 0x50 + *(longlong *)(lVar64 + 0x10 + lVar33));
    lVar56 = uVar42 * 4;
    pauVar48 = (undefined1 (*) [16])(lVar56 + *(longlong *)(lVar64 + 0x28 + lVar33));
    uStack_5b8 = pauVar53;
    pauStack_5b0 = (undefined1 (*) [16])(*(longlong *)(lVar64 + 0x20 + lVar33) + lVar56);
    ppauVar46 = &pauStack_5a8;
    ppauVar50 = &pauStack_5a0;
    pauVar54 = pauStack_188;
  }
  else {
    ppauVar57 = &pauStack_8b0;
    lVar64 = lVar64 << 2;
    do {
      if (lVar64 == 0) {
        pauVar53 = (undefined1 (*) [16])0x0;
        pauVar30 = (undefined1 (*) [16])0x0;
        puVar39 = puVar2;
        goto LAB_141926bc0;
      }
      uVar21 = *puVar39;
      puVar39 = puVar39 + 1;
      lVar52 = *(longlong *)(*(longlong *)(lVar55 + 0x1a0) + 0x10 + (ulonglong)uVar21 * 0x48);
      lVar64 = lVar64 + -4;
    } while (lVar52 == 0);
    lVar64 = *(longlong *)(lVar55 + 0x1a0) + (ulonglong)uVar21 * 0x48;
    lVar56 = *(longlong *)(lVar64 + 0x18);
    lVar33 = ~*(ulonglong *)(*(longlong *)(lVar64 + 0x38) + *(longlong *)(lVar33 + 0x110) * 8) *
             0x30;
    pauVar48 = *(undefined1 (**) [16])(lVar56 + 0x28 + lVar33);
    pauVar53 = *(undefined1 (**) [16])(lVar56 + 0x10 + lVar33);
    pauStack_8b0 = *(undefined1 (**) [16])(lVar56 + 0x20 + lVar33);
    ppauVar46 = (undefined1 (**) [16])auStack_8a8;
    ppauVar50 = (undefined1 (**) [16])(auStack_8a8 + 8);
    pauStack_8b8 = pauVar53;
  }
  *ppauVar46 = pauVar48;
  *ppauVar50 = pauVar30;
  pauVar30 = ppauVar57[1];
  ppauVar57 = (undefined1 (**) [16])(ulonglong)*(uint *)((longlong)ppauVar57 + 0x14);
  if (cVar26 == '\0') {
    if ((int)lVar52 != 1) goto LAB_14192782d;
LAB_141926c00:
    do {
      uVar40 = SUB84(ppauVar57,0);
      if (puVar39 == puVar2) goto LAB_141926c69;
      uVar21 = *puVar39;
      puVar39 = puVar39 + 1;
    } while (*(longlong *)(*(longlong *)(lVar55 + 0x100) + 0x58 + (ulonglong)uVar21 * 0xa0) == 0);
  }
  else {
    if ((int)lVar52 != 1) {
LAB_14192782d:
      bVar71 = true;
      goto LAB_141926c24;
    }
LAB_141926bc0:
    do {
      uVar40 = SUB84(ppauVar57,0);
      if (puVar39 == puVar2) goto LAB_141926c69;
      uVar21 = *puVar39;
      puVar39 = puVar39 + 1;
    } while (*(longlong *)(*(longlong *)(lVar55 + 0x1a0) + 0x10 + (ulonglong)uVar21 * 0x48) == 0);
  }
  bVar71 = pauVar53 != (undefined1 (*) [16])0x0;
LAB_141926c24:
  uStack_5b8._0_1_ = bVar71;
  uStack_f5 = 1;
  uStack_f6 = 1;
  pauStack_ce8 = (undefined1 (*) [16])&UNK_143359a68;
                    /* WARNING: Subroutine does not return */
  apuStack_d10[0] = (undefined8 *)0x141926c63;
  pdb_142dc8170(&UNK_143359be0,0x2b,&uStack_5b8,&UNK_143359c10);
LAB_141926c69:
  if (pauVar53 == (undefined1 (*) [16])0x0) {
    bVar71 = false;
    goto LAB_141926c24;
  }
  *(undefined4 *)*pauVar30 = uVar40;
  lVar55 = *(longlong *)*pauVar53;
  if ((!SBORROW8(0,lVar55)) && (lVar55 != 0)) {
    apuStack_d10[0] = (undefined8 *)0x141926c99;
    pub_1406abac0(*(byte **)(*pauVar53 + 8),lVar55 * 0x28,4);
  }
  *(longlong **)*pauVar53 = plStack_108;
  *(int **)(*pauVar53 + 8) = piStack_130;
  *(undefined1 (***) [16])pauVar53[1] = ppauStack_248;
  if ((int)lStack_168 == iVar27) {
    *puStack_620 = uStack_264;
    lVar55 = *(longlong *)(lStack_260 + 0x30);
    uVar70 = *(undefined8 *)(lStack_260 + 0x40);
    if (lVar55 == *(longlong *)(lStack_260 + 0x20)) {
      uStack_f5 = 0;
      uStack_f6 = 1;
      apuStack_d10[0] = (undefined8 *)0x141926d03;
      pdb_142d7e8a0(lStack_260 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lStack_260 + 0x28) + lVar55 * 8) = uVar70;
    *(longlong *)(lStack_260 + 0x30) = lVar55 + 1;
    *(longlong *)(lStack_260 + 0x40) = *(longlong *)(lStack_260 + 0x40) + 1;
  }
  uStack_5b8 = *(undefined1 (**) [16])*pauStack_200;
  pauStack_5b0 = *(undefined1 (**) [16])(*pauStack_200 + 8);
  uStack_f5 = 0;
  uStack_f6 = 1;
  apuStack_d10[0] = (undefined8 *)0x141926d4b;
  pdb_140a3cc40(&uStack_5b8);
  uStack_5b8 = *(undefined1 (**) [16])*pauStack_200;
  pauStack_5b0 = *(undefined1 (**) [16])(*pauStack_200 + 8);
  uStack_f5 = 0;
  uStack_f6 = 1;
  apuStack_d10[0] = (undefined8 *)0x141926d80;
  pdb_140a3bf60(&pauStack_ae8,&uStack_5b8);
  uVar70 = *(undefined8 *)pauVar54[1];
  *puStack_5e8 = uStack_228;
  *(undefined8 *)(pauVar54[5] + 8) = uVar70;
  uVar40 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar55 = *param_5;
  puVar7 = (undefined4 *)param_5[2];
  *(undefined8 *)(lVar55 + 0x170) = uVar70;
  *puVar7 = uVar40;
  *(undefined4 *)(lVar55 + 400) = (undefined4)uStack_ad0;
  *(undefined4 *)(lVar55 + 0x194) = 0;
  uStack_588 = *(undefined1 (**) [16])*pauStack_200;
  uStack_580 = *(undefined1 (**) [16])(*pauStack_200 + 8);
  pauStack_5b0 = pauStack_ae8;
  pauStack_5a8 = pauStack_ae0;
  pauStack_5a0 = uStack_ad8;
  uStack_598 = uStack_ad0;
  uStack_590 = pauStack_128;
  uStack_5b8 = (undefined1 (*) [16])0x3;
  uStack_f5 = 0;
  uStack_f6 = 0;
  apuStack_d10[0] = (undefined8 *)0x141926e33;
  pauVar30 = (undefined1 (*) [16])pdb_141a55160(&pauStack_8b8,lVar55,&uStack_5b8);
  pauVar54 = pauStack_1d0;
  if ((int)pauStack_8b8 != 0xb) {
    uStack_588 = auStack_890._8_8_;
    uStack_580 = pauStack_880;
    uStack_598 = pauStack_898;
    uStack_590 = auStack_890._0_8_;
    pauStack_5a8 = auStack_8a8;
    pauStack_5a0 = auStack_8a8._8_8_;
    uStack_5b8 = pauStack_8b8;
    pauStack_5b0 = pauStack_8b0;
    pauStack_ce8 = (undefined1 (*) [16])&UNK_143359a80;
                    /* WARNING: Subroutine does not return */
    apuStack_d10[0] = (undefined8 *)0x14192779c;
    pdb_142dc8170(&UNK_143359be0,0x2b,&uStack_5b8,&UNK_143359bc0);
  }
  if (uStack_1a0 != 0) {
    apuStack_d10[0] = (undefined8 *)0x141926e66;
    pub_1406abac0(pbStack_170,uStack_1a0,1);
    pauVar30 = extraout_RAX_00;
  }
  goto joined_r0x000141926e69;
code_r0x00014192a7dd:
  apuStack_d10[0] = (undefined8 *)0x14192a7e6;
  pub_1406abac0(pbStack_c48,0x143359fbc,(ulonglong)puVar43);
  return extraout_RAX_03;
code_r0x00014192a29d:
                    /* WARNING: Could not recover jumptable at 0x00014192a2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar30 = (undefined1 (*) [16])
             (*(code *)(pbVar31 + *(int *)(pbVar31 + (longlong)pauVar34 * 4)))();
  return pauVar30;
code_r0x00014192ac74:
  apuStack_d10[0] = (undefined8 *)0x14192ac80;
  pdb_140f3f5b0(&pauStack_ca8);
  uVar77 = CONCAT22(auStack_c8a._0_2_,uStack_c8c);
  uVar78 = CONCAT22(uStack_c86,auStack_c8a._2_2_);
  pauVar53 = pauVar44;
  uVar74 = (undefined4)uStack_c98;
  uVar75 = uStack_c98._4_4_;
  uVar76 = uStack_c90;
  uVar79 = uStack_c84;
  uStack_cc0 = (undefined4)uStack_c80;
  uStack_cbc = uStack_c80._4_4_;
  pauVar73 = pauStack_ca8;
  pauStack_ce0 = uStack_ca0;
code_r0x00014192ac8d:
  uStack_cc8 = (undefined1 (*) [16])CONCAT44(uVar79,uVar78);
  uStack_cd8._4_4_ = uVar75;
  uStack_cd8._0_4_ = uVar74;
  uStack_cd0._4_4_ = uVar77;
  uStack_cd0._0_4_ = uVar76;
  pauStack_ca8 = (undefined1 (*) [16])&UNK_1433591b1;
  uStack_ca0 = (undefined1 (*) [16])0xc;
  uStack_c70 = uStack_c70 & 0xffffffffffffff;
  apuStack_d10[0] = (undefined8 *)0x14192acc1;
  pauStack_ce8 = pauVar73;
  uStack_c98 = pauVar53;
  pdb_142de9590(&pauStack_ca8,&pauStack_ce8);
  return (undefined1 (*) [16])0x1;
}

