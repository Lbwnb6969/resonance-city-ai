// VA 0x140cef170, PDB extent 159 bytes
// clutter_pack_pipe::mod_icons::mod_clutter_icon_package_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::mod_icons::mod_clutter_icon_package_dir
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
   Extent: 159 */

undefined8 pdb_140cef170(undefined8 param_1)

{
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141d3fca0(&uStack_40);
  pbStack_20 = pbStack_38;
  pdb_140f3e9e0(param_1,pbStack_38,uStack_30,&UNK_1430876d8,0x18);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return param_1;
}

