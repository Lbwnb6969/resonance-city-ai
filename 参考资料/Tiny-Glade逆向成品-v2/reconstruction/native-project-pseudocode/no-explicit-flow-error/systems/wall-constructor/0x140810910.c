// VA 0x140810910, PDB extent 2800 bytes
// system_wall_constructor::plaster_systems::split_wall_into_sides
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::plaster_systems::split_wall_into_sides
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
   Extent: 2800 */

longlong * pdb_140810910(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *******pppppppuVar4;
  ulonglong *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ushort uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Da_00;
  float fVar20;
  float fVar21;
  undefined8 ******ppppppuStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float *pfStack_108;
  code *pcStack_100;
  float afStack_f4 [45];
  
  afStack_f4[1] = -NAN;
  afStack_f4[2] = -NAN;
  if (*(int *)(param_2 + 600) != 1) {
    fVar13 = (float)pdb_140930390(param_2);
    fVar12 = _DAT_142e3798c;
    fVar19 = fVar13 - *(float *)(param_2 + 0x284);
    fVar14 = (float)pub_142e32b00(*(float *)(param_2 + 0x30) / _DAT_142e3798c);
    fVar10 = _DAT_142e3b1dc;
    fVar11 = 0.0;
    if (0.0 <= fVar14) {
      fVar11 = fVar14;
    }
    fVar14 = _DAT_142e3b1dc;
    if (fVar11 <= _DAT_142e3b1dc) {
      fVar14 = fVar11;
    }
    fVar11 = (float)pub_142e32b00(fVar19 / fVar12);
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    if (fVar12 <= fVar10) {
      fVar10 = fVar12;
    }
    uVar9 = (ushort)(int)fVar14;
    if ((ushort)(int)fVar14 < 3) {
      uVar9 = 2;
    }
    uVar6 = 2;
    if (2 < (ushort)(int)fVar10) {
      uVar6 = (ushort)(int)fVar10;
    }
    *param_1 = 0x3f80000000000000;
    *(float *)(param_1 + 1) = fVar13;
    *(float *)((longlong)param_1 + 0xc) = fVar19;
    *(ushort *)(param_1 + 2) = uVar9;
    *(ushort *)((longlong)param_1 + 0x12) = uVar6;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    param_1[0xc] = 1;
    return param_1;
  }
  uStack_128 = *(undefined8 *)(param_2 + 0x26c);
  uStack_138 = *(undefined4 *)(param_2 + 0x25c);
  uStack_134 = *(undefined4 *)(param_2 + 0x260);
  uStack_130 = *(undefined4 *)(param_2 + 0x264);
  uStack_12c = *(undefined4 *)(param_2 + 0x268);
  if ((param_3 == 0) || (cVar2 = pdb_140b77b60(param_3), cVar2 == '\0')) {
    fVar11 = (float)pdb_140930390(param_2);
    uStack_114 = 0;
    fVar12 = fVar11;
    fVar10 = fVar11;
    fStack_10c = fVar11;
  }
  else {
    cVar2 = *(char *)(param_3 + 0x3c);
    fVar10 = (float)pdb_140930390(param_2);
    if (cVar2 != '\0') {
      fVar11 = (float)pdb_140930390(param_2);
      fVar12 = (float)pdb_140b77a00(param_3);
      fVar12 = fVar12 + fVar11;
      fVar11 = (float)pdb_140930390(param_2);
      fVar13 = (float)pdb_140930390(param_2);
      uVar3 = pdb_140b77a00(param_3);
      fStack_10c = extraout_XMM0_Da + fVar13;
      uStack_110 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      uStack_114 = 0;
      goto LAB_140810b03;
    }
    fVar13 = (float)pdb_140b77a00(param_3);
    fVar12 = (float)pdb_140930390(param_2);
    fVar14 = (float)pdb_140930390(param_2);
    fVar11 = (float)pdb_140b77a00(param_3);
    fVar11 = fVar11 + fVar14;
    uVar3 = pdb_140930390(param_2);
    uStack_114 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    fVar10 = fVar10 + fVar13;
    fStack_10c = extraout_XMM0_Da_00;
  }
  uStack_110 = 0;
LAB_140810b03:
  uStack_140 = 0;
  fVar14 = (float)pdb_140df0700(&uStack_138,0);
  fVar13 = _DAT_142e36f28;
  fVar14 = fVar14 + _DAT_143007e04;
  afStack_f4[0] = fVar14;
  if ((fVar14 < 0.0) || (_DAT_142e36f28 < fVar14)) {
    pfStack_108 = afStack_f4;
    pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007f68);
  }
  fVar15 = (float)pdb_140df0700(&uStack_138,1);
  fVar19 = _DAT_142e3798c;
  fVar15 = fVar15 + _DAT_143007e08;
  afStack_f4[0] = fVar15;
  if ((fVar15 < 0.0) || (fVar13 < fVar15)) {
    pfStack_108 = afStack_f4;
    pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007f80);
  }
  fVar21 = fVar10 - *(float *)(param_2 + 0x284);
  fVar16 = (float)pub_142e32b00(((fVar15 - fVar14) * *(float *)(param_2 + 0x30)) / _DAT_142e3798c);
  fVar20 = _DAT_142e3b1dc;
  fVar18 = 0.0;
  if (0.0 <= fVar16) {
    fVar18 = fVar16;
  }
  fVar16 = _DAT_142e3b1dc;
  if (fVar18 <= _DAT_142e3b1dc) {
    fVar16 = fVar18;
  }
  fVar17 = (float)pub_142e32b00(fVar21 / fVar19);
  fVar18 = 0.0;
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
  }
  fVar17 = fVar20;
  if (fVar18 <= fVar20) {
    fVar17 = fVar18;
  }
  uVar9 = (ushort)(int)fVar16;
  if (uVar9 < 3) {
    uVar9 = 2;
  }
  uVar6 = 2;
  if (2 < (ushort)(int)fVar17) {
    uVar6 = (ushort)(int)fVar17;
  }
  puVar5 = &uStack_140;
  pppppppuVar4 = &ppppppuStack_1a0;
  if (4 < uStack_140) {
    puVar5 = &uStack_198;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
  }
  puVar8 = &uStack_140;
  uVar1 = 4;
  if (4 < uStack_140) {
    puVar8 = &uStack_198;
    uVar1 = uStack_140;
  }
  uVar7 = *puVar8;
  if (*puVar8 == uVar1) {
    pdb_142dde150(&ppppppuStack_1a0);
    pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
    puVar5 = &uStack_198;
    uVar7 = uStack_198;
  }
  *(float *)(pppppppuVar4 + uVar7 * 3) = fVar14;
  *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 4) = fVar15;
  *(float *)(pppppppuVar4 + uVar7 * 3 + 1) = fVar10;
  *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0xc) = fVar21;
  *(ushort *)(pppppppuVar4 + uVar7 * 3 + 2) = uVar9;
  *(ushort *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x12) = uVar6;
  *(char *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x14) = (char)uStack_114;
  *puVar5 = *puVar5 + 1;
  fVar10 = (float)pdb_140df0700(&uStack_138,1);
  fVar10 = fVar10 + _DAT_143007e04;
  afStack_f4[0] = fVar10;
  if ((fVar10 < 0.0) || (fVar13 < fVar10)) {
    pfStack_108 = afStack_f4;
    pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007f98);
  }
  fVar14 = (float)pdb_140df0700(&uStack_138,2);
  fVar14 = fVar14 + _DAT_143007e08;
  afStack_f4[0] = fVar14;
  if ((fVar14 < 0.0) || (fVar13 < fVar14)) {
    pfStack_108 = afStack_f4;
    pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007fb0);
  }
  fVar16 = fVar12 - *(float *)(param_2 + 0x284);
  fVar18 = (float)pub_142e32b00(((fVar14 - fVar10) * *(float *)(param_2 + 0x30)) / fVar19);
  fVar15 = 0.0;
  if (0.0 <= fVar18) {
    fVar15 = fVar18;
  }
  fVar18 = fVar20;
  if (fVar15 <= fVar20) {
    fVar18 = fVar15;
  }
  fVar21 = (float)pub_142e32b00(fVar16 / fVar19);
  fVar15 = 0.0;
  if (0.0 <= fVar21) {
    fVar15 = fVar21;
  }
  fVar21 = fVar20;
  if (fVar15 <= fVar20) {
    fVar21 = fVar15;
  }
  uVar9 = (ushort)(int)fVar18;
  if (uVar9 < 3) {
    uVar9 = 2;
  }
  uVar6 = 2;
  if (2 < (ushort)(int)fVar21) {
    uVar6 = (ushort)(int)fVar21;
  }
  puVar5 = &uStack_140;
  pppppppuVar4 = &ppppppuStack_1a0;
  if (4 < uStack_140) {
    puVar5 = &uStack_198;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
  }
  puVar8 = &uStack_140;
  uVar1 = 4;
  if (4 < uStack_140) {
    puVar8 = &uStack_198;
    uVar1 = uStack_140;
  }
  uVar7 = *puVar8;
  if (*puVar8 == uVar1) {
    pdb_142dde150(&ppppppuStack_1a0);
    pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
    puVar5 = &uStack_198;
    uVar7 = uStack_198;
  }
  *(float *)(pppppppuVar4 + uVar7 * 3) = fVar10;
  *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 4) = fVar14;
  *(float *)(pppppppuVar4 + uVar7 * 3 + 1) = fVar12;
  *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0xc) = fVar16;
  *(ushort *)(pppppppuVar4 + uVar7 * 3 + 2) = uVar9;
  *(ushort *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x12) = uVar6;
  *(char *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x14) = (char)uStack_110;
  *puVar5 = *puVar5 + 1;
  fVar12 = (float)pdb_140df0700(&uStack_138,2);
  fVar12 = fVar12 + _DAT_143007e04;
  afStack_f4[0] = fVar12;
  if ((0.0 <= fVar12) && (fVar12 <= fVar13)) {
    fVar10 = (float)pdb_140df0700(&uStack_138,3);
    fVar10 = fVar10 + _DAT_143007e08;
    afStack_f4[0] = fVar10;
    if ((fVar10 < 0.0) || (fVar13 < fVar10)) {
      pfStack_108 = afStack_f4;
      pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007fe0);
    }
    fVar18 = fVar11 - *(float *)(param_2 + 0x284);
    fVar15 = (float)pub_142e32b00(((fVar10 - fVar12) * *(float *)(param_2 + 0x30)) / fVar19);
    fVar14 = 0.0;
    if (0.0 <= fVar15) {
      fVar14 = fVar15;
    }
    fVar15 = fVar20;
    if (fVar14 <= fVar20) {
      fVar15 = fVar14;
    }
    fVar16 = (float)pub_142e32b00(fVar18 / fVar19);
    fVar14 = 0.0;
    if (0.0 <= fVar16) {
      fVar14 = fVar16;
    }
    fVar16 = fVar20;
    if (fVar14 <= fVar20) {
      fVar16 = fVar14;
    }
    uVar9 = (ushort)(int)fVar15;
    if (uVar9 < 3) {
      uVar9 = 2;
    }
    uVar6 = 2;
    if (2 < (ushort)(int)fVar16) {
      uVar6 = (ushort)(int)fVar16;
    }
    puVar5 = &uStack_140;
    pppppppuVar4 = &ppppppuStack_1a0;
    if (4 < uStack_140) {
      puVar5 = &uStack_198;
      pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
    }
    puVar8 = &uStack_140;
    uVar1 = 4;
    if (4 < uStack_140) {
      puVar8 = &uStack_198;
      uVar1 = uStack_140;
    }
    uVar7 = *puVar8;
    if (*puVar8 == uVar1) {
      pdb_142dde150(&ppppppuStack_1a0);
      pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
      puVar5 = &uStack_198;
      uVar7 = uStack_198;
    }
    *(float *)(pppppppuVar4 + uVar7 * 3) = fVar12;
    *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 4) = fVar10;
    *(float *)(pppppppuVar4 + uVar7 * 3 + 1) = fVar11;
    *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0xc) = fVar18;
    *(ushort *)(pppppppuVar4 + uVar7 * 3 + 2) = uVar9;
    *(ushort *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x12) = uVar6;
    *(char *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x14) = (char)uStack_114;
    *puVar5 = *puVar5 + 1;
    fVar12 = (float)pdb_140df0700(&uStack_138,3);
    fVar12 = fVar12 + _DAT_143007e04;
    afStack_f4[0] = fVar12;
    if ((0.0 <= fVar12) && (fVar12 <= fVar13)) {
      fVar11 = (float)pdb_140df0700(&uStack_138,4);
      fVar10 = fStack_10c;
      fVar11 = fVar11 + _DAT_143007e08;
      afStack_f4[0] = fVar11;
      if ((0.0 <= fVar11) && (fVar11 <= fVar13)) {
        fVar15 = fStack_10c - *(float *)(param_2 + 0x284);
        fVar14 = (float)pub_142e32b00(((fVar11 - fVar12) * *(float *)(param_2 + 0x30)) / fVar19);
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar14 = fVar20;
        if (fVar13 <= fVar20) {
          fVar14 = fVar13;
        }
        fVar19 = (float)pub_142e32b00(fVar15 / fVar19);
        fVar13 = 0.0;
        if (0.0 <= fVar19) {
          fVar13 = fVar19;
        }
        if (fVar13 <= fVar20) {
          fVar20 = fVar13;
        }
        uVar9 = (ushort)(int)fVar14;
        if ((ushort)(int)fVar14 < 3) {
          uVar9 = 2;
        }
        uVar6 = 2;
        if (2 < (ushort)(int)fVar20) {
          uVar6 = (ushort)(int)fVar20;
        }
        puVar5 = &uStack_140;
        pppppppuVar4 = &ppppppuStack_1a0;
        if (4 < uStack_140) {
          puVar5 = &uStack_198;
          pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
        }
        puVar8 = &uStack_140;
        uVar1 = 4;
        if (4 < uStack_140) {
          puVar8 = &uStack_198;
          uVar1 = uStack_140;
        }
        uVar7 = *puVar8;
        if (*puVar8 == uVar1) {
          pdb_142dde150(&ppppppuStack_1a0);
          puVar5 = &uStack_198;
          uVar7 = uStack_198;
          pppppppuVar4 = (undefined8 *******)ppppppuStack_1a0;
          fVar10 = fStack_10c;
        }
        *(float *)(pppppppuVar4 + uVar7 * 3) = fVar12;
        *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 4) = fVar11;
        *(float *)(pppppppuVar4 + uVar7 * 3 + 1) = fVar10;
        *(float *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0xc) = fVar15;
        *(ushort *)(pppppppuVar4 + uVar7 * 3 + 2) = uVar9;
        *(ushort *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x12) = uVar6;
        *(undefined1 *)((longlong)pppppppuVar4 + uVar7 * 0x18 + 0x14) = (undefined1)uStack_110;
        *puVar5 = *puVar5 + 1;
        param_1[0xc] = uStack_140;
        param_1[10] = lStack_150;
        param_1[0xb] = lStack_148;
        param_1[8] = lStack_160;
        param_1[9] = lStack_158;
        param_1[6] = lStack_170;
        param_1[7] = lStack_168;
        param_1[4] = lStack_180;
        param_1[5] = lStack_178;
        param_1[2] = lStack_190;
        param_1[3] = lStack_188;
        *param_1 = (longlong)ppppppuStack_1a0;
        param_1[1] = uStack_198;
        return param_1;
      }
      pfStack_108 = afStack_f4;
      pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143008010);
    }
    pfStack_108 = afStack_f4;
    pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007ff8);
  }
  pfStack_108 = afStack_f4;
  pcStack_100 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143007fc8);
}

