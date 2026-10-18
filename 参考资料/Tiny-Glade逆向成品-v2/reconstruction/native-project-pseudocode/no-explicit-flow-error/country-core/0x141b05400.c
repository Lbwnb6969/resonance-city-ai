// VA 0x141b05400, PDB extent 216 bytes
// country_core::startup::load_clutter_packs::build_requests
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_clutter_packs::build_requests
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 216 */

longlong * pdb_141b05400(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  longlong alStack_38 [2];
  
  alStack_38[1] = 0xfffffffffffffffe;
  if (param_3 != 0) {
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(param_3 * 0x38,8);
    if (pbStack_50 != (byte *)0x0) goto LAB_141b05452;
    pdb_142dc7e2a(8,param_3 * 0x38);
  }
  pbStack_50 = (byte *)0x8;
LAB_141b05452:
  plStack_60 = alStack_38;
  alStack_38[0] = 0;
  uStack_58 = 0;
  lStack_48 = param_3;
  pbStack_40 = pbStack_50;
  pdb_1419b50a0(param_2,param_3 * 0x90 + param_2,&plStack_60);
  param_1[2] = alStack_38[0];
  *param_1 = lStack_48;
  param_1[1] = (longlong)pbStack_40;
  return param_1;
}

