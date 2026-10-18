// VA 0x142891640, PDB extent 911 bytes
// system_onboarding::reset_hints::reset_hints
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/reset_hints.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::reset_hints::reset_hints
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/reset_hints.rs
   Extent: 911 */

void pdb_142891640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,longlong *param_14,longlong *param_15,undefined8 *param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  
  puVar4 = (ulonglong *)*param_1;
  lVar21 = param_1[1];
  uVar5 = *puVar4;
  uVar19 = 0;
  uVar14 = uVar5 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar14 = uVar19;
  }
  uVar20 = uVar5 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar20 = uVar19;
  }
  uVar5 = *(ulonglong *)(lVar21 + 0x10);
  uVar6 = *(ulonglong *)(lVar21 + 0x30);
  uVar15 = uVar6 - uVar20;
  if (uVar6 < uVar20) {
    uVar15 = uVar19;
  }
  uVar17 = uVar5 - uVar14;
  if (uVar5 < uVar14) {
    uVar17 = uVar19;
  }
  uVar19 = *(ulonglong *)(lVar21 + 0x40);
  puVar7 = (undefined8 *)*param_2;
  puVar8 = (undefined4 *)param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar9 = (undefined2 *)param_2[4];
  puVar10 = (undefined4 *)param_2[6];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar11 = (undefined1 *)param_2[8];
  puVar12 = (undefined4 *)param_2[10];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  lVar22 = *(longlong *)(lVar21 + 8);
  lVar21 = *(longlong *)(lVar21 + 0x28);
  *puVar4 = (uVar19 - uVar15) - uVar17;
  if (uVar5 >= uVar14 && uVar5 - uVar14 != 0 || uVar6 >= uVar20 && uVar6 - uVar20 != 0) {
    lVar21 = lVar21 + uVar20 * 0x10;
    lVar22 = lVar22 + uVar14 * 0x10;
    uVar16 = 0;
    if (uVar5 < uVar14) {
      lVar22 = 8;
    }
    lVar18 = 0;
    if (uVar14 < uVar5) {
      lVar18 = lVar22 + -0x10 + uVar17 * 0x10;
    }
    if (uVar6 < uVar20) {
      lVar21 = 8;
    }
    lVar21 = lVar21 + -0x10 + uVar15 * 0x10;
    if (uVar6 <= uVar20) {
      lVar21 = lVar18;
    }
    *puVar4 = uVar19;
    if (*(char *)(lVar21 + 8) == '\x01') {
      *puVar8 = uVar1;
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar10 = uVar2;
      *puVar9 = 0;
      *puVar12 = uVar3;
      *puVar11 = 0;
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      param_3 = (undefined8 *)*param_3;
      *param_3 = 0;
      *(undefined2 *)(param_3 + 1) = 0;
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined1 *)*param_4 = 0;
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      param_5 = (undefined8 *)*param_5;
      *param_5 = 0;
      *(undefined2 *)(param_5 + 1) = 0;
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      param_12 = (undefined8 *)*param_12;
      *param_12 = 0;
      param_12[1] = 0;
      param_12[2] = 0;
      param_12[3] = _DAT_143315ea0;
      *(undefined4 *)(param_12 + 4) = 0x42700000;
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      param_13 = (undefined8 *)*param_13;
      *param_13 = 0;
      param_13[1] = 0;
      *(undefined4 *)(param_13 + 2) = 0;
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      puVar8 = (undefined4 *)*param_6;
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 0;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      param_7 = (undefined8 *)*param_7;
      *param_7 = 0;
      *(undefined4 *)(param_7 + 1) = 0;
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      *(undefined2 *)*param_8 = 0;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      *(undefined2 *)*param_9 = 0;
      *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
      param_10 = (undefined8 *)*param_10;
      *param_10 = 0;
      *(undefined4 *)(param_10 + 1) = 0;
      *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
      *(undefined8 *)*param_11 = 0;
      uVar1 = *(undefined4 *)((longlong)param_14 + 0x1c);
      lVar21 = *param_14;
      puVar8 = (undefined4 *)param_14[2];
      *(undefined8 *)(lVar21 + 0x404) = 0;
      *(undefined8 *)(lVar21 + 0x40c) = 0;
      *(undefined8 *)(lVar21 + 0x412) = 0;
      *(undefined8 *)(lVar21 + 0x3f0) = 0;
      *(undefined8 *)(lVar21 + 0x3f8) = 0;
      *puVar8 = uVar1;
      *(undefined1 *)(lVar21 + 0x419) = 0;
    }
    else {
      *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
      lVar21 = *param_14;
      *(undefined8 *)(lVar21 + 0x412) = 0x101010101010101;
      uVar3 = _UNK_142e347fc;
      uVar2 = _UNK_142e347f8;
      uVar1 = _UNK_142e347f4;
      *(undefined4 *)(lVar21 + 0x404) = _DAT_142e347f0;
      *(undefined4 *)(lVar21 + 0x408) = uVar1;
      *(undefined4 *)(lVar21 + 0x40c) = uVar2;
      *(undefined4 *)(lVar21 + 0x410) = uVar3;
      uVar16 = 2;
    }
    *(undefined4 *)param_16[2] = *(undefined4 *)((longlong)param_16 + 0x1c);
    *(undefined4 *)*param_16 = uVar16;
    *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
    lVar21 = *param_15;
    lVar22 = *(longlong *)(lVar21 + 0x30);
    uVar13 = *(undefined8 *)(lVar21 + 0x40);
    if (lVar22 == *(longlong *)(lVar21 + 0x20)) {
      pdb_142d7e8a0(lVar21 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar21 + 0x28) + lVar22 * 8) = uVar13;
    *(longlong *)(lVar21 + 0x30) = lVar22 + 1;
    *(longlong *)(lVar21 + 0x40) = *(longlong *)(lVar21 + 0x40) + 1;
  }
  return;
}

