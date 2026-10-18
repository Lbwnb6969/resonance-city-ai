// VA 0x140cb5c90, PDB extent 247 bytes
// tg_text::TextFragment::take_editor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::take_editor
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 247 */

undefined8 pdb_140cb5c90(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uStack_178;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [320];
  
  uVar1 = (longlong)param_2[7] >> 0x3f & param_2[7] + 0x8000000000000001;
  if (uVar1 == 0) {
    puVar2 = param_2 + 0x2a;
    puVar3 = (undefined4 *)((longlong)param_2 + 0x154);
  }
  else if (uVar1 == 1) {
    puVar2 = (undefined8 *)(param_2[8] + 0x118);
    puVar3 = (undefined4 *)(param_2[8] + 0x11c);
  }
  else {
    puVar2 = (undefined8 *)(param_2[8] + 0x128);
    puVar3 = (undefined4 *)(param_2[8] + 300);
  }
  pdb_140cc65a0(auStack_150,*(undefined4 *)puVar2,*puVar3);
  pub_142e32760(param_1,param_2,0x1a0);
  *param_2 = 0;
  param_2[4] = 0x8000000000000000;
  pub_142e32760(param_2 + 5,auStack_160,0x150);
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(ulonglong *)((longlong)param_2 + 0x17c) = (ulonglong)uStack_178;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x189) = 0;
  *(undefined4 *)(param_2 + 0x33) = 4;
  return param_1;
}

