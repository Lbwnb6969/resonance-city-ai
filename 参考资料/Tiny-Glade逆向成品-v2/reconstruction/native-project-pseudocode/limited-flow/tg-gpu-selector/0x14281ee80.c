// VA 0x14281ee80, PDB extent 749 bytes
// iced_graphics::damage::impl$0::bounds<enum2$<iced_tiny_skia::primitive::Custom> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   iced_graphics::damage::impl$0::bounds<enum2$<iced_tiny_skia::primitive::Custom> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/lib.rs
   Extent: 749 */

void pdb_14281ee80(undefined8 param_1,uint *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00014281eecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14359e49c + *(int *)(&UNK_14359e49c + (ulonglong)uVar1 * 4)))
            (&UNK_14359e49c + *(int *)(&UNK_14359e49c + (ulonglong)uVar1 * 4));
  return;
}

