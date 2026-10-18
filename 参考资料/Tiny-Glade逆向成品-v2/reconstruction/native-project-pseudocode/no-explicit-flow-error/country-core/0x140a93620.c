// VA 0x140a93620, PDB extent 407 bytes
// country_core::resources::session::enumerate_saved_sessions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::enumerate_saved_sessions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 407 */

undefined8 * pdb_140a93620(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_a00 [608];
  undefined1 *puStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [608];
  undefined8 uStack_530;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [608];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_140f4f710(&puStack_7a0);
  puVar1 = puStack_7a0;
  if (puStack_7a0 == (undefined1 *)0x2) {
    puStack_7a0 = (undefined1 *)0x2;
    pdb_1404b38e0(&uStack_798);
  }
  else {
    pub_142e32760(auStack_a00,auStack_790,0x260);
  }
  puStack_7a0 = (undefined1 *)0x2;
  uStack_530 = 2;
  puStack_2c0 = puVar1;
  uStack_2b8 = uStack_798;
  pub_142e32760(auStack_2b0,auStack_a00,0x260);
  pdb_1415fb580(&uStack_50,&puStack_7a0);
  puStack_7a0 = &uStack_29;
  if (1 < uStack_40) {
    uStack_38 = uStack_48;
    if (uStack_40 < 0x15) {
      pdb_14151aeb0(uStack_48,uStack_40,1,&puStack_7a0);
    }
    else {
      pdb_140c76b00(uStack_48,uStack_40,&puStack_7a0);
    }
  }
  param_1[2] = uStack_40;
  *param_1 = uStack_50;
  param_1[1] = uStack_48;
  return param_1;
}

