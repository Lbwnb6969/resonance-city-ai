// VA 0x140cea920, PDB extent 43 bytes
// clutter_pack_pipe::ClutterMaterialEntry::emits
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::ClutterMaterialEntry::emits
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 43 */

byte pdb_140cea920(longlong param_1)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((((*(float *)(param_1 + 0x60) == 0.0) && (!NAN(*(float *)(param_1 + 0x60)))) &&
      (*(float *)(param_1 + 100) == 0.0)) && (!NAN(*(float *)(param_1 + 100)))) {
    bVar1 = -(*(float *)(param_1 + 0x68) != 0.0) & 1;
  }
  return bVar1;
}

