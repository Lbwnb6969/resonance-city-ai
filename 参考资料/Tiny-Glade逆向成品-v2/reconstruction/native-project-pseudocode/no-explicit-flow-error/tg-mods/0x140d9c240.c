// VA 0x140d9c240, PDB extent 118 bytes
// tg_mods::discovery::mods_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::mods_root
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 118 */

longlong * pdb_140d9c240(longlong *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  puVar2 = &UNK_1431e5963;
  pdb_140f4c4e0(&lStack_28,&UNK_1431e5963,0x13);
  if (SBORROW8(0,lStack_28)) {
    uVar1 = pdb_140dc7520(-lStack_28);
    pdb_140f3e9e0(param_1,uVar1,puVar2,&UNK_1431e5976,4);
    return param_1;
  }
  param_1[3] = lStack_10;
  param_1[1] = lStack_20;
  param_1[2] = lStack_18;
  *param_1 = lStack_28;
  return param_1;
}

