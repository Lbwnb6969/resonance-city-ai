// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::filter_map::FilterMap<core::ops::range::Range<usize>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges::closure_env$1> >
// VA 0x1413eea80, PDB extent 777 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallspaceXRange,core::iter::adapters::filter_map::FilterMap<core::ops::range::Range<usize>,system_wall_constructor::construct_wooden_walls::construct_wall_boards::top_rim_merlon_ranges::closure_env$1>
   >
   Extent: 777 bytes. No whole-program auto-analysis. */

longlong * pdb_1413eea80(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  longlong *plVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  longlong lStack_98;
  float *pfStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  fVar7 = _DAT_142e37ad4;
  uStack_80 = 0xfffffffffffffffe;
  uVar11 = param_2[4];
  uVar2 = param_2[5];
  if (uVar11 < uVar2) {
    pfVar3 = (float *)*param_2;
    pfVar4 = (float *)param_2[1];
    fVar1 = *pfVar4;
    plVar10 = (longlong *)param_2[2];
    pfVar5 = (float *)param_2[3];
    do {
      fVar12 = (float)uVar11 * fVar1;
      fVar12 = fVar12 + fVar12 + *pfVar3;
      if (*plVar10 - 1U == uVar11) {
        fVar13 = *pfVar5;
      }
      else {
        fVar13 = fVar1 + fVar12;
      }
      if (_DAT_142e37ad4 <= fVar13 - fVar12) {
        pdb_14007ee60();
        pfVar9 = (float *)func_0x0001406abab0(0x20,4);
        if (pfVar9 == (float *)0x0) {
          pdb_142dc7e2a(4,0x20);
          pcVar6 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar6)();
          return plVar10;
        }
        uVar11 = uVar11 + 1;
        *pfVar9 = fVar12;
        pfVar9[1] = fVar13;
        lStack_98 = 4;
        lStack_88 = 1;
        pfStack_90 = pfVar9;
        if (uVar11 < uVar2) {
          do {
            lVar8 = lStack_88;
            fVar1 = *pfVar4;
            while( true ) {
              fVar12 = (float)uVar11 * fVar1;
              fVar12 = fVar12 + fVar12 + *pfVar3;
              if (*plVar10 - 1U == uVar11) {
                fVar13 = *pfVar5;
              }
              else {
                fVar13 = fVar1 + fVar12;
              }
              if (fVar7 <= fVar13 - fVar12) break;
              uVar11 = uVar11 + 1;
              if (uVar2 == uVar11) goto LAB_1413eecd0;
            }
            if (lStack_88 == lStack_98) {
              pdb_142d7f1b0(&lStack_98,lStack_88,1,4,8);
              pfVar9 = pfStack_90;
            }
            uVar11 = uVar11 + 1;
            pfVar9[lVar8 * 2] = fVar12;
            pfVar9[lVar8 * 2 + 1] = fVar13;
            lStack_88 = lVar8 + 1;
          } while (uVar11 < uVar2);
        }
LAB_1413eecd0:
        param_1[2] = lStack_88;
        *param_1 = lStack_98;
        param_1[1] = (longlong)pfStack_90;
        return param_1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return param_1;
}

