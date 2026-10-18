// VA 0x1414ea790, PDB extent 252 bytes
// country_core::systems::collision::world::impl$14::decorator_overlaps_with_others::closure$0<tuple$<country_core::systems::collision::world::OffsetColliderTransform,alloc::sync::Arc<dyn$<parry3d::shape::shape::Shape>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$14::decorator_overlaps_with_others::closure$0<tuple$<country_core::systems::collision::world::OffsetColliderTransform,alloc::sync::Arc<dyn$<parry3d::shape::shape::Shape>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 252 */

undefined8 pdb_1414ea790(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = *param_1;
  puVar7 = (uint *)pdb_140cd4bd0(param_1[1]);
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143316760);
  }
  uVar9 = (ulonglong)*puVar7;
  uStack_20 = pdb_1409012c0(puVar7[1] | 1);
  lVar3 = *(longlong *)(lVar2 + 8);
  uVar4 = *(ulonglong *)(lVar2 + 0x10);
  uStack_1c = (undefined4)uVar9;
  iVar6 = pdb_1409fb190(&uStack_20);
  uVar9 = uVar9 & 0xffffffff;
  if (((uVar4 <= uVar9) || (lVar3 == 0)) || (*(int *)(lVar3 + 0x20 + uVar9 * 0x28) != iVar6)) {
    pdb_142dc664f(&UNK_143512bd0,0x18,&UNK_143316778);
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  pcVar1 = (char *)(lVar3 + uVar9 * 0x28);
  if (*pcVar1 != '\x03') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143316790,0x28,&UNK_1433167b8);
  }
  if (*(char *)param_1[2] == '\0') {
    if (*(uint *)param_1[3] != *(uint *)(pcVar1 + 4) && *(longlong *)(pcVar1 + 8) == 0)
    goto LAB_1414ea83d;
  }
  else if (*(uint *)(pcVar1 + 4) < *(uint *)param_1[3] && *(longlong *)(pcVar1 + 8) == 0) {
LAB_1414ea83d:
    return CONCAT71((int7)((ulonglong)*(longlong *)(pcVar1 + 0x10) >> 8),
                    *(longlong *)param_1[4] == *(longlong *)(pcVar1 + 0x10));
  }
  return 0;
}

