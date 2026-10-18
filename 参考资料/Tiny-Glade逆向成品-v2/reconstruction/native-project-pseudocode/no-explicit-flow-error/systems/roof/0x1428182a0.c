// VA 0x1428182a0, PDB extent 1283 bytes
// system_roof::replay_roof::impl$0::process
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/replay_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::replay_roof::impl$0::process
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/replay_roof.rs
   Extent: 1283 */

void pdb_1428182a0(int *param_1,float param_2,longlong *param_3,longlong *param_4,longlong *param_5,
                  longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar26 = *(longlong *)(param_1 + 2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(lVar26 + 0x10)) {
  case 0:
    if ((char)param_1[5] == '\0') {
      uVar16 = *(undefined8 *)(lVar26 + 0x40);
      uVar20 = *(undefined8 *)(lVar26 + 0x24);
      uVar21 = *(undefined8 *)(lVar26 + 0x2c);
      uVar22 = *(undefined8 *)(lVar26 + 0x30);
      uVar23 = *(undefined8 *)(lVar26 + 0x38);
      uVar14 = *(undefined4 *)(lVar26 + 0x14);
      uVar15 = *(undefined4 *)(lVar26 + 0x20);
      uVar17 = *(undefined8 *)(lVar26 + 0x18);
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar26 = *param_3;
      lVar25 = *(longlong *)(lVar26 + 0x30);
      uVar19 = *(undefined8 *)(lVar26 + 0x40);
      if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
        pdb_142d7ee50(lVar26 + 0x20);
      }
      lVar18 = *(longlong *)(lVar26 + 0x28);
      lVar24 = lVar25 * 0x40;
      *(undefined8 *)(lVar18 + lVar24) = uVar19;
      *(undefined8 *)(lVar18 + 8 + lVar24) = uVar16;
      *(undefined4 *)(lVar18 + 0x10 + lVar24) = uVar14;
      *(undefined8 *)(lVar18 + 0x14 + lVar24) = uVar17;
      *(undefined4 *)(lVar18 + 0x1c + lVar24) = uVar15;
      puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar24);
      *puVar1 = uVar20;
      puVar1[1] = uVar21;
      puVar1 = (undefined8 *)(lVar18 + 0x2c + lVar24);
      *puVar1 = uVar22;
      puVar1[1] = uVar23;
      *(undefined1 *)(lVar18 + 0x3c + lVar24) = 0;
    }
    else {
code_r0x000142818710:
      uVar16 = *(undefined8 *)(lVar26 + 0x40);
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar26 = *param_4;
      lVar25 = *(longlong *)(lVar26 + 0x30);
      uVar17 = *(undefined8 *)(lVar26 + 0x40);
      if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
        pdb_142d7e830(lVar26 + 0x20);
      }
      lVar18 = *(longlong *)(lVar26 + 0x28);
      *(undefined8 *)(lVar18 + lVar25 * 0x18) = uVar17;
      *(undefined8 *)(lVar18 + 8 + lVar25 * 0x18) = uVar16;
      *(undefined1 *)(lVar18 + 0x10 + lVar25 * 0x18) = 1;
    }
    break;
  case 1:
    if ((char)param_1[5] == '\0') goto code_r0x000142818710;
    uVar16 = *(undefined8 *)(lVar26 + 0x40);
    uVar20 = *(undefined8 *)(lVar26 + 0x24);
    uVar21 = *(undefined8 *)(lVar26 + 0x2c);
    uVar22 = *(undefined8 *)(lVar26 + 0x30);
    uVar23 = *(undefined8 *)(lVar26 + 0x38);
    uVar14 = *(undefined4 *)(lVar26 + 0x14);
    uVar15 = *(undefined4 *)(lVar26 + 0x20);
    uVar17 = *(undefined8 *)(lVar26 + 0x18);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar26 = *param_3;
    lVar25 = *(longlong *)(lVar26 + 0x30);
    uVar19 = *(undefined8 *)(lVar26 + 0x40);
    if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
      pdb_142d7ee50(lVar26 + 0x20);
    }
    lVar18 = *(longlong *)(lVar26 + 0x28);
    lVar24 = lVar25 * 0x40;
    *(undefined8 *)(lVar18 + lVar24) = uVar19;
    *(undefined8 *)(lVar18 + 8 + lVar24) = uVar16;
    *(undefined4 *)(lVar18 + 0x10 + lVar24) = uVar14;
    *(undefined8 *)(lVar18 + 0x14 + lVar24) = uVar17;
    *(undefined4 *)(lVar18 + 0x1c + lVar24) = uVar15;
    puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar24);
    *puVar1 = uVar20;
    puVar1[1] = uVar21;
    puVar1 = (undefined8 *)(lVar18 + 0x2c + lVar24);
    *puVar1 = uVar22;
    puVar1[1] = uVar23;
    *(undefined1 *)(lVar18 + 0x3c + lVar24) = 1;
    break;
  case 2:
    if ((char)*param_1 != '\0') {
      fVar28 = (float)param_1[4];
      param_1[4] = (int)(param_2 + fVar28);
      fVar29 = (param_2 + fVar28) / (float)param_1[1];
      fVar28 = 0.0;
      if (0.0 <= fVar29) {
        fVar28 = fVar29;
      }
      if (fVar28 < _DAT_142e36f28) goto code_r0x00014281845e;
    }
    *(char *)((longlong)param_1 + 0x15) = '\x01';
    fVar28 = _DAT_142e36f28;
