// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::new
// VA 0x141483630, PDB extent 1487 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::new
   Extent: 1487 bytes. No whole-program auto-analysis. */

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
  longlong lVar9;
  float fVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  float fVar17;
  longlong lStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  ulonglong *puStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_93 [2];
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_108 = *(undefined1 **)(param_2 + 0x90);
  uStack_e0 = *(ulonglong *)(param_2 + 0x98);
  puStack_100 = (undefined8 *)(puStack_108 + uStack_e0 * 0xc);
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
    puVar14 = puStack_128;
    if (puStack_120 == (undefined1 *)0x0) {
      puStack_b8 = (undefined1 *)0x0;
      puStack_b0 = (undefined8 *)0x4;
      puStack_a8 = (undefined1 *)0x0;
      puVar11 = puStack_128;
      goto joined_r0x00014148385c;
    }
  }
  else {
    puStack_a0 = puStack_128;
    if (puStack_120 < (undefined1 *)0x15) {
      uStack_91 = 1;
      pdb_141460180(puStack_128,puStack_120,1,&puStack_108);
      puVar14 = puStack_a0;
    }
    else {
      uStack_91 = 1;
      pdb_141465a80(puStack_128,puStack_120,&puStack_108);
      puVar14 = puStack_a0;
    }
  }
  lVar9 = (longlong)puStack_120 * 0x14;
  puStack_118 = param_1;
  lStack_110 = param_3;
  pdb_14007ee60();
  puStack_b0 = (undefined8 *)func_0x0001406abab0(lVar9,4);
  fVar4 = _DAT_142e37870;
  uVar12 = _DAT_142e377e0;
  puStack_a0 = puVar14;
  if (puStack_b0 == (undefined8 *)0x0) {
    uStack_91 = 1;
    pdb_142dc7e2a(4,lVar9);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  puStack_b8 = puStack_120;
  puStack_a8 = (undefined1 *)0x0;
  lStack_c0 = lStack_130;
  puVar15 = (undefined8 *)(lVar9 + (longlong)puVar14);
  do {
    while( true ) {
      puVar13 = puStack_a8;
      uVar7 = *puVar14;
      uVar5 = puVar14[1];
      fVar17 = (float)((ulonglong)uVar5 >> 0x20);
      fVar1 = *(float *)(puVar14 + 2);
      if (((puStack_a8 != (undefined1 *)0x0) &&
          ((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 != 0x14)) &&
         ((float)((uint)(*(float *)((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 + -0xc) -
                        (float)uVar5) & uVar12) <= fVar4)) break;
      if (puStack_a8 == puStack_b8) {
        pdb_142d8d5c0(&puStack_b8);
      }
      *(undefined8 *)((longlong)puStack_b0 + (longlong)puVar13 * 0x14) = uVar7;
      *(undefined8 *)((longlong)puStack_b0 + (longlong)puVar13 * 0x14 + 8) = uVar5;
      *(float *)((longlong)puStack_b0 + (longlong)puVar13 * 0x14 + 0x10) = fVar1;
      puStack_a8 = puVar13 + 1;
      puVar14 = (undefined8 *)((longlong)puVar14 + 0x14);
      param_1 = puStack_118;
      param_3 = lStack_110;
      lStack_130 = lStack_c0;
      puVar11 = puStack_a0;
      if (puVar14 == puVar15) goto joined_r0x00014148385c;
    }
    fVar2 = *(float *)((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 + -8);
    fVar3 = *(float *)((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 + -4);
    fVar10 = fVar17;
    if (fVar2 <= fVar17) {
      fVar10 = fVar2;
    }
    *(uint *)((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 + -8) =
         ~-(uint)NAN(fVar2) & (uint)fVar10 | -(uint)NAN(fVar2) & (uint)fVar17;
    fVar17 = fVar1;
    if (fVar1 <= fVar3) {
      fVar17 = fVar3;
    }
    *(uint *)((longlong)puStack_b0 + (longlong)puStack_a8 * 0x14 + -4) =
         ~-(uint)NAN(fVar3) & (uint)fVar17 | -(uint)NAN(fVar3) & (uint)fVar1;
    puVar14 = (undefined8 *)((longlong)puVar14 + 0x14);
    param_1 = puStack_118;
    param_3 = lStack_110;
    lStack_130 = lStack_c0;
    puVar11 = puStack_a0;
  } while (puVar14 != puVar15);
joined_r0x00014148385c:
  if (lStack_130 != 0) {
    func_0x0001406abac0(puVar11,lStack_130 * 0x14,4);
  }
  puVar13 = puStack_a8;
  puStack_f8 = puStack_a8;
  puStack_108 = puStack_b8;
  puStack_100 = puStack_b0;
  if (*(int *)(param_2 + 600) == 2) {
    bVar16 = false;
  }
  else if (puStack_a8 == (undefined1 *)0x0) {
    bVar16 = true;
  }
  else {
    uVar5 = *puStack_b0;
    fVar4 = *(float *)(puStack_b0 + 1);
    uVar7 = *(undefined8 *)((longlong)puStack_b0 + 0xc);
    fVar1 = *(float *)(param_3 + 0x3c);
    if (puStack_a8 == puStack_b8) {
      puStack_a0 = puVar11;
      pdb_142d8d5c0(&puStack_108);
    }
    *(undefined8 *)((longlong)puStack_100 + (longlong)puVar13 * 0x14) = uVar5;
    *(float *)((longlong)puStack_100 + (longlong)puVar13 * 0x14 + 8) = fVar4 + fVar1;
    *(undefined8 *)((longlong)puStack_100 + (longlong)puVar13 * 0x14 + 0xc) = uVar7;
    puStack_f8 = puVar13 + 1;
    bVar16 = *(int *)(param_2 + 600) != 2;
  }
  param_1[2] = (ulonglong)puStack_f8;
  *param_1 = (ulonglong)puStack_108;
  param_1[1] = (ulonglong)puStack_100;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x3c);
  *(bool *)((longlong)param_1 + 0x1c) = bVar16;
  return param_1;
}

