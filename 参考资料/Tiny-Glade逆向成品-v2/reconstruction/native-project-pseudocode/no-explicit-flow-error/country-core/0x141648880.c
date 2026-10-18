// VA 0x141648880, PDB extent 307 bytes
// country_core::startup::startup_time_of_day::load_default_tod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::startup_time_of_day::load_default_tod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_time_of_day.rs
   Extent: 307 */

longlong * pdb_141648880(longlong *param_1)

{
  undefined1 auStack_70 [24];
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140d929f0(&uStack_40,&UNK_143321ae0,0x17);
  pbStack_20 = pbStack_38;
  pdb_140f55d10(auStack_70,pbStack_38,uStack_30);
  pdb_141706360(&lStack_58,auStack_70,&uStack_40);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_20,uStack_40,1);
  }
  if (!SBORROW8(0,lStack_58)) {
    param_1[2] = lStack_48;
    *param_1 = lStack_58;
    param_1[1] = uStack_50;
    return param_1;
  }
  uStack_40 = uStack_50;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433222d0,0x2b,&uStack_40,&UNK_143322300,&UNK_143321b30);
}

