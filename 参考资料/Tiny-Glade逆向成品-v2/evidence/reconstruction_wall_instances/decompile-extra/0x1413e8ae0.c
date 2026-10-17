// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::map::Map<core::iter::adapters::flatten::Flatten<core::option::IntoIter<array$<usize,2> > >,system_wall_constructor::construct_wooden_walls::construct_wall_boards::rectangle_gable_wallspace_ranges::closure$0::closure_env$0> >
// VA 0x1413e8ae0, PDB extent 514 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::map::Map<core::iter::adapters::flatten::Flatten<core::option::IntoIter<array$<usize,2>
   > 
   >,system_wall_constructor::construct_wooden_walls::construct_wall_boards::rectangle_gable_wallspace_ranges::closure$0::closure_env$0>
   >
   Extent: 514 bytes. No whole-program auto-analysis. */

ulonglong * pdb_1413e8ae0(ulonglong *param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *unaff_R14;
  undefined8 uVar5;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong *puStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong auStack_40 [2];
  
  auStack_40[1] = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar2 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8);
  if (*param_2 == '\0') {
    uVar2 = uVar4;
  }
  uVar1 = *(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30);
  if (param_2[0x28] == '\0') {
    uVar1 = uVar4;
  }
  uVar3 = *(longlong *)(param_2 + 0x50) * 2;
  if (*(longlong *)(param_2 + 0x50) == 2) {
    uVar3 = uVar4;
  }
  uVar1 = uVar1 + uVar2;
  if ((uVar1 < uVar2) || (uVar3 = uVar3 + uVar1, uVar3 < uVar1)) {
    pdb_142dc83d0(&UNK_1433057a0,0x23,&UNK_143305830);
LAB_1413e8c73:
    pdb_142d7f1b0(&uStack_50,0,uVar3,4,8);
  }
  else {
    uVar2 = uVar3 * 8;
    if (uVar2 < 0x7ffffffffffffffd && uVar3 >> 0x3d == 0) goto LAB_1413e8b83;
    uVar5 = 0;
    do {
      pdb_142dc7e2a(uVar5,uVar2);
LAB_1413e8b83:
      if (uVar2 == 0) {
        uStack_50 = 0;
        uStack_48 = 4;
        unaff_R14 = auStack_40;
        auStack_40[0] = 0;
        if (uVar3 != 0) goto LAB_1413e8c73;
        break;
      }
      pdb_14007ee60();
      uVar5 = 4;
      uStack_48 = func_0x0001406abab0(uVar2,4);
      uStack_50 = uVar3;
    } while (uStack_48 == 0);
    auStack_40[0] = 0;
    unaff_R14 = auStack_40;
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x60);
  uStack_70 = *(undefined8 *)(param_2 + 0x68);
  uStack_88 = *(undefined8 *)(param_2 + 0x50);
  uStack_80 = *(undefined8 *)(param_2 + 0x58);
  uStack_98 = *(undefined8 *)(param_2 + 0x40);
  uStack_90 = *(undefined8 *)(param_2 + 0x48);
  uStack_d8 = *(undefined4 *)param_2;
  uStack_d4 = *(undefined4 *)(param_2 + 4);
  uStack_d0 = *(undefined4 *)(param_2 + 8);
  uStack_cc = *(undefined4 *)(param_2 + 0xc);
  uStack_c8 = *(undefined4 *)(param_2 + 0x10);
  uStack_c4 = *(undefined4 *)(param_2 + 0x14);
  uStack_c0 = *(undefined4 *)(param_2 + 0x18);
  uStack_bc = *(undefined4 *)(param_2 + 0x1c);
  uStack_b8 = *(undefined4 *)(param_2 + 0x20);
  uStack_b4 = *(undefined4 *)(param_2 + 0x24);
  uStack_b0 = *(undefined4 *)(param_2 + 0x28);
  uStack_ac = *(undefined4 *)(param_2 + 0x2c);
  uStack_a8 = *(undefined4 *)(param_2 + 0x30);
  uStack_a4 = *(undefined4 *)(param_2 + 0x34);
  uStack_a0 = *(undefined4 *)(param_2 + 0x38);
  uStack_9c = *(undefined4 *)(param_2 + 0x3c);
  puStack_68 = unaff_R14;
  uStack_60 = auStack_40[0];
  uStack_58 = uStack_48;
  pdb_141420f40(&uStack_d8,&puStack_68);
  param_1[2] = auStack_40[0];
  *param_1 = uStack_50;
  param_1[1] = uStack_48;
  return param_1;
}

