// VA 0x140ceaa80, PDB extent 29 bytes
// clutter_pack_pipe::MapKind::texture_prefix
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::MapKind::texture_prefix
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 29 */

undefined * pdb_140ceaa80(byte param_1)

{
  return &UNK_143087698 + *(int *)(&UNK_143087698 + (ulonglong)param_1 * 4);
}

