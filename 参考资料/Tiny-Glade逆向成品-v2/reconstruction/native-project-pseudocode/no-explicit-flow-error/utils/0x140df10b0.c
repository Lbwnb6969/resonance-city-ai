// VA 0x140df10b0, PDB extent 1603 bytes
// utils::geometry::rectangle::Rectangle2d::circular_slice
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::circular_slice
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 1603 */

longlong * pdb_140df10b0(longlong *param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 **ppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfStack_c0;
  code *pcStack_b8;
  undefined4 **ppuStack_b0;
  float *pfStack_a8;
  undefined8 *puStack_a0;
  float afStack_94 [31];
  
  afStack_94[1] = -NAN;
  afStack_94[2] = -NAN;
  pdb_14007ee60();
  pfStack_a8 = (float *)pub_1406abab0(4,4);
  fVar1 = _DAT_142e36f28;
  if (pfStack_a8 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,4);
  }
  pfStack_c0 = (float *)CONCAT44(pfStack_c0._4_4_,param_3);
  if ((param_3 < 0.0) || (_DAT_142e36f28 < param_3)) {
    ppuStack_b0 = &pfStack_c0;
    pfStack_a8 = (float *)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&ppuStack_b0,&UNK_1433ecdb0);
  }
  *pfStack_a8 = param_3;
  ppuStack_b0 = (undefined4 **)0x1;
  puStack_a0 = (undefined4 **)0x1;
  fVar5 = *(float *)(param_2 + 0x14);
  fVar4 = fVar5 + *(float *)(param_2 + 0x10);
  fVar3 = fVar4 + fVar4;
  fVar6 = fVar5 / fVar3;
  if ((fVar6 < 0.0) || (fVar1 < fVar6)) {
    pfStack_c0 = afStack_94;
    pcStack_b8 = pdb_140f70fc0;
    afStack_94[0] = fVar6;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffaa0);
  }
  fVar4 = fVar4 / fVar3;
  if ((0.0 <= fVar4) && (fVar4 <= fVar1)) {
    fVar3 = (fVar5 + fVar5 + *(float *)(param_2 + 0x10)) / fVar3;
    afStack_94[0] = fVar3;
    if ((fVar3 < 0.0) || (fVar1 < fVar3)) {
      pfStack_c0 = afStack_94;
      pcStack_b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffaa0);
    }
    fVar5 = (float)(~-(uint)(param_4 < param_3) & (uint)param_4 |
                   (uint)(_DAT_142e36f28 + param_4) & -(uint)(param_4 < param_3));
    ppuVar2 = (undefined4 **)0x1;
    if ((param_3 < fVar6) && (fVar6 < fVar5)) {
      pdb_142d8d710(&ppuStack_b0);
      pfStack_a8[1] = fVar6;
      puStack_a0 = (undefined4 **)0x2;
      ppuVar2 = (undefined4 **)0x2;
    }
    if ((param_3 < fVar4) && (fVar4 < fVar5)) {
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = fVar4;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    if ((param_3 < fVar3) && (fVar3 < fVar5)) {
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = fVar3;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    if ((param_3 < fVar1) && (_DAT_142e36f28 < fVar5)) {
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = 0.0;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    fVar6 = fVar6 + fVar1;
    if ((param_3 < fVar6) && (fVar6 < fVar5)) {
      fVar6 = fVar6 + _DAT_142e36f34;
      afStack_94[0] = fVar6;
      if ((fVar6 < 0.0) || (fVar1 < fVar6)) {
        pfStack_c0 = afStack_94;
        pcStack_b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffb10);
      }
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = fVar6;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    fVar4 = fVar4 + fVar1;
    if ((param_3 < fVar4) && (fVar4 < fVar5)) {
      fVar4 = fVar4 + _DAT_142e36f34;
      afStack_94[0] = fVar4;
      if ((fVar4 < 0.0) || (fVar1 < fVar4)) {
        pfStack_c0 = afStack_94;
        pcStack_b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffb28);
      }
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = fVar4;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    fVar3 = fVar3 + fVar1;
    if ((param_3 < fVar3) && (fVar3 < fVar5)) {
      fVar3 = fVar3 + _DAT_142e36f34;
      afStack_94[0] = fVar3;
      if ((fVar3 < 0.0) || (fVar1 < fVar3)) {
        pfStack_c0 = afStack_94;
        pcStack_b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffb40);
      }
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = fVar3;
      ppuVar2 = (undefined4 **)((longlong)ppuVar2 + 1);
      puStack_a0 = ppuVar2;
    }
    afStack_94[0] = param_4;
    if ((0.0 <= param_4) && (param_4 <= fVar1)) {
      if (ppuVar2 == ppuStack_b0) {
        pdb_142d8d710(&ppuStack_b0);
      }
      pfStack_a8[(longlong)ppuVar2] = param_4;
      param_1[2] = (longlong)ppuVar2 + 1;
      *param_1 = (longlong)ppuStack_b0;
      param_1[1] = (longlong)pfStack_a8;
      return param_1;
    }
    pfStack_c0 = afStack_94;
    pcStack_b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1433ecdb0);
  }
  pfStack_c0 = afStack_94;
  pcStack_b8 = pdb_140f70fc0;
  afStack_94[0] = fVar4;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_c0,&UNK_1431ffaa0);
}

