// VA 0x1409ed340, PDB extent 207 bytes
// country_core::systems::collision::world::Raycasting::raycast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::Raycasting::raycast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 207 */

undefined1 *
pdb_1409ed340(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             uint param_5)

{
  undefined8 uVar1;
  char acStack_4c [4];
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  uVar1 = param_2[4];
  pdb_1409f94a0(param_1,*param_2,param_3,0);
  if ((param_5 & 0x20) != 0) {
    if (*(int *)(param_1 + 0x34) == 2) {
      pdb_1419c14e0(acStack_4c,uVar1,param_3,param_4);
      if (acStack_4c[0] == '\0') {
        *(undefined4 *)(param_1 + 0x34) = 2;
        return param_1;
      }
    }
    else {
      pdb_1419c14e0(acStack_4c,uVar1,param_3,*(undefined4 *)(param_1 + 0x30));
      if (acStack_4c[0] == '\0') {
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 0x20) = uStack_3c;
    *(undefined8 *)(param_1 + 0x18) = uStack_44;
    *param_1 = 0xb;
    *(undefined8 *)(param_1 + 0x24) = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = uStack_48;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return param_1;
}

