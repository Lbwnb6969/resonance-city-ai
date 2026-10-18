// VA 0x141008d40, PDB extent 6173 bytes
// tg_iced::gui_runner_winit::run_gui<tg_iced::dialog::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_iced::gui_runner_winit::run_gui<tg_iced::dialog::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
   Extent: 6173 */

undefined1 *
pdb_141008d40(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 in_stack_fffffffffffff938;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 auStack_488 [96];
  undefined1 auStack_428 [72];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [72];
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_330;
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
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  longlong *plStack_118;
  undefined4 *puStack_110;
  undefined4 uStack_ec;
  byte *pbStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
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
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffff938 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_2a8 = (undefined8 *)param_2[8];
  uStack_2e8 = *param_2;
  uStack_2e0 = param_2[1];
  uStack_2d8 = *(undefined4 *)(param_2 + 2);
  uStack_2d4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_2d0 = *(undefined4 *)(param_2 + 3);
  uStack_2cc = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_2c8 = *(undefined4 *)(param_2 + 4);
  uStack_2c4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_2c0 = *(undefined4 *)(param_2 + 5);
  uStack_2bc = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_2b8 = *(undefined4 *)(param_2 + 6);
  uStack_2b4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_2b0 = *(undefined4 *)(param_2 + 7);
  uStack_2ac = *(undefined4 *)((longlong)param_2 + 0x3c);
  auStack_3b8[0] = 0;
  uStack_3c8 = 0;
  uStack_688 = (longlong *)0x0;
  uStack_680 = 0;
  uVar11 = 0;
  puStack_d8 = param_1;
  plStack_a0 = param_4;
  iVar8 = GetClientRect(param_4[3]);
  if (iVar8 == 0) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143272804,0xcb,&UNK_1432728d0);
  }
  uVar14 = (int)uStack_680 - (int)uStack_688;
  iVar8 = uStack_680._4_4_ - uStack_688._4_4_;
  uStack_71 = 1;
  pcVar9 = (char *)pdb_140744c40();
  uVar2 = *(undefined8 *)(pcVar9 + 0xc0);
  if (((uVar11 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    uStack_71 = 1;
    cVar7 = pdb_142dc79e0();
    if (cVar7 == '\0') {
      pcVar9[1] = '\x01';
    }
  }
  LOCK();
  cVar7 = *pcVar9;
  *pcVar9 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    uStack_71 = 1;
    pdb_142dc6ca0(pcVar9);
  }
  uStack_71 = 1;
  puVar13 = (undefined8 *)(ulonglong)uVar14;
  auStack_1c0[0] = uVar2;
  pdb_1406eab50(auStack_428,puVar13,iVar8);
  alStack_218[0] = 0;
  uStack_91 = 0;
  uStack_ec = 0;
  uStack_71 = 1;
  pbStack_e8 = (byte *)pdb_1406d4300(plStack_a0 + 2);
  pbStack_80 = (byte *)plStack_a0;
  LOCK();
  lVar3 = *plStack_a0;
  *plStack_a0 = *plStack_a0 + 1;
  UNLOCK();
  puStack_e0 = puVar13;
  if (*plStack_a0 != 0 && SCARRY8(lVar3,1) == *plStack_a0 < 0) {
    uStack_688 = plStack_a0;
    pdb_14007ee60();
    pbStack_1d0 = pub_1406abab0(8,8);
    if (pbStack_1d0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(byte **)pbStack_1d0 = pbStack_80;
    uStack_1d8 = 0x41800000;
    puStack_1c8 = (undefined8 *)&UNK_143438948;
    uStack_1e0 = 0x300;
    uStack_1de = 4;
    auStack_1f8[0] = 2;
    uStack_73 = 1;
    pdb_1406d45a0(&uStack_688,auStack_1f8);
    LOCK();
    lVar3 = *plStack_a0;
    *plStack_a0 = *plStack_a0 + 1;
    UNLOCK();
    if (*plStack_a0 != 0 && SCARRY8(lVar3,1) == *plStack_a0 < 0) {
      uStack_74 = 1;
      pdb_141f7dcb0(auStack_488,auStack_1f8,plStack_a0,uVar14,CONCAT44(uVar15,iVar8));
      uStack_200 = 0;
      puStack_148 = puStack_2a8;
      puStack_168 = (undefined8 *)CONCAT44(uStack_2c4,uStack_2c8);
      puStack_160 = (undefined8 *)CONCAT44(uStack_2bc,uStack_2c0);
      puStack_158 = (undefined1 *)CONCAT44(uStack_2b4,uStack_2b8);
      pcStack_150 = (char *)CONCAT44(uStack_2ac,uStack_2b0);
      uStack_178 = (undefined1 *)CONCAT44(uStack_2d4,uStack_2d8);
      uStack_170 = (undefined8 *)CONCAT44(uStack_2cc,uStack_2d0);
      uStack_188 = (longlong *)uStack_2e8;
      uStack_180 = (longlong **)uStack_2e0;
      pdb_141f7ffd0(auStack_3a0,&uStack_188,uStack_3e0,uStack_3dc,&uStack_688,&uStack_83);
      lStack_b8 = 0;
      plVar4 = (longlong *)plStack_a0[2];
      pplVar5 = (longlong **)plStack_a0[3];
      LOCK();
      lVar3 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 != 0 && SCARRY8(lVar3,1) == *plVar4 < 0) {
        uStack_178 = (undefined1 *)CONCAT71(uStack_178._1_7_,1);
        puVar13 = &uStack_188;
        uStack_188 = plVar4;
        uStack_180 = pplVar5;
        pdb_1410036f0(plStack_a0 + 4);
        cStack_81 = '\0';
        cStack_82 = '\0';
        uStack_c8 = param_3;
        while( true ) {
          uVar15 = SUB84(puVar13,0);
          if (cStack_81 != '\0') {
            uStack_178 = (undefined1 *)pdb_140f3c9d0();
            lVar3 = lStack_348;
            puStack_158 = (undefined1 *)0x0;
            uStack_180 = (longlong **)CONCAT44(uStack_180._4_4_,4);
            uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,uVar15);
            uStack_188 = (longlong *)CONCAT71(uStack_188._1_7_,4);
            if (lStack_348 == lStack_358) {
              pdb_142d7f080(&lStack_358);
            }
            lVar12 = lVar3 * 0x38;
            *(undefined1 **)(lStack_350 + 0x30 + lVar12) = puStack_158;
            plVar4 = (longlong *)(lStack_350 + 0x20 + lVar12);
            *plVar4 = (longlong)puStack_168;
            plVar4[1] = (longlong)puStack_160;
            plVar4 = (longlong *)(lStack_350 + 0x10 + lVar12);
            *plVar4 = (longlong)uStack_178;
            plVar4[1] = (longlong)uStack_170;
            puVar1 = (undefined4 *)(lStack_350 + lVar12);
            *puVar1 = (undefined4)uStack_188;
            puVar1[1] = uStack_188._4_4_;
            puVar1[2] = (undefined4)uStack_180;
            puVar1[3] = uStack_180._4_4_;
            lStack_348 = lVar3 + 1;
          }
          if ((cStack_82 == '\0') && (lStack_330 != 0 || lStack_348 != 0)) break;
          puVar13 = (undefined8 *)0x4c4b40;
          pdb_140f502d0(0);
          uStack_188 = (longlong *)&cStack_81;
          uStack_180 = &plStack_a0;
          uStack_178 = auStack_428;
          uStack_170 = auStack_1c0;
          puStack_168 = &uStack_200;
          puStack_160 = auStack_1f8;
          puStack_158 = auStack_488;
          pcStack_150 = &cStack_82;
          puStack_148 = &uStack_688;
          puStack_140 = auStack_3b8;
          plStack_138 = &lStack_b8;
          puStack_130 = &uStack_83;
          puStack_128 = auStack_3a0;
          puStack_120 = &uStack_91;
          plStack_118 = alStack_218;
          puStack_110 = &uStack_ec;
          uVar11 = pdb_141002780();
          if ((uVar11 & 1) != 0) {
            puStack_d8[1] = 0;
            *puStack_d8 = 0;
            if (0x14 < (uint)lStack_b8) {
              LOCK();
              *aplStack_b0[0] = *aplStack_b0[0] + -1;
              UNLOCK();
              if (*aplStack_b0[0] == 0) {
                pdb_1406cd7d0(aplStack_b0);
              }
            }
            pdb_140ffcf90(auStack_3a0);
            uStack_74 = 0;
            pdb_140ffcad0(auStack_488);
            uStack_73 = 0;
            pdb_140ffd840(&uStack_688);
            pbStack_80 = pbStack_1d0;
            puStack_90 = puStack_1c8;
            if ((code *)*puStack_1c8 != (code *)0x0) {
              (*(code *)*puStack_1c8)(pbStack_1d0);
            }
            if (puStack_90[1] != 0) {
              pub_1406abac0(pbStack_80,puStack_90[1],puStack_90[2]);
            }
            pbStack_80 = pbStack_e8;
            if (pbStack_e8 != (byte *)0x0) {
              puStack_90 = puStack_e0;
              if ((code *)*puStack_e0 != (code *)0x0) {
                (*(code *)*puStack_e0)(pbStack_e8);
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
            return puStack_d8;
          }
        }
        if (alStack_218[0] == 1) {
          uVar15 = (undefined4)alStack_218[2];
          uStack_294 = pdb_1406d3d50((int)alStack_218[1],uVar15,(int)uStack_3d8);
          uStack_298 = 0;
          uStack_290 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x0001410091aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar10 = (undefined1 *)
                    (*(code *)(&UNK_143272980 + *(int *)(&UNK_143272980 + lStack_b8 * 4)))
                              (&UNK_143272980 + *(int *)(&UNK_143272980 + lStack_b8 * 4));
          return puVar10;
        }
        uStack_298 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001410091d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar10 = (undefined1 *)
                  (*(code *)(&UNK_143272980 + *(int *)(&UNK_143272980 + lStack_b8 * 4)))
                            (&UNK_143272980 + *(int *)(&UNK_143272980 + lStack_b8 * 4));
        return puVar10;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

