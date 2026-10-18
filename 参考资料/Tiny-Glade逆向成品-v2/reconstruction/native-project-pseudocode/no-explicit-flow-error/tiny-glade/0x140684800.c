// VA 0x140684800, PDB extent 170 bytes
// tiny_glade::gui::gui_tod::impl$2::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_tod::impl$2::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 170 */

undefined8 pdb_140684800(float *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  float fVar2;
  
  if (*param_3 != '\x01') {
    return 0;
  }
  cVar1 = pdb_140938ae0(param_2,0x15);
  if (cVar1 == '\0') {
    if (*(byte *)(param_1 + 2) == 0) {
      return 0;
    }
    cVar1 = pdb_140938ae0(param_2,0x14);
    if (cVar1 == '\0') {
      cVar1 = pdb_140938ae0(param_2,0x19);
      if ((cVar1 != '\0') || (cVar1 = pdb_140938ae0(param_2,0x18), cVar1 != '\0')) {
        *(undefined1 *)(param_1 + 2) = 0;
        return 0;
      }
      cVar1 = pdb_140938b10(param_2,0x16);
      if (cVar1 == '\0') {
        cVar1 = pdb_140938b10(param_2,0x17);
        if (cVar1 == '\0') {
          return 0;
        }
        fVar2 = param_1[1] + *param_1;
      }
      else {
        fVar2 = *param_1 - param_1[1];
      }
      *param_1 = fVar2;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) ^ 1;
  }
  return 1;
}

