// VA 0x142899e90, PDB extent 735 bytes
// system_onboarding::exponential_back_off::exponential_back_off::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/exponential_back_off.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::exponential_back_off::exponential_back_off::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/exponential_back_off.rs
   Extent: 735 */

undefined8 pdb_142899e90(undefined8 *param_1,float *param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 *puStack_78;
  code *pcStack_70;
  float *pfStack_68;
  code *pcStack_60;
  ulonglong *puVar8;
  
  fVar29 = param_2[1];
  if ((fVar29 == 0.0) && (!NAN(fVar29))) {
    param_2[1] = 720.0;
    fVar29 = _DAT_143398c44;
  }
  if ((param_3 & 1) == 0) {
    puVar8 = *(ulonglong **)*param_1;
    lVar1 = ((undefined8 *)*param_1)[1];
    uVar2 = *puVar8;
    uVar19 = 0;
    uVar12 = uVar2 - *(ulonglong *)(lVar1 + 0x18);
    if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
      uVar12 = uVar19;
    }
    uVar17 = uVar2 - *(ulonglong *)(lVar1 + 0x38);
    if (uVar2 < *(ulonglong *)(lVar1 + 0x38)) {
      uVar17 = uVar19;
    }
    uVar2 = *(ulonglong *)(lVar1 + 0x30);
    uVar14 = uVar2 - uVar17;
    if (uVar2 < uVar17) {
      uVar14 = uVar19;
    }
    uVar5 = *(ulonglong *)(lVar1 + 0x10);
    uVar11 = uVar5 - uVar12;
    if (uVar5 < uVar12) {
      uVar11 = uVar19;
    }
    uVar19 = *(ulonglong *)(lVar1 + 0x40);
    *puVar8 = uVar19 - (uVar11 + uVar14);
    if ((uVar5 < uVar12 || uVar5 - uVar12 == 0) && (uVar2 < uVar17 || uVar2 - uVar17 == 0))
    goto LAB_14289a071;
    *puVar8 = uVar19;
  }
  else {
    puVar18 = *(ulonglong **)param_1[2];
    lVar1 = ((undefined8 *)param_1[2])[1];
    uVar2 = *puVar18;
    puVar20 = (ulonglong *)0x0;
    puVar15 = (ulonglong *)(uVar2 - *(ulonglong *)(lVar1 + 0x18));
    if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
      puVar15 = puVar20;
    }
    puVar8 = (ulonglong *)(uVar2 - *(ulonglong *)(lVar1 + 0x38));
    if (uVar2 < *(ulonglong *)(lVar1 + 0x38)) {
      puVar8 = puVar20;
    }
    puVar3 = *(ulonglong **)(lVar1 + 0x10);
    puVar4 = *(ulonglong **)(lVar1 + 0x30);
    bVar25 = puVar4 < puVar8;
    puVar21 = (ulonglong *)((longlong)puVar4 - (longlong)puVar8);
    puVar22 = puVar21;
    if (bVar25) {
      puVar22 = puVar20;
    }
    bVar26 = puVar3 < puVar15;
    puVar23 = (ulonglong *)((longlong)puVar3 - (longlong)puVar15);
    puVar24 = puVar23;
    if (bVar26) {
      puVar24 = puVar20;
    }
    lVar10 = *(longlong *)(lVar1 + 8);
    puVar16 = (ulonglong *)((longlong)puVar22 + (longlong)puVar24);
    if (!bVar26 && puVar23 != (ulonglong *)0x0 || !bVar25 && puVar21 != (ulonglong *)0x0) {
      puVar16 = puVar20;
    }
    lVar13 = *(longlong *)(lVar1 + 0x28);
    *puVar18 = *(longlong *)(lVar1 + 0x40) - (longlong)puVar16;
    if ((bVar26 || puVar23 == (ulonglong *)0x0) && (bVar25 || puVar21 == (ulonglong *)0x0))
    goto LAB_14289a071;
    lVar13 = lVar13 + (longlong)puVar8 * 0x38;
    lVar10 = lVar10 + (longlong)puVar15 * 0x38;
    if (puVar3 < puVar15) {
      lVar10 = 8;
    }
    puVar18 = (ulonglong *)0x0;
    if (puVar15 < puVar3) {
      puVar18 = (ulonglong *)(lVar10 + -0x38 + (longlong)puVar24 * 0x38);
    }
    if (puVar4 < puVar8) {
      lVar13 = 8;
    }
    bVar25 = puVar4 <= puVar8;
    puVar8 = (ulonglong *)(lVar13 + -0x38 + (longlong)puVar22 * 0x38);
    if (bVar25) {
      puVar8 = puVar18;
    }
    if (((char)*puVar8 != '\0') ||
       (uVar7 = (int)puVar8[1] - 1, puVar8 = (ulonglong *)(ulonglong)uVar7, 1 < uVar7))
    goto LAB_14289a071;
  }
  *param_2 = 0.0;
  fVar27 = _DAT_143398c44;
  if (_DAT_143398c44 <= fVar29 * _DAT_142e37838) {
    fVar27 = fVar29 * _DAT_142e37838;
  }
  fVar29 = _DAT_1435ac7cc;
  if (fVar27 <= _DAT_1435ac7cc) {
    fVar29 = fVar27;
  }
  param_2[1] = fVar29;
  plVar6 = (longlong *)param_1[1];
  *(undefined4 *)plVar6[2] = *(undefined4 *)((longlong)plVar6 + 0x1c);
  lVar1 = *plVar6;
  lVar10 = *(longlong *)(lVar1 + 0x30);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  if (lVar10 == *(longlong *)(lVar1 + 0x20)) {
    pdb_142d7e8a0(lVar1 + 0x20);
  }
  puVar8 = *(ulonglong **)(lVar1 + 0x28);
  puVar8[lVar10] = uVar2;
  *(longlong *)(lVar1 + 0x30) = lVar10 + 1;
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
LAB_14289a071:
  uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
  if (param_4 != '\0') {
    fVar27 = *param_2;
    if (**(float **)param_1[3] <= _DAT_142e37878 && _DAT_142e37878 != **(float **)param_1[3]) {
      fVar27 = fVar27 + *(float *)(*(longlong *)param_1[4] + 0x28);
      *param_2 = fVar27;
      if (fVar29 < 0.0) {
        uStack_80 = 0;
        puStack_78 = &uStack_80;
        pcStack_70 = pdb_140f705d0;
        pfStack_68 = &fStack_7c;
        pcStack_60 = pdb_140f705d0;
        fStack_7c = fVar29;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1435ac7d0,&puStack_78,&UNK_1435ac870);
      }
      fVar28 = 0.0;
      if (0.0 <= fVar27) {
        fVar28 = fVar27;
      }
      fVar27 = fVar29;
      if (fVar28 <= fVar29) {
        fVar27 = fVar28;
      }
      *param_2 = fVar27;
    }
    if (fVar29 <= fVar27) {
      plVar6 = (longlong *)param_1[1];
      *(undefined4 *)plVar6[2] = *(undefined4 *)((longlong)plVar6 + 0x1c);
      lVar1 = *plVar6;
      lVar10 = *(longlong *)(lVar1 + 0x30);
      uVar9 = *(undefined8 *)(lVar1 + 0x40);
      if (lVar10 == *(longlong *)(lVar1 + 0x20)) {
        pdb_142d7e8a0(lVar1 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + lVar10 * 8) = uVar9;
      *(longlong *)(lVar1 + 0x30) = lVar10 + 1;
      *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
      uVar9 = 0;
    }
  }
  return uVar9;
}

