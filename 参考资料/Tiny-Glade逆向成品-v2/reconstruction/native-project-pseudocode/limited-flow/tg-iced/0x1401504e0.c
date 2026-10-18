// VA 0x1401504e0, PDB extent 6298 bytes
// tg_iced::gui_runner_sdl::run_gui<tg_gpu_selector::gpu_selection::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_iced::gui_runner_sdl::run_gui<tg_gpu_selector::gpu_selection::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
   Extent: 6298 */

undefined8 *
pdb_1401504e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffff868;
  undefined1 auStack_758 [144];
  int iStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined8 uStack_6b8;
  char acStack_4c8 [40];
  byte abStack_4a0 [96];
  undefined1 auStack_440 [144];
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong lStack_388;
  byte bStack_348;
  char acStack_340 [40];
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  int iStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  int iStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined4 uStack_268;
  float fStack_264;
  float fStack_260;
  undefined8 auStack_1e0 [3];
  undefined2 uStack_1c8;
  undefined1 uStack_1c6;
  undefined8 uStack_1c0;
  byte *pbStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int aiStack_104 [3];
  undefined8 *puStack_f8;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  ulonglong uStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong alStack_98 [2];
  undefined1 uStack_81;
  undefined8 *puStack_80;
  undefined1 uStack_73;
  byte abStack_72 [2];
  byte *pbStack_70;
  undefined1 uStack_66;
  undefined1 uStack_65;
  byte abStack_64 [3];
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff868 >> 0x20);
  uStack_60 = 0xfffffffffffffffe;
  uVar7 = param_2;
  puStack_f8 = param_1;
  uStack_c0 = param_3;
  pub_142e32760(auStack_758,param_2,0x90);
  iVar9 = (int)uVar7;
  abStack_64[1] = 1;
  iStack_b8 = pdb_1406d1900(param_4);
  abStack_64[1] = 1;
  iStack_b4 = iVar9;
  pdb_1406eab50(&uStack_318,iStack_b8,iVar9,(int)_DAT_142e33008);
  aiStack_104[0] = 0;
  alStack_98[0] = 0;
  uStack_61 = 1;
  pdb_1406d1670(&iStack_6c8,param_4);
  if (iStack_6c8 == 0xf) {
    auStack_440[0] = (undefined1)uStack_6c4;
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e4ab98,0x2b,auStack_440,&UNK_142e4ab78,&UNK_142e4b130);
  }
  uStack_2a8 = uStack_6b8;
  iStack_2b8 = iStack_6c8;
  uStack_2b4 = uStack_6c4;
  uStack_2b0 = uStack_6c0;
  uStack_2ac = uStack_6bc;
  uStack_61 = 1;
  pdb_1406d1720(&iStack_6c8,param_4);
  if (iStack_6c8 == 0xc) {
    auStack_440[0] = (undefined1)uStack_6c4;
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e4ab98,0x2b,auStack_440,&UNK_142e4ab78,&UNK_142e4b148);
  }
  uStack_288 = uStack_6b8;
  iStack_298 = iStack_6c8;
  uStack_294 = uStack_6c4;
  uStack_290 = uStack_6c0;
  uStack_28c = uStack_6bc;
  iStack_280 = iStack_2b8;
  uStack_27c = uStack_2b4;
  uStack_278 = uStack_2b0;
  uStack_274 = uStack_2ac;
  uStack_270 = uStack_2a8;
  pdb_14007ee60();
  pbStack_1b8 = pub_1406abab0(0x30,8);
  if (pbStack_1b8 == (byte *)0x0) {
    uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  *(undefined4 *)(pbStack_1b8 + 0x20) = uStack_278;
  *(undefined4 *)(pbStack_1b8 + 0x24) = uStack_274;
  *(undefined4 *)(pbStack_1b8 + 0x28) = (undefined4)uStack_270;
  *(undefined4 *)(pbStack_1b8 + 0x2c) = uStack_270._4_4_;
  *(undefined4 *)(pbStack_1b8 + 0x10) = (undefined4)uStack_288;
  *(undefined4 *)(pbStack_1b8 + 0x14) = uStack_288._4_4_;
  *(int *)(pbStack_1b8 + 0x18) = iStack_280;
  *(undefined4 *)(pbStack_1b8 + 0x1c) = uStack_27c;
  *(int *)pbStack_1b8 = iStack_298;
  *(undefined4 *)(pbStack_1b8 + 4) = uStack_294;
  *(undefined4 *)(pbStack_1b8 + 8) = uStack_290;
  *(undefined4 *)(pbStack_1b8 + 0xc) = uStack_28c;
  uStack_1c0 = 0x41800000;
  puStack_1b0 = (undefined8 *)&UNK_142e672c0;
  uStack_1c8 = 0x300;
  uStack_1c6 = 4;
  auStack_1e0[0] = 2;
  uStack_65 = 1;
  pdb_1406d45a0(&iStack_6c8,auStack_1e0);
  uStack_66 = 1;
  pdb_1402afc00(abStack_4a0,auStack_1e0,&iStack_298,iStack_b8,CONCAT44(uVar14,iStack_b4));
  pbVar10 = (byte *)&uStack_1a8;
  pub_142e32760(pbVar10,param_2,0x90);
  pdb_140528410(auStack_440,pbVar10,(undefined4)uStack_2d0,uStack_2d0._4_4_,&iStack_6c8,&uStack_81);
  lStack_a8 = 0;
  pdb_1406d18f0(param_4);
  abStack_64[0] = 0;
  abStack_72[0] = 1;
  uVar14 = (undefined4)_DAT_142e33008;
  uStack_b0 = 0;
  iStack_c8 = 0;
  iStack_c4 = 0;
  bVar12 = true;
  while( true ) {
    if ((abStack_72[0] & 1) == 0) {
      *puStack_f8 = 2;
      puStack_f8[1] = pbVar10;
      if (0x14 < (uint)lStack_a8) {
        LOCK();
        *plStack_a0 = *plStack_a0 + -1;
        UNLOCK();
        if (*plStack_a0 == 0) {
          pdb_1406cd7d0(&plStack_a0);
        }
      }
      pdb_14049a690(auStack_440);
      uStack_66 = 0;
      pdb_1404c94d0(abStack_4a0);
      uStack_65 = 0;
      pdb_1404ddd40(&iStack_6c8);
      pbStack_70 = pbStack_1b8;
      puStack_80 = puStack_1b0;
      if ((code *)*puStack_1b0 != (code *)0x0) {
        (*(code *)*puStack_1b0)(pbStack_1b8);
      }
      if (puStack_80[1] != 0) {
        pub_1406abac0(pbStack_70,puStack_80[1],puStack_80[2]);
      }
      if (alStack_98[0] != 0) {
        abStack_64[1] = 0;
        pdb_1406d1b70(alStack_98);
      }
      return puStack_f8;
    }
    if (!bVar12) {
      uStack_1a8 = abStack_72;
      uStack_1a0 = abStack_64;
      uStack_198 = &iStack_b8;
      uStack_190 = aiStack_104;
      uStack_188 = auStack_440;
      pdb_1406d07b0(acStack_340,uStack_c0,5);
      if (acStack_340[0] != '\v') {
        pdb_1401501f0(&uStack_1a8,acStack_340);
      }
      uVar7 = pdb_1406d0830(uStack_c0);
      uStack_268 = (undefined4)uVar7;
      fStack_264 = (float)((ulonglong)uVar7 >> 0x20);
      while (pbVar10 = (byte *)&uStack_268, pdb_1406d0de0(), acStack_4c8[0] != '\v') {
        pdb_1401501f0(&uStack_1a8,acStack_4c8);
      }
    }
    iVar4 = iStack_b4;
    iVar9 = iStack_b8;
    bVar12 = iStack_b8 != 0;
    bVar13 = iStack_b4 != 0;
    if ((bVar13 && bVar12) && (iStack_c8 != iStack_b4 || iStack_c4 != iStack_b8)) {
      pdb_1406eab50(&uStack_1a8,iStack_b8,iStack_b4,uVar14);
      uStack_2c8 = uStack_158;
      uStack_2c0 = uStack_150;
      uStack_2d8 = uStack_168;
      uStack_2d0 = uStack_160;
      uStack_2e8 = (undefined4)uStack_178;
      uStack_2e4 = uStack_178._4_4_;
      uStack_2e0 = uStack_170;
      uStack_2dc = uStack_16c;
      uStack_2f8 = (undefined4)uStack_188;
      uStack_2f4 = uStack_188._4_4_;
      uStack_2f0 = uStack_180;
      uStack_2ec = uStack_17c;
      uStack_308 = (undefined4)uStack_198;
      uStack_304 = uStack_198._4_4_;
      uStack_300 = (undefined4)uStack_190;
      uStack_2fc = uStack_190._4_4_;
      uStack_318 = (undefined4)uStack_1a8;
      uStack_314 = uStack_1a8._4_4_;
      uStack_310 = (undefined4)uStack_1a0;
      uStack_30c = uStack_1a0._4_4_;
      pbVar10 = abStack_4a0;
      pdb_1406d4750(auStack_1e0,pbVar10,iVar9,iVar4);
      abStack_64[0] = 1;
      iStack_c8 = iVar4;
      iStack_c4 = iVar9;
    }
    if (abStack_64[0] != 0) {
      uStack_198 = (int *)pdb_140f3c9d0();
      lVar3 = lStack_3a0;
      uStack_178 = (byte *)0x0;
      uStack_1a0 = (byte *)CONCAT44(uStack_1a0._4_4_,4);
      uStack_190 = (int *)CONCAT44(uStack_190._4_4_,(int)pbVar10);
      uStack_1a8 = (byte *)CONCAT71(uStack_1a8._1_7_,4);
      if (lStack_3a0 == lStack_3b0) {
        pdb_142d7f080(&lStack_3b0);
      }
      lVar8 = lVar3 * 0x38;
      *(byte **)(lStack_3a8 + 0x30 + lVar8) = uStack_178;
      plVar2 = (longlong *)(lStack_3a8 + 0x20 + lVar8);
      *plVar2 = (longlong)uStack_188;
      plVar2[1] = CONCAT44(uStack_17c,uStack_180);
      plVar2 = (longlong *)(lStack_3a8 + 0x10 + lVar8);
      *plVar2 = (longlong)uStack_198;
      plVar2[1] = (longlong)uStack_190;
      puVar1 = (undefined4 *)(lStack_3a8 + lVar8);
      *puVar1 = (undefined4)uStack_1a8;
      puVar1[1] = uStack_1a8._4_4_;
      puVar1[2] = (undefined4)uStack_1a0;
      puVar1[3] = uStack_1a0._4_4_;
      lStack_3a0 = lVar3 + 1;
      pbVar10 = uStack_178;
    }
    if ((bVar13 && bVar12) && (lStack_388 != 0 || lStack_3a0 != 0)) break;
    uVar11 = (ulonglong)bStack_348;
    uVar5 = uStack_b0;
    if (bStack_348 != (byte)uStack_b0) {
      pdb_1406d0e60(&uStack_1a8,*(undefined4 *)(&UNK_142e4b320 + (ulonglong)bStack_348 * 4));
      pbVar10 = uStack_1a8;
      uVar5 = uVar11;
      if (SBORROW8(0,(longlong)uStack_1a8)) {
        uStack_268 = SUB84(uStack_1a0,0);
        fStack_264 = (float)((ulonglong)uStack_1a0 >> 0x20);
        uStack_73 = 1;
        pdb_1406d0ec0();
        pbStack_70 = (byte *)CONCAT44(fStack_264,uStack_268);
        if (alStack_98[0] != 0) {
          pdb_1406d1b70();
        }
        alStack_98[0] = (longlong)pbStack_70;
      }
      else if (uStack_1a8 != (byte *)0x0) {
        pub_1406abac0(uStack_1a0,(ulonglong)uStack_1a8,1);
      }
    }
    uStack_b0 = uVar5;
    bVar12 = false;
  }
  if (aiStack_104[0] != 1) {
    uStack_268 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140150a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)
             (*(code *)(&UNK_142e4b454 + *(int *)(&UNK_142e4b454 + lStack_a8 * 4)))
                       (&UNK_142e4b454 + *(int *)(&UNK_142e4b454 + lStack_a8 * 4),&UNK_142e4b454,
                        (undefined4)uStack_2d0,uStack_2d0._4_4_);
    return puVar6;
  }
  fStack_264 = (float)(int)aiStack_104._4_8_;
  fStack_260 = (float)SUB84(aiStack_104._4_8_,4);
  uStack_268 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001401509a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (undefined8 *)
           (*(code *)(&UNK_142e4b454 + *(int *)(&UNK_142e4b454 + lStack_a8 * 4)))
                     (&UNK_142e4b454 + *(int *)(&UNK_142e4b454 + lStack_a8 * 4));
  return puVar6;
}

