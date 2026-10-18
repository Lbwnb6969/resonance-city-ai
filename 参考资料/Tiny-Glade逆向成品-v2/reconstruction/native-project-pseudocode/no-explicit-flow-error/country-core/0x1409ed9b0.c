// VA 0x1409ed9b0, PDB extent 120 bytes
// country_core::systems::collision::world::Rapier::get_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::Rapier::get_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 120 */

undefined8 * pdb_1409ed9b0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined4 *)
           pdb_140cd4bd0(param_2 + (ulonglong)*(byte *)(param_3 + 2) * 0x390 + 0x20,*param_3,
                         param_3[1]);
  if (puVar6 != (undefined4 *)0x0) {
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar1 = puVar6[0x13];
    uVar5 = *(undefined8 *)(puVar6 + 0xf);
    *param_1 = *(undefined8 *)(puVar6 + 0xd);
    param_1[1] = uVar5;
    param_1[2] = *(undefined8 *)(puVar6 + 0x11);
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(uint *)(param_1 + 4) = uVar3 | 1;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
    return param_1;
  }
  pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
  pcVar4 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar4)();
  return puVar7;
}

