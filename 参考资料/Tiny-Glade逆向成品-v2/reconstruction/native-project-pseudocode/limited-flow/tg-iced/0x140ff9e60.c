// VA 0x140ff9e60, PDB extent 6669 bytes
// tg_iced::gui_runner_winit::run_gui<tg_gpu_selector::vulkan_config::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_iced::gui_runner_winit::run_gui<tg_gpu_selector::vulkan_config::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_winit.rs
   Extent: 6669 */

undefined8 *
pdb_140ff9e60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

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
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffff8b8;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 auStack_508 [96];
  undefined1 auStack_4a8 [72];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_448;
  undefined4 auStack_438 [6];
  undefined1 auStack_420 [104];
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_390;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined8 *puStack_2e8;
  undefined4 *puStack_2e0;
  longlong *plStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  longlong alStack_230 [3];
  undefined8 uStack_218;
  undefined8 auStack_210 [3];
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [7];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 *puStack_148;
  char *pcStack_140;
  undefined8 *puStack_138;
  undefined4 *puStack_130;
  longlong *plStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  longlong *plStack_108;
  undefined4 *puStack_100;
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
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff8b8 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_2c8 = (undefined1 *)param_2[0xc];
  plStack_2d8 = (longlong *)param_2[10];
  puStack_2d0 = (undefined1 *)param_2[0xb];
  puStack_2e8 = (undefined8 *)param_2[8];
  puStack_2e0 = (undefined4 *)param_2[9];
  uStack_328 = *param_2;
  uStack_320 = param_2[1];
  uStack_318 = *(undefined4 *)(param_2 + 2);
  uStack_314 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_310 = *(undefined4 *)(param_2 + 3);
  uStack_30c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_308 = *(undefined4 *)(param_2 + 4);
  uStack_304 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_300 = *(undefined4 *)(param_2 + 5);
  uStack_2fc = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_2f8 = *(undefined4 *)(param_2 + 6);
  uStack_2f4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_2f0 = *(undefined4 *)(param_2 + 7);
  uStack_2ec = *(undefined4 *)((longlong)param_2 + 0x3c);
  auStack_438[0] = 0;
  uStack_448 = 0;
  uStack_708 = (longlong *)0x0;
  uStack_700 = 0;
  uVar11 = 0;
  puStack_c8 = param_1;
  uStack_b8 = param_3;
  plStack_98 = param_4;
  iVar8 = GetClientRect(param_4[3]);
  if (iVar8 == 0) {
    uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1432709b4,0xcb,&UNK_143270a80);
  }
  uVar13 = (int)uStack_700 - (int)uStack_708;
  iVar8 = uStack_700._4_4_ - uStack_708._4_4_;
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
  puVar10 = (undefined8 *)(ulonglong)uVar13;
  auStack_1d8[0] = uVar2;
  pdb_1406eab50(auStack_4a8,puVar10,iVar8);
  alStack_230[0] = 0;
  uStack_8c = 0;
  uStack_dc = 0;
  uStack_71 = 1;
  pbStack_d8 = (byte *)pdb_1406d4300(plStack_98 + 2);
  pbStack_80 = (byte *)plStack_98;
  LOCK();
  lVar3 = *plStack_98;
  *plStack_98 = *plStack_98 + 1;
  UNLOCK();
  puStack_d0 = puVar10;
  if (*plStack_98 != 0 && SCARRY8(lVar3,1) == *plStack_98 < 0) {
    uStack_708 = plStack_98;
    pdb_14007ee60();
    pbStack_1e8 = pub_1406abab0(8,8);
    if (pbStack_1e8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(byte **)pbStack_1e8 = pbStack_80;
    uStack_1f0 = 0x41800000;
    puStack_1e0 = (undefined8 *)&UNK_1434355a0;
    uStack_1f8 = 0x300;
    uStack_1f6 = 4;
    auStack_210[0] = 2;
    uStack_74 = 1;
    pdb_1406d45a0(&uStack_708,auStack_210);
    LOCK();
    lVar3 = *plStack_98;
    *plStack_98 = *plStack_98 + 1;
    UNLOCK();
    if (*plStack_98 != 0 && SCARRY8(lVar3,1) == *plStack_98 < 0) {
      uStack_75 = 1;
      pdb_141f63e10(auStack_508,auStack_210,plStack_98,uVar13,CONCAT44(uVar14,iVar8));
      uStack_218 = 0;
      puStack_118 = puStack_2c8;
      plStack_128 = plStack_2d8;
      puStack_120 = puStack_2d0;
      puStack_138 = puStack_2e8;
      puStack_130 = puStack_2e0;
      puStack_158 = (undefined8 *)CONCAT44(uStack_304,uStack_308);
      puStack_150 = (undefined8 *)CONCAT44(uStack_2fc,uStack_300);
      puStack_148 = (undefined1 *)CONCAT44(uStack_2f4,uStack_2f8);
      pcStack_140 = (char *)CONCAT44(uStack_2ec,uStack_2f0);
      uStack_168 = (undefined1 *)CONCAT44(uStack_314,uStack_318);
      uStack_160 = (undefined8 *)CONCAT44(uStack_30c,uStack_310);
      uStack_178 = (longlong *)uStack_328;
      uStack_170 = (longlong **)uStack_320;
      pdb_141f66130(auStack_420,&uStack_178,uStack_460,uStack_45c,&uStack_708,&uStack_8b);
      lStack_b0 = 0;
      uStack_1a0 = 0x8000000000000000;
      plVar4 = (longlong *)plStack_98[2];
      pplVar5 = (longlong **)plStack_98[3];
      LOCK();
      lVar3 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 != 0 && SCARRY8(lVar3,1) == *plVar4 < 0) {
        uStack_168 = (undefined1 *)CONCAT71(uStack_168._1_7_,1);
        puVar10 = &uStack_178;
        uStack_178 = plVar4;
        uStack_170 = pplVar5;
        pdb_141f67710(plStack_98 + 4);
        cStack_89 = '\0';
        cStack_8a = '\0';
        while( true ) {
          uVar14 = SUB84(puVar10,0);
          if (cStack_89 != '\0') {
            uStack_168 = (undefined1 *)pdb_140f3c9d0();
            lVar3 = lStack_3a8;
            puStack_148 = (undefined1 *)0x0;
            uStack_170 = (longlong **)CONCAT44(uStack_170._4_4_,4);
            uStack_160 = (undefined8 *)CONCAT44(uStack_160._4_4_,uVar14);
            uStack_178 = (longlong *)CONCAT71(uStack_178._1_7_,4);
            if (lStack_3a8 == lStack_3b8) {
              pdb_142d7f080(&lStack_3b8);
            }
            lVar12 = lVar3 * 0x38;
            *(undefined1 **)(lStack_3b0 + 0x30 + lVar12) = puStack_148;
            plVar4 = (longlong *)(lStack_3b0 + 0x20 + lVar12);
            *plVar4 = (longlong)puStack_158;
            plVar4[1] = (longlong)puStack_150;
            plVar4 = (longlong *)(lStack_3b0 + 0x10 + lVar12);
            *plVar4 = (longlong)uStack_168;
            plVar4[1] = (longlong)uStack_160;
            puVar1 = (undefined4 *)(lStack_3b0 + lVar12);
            *puVar1 = (undefined4)uStack_178;
            puVar1[1] = uStack_178._4_4_;
            puVar1[2] = (undefined4)uStack_170;
            puVar1[3] = uStack_170._4_4_;
            lStack_3a8 = lVar3 + 1;
          }
          if ((cStack_8a == '\0') && (lStack_390 != 0 || lStack_3a8 != 0)) break;
          puVar10 = (undefined8 *)0x4c4b40;
          pdb_140f502d0(0);
          uStack_178 = (longlong *)&cStack_89;
          uStack_170 = &plStack_98;
          uStack_168 = auStack_4a8;
          uStack_160 = auStack_1d8;
          puStack_158 = &uStack_218;
          puStack_150 = auStack_210;
          puStack_148 = auStack_508;
          pcStack_140 = &cStack_8a;
          puStack_138 = &uStack_708;
          puStack_130 = auStack_438;
          plStack_128 = &lStack_b0;
          puStack_120 = &uStack_8b;
          puStack_118 = auStack_420;
          puStack_110 = &uStack_8c;
          plStack_108 = alStack_230;
          puStack_100 = &uStack_dc;
          uVar11 = pdb_141f671e0();
          if ((uVar11 & 1) != 0) {
            puStack_c8[4] = uStack_180;
            *(undefined4 *)(puStack_c8 + 2) = uStack_190;
            *(undefined4 *)((longlong)puStack_c8 + 0x14) = uStack_18c;
            *(undefined4 *)(puStack_c8 + 3) = uStack_188;
            *(undefined4 *)((longlong)puStack_c8 + 0x1c) = uStack_184;
            *puStack_c8 = uStack_1a0;
            puStack_c8[1] = uStack_198;
            if (0x14 < (uint)lStack_b0) {
              LOCK();
              *aplStack_a8[0] = *aplStack_a8[0] + -1;
              UNLOCK();
              if (*aplStack_a8[0] == 0) {
                pdb_1406cd7d0(aplStack_a8);
              }
            }
            pdb_140fe51e0(auStack_420);
            uStack_75 = 0;
            pdb_140fe6d70(auStack_508);
            uStack_74 = 0;
            pdb_140fe7080(&uStack_708);
            pbStack_80 = pbStack_1e8;
            puStack_88 = puStack_1e0;
            if ((code *)*puStack_1e0 != (code *)0x0) {
              (*(code *)*puStack_1e0)(pbStack_1e8);
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
        if (alStack_230[0] == 1) {
          uVar14 = (undefined4)alStack_230[2];
          uStack_2b4 = pdb_1406d3d50((int)alStack_230[1],uVar14,(int)uStack_458);
          uStack_2b8 = 0;
          uStack_2b0 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x000140ffa2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar10 = (undefined8 *)
                    (*(code *)(&UNK_143270b30 + *(int *)(&UNK_143270b30 + lStack_b0 * 4)))
                              (&UNK_143270b30 + *(int *)(&UNK_143270b30 + lStack_b0 * 4));
          return puVar10;
        }
        uStack_2b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140ffa323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar10 = (undefined8 *)
                  (*(code *)(&UNK_143270b30 + *(int *)(&UNK_143270b30 + lStack_b0 * 4)))
                            (&UNK_143270b30 + *(int *)(&UNK_143270b30 + lStack_b0 * 4));
        return puVar10;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

