// VA 0x141483630, PDB extent 1487 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 1487 */

ulonglong * pdb_141483630(ulonglong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  byte *arg0;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  float fVar15;
  longlong lStack_130;
  byte *pbStack_128;
  undefined1 *puStack_120;
  ulonglong *puStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  byte *pbStack_100;
  undefined1 *puStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c0;
  undefined1 *puStack_b8;
  byte *pbStack_b0;
  undefined1 *puStack_a8;
  byte *pbStack_a0;
  undefined1 auStack_93 [2];
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_108 = *(undefined1 **)(param_2 + 0x90);
  uStack_e0 = *(ulonglong *)(param_2 + 0x98);
  pbStack_100 = puStack_108 + uStack_e0 * 0xc;
  puStack_f8 = *(undefined1 **)(param_2 + 0xe0);
  uVar6 = *(ulonglong *)(param_2 + 0xe8);
  lStack_f0 = (longlong)puStack_f8 + uVar6 * 4;
  if (uVar6 < uStack_e0) {
    uStack_e0 = uVar6;
  }
  uStack_e8 = 0;
  lStack_d8 = param_2;
  lStack_d0 = param_3;
  pdb_1413ee6c0(&lStack_130,&puStack_108);
  puStack_108 = auStack_93;
  if (puStack_120 < (undefined1 *)0x2) {
    pbVar12 = pbStack_128;
    if (puStack_120 == (undefined1 *)0x0) {
      puStack_b8 = (undefined1 *)0x0;
      pbStack_b0 = (byte *)0x4;
      puStack_a8 = (undefined1 *)0x0;
      arg0 = pbStack_128;
      goto joined_r0x00014148385c;
    }
  }
  else {
    pbStack_a0 = pbStack_128;
    if (puStack_120 < (undefined1 *)0x15) {
      uStack_91 = 1;
      pdb_141460180(pbStack_128,puStack_120,1,&puStack_108);
      pbVar12 = pbStack_a0;
    }
    else {
      uStack_91 = 1;
      pdb_141465a80(pbStack_128,puStack_120,&puStack_108);
      pbVar12 = pbStack_a0;
    }
  }
  uVar6 = (longlong)puStack_120 * 0x14;
  puStack_118 = param_1;
  lStack_110 = param_3;
  pdb_14007ee60();
  pbStack_b0 = pub_1406abab0(uVar6,4);
  fVar4 = _DAT_142e37870;
  uVar10 = _DAT_142e377e0;
  pbStack_a0 = pbVar12;
  if (pbStack_b0 == (byte *)0x0) {
    uStack_91 = 1;
    pdb_142dc7e2a(4,uVar6);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  puStack_b8 = puStack_120;
  puStack_a8 = (undefined1 *)0x0;
  lStack_c0 = lStack_130;
  pbVar13 = pbVar12 + uVar6;
  do {
    while( true ) {
      puVar11 = puStack_a8;
      uVar7 = *(undefined8 *)pbVar12;
      uVar5 = *(undefined8 *)(pbVar12 + 8);
      fVar15 = (float)((ulonglong)uVar5 >> 0x20);
      fVar1 = *(float *)(pbVar12 + 0x10);
      if (((puStack_a8 != (undefined1 *)0x0) &&
          (pbStack_b0 + (longlong)puStack_a8 * 0x14 != (byte *)0x14)) &&
         ((float)((uint)(*(float *)(pbStack_b0 + (longlong)puStack_a8 * 0x14 + -0xc) - (float)uVar5)
                 & uVar10) <= fVar4)) break;
      if (puStack_a8 == puStack_b8) {
        pdb_142d8d5c0(&puStack_b8);
      }
      *(undefined8 *)(pbStack_b0 + (longlong)puVar11 * 0x14) = uVar7;
      *(undefined8 *)(pbStack_b0 + (longlong)puVar11 * 0x14 + 8) = uVar5;
      *(float *)(pbStack_b0 + (longlong)puVar11 * 0x14 + 0x10) = fVar1;
      puStack_a8 = puVar11 + 1;
      pbVar12 = pbVar12 + 0x14;
      param_1 = puStack_118;
      param_3 = lStack_110;
      lStack_130 = lStack_c0;
      arg0 = pbStack_a0;
      if (pbVar12 == pbVar13) goto joined_r0x00014148385c;
    }
    fVar2 = *(float *)(pbStack_b0 + (longlong)puStack_a8 * 0x14 + -8);
    fVar3 = *(float *)(pbStack_b0 + (longlong)puStack_a8 * 0x14 + -4);
    fVar9 = fVar15;
    if (fVar2 <= fVar15) {
      fVar9 = fVar2;
    }
    *(uint *)(pbStack_b0 + (longlong)puStack_a8 * 0x14 + -8) =
         ~-(uint)NAN(fVar2) & (uint)fVar9 | -(uint)NAN(fVar2) & (uint)fVar15;
    fVar15 = fVar1;
    if (fVar1 <= fVar3) {
      fVar15 = fVar3;
    }
    *(uint *)(pbStack_b0 + (longlong)puStack_a8 * 0x14 + -4) =
         ~-(uint)NAN(fVar3) & (uint)fVar15 | -(uint)NAN(fVar3) & (uint)fVar1;
    pbVar12 = pbVar12 + 0x14;
    param_1 = puStack_118;
    param_3 = lStack_110;
    lStack_130 = lStack_c0;
    arg0 = pbStack_a0;
  } while (pbVar12 != pbVar13);
joined_r0x00014148385c:
  if (lStack_130 != 0) {
    pub_1406abac0(arg0,lStack_130 * 0x14,4);
  }
  puVar11 = puStack_a8;
  puStack_f8 = puStack_a8;
  puStack_108 = puStack_b8;
  pbStack_100 = pbStack_b0;
  if (*(int *)(param_2 + 600) == 2) {
    bVar14 = false;
  }
  else if (puStack_a8 == (undefined1 *)0x0) {
    bVar14 = true;
  }
  else {
    uVar5 = *(undefined8 *)pbStack_b0;
    fVar4 = *(float *)(pbStack_b0 + 8);
    uVar7 = *(undefined8 *)(pbStack_b0 + 0xc);
    fVar1 = *(float *)(param_3 + 0x3c);
    if (puStack_a8 == puStack_b8) {
      pbStack_a0 = arg0;
      pdb_142d8d5c0(&puStack_108);
    }
    *(undefined8 *)(pbStack_100 + (longlong)puVar11 * 0x14) = uVar5;
    *(float *)(pbStack_100 + (longlong)puVar11 * 0x14 + 8) = fVar4 + fVar1;
    *(undefined8 *)(pbStack_100 + (longlong)puVar11 * 0x14 + 0xc) = uVar7;
    puStack_f8 = puVar11 + 1;
    bVar14 = *(int *)(param_2 + 600) != 2;
  }
  param_1[2] = (ulonglong)puStack_f8;
  *param_1 = (ulonglong)puStack_108;
  param_1[1] = (ulonglong)pbStack_100;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x3c);
  *(bool *)((longlong)param_1 + 0x1c) = bVar14;
  return param_1;
}

