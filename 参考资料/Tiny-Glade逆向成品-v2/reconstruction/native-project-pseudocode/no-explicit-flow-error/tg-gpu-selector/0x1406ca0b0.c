// VA 0x1406ca0b0, PDB extent 234 bytes
// tg_gpu_selector::gpu_selection::intel_driver_downloads
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_gpu_selector::gpu_selection::intel_driver_downloads
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/gpu_selection.rs
   Extent: 234 */

void pdb_1406ca0b0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar3 = pdb_140e14b50(param_2);
  if (bVar3 - 2 < 2) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x20,8);
    if (pbVar4 == (byte *)0x0) goto LAB_1406ca18a;
    *param_1 = 1;
    param_1[1] = pbVar4;
    uVar2 = _UNK_142f99428;
    *(undefined8 *)(pbVar4 + 0x10) = _DAT_142f99420;
    *(undefined8 *)(pbVar4 + 0x18) = uVar2;
    uVar5 = _DAT_142f99410;
    uVar6 = _UNK_142f99414;
    uVar7 = _UNK_142f99418;
    uVar8 = _UNK_142f9941c;
  }
  else if (bVar3 == 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x20,8);
    if (pbVar4 == (byte *)0x0) {
LAB_1406ca18a:
      pdb_142dc7e2a(8,0x20);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_1 = 1;
    param_1[1] = pbVar4;
    uVar2 = _UNK_142f992b0;
    *(undefined8 *)(pbVar4 + 0x10) = _DAT_142f992a8;
    *(undefined8 *)(pbVar4 + 0x18) = uVar2;
    uVar5 = _DAT_142f99298;
    uVar6 = _UNK_142f9929c;
    uVar7 = _UNK_142f992a0;
    uVar8 = _UNK_142f992a4;
  }
  else {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x20,8);
    if (pbVar4 == (byte *)0x0) goto LAB_1406ca18a;
    *param_1 = 1;
    param_1[1] = pbVar4;
    uVar2 = _UNK_142f99370;
    *(undefined8 *)(pbVar4 + 0x10) = _DAT_142f99368;
    *(undefined8 *)(pbVar4 + 0x18) = uVar2;
    uVar5 = _DAT_142f99358;
    uVar6 = _UNK_142f9935c;
    uVar7 = _UNK_142f99360;
    uVar8 = _UNK_142f99364;
  }
  *(undefined4 *)pbVar4 = uVar5;
  *(undefined4 *)(pbVar4 + 4) = uVar6;
  *(undefined4 *)(pbVar4 + 8) = uVar7;
  *(undefined4 *)(pbVar4 + 0xc) = uVar8;
  param_1[2] = 1;
  return;
}

