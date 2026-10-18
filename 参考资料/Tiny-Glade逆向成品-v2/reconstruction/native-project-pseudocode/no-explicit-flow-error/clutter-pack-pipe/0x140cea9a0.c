// VA 0x140cea9a0, PDB extent 159 bytes
// clutter_pack_pipe::clutter_pack_package_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::clutter_pack_package_dir
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 159 */

undefined8 pdb_140cea9a0(undefined8 param_1)

{
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141d3fca0(&uStack_40);
  pbStack_20 = pbStack_38;
  pdb_140f3e9e0(param_1,pbStack_38,uStack_30,&UNK_14308725d,0x14);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return param_1;
}

