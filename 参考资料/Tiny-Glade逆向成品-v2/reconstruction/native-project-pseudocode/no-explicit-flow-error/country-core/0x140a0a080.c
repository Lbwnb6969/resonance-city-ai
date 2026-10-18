// VA 0x140a0a080, PDB extent 106 bytes
// country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::set_normals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_trigger_volume::RoofTriggerVolume::set_normals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_trigger_volume.rs
   Extent: 106 */

void pdb_140a0a080(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x20),*(longlong *)(param_1 + 0x18) * 0x24,4);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14303580f,0x3c,&UNK_143035850);
}

