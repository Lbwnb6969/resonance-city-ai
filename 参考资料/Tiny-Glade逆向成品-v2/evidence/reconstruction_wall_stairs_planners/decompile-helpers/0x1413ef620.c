// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,core::iter::adapters::flatten::FlatMap<core::iter::adapters::enumerate::Enumerate<core::array::iter::IntoIter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,4> >,alloc::vec::Vec<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::alloc::Global>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions::closure_env$0> >
// VA 0x1413ef620, PDB extent 1159 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,core::iter::adapters::flatten::FlatMap<core::iter::adapters::enumerate::Enumerate<core::array::iter::IntoIter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,4>
   >,alloc::vec::Vec<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::alloc::Global>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions::closure_env$0>
   >
   Extent: 1159 bytes. No whole-program auto-analysis. */

longlong * pdb_1413ef620(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong unaff_RDI;
  ulonglong auStack_178 [5];
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  int *piStack_68;
  longlong lStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_49 = 1;
  plStack_58 = param_2;
  pdb_1413e5580();
  plVar6 = plStack_58;
  if (iStack_c8 == 2) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    if ((plStack_58[0xc] != 0) && (plStack_58[0xe] != 0)) {
      func_0x0001406abac0(plStack_58[0xc],plStack_58[0xe] * 0x28,8);
    }
    if (plVar6[0x10] == 0) {
      return param_1;
    }
    if (plVar6[0x12] == 0) {
      return param_1;
    }
    func_0x0001406abac0(plVar6[0x10],plVar6[0x12] * 0x28,8);
    return param_1;
  }
  if (plStack_58[0xc] == 0) {
    uVar7 = 0;
    if (plStack_58[0x10] == 0) goto LAB_1413ef741;
LAB_1413ef714:
    uVar7 = ((ulonglong)(plStack_58[0x13] - plStack_58[0x11]) >> 3) * -0x3333333333333333 + uVar7;
    if (*plStack_58 == 0) goto LAB_1413ef756;
LAB_1413ef74c:
    if (plStack_58[6] == plStack_58[5]) goto LAB_1413ef756;
    puVar8 = auStack_178;
    uVar10 = 0;
  }
  else {
    uVar7 = ((ulonglong)(plStack_58[0xf] - plStack_58[0xd]) >> 3) * -0x3333333333333333;
    if (plStack_58[0x10] != 0) goto LAB_1413ef714;
LAB_1413ef741:
    if (*plStack_58 != 0) goto LAB_1413ef74c;
LAB_1413ef756:
    puVar8 = (ulonglong *)&iStack_a0;
    uVar10 = uVar7;
  }
  *puVar8 = uVar10;
  uVar10 = 3;
  if (3 < uVar7) {
    uVar10 = uVar7;
  }
  if (0x333333333333332 < uVar7) {
    uVar11 = 0;
LAB_1413ef789:
    uStack_49 = 1;
    pdb_142dc7e2a(uVar11,unaff_RDI);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  unaff_RDI = (uVar10 * 8 + 8) * 5;
  plStack_78 = param_1;
  if (unaff_RDI == 0) {
    piVar4 = (int *)0x8;
    lStack_70 = 0;
  }
  else {
    pdb_14007ee60();
    uVar11 = 8;
    piVar4 = (int *)func_0x0001406abab0(unaff_RDI,8);
    if (piVar4 == (int *)0x0) goto LAB_1413ef789;
    lStack_70 = uVar10 + 1;
  }
  *(undefined8 *)(piVar4 + 8) = uStack_a8;
  piVar4[4] = iStack_b8;
  piVar4[5] = iStack_b4;
  piVar4[6] = iStack_b0;
  piVar4[7] = iStack_ac;
  *piVar4 = iStack_c8;
  piVar4[1] = iStack_c4;
  piVar4[2] = iStack_c0;
  piVar4[3] = iStack_bc;
  lStack_60 = 1;
  piStack_68 = piVar4;
  func_0x000142e32760(auStack_178,plVar6);
  lVar12 = 1;
  lVar13 = 0x28;
  do {
    pdb_1413e5580(&iStack_a0,auStack_178);
    if (iStack_a0 == 2) {
      if ((lStack_118 != 0) && (lStack_108 != 0)) {
        func_0x0001406abac0(lStack_118,lStack_108 * 0x28,8);
      }
      plVar6 = plStack_78;
      if ((lStack_f8 != 0) && (lStack_e8 != 0)) {
        func_0x0001406abac0(lStack_f8,lStack_e8 * 0x28,8);
      }
      plVar6[2] = lStack_60;
      *plVar6 = lStack_70;
      plVar6[1] = (longlong)piStack_68;
      return plVar6;
    }
    if (lVar12 == lStack_70) {
      if (lStack_118 == 0) {
        lVar5 = 0;
        if (lStack_f8 == 0) goto LAB_1413ef8e8;
LAB_1413ef8c3:
        lVar5 = ((ulonglong)(lStack_e0 - lStack_f0) >> 3) * -0x3333333333333333 + lVar5;
        lVar9 = lVar5;
        if (auStack_178[0] == 0) goto LAB_1413ef8ff;
LAB_1413ef8f5:
        lVar9 = lVar5;
        if (lStack_148 == lStack_150) goto LAB_1413ef8ff;
        plVar6 = &lStack_d8;
        lVar9 = 0;
      }
      else {
        lVar5 = ((ulonglong)(lStack_100 - lStack_110) >> 3) * -0x3333333333333333;
        if (lStack_f8 != 0) goto LAB_1413ef8c3;
LAB_1413ef8e8:
        lVar9 = lVar5;
        if (auStack_178[0] != 0) goto LAB_1413ef8f5;
LAB_1413ef8ff:
        plVar6 = &lStack_d0;
        lVar5 = lVar9;
      }
      *plVar6 = lVar9;
      pdb_142d7f1b0(&lStack_70,lVar12,lVar5 + 1,8,0x28);
      piVar4 = piStack_68;
    }
    *(undefined8 *)((longlong)piVar4 + lVar13 + 0x20) = uStack_80;
    puVar2 = (undefined8 *)((longlong)piVar4 + lVar13 + 0x10);
    *puVar2 = uStack_90;
    puVar2[1] = uStack_88;
    piVar1 = (int *)((longlong)piVar4 + lVar13);
    *piVar1 = iStack_a0;
    piVar1[1] = iStack_9c;
    piVar1[2] = iStack_98;
    piVar1[3] = iStack_94;
    lVar12 = lVar12 + 1;
    lVar13 = lVar13 + 0x28;
    lStack_60 = lVar12;
  } while( true );
}

