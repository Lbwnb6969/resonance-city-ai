// VA 0x140122690, PDB extent 4602 bytes
// tiny_glade::tgsr_capture::do_gui_tgsr_capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::tgsr_capture::do_gui_tgsr_capture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 4602 */

void pdb_140122690(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    lVar1 = 3;
    if (2 < *(ulonglong *)*param_1) {
      lVar1 = *(ulonglong *)*param_1 - 3;
    }
                    /* WARNING: Could not recover jumptable at 0x000140122723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142e47118 + *(int *)(&UNK_142e47118 + lVar1 * 4)))
              (&UNK_142e47118 + *(int *)(&UNK_142e47118 + lVar1 * 4));
    return;
  }
  return;
}

