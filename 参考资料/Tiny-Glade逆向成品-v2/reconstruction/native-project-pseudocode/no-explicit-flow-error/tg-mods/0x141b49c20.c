// VA 0x141b49c20, PDB extent 159 bytes
// tg_mods::identity::read_mod_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::read_mod_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 159 */

undefined8 pdb_141b49c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_40,param_2,param_3,&UNK_143396434,0xb);
  pbStack_20 = pbStack_38;
  pdb_141b49cc0(param_1,pbStack_38,uStack_30);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  return param_1;
}

