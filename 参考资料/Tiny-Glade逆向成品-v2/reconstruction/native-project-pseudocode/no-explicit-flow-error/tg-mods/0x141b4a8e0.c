// VA 0x141b4a8e0, PDB extent 91 bytes
// tg_mods::identity::RecordedModEntry::mod_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::RecordedModEntry::mod_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 91 */

undefined8 * pdb_141b4a8e0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  
  if (3 < *(ulonglong *)(param_2 + 0x10)) {
    uVar1 = **(uint **)(param_2 + 8);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar1 < 0x6d6f643a == 0x6d6f643a < uVar1) {
      pdb_141b4aca0(param_1,*(uint **)(param_2 + 8) + 1,*(ulonglong *)(param_2 + 0x10) - 4);
      return param_1;
    }
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}

