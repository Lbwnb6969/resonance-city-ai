// VA 0x140a92340, PDB extent 131 bytes
// country_core::resources::session::NextSession::create
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::NextSession::create
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 131 */

undefined8 * pdb_140a92340(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [160];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pub_142e32760(auStack_d8,param_2,0xa0);
  uStack_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uStack_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  pub_142e32760(param_1 + 3,auStack_d8,0xc0);
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  return param_1;
}

