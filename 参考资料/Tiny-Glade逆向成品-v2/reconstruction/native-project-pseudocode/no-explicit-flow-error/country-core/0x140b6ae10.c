// VA 0x140b6ae10, PDB extent 39 bytes
// country_core::resources::history::replay_cmd_buffer::ReplayBuffer::front_mut_bucket
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/replay_cmd_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::replay_cmd_buffer::ReplayBuffer::front_mut_bucket
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/replay_cmd_buffer.rs
   Extent: 39 */

longlong pdb_140b6ae10(ulonglong *param_1)

{
  ulonglong uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = 0;
    if (*param_1 <= param_1[2]) {
      uVar1 = *param_1;
    }
    return (param_1[2] - uVar1) * 0x40 + param_1[1];
  }
  return 0;
}

