// VA 0x1409519a0, PDB extent 16 bytes
// country_core::render::nani::systems::nani_maintain_instances::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::systems::nani_maintain_instances::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 16 */

void pdb_1409519a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar1 = *param_2;
  return;
}

