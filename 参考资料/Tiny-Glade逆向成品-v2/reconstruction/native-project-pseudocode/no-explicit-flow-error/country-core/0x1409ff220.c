// VA 0x1409ff220, PDB extent 1690 bytes
// country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::UiWallHeight::signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::UiWallHeight::signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
   Extent: 1690 */

void pdb_1409ff220(byte *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  byte *pbStack_b0;
  code *pcStack_a8;
  undefined4 *puStack_a0;
  code *pcStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined *puStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar7 = param_3;
  uStack_bc = param_4;
  if (param_1[9] == 1) {
    if (param_1[8] != 1) goto LAB_1409ff33d;
    pbVar8 = (byte *)param_3[1];
    uVar12 = 0;
  }
  else {
    pbVar8 = *(byte **)(param_2 + 0x98);
    if (*(byte **)(param_2 + 0xe8) < *(byte **)(param_2 + 0x98)) {
      pbVar8 = *(byte **)(param_2 + 0xe8);
    }
    if (pbVar8 < (byte *)0xaaaaaaaaaaaaaab) {
      pbStack_70 = pbVar8;
      if (pbVar8 == (byte *)0x0) {
        pbStack_78 = (byte *)0x4;
      }
      else {
        lVar2 = *(longlong *)(param_2 + 0x90);
        lVar3 = *(longlong *)(param_2 + 0xe0);
        pdb_14007ee60();
        pbStack_78 = pub_1406abab0((longlong)pbVar8 * 0xc,4);
        fVar11 = _DAT_142e382c0;
        pbVar5 = (byte *)0x4;
        if (pbStack_78 == (byte *)0x0) goto LAB_1409ff332;
        if (pbStack_70 == (byte *)0x1) {
          uVar6 = 0;
        }
        else {
          lVar9 = 5;
          uVar6 = 0;
          do {
            uVar12 = *(undefined4 *)(lVar2 + -0xc + lVar9 * 4);
            fVar1 = *(float *)(lVar3 + uVar6 * 4);
            *(undefined4 *)(pbStack_78 + lVar9 * 4 + -0x14) =
                 *(undefined4 *)(lVar2 + -0x14 + lVar9 * 4);
            *(float *)(pbStack_78 + lVar9 * 4 + -0x10) = fVar1 + fVar11;
            *(undefined4 *)(pbStack_78 + lVar9 * 4 + -0xc) = uVar12;
            uVar12 = *(undefined4 *)(lVar2 + lVar9 * 4);
            fVar1 = *(float *)(lVar3 + 4 + uVar6 * 4);
            uVar6 = uVar6 + 2;
            *(undefined4 *)(pbStack_78 + lVar9 * 4 + -8) = *(undefined4 *)(lVar2 + -8 + lVar9 * 4);
            *(float *)(pbStack_78 + lVar9 * 4 + -4) = fVar1 + fVar11;
            *(undefined4 *)(pbStack_78 + lVar9 * 4) = uVar12;
            lVar9 = lVar9 + 6;
          } while (((ulonglong)pbStack_70 & 0xffffffffffffffe) != uVar6);
          if (((ulonglong)pbStack_70 & 1) == 0) goto LAB_1409ff4e5;
        }
        lVar9 = uVar6 * 0xc;
        fVar11 = *(float *)(lVar3 + uVar6 * 4) + _DAT_142e382c0;
        uVar12 = *(undefined4 *)(lVar2 + 8 + lVar9);
        *(undefined4 *)(pbStack_78 + lVar9) = *(undefined4 *)(lVar2 + lVar9);
        *(float *)(pbStack_78 + lVar9 + 4) = fVar11;
        *(undefined4 *)(pbStack_78 + lVar9 + 8) = uVar12;
      }
LAB_1409ff4e5:
      pbVar8 = (byte *)param_3[1];
      pcStack_a8 = pdb_140c04ef0;
      puStack_a0 = &uStack_bc;
      pcStack_98 = pdb_140f71a50;
      uStack_61 = 1;
      pbStack_b0 = param_1;
      pdb_140f60760(&uStack_d8,&UNK_1430345c7,&pbStack_b0);
      pdb_14007ee60();
      pbStack_88 = pub_1406abab0(0x28,8);
      if (pbStack_88 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      pbStack_88[0] = 1;
      pbStack_88[1] = 0;
      pbStack_88[2] = 0;
      pbStack_88[3] = 0;
      pbStack_88[4] = 0;
      pbStack_88[5] = 0;
      pbStack_88[6] = 0;
      pbStack_88[7] = 0;
      pbStack_88[8] = 1;
      pbStack_88[9] = 0;
      pbStack_88[10] = 0;
      pbStack_88[0xb] = 0;
      pbStack_88[0xc] = 0;
      pbStack_88[0xd] = 0;
      pbStack_88[0xe] = 0;
      pbStack_88[0xf] = 0;
      *(byte **)(pbStack_88 + 0x10) = pbStack_70;
      *(byte **)(pbStack_88 + 0x18) = pbStack_78;
      *(byte **)(pbStack_88 + 0x20) = pbStack_70;
      pcStack_a8 = (code *)&UNK_1430345e0;
      pbStack_b0 = pbStack_88;
      if ((longlong)uStack_c8 < 0) {
        uVar10 = 0;
        pbStack_b8 = pbStack_88;
LAB_1409ff597:
        pdb_142dc7e2a(uVar10,uStack_c8);
        goto LAB_1409ff6a5;
      }
      if (uStack_c8 == 0) {
        pbVar5 = (byte *)0x1;
      }
      else {
        pbStack_b8 = pbStack_88;
        pdb_14007ee60();
        uVar10 = 1;
        pbVar5 = pub_1406abab0(uStack_c8,1);
        if (pbVar5 == (byte *)0x0) goto LAB_1409ff597;
        pub_142e32760(pbVar5,pbStack_d0,uStack_c8);
        pbStack_88 = pbStack_b8;
      }
      pcStack_a8 = (code *)((ulonglong)pcStack_a8 & 0xffffffffffffff00);
      puStack_a0 = (undefined4 *)uStack_c8;
      uStack_90 = uStack_c8;
      puStack_80 = &UNK_1430345e0;
      pbStack_b0 = pbVar8;
      pcStack_98 = (code *)pbVar5;
      pdb_141a88350(param_5,&pbStack_b0);
      goto joined_r0x0001409ff65a;
    }
    pbVar5 = (byte *)0x0;
LAB_1409ff332:
    param_1 = pbVar5;
    pdb_142dc7e2a(param_1,(longlong)pbVar8 * 0xc);
LAB_1409ff33d:
    lVar2 = *plVar7;
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return;
    }
    pbVar8 = (byte *)plVar7[1];
    if (*(byte **)(lVar2 + 0x38) != pbVar8) {
      return;
    }
    uVar12 = _DAT_142e3787c;
    if (*(int *)(lVar2 + 0x28) == 2) {
      return;
    }
  }
  uVar10 = *(undefined8 *)param_1;
  pcStack_a8 = pdb_140c04ef0;
  pbStack_b0 = param_1;
  pdb_140f60760(&uStack_d8,&UNK_143034610,&pbStack_b0);
  pdb_14007ee60();
  pbStack_88 = pub_1406abab0(0x20,8);
  if (pbStack_88 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbStack_88[0] = 1;
  pbStack_88[1] = 0;
  pbStack_88[2] = 0;
  pbStack_88[3] = 0;
  pbStack_88[4] = 0;
  pbStack_88[5] = 0;
  pbStack_88[6] = 0;
  pbStack_88[7] = 0;
  pbStack_88[8] = 1;
  pbStack_88[9] = 0;
  pbStack_88[10] = 0;
  pbStack_88[0xb] = 0;
  pbStack_88[0xc] = 0;
  pbStack_88[0xd] = 0;
  pbStack_88[0xe] = 0;
  pbStack_88[0xf] = 0;
  *(undefined8 *)(pbStack_88 + 0x10) = uVar10;
  *(undefined4 *)(pbStack_88 + 0x18) = uVar12;
  pcStack_a8 = (code *)&UNK_143034628;
  pbStack_b0 = pbStack_88;
  if (-1 < (longlong)uStack_c8) {
    if (uStack_c8 == 0) {
      pbVar5 = (byte *)0x1;
    }
    else {
      pbStack_70 = pbStack_88;
      pdb_14007ee60();
      uVar10 = 1;
      pbVar5 = pub_1406abab0(uStack_c8,1);
      if (pbVar5 == (byte *)0x0) goto LAB_1409ff2ef;
      pub_142e32760(pbVar5,pbStack_d0,uStack_c8);
      pbStack_88 = pbStack_70;
    }
    pcStack_a8 = (code *)((ulonglong)pcStack_a8 & 0xffffffffffffff00);
    puStack_a0 = (undefined4 *)uStack_c8;
    uStack_90 = uStack_c8;
    puStack_80 = &UNK_143034628;
    pbStack_b0 = pbVar8;
    pcStack_98 = (code *)pbVar5;
    pdb_141a88350(param_5,&pbStack_b0);
joined_r0x0001409ff65a:
    if (uStack_d8 != 0) {
      pub_1406abac0(pbStack_d0,uStack_d8,1);
    }
    return;
  }
  uVar10 = 0;
  pbStack_70 = pbStack_88;
LAB_1409ff2ef:
  pdb_142dc7e2a(uVar10,uStack_c8);
LAB_1409ff6a5:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

