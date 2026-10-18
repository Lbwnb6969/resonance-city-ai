// VA 0x1408a6e90, PDB extent 1742 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::split_segment_into_supported_and_unsupported_subsegments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::split_segment_into_supported_and_unsupported_subsegments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 1742 */

void pdb_1408a6e90(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 *param_6,char param_7)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  int aiStack_140 [2];
  undefined4 uStack_138;
  undefined8 uStack_130;
  int aiStack_128 [2];
  float fStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_80 = 0;
  lStack_78 = 8;
  lStack_70 = 0;
  lStack_98 = 0;
  lStack_90 = 8;
  lStack_88 = 0;
  uStack_bc = _DAT_143014104;
  if (param_7 == '\0') {
    uStack_bc = _DAT_143014108;
  }
  puStack_110 = param_5;
  puStack_f8 = &uStack_bc;
  lStack_108 = param_4;
  uStack_100 = param_2;
  uStack_f0 = param_3;
  plStack_e8 = param_1;
  if (*(char *)(param_4 + 0x98) == '\0') {
    pdb_1408a7560(aiStack_128,&puStack_110,0);
    uVar11 = uStack_118;
    fVar14 = fStack_120;
    if (aiStack_128[0] != 1) {
      bVar3 = true;
      pbVar7 = (byte *)0x8;
      uStack_b8 = 0;
      goto LAB_1408a6fee;
    }
  }
  else {
    if (*(longlong *)(param_4 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143014360);
    }
    uVar11 = *param_5;
    fVar14 = **(float **)(param_4 + 0x58) * _DAT_142e36f50;
  }
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x18,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pdb_14007ee60();
  pfVar8 = (float *)pub_1406abab0(0x10,8);
  if (pfVar8 == (float *)0x0) {
    pbStack_68 = pbVar7;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  *pfVar8 = fVar14;
  *(undefined8 *)(pfVar8 + 2) = uVar11;
  pbVar7[0] = 1;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  *(float **)(pbVar7 + 8) = pfVar8;
  pbVar7[0x10] = 1;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar7[0x14] = 0;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  uStack_b8 = 1;
  bVar3 = false;
LAB_1408a6fee:
  lStack_d0 = *(longlong *)(param_4 + 0x10);
  uStack_e0 = (ulonglong)*(byte *)(param_4 + 0x99);
  uVar13 = lStack_d0 - uStack_e0;
  pbStack_68 = (byte *)0x0;
  uVar1 = 1;
  lStack_d8 = param_4;
  pbStack_b0 = pbVar7;
  uStack_a8 = uStack_b8;
  uStack_a0 = uStack_b8;
  bVar2 = bVar3;
  while (uVar12 = uVar1, lVar10 = lStack_70, uVar12 < uVar13) {
    pdb_1408a7560(aiStack_140,&puStack_110,uVar12);
    lVar9 = lStack_70;
    lVar10 = lStack_88;
    uVar6 = uStack_a8;
    pbVar7 = pbStack_b0;
    uVar5 = uStack_138;
    uVar1 = uVar12 + 1;
    if (aiStack_140[0] == 1) {
      uStack_c8 = uStack_130;
      if (bVar3) {
        if (lStack_70 == lStack_80) {
          pdb_142d8a210(&lStack_80);
        }
        lVar10 = lVar9 * 0x10;
        *(byte **)(lStack_78 + lVar10) = pbStack_68;
        *(ulonglong *)(lStack_78 + 8 + lVar10) = uVar12;
        lStack_70 = lVar9 + 1;
        pdb_14007ee60();
        pbVar7 = pub_1406abab0(0x10,8);
        uVar6 = uStack_a8;
        if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x10);
        }
        *(undefined4 *)pbVar7 = uVar5;
        *(undefined8 *)(pbVar7 + 8) = uStack_c8;
        pbStack_68 = pbVar7;
        if (uStack_a8 == uStack_b8) {
          pdb_142d7e830(&uStack_b8);
        }
        pbVar7 = pbStack_b0 + uVar6 * 0x18;
        pbVar7[0] = 1;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
        *(byte **)(pbStack_b0 + uVar6 * 0x18 + 8) = pbStack_68;
        pbVar7 = pbStack_b0 + uVar6 * 0x18 + 0x10;
        pbVar7[0] = 1;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
        uStack_a8 = uVar6 + 1;
        uStack_a0 = 1;
        bVar2 = false;
        bVar3 = false;
        pbStack_68 = (byte *)uVar12;
      }
      else {
        if ((uStack_a8 == 0) || (pbStack_b0 + uStack_a8 * 0x18 == (byte *)0x18)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430143a8);
        }
        lVar10 = *(longlong *)(pbStack_b0 + uStack_a8 * 0x18 + -8);
        if (lVar10 == *(longlong *)(pbStack_b0 + uStack_a8 * 0x18 + -0x18)) {
          pdb_142d7e980();
        }
        lVar9 = *(longlong *)(pbVar7 + uVar6 * 0x18 + -0x10);
        *(undefined4 *)(lVar9 + lVar10 * 0x10) = uVar5;
        *(undefined8 *)(lVar9 + 8 + lVar10 * 0x10) = uStack_c8;
        *(longlong *)(pbVar7 + uVar6 * 0x18 + -8) = lVar10 + 1;
        bVar3 = false;
      }
    }
    else {
      bVar4 = !bVar2;
      bVar2 = true;
      if (bVar4) {
        if ((uStack_a0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430143c0);
        }
        if (lStack_88 == lStack_98) {
          pdb_142d8a210(&lStack_98);
        }
        lVar9 = lVar10 * 0x10;
        *(byte **)(lStack_90 + lVar9) = pbStack_68;
        *(ulonglong *)(lStack_90 + 8 + lVar9) = uVar12 - 1;
        lStack_88 = lVar10 + 1;
        bVar3 = true;
        uStack_a0 = 0;
        pbStack_68 = (byte *)(uVar12 - 1);
      }
    }
  }
  if (bVar3) {
    if (lStack_70 == lStack_80) {
      pdb_142d8a210(&lStack_80);
    }
    lVar9 = lVar10 * 0x10;
    *(byte **)(lStack_78 + lVar9) = pbStack_68;
    *(longlong *)(lStack_78 + 8 + lVar9) = lStack_d0 + -1;
    lStack_70 = lVar10 + 1;
  }
  lVar10 = lStack_88;
  if ((uStack_a0 & 1) != 0) {
    if (lStack_88 == lStack_98) {
      pdb_142d8a210(&lStack_98);
    }
    uVar1 = uStack_a8;
    pbVar7 = pbStack_b0;
    lVar9 = lVar10 * 0x10;
    *(byte **)(lStack_90 + lVar9) = pbStack_68;
    *(longlong *)(lStack_90 + 8 + lVar9) = lStack_d0 + -1;
    lStack_88 = lVar10 + 1;
    if ((char)uStack_e0 != '\0') {
      if ((uStack_a8 == 0) || (pbStack_b0 + uStack_a8 * 0x18 == (byte *)0x18)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143014378);
      }
      if ((*(longlong *)(lStack_d8 + 0x60) == 0) ||
         (pfVar8 = (float *)(*(longlong *)(lStack_d8 + 0x58) + *(longlong *)(lStack_d8 + 0x60) * 4 +
                            -4), pfVar8 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143014390);
      }
      fVar14 = *pfVar8;
      uVar11 = *param_6;
      lVar10 = *(longlong *)(pbStack_b0 + uStack_a8 * 0x18 + -8);
      if (lVar10 == *(longlong *)(pbStack_b0 + uStack_a8 * 0x18 + -0x18)) {
        pdb_142d7e980();
      }
      lVar9 = *(longlong *)(pbVar7 + uVar1 * 0x18 + -0x10);
      *(float *)(lVar9 + lVar10 * 0x10) = fVar14 * _DAT_142e36f50;
      *(undefined8 *)(lVar9 + 8 + lVar10 * 0x10) = uVar11;
      *(longlong *)(pbVar7 + uVar1 * 0x18 + -8) = lVar10 + 1;
    }
  }
  plStack_e8[2] = lStack_70;
  *plStack_e8 = lStack_80;
  plStack_e8[1] = lStack_78;
  plStack_e8[3] = lStack_98;
  plStack_e8[4] = lStack_90;
  plStack_e8[5] = lStack_88;
  plStack_e8[6] = uStack_b8;
  plStack_e8[7] = (longlong)pbStack_b0;
  plStack_e8[8] = uStack_a8;
  return;
}

