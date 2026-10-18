// VA 0x142e18d90, PDB extent 279 bytes
// toolbar::menu::credits::spawn_third_party_license_http_server::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::menu::credits::spawn_third_party_license_http_server::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 279 */

undefined8 pdb_142e18d90(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  byte **ppbStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  byte *pbStack_38;
  undefined8 *puStack_30;
  byte *pbStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  ppbStack_58 = &pbStack_38;
  pcStack_50 = pdb_1400d7400;
  pbStack_38 = param_1;
  puStack_30 = param_2;
  pdb_140f60760(auStack_70,&UNK_1434d2107,&ppbStack_58);
  uStack_48 = uStack_60;
  uVar1 = pdb_142dce910(&ppbStack_58);
  pbStack_28 = pbStack_38;
  puStack_20 = puStack_30;
  if ((code *)*puStack_30 != (code *)0x0) {
    (*(code *)*puStack_30)(pbStack_38);
  }
  if (puStack_20[1] != 0) {
    pub_1406abac0(pbStack_28,puStack_20[1],puStack_20[2]);
  }
  return uVar1;
}

