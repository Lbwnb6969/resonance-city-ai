// VA 0x141643240, PDB extent 175 bytes
// tg_mods::overlay::read_to_string<ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::read_to_string<ref$<std::path::PathBuf> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 175 */

undefined8 pdb_141643240(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [24];
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140d929f0(&uStack_40,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  pbStack_20 = pbStack_38;
  pdb_140f55d10(auStack_58,pbStack_38,uStack_30);
  pdb_141706360(param_1,auStack_58,&uStack_40);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return param_1;
}

