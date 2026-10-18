// VA 0x140958600, PDB extent 175 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::resources::placement_data::PlacementDataSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::resources::placement_data::PlacementDataSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 175 */

void pdb_140958600(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  
  uVar9 = *(ulonglong *)(param_1 + 0x28);
  if (uVar9 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar9,&UNK_143382a68);
  }
  if (uVar9 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar9,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar11 = param_3 * 0x30;
  lVar13 = param_2 * 0x30;
  uVar4 = *(undefined8 *)(lVar3 + lVar11);
  uVar5 = ((undefined8 *)(lVar3 + lVar11))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
  uVar8 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar13);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar13) = uVar4;
  ((undefined8 *)(lVar3 + lVar13))[1] = uVar5;
  uVar9 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar12 = param_2;
    if (uVar9 <= param_2) {
      uVar12 = uVar9;
    }
    LOCK();
    uVar10 = *(ulonglong *)(param_1 + 0x30);
    bVar14 = uVar9 == uVar10;
    if (bVar14) {
      *(ulonglong *)(param_1 + 0x30) = uVar12;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar14);
  uVar9 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar12 = param_2;
    if (param_2 < uVar9) {
      uVar12 = uVar9;
    }
    LOCK();
    uVar10 = *(ulonglong *)(param_1 + 0x38);
    bVar14 = uVar9 == uVar10;
    if (bVar14) {
      *(ulonglong *)(param_1 + 0x38) = uVar12;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar14);
  return;
}

