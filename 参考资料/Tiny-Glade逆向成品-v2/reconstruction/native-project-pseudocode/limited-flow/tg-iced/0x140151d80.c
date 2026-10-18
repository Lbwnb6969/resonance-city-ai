// VA 0x140151d80, PDB extent 6317 bytes
// tg_iced::gui_runner_winit::run_gui_with_options<crash_reporter_gui::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_iced::gui_runner_winit::run_gui_with_options<crash_reporter_gui::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
   Extent: 6317 */

undefined1 *
pdb_140151d80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             char *param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_fffffffffffff8b8;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 auStack_500 [96];
  undefined1 auStack_4a0 [216];
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  longlong lStack_3a0;
  undefined1 auStack_358 [72];
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  longlong alStack_250 [3];
  undefined8 uStack_238;
  undefined8 auStack_230 [3];
  undefined2 uStack_218;
  undefined1 uStack_216;
  undefined8 uStack_210;
  byte *pbStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  char *pcStack_1b8;
  undefined8 *puStack_1b0;
  char *pcStack_1a8;
  longlong *plStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  longlong *plStack_180;
  undefined4 *puStack_178;
  undefined8 uStack_110;
  undefined4 uStack_dc;
  byte *pbStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
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
  undefined1 uStack_77;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_70;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffff8b8 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  uStack_708 = (longlong *)0x0;
  uStack_700 = 0;
  uVar9 = 0;
  uStack_110 = param_2;
  puStack_c8 = param_1;
  uStack_b8 = param_3;
  plStack_98 = param_4;
  iVar6 = GetClientRect(param_4[3]);
  if (iVar6 == 0) {
    uStack_72 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142e4abe8,0xcb,&UNK_142e4acb0);
  }
  uVar12 = (int)uStack_700 - (int)uStack_708;
  iVar6 = uStack_700._4_4_ - uStack_708._4_4_;
  if (*param_5 == '\0') {
    uStack_72 = 1;
    pcVar7 = (char *)pdb_140744c40();
    uVar14 = *(undefined8 *)(pcVar7 + 0xc0);
    if (((uVar9 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
      uStack_72 = 1;
      cVar5 = pdb_142dc79e0();
      if (cVar5 == '\0') {
        pcVar7[1] = '\x01';
      }
    }
    LOCK();
    cVar5 = *pcVar7;
    *pcVar7 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      uStack_72 = 1;
      pdb_142dc6ca0(pcVar7);
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_5 + 8);
  }
  uStack_72 = 1;
  puVar11 = (undefined8 *)(ulonglong)uVar12;
  uStack_1f8 = uVar14;
  pdb_1406eab50(auStack_358,puVar11,iVar6);
  alStack_250[0] = 0;
  uStack_8c = 0;
  uStack_dc = 0;
  uStack_72 = 1;
  pbStack_d8 = (byte *)pdb_1406d4300(plStack_98 + 2);
  pbStack_80 = (byte *)plStack_98;
  LOCK();
  lVar3 = *plStack_98;
  *plStack_98 = *plStack_98 + 1;
  UNLOCK();
  puStack_d0 = puVar11;
  if (*plStack_98 != 0 && SCARRY8(lVar3,1) == *plStack_98 < 0) {
    uStack_708 = plStack_98;
    pdb_14007ee60();
    pbStack_208 = pub_1406abab0(8,8);
    if (pbStack_208 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(byte **)pbStack_208 = pbStack_80;
    uStack_210 = 0x41800000;
    puStack_200 = (undefined8 *)&UNK_142e673e8;
    uStack_218 = 0x300;
    uStack_216 = 4;
    auStack_230[0] = 2;
    uStack_74 = 1;
    pdb_1406d45a0(&uStack_708,auStack_230);
    LOCK();
    lVar3 = *plStack_98;
    *plStack_98 = *plStack_98 + 1;
    UNLOCK();
    if (*plStack_98 != 0 && SCARRY8(lVar3,1) == *plStack_98 < 0) {
      uStack_75 = 1;
      pdb_1402afe40(auStack_500,auStack_230,plStack_98,uVar12,CONCAT44(uVar13,iVar6));
      uStack_238 = 0;
      pub_142e32760(&uStack_1f0,uStack_110,0xd8);
      pdb_140528230(auStack_4a0,&uStack_1f0,uStack_310,uStack_30c,&uStack_708,&uStack_8b);
      lStack_b0 = 0;
      uStack_1f0 = (longlong *)plStack_98[2];
      uStack_1e8 = (longlong **)plStack_98[3];
      LOCK();
      lVar3 = *uStack_1f0;
      *uStack_1f0 = *uStack_1f0 + 1;
      UNLOCK();
      if (*uStack_1f0 != 0 && SCARRY8(lVar3,1) == *uStack_1f0 < 0) {
        puStack_1e0 = (undefined1 *)CONCAT71(puStack_1e0._1_7_,1);
        puVar11 = &uStack_1f0;
        pdb_14010d1a0(plStack_98 + 4);
        cStack_89 = '\0';
        cStack_8a = '\0';
        while( true ) {
          uVar13 = SUB84(puVar11,0);
          if (cStack_89 != '\0') {
            puStack_1e0 = (undefined1 *)pdb_140f3c9d0();
            lVar3 = lStack_3b8;
            puStack_1c0 = (undefined1 *)0x0;
            uStack_1e8 = (longlong **)CONCAT44(uStack_1e8._4_4_,4);
            puStack_1d8 = (undefined8 *)CONCAT44(puStack_1d8._4_4_,uVar13);
            uStack_1f0 = (longlong *)CONCAT71(uStack_1f0._1_7_,4);
            if (lStack_3b8 == lStack_3c8) {
              pdb_142d7f080(&lStack_3c8);
            }
            lVar10 = lVar3 * 0x38;
            *(undefined1 **)(lStack_3c0 + 0x30 + lVar10) = puStack_1c0;
            plVar2 = (longlong *)(lStack_3c0 + 0x20 + lVar10);
            *plVar2 = (longlong)puStack_1d0;
            plVar2[1] = (longlong)puStack_1c8;
            plVar2 = (longlong *)(lStack_3c0 + 0x10 + lVar10);
            *plVar2 = (longlong)puStack_1e0;
            plVar2[1] = (longlong)puStack_1d8;
            puVar1 = (undefined4 *)(lStack_3c0 + lVar10);
            *puVar1 = (undefined4)uStack_1f0;
            puVar1[1] = uStack_1f0._4_4_;
            puVar1[2] = (undefined4)uStack_1e8;
            puVar1[3] = uStack_1e8._4_4_;
            lStack_3b8 = lVar3 + 1;
          }
          if ((cStack_8a == '\0') && (lStack_3a0 != 0 || lStack_3b8 != 0)) break;
          puVar11 = (undefined8 *)0x4c4b40;
          pdb_140f502d0(0);
          uStack_1f0 = (longlong *)&cStack_89;
          uStack_1e8 = &plStack_98;
          puStack_1e0 = auStack_358;
          puStack_1d8 = &uStack_1f8;
          puStack_1d0 = &uStack_238;
          puStack_1c8 = auStack_230;
          puStack_1c0 = auStack_500;
          pcStack_1b8 = &cStack_8a;
          puStack_1b0 = &uStack_708;
          plStack_1a0 = &lStack_b0;
          puStack_198 = &uStack_8b;
          puStack_190 = auStack_4a0;
          puStack_188 = &uStack_8c;
          plStack_180 = alStack_250;
          puStack_178 = &uStack_dc;
          pcStack_1a8 = param_5 + 0x10;
          uVar9 = pdb_14010ad50();
          if ((uVar9 & 1) != 0) {
            puStack_c8[1] = 0;
            *puStack_c8 = 0;
            if (0x14 < (uint)lStack_b0) {
              LOCK();
              *aplStack_a8[0] = *aplStack_a8[0] + -1;
              UNLOCK();
              if (*aplStack_a8[0] == 0) {
                pdb_1406cd7d0(aplStack_a8);
              }
            }
            pdb_1404dc890(auStack_4a0);
            uStack_75 = 0;
            pdb_1404c94d0(auStack_500);
            uStack_74 = 0;
            pdb_1404ddd40(&uStack_708);
            pbStack_80 = pbStack_208;
            puStack_88 = puStack_200;
            if ((code *)*puStack_200 != (code *)0x0) {
              (*(code *)*puStack_200)(pbStack_208);
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
              uStack_77 = 0;
              pdb_1406cd740(&plStack_98);
            }
            return puStack_c8;
          }
        }
        if (alStack_250[0] == 1) {
          uVar13 = (undefined4)alStack_250[2];
          uStack_2d4 = pdb_1406d3d50((int)alStack_250[1],uVar13,(int)uStack_308);
          uStack_2d8 = 0;
          uStack_2d0 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00014015217a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar8 = (undefined1 *)
                   (*(code *)(&UNK_142e4b504 + *(int *)(&UNK_142e4b504 + lStack_b0 * 4)))
                             (&UNK_142e4b504 + *(int *)(&UNK_142e4b504 + lStack_b0 * 4));
          return puVar8;
        }
        uStack_2d8 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001401521a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar8 = (undefined1 *)
                 (*(code *)(&UNK_142e4b504 + *(int *)(&UNK_142e4b504 + lStack_b0 * 4)))
                           (&UNK_142e4b504 + *(int *)(&UNK_142e4b504 + lStack_b0 * 4));
        return puVar8;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

