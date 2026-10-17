// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_wallspace_regions_into_planks<system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards::closure_env$0>
// VA 0x1414536d0, PDB extent 760 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_wallspace_regions_into_planks<system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_vertical_wall_boards::closure_env$0>
   Extent: 760 bytes. No whole-program auto-analysis. */

void pdb_1414536d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 *puStack_f8;
  longlong lStack_f0;
  longlong *plStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  undefined1 *puStack_d0;
  longlong *plStack_c8;
  undefined4 *puStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  undefined8 *puStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_90 = 0;
  uStack_88 = 8;
  lStack_80 = 0;
  lStack_98 = *param_2;
  plVar5 = (longlong *)param_2[1];
  plStack_b8 = param_1;
  plStack_a0 = plVar5;
  if (param_2[2] != 0) {
    plVar1 = plVar5 + param_2[2] * 5;
    uVar2 = *param_4;
    do {
      if (*plVar5 == 2) break;
      lStack_138 = plVar5[1];
      lStack_130 = plVar5[2];
      uStack_128 = (undefined4)plVar5[3];
      uStack_124 = *(undefined4 *)((longlong)plVar5 + 0x1c);
      uStack_120 = (undefined4)plVar5[4];
      uStack_11c = *(undefined4 *)((longlong)plVar5 + 0x24);
      lStack_118 = plVar5[2];
      lStack_110 = plVar5[3];
      plStack_e8 = (longlong *)plVar5[2];
      lStack_e0 = plVar5[3];
      lStack_140 = *plVar5;
      uVar4 = pdb_1414871b0(param_3,&plStack_e8,uVar2);
      uStack_72 = (undefined1)uVar4;
      pdb_1414887e0(&plStack_e8,&lStack_118,uVar4,param_5);
      uVar3 = uStack_d8;
      lStack_b0 = lStack_e0;
      puStack_a8 = plStack_e8;
      if ((ulonglong)(lStack_90 - lStack_80) < uStack_d8) {
        uStack_71 = 0;
        pdb_142d7f1b0(&lStack_90,lStack_80,uStack_d8,8,0x28);
      }
      lStack_f0 = uVar3 * 0x10 + lStack_b0;
      puStack_d0 = &uStack_72;
      plStack_c8 = &lStack_140;
      puStack_c0 = &uStack_120;
      plStack_e8 = &lStack_80;
      lStack_e0 = lStack_80;
      uStack_d8 = uStack_88;
      uStack_71 = 1;
      lStack_108 = lStack_b0;
      lStack_100 = lStack_b0;
      puStack_f8 = puStack_a8;
      pdb_1424ad060(&lStack_108,&plStack_e8);
      plVar5 = plVar5 + 5;
    } while (plVar5 != plVar1);
  }
  if (lStack_98 != 0) {
    func_0x0001406abac0(plStack_a0,lStack_98 * 0x28,8);
  }
  plStack_b8[2] = lStack_80;
  *plStack_b8 = lStack_90;
  plStack_b8[1] = uStack_88;
  return;
}

