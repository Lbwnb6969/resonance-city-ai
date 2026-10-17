// Matched PDB: core::iter::adapters::flatten::impl$3::next<core::iter::adapters::enumerate::Enumerate<core::array::iter::IntoIter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,4> >,alloc::vec::Vec<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::alloc::Global>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions::closure_env$0>
// VA 0x1413e5580, PDB extent 1543 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   core::iter::adapters::flatten::impl$3::next<core::iter::adapters::enumerate::Enumerate<core::array::iter::IntoIter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,4>
   >,alloc::vec::Vec<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceRegion,alloc::alloc::Global>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions::closure_env$0>
   Extent: 1543 bytes. No whole-program auto-analysis. */

void pdb_1413e5580(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (param_2[0xc] != 0) {
    plVar10 = (longlong *)param_2[0xd];
    if (plVar10 != (longlong *)param_2[0xf]) {
      param_2[0xd] = (longlong)(plVar10 + 5);
      lVar9 = *plVar10;
      if (lVar9 != 2) {
LAB_1413e5aad:
        *param_1 = lVar9;
        uStack_d8 = plVar10[1];
        plStack_d0 = (longlong *)plVar10[2];
        uStack_c8._0_4_ = (undefined4)plVar10[3];
        uStack_c8._4_4_ = *(undefined4 *)((longlong)plVar10 + 0x1c);
        uStack_c0._0_4_ = (undefined4)plVar10[4];
        uStack_c0._4_4_ = *(undefined4 *)((longlong)plVar10 + 0x24);
        goto LAB_1413e5ab8;
      }
    }
    if (param_2[0xe] != 0) {
      func_0x0001406abac0(param_2[0xc],param_2[0xe] * 0x28,8);
    }
    param_2[0xc] = 0;
  }
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    lVar9 = param_2[5];
    lVar3 = param_2[6];
    if (lVar3 != lVar9) {
      param_2[5] = lVar9 + 1;
      lVar8 = param_2[lVar9 + 7];
      uVar1 = *(undefined4 *)((longlong)param_2 + lVar9 * 8 + 0x3c);
      lVar12 = param_2[0xb];
      param_2[0xb] = lVar12 + 1;
      bVar14 = true;
      if (*plVar2 != lVar12) {
        bVar14 = plVar2[1] == lVar12;
      }
      pcVar4 = (char *)param_2[1];
      pfVar5 = (float *)param_2[2];
      if ((bVar14) && (*pcVar4 != '\0')) {
        fVar16 = *pfVar5;
        lVar11 = param_2[3];
        fVar15 = (float)pdb_140930390(lVar11);
        if (fVar16 <= fVar15) goto LAB_1413e56af;
        fVar16 = (float)pdb_140930390(lVar11);
        bVar14 = true;
      }
      else {
LAB_1413e56af:
        fVar16 = *pfVar5;
        bVar14 = false;
      }
      uStack_d8 = 0;
      plStack_d0 = (longlong *)0x8;
      uStack_c8 = 0;
      pfVar6 = (float *)param_2[4];
      fVar15 = *pfVar6;
      bVar7 = _DAT_142e37ad4 + fVar15 < fVar16;
      if (bVar7) {
        pdb_142d7ede0(&uStack_d8);
        *plStack_d0 = 1;
        plStack_d0[1] = lVar12;
        *(int *)(plStack_d0 + 2) = (int)lVar8;
        *(float *)((longlong)plStack_d0 + 0x14) = fVar15;
        *(undefined4 *)(plStack_d0 + 3) = uVar1;
        *(float *)((longlong)plStack_d0 + 0x1c) = fVar16;
        *(undefined1 *)(plStack_d0 + 4) = 0;
      }
      uStack_c8 = (ulonglong)bVar7;
      uVar13 = (ulonglong)bVar7;
      fVar16 = _DAT_142e37ad4;
      if (bVar14) {
        fVar17 = (float)pdb_140930390(param_2[3]);
        uVar13 = uStack_c8;
        fVar16 = *pfVar6;
        fVar15 = *pfVar5;
        if (uStack_c8 == uStack_d8) {
          pdb_142d7ede0(&uStack_d8);
        }
        fVar18 = fVar16;
        if (fVar16 <= fVar17) {
          fVar18 = fVar17;
        }
        plStack_d0[uVar13 * 5] = 1;
        plStack_d0[uVar13 * 5 + 1] = lVar12;
        *(int *)(plStack_d0 + uVar13 * 5 + 2) = (int)lVar8;
        *(uint *)((longlong)plStack_d0 + uVar13 * 0x28 + 0x14) =
             ~-(uint)NAN(fVar17) & (uint)fVar18 | -(uint)NAN(fVar17) & (uint)fVar16;
        *(undefined4 *)(plStack_d0 + uVar13 * 5 + 3) = uVar1;
        *(float *)((longlong)plStack_d0 + uVar13 * 0x28 + 0x1c) = fVar15;
        *(undefined1 *)(plStack_d0 + uVar13 * 5 + 4) = 1;
        uVar13 = uVar13 + 1;
        fVar16 = _DAT_142e37ad4;
      }
      _DAT_142e37ad4 = fVar16;
      if (!SBORROW8(0,uStack_d8)) {
        plVar10 = plStack_d0 + uVar13 * 5;
        lVar8 = param_2[3];
        lVar11 = lVar9 + 1;
        lVar12 = lVar12 + 1;
        while( true ) {
          param_2[0xc] = (longlong)plStack_d0;
          param_2[0xd] = (longlong)plStack_d0;
          param_2[0xe] = uStack_d8;
          param_2[0xf] = (longlong)plVar10;
          if (plStack_d0 != plVar10) {
            param_2[0xd] = (longlong)(plStack_d0 + 5);
            lVar9 = *plStack_d0;
            plVar10 = plStack_d0;
            if (lVar9 != 2) goto LAB_1413e5aad;
          }
          if (uStack_d8 != 0) {
            func_0x0001406abac0(plStack_d0,uStack_d8 * 0x28,8);
          }
          param_2[0xc] = 0;
          if (lVar3 == lVar11) break;
          param_2[5] = lVar11 + 1;
          lVar9 = param_2[lVar11 + 7];
          uVar1 = *(undefined4 *)((longlong)param_2 + lVar11 * 8 + 0x3c);
          param_2[0xb] = lVar12 + 1;
          bVar14 = true;
          if (*plVar2 != lVar12) {
            bVar14 = plVar2[1] == lVar12;
          }
          fVar15 = *pfVar5;
          bVar7 = false;
          if ((bVar14) && (*pcVar4 != '\0')) {
            fVar17 = (float)pdb_140930390(lVar8);
            if (fVar15 <= fVar17) {
              fVar15 = *pfVar5;
              bVar7 = false;
            }
            else {
              fVar15 = (float)pdb_140930390(lVar8);
              bVar7 = true;
            }
          }
          uStack_d8 = 0;
          plStack_d0 = (longlong *)0x8;
          uStack_c8 = 0;
          fVar17 = *pfVar6;
          bVar14 = fVar17 + fVar16 < fVar15;
          if (bVar14) {
            pdb_142d7ede0(&uStack_d8);
            *plStack_d0 = 1;
            plStack_d0[1] = lVar12;
            *(int *)(plStack_d0 + 2) = (int)lVar9;
            *(float *)((longlong)plStack_d0 + 0x14) = fVar17;
            *(undefined4 *)(plStack_d0 + 3) = uVar1;
            *(float *)((longlong)plStack_d0 + 0x1c) = fVar15;
            *(undefined1 *)(plStack_d0 + 4) = 0;
          }
          uStack_c8 = (ulonglong)bVar14;
          uVar13 = (ulonglong)bVar14;
          if (bVar7) {
            fVar18 = (float)pdb_140930390(lVar8);
            uVar13 = uStack_c8;
            fVar15 = *pfVar6;
            fVar17 = *pfVar5;
            if (uStack_c8 == uStack_d8) {
              pdb_142d7ede0(&uStack_d8);
            }
            fVar19 = fVar15;
            if (fVar15 <= fVar18) {
              fVar19 = fVar18;
            }
            plStack_d0[uVar13 * 5] = 1;
            plStack_d0[uVar13 * 5 + 1] = lVar12;
            *(int *)(plStack_d0 + uVar13 * 5 + 2) = (int)lVar9;
            *(uint *)((longlong)plStack_d0 + uVar13 * 0x28 + 0x14) =
                 ~-(uint)NAN(fVar18) & (uint)fVar19 | -(uint)NAN(fVar18) & (uint)fVar15;
            *(undefined4 *)(plStack_d0 + uVar13 * 5 + 3) = uVar1;
            *(float *)((longlong)plStack_d0 + uVar13 * 0x28 + 0x1c) = fVar17;
            *(undefined1 *)(plStack_d0 + uVar13 * 5 + 4) = 1;
            uVar13 = uVar13 + 1;
          }
          if (SBORROW8(0,uStack_d8)) break;
          plVar10 = plStack_d0 + uVar13 * 5;
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 1;
        }
      }
    }
  }
  if (param_2[0x10] == 0) {
    *param_1 = 2;
    return;
  }
  plVar10 = (longlong *)param_2[0x11];
  if (plVar10 == (longlong *)param_2[0x13]) {
LAB_1413e582b:
    if (param_2[0x12] != 0) {
      func_0x0001406abac0(param_2[0x10],param_2[0x12] * 0x28,8);
    }
    param_2[0x10] = 0;
    lVar9 = 2;
  }
  else {
    param_2[0x11] = (longlong)(plVar10 + 5);
    lVar9 = *plVar10;
    uStack_c8 = plVar10[3];
    uStack_c0 = plVar10[4];
    uStack_d8 = plVar10[1];
    plStack_d0 = (longlong *)plVar10[2];
    if (lVar9 == 2) goto LAB_1413e582b;
  }
  *param_1 = lVar9;
LAB_1413e5ab8:
  param_1[1] = uStack_d8;
  param_1[2] = (longlong)plStack_d0;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_c8._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c0._4_4_;
  return;
}

