// VA 0x140aae2d0, PDB extent 93 bytes
// country_core::resources::texture_presets::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/texture_presets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::texture_presets::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/texture_presets.rs
   Extent: 93 */

void pdb_140aae2d0(undefined8 *param_1,byte param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  uVar4 = (ulonglong)param_2;
  uVar1 = (&UNK_143049c88)[uVar4];
  uVar3 = *(undefined8 *)(&UNK_143049ca8 + uVar4 * 8);
  uVar2 = (&UNK_143049d78)[uVar4];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(&UNK_143049c20 + uVar4 * 4);
  *(undefined4 *)(param_1 + 2) = 0x10001;
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  *(undefined1 *)((longlong)param_1 + 0x16) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x17) = 0x201;
  *param_1 = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = uVar2;
  return;
}

