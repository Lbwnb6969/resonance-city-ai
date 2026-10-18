// VA 0x142e31c00, PDB extent 144 bytes
// toolbar::menu::credits::spawn_third_party_license_http_server::closure$1::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::menu::credits::spawn_third_party_license_http_server::closure$1::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 144 */

undefined8 pdb_142e31c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_38 = &uStack_20;
  pcStack_30 = pdb_140f56800;
  uStack_20 = param_1;
  pdb_140f60760(auStack_50,&UNK_14367e160,&puStack_38);
  uStack_28 = uStack_40;
  uVar1 = pdb_142dce910(&puStack_38);
  pdb_1404b38e0(&uStack_20);
  return uVar1;
}

