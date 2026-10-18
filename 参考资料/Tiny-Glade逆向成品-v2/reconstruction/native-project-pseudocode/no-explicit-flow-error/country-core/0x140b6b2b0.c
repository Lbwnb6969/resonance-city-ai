// VA 0x140b6b2b0, PDB extent 22 bytes
// country_core::systems::is_gameplay_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::is_gameplay_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod.rs
   Extent: 22 */

undefined8 pdb_140b6b2b0(longlong *param_1,undefined8 *param_2)

{
  if (*(char *)(*param_1 + 0x30) == '\x01') {
    return CONCAT71((int7)((ulonglong)*param_2 >> 8),*(char *)*param_2 == '\x01');
  }
  return 0;
}

