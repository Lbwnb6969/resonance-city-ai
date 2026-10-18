// VA 0x140bf2630, PDB extent 321 bytes
// country_core::resources::mouse_terrain_raycast::camera_mouse_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::mouse_terrain_raycast::camera_mouse_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
   Extent: 321 */

void pdb_140bf2630(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  pdb_1414c9450(&uStack_30,*(undefined4 *)*param_1,((undefined4 *)*param_1)[1],*param_2,
                (float)*(uint *)*param_3,(float)((uint *)*param_3)[1]);
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar2 = (undefined4 *)*param_4;
  *(undefined8 *)(puVar2 + 4) = uStack_20;
  *puVar2 = uStack_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  puVar3 = (ulonglong *)*param_5;
  lVar4 = param_5[1];
  uVar5 = *puVar3;
  uVar9 = 0;
  uVar10 = uVar5 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar10 = uVar9;
  }
  uVar8 = uVar5 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar8 = uVar9;
  }
  uVar5 = *(ulonglong *)(lVar4 + 0x30);
  uVar11 = uVar5 - uVar8;
  if (uVar8 > uVar5) {
    uVar11 = uVar9;
  }
  uVar6 = *(ulonglong *)(lVar4 + 0x10);
  uVar12 = uVar6 - uVar10;
  if (uVar10 > uVar6) {
    uVar12 = uVar9;
  }
  uVar9 = *(ulonglong *)(lVar4 + 0x40);
  *puVar3 = uVar9 - (uVar12 + uVar11);
  if (uVar10 <= uVar6 && uVar6 - uVar10 != 0 || uVar8 <= uVar5 && uVar5 - uVar8 != 0) {
    *puVar3 = uVar9;
  }
  else {
    uVar1 = *(undefined8 *)(*param_6 + 0x168);
    fVar13 = (float)uVar1;
    fVar14 = (float)((ulonglong)uVar1 >> 0x20);
    if ((fVar14 * fVar14 + fVar13 * fVar13 <= 0.0) &&
       (uVar1 = *(undefined8 *)(*param_6 + 0x160), fVar13 = (float)uVar1,
       fVar14 = (float)((ulonglong)uVar1 >> 0x20), fVar14 * fVar14 + fVar13 * fVar13 <= 0.0)) {
      return;
    }
  }
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar4 = *param_7;
  lVar7 = *(longlong *)(lVar4 + 0x30);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  if (lVar7 == *(longlong *)(lVar4 + 0x20)) {
    pdb_142d7e8a0(lVar4 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar7 * 8) = uVar1;
  *(longlong *)(lVar4 + 0x30) = lVar7 + 1;
  *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  return;
}

