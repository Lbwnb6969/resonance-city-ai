// VA 0x140144ba0, PDB extent 749 bytes
// iced_graphics::damage::impl$0::bounds<enum2$<iced_tiny_skia::primitive::Custom> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   iced_graphics::damage::impl$0::bounds<enum2$<iced_tiny_skia::primitive::Custom> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 749 */

void pdb_140144ba0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = *param_2 - 3;
    if (*param_2 < 3) {
      uVar1 = 4;
    }
    if (uVar1 != 10) break;
    param_2 = (uint *)(*(longlong *)(param_2 + 2) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000140144bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142e48240 + *(int *)(&UNK_142e48240 + (ulonglong)uVar1 * 4)))
            (&UNK_142e48240 + *(int *)(&UNK_142e48240 + (ulonglong)uVar1 * 4));
  return;
}

