// VA 0x142d925c0, PDB extent 256 bytes
// country_core::resources::clutter_packs::discover_mod_clutter::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::discover_mod_clutter::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 256 */

undefined8 pdb_142d925c0(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  code *pcStack_40;
  byte **ppbStack_38;
  code *pcStack_30;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_40 = pdb_140f58250;
  ppbStack_38 = &pbStack_28;
  pcStack_30 = pdb_140de07e0;
  uStack_48 = param_1;
  pbStack_28 = param_2;
  uVar1 = pdb_142d8fe70(&UNK_1430761eb,&uStack_48);
  pbStack_20 = pbStack_28;
  if (*(longlong *)pbStack_28 == 1) {
    pdb_1404b38e0(pbStack_28 + 8);
  }
  else if ((*(longlong *)pbStack_28 == 0) && (*(ulonglong *)(pbStack_28 + 0x10) != 0)) {
    pub_1406abac0(*(byte **)(pbStack_28 + 8),*(ulonglong *)(pbStack_28 + 0x10),1);
  }
  pub_1406abac0(pbStack_20,0x28,8);
  return uVar1;
}

