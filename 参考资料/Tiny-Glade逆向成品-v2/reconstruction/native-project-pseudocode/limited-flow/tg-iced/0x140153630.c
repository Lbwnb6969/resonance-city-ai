// VA 0x140153630, PDB extent 6109 bytes
// tg_iced::gui_runner_winit::run_gui<tg_gpu_selector::gpu_selection::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_iced::gui_runner_winit::run_gui<tg_gpu_selector::gpu_selection::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
   Extent: 6109 */

undefined8 *
pdb_140153630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 in_stack_fffffffffffff8b8;
  undefined1 auStack_708 [144];
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 auStack_478 [96];
  undefined1 auStack_418 [144];
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_360;
  undefined1 auStack_318 [72];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a0 [6];
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  longlong alStack_208 [3];
  undefined8 uStack_1f0;
  undefined8 auStack_1e8 [3];
  undefined2 uStack_1d0;
  undefined1 uStack_1ce;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  char *pcStack_170;
  undefined8 *puStack_168;
  undefined4 *puStack_160;
  longlong *plStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  longlong *plStack_138;
  undefined4 *puStack_130;
  undefined4 uStack_dc;
  byte *pbStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong *aplStack_a8 [2];
  longlong *plStack_98;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  char cStack_8a;
  char cStack_89;
  undefined8 *puStack_88;
  byte *pbStack_80;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffff8b8 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_c8 = param_1;
  pub_142e32760(auStack_708,param_2,0x90);
  auStack_2a0[0] = 0;
  uStack_2b0 = 0;
  uStack_678 = (longlong *)0x0;
  uStack_670 = 0;
  uVar10 = 0;
  plStack_98 = param_4;
  iVar7 = GetClientRect(param_4[3]);
  if (iVar7 == 0) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142e4abe8,0xcb,&UNK_142e4acb0);
  }
  uVar12 = (int)uStack_670 - (int)uStack_678;
  iVar7 = uStack_670._4_4_ - uStack_678._4_4_;
  uStack_71 = 1;
  uStack_b8 = param_3;
  pcVar8 = (char *)pdb_140744c40();
  uVar3 = *(undefined8 *)(pcVar8 + 0xc0);
  if (((uVar10 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    uStack_71 = 1;
    cVar6 = pdb_142dc79e0();
    if (cVar6 == '\0') {
      pcVar8[1] = '\x01';
    }
  }
  LOCK();
  cVar6 = *pcVar8;
  *pcVar8 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    uStack_71 = 1;
    pdb_142dc6ca0(pcVar8);
  }
  uStack_71 = 1;
  puVar9 = (undefined8 *)(ulonglong)uVar12;
  uStack_1b0 = uVar3;
  pdb_1406eab50(auStack_318,puVar9,iVar7);
  alStack_208[0] = 0;
  uStack_8c = 0;
  uStack_dc = 0;
  uStack_71 = 1;
  pbStack_d8 = (byte *)pdb_1406d4300(plStack_98 + 2);
  pbStack_80 = (byte *)plStack_98;
  LOCK();
  lVar4 = *plStack_98;
  *plStack_98 = *plStack_98 + 1;
  UNLOCK();
  puStack_d0 = puVar9;
  if (*plStack_98 != 0 && SCARRY8(lVar4,1) == *plStack_98 < 0) {
    uStack_678 = plStack_98;
    pdb_14007ee60();
    pbStack_1c0 = pub_1406abab0(8,8);
    if (pbStack_1c0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(byte **)pbStack_1c0 = pbStack_80;
    uStack_1c8 = 0x41800000;
    puStack_1b8 = (undefined8 *)&UNK_142e673e8;
    uStack_1d0 = 0x300;
    uStack_1ce = 4;
    auStack_1e8[0] = 2;
    uStack_74 = 1;
    pdb_1406d45a0(&uStack_678,auStack_1e8);
    LOCK();
    lVar4 = *plStack_98;
    *plStack_98 = *plStack_98 + 1;
    UNLOCK();
    if (*plStack_98 != 0 && SCARRY8(lVar4,1) == *plStack_98 < 0) {
      uStack_75 = 1;
      pdb_1402afe40(auStack_478,auStack_1e8,plStack_98,uVar12,CONCAT44(uVar13,iVar7));
      uStack_1f0 = 0;
      pub_142e32760(&uStack_1a8,auStack_708,0x90);
      pdb_140528410(auStack_418,&uStack_1a8,uStack_2d0,uStack_2cc,&uStack_678,&uStack_8b);
      lStack_b0 = 0;
      uStack_1a8 = (longlong *)plStack_98[2];
      uStack_1a0 = (longlong **)plStack_98[3];
      LOCK();
      lVar4 = *uStack_1a8;
      *uStack_1a8 = *uStack_1a8 + 1;
      UNLOCK();
      if (*uStack_1a8 != 0 && SCARRY8(lVar4,1) == *uStack_1a8 < 0) {
        puStack_198 = (undefined1 *)CONCAT71(puStack_198._1_7_,1);
        puVar9 = &uStack_1a8;
        pdb_14010d1a0(plStack_98 + 4);
        cStack_89 = '\0';
        cStack_8a = '\0';
        while( true ) {
          uVar13 = SUB84(puVar9,0);
          if (cStack_89 != '\0') {
            puStack_198 = (undefined1 *)pdb_140f3c9d0();
            lVar4 = lStack_378;
            puStack_178 = (undefined1 *)0x0;
            uStack_1a0 = (longlong **)CONCAT44(uStack_1a0._4_4_,4);
            puStack_190 = (undefined8 *)CONCAT44(puStack_190._4_4_,uVar13);
            uStack_1a8 = (longlong *)CONCAT71(uStack_1a8._1_7_,4);
            if (lStack_378 == lStack_388) {
              pdb_142d7f080(&lStack_388);
            }
            lVar11 = lVar4 * 0x38;
            *(undefined1 **)(lStack_380 + 0x30 + lVar11) = puStack_178;
            plVar2 = (longlong *)(lStack_380 + 0x20 + lVar11);
            *plVar2 = (longlong)puStack_188;
            plVar2[1] = (longlong)puStack_180;
            plVar2 = (longlong *)(lStack_380 + 0x10 + lVar11);
            *plVar2 = (longlong)puStack_198;
            plVar2[1] = (longlong)puStack_190;
            puVar1 = (undefined4 *)(lStack_380 + lVar11);
            *puVar1 = (undefined4)uStack_1a8;
            puVar1[1] = uStack_1a8._4_4_;
            puVar1[2] = (undefined4)uStack_1a0;
            puVar1[3] = uStack_1a0._4_4_;
            lStack_378 = lVar4 + 1;
          }
          if ((cStack_8a == '\0') && (lStack_360 != 0 || lStack_378 != 0)) break;
          puVar9 = (undefined8 *)0x4c4b40;
          pdb_140f502d0(0);
          uStack_1a8 = (longlong *)&cStack_89;
          uStack_1a0 = &plStack_98;
          puStack_198 = auStack_318;
          puStack_190 = &uStack_1b0;
          puStack_188 = &uStack_1f0;
          puStack_180 = auStack_1e8;
          puStack_178 = auStack_478;
          pcStack_170 = &cStack_8a;
          puStack_168 = &uStack_678;
          puStack_160 = auStack_2a0;
          plStack_158 = &lStack_b0;
          puStack_150 = &uStack_8b;
          puStack_148 = auStack_418;
          puStack_140 = &uStack_8c;
          plStack_138 = alStack_208;
          puStack_130 = &uStack_dc;
          uVar10 = pdb_14010a8d0();
          if ((uVar10 & 1) != 0) {
            *puStack_c8 = 2;
            puStack_c8[1] = puVar9;
            if (0x14 < (uint)lStack_b0) {
              LOCK();
              *aplStack_a8[0] = *aplStack_a8[0] + -1;
              UNLOCK();
              if (*aplStack_a8[0] == 0) {
                pdb_1406cd7d0(aplStack_a8);
              }
            }
            pdb_14049a690(auStack_418);
            uStack_75 = 0;
            pdb_1404c94d0(auStack_478);
            uStack_74 = 0;
            pdb_1404ddd40(&uStack_678);
            pbStack_80 = pbStack_1c0;
            puStack_88 = puStack_1b8;
            if ((code *)*puStack_1b8 != (code *)0x0) {
              (*(code *)*puStack_1b8)(pbStack_1c0);
            }
            if (puStack_88[1] != 0) {
              pub_1406abac0(pbStack_80,puStack_88[1],puStack_88[2]);
            }
            pbStack_80 = pbStack_d8;
            if (pbStack_d8 != (byte *)0x0) {
              puStack_88 = puStack_d0;
              if ((code *)*puStack_d0 != (code *)0x0) {
                (*(code *)*puStack_d0)(pbStack_d8);
              }
              if (puStack_88[1] != 0) {
                pub_1406abac0(pbStack_80,puStack_88[1],puStack_88[2]);
              }
            }
            LOCK();
            *plStack_98 = *plStack_98 + -1;
            UNLOCK();
            if (*plStack_98 == 0) {
              uStack_76 = 0;
              pdb_1406cd740(&plStack_98);
            }
            return puStack_c8;
          }
        }
        if (alStack_208[0] == 1) {
          uVar13 = (undefined4)alStack_208[2];
          uStack_284 = pdb_1406d3d50((int)alStack_208[1],uVar13,(int)uStack_2c8);
          uStack_288 = 0;
          uStack_280 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x000140153a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar9 = (undefined8 *)
                   (*(code *)(&UNK_142e4b55c + *(int *)(&UNK_142e4b55c + lStack_b0 * 4)))
                             (&UNK_142e4b55c + *(int *)(&UNK_142e4b55c + lStack_b0 * 4));
          return puVar9;
        }
        uStack_288 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140153a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar9 = (undefined8 *)
                 (*(code *)(&UNK_142e4b55c + *(int *)(&UNK_142e4b55c + lStack_b0 * 4)))
                           (&UNK_142e4b55c + *(int *)(&UNK_142e4b55c + lStack_b0 * 4));
        return puVar9;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

