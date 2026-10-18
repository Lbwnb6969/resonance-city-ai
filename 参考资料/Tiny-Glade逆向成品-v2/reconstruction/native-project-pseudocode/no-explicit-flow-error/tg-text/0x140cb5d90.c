// VA 0x140cb5d90, PDB extent 89 bytes
// tg_text::TextFragment::editor_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::editor_action
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 89 */

void pdb_140cb5d90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 == *(longlong *)(param_1 + 0x1a0)) {
    pdb_142d7e6e0(param_1 + 0x1a0);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar2 * 0x20);
  *puVar1 = param_2[2];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(longlong *)(param_1 + 0x1b0) = lVar2 + 1;
  return;
}

