// VA 0x140d8a970, PDB extent 90 bytes
// tg_mods::overlay::impl$14::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::impl$14::fmt
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 90 */

void pdb_140d8a970(int *param_1,undefined8 *param_2)

{
  int *piStack_8;
  
  if (*param_1 == 1) {
    piStack_8 = param_1 + 2;
    pdb_140f66090(param_2,&UNK_1431e50c0,8,&piStack_8,&UNK_1431e50a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1431e5095,5,*(code **)(param_2[1] + 0x18));
  return;
}

