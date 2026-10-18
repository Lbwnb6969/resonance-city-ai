// VA 0x140a82810, PDB extent 61 bytes
// country_core::resources::daily::DailyThemeInfo::is_weekly
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/daily.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::daily::DailyThemeInfo::is_weekly
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/daily.rs
   Extent: 61 */

byte pdb_140a82810(longlong param_1)

{
  byte abStack_18 [8];
  ulonglong uStack_10;
  
  pdb_140f3fcf0(abStack_18,param_1 + 0x128,*(undefined4 *)(param_1 + 0x120),
                *(undefined4 *)(param_1 + 0x124));
  return ~abStack_18[0] & 0x6977f < uStack_10;
}

