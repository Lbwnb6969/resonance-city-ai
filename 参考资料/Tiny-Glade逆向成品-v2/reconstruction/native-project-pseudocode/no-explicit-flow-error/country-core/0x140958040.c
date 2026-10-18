// VA 0x140958040, PDB extent 577 bytes
// country_core::resources::mouse_capture::mouse_capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::mouse_capture::mouse_capture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_capture.rs
   Extent: 577 */

void pdb_140958040(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  puVar1 = (ulonglong *)*param_2;
  lVar14 = param_2[1];
  uVar2 = *puVar1;
  uVar8 = 0;
  uVar10 = uVar2 - *(ulonglong *)(lVar14 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar14 + 0x18)) {
    uVar10 = uVar8;
  }
  uVar6 = uVar2 - *(ulonglong *)(lVar14 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar14 + 0x38)) {
    uVar6 = uVar8;
  }
  uVar2 = *(ulonglong *)(lVar14 + 0x10);
  uVar3 = *(ulonglong *)(lVar14 + 0x30);
  uVar11 = uVar3 - uVar6;
  if (uVar3 < uVar6) {
    uVar11 = uVar8;
  }
  uVar13 = uVar2 - uVar10;
  if (uVar2 < uVar10) {
    uVar13 = uVar8;
  }
  uVar8 = *(ulonglong *)(lVar14 + 0x40);
  lVar12 = *(longlong *)(lVar14 + 8);
  lVar14 = *(longlong *)(lVar14 + 0x28);
  *puVar1 = (uVar8 - uVar11) - uVar13;
  if (uVar2 >= uVar10 && uVar2 - uVar10 != 0 || uVar3 >= uVar6 && uVar3 - uVar6 != 0) {
    lVar14 = lVar14 + uVar6 * 0x10;
    lVar12 = lVar12 + uVar10 * 0x10;
    if (uVar2 < uVar10) {
      lVar12 = 8;
    }
    lVar5 = 0;
    if (uVar10 < uVar2) {
      lVar5 = lVar12 + -0x10 + uVar13 * 0x10;
    }
    if (uVar3 < uVar6) {
      lVar14 = 8;
    }
    lVar14 = lVar14 + -0x10 + uVar11 * 0x10;
    if (uVar3 <= uVar6) {
      lVar14 = lVar5;
    }
    *puVar1 = uVar8;
    if (*(char *)(lVar14 + 8) == '\x01') {
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined4 *)*param_1 = 0;
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar14 = *param_3;
      lVar12 = *(longlong *)(lVar14 + 0x30);
      uVar9 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar12 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e830(lVar14 + 0x20);
      }
      lVar5 = *(longlong *)(lVar14 + 0x28);
      *(undefined8 *)(lVar5 + lVar12 * 0x18) = uVar9;
      *(undefined4 *)(lVar5 + 8 + lVar12 * 0x18) = 1;
      *(longlong *)(lVar14 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar14 = *param_4;
      lVar12 = *(longlong *)(lVar14 + 0x30);
      uVar9 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar12 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e980(lVar14 + 0x20);
      }
      lVar5 = *(longlong *)(lVar14 + 0x28);
      uVar7 = 0x200000003;
    }
    else {
      param_5 = (undefined8 *)*param_5;
      puVar4 = (undefined4 *)*param_1;
      uVar9 = *param_5;
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      *puVar4 = 1;
      *(undefined8 *)(puVar4 + 1) = uVar9;
      uVar9 = *param_5;
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar14 = *param_3;
      lVar12 = *(longlong *)(lVar14 + 0x30);
      uVar7 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar12 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e830(lVar14 + 0x20);
      }
      lVar5 = *(longlong *)(lVar14 + 0x28);
      *(undefined8 *)(lVar5 + lVar12 * 0x18) = uVar7;
      *(undefined4 *)(lVar5 + 8 + lVar12 * 0x18) = 0;
      *(undefined8 *)(lVar5 + 0xc + lVar12 * 0x18) = uVar9;
      *(longlong *)(lVar14 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar14 = *param_4;
      lVar12 = *(longlong *)(lVar14 + 0x30);
      uVar9 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar12 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e980(lVar14 + 0x20);
      }
      lVar5 = *(longlong *)(lVar14 + 0x28);
      uVar7 = 0x200000002;
    }
    *(undefined8 *)(lVar5 + lVar12 * 0x10) = uVar7;
    *(undefined8 *)(lVar5 + 8 + lVar12 * 0x10) = uVar9;
    *(longlong *)(lVar14 + 0x30) = lVar12 + 1;
    *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
  }
  return;
}

