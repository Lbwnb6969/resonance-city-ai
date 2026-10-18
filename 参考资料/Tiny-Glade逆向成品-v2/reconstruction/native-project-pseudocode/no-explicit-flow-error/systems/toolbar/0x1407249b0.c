// VA 0x1407249b0, PDB extent 97 bytes
// toolbar::mei::widgets::tweaker::impl$4::format
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::tweaker::impl$4::format
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 97 */

undefined8 pdb_1407249b0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uStack_18;
  code *pcStack_10;
  
  uStack_18 = *param_2;
  if (_DAT_142e3b1d8 <= *(float *)(param_2 + 1)) {
    puVar1 = &UNK_142fa5bf5;
  }
  else {
    puVar1 = &UNK_142fa5bff;
  }
  pcStack_10 = pdb_140f70fc0;
  pdb_140f60760(param_1,puVar1,&uStack_18);
  return param_1;
}

