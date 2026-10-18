// VA 0x140bfbda0, PDB extent 254 bytes
// country_core::systems::terrain::draw_terrain_stroke::terrain_stroke_changed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/draw_terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::terrain::draw_terrain_stroke::terrain_stroke_changed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/draw_terrain_stroke.rs
   Extent: 254 */

void pdb_140bfbda0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar1 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = *puVar1;
  uVar12 = 0;
  uVar9 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar9 = uVar12;
  }
  uVar11 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar11 = uVar12;
  }
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  uVar10 = uVar3 - uVar11;
  if (uVar3 < uVar11) {
    uVar10 = uVar12;
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x10);
  uVar8 = uVar4 - uVar9;
  if (uVar4 < uVar9) {
    uVar8 = uVar12;
  }
  uVar12 = *(ulonglong *)(lVar2 + 0x40);
  *puVar1 = uVar12 - (uVar8 + uVar10);
  if (uVar4 >= uVar9 && uVar4 - uVar9 != 0 || uVar3 >= uVar11 && uVar3 - uVar11 != 0) {
    *puVar1 = uVar12;
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar2 = *param_3;
    lVar5 = *(longlong *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    if (lVar5 == *(longlong *)(lVar2 + 0x20)) {
      pdb_142d7e8a0(lVar2 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) = uVar6;
    *(longlong *)(lVar2 + 0x30) = lVar5 + 1;
    *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    LOCK();
    *(longlong *)*param_2 = *(longlong *)*param_2 + 1;
    UNLOCK();
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar2 = *param_4;
    lVar5 = *(longlong *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    if (lVar5 == *(longlong *)(lVar2 + 0x20)) {
      pdb_142d7ede0(lVar2 + 0x20);
    }
    lVar7 = *(longlong *)(lVar2 + 0x28);
    *(undefined8 *)(lVar7 + lVar5 * 0x28) = uVar6;
    *(undefined4 *)(lVar7 + 8 + lVar5 * 0x28) = 0;
    *(longlong *)(lVar2 + 0x30) = lVar5 + 1;
    *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
  }
  return;
}

