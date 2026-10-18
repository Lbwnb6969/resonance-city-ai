// VA 0x14008fc60, PDB extent 176 bytes
// tiny_glade::gui::gui_fog::impl$2::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_fog::impl$2::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 176 */

undefined8 pdb_14008fc60(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  float fVar2;
  
  if (*param_3 != '\x01') {
    return 0;
  }
  cVar1 = pdb_140938ae0(param_2,0x15);
  if (cVar1 == '\0') {
    if (*(byte *)(param_1 + 0xc) == 0) {
      return 0;
    }
    cVar1 = pdb_140938ae0(param_2,0x14);
    if (cVar1 == '\0') {
      cVar1 = pdb_140938ae0(param_2,0x19);
      if ((cVar1 != '\0') || (cVar1 = pdb_140938ae0(param_2,0x18), cVar1 != '\0')) {
        *(undefined1 *)(param_1 + 0xc) = 0;
        return 0;
      }
      cVar1 = pdb_140938b10(param_2,0x16);
      if (cVar1 == '\0') {
        cVar1 = pdb_140938b10(param_2,0x17);
        if (cVar1 == '\0') {
          return 0;
        }
        fVar2 = *(float *)(param_1 + 8) + *(float *)(param_1 + 4);
      }
      else {
        fVar2 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8);
      }
      *(float *)(param_1 + 4) = fVar2;
    }
    else {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) ^ 1;
  }
  return 1;
}

