// VA 0x142b46080, PDB extent 314 bytes
// country_core::systems::collision::world::RaycastWorld::shape_overlaps_with<utils::geometry::rectangle::Rectangle3d>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::shape_overlaps_with<utils::geometry::rectangle::Rectangle3d>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 314 */

undefined8 pdb_142b46080(longlong param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  char acStack_74 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  pdb_140bb2210(&uStack_b0,param_2,param_1 + 0x20,0x11);
  uStack_58 = (undefined4)uStack_a0;
  uStack_54 = uStack_a0._4_4_;
  uStack_50 = uStack_98;
  uStack_68 = (undefined4)uStack_b0;
  uStack_64 = uStack_b0._4_4_;
  uStack_60 = uStack_a8;
  uStack_5c = uStack_a4;
  uStack_b8 = uStack_8c;
  pdb_1409f9830(&uStack_b0,param_1);
  if (uStack_b0 != CONCAT44(uStack_a4,uStack_a8)) {
    lVar2 = uStack_b0;
    lVar3 = uStack_a0;
    do {
      bVar1 = pdb_1406d0830(lVar3);
      if ((param_3 >> (bVar1 & 0x1f) & 1) != 0) {
        uStack_a0 = 0;
        uStack_90 = 0;
        uStack_84 = 0;
        uStack_b0 = 0;
        pdb_141a08810(acStack_74,lVar2 + 0x30,param_1 + 0x3d80,lVar2,&uStack_68,auStack_c0,
                      &UNK_1436ba100,&uStack_b0);
        if (acStack_74[0] != '\0') {
          return 1;
        }
      }
      lVar2 = lVar2 + 0x390;
      lVar3 = lVar3 + 1;
    } while (lVar2 != CONCAT44(uStack_a4,uStack_a8));
  }
  return 0;
}

