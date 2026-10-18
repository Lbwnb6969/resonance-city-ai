// VA 0x140b475b0, PDB extent 267 bytes
// country_core::systems::ui_move_wall_group::WallGroupTransformCache::tree_areas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupTransformCache::tree_areas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 267 */

void pdb_140b475b0(ulonglong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  ulonglong arg0;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  uint extraout_XMM0_Da;
  uint uVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 < param_3) {
    param_3 = param_5;
  }
  if (param_3 == 0) {
    pbVar2 = (byte *)0x8;
  }
  else {
    arg0 = param_3 * 0x28;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(arg0,8);
    if (pbVar2 == (byte *)0x0) {
      pdb_142dc7e2a(8,arg0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = (uint *)(param_4 + 0x38);
    puVar7 = (uint *)(param_2 + 0xac);
    uVar3 = 0;
    uVar9 = extraout_XMM0_Da;
    do {
      uVar4 = *puVar5;
      bVar8 = uVar4 < 2;
      if (bVar8) {
        uStack_38 = *(undefined8 *)(puVar5 + 5);
        uStack_48 = *(undefined8 *)(puVar5 + 1);
        uStack_40 = *(undefined8 *)(puVar5 + 3);
        uVar9 = puVar5[8];
        uVar6 = 0x3fc00000;
      }
      else {
        uVar6 = puVar7[-1];
        uVar4 = *puVar7;
      }
      *(uint *)(pbVar2 + uVar3) = (uint)bVar8;
      *(uint *)(pbVar2 + uVar3 + 4) = uVar9;
      *(uint *)(pbVar2 + uVar3 + 8) = uVar6;
      *(uint *)(pbVar2 + uVar3 + 0xc) = uVar4;
      *(undefined8 *)(pbVar2 + uVar3 + 0x10) = uStack_48;
      *(undefined8 *)(pbVar2 + uVar3 + 0x10 + 8) = uStack_40;
      *(undefined8 *)(pbVar2 + uVar3 + 0x20) = uStack_38;
      puVar5 = puVar5 + 0x1c;
      puVar7 = puVar7 + 0x32;
      uVar3 = uVar3 + 0x28;
    } while (arg0 != uVar3);
  }
  *param_1 = param_3;
  param_1[1] = (ulonglong)pbVar2;
  param_1[2] = param_3;
  return;
}

