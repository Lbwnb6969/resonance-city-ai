// VA 0x140958ae0, PDB extent 207 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 207 */

void pdb_140958ae0(longlong param_1,ulonglong param_2,ulonglong param_3)

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
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  
  uVar13 = *(ulonglong *)(param_1 + 0x28);
  if (uVar13 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar13,&UNK_143382a68);
  }
  if (uVar13 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar13,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar15 = param_3 * 0x50;
  lVar17 = param_2 * 0x50;
  uVar4 = *(undefined8 *)(lVar3 + lVar15);
  uVar5 = ((undefined8 *)(lVar3 + lVar15))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar15);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar15);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar15);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar15);
  uVar12 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar17);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar17);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar17);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar17);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar17) = uVar4;
  ((undefined8 *)(lVar3 + lVar17))[1] = uVar5;
  uVar13 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar16 = param_2;
    if (uVar13 <= param_2) {
      uVar16 = uVar13;
    }
    LOCK();
    uVar14 = *(ulonglong *)(param_1 + 0x30);
    bVar18 = uVar13 == uVar14;
    if (bVar18) {
      *(ulonglong *)(param_1 + 0x30) = uVar16;
      uVar14 = uVar13;
    }
    UNLOCK();
    uVar13 = uVar14;
  } while (!bVar18);
  uVar13 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar16 = param_2;
    if (param_2 < uVar13) {
      uVar16 = uVar13;
    }
    LOCK();
    uVar14 = *(ulonglong *)(param_1 + 0x38);
    bVar18 = uVar13 == uVar14;
    if (bVar18) {
      *(ulonglong *)(param_1 + 0x38) = uVar16;
      uVar14 = uVar13;
    }
    UNLOCK();
    uVar13 = uVar14;
  } while (!bVar18);
  return;
}

