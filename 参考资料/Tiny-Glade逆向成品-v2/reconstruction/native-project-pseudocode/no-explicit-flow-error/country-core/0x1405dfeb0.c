// VA 0x1405dfeb0, PDB extent 219 bytes
// country_core::systems::collision::world::impl$14::iter_shape_overlaps::closure$0<tuple$<utils::IsoTransform,ref$<country_core::systems::collision::world::RaycastMeshData> >,bool (*)(country_core::systems::collision::world::SubworldColliderHandle,ref$<enum2$<country_core::systems::collision::world::RaycastGeoSource> >),system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$35<false> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$14::iter_shape_overlaps::closure$0<tuple$<utils::IsoTransform,ref$<country_core::systems::collision::world::RaycastMeshData>
   >,bool 
   (*)(country_core::systems::collision::world::SubworldColliderHandle,ref$<enum2$<country_core::systems::collision::world::RaycastGeoSource>
   >),system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$35<false>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 219 */

void pdb_1405dfeb0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 uStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  lVar1 = *param_1;
  puVar8 = (uint *)pdb_140cd4bd0(param_1[1]);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f72278);
  }
  uVar9 = (ulonglong)*puVar8;
  uVar6 = pdb_1409012c0(puVar8[1] | 1);
  lVar2 = *(longlong *)(lVar1 + 8);
  uVar3 = *(ulonglong *)(lVar1 + 0x10);
  uStack_50 = CONCAT44((int)uVar9,uVar6);
  iVar7 = pdb_1409fb190(&uStack_50);
  uVar9 = uVar9 & 0xffffffff;
  if (((uVar9 < uVar3) && (lVar2 != 0)) && (*(int *)(lVar2 + 0x20 + uVar9 * 0x28) == iVar7)) {
    lVar2 = lVar2 + uVar9 * 0x28;
    puVar4 = (undefined8 *)param_1[2];
    pdb_1409f14f0(&uStack_38,*(undefined1 *)param_1[3],param_2,param_3);
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    lStack_40 = lVar2;
    (*(code *)*puVar4)(&uStack_50,lVar2);
    return;
  }
  pdb_142dc664f(&UNK_142e33b00,0x18,&UNK_142f72290);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

