// VA 0x142322590, PDB extent 274 bytes
// toolbar::menu::load::load_session_meta
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::load::load_session_meta
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 274 */

undefined8 pdb_142322590(undefined8 param_1)

{
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140a937d0(&uStack_48);
  pbStack_28 = pbStack_40;
  pdb_140f3e9e0(&uStack_68,pbStack_40,uStack_38,&UNK_1434d9cc8,9);
  pbStack_20 = pbStack_60;
  pdb_140a926d0(param_1,pbStack_60,uStack_58);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_20,uStack_68,1);
  }
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_28,uStack_48,1);
  }
  return param_1;
}

