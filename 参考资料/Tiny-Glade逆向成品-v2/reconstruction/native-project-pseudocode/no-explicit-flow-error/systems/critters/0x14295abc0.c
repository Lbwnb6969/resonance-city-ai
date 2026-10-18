// VA 0x14295abc0, PDB extent 1486 bytes
// system_critters::ducks_react_to_being_inside_buildings::ducks_react_to_being_inside_buildings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ducks_react_to_being_inside_buildings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::ducks_react_to_being_inside_buildings::ducks_react_to_being_inside_buildings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ducks_react_to_being_inside_buildings.rs
   Extent: 1486 */

void pdb_14295abc0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  char cVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_a8;
  
  puVar5 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar16 = *puVar5;
  uVar22 = 0;
  uVar17 = uVar16 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar16 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar17 = uVar22;
  }
  uVar20 = uVar16 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar16 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar20 = uVar22;
  }
  lStack_e0 = uVar17 * 0x10 + *(longlong *)(lVar6 + 8);
  uVar16 = *(ulonglong *)(lVar6 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar6 + 0x10) < uVar17) {
    lStack_e0 = 8;
    uVar16 = uVar22;
  }
  lStack_d8 = uVar20 * 0x10 + *(longlong *)(lVar6 + 0x28);
  uVar17 = *(ulonglong *)(lVar6 + 0x30) - uVar20;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar20) {
    lStack_d8 = 8;
    uVar17 = uVar22;
  }
  *puVar5 = (*(longlong *)(lVar6 + 0x40) - uVar17) - uVar16;
  fVar12 = _DAT_142e37838;
  lVar26 = uVar16 * 0x10 + lStack_e0;
  lVar23 = uVar17 * 0x10 + lStack_d8;
  uVar7 = *param_3;
  lVar6 = *param_2;
  lVar8 = param_2[1];
  lVar9 = *param_4;
  lVar10 = param_4[1];
LAB_14295acdc:
  do {
    if ((lStack_e0 == 0) || (lStack_e0 == lVar26)) {
      if ((lStack_d8 == 0) || (lStack_d8 == lVar23)) {
        return;
      }
      lStack_e0 = 0;
      lVar14 = lStack_d8;
      lStack_d8 = lStack_d8 + 0x10;
    }
    else {
      lVar14 = lStack_e0;
      lStack_e0 = lStack_e0 + 0x10;
    }
    *puVar5 = *puVar5 + 1;
    uVar11 = *(undefined8 *)(lVar14 + 8);
    lVar14 = pdb_140b54f80(uVar7,uVar11,&UNK_143604a70);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143604a88);
    }
  } while ((1 < *(uint *)(lVar14 + 600)) || (fVar12 < *(float *)(lVar14 + 0x284)));
  uVar15 = pdb_14092f900(lVar14);
  puVar21 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar21 + *(longlong *)(lVar6 + 0x100);
  cVar3 = *(char *)(lVar6 + 0x108);
  lVar27 = 0;
  lStack_a8 = 8;
  lStack_f0 = 0;
  lStack_f8 = 0;
  uVar16 = 0;
  do {
    if (cVar3 == '\0') {
      if ((int)uVar16 == (int)lVar27) {
        do {
          if (puVar21 == puVar1) goto LAB_14295acdc;
          uVar4 = *puVar21;
          puVar21 = puVar21 + 1;
          lVar27 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)uVar4 * 0xa0);
        } while (lVar27 == 0);
        lVar24 = *(longlong *)(lVar8 + 0x100) + (ulonglong)uVar4 * 0xa0;
        uVar16 = (ulonglong)*(uint *)(lVar24 + 0x94);
        lVar19 = *(longlong *)(lVar8 + 0x1a0) + uVar16 * 0x48;
        uVar16 = *(ulonglong *)(*(longlong *)(lVar8 + 0x1a0) + 0x40 + uVar16 * 0x48);
        if ((*(ulonglong *)(lVar6 + 0x110) < uVar16) &&
           (uVar17 = *(ulonglong *)
                      (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar6 + 0x110) * 8),
           uVar17 != 0)) {
          lStack_f0 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uVar17 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar16 <= uVar17) goto LAB_14295afd7;
