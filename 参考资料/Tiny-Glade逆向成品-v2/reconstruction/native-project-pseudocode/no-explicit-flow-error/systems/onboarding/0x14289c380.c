// VA 0x14289c380, PDB extent 192 bytes
// system_onboarding::hint_content::lmb_drag_binding_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_content::lmb_drag_binding_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
   Extent: 192 */

undefined8 pdb_14289c380(undefined8 param_1)

{
  undefined2 uVar1;
  undefined1 auStack_b0 [48];
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined8 uStack_50;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_7c = pdb_140a44d70(0);
  uStack_80 = 0xca;
  uStack_19 = 1;
  uVar1 = pdb_140a44d60(1);
  uStack_50 = CONCAT44(CONCAT22(uStack_50._6_2_,uVar1),0xca);
  uStack_19 = 0;
  pdb_1420c0160(auStack_b0,&uStack_80,&uStack_50);
  uStack_50 = 0x1000000c7;
  pdb_1420c0330(param_1,auStack_b0,&uStack_50);
  return param_1;
}

