// VA 0x140844990, PDB extent 2640 bytes
// system_wall_constructor::stone_foundation_surface_systems::append_stone_foundation_surface_face
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::stone_foundation_surface_systems::append_stone_foundation_surface_face
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
   Extent: 2640 */

void pdb_140844990(longlong param_1,undefined8 *param_2,ulonglong *param_3,longlong param_4,
                  undefined1 param_5,ulonglong *param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte **ppbVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulonglong uStack_170;
  ulonglong uStack_168;
  byte *apbStack_160 [2];
  ulonglong uStack_150;
  byte *apbStack_148 [5];
  ulonglong *puStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong uStack_108;
  ulonglong *puStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  uVar23 = param_2[1];
  if (uVar23 < 2) {
    return;
  }
  if (param_2[3] != uVar23) {
    return;
  }
  if (param_3 != (ulonglong *)0x0 && param_4 == 0) {
    return;
  }
  uVar14 = uVar23 * 2;
  puVar7 = (undefined8 *)(uVar23 * 0x60);
  if (uVar14 < 0x2aaaaaaaaaaaaab) goto LAB_140844a44;
  uVar18 = 0;
  do {
    param_2 = puVar7;
    pdb_142dc7e2a(uVar18);
LAB_140844a44:
    uVar2 = *param_2;
    lStack_f0 = param_2[2];
    puStack_100 = param_3;
    uStack_d0 = uVar23;
    if (puVar7 == (undefined8 *)0x0) {
      uStack_e8 = 0;
      pbStack_e0 = (byte *)0x4;
      lVar8 = uVar23 * 0x30;
      goto LAB_140844acf;
    }
    pdb_14007ee60();
    uVar18 = 4;
    pbStack_e0 = pub_1406abab0((ulonglong)puVar7,4);
  } while (pbStack_e0 == (byte *)0x0);
  uStack_d8 = 0;
  lVar8 = uStack_d0 * 0x30;
  uStack_e8 = uVar14;
  if ((longlong)uStack_d0 < 0) {
LAB_140844acf:
    uStack_d8 = 0;
    pdb_142d7f1b0(&uStack_e8,0,uStack_d0,4,0x30);
  }
  uVar23 = uStack_d8;
  pbVar16 = pbStack_e0;
  pub_142e32760(pbStack_e0 + uStack_d8 * 0x30,uVar2,lVar8);
  uStack_d8 = uVar23 + uStack_d0;
  if (uStack_e8 - uStack_d8 < uStack_d0) {
    pdb_142d7f1b0(&uStack_e8,uStack_d8,uStack_d0,4,0x30);
    pbVar16 = pbStack_e0;
  }
  uVar23 = uStack_d0;
  uVar14 = uStack_d8;
  pub_142e32760(pbVar16 + uStack_d8 * 0x30,lStack_f0,lVar8);
  uVar14 = uVar14 + uVar23;
  uStack_d8 = uVar14;
  uVar18 = pdb_140e1cff0(uVar14 * 0x30,0x210);
  pbVar16 = pbStack_e0;
  pdb_141472d90(&uStack_170,param_1,&UNK_14300b1c0,0x18,uVar18,pbStack_e0,uVar14 * 0x30);
  uVar23 = uStack_168;
  if (uStack_170 == 0xb) {
    pbStack_110 = pbVar16;
    uStack_108 = uStack_168;
    pcVar3 = *(code **)(param_1 + 0x520);
    uVar18 = *(undefined8 *)(param_1 + 0x658);
    uStack_c1 = 1;
    uStack_f8 = uVar14;
    puVar7 = (undefined8 *)pdb_140e17330(&uStack_108);
    apbStack_160[0] = (byte *)*puVar7;
    uStack_170 = CONCAT44(uStack_170._4_4_,0x3b9e8321);
    uStack_168 = 0;
    lStack_f0 = (*pcVar3)(uVar18,&uStack_170);
    uStack_170 = uVar23;
    lVar8 = param_7[2];
    if (lVar8 == *param_7) {
      pdb_142db0920(param_7);
    }
    *(ulonglong *)(param_7[1] + lVar8 * 8) = uVar23;
    param_7[2] = lVar8 + 1;
    uVar23 = param_6[2];
    puVar19 = &uStack_170;
    if (puStack_100 != (ulonglong *)0x0) {
      puVar19 = puStack_100;
    }
    uStack_170 = (ulonglong)((int)uStack_d0 - 1) << 0x20;
    if (puStack_100 == (ulonglong *)0x0) {
      param_4 = 1;
    }
    puStack_120 = puVar19 + param_4;
    uStack_118 = uVar23;
    while (puVar20 = puVar19, fVar5 = _DAT_142e37830, fVar4 = _DAT_142e36f28, puVar20 != puStack_120
          ) {
      puStack_100 = puVar20 + 1;
      uVar21 = (uint)*puVar20;
      while( true ) {
        uVar15 = *(uint *)((longlong)puVar20 + 4) - uVar21;
        puVar19 = puStack_100;
        if (*(uint *)((longlong)puVar20 + 4) < uVar21 || uVar15 == 0) break;
        if (0x1f < uVar15) {
          uVar15 = 0x20;
        }
        if (uVar23 == *param_6) {
          uStack_c1 = 0;
          pdb_142d7ede0(param_6);
        }
        uVar14 = param_6[1];
        puVar7 = (undefined8 *)(uVar14 + uVar23 * 0x28);
        *puVar7 = 0;
        puVar7[1] = 0;
        *(ulonglong *)(uVar14 + 0x10 + uVar23 * 0x28) = (ulonglong)uVar21 * 0x30 + lStack_f0;
        *(uint *)(uVar14 + 0x18 + uVar23 * 0x28) = uVar15;
        *(int *)(uVar14 + 0x1c + uVar23 * 0x28) = (int)uStack_d0;
        *(undefined1 *)(uVar14 + 0x20 + uVar23 * 0x28) = param_5;
        uVar23 = uVar23 + 1;
        param_6[2] = uVar23;
        uVar21 = uVar21 + uVar15;
      }
    }
    if (uVar23 < uStack_118) {
      uStack_c1 = 0;
      pdb_142dc8420(uStack_118,uVar23,uVar23,&UNK_14300b1d8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pbVar16 = pbStack_110;
    if (uVar23 - uStack_118 != 0) {
      puVar17 = (undefined8 *)(uStack_118 * 0x28 + param_6[1]);
      puVar7 = puVar17 + (uVar23 - uStack_118) * 5;
      do {
        uVar21 = *(uint *)(puVar17 + 3);
        iVar12 = (int)((ulonglong)(puVar17[2] - lStack_f0) / 0x30);
        if (uStack_f8 <= (ulonglong)(longlong)iVar12) {
LAB_140845158:
          uStack_c1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,uStack_f8,&UNK_14300b2b8);
        }
        iVar1 = *(int *)((longlong)puVar17 + 0x1c);
        uVar23 = (ulonglong)(iVar1 + iVar12);
        if (uStack_f8 <= uVar23) {
LAB_14084513e:
          uStack_c1 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uStack_f8,&UNK_14300b2d0);
        }
        uVar22 = (uint)(uVar21 != 0);
        lVar10 = (longlong)iVar12 * 0x30;
        lVar8 = uVar23 * 0x30;
        fVar31 = (float)*(undefined8 *)(pbStack_110 + lVar10);
        fVar29 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + lVar10) >> 0x20);
        fVar26 = (float)*(undefined8 *)(pbStack_110 + lVar8);
        fVar30 = fVar31 + 0.0 + fVar26;
        fVar27 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + lVar8) >> 0x20);
        fVar32 = fVar29 + 0.0 + fVar27;
        fVar28 = *(float *)(pbStack_110 + lVar10 + 8) + 0.0 + *(float *)(pbStack_110 + lVar8 + 8);
        bVar24 = (uVar21 != 0) <= uVar21;
        fVar25 = fVar5;
        uVar15 = uVar22;
        if (bVar24 && uVar21 != 0) {
          do {
            uVar13 = uVar15 + (uVar15 < uVar21);
            iVar6 = uVar15 + iVar12;
            if (uStack_f8 <= (ulonglong)(longlong)iVar6) goto LAB_140845158;
            uVar23 = (ulonglong)(iVar6 + iVar1);
            if (uStack_f8 <= uVar23) goto LAB_14084513e;
            lVar11 = (longlong)iVar6 * 0x30;
            fVar30 = (float)*(undefined8 *)(pbStack_110 + uVar23 * 0x30) +
                     fVar30 + (float)*(undefined8 *)(pbStack_110 + lVar11);
            fVar32 = (float)((ulonglong)*(undefined8 *)(pbStack_110 + uVar23 * 0x30) >> 0x20) +
                     fVar32 + (float)((ulonglong)*(undefined8 *)(pbStack_110 + lVar11) >> 0x20);
            fVar28 = fVar28 + *(float *)(pbStack_110 + lVar11 + 8) +
                     *(float *)(pbStack_110 + uVar23 * 0x30 + 8);
            fVar25 = fVar25 + fVar5;
          } while ((uVar15 < uVar21) && (uVar15 = uVar13, uVar13 <= uVar21));
        }
        fVar25 = fVar4 / fVar25;
        fVar30 = fVar25 * fVar30;
        fVar32 = fVar25 * fVar32;
        fVar25 = fVar25 * fVar28;
        fVar31 = fVar30 - fVar31;
        fVar28 = fVar25 - *(float *)(pbStack_110 + lVar10 + 8);
        fVar29 = fVar32 - fVar29;
        fVar31 = fVar31 * fVar31 + fVar29 * fVar29 + fVar28 * fVar28;
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        fVar29 = fVar25 - *(float *)(pbStack_110 + lVar8 + 8);
        fVar26 = fVar30 - fVar26;
        fVar27 = fVar32 - fVar27;
        fVar26 = fVar29 * fVar29 + fVar27 * fVar27 + fVar26 * fVar26;
        if (fVar26 <= fVar31) {
          fVar26 = fVar31;
        }
        if (bVar24 && uVar21 != 0) {
          do {
            uVar15 = uVar22 + (uVar22 < uVar21);
            uVar23 = (ulonglong)(int)(uVar22 + iVar12);
            if (uStack_f8 <= uVar23) {
              uStack_c1 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar23,uStack_f8,&UNK_14300b288);
            }
            uVar14 = (ulonglong)(int)(uVar22 + iVar12 + iVar1);
            if (uStack_f8 <= uVar14) {
              uStack_c1 = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar14,uStack_f8,&UNK_14300b2a0);
            }
            fVar27 = fVar32 - (float)*(undefined8 *)(pbStack_110 + uVar23 * 0x30 + 4);
            fVar31 = fVar25 - (float)((ulonglong)*(undefined8 *)(pbStack_110 + uVar23 * 0x30 + 4) >>
                                     0x20);
            fVar31 = fVar31 * fVar31 +
                     (fVar30 - *(float *)(pbStack_110 + uVar23 * 0x30)) *
                     (fVar30 - *(float *)(pbStack_110 + uVar23 * 0x30)) + fVar27 * fVar27;
            fVar27 = fVar31;
            if (fVar31 <= fVar26) {
              fVar27 = fVar26;
            }
            fVar27 = (float)(~-(uint)NAN(fVar26) & (uint)fVar27 | -(uint)NAN(fVar26) & (uint)fVar31)
            ;
            fVar26 = fVar30 - (float)*(undefined8 *)(pbStack_110 + uVar14 * 0x30);
            fVar31 = fVar32 - (float)((ulonglong)*(undefined8 *)(pbStack_110 + uVar14 * 0x30) >>
                                     0x20);
            fVar31 = (fVar25 - *(float *)(pbStack_110 + uVar14 * 0x30 + 8)) *
                     (fVar25 - *(float *)(pbStack_110 + uVar14 * 0x30 + 8)) +
                     fVar31 * fVar31 + fVar26 * fVar26;
            fVar26 = fVar31;
            if (fVar31 <= fVar27) {
              fVar26 = fVar27;
            }
            fVar26 = (float)(~-(uint)NAN(fVar27) & (uint)fVar26 | -(uint)NAN(fVar27) & (uint)fVar31)
            ;
          } while ((uVar22 < uVar21) && (uVar22 = uVar15, uVar15 <= uVar21));
        }
        *puVar17 = CONCAT44(fVar32,fVar30);
        *(float *)(puVar17 + 1) = fVar25;
        *(float *)((longlong)puVar17 + 0xc) = SQRT(fVar26);
        puVar17 = puVar17 + 5;
      } while (puVar17 != puVar7);
    }
    goto LAB_140845092;
  }
  lVar8 = 0;
  if (7 < uStack_170) {
    lVar8 = uStack_170 - 8;
  }
  if (lVar8 == 0) {
    if (((uStack_170 < 6) && ((0x32UL >> (uStack_170 & 0x3f) & 1) != 0)) && (uStack_168 != 0)) {
      pub_1406abac0(apbStack_160[0],uStack_168,1);
    }
    if (uStack_150 == 0) goto LAB_140845092;
    ppbVar9 = apbStack_148;
  }
  else {
    if (lVar8 == 1) {
      pdb_1404b83f0(&uStack_168);
      goto LAB_140845092;
    }
    if (uStack_168 == 0) goto LAB_140845092;
    ppbVar9 = apbStack_160;
    uStack_150 = uStack_168;
  }
  pub_1406abac0(*ppbVar9,uStack_150,1);
LAB_140845092:
  if (uStack_e8 != 0) {
    pub_1406abac0(pbVar16,uStack_e8 * 0x30,4);
  }
  return;
}

