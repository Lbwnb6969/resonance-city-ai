// VA 0x140729540, PDB extent 45 bytes
// toolbar::mei::widgets::impl$6::pre_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$6::pre_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 45 */

void pdb_140729540(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x25d) != '*') {
    cVar1 = pdb_14093a1c0(param_2[1]);
    if (cVar1 != '\0') {
      *(byte *)*param_2 = *(byte *)*param_2 | 0x20;
    }
  }
  return;
}

