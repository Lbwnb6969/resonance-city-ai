// VA 0x1428cba90, PDB extent 573 bytes
// system_color::write_roof_color_id_to_gpu::write_roof_color_id_to_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/write_roof_color_id_to_gpu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::write_roof_color_id_to_gpu::write_roof_color_id_to_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/write_roof_color_id_to_gpu.rs
   Extent: 573 */

void pdb_1428cba90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  
  puVar16 = (ulonglong *)*param_4;
  lVar12 = param_4[1];
  uVar2 = *puVar16;
  uVar7 = 0;
  uVar9 = uVar2 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar9 = uVar7;
  }
  uVar15 = uVar2 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar15 = uVar7;
  }
  lVar17 = uVar9 * 0x40 + *(longlong *)(lVar12 + 8);
  uVar2 = *(ulonglong *)(lVar12 + 0x10) - uVar9;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar9) {
    lVar17 = 8;
    uVar2 = uVar7;
  }
  lVar20 = uVar15 * 0x40 + *(longlong *)(lVar12 + 0x28);
  uVar9 = *(ulonglong *)(lVar12 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar15) {
    lVar20 = 8;
    uVar9 = uVar7;
  }
  *puVar16 = (*(longlong *)(lVar12 + 0x40) - uVar9) - uVar2;
  lVar10 = uVar9 * 0x40 + lVar20;
  puVar3 = (ulonglong *)*param_3;
  lVar12 = param_3[1];
  uVar9 = *puVar3;
  uVar15 = uVar9 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar15 = uVar7;
  }
  uVar8 = uVar9 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar8 = uVar7;
  }
  lVar21 = uVar15 * 0x18 + *(longlong *)(lVar12 + 8);
  uVar9 = *(ulonglong *)(lVar12 + 0x10) - uVar15;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar15) {
    lVar21 = 8;
    uVar9 = uVar7;
  }
  lVar11 = uVar8 * 0x18 + *(longlong *)(lVar12 + 0x28);
  uVar15 = *(ulonglong *)(lVar12 + 0x30) - uVar8;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar8) {
    lVar11 = 8;
    uVar15 = uVar7;
  }
  *puVar3 = (*(longlong *)(lVar12 + 0x40) - uVar15) - uVar9;
  uVar4 = *param_5;
  uVar5 = *param_1;
  uVar6 = *param_2;
  lVar12 = lVar11;
  lVar18 = lVar17;
  lVar22 = lVar21;
  do {
    lVar19 = lVar18;
    lVar13 = lVar12;
    if (puVar16 == (ulonglong *)0x0) {
LAB_1428cbc03:
      puVar14 = puVar3;
      if ((lVar22 == 0) || (lVar22 == lVar21 + uVar9 * 0x18)) {
        if ((lVar12 == 0) || (lVar12 == lVar11 + uVar15 * 0x18)) {
          return;
        }
        lVar13 = lVar12 + 0x18;
        puVar16 = (ulonglong *)0x0;
        lVar23 = 0;
      }
      else {
        lVar23 = lVar22 + 0x18;
        puVar16 = (ulonglong *)0x0;
        lVar12 = lVar22;
      }
    }
    else {
      puVar14 = puVar16;
      lVar23 = lVar22;
      if ((lVar18 == 0) || (lVar18 == uVar2 * 0x40 + lVar17)) {
        if (lVar20 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          if (lVar20 != lVar10) {
            lVar19 = 0;
            lVar12 = lVar20;
            lVar20 = lVar20 + 0x40;
            goto LAB_1428cbc7f;
          }
        }
        goto LAB_1428cbc03;
      }
      lVar19 = lVar18 + 0x40;
      lVar12 = lVar18;
    }
LAB_1428cbc7f:
    *puVar14 = *puVar14 + 1;
    uVar1 = *(undefined4 *)(lVar12 + 0x10);
    uVar7 = *(ulonglong *)(lVar12 + 8);
    uVar8 = pdb_140a6a860(uVar4,uVar7);
    lVar12 = lVar13;
    lVar18 = lVar19;
    lVar22 = lVar23;
    if ((uVar8 & 1) != 0) {
      pdb_1410bd6c0(uVar5,uVar6,uVar7 & 0xffffffff,uVar1);
    }
  } while( true );
}

