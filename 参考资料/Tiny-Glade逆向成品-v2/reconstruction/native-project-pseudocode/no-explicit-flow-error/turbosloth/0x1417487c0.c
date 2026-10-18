// VA 0x1417487c0, PDB extent 27 bytes
// turbosloth::asset::impl$0::source
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::asset::impl$0::source
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 27 */

longlong pdb_1417487c0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) +
         (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
}

