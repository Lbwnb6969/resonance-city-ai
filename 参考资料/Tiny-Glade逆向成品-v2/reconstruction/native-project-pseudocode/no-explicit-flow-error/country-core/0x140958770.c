// VA 0x140958770, PDB extent 265 bytes
// country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::copy<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 265 */

void pdb_140958770(longlong param_1,ulonglong param_2,ulonglong param_3)

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
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  
  uVar19 = *(ulonglong *)(param_1 + 0x28);
  if (uVar19 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar19,&UNK_143382a68);
  }
  if (uVar19 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar19,&UNK_143382a80);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar21 = param_3 * 0x80;
  lVar23 = param_2 * 0x80;
  uVar4 = *(undefined8 *)(lVar3 + lVar21);
  uVar5 = ((undefined8 *)(lVar3 + lVar21))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar21);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar21);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar21);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar21);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar21);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar21);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar21);
  uVar18 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x70 + lVar23);
  *puVar2 = *puVar1;
  puVar2[1] = uVar18;
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar23);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar23);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar23);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar23);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar23);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar23);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar23) = uVar4;
  ((undefined8 *)(lVar3 + lVar23))[1] = uVar5;
  uVar19 = *(ulonglong *)(param_1 + 0x30);
  do {
    uVar22 = param_2;
    if (uVar19 <= param_2) {
      uVar22 = uVar19;
    }
    LOCK();
    uVar20 = *(ulonglong *)(param_1 + 0x30);
    bVar24 = uVar19 == uVar20;
    if (bVar24) {
      *(ulonglong *)(param_1 + 0x30) = uVar22;
      uVar20 = uVar19;
    }
    UNLOCK();
    uVar19 = uVar20;
  } while (!bVar24);
  uVar19 = *(ulonglong *)(param_1 + 0x38);
  do {
    uVar22 = param_2;
    if (param_2 < uVar19) {
      uVar22 = uVar19;
    }
    LOCK();
    uVar20 = *(ulonglong *)(param_1 + 0x38);
    bVar24 = uVar19 == uVar20;
    if (bVar24) {
      *(ulonglong *)(param_1 + 0x38) = uVar22;
      uVar20 = uVar19;
    }
    UNLOCK();
    uVar19 = uVar20;
  } while (!bVar24);
  return;
}

