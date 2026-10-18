// VA 0x141b4a7f0, PDB extent 227 bytes
// tg_mods::identity::folder_mod_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::folder_mod_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 227 */

longlong *
pdb_141b4a7f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_68,param_2,param_3,&UNK_143396434,0xb);
  pbStack_30 = pbStack_60;
  pdb_141b49cc0(&lStack_48,pbStack_60,uStack_58);
  if (SBORROW8(0,lStack_48)) {
    pdb_141b4af10(param_1,pbStack_30,uStack_58,param_4,param_5);
  }
  else {
    param_1[2] = lStack_38;
    *param_1 = lStack_48;
    param_1[1] = lStack_40;
  }
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_30,uStack_68,1);
  }
  return param_1;
}

