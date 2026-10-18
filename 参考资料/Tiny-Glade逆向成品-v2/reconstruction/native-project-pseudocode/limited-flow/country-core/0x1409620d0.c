// VA 0x1409620d0, PDB extent 13 bytes
// country_core::render::nani::maintenance::NaniDrawListTelemetry::reset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::maintenance::NaniDrawListTelemetry::reset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
   Extent: 13 */

void pdb_1409620d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e32780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,0,0x660);
  return;
}

