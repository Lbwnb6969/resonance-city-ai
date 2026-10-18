// VA 0x1428958a0, PDB extent 1490 bytes
// system_onboarding::hint_camera_controls::hint_camera_display_condition
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_camera_controls::hint_camera_display_condition
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_controls.rs
   Extent: 1490 */

void pdb_1428958a0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,float *param_8,
                  longlong *param_9,longlong *param_10)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  code *pcVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  char cStack_12f;
  undefined6 uStack_12e;
  char acStack_128 [8];
  code *pcStack_120;
  undefined1 uStack_118;
  code *pcStack_110;
  undefined1 uStack_108;
  code *pcStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 *puStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  float *pfStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float *pfStack_a0;
  float *pfStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  acStack_128[0] = '\n';
  pcStack_120 = pdb_14289beb0;
  uStack_118 = 0xb;
  pcStack_110 = pdb_14289c0f0;
  uStack_108 = 0xc;
  pcStack_100 = pdb_14289c030;
  piVar3 = (int *)*param_4;
  if (*piVar3 != 1) {
    return;
  }
  lStack_f8 = *param_2;
  if (((*(char *)(lStack_f8 + 0x406) == '\x01') && (*(char *)(lStack_f8 + 0x407) != '\0')) &&
     (*(char *)(lStack_f8 + 0x408) == '\x01')) {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    *piVar3 = 2;
  }
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0') {
    bVar21 = *(int *)(pcVar4 + 8) - 1U < 2;
    bVar22 = false;
    cVar11 = pdb_1408ff980(*param_6);
    fVar9 = _DAT_142e36f28;
    fVar10 = _DAT_142e3798c;
  }
  else {
    if (*pcVar4 == '\x01') {
      bVar22 = pcVar4[1] != '\0';
    }
    else {
      bVar22 = false;
    }
    bVar21 = false;
    cVar11 = pdb_1408ff980(*param_6);
    fVar9 = _DAT_142e36f28;
    fVar10 = _DAT_142e3798c;
  }
  if (cVar11 == '\0') {
    if (bVar22 || bVar21) {
      _DAT_142e36f28 = fVar9;
      _DAT_142e3798c = fVar10;
      return;
    }
  }
  else if ((bVar22 || bVar21) || *pcVar4 == '\x05') {
    _DAT_142e36f28 = fVar9;
    _DAT_142e3798c = fVar10;
    return;
  }
  lVar5 = *param_5;
  lVar6 = param_5[1];
  fVar24 = *param_8;
  pfVar19 = (float *)*param_7;
  lStack_e0 = *param_10;
  uStack_a8 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_c0 = *param_3;
  puStack_f0 = (undefined4 *)param_3[2];
  bVar16 = *(byte *)(param_8 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_b0 = *param_9;
  puStack_d8 = (undefined4 *)param_9[2];
  pfStack_98 = pfVar19 + 2;
  pfStack_a0 = pfVar19 + 1;
  lStack_c8 = lStack_b0 + 0x20;
  lStack_e8 = lStack_c0 + 0x18;
  lVar17 = 0;
  _DAT_142e36f28 = fVar9;
  _DAT_142e3798c = fVar10;
  pfStack_b8 = pfVar19;
  do {
    cVar11 = acStack_128[lVar17];
    pcVar20 = *(code **)((longlong)&pcStack_120 + lVar17);
    if (*(char *)(lVar5 + 0x108) == '\0') {
      lVar15 = 0;
      do {
        if (*(longlong *)(lVar5 + 0x100) << 2 == lVar15) goto LAB_142895c20;
        lVar18 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0xf8) + lVar15) * 0xa0;
        lVar15 = lVar15 + 4;
      } while (*(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + lVar18) == 0);
      lVar18 = *(longlong *)(lVar6 + 0x100) + lVar18;
      uVar12 = (ulonglong)*(uint *)(lVar18 + 0x94);
      if (*(ulonglong *)(lVar5 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar6 + 0x1a0) + 0x40 + uVar12 * 0x48)) {
        lVar15 = *(longlong *)(lVar6 + 0x1a0) + uVar12 * 0x48;
        uVar12 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8);
        if (uVar12 == 0) goto LAB_142895c51;
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar12 * 0x30);
      }
      else {
LAB_142895c51:
        lVar15 = 0;
      }
      if (*(char *)((ulonglong)~*(uint *)(*(longlong *)(lVar18 + 0x50) + 8) + lVar15) != cVar11)
      goto LAB_142895c20;
