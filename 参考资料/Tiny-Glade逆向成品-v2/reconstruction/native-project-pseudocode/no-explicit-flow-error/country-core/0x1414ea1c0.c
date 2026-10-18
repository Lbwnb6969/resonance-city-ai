// VA 0x1414ea1c0, PDB extent 497 bytes
// country_core::systems::collision::world::RaycastWorld::decorator_overlaps_with_others<tuple$<country_core::systems::collision::world::OffsetColliderTransform,alloc::sync::Arc<dyn$<parry3d::shape::shape::Shape>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::decorator_overlaps_with_others<tuple$<country_core::systems::collision::world::OffsetColliderTransform,alloc::sync::Arc<dyn$<parry3d::shape::shape::Shape>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 497 */

longlong pdb_1414ea1c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 *puStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_29 = param_5;
  uStack_60 = param_4;
  uStack_30 = param_3;
  pdb_1409f9a80(&uStack_98,param_2,param_1 + 0x20,0x11);
  uStack_d8 = (undefined4)uStack_88;
  uStack_d4 = uStack_88._4_4_;
  uStack_d0 = uStack_80;
  uStack_e8 = (undefined4)uStack_98;
  uStack_e4 = uStack_98._4_4_;
  uStack_e0 = (undefined4)uStack_90;
  uStack_dc = uStack_90._4_4_;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  uVar11 = 0x11;
  lVar7 = pdb_1409f9a50(param_1 + 0x20,0x11,2,&UNK_143316718);
  puStack_b0 = &uStack_29;
  puStack_a8 = &uStack_30;
  puStack_a0 = &uStack_60;
  lStack_c0 = param_1;
  lStack_b8 = lVar7;
  uVar8 = pdb_1409f9850(&uStack_48);
  uStack_98 = &lStack_c0;
  uStack_90 = &UNK_143316858;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_6c = 0;
  pdb_141a08810(&iStack_54,lVar7 + 0x30,param_1 + 0x3d80,lVar7,&uStack_e8,uVar8,uVar11,&uStack_98);
  if (iStack_54 == 1) {
    puVar9 = (uint *)pdb_140cd4bd0(lVar7,uStack_50,uStack_4c);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143316730);
    }
    uVar10 = (ulonglong)*puVar9;
    uVar5 = pdb_1409012c0(puVar9[1] | 1);
    lVar7 = *(longlong *)(param_1 + 8);
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    uStack_98 = (longlong *)CONCAT44((int)uVar10,uVar5);
    iVar6 = pdb_1409fb190(&uStack_98);
    uVar10 = uVar10 & 0xffffffff;
    if (((uVar2 <= uVar10) || (lVar7 == 0)) || (*(int *)(lVar7 + 0x20 + uVar10 * 0x28) != iVar6)) {
      pdb_142dc664f(&UNK_143512bd0,0x18,&UNK_143316748);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = lVar7 + uVar10 * 0x28;
    plVar4 = (longlong *)CONCAT44(uStack_44,uStack_48);
    LOCK();
    *plVar4 = *plVar4 + -1;
    lVar1 = *plVar4;
    UNLOCK();
  }
  else {
    lVar7 = 0;
    plVar4 = (longlong *)CONCAT44(uStack_44,uStack_48);
    LOCK();
    *plVar4 = *plVar4 + -1;
    lVar1 = *plVar4;
    UNLOCK();
  }
  if (lVar1 == 0) {
    pdb_1406efe00(&uStack_48);
  }
  return lVar7;
}

