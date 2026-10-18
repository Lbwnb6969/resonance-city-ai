// VA 0x142300390, PDB extent 170 bytes
// toolbar::menu::report_bug::impl$6::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::impl$6::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 170 */

undefined8 pdb_142300390(longlong param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  
  if (*param_3 != '\x01') {
    return 0;
  }
  cVar2 = pdb_140938ae0(param_2,0x15);
  iVar1 = *(int *)(param_1 + 0x268);
  if (cVar2 == '\0') {
    if (iVar1 == 0) {
      return 0;
    }
    cVar2 = pdb_140938ae0(param_2,0x14);
    if (cVar2 == '\0') {
      cVar2 = pdb_140938ae0(param_2,0x18);
      if ((((cVar2 == '\0') && (cVar2 = pdb_140938ae0(param_2,0x19), cVar2 == '\0')) &&
          (cVar2 = pdb_140938ae0(param_2,0x16), cVar2 == '\0')) &&
         (cVar2 = pdb_140938ae0(param_2,0x17), cVar2 == '\0')) {
        return 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x268) = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x268) = iVar1 + (uint)(iVar1 == 0);
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  return 1;
}

