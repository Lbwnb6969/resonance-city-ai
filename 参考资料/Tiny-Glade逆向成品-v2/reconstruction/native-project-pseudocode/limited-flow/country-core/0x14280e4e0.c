// VA 0x14280e4e0, PDB extent 152 bytes
// country_core::systems::wall::valid_enclosure::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::wall::valid_enclosure::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 152 */

void pdb_14280e4e0(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint *puStack_8;
  
  iVar1 = 2;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
  if (iVar1 == 0) {
    puVar2 = &UNK_14359c578;
    uVar3 = 2;
  }
  else {
    if (iVar1 != 1) {
      puStack_8 = param_1;
      pdb_140f66e50(param_2,&UNK_14359c5a0,0xc,&UNK_14359c5ac,6,&puStack_8,&UNK_14359c580);
      return;
    }
    puVar2 = &UNK_14359c57a;
    uVar3 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,puVar2,uVar3,*(code **)(param_2[1] + 0x18));
  return;
}

