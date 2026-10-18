// VA 0x140a6d770, PDB extent 5 bytes
// cmsStageNext
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: cmsStageNext
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 5 */

undefined8 pdb_140a6d770(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}

