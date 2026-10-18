// VA 0x1409ffca0, PDB extent 1174 bytes
// country_core::systems::audio::wall_audio_path::wall_audio_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::audio::wall_audio_path::wall_audio_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_path.rs
   Extent: 1174 */

void pdb_1409ffca0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  puVar4 = (ulonglong *)*param_3;
  lVar18 = param_3[1];
  uVar12 = *puVar4;
  uVar14 = 0;
  uVar13 = uVar12 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar12 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar13 = uVar14;
  }
  uVar11 = uVar12 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar12 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar11 = uVar14;
  }
  uVar12 = *(ulonglong *)(lVar18 + 0x10);
  uVar20 = *(ulonglong *)(lVar18 + 0x30);
  uVar23 = uVar20 - uVar11;
  if (uVar20 < uVar11) {
    uVar23 = uVar14;
  }
  uVar17 = uVar12 - uVar13;
  if (uVar12 < uVar13) {
    uVar17 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar18 + 0x40);
  lVar24 = *(longlong *)(lVar18 + 8);
  lVar18 = *(longlong *)(lVar18 + 0x28);
  *puVar4 = (uVar14 - uVar23) - uVar17;
  if ((uVar12 < uVar13 || uVar12 - uVar13 == 0) && (uVar20 < uVar11 || uVar20 - uVar11 == 0)) {
LAB_1409ffd20:
    puVar4 = (ulonglong *)*param_4;
    lVar18 = param_4[1];
    uVar12 = *puVar4;
    uVar14 = 0;
    uVar13 = uVar12 - *(ulonglong *)(lVar18 + 0x18);
    if (uVar12 < *(ulonglong *)(lVar18 + 0x18)) {
      uVar13 = uVar14;
    }
    uVar11 = uVar12 - *(ulonglong *)(lVar18 + 0x38);
    if (uVar12 < *(ulonglong *)(lVar18 + 0x38)) {
      uVar11 = uVar14;
    }
    lVar24 = *(longlong *)(lVar18 + 8);
    uVar12 = *(ulonglong *)(lVar18 + 0x30);
    uVar20 = uVar12 - uVar11;
    if (uVar12 < uVar11) {
      uVar20 = uVar14;
    }
    uVar23 = *(ulonglong *)(lVar18 + 0x10);
    uVar17 = uVar23 - uVar13;
    if (uVar23 < uVar13) {
      uVar17 = uVar14;
    }
    lVar21 = *(longlong *)(lVar18 + 0x28);
    uVar14 = *(ulonglong *)(lVar18 + 0x40);
    *puVar4 = (uVar14 - uVar20) - uVar17;
    if ((uVar23 < uVar13 || uVar23 - uVar13 == 0) && (uVar12 < uVar11 || uVar12 - uVar11 == 0)) {
      return;
    }
    lVar21 = lVar21 + uVar11 * 0x20;
    lVar24 = lVar24 + uVar13 * 0x20;
    uVar16 = 0;
    if (uVar23 < uVar13) {
      lVar24 = 8;
    }
    uVar17 = lVar24 + -0x20 + uVar17 * 0x20;
    if (uVar23 <= uVar13) {
      uVar17 = uVar16;
    }
    if (uVar12 < uVar11) {
      lVar21 = 8;
    }
    uVar13 = lVar21 + -0x20 + uVar20 * 0x20;
    if (uVar12 <= uVar11) {
      uVar13 = uVar17;
    }
    *puVar4 = uVar14;
    puVar4 = (ulonglong *)*param_2;
    lVar18 = param_2[1];
    uVar12 = *puVar4;
    uVar14 = uVar12 - *(ulonglong *)(lVar18 + 0x18);
    if (uVar12 < *(ulonglong *)(lVar18 + 0x18)) {
      uVar14 = uVar16;
    }
    uVar11 = uVar12 - *(ulonglong *)(lVar18 + 0x38);
    if (uVar12 < *(ulonglong *)(lVar18 + 0x38)) {
      uVar11 = uVar16;
    }
    lVar24 = uVar14 * 0x10 + *(longlong *)(lVar18 + 8);
    uVar12 = *(ulonglong *)(lVar18 + 0x10);
    uVar20 = uVar12 - uVar14;
    if (uVar12 < uVar14) {
      uVar20 = uVar16;
    }
    if (uVar12 < uVar14) {
      lVar24 = 8;
    }
    lVar21 = uVar11 * 0x10 + *(longlong *)(lVar18 + 0x28);
    uVar12 = *(ulonglong *)(lVar18 + 0x30) - uVar11;
    if (*(ulonglong *)(lVar18 + 0x30) < uVar11) {
      lVar21 = 8;
      uVar12 = uVar16;
    }
    *puVar4 = (*(longlong *)(lVar18 + 0x40) - uVar12) - uVar20;
    lVar22 = uVar20 * 0x10 + lVar24;
    lVar19 = uVar12 * 0x10 + lVar21;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar18 = *param_1;
    puVar5 = (undefined4 *)param_1[2];
    do {
      if ((lVar24 == 0) || (lVar24 == lVar22)) {
        if (lVar21 == 0) {
          return;
        }
        if (lVar21 == lVar19) {
          return;
        }
        lVar24 = 0;
        lVar10 = lVar21;
        lVar21 = lVar21 + 0x10;
      }
      else {
        lVar10 = lVar24;
        lVar24 = lVar24 + 0x10;
      }
      *puVar4 = *puVar4 + 1;
      uVar7 = *(undefined8 *)(lVar10 + 8);
      uVar3 = *(undefined4 *)(uVar13 + 0x10);
      uVar8 = *(undefined8 *)(uVar13 + 8);
      cVar1 = *(char *)(uVar13 + 0x18);
      *puVar5 = uVar2;
      lVar10 = *(longlong *)(lVar18 + 0x30);
      uVar9 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar10 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e6e0(lVar18 + 0x20);
      }
      lVar6 = *(longlong *)(lVar18 + 0x28);
      lVar15 = lVar10 * 0x20;
      *(undefined8 *)(lVar6 + lVar15) = uVar9;
      *(undefined8 *)(lVar6 + 8 + lVar15) = uVar7;
      *(undefined8 *)(lVar6 + 0x10 + lVar15) = uVar8;
      *(undefined4 *)(lVar6 + 0x18 + lVar15) = uVar3;
      *(undefined1 *)(lVar6 + 0x1c + lVar15) = 2;
      *(bool *)(lVar6 + 0x1d + lVar15) = cVar1 == '\x01';
      *(longlong *)(lVar18 + 0x30) = lVar10 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    } while( true );
  }
  lVar18 = lVar18 + uVar11 * 0x20;
  lVar24 = lVar24 + uVar13 * 0x20;
  uVar16 = 0;
  if (uVar12 < uVar13) {
    lVar24 = 8;
  }
  uVar17 = lVar24 + -0x20 + uVar17 * 0x20;
  if (uVar12 <= uVar13) {
    uVar17 = uVar16;
  }
  if (uVar20 < uVar11) {
    lVar18 = 8;
  }
  uVar12 = lVar18 + -0x20 + uVar23 * 0x20;
  if (uVar20 <= uVar11) {
    uVar12 = uVar17;
  }
  *puVar4 = uVar14;
  puVar4 = (ulonglong *)*param_2;
  lVar18 = param_2[1];
  uVar13 = *puVar4;
  uVar14 = uVar13 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar14 = uVar16;
  }
  uVar11 = uVar13 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar11 = uVar16;
  }
  lVar24 = uVar14 * 0x10 + *(longlong *)(lVar18 + 8);
  uVar13 = *(ulonglong *)(lVar18 + 0x10);
  uVar20 = uVar13 - uVar14;
  if (uVar13 < uVar14) {
    uVar20 = uVar16;
  }
  if (uVar13 < uVar14) {
    lVar24 = 8;
  }
  lVar21 = uVar11 * 0x10 + *(longlong *)(lVar18 + 0x28);
  uVar13 = *(ulonglong *)(lVar18 + 0x30) - uVar11;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar11) {
    lVar21 = 8;
    uVar13 = uVar16;
  }
  *puVar4 = (*(longlong *)(lVar18 + 0x40) - uVar13) - uVar20;
  lVar19 = uVar20 * 0x10 + lVar24;
  lVar22 = uVar13 * 0x10 + lVar21;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar18 = *param_1;
  puVar5 = (undefined4 *)param_1[2];
  do {
    if ((lVar24 == 0) || (lVar24 == lVar19)) {
      if ((lVar21 == 0) || (lVar21 == lVar22)) goto LAB_1409ffd20;
      lVar24 = 0;
      lVar10 = lVar21;
      lVar21 = lVar21 + 0x10;
    }
    else {
      lVar10 = lVar24;
      lVar24 = lVar24 + 0x10;
    }
    *puVar4 = *puVar4 + 1;
    uVar7 = *(undefined8 *)(lVar10 + 8);
    uVar3 = *(undefined4 *)(uVar12 + 0x10);
    uVar8 = *(undefined8 *)(uVar12 + 8);
    cVar1 = *(char *)(uVar12 + 0x18);
    *puVar5 = uVar2;
    lVar10 = *(longlong *)(lVar18 + 0x30);
    uVar9 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar10 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e6e0(lVar18 + 0x20);
    }
    lVar6 = *(longlong *)(lVar18 + 0x28);
    lVar15 = lVar10 * 0x20;
    *(undefined8 *)(lVar6 + lVar15) = uVar9;
    *(undefined8 *)(lVar6 + 8 + lVar15) = uVar7;
    *(undefined8 *)(lVar6 + 0x10 + lVar15) = uVar8;
    *(undefined4 *)(lVar6 + 0x18 + lVar15) = uVar3;
    *(undefined1 *)(lVar6 + 0x1c + lVar15) = 2;
    *(bool *)(lVar6 + 0x1d + lVar15) = cVar1 == '\x01';
    *(longlong *)(lVar18 + 0x30) = lVar10 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
  } while( true );
}

