// VA 0x140a6d780, PDB extent 51 bytes
// country_core::input::input_stream::InputStream::last_frame_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::input_stream::InputStream::last_frame_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 51 */

longlong pdb_140a6d780(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = (*(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30)) - 1;
    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x20) <= uVar1) {
      uVar2 = *(ulonglong *)(param_1 + 0x20);
    }
    return (uVar1 - uVar2) * 0xd0 + *(longlong *)(param_1 + 0x28);
  }
  return 0;
}

