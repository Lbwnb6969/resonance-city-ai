// VA 0x140cea950, PDB extent 68 bytes
// clutter_pack_pipe::build_object_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::build_object_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 68 */

void pdb_140cea950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  *(undefined8 *)(param_1 + 0xc0) = param_5;
  *(undefined8 *)(param_1 + 200) = param_6;
  *(undefined8 *)(param_1 + 0xd0) = param_7;
  *(undefined8 *)(param_1 + 0xd8) = param_8;
  *(undefined8 *)(param_1 + 0xf8) = param_9;
  *(undefined1 *)(param_1 + 0x105) = 0;
  return;
}

