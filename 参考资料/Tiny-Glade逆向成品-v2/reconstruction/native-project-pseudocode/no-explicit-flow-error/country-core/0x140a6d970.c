// VA 0x140a6d970, PDB extent 5 bytes
// country_core::input::input_stream::InputStream::sync_point_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::input_stream::InputStream::sync_point_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 5 */

undefined8 pdb_140a6d970(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

