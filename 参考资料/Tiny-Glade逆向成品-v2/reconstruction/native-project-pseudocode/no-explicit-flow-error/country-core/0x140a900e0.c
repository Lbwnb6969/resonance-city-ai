// VA 0x140a900e0, PDB extent 280 bytes
// country_core::render::AvailableGraphicsDevices::from_preference_order
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::AvailableGraphicsDevices::from_preference_order
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
   Extent: 280 */

void pdb_140a900e0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = param_2 >> 1;
  if (uVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x90);
    puVar6 = (undefined8 *)(param_2 * 0xa0 + param_1 + -0x10);
    do {
      uVar1 = puVar5[-0x12];
      uVar2 = puVar5[-0x11];
      uVar3 = puVar6[-0x11];
      puVar5[-0x12] = puVar6[-0x12];
      puVar5[-0x11] = uVar3;
      puVar6[-0x12] = uVar1;
      puVar6[-0x11] = uVar2;
      uVar1 = puVar5[-0x10];
      uVar2 = puVar5[-0xf];
      uVar3 = puVar6[-0xf];
      puVar5[-0x10] = puVar6[-0x10];
      puVar5[-0xf] = uVar3;
      puVar6[-0x10] = uVar1;
      puVar6[-0xf] = uVar2;
      uVar1 = puVar5[-0xe];
      uVar2 = puVar5[-0xd];
      uVar3 = puVar6[-0xd];
      puVar5[-0xe] = puVar6[-0xe];
      puVar5[-0xd] = uVar3;
      puVar6[-0xe] = uVar1;
      puVar6[-0xd] = uVar2;
      uVar1 = puVar5[-0xc];
      uVar2 = puVar5[-0xb];
      uVar3 = puVar6[-0xb];
      puVar5[-0xc] = puVar6[-0xc];
      puVar5[-0xb] = uVar3;
      puVar6[-0xc] = uVar1;
      puVar6[-0xb] = uVar2;
      uVar1 = puVar5[-10];
      uVar2 = puVar5[-9];
      uVar3 = puVar6[-9];
      puVar5[-10] = puVar6[-10];
      puVar5[-9] = uVar3;
      puVar6[-10] = uVar1;
      puVar6[-9] = uVar2;
      uVar1 = puVar5[-8];
      uVar2 = puVar5[-7];
      uVar3 = puVar6[-7];
      puVar5[-8] = puVar6[-8];
      puVar5[-7] = uVar3;
      puVar6[-8] = uVar1;
      puVar6[-7] = uVar2;
      uVar1 = puVar5[-6];
      uVar2 = puVar5[-5];
      uVar3 = puVar6[-5];
      puVar5[-6] = puVar6[-6];
      puVar5[-5] = uVar3;
      puVar6[-6] = uVar1;
      puVar6[-5] = uVar2;
      uVar1 = puVar5[-4];
      uVar2 = puVar5[-3];
      uVar3 = puVar6[-3];
      puVar5[-4] = puVar6[-4];
      puVar5[-3] = uVar3;
      puVar6[-4] = uVar1;
      puVar6[-3] = uVar2;
      uVar1 = puVar5[-2];
      uVar2 = puVar5[-1];
      uVar3 = puVar6[-1];
      puVar5[-2] = puVar6[-2];
      puVar5[-1] = uVar3;
      puVar6[-2] = uVar1;
      puVar6[-1] = uVar2;
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar3;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar5 = puVar5 + 0x14;
      puVar6 = puVar6 + -0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

