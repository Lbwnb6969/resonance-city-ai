// VA 0x140a881f0, PDB extent 50 bytes
// country_core::utils::audio_utils::AudioLoop::current
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::audio_utils::AudioLoop::current
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
   Extent: 50 */

longlong pdb_140a881f0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < *(ulonglong *)(param_1 + 0x10)) {
    return uVar1 * 0x30 + *(longlong *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,*(ulonglong *)(param_1 + 0x10),&UNK_143043a80);
}

