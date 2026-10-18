// VA 0x1405730b0, PDB extent 96 bytes
// tiny_glade::crash_pickup::crash_payload::impl$5::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::crash_payload::impl$5::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 96 */

void pdb_1405730b0(longlong *param_1,undefined8 *param_2)

{
  longlong *plStack_18;
  longlong **pplStack_10;
  code *pcStack_8;
  
  if (SBORROW8(0,*param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_142f6acc8,0x18,*(code **)(param_2[1] + 0x18));
    return;
  }
  pplStack_10 = &plStack_18;
  pcStack_8 = pdb_140493ec0;
  plStack_18 = param_1;
  pdb_140f681d0(*param_2,param_2[1],&UNK_142f6a6c5,&pplStack_10);
  return;
}

