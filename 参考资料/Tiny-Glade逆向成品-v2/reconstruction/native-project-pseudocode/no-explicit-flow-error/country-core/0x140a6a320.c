// VA 0x140a6a320, PDB extent 73 bytes
// country_core::resources::walls::window_cuts::WindowCutRecordGpu::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::WindowCutRecordGpu::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 73 */

void pdb_140a6a320(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(byte *)(param_2 + 0x1c);
  iVar3 = *(int *)(param_3 + 0x10 + uVar4 * 0x14);
  bVar2 = *(byte *)(param_2 + 0x1d);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  *(uint *)((longlong)param_1 + 0xc) = iVar3 << 8 | (uint)bVar2;
  uVar1 = *(undefined8 *)(param_3 + uVar4 * 0x14);
  param_1[2] = *(undefined8 *)(param_2 + 8);
  param_1[3] = uVar1;
  param_1[4] = *(undefined8 *)(param_3 + 8 + uVar4 * 0x14);
  param_1[5] = 0;
  return;
}

