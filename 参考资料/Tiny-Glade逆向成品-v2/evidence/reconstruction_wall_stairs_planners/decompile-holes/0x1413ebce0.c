// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<utils::geometry::aabb::Aabb2,core::iter::adapters::filter_map::FilterMap<core::iter::adapters::map::Map<core::slice::iter::Iter<tuple$<utils::geometry::aabb::Aabb2,country_core::resources::walls::wall_holes::HoleType,country_core::resources::walls::wall_holes::HoleOrigin> >,country_core::resources::walls::wall_holes::impl$1::holes::closure_env$0>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_wall_cutouts::closure$0::closure_env$0> >
// VA 0x1413ebce0, PDB extent 399 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<utils::geometry::aabb::Aabb2,core::iter::adapters::filter_map::FilterMap<core::iter::adapters::map::Map<core::slice::iter::Iter<tuple$<utils::geometry::aabb::Aabb2,country_core::resources::walls::wall_holes::HoleType,country_core::resources::walls::wall_holes::HoleOrigin>
   >,country_core::resources::walls::wall_holes::impl$1::holes::closure_env$0>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_wall_cutouts::closure$0::closure_env$0>
   >
   Extent: 399 bytes. No whole-program auto-analysis. */

longlong * pdb_1413ebce0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lStack_50;
  undefined8 *puStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  while( true ) {
    if (param_2 == param_3) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return param_1;
    }
    if (*(char *)(param_2 + 2) != '\0') break;
    param_2 = (undefined8 *)((longlong)param_2 + 0x14);
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  pdb_14007ee60();
  puVar4 = (undefined8 *)func_0x0001406abab0(0x40,4);
  if (puVar4 != (undefined8 *)0x0) {
    param_2 = (undefined8 *)((longlong)param_2 + 0x14);
    *puVar4 = uVar2;
    puVar4[1] = uVar3;
    lStack_50 = 4;
    lStack_40 = 1;
    puStack_48 = puVar4;
    if (param_2 != param_3) {
      lVar6 = 1;
      do {
        if (*(char *)(param_2 + 2) != '\0') {
          uVar2 = *param_2;
          uVar3 = param_2[1];
          if (lVar6 == lStack_50) {
            pdb_142d7f1b0(&lStack_50,lVar6,1,4,0x10);
            puVar4 = puStack_48;
          }
          puVar4[lVar6 * 2] = uVar2;
          (puVar4 + lVar6 * 2)[1] = uVar3;
          lVar6 = lVar6 + 1;
          lStack_40 = lVar6;
        }
        param_2 = (undefined8 *)((longlong)param_2 + 0x14);
      } while (param_2 != param_3);
    }
    param_1[2] = lStack_40;
    *param_1 = lStack_50;
    param_1[1] = (longlong)puStack_48;
    return param_1;
  }
  pdb_142dc7e2a(4,0x40);
  pcVar1 = (code *)swi(3);
  plVar5 = (longlong *)(*pcVar1)();
  return plVar5;
}