LAB_14295af9e:
          uVar16 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar17 * 8);
          if (uVar16 == 0) goto LAB_14295afd7;
          lStack_f8 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar16 * 0x30);
        }
        else {
          lStack_f0 = 0;
          uVar17 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar17 < uVar16) goto LAB_14295af9e;
LAB_14295afd7:
          lStack_f8 = 0;
        }
        lStack_a8 = *(longlong *)(lVar24 + 0x50);
        uVar16 = 0;
      }
      iVar25 = (int)uVar16;
      uVar16 = (ulonglong)~*(uint *)(lStack_a8 + 8 + uVar16 * 0x10);
    }
    else {
      if ((int)uVar16 == (int)lVar27) {
        do {
          if (puVar21 == puVar1) goto LAB_14295acdc;
          uVar4 = *puVar21;
          puVar21 = puVar21 + 1;
          lVar27 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)uVar4 * 0x48);
        } while (lVar27 == 0);
        lVar19 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)uVar4 * 0x48;
        uVar16 = *(ulonglong *)(lVar19 + 0x40);
        if ((*(ulonglong *)(lVar6 + 0x110) < uVar16) &&
           (uVar17 = *(ulonglong *)
                      (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar6 + 0x110) * 8),
           uVar17 != 0)) {
          lStack_f0 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uVar17 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar16 <= uVar17) goto LAB_14295afc6;
LAB_14295af5c:
          uVar16 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar17 * 8);
          if (uVar16 == 0) goto LAB_14295afc6;
          lStack_f8 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar16 * 0x30);
        }
        else {
          lStack_f0 = 0;
          uVar17 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar17 < uVar16) goto LAB_14295af5c;
LAB_14295afc6:
          lStack_f8 = 0;
        }
        uVar16 = 0;
      }
      iVar25 = (int)uVar16;
    }
    lVar24 = uVar16 * 0x100;
    lVar19 = uVar16 * 0x30 + lStack_f8;
    fVar2 = *(float *)(lVar14 + 0x284);
    fVar28 = (float)pdb_140930390(lVar14);
    uVar16 = pdb_140b54b40(uVar7,uVar11);
    fVar29 = 0.0;
    if ((((((uVar16 & 0xffffffff) != 0) &&
          (uVar17 = uVar16 & 0xffffffff ^ 0xffffffff, uVar17 < *(ulonglong *)(lVar10 + 0x10))) &&
         (piVar18 = (int *)(uVar17 * 0x18 + *(longlong *)(lVar10 + 8)),
         piVar18[4] == (int)(uVar16 >> 0x20))) &&
        ((*piVar18 != 0 &&
         (uVar16 = *(ulonglong *)(piVar18 + 2), (uVar16 & 0xffffffff) < *(ulonglong *)(lVar9 + 0x38)
         )))) && ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (uVar16 >> 6 & 0x3ffffff) * 8) >>
                   (uVar16 & 0x3f) & 1) != 0)) {
      fVar29 = (float)pdb_140b77a00((ulonglong)(uint)~piVar18[1] * 0x58 +
                                    *(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar10 + 0x1a0) + 0x18 +
                                       (uVar16 >> 0x20) * 0x48) + 0x10 +
                                     ~*(ulonglong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar10 + 0x1a0) + 0x38 +
                                         (uVar16 >> 0x20) * 0x48) + *(longlong *)(lVar9 + 0x110) * 8
                                       ) * 0x30));
    }
    uVar16 = (ulonglong)(iVar25 + 1);
    cVar13 = pdb_140a84de0(uVar15,*(undefined4 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x18));
    if (((cVar13 != '\0') && (fVar2 <= *(float *)(lVar19 + 0x14))) &&
       (*(float *)(lVar19 + 0x14) <= fVar28 + fVar29)) {
      pdb_140a8a6f0(lVar24 + lStack_f0);
    }
  } while( true );
}