code_r0x00014281845e:
    if ((char)param_1[5] != '\0') {
      fVar28 = _DAT_142e36f28 - fVar28;
    }
    uVar16 = *(undefined8 *)(lVar26 + 0x38);
    fVar27 = _DAT_142e36f28 - fVar28;
    fVar29 = *(float *)(lVar26 + 0x18);
    fVar2 = *(float *)(lVar26 + 0x28);
    fVar3 = *(float *)(lVar26 + 0x14);
    fVar4 = *(float *)(lVar26 + 0x24);
    fVar5 = *(float *)(lVar26 + 0x40);
    fVar6 = *(float *)(lVar26 + 0x44);
    fVar7 = *(float *)(lVar26 + 0x48);
    fVar8 = *(float *)(lVar26 + 0x4c);
    fVar9 = *(float *)(lVar26 + 0x1c);
    fVar10 = *(float *)(lVar26 + 0x2c);
    fVar11 = *(float *)(lVar26 + 0x20);
    fVar12 = *(float *)(lVar26 + 0x30);
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar26 = *param_5;
    lVar25 = *(longlong *)(lVar26 + 0x30);
    uVar17 = *(undefined8 *)(lVar26 + 0x40);
    if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
      pdb_142d7ee50(lVar26 + 0x20);
    }
    lVar18 = *(longlong *)(lVar26 + 0x28);
    lVar24 = lVar25 * 0x40;
    *(undefined4 *)(lVar18 + lVar24) = 1;
    *(float *)(lVar18 + 4 + lVar24) = fVar2 * fVar28 + fVar29 * fVar27;
    *(undefined4 *)(lVar18 + 8 + lVar24) = 1;
    *(float *)(lVar18 + 0xc + lVar24) = fVar4 * fVar28 + fVar3 * fVar27;
    *(undefined4 *)(lVar18 + 0x10 + lVar24) = 1;
    *(float *)(lVar18 + 0x14 + lVar24) = fVar10 * fVar28 + fVar9 * fVar27;
    *(undefined4 *)(lVar18 + 0x18 + lVar24) = 1;
    *(float *)(lVar18 + 0x1c + lVar24) = fVar28 * fVar12 + fVar27 * fVar11;
    *(undefined8 *)(lVar18 + 0x20 + lVar24) = uVar16;
    *(undefined4 *)(lVar18 + 0x28 + lVar24) = 1;
    *(float *)(lVar18 + 0x2c + lVar24) = fVar7 * fVar28 + fVar5 * fVar27;
    *(float *)(lVar18 + 0x30 + lVar24) = fVar8 * fVar28 + fVar6 * fVar27;
    *(undefined1 *)(lVar18 + 0x34 + lVar24) = 1;
    *(undefined8 *)(lVar18 + 0x38 + lVar24) = uVar17;
    *(longlong *)(lVar26 + 0x30) = lVar25 + 1;
    *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
    return;
  case 3:
    fVar28 = (float)param_1[4];
    if ((fVar28 == 0.0) && (!NAN(fVar28))) {
      uVar13 = *(undefined1 *)((lVar26 - (ulonglong)*(byte *)(param_1 + 5)) + 0x12);
      uVar16 = *(undefined8 *)(lVar26 + 0x18);
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      lVar26 = *param_6;
      lVar25 = *(longlong *)(lVar26 + 0x30);
      uVar17 = *(undefined8 *)(lVar26 + 0x40);
      if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
        pdb_142d7e830(lVar26 + 0x20);
      }
      lVar18 = *(longlong *)(lVar26 + 0x28);
      *(undefined8 *)(lVar18 + lVar25 * 0x18) = uVar17;
      *(undefined8 *)(lVar18 + 8 + lVar25 * 0x18) = uVar16;
      *(undefined1 *)(lVar18 + 0x10 + lVar25 * 0x18) = uVar13;
      *(longlong *)(lVar26 + 0x30) = lVar25 + 1;
