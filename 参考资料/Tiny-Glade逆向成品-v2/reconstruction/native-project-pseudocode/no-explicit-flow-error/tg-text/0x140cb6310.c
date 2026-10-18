// VA 0x140cb6310, PDB extent 128 bytes
// tg_text::TextFragment::text
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::text
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 128 */

undefined8 pdb_140cb6310(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lStack_18;
  longlong lStack_10;
  
  lStack_18 = *(longlong *)(param_2 + 0x40);
  uVar1 = *(longlong *)(param_2 + 0x38) >> 0x3f &
          *(longlong *)(param_2 + 0x38) + 0x8000000000000001U;
  if (uVar1 == 0) {
    lStack_10 = *(longlong *)(param_2 + 0x48) * 0xb0;
  }
  else if (uVar1 == 1) {
    lStack_10 = *(longlong *)(lStack_18 + 0x10) * 0xb0;
    lStack_18 = *(longlong *)(lStack_18 + 8);
  }
  else {
    lStack_10 = *(longlong *)(lStack_18 + 0x20) * 0xb0;
    lStack_18 = *(longlong *)(lStack_18 + 0x18);
  }
  lStack_10 = lStack_10 + lStack_18;
  pdb_141cc0530(param_1,&lStack_18,&UNK_1433acba8,1);
  return param_1;
}

