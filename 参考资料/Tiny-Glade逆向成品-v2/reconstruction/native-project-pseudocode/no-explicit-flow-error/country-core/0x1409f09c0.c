// VA 0x1409f09c0, PDB extent 347 bytes
// country_core::systems::collision::world::RaycastMeshData::new_compound
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_compound
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 347 */

undefined8 * pdb_1409f09c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_90 [24];
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_49 = 1;
  puStack_58 = param_2;
  lVar4 = pdb_140bbb8f0(param_3);
  lVar1 = puStack_58[1];
  lVar7 = puStack_58[2] * 0x80;
  lStack_60 = lVar1 + lVar7;
  if (puStack_58[2] != 0) {
    lVar8 = 0;
    do {
      lStack_70 = *(undefined8 *)(lVar1 + 0x70 + lVar8);
      lStack_78 = lVar4;
      lVar4 = pdb_1400b0130(&lStack_78);
      lVar8 = lVar8 + 0x80;
    } while (lVar7 != lVar8);
  }
  uStack_68 = *puStack_58;
  uStack_49 = 0;
  plVar6 = &lStack_78;
  lStack_78 = lVar1;
  lStack_70 = lVar1;
  pdb_1415e3940(auStack_90);
  uStack_49 = 0;
  uVar5 = pdb_141b3b2c0(auStack_90);
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[4] = uVar5;
  param_1[5] = plVar6;
  uVar5 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[10] = *param_3;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = lVar4;
  return param_1;
}

