// VA 0x14289c330, PDB extent 74 bytes
// system_onboarding::hint_content::disable_snapping_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_content::disable_snapping_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
   Extent: 74 */

undefined8 pdb_14289c330(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  
  uStack_3c = pdb_140a44d70(0x10);
  uStack_40 = 0xca;
  uVar1 = 0;
  if (*(longlong *)(param_2 + 0x298) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x290);
  }
  pdb_1420c0500(param_1,&uStack_40,uVar1);
  return param_1;
}

