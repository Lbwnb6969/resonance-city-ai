// VA 0x142b5a620, PDB extent 114 bytes
// toolbar::resouces_and_components::LogSlider::param_to_value
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::resouces_and_components::LogSlider::param_to_value
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/mod.rs
   Extent: 114 */

void pdb_142b5a620(float *param_1,float param_2)

{
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  code *pcStack_18;
  float *pfStack_10;
  code *pcStack_8;
  
  fStack_28 = *param_1;
  fStack_24 = param_1[1];
  if (fStack_28 <= fStack_24) {
    if (fStack_28 <= param_2) {
      fStack_28 = param_2;
    }
    if (fStack_28 <= fStack_24) {
      fStack_24 = fStack_28;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e32a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    exp2f(fStack_24 + param_1[3]);
    return;
  }
  pfStack_20 = &fStack_28;
  pcStack_18 = pdb_140f705d0;
  pfStack_10 = &fStack_24;
  pcStack_8 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14367eb78,&pfStack_20,&UNK_14367ec18);
}

