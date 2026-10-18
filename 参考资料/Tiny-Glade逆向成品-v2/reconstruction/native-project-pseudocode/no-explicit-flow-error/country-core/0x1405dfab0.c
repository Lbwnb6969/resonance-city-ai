// VA 0x1405dfab0, PDB extent 497 bytes
// country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<tuple$<utils::IsoTransform,ref$<country_core::systems::collision::world::RaycastMeshData> >,bool (*)(country_core::systems::collision::world::SubworldColliderHandle,ref$<enum2$<country_core::systems::collision::world::RaycastGeoSource> >),system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$35<true> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<tuple$<utils::IsoTransform,ref$<country_core::systems::collision::world::RaycastMeshData>
   >,bool 
   (*)(country_core::systems::collision::world::SubworldColliderHandle,ref$<enum2$<country_core::systems::collision::world::RaycastGeoSource>
   >),system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$35<true>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 497 */

void pdb_1405dfab0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  undefined8 *puStack_e8;
  byte *pbStack_e0;
  char *pcStack_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte bStack_4a;
  char acStack_49 [9];
  
  acStack_49[1] = -2;
  acStack_49[2] = -1;
  acStack_49[3] = -1;
  acStack_49[4] = -1;
  acStack_49[5] = -1;
  acStack_49[6] = -1;
  acStack_49[7] = -1;
  acStack_49[8] = -1;
  uStack_78 = param_5;
  lStack_70 = param_4;
  pdb_140c68ae0(&uStack_b0,param_2,param_1 + 0x20,0x11);
  uStack_108 = (undefined4)uStack_a0;
  uStack_104 = uStack_a0._4_4_;
  uStack_100 = uStack_98;
  uStack_118 = (undefined4)uStack_b0;
  uStack_114 = uStack_b0._4_4_;
  uStack_110 = (undefined4)uStack_a8;
  uStack_10c = uStack_a8._4_4_;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  uStack_60 = uStack_88;
  uStack_5c = uStack_84;
  lVar3 = param_1;
  pdb_1409f9830(&uStack_b0);
  plVar1 = uStack_a8;
  lVar6 = uStack_a0;
  for (plVar5 = uStack_b0; plVar5 != plVar1; plVar5 = plVar5 + 0x72) {
    bStack_4a = pdb_1406d0830(lVar6);
    lVar4 = lVar3;
    if ((param_3 >> (bStack_4a & 0x1f) & 1) != 0) {
      if (lStack_70 == 0) {
        uStack_b0 = (longlong *)0x0;
      }
      else {
        plStack_c0 = &lStack_70;
        uStack_a8 = (longlong *)&UNK_142f724e8;
        uStack_b0 = &lStack_d0;
        lStack_d0 = param_1;
        plStack_c8 = plVar5;
        pbStack_b8 = &bStack_4a;
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      uStack_84 = 0;
      acStack_49[0] = '\0';
      uVar2 = pdb_1409f9850(&uStack_68);
      puStack_e8 = &uStack_78;
      pcStack_d8 = acStack_49;
      lVar4 = param_1 + 0x3d80;
      lStack_f8 = param_1;
      plStack_f0 = plVar5;
      pbStack_e0 = &bStack_4a;
      pdb_140220790(plVar5 + 6,lVar4,plVar5,&uStack_118,uVar2,lVar3,&uStack_b0,&lStack_f8);
      if (acStack_49[0] == '\x01') break;
    }
    lVar6 = lVar6 + 1;
    lVar3 = lVar4;
  }
  plVar1 = (longlong *)CONCAT44(uStack_64,uStack_68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pdb_1406efe00(&uStack_68);
  }
  return;
}

