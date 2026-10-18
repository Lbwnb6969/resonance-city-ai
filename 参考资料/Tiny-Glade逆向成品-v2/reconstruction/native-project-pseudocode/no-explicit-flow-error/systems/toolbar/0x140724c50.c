// VA 0x140724c50, PDB extent 76 bytes
// toolbar::mei::widgets::tweaker::impl$2::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::tweaker::impl$2::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 76 */

undefined8 pdb_140724c50(int *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  
  if (*param_3 != '\x01') {
    return 0;
  }
  cVar1 = pdb_140938ae0(param_2,0x16);
  iVar2 = -1;
  if (cVar1 == '\0') {
    cVar1 = pdb_140938ae0(param_2,0x17);
    iVar2 = 1;
    if (cVar1 == '\0') {
      return 0;
    }
  }
  *param_1 = *param_1 + iVar2;
  return 1;
}

