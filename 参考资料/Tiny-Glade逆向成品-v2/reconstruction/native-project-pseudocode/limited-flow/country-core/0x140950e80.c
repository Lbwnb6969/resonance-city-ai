// VA 0x140950e80, PDB extent 86 bytes
// country_core::render::ssbo::impl$25::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::ssbo::impl$25::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 86 */

void pdb_140950e80(int *param_1,undefined8 *param_2)

{
  int *piStack_8;
  
  if (*param_1 == 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_1430250f8,0xb,*(code **)(param_2[1] + 0x18));
    return;
  }
  piStack_8 = param_1;
  pdb_140f66090(param_2,&UNK_143025128,0xc,&piStack_8,&UNK_143025108);
  return;
}

