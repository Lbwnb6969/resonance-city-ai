// VA 0x140a6d550, PDB extent 65 bytes
// country_core::input::input_stream::impl$2::index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::input_stream::impl$2::index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 65 */

longlong pdb_140a6d550(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 < *(ulonglong *)(param_1 + 0x38)) {
    param_2 = param_2 + *(longlong *)(param_1 + 0x30);
    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x20) <= param_2) {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
    }
    return (param_2 - uVar3) * 0xd0 + *(longlong *)(param_1 + 0x28);
  }
  pdb_142dc8110(&UNK_143041028,0x14);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

