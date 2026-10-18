// VA 0x1407295e0, PDB extent 42 bytes
// toolbar::mei::widgets::impl$26::pre_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$26::pre_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 42 */

void pdb_1407295e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x44) != '*') {
    cVar1 = pdb_14093a1c0(param_2[1]);
    if (cVar1 != '\0') {
      *(byte *)*param_2 = *(byte *)*param_2 | 0x20;
    }
  }
  return;
}

