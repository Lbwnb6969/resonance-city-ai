// VA 0x142b3e240, PDB extent 339 bytes
// country_core::systems::collision::world::RaycastWorld::ray_intersects_filtered<system_color::autoclose_color_menu::autoclose_color_menu::closure$5::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::ray_intersects_filtered<system_color::autoclose_color_menu::autoclose_color_menu::closure$5::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 339 */

undefined8 pdb_142b3e240(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  longlong lStack_90;
  undefined1 *puStack_88;
  char acStack_80 [16];
  undefined1 auStack_70 [48];
  
  lStack_b8 = param_2[2];
  plStack_c8 = (longlong *)*param_2;
  plStack_c0 = (longlong *)param_2[1];
  pdb_141a5eef0(auStack_70,&plStack_c8);
  pdb_1409f9830(&plStack_c8,param_1);
  plVar1 = plStack_c0;
  if (plStack_c8 != plStack_c0) {
    lVar3 = lStack_b8;
    plVar4 = plStack_c8;
    do {
      bVar2 = pdb_1406d0830(lVar3);
      if ((param_4 >> (bVar2 & 0x1f) & 1) != 0) {
        puStack_88 = &stack0x00000028;
        plStack_c0 = (longlong *)&UNK_14366ce68;
        lStack_b8 = 0;
        uStack_a8 = 0;
        uStack_9c = 0;
        plStack_c8 = &lStack_90;
        lStack_90 = param_1;
        pdb_141a08930(acStack_80,plVar4 + 6,param_1 + 0x3d80,plVar4,auStack_70,param_3,1,&plStack_c8
                     );
        if (acStack_80[0] != '\0') {
          return 1;
        }
      }
      plVar4 = plVar4 + 0x72;
      lVar3 = lVar3 + 1;
    } while (plVar4 != plVar1);
  }
  return 0;
}