LAB_142895c64:
      if (cVar11 == '\n') {
        if ((fVar9 < pfVar19[3] || fVar9 == pfVar19[3]) || (fVar23 = *pfVar19, fVar23 < fVar9))
        goto LAB_142895cee;
LAB_142895cbf:
        if ((fVar23 < fVar9) || (*pfStack_a0 < fVar9)) {
          bVar16 = false;
        }
        else {
          bVar16 = fVar9 <= *pfStack_98;
        }
        *(byte *)(param_8 + 1) = bVar16;
        fVar24 = fVar10;
      }
      else if (cVar11 == '\v') {
        if (pfVar19[4] <= fVar9 && fVar9 != pfVar19[4]) {
          fVar23 = *pfStack_a0;
          goto joined_r0x000142895ca5;
        }
      }
      else {
        if (cVar11 != '\f') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1435ac44c,0x28,&UNK_1435ac4b0);
        }
        if (pfVar19[5] <= fVar9 && fVar9 != pfVar19[5]) {
          fVar23 = *pfStack_98;
joined_r0x000142895ca5:
          if (fVar9 <= fVar23) {
            fVar23 = *pfVar19;
            goto LAB_142895cbf;
          }
        }
      }
LAB_142895cee:
      fVar24 = fVar24 - *(float *)(lStack_e0 + 0x28);
      *param_8 = fVar24;
      if ((fVar24 <= 0.0) && ((bVar16 & 1) != 0)) {
        *puStack_d8 = uStack_a4;
        lVar15 = *(longlong *)(lStack_b0 + 0x30);
        uVar7 = *(undefined8 *)(lStack_b0 + 0x40);
        if (lVar15 == *(longlong *)(lStack_b0 + 0x20)) {
          pcStack_d0 = pcVar20;
          pdb_142d7e6e0(lStack_c8);
          pfVar19 = pfStack_b8;
          pcVar20 = pcStack_d0;
        }
        lVar18 = *(longlong *)(lStack_b0 + 0x28);
        *(undefined4 *)(lVar18 + lVar15 * 0x20) = 0x19;
        *(undefined8 *)(lVar18 + 0x18 + lVar15 * 0x20) = uVar7;
        *(longlong *)(lStack_b0 + 0x30) = lVar15 + 1;
        *(longlong *)(lStack_b0 + 0x40) = *(longlong *)(lStack_b0 + 0x40) + 1;
        *(undefined1 *)(param_8 + 1) = 0;
        bVar16 = 0;
      }
      pfVar13 = pfVar19;
      if ((cVar11 != '\n') && (pfVar13 = pfStack_a0, cVar11 != '\v')) {
        pfVar13 = pfStack_98;
      }
      if (fVar24 <= 0.0) goto LAB_142895d90;
LAB_142895d99:
      *puStack_f0 = uStack_a8;
      (*pcVar20)(&uStack_160,lStack_f8);
      uStack_130 = 1;
      lVar15 = *(longlong *)(lStack_c0 + 0x28);
      cStack_12f = cVar11;
      if (lVar15 == *(longlong *)(lStack_c0 + 0x18)) {
        pdb_142d8d780(lStack_e8);
      }
      lVar18 = *(longlong *)(lStack_c0 + 0x20);
      lVar14 = lVar15 * 0x50;
      puVar2 = (undefined8 *)(lVar18 + 0x40 + lVar14);
      *puVar2 = uStack_138;
      puVar2[1] = CONCAT62(uStack_12e,CONCAT11(cStack_12f,uStack_130));
      puVar2 = (undefined8 *)(lVar18 + 0x30 + lVar14);
      *puVar2 = uStack_148;
      puVar2[1] = uStack_140;
      puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar14);
      *puVar2 = uStack_158;
      puVar2[1] = uStack_150;
      puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar14);
      *puVar2 = uStack_168;
      puVar2[1] = uStack_160;
      puVar1 = (undefined4 *)(lVar18 + lVar14);
      *puVar1 = 7;
      puVar1[1] = uStack_174;
      puVar1[2] = uStack_170;
      puVar1[3] = uStack_16c;
      *(longlong *)(lStack_c0 + 0x28) = lVar15 + 1;
      pfVar19 = pfStack_b8;
    }
    else {
      lVar15 = 0;
      do {
        if (*(longlong *)(lVar5 + 0x100) << 2 == lVar15) goto LAB_142895c20;
        uVar12 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0xf8) + lVar15);
        lVar15 = lVar15 + 4;
      } while (*(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + uVar12 * 0x48) == 0);
      lVar15 = *(longlong *)(lVar6 + 0x1a0) + uVar12 * 0x48;
      cVar8 = cRam0000000000000000;
      if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar15 + 0x40)) &&
         (uVar12 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
         uVar12 != 0)) {
        cVar8 = **(char **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar12 * 0x30);
      }
      if (cVar8 == cVar11) goto LAB_142895c64;
LAB_142895c20:
      pfVar13 = pfVar19;
      if (((cVar11 != '\n') && (pfVar13 = pfStack_a0, cVar11 != '\v')) &&
         (pfVar13 = pfStack_98, cVar11 != '\f')) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1435ac44c,0x28,&UNK_1435ac4c8);
      }
LAB_142895d90:
      if (*pfVar13 <= fVar9 && fVar9 != *pfVar13) goto LAB_142895d99;
    }
    lVar17 = lVar17 + 0x10;
    if (lVar17 == 0x30) {
      return;
    }
  } while( true );
}

