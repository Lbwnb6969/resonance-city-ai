// VA 0x140a1a310, PDB extent 375 bytes
// country_core::systems::wall::ui_continue_wall::suppress_continue_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_continue_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::ui_continue_wall::suppress_continue_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/ui_continue_wall.rs
   Extent: 375 */

void pdb_140a1a310(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  pfVar2 = (float *)*param_2;
  if (*(char *)(pfVar2 + 2) == '\x01') {
    fVar15 = *(float *)(*param_3 + 0x28);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar3 = (undefined4 *)param_2[2];
    *puVar3 = uVar1;
    *pfVar2 = fVar15 + *pfVar2;
    puVar4 = (ulonglong *)*param_4;
    lVar13 = param_4[1];
    uVar5 = *puVar4;
    uVar14 = 0;
    uVar8 = uVar5 - *(ulonglong *)(lVar13 + 0x18);
    if (uVar5 < *(ulonglong *)(lVar13 + 0x18)) {
      uVar8 = uVar14;
    }
    uVar11 = uVar5 - *(ulonglong *)(lVar13 + 0x38);
    if (uVar5 < *(ulonglong *)(lVar13 + 0x38)) {
      uVar11 = uVar14;
    }
    uVar5 = *(ulonglong *)(lVar13 + 0x10);
    uVar6 = *(ulonglong *)(lVar13 + 0x30);
    uVar9 = uVar6 - uVar11;
    if (uVar6 < uVar11) {
      uVar9 = uVar14;
    }
    uVar12 = uVar5 - uVar8;
    if (uVar5 < uVar8) {
      uVar12 = uVar14;
    }
    uVar14 = *(ulonglong *)(lVar13 + 0x40);
    lVar7 = *(longlong *)(lVar13 + 8);
    lVar13 = *(longlong *)(lVar13 + 0x28);
    *puVar4 = (uVar14 - uVar9) - uVar12;
    if (uVar5 >= uVar8 && uVar5 - uVar8 != 0 || uVar6 >= uVar11 && uVar6 - uVar11 != 0) {
      lVar13 = lVar13 + uVar11 * 0x10;
      lVar7 = lVar7 + uVar8 * 0x10;
      if (uVar5 < uVar8) {
        lVar7 = 8;
      }
      lVar10 = 0;
      if (uVar8 < uVar5) {
        lVar10 = lVar7 + -0x10 + uVar12 * 0x10;
      }
      if (uVar6 < uVar11) {
        lVar13 = 8;
      }
      lVar13 = lVar13 + -0x10 + uVar9 * 0x10;
      if (uVar6 <= uVar11) {
        lVar13 = lVar10;
      }
      *puVar4 = uVar14;
      fVar15 = (float)*(undefined8 *)(lVar13 + 8);
      fVar16 = (float)((ulonglong)*(undefined8 *)(lVar13 + 8) >> 0x20);
      *puVar3 = uVar1;
      pfVar2[1] = SQRT(fVar16 * fVar16 + fVar15 * fVar15) + pfVar2[1];
    }
    if ((_DAT_142e36f28 <= *pfVar2) || (_DAT_142e37884 <= pfVar2[1])) {
      *(undefined1 *)(pfVar2 + 2) = 0;
      *pfVar2 = 0.0;
      *puVar3 = uVar1;
      pfVar2[1] = 0.0;
    }
  }
  if (*(char *)*param_1 != '\0') {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)(pfVar2 + 2) = 1;
  }
  return;
}