code_r0x000142818624:
      *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
    }
    goto code_r0x000142818628;
  case 4:
    fVar28 = (float)param_1[4];
    if ((fVar28 == 0.0) && (!NAN(fVar28))) {
      uVar13 = *(undefined1 *)((lVar26 - (ulonglong)*(byte *)(param_1 + 5)) + 0x12);
      uVar16 = *(undefined8 *)(lVar26 + 0x18);
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      lVar26 = *param_7;
      lVar25 = *(longlong *)(lVar26 + 0x30);
      uVar17 = *(undefined8 *)(lVar26 + 0x40);
      if (lVar25 == *(longlong *)(lVar26 + 0x20)) {
        pdb_142d7e830(lVar26 + 0x20);
      }
      lVar18 = *(longlong *)(lVar26 + 0x28);
      *(undefined8 *)(lVar18 + lVar25 * 0x18) = uVar17;
      *(undefined8 *)(lVar18 + 8 + lVar25 * 0x18) = uVar16;
      *(undefined1 *)(lVar18 + 0x10 + lVar25 * 0x18) = uVar13;
      *(undefined1 *)(lVar18 + 0x11 + lVar25 * 0x18) = uVar13;
      *(undefined1 *)(lVar18 + 0x12 + lVar25 * 0x18) = 0;
      *(longlong *)(lVar26 + 0x30) = lVar25 + 1;
      goto code_r0x000142818624;
    }
code_r0x000142818628:
    if (*param_1 == 1) {
      param_1[4] = (int)(param_2 + fVar28);
      fVar29 = (param_2 + fVar28) / (float)param_1[1];
      fVar28 = 0.0;
      if (0.0 <= fVar29) {
        fVar28 = fVar29;
      }
      fVar29 = _DAT_142e36f28;
      if (fVar28 <= _DAT_142e36f28) {
        fVar29 = fVar28;
      }
      if (fVar29 != _DAT_142e36f28) {
        return;
      }
      if (NAN(fVar29) || NAN(_DAT_142e36f28)) {
        return;
      }
    }
    goto code_r0x000142818762;
  }
  *(longlong *)(lVar26 + 0x30) = lVar25 + 1;
  *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
code_r0x000142818762:
  *(char *)((longlong)param_1 + 0x15) = '\x01';
  return;
}

