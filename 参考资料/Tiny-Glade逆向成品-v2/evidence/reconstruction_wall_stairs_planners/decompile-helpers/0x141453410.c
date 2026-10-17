// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_wallspace_regions_into_planks<system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards::closure_env$0>
// VA 0x141453410, PDB extent 702 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_wallspace_regions_into_planks<system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards::closure_env$0>
   Extent: 702 bytes. No whole-program auto-analysis. */

void pdb_141453410(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong *plStack_e8;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  undefined1 *puStack_c0;
  longlong *plStack_b8;
  undefined4 *puStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_80 = 0;
  uStack_78 = 8;
  lStack_70 = 0;
  lStack_88 = *param_2;
  plVar2 = (longlong *)param_2[1];
  plStack_a8 = param_1;
  plStack_90 = plVar2;
  if (param_2[2] != 0) {
    plVar3 = plVar2 + param_2[2] * 5;
    do {
      if (*plVar2 == 2) break;
      lStack_128 = plVar2[1];
      lStack_120 = plVar2[2];
      uStack_118 = (undefined4)plVar2[3];
      uStack_114 = *(undefined4 *)((longlong)plVar2 + 0x1c);
      uStack_110 = (undefined4)plVar2[4];
      uStack_10c = *(undefined4 *)((longlong)plVar2 + 0x24);
      uStack_108 = (undefined4)plVar2[2];
      uStack_104 = *(undefined4 *)((longlong)plVar2 + 0x14);
      uStack_100 = (undefined4)plVar2[3];
      uStack_fc = *(undefined4 *)((longlong)plVar2 + 0x1c);
      uStack_62 = 1;
      lStack_130 = *plVar2;
      pdb_1414887e0(&plStack_d8,&uStack_108,1,param_3);
      uVar1 = uStack_c8;
      lStack_a0 = lStack_d0;
      plStack_98 = plStack_d8;
      if ((ulonglong)(lStack_80 - lStack_70) < uStack_c8) {
        uStack_61 = 0;
        pdb_142d7f1b0(&lStack_80,lStack_70,uStack_c8,8,0x28);
      }
      lStack_e0 = uVar1 * 0x10 + lStack_a0;
      puStack_c0 = &uStack_62;
      puStack_b0 = &uStack_110;
      plStack_d8 = &lStack_70;
      lStack_d0 = lStack_70;
      uStack_c8 = uStack_78;
      uStack_61 = 1;
      lStack_f8 = lStack_a0;
      lStack_f0 = lStack_a0;
      plStack_e8 = plStack_98;
      plStack_b8 = &lStack_130;
      pdb_1424ad060(&lStack_f8,&plStack_d8);
      plVar2 = plVar2 + 5;
    } while (plVar2 != plVar3);
  }
  if (lStack_88 != 0) {
    func_0x0001406abac0(plStack_90,lStack_88 * 0x28,8);
  }
  plStack_a8[2] = lStack_70;
  *plStack_a8 = lStack_80;
  plStack_a8[1] = uStack_78;
  return;
}

