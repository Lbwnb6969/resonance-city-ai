// VA 0x140958880, PDB extent 223 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::VelocityOnlyInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::VelocityOnlyInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 223 */

void pdb_140958880(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  
  uVar15 = *(ulonglong *)(param_1 + 0x28);
  if (uVar15 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar15,&UNK_143382a68);
  }
  if (uVar15 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar15,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar17 = param_3 * 0x60;
  lVar19 = param_2 * 0x60;
  uVar4 = *(undefined8 *)(lVar3 + lVar17);
  uVar5 = ((undefined8 *)(lVar3 + lVar17))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar17);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar17);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar17);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar17);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar17);
  uVar14 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x50 + lVar19);
  *puVar2 = *puVar1;
  puVar2[1] = uVar14;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar19);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar19);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar19);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar19);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar19) = uVar4;
  ((undefined8 *)(lVar3 + lVar19))[1] = uVar5;
  uVar15 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar18 = param_2;
    if (uVar15 <= param_2) {
      uVar18 = uVar15;
    }
    LOCK();
    uVar16 = *(ulonglong *)(param_1 + 0x30);
    bVar20 = uVar15 == uVar16;
    if (bVar20) {
      *(ulonglong *)(param_1 + 0x30) = uVar18;
      uVar16 = uVar15;
    }
    UNLOCK();
    uVar15 = uVar16;
  } while (!bVar20);
  uVar15 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar18 = param_2;
    if (param_2 < uVar15) {
      uVar18 = uVar15;
    }
    LOCK();
    uVar16 = *(ulonglong *)(param_1 + 0x38);
    bVar20 = uVar15 == uVar16;
    if (bVar20) {
      *(ulonglong *)(param_1 + 0x38) = uVar18;
      uVar16 = uVar15;
    }
    UNLOCK();
    uVar15 = uVar16;
  } while (!bVar20);
  return;
}

