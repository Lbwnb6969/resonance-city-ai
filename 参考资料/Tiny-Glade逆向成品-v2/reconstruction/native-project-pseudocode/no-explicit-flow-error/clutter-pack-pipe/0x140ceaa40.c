// VA 0x140ceaa40, PDB extent 53 bytes
// clutter_pack_pipe::MapKind::texture_opts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::MapKind::texture_opts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 53 */

void pdb_140ceaa40(undefined4 *param_1,char param_2)

{
  *param_1 = 0;
  *(char *)(param_1 + 5) = (char)(0x1000001 >> (param_2 * '\b' & 0x1fU));
  param_1[3] = 1;
  *(char *)((longlong)param_1 + 0x17) = (char)(0x10200 >> (param_2 * '\b' & 0x1fU));
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  return;
}

