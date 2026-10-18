// VA 0x140958bb0, PDB extent 244 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::WrenInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::WrenInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 244 */

void pdb_140958bb0(longlong param_1,ulonglong param_2,ulonglong param_3)

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
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  
  uVar17 = *(ulonglong *)(param_1 + 0x28);
  if (uVar17 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar17,&UNK_143382a68);
  }
  if (uVar17 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar17,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar19 = param_3 * 0x70;
  lVar21 = param_2 * 0x70;
  uVar4 = *(undefined8 *)(lVar3 + lVar19);
  uVar5 = ((undefined8 *)(lVar3 + lVar19))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar19);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar19);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar19);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar19);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar19);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar19);
  uVar16 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x60 + lVar21);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar21);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar21);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar21);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar21);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar21);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar21) = uVar4;
  ((undefined8 *)(lVar3 + lVar21))[1] = uVar5;
  uVar17 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar20 = param_2;
    if (uVar17 <= param_2) {
      uVar20 = uVar17;
    }
    LOCK();
    uVar18 = *(ulonglong *)(param_1 + 0x30);
    bVar22 = uVar17 == uVar18;
    if (bVar22) {
      *(ulonglong *)(param_1 + 0x30) = uVar20;
      uVar18 = uVar17;
    }
    UNLOCK();
    uVar17 = uVar18;
  } while (!bVar22);
  uVar17 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar20 = param_2;
    if (param_2 < uVar17) {
      uVar20 = uVar17;
    }
    LOCK();
    uVar18 = *(ulonglong *)(param_1 + 0x38);
    bVar22 = uVar17 == uVar18;
    if (bVar22) {
      *(ulonglong *)(param_1 + 0x38) = uVar20;
      uVar18 = uVar17;
    }
    UNLOCK();
    uVar17 = uVar18;
  } while (!bVar22);
  return;
}

