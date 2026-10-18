// VA 0x140fc3230, PDB extent 6141 bytes
// tg_iced::gui_runner_winit::run_gui<tg_integrity_report::controls::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_iced::gui_runner_winit::run_gui<tg_integrity_report::controls::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
   Extent: 6141 */

undefined8 pdb_140fc3230(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong **pplVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffff928;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 auStack_498 [96];
  longlong lStack_438;
  longlong lStack_430;
  longlong lStack_428;
  longlong lStack_410;
  undefined1 auStack_378 [72];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_310;
  undefined4 auStack_300 [6];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 *puStack_2a8;
  undefined4 *puStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  longlong alStack_218 [3];
  undefined8 uStack_200;
  undefined8 auStack_1f8 [3];
  undefined2 uStack_1e0;
  undefined1 uStack_1de;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 auStack_1c0 [7];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined1 *puStack_158;
  char *pcStack_150;
  undefined8 *puStack_148;
  undefined4 *puStack_140;
  longlong *plStack_138;
  undefined1 *puStack_130;
  longlong *plStack_128;
  undefined1 *puStack_120;
  longlong *plStack_118;
  undefined4 *puStack_110;
  undefined4 uStack_e4;
  byte *pbStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_c8;
  longlong lStack_b8;
  longlong *aplStack_b0 [2];
  longlong *plStack_a0;
  undefined1 uStack_91;
  undefined8 *puStack_90;
  undefined1 uStack_83;
  char cStack_82;
  char cStack_81;
  byte *pbStack_80;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff928 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_2a8 = (undefined8 *)param_1[8];
  puStack_2a0 = (undefined4 *)param_1[9];
  uStack_2e8 = *param_1;
  uStack_2e0 = param_1[1];
  uStack_2d8 = *(undefined4 *)(param_1 + 2);
  uStack_2d4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_2d0 = *(undefined4 *)(param_1 + 3);
  uStack_2cc = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_2c8 = *(undefined4 *)(param_1 + 4);
  uStack_2c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_2c0 = *(undefined4 *)(param_1 + 5);
  uStack_2bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_2b8 = *(undefined4 *)(param_1 + 6);
  uStack_2b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_2b0 = *(undefined4 *)(param_1 + 7);
  uStack_2ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  auStack_300[0] = 0;
  uStack_310 = 0;
  uStack_698 = (longlong *)0x0;
  uStack_690 = 0;
  uVar10 = 0;
  uStack_c8 = param_2;
  plStack_a0 = param_3;
  iVar7 = GetClientRect(param_3[3]);
  if (iVar7 == 0) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14326a120,0xcb,&UNK_14326a1e8);
  }
  uVar13 = (int)uStack_690 - (int)uStack_698;
  iVar7 = uStack_690._4_4_ - uStack_698._4_4_;
  uStack_71 = 1;
  pcVar8 = (char *)pdb_140744c40();
  uVar9 = *(undefined8 *)(pcVar8 + 0xc0);
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
  puVar12 = (undefined8 *)(ulonglong)uVar13;
  auStack_1c0[0] = uVar9;
  pdb_1406eab50(auStack_378,puVar12,iVar7);
  alStack_218[0] = 0;
  uStack_91 = 0;
  uStack_e4 = 0;
  uStack_71 = 1;
  pbStack_e0 = (byte *)pdb_1406d4300(plStack_a0 + 2);
  pbStack_80 = (byte *)plStack_a0;
  LOCK();
  lVar2 = *plStack_a0;
  *plStack_a0 = *plStack_a0 + 1;
  UNLOCK();
  puStack_d8 = puVar12;
  if (*plStack_a0 != 0 && SCARRY8(lVar2,1) == *plStack_a0 < 0) {
    uStack_698 = plStack_a0;
    pdb_14007ee60();
    pbStack_1d0 = pub_1406abab0(8,8);
    if (pbStack_1d0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(byte **)pbStack_1d0 = pbStack_80;
    uStack_1d8 = 0x41800000;
    puStack_1c8 = (undefined8 *)&UNK_143428170;
    uStack_1e0 = 0x300;
    uStack_1de = 4;
    auStack_1f8[0] = 2;
    uStack_73 = 1;
    pdb_1406d45a0(&uStack_698,auStack_1f8);
    LOCK();
    lVar2 = *plStack_a0;
    *plStack_a0 = *plStack_a0 + 1;
    UNLOCK();
    if (*plStack_a0 != 0 && SCARRY8(lVar2,1) == *plStack_a0 < 0) {
      uStack_74 = 1;
      pdb_141f014f0(auStack_498,auStack_1f8,plStack_a0,uVar13,CONCAT44(uVar14,iVar7));
      uStack_200 = 0;
      puStack_148 = puStack_2a8;
      puStack_140 = puStack_2a0;
      puStack_168 = (undefined8 *)CONCAT44(uStack_2c4,uStack_2c8);
      puStack_160 = (undefined8 *)CONCAT44(uStack_2bc,uStack_2c0);
      puStack_158 = (undefined1 *)CONCAT44(uStack_2b4,uStack_2b8);
      pcStack_150 = (char *)CONCAT44(uStack_2ac,uStack_2b0);
      uStack_178 = (undefined1 *)CONCAT44(uStack_2d4,uStack_2d8);
      uStack_170 = (undefined8 *)CONCAT44(uStack_2cc,uStack_2d0);
      uStack_188 = (longlong *)uStack_2e8;
      uStack_180 = (longlong **)uStack_2e0;
      pdb_141f03810(&lStack_438,&uStack_188,uStack_330,uStack_32c,&uStack_698,&uStack_83);
      lStack_b8 = 0;
      plVar3 = (longlong *)plStack_a0[2];
      pplVar4 = (longlong **)plStack_a0[3];
      LOCK();
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (*plVar3 != 0 && SCARRY8(lVar2,1) == *plVar3 < 0) {
        uStack_178 = (undefined1 *)CONCAT71(uStack_178._1_7_,1);
        puVar12 = &uStack_188;
        uStack_188 = plVar3;
        uStack_180 = pplVar4;
        pdb_141f04f50(plStack_a0 + 4);
        cStack_81 = '\0';
        cStack_82 = '\0';
        while( true ) {
          uVar14 = SUB84(puVar12,0);
          if (cStack_81 != '\0') {
            uStack_178 = (undefined1 *)pdb_140f3c9d0();
            lVar2 = lStack_428;
            puStack_158 = (undefined1 *)0x0;
            uStack_180 = (longlong **)CONCAT44(uStack_180._4_4_,4);
            uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,uVar14);
            uStack_188 = (longlong *)CONCAT71(uStack_188._1_7_,4);
            if (lStack_428 == lStack_438) {
              pdb_142d7f080(&lStack_438);
            }
            lVar11 = lVar2 * 0x38;
            *(undefined1 **)(lStack_430 + 0x30 + lVar11) = puStack_158;
            plVar3 = (longlong *)(lStack_430 + 0x20 + lVar11);
            *plVar3 = (longlong)puStack_168;
            plVar3[1] = (longlong)puStack_160;
            plVar3 = (longlong *)(lStack_430 + 0x10 + lVar11);
            *plVar3 = (longlong)uStack_178;
            plVar3[1] = (longlong)uStack_170;
            puVar1 = (undefined4 *)(lStack_430 + lVar11);
            *puVar1 = (undefined4)uStack_188;
            puVar1[1] = uStack_188._4_4_;
            puVar1[2] = (undefined4)uStack_180;
            puVar1[3] = uStack_180._4_4_;
            lStack_428 = lVar2 + 1;
          }
          if ((cStack_82 == '\0') && (lStack_410 != 0 || lStack_428 != 0)) break;
          puVar12 = (undefined8 *)0x4c4b40;
          pdb_140f502d0(0);
          uStack_188 = (longlong *)&cStack_81;
          uStack_180 = &plStack_a0;
          uStack_178 = auStack_378;
          uStack_170 = auStack_1c0;
          puStack_168 = &uStack_200;
          puStack_160 = auStack_1f8;
          puStack_158 = auStack_498;
          pcStack_150 = &cStack_82;
          puStack_148 = &uStack_698;
          puStack_140 = auStack_300;
          plStack_138 = &lStack_b8;
          puStack_130 = &uStack_83;
          puStack_120 = &uStack_91;
          plStack_118 = alStack_218;
          puStack_110 = &uStack_e4;
          plStack_128 = &lStack_438;
          uVar10 = pdb_141f04870();
          if ((uVar10 & 1) != 0) {
            if (0x14 < (uint)lStack_b8) {
              LOCK();
              *aplStack_b0[0] = *aplStack_b0[0] + -1;
              UNLOCK();
              if (*aplStack_b0[0] == 0) {
                pdb_1406cd7d0(aplStack_b0);
              }
            }
            pdb_141ef8f60(&lStack_438);
            uStack_74 = 0;
            pdb_141efa600(auStack_498);
            uStack_73 = 0;
            pdb_141efa6d0(&uStack_698);
            pbStack_80 = pbStack_1d0;
            puStack_90 = puStack_1c8;
            if ((code *)*puStack_1c8 != (code *)0x0) {
              (*(code *)*puStack_1c8)(pbStack_1d0);
            }
            if (puStack_90[1] != 0) {
              pub_1406abac0(pbStack_80,puStack_90[1],puStack_90[2]);
            }
            pbStack_80 = pbStack_e0;
            if (pbStack_e0 != (byte *)0x0) {
              puStack_90 = puStack_d8;
              if ((code *)*puStack_d8 != (code *)0x0) {
                (*(code *)*puStack_d8)(pbStack_e0);
              }
              if (puStack_90[1] != 0) {
                pub_1406abac0(pbStack_80,puStack_90[1],puStack_90[2]);
              }
            }
            LOCK();
            *plStack_a0 = *plStack_a0 + -1;
            UNLOCK();
            if (*plStack_a0 == 0) {
              uStack_75 = 0;
              pdb_1406cd740(&plStack_a0);
            }
            return 0;
          }
        }
        if (alStack_218[0] == 1) {
          uVar14 = (undefined4)alStack_218[2];
          uStack_294 = pdb_1406d3d50((int)alStack_218[1],uVar14,(int)uStack_328);
          uStack_298 = 0;
          uStack_290 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x000140fc3696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*(code *)(&UNK_14326a298 + *(int *)(&UNK_14326a298 + lStack_b8 * 4)))
                            (&UNK_14326a298 + *(int *)(&UNK_14326a298 + lStack_b8 * 4));
          return uVar9;
        }
        uStack_298 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140fc36bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*(code *)(&UNK_14326a298 + *(int *)(&UNK_14326a298 + lStack_b8 * 4)))
                          (&UNK_14326a298 + *(int *)(&UNK_14326a298 + lStack_b8 * 4));
        return uVar9;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

