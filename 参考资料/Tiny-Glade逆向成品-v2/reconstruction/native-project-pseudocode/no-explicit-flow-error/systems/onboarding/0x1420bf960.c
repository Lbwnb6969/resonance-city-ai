// VA 0x1420bf960, PDB extent 175 bytes
// system_onboarding::hint_state::hint_text
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::hint_text
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 175 */

undefined8 * pdb_1420bf960(undefined8 *param_1,byte param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if ((param_2 | 0x10) == 0x12) {
    pdb_1420bf4a0(param_1);
  }
  else {
    pdb_1420bf4a0(&uStack_38);
    pbStack_20 = pbStack_30;
    pdb_140f5f4f0(&uStack_50,pbStack_30,uStack_28);
    param_1[2] = uStack_40;
    *param_1 = uStack_50;
    param_1[1] = uStack_48;
    if (0 < (longlong)uStack_38) {
      pub_1406abac0(pbStack_20,uStack_38,1);
    }
  }
  return param_1;
}

