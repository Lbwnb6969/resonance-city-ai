// VA 0x140b278d0, PDB extent 82 bytes
// country_core::systems::steam::workshop_publish::scan_local_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::steam::workshop_publish::scan_local_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 82 */

undefined8 pdb_140b278d0(undefined8 param_1)

{
  longlong lVar1;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  pdb_140d8ead0(&lStack_28);
  lVar1 = lStack_28;
  lStack_10 = lStack_18 * 0xb0 + lStack_20;
  lStack_28 = lStack_20;
  lStack_18 = lVar1;
  pdb_140c7e300(param_1,&lStack_28);
  return param_1;
}

