// VA 0x1409f9790, PDB extent 153 bytes
// country_core::systems::collision::world::impl$14::raycast::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$14::raycast::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 153 */

undefined8 pdb_1409f9790(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar2 = *param_1;
  puVar5 = (ulonglong *)pdb_140cd4bd0(param_1[1]);
  if (puVar5 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143033cb8);
  }
  uVar3 = *puVar5;
  uVar7 = uVar3 & 0xffffffff;
  if (((uVar7 < *(ulonglong *)(lVar2 + 0x10)) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) &&
     (*(uint *)(lVar2 + 0x20 + uVar7 * 0x28) == ((uint)(uVar3 >> 0x20) | 1))) {
    pbVar1 = (byte *)(lVar2 + uVar7 * 0x28);
    uVar6 = CONCAT71((uint7)(uint3)(uVar3 >> 0x28),1);
    uVar8 = (uint)*pbVar1;
    if (((uVar8 < 9) && ((0x105U >> (uVar8 & 0x1f) & 1) != 0)) && (*(int *)param_1[2] == 1)) {
      lVar2 = *(longlong *)(pbVar1 + 8);
      uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(longlong *)((int *)param_1[2] + 2) != lVar2);
    }
    return uVar6;
  }
  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033cd0);
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}

