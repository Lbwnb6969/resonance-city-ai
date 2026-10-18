// VA 0x140c2aa00, PDB extent 175 bytes
// country_core::resources::clutter_registry::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_registry::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 175 */

undefined8 pdb_140c2aa00(void)

{
  undefined8 uVar1;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_19 = 0;
  puStack_50 = &uStack_19;
  pcStack_48 = pdb_140c2a9d0;
  pdb_140f60760(&uStack_40,&UNK_14306af45,&puStack_50);
  pbStack_28 = pbStack_38;
  uVar1 = pdb_140e940b0(pbStack_38,uStack_30);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_28,uStack_40,1);
  }
  return uVar1;
}

