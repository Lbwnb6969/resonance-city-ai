// VA 0x1409586b0, PDB extent 191 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::UberInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::UberInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 191 */

void pdb_1409586b0(longlong param_1,ulonglong param_2,ulonglong param_3)

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
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  
  uVar11 = *(ulonglong *)(param_1 + 0x28);
  if (uVar11 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar11,&UNK_143382a68);
  }
  if (uVar11 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar11,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar13 = param_3 * 0x40;
  lVar15 = param_2 * 0x40;
  uVar4 = *(undefined8 *)(lVar3 + lVar13);
  uVar5 = ((undefined8 *)(lVar3 + lVar13))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar13);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar13);
  uVar10 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar15);
  *puVar2 = *puVar1;
  puVar2[1] = uVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar15);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar15);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar15) = uVar4;
  ((undefined8 *)(lVar3 + lVar15))[1] = uVar5;
  uVar11 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar14 = param_2;
    if (uVar11 <= param_2) {
      uVar14 = uVar11;
    }
    LOCK();
    uVar12 = *(ulonglong *)(param_1 + 0x30);
    bVar16 = uVar11 == uVar12;
    if (bVar16) {
      *(ulonglong *)(param_1 + 0x30) = uVar14;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar16);
  uVar11 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar14 = param_2;
    if (param_2 < uVar11) {
      uVar14 = uVar11;
    }
    LOCK();
    uVar12 = *(ulonglong *)(param_1 + 0x38);
    bVar16 = uVar11 == uVar12;
    if (bVar16) {
      *(ulonglong *)(param_1 + 0x38) = uVar14;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar16);
  return;
}

