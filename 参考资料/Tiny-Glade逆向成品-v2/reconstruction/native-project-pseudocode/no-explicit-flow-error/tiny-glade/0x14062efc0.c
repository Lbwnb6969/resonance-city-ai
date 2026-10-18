// VA 0x14062efc0, PDB extent 528 bytes
// tiny_glade::gui::gui_tod_editor::Track::value
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::Track::value
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 528 */

undefined4 pdb_14062efc0(undefined1 param_1,undefined4 *param_2,longlong param_3)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 1:
    if (param_3 == 0) {
      return param_2[9];
    }
    if (param_3 != 1) {
      if (param_3 == 2) {
        return param_2[0xb];
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b08);
    }
    return param_2[10];
  case 2:
    if (param_3 == 0) {
      return param_2[6];
    }
    if (param_3 != 1) {
      if (param_3 == 2) {
        return param_2[8];
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b20);
    }
    return param_2[7];
  case 3:
    if (param_3 == 0) {
      return param_2[3];
    }
    if (param_3 != 1) {
      if (param_3 == 2) {
        return param_2[5];
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b38);
    }
    return param_2[4];
  case 4:
    return param_2[0xc];
  case 5:
    return param_2[0xd];
  case 6:
    return param_2[0xe];
  case 7:
    return param_2[0xf];
  case 8:
    if (param_3 == 0) {
      return param_2[0x10];
    }
    if (param_3 != 1) {
      if (param_3 == 2) {
        return param_2[0x12];
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b50);
    }
    return param_2[0x11];
  case 9:
    return param_2[0x13];
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      return param_2[1];
    }
    if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89af0);
    }
    param_2 = param_2 + 2;
  }
  return *param_2;
}

