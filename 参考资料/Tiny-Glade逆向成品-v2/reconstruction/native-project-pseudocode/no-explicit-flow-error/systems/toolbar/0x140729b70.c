// VA 0x140729b70, PDB extent 76 bytes
// toolbar::mei::widgets::impl$15::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$15::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 76 */

undefined8 pdb_140729b70(int *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  
  if (*param_3 != '\0') {
    return 0;
  }
  cVar1 = pdb_140938ae0(param_2,0x1a);
  iVar2 = -1;
  if (cVar1 == '\0') {
    cVar1 = pdb_140938ae0(param_2,0x1b);
    iVar2 = 1;
    if (cVar1 == '\0') {
      return 0;
    }
  }
  *param_1 = *param_1 + iVar2;
  return 1;
}

