// VA 0x140a29690, PDB extent 381 bytes
// country_core::systems::despawn::despawn_glade_entities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/despawn.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::despawn::despawn_glade_entities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/despawn.rs
   Extent: 381 */

void pdb_140a29690(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar10 = *(uint **)(lVar2 + 0xf8);
  puVar1 = puVar10 + *(longlong *)(lVar2 + 0x100);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  uVar7 = param_2[2];
  if (*(char *)(lVar2 + 0x108) == '\0') {
    while (puVar10 != puVar1) {
      uVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar2 = *(longlong *)(lVar3 + 0x100);
      lVar8 = *(longlong *)(lVar2 + 0x58 + (ulonglong)uVar9 * 0xa0);
      if (lVar8 != 0) {
        lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 0xa0 + 0x50);
        uVar9 = 0;
        do {
          uStack_68 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 0x10);
          if ((int)uStack_68 == 0) {
            return;
          }
          uVar9 = uVar9 + 1;
          uStack_60 = uVar4;
          uStack_58 = uVar5;
          uStack_50 = uVar7;
          uStack_48 = uVar6;
          pdb_140f04aa0(&uStack_68,&UNK_143039340);
        } while (uVar9 != (uint)lVar8);
      }
    }
  }
  else {
    while (puVar10 != puVar1) {
      uVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar2 = *(longlong *)(lVar3 + 0x1a0);
      lVar8 = *(longlong *)(lVar2 + 0x10 + (ulonglong)uVar9 * 0x48);
      if (lVar8 != 0) {
        lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 0x48 + 8);
        uVar9 = 0;
        do {
          uStack_68 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8);
          if ((int)uStack_68 == 0) {
            return;
          }
          uVar9 = uVar9 + 1;
          uStack_60 = uVar4;
          uStack_58 = uVar5;
          uStack_50 = uVar7;
          uStack_48 = uVar6;
          pdb_140f04aa0(&uStack_68,&UNK_143039340);
        } while (uVar9 != (uint)lVar8);
      }
    }
  }
  return;
}

