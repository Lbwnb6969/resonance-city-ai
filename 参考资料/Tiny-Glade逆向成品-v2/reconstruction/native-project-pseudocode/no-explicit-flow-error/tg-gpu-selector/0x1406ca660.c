// VA 0x1406ca660, PDB extent 108 bytes
// tg_gpu_selector::gpu_selection::Controls::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::Controls::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 108 */

void pdb_1406ca660(ulonglong *param_1,ulonglong *param_2,byte param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong *param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = param_2[2];
  uVar9 = 0;
  if ((param_3 & 1) != 0) {
    uVar9 = param_4;
  }
  param_1[0xe] = uVar1;
  uVar2 = param_2[1];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar2;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = param_7[3];
  uVar5 = param_7[4];
  uVar6 = param_7[5];
  uVar7 = param_7[6];
  uVar8 = param_7[7];
  param_1[2] = *param_7;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  param_1[8] = uVar7;
  param_1[9] = uVar8;
  uVar2 = param_7[9];
  param_1[10] = param_7[8];
  param_1[0xb] = uVar2;
  param_1[0xf] = param_5;
  param_1[0x10] = param_6;
  *param_1 = (ulonglong)(uVar1 != 0);
  param_1[1] = uVar9;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

