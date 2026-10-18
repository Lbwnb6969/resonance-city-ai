// VA 0x142d8a750, PDB extent 76 bytes
// toolbar::mei::core::mei_pre_update::closure$6
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::mei_pre_update::closure$6
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 76 */

void pdb_142d8a750(longlong *param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  if (*param_1 == 0) {
    param_1 = (longlong *)0x0;
  }
  uStack_20 = pdb_14072acc0(param_1);
  puStack_10 = &uStack_20;
  pcStack_8 = pdb_1402ed420;
  uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142fa6bb1,&puStack_10,&UNK_142fa6be8);
}

