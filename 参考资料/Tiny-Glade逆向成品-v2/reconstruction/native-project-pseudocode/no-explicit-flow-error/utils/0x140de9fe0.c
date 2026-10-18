// VA 0x140de9fe0, PDB extent 46 bytes
// utils::local_time::init_local_time
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/local_time.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::local_time::init_local_time
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/local_time.rs
   Extent: 46 */

void pdb_140de9fe0(void)

{
  uint uVar1;
  undefined1 auStack_18 [16];
  
  pdb_140e03700(auStack_18);
  uVar1 = pdb_140e02930(auStack_18);
  _DAT_143cb2ddc = uVar1 & 0xffffff01 ^ 1;
  return;
}

