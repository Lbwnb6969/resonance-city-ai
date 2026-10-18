// VA 0x140c67380, PDB extent 659 bytes
// country_core::resources::ivy::wall_coord::WallCoord::into_world_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/wall_coord.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::ivy::wall_coord::WallCoord::into_world_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/wall_coord.rs
   Extent: 659 */

undefined8 * pdb_140c67380(undefined8 *param_1,float *param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  float afStack_a0 [2];
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  code *pcStack_88;
  float *pfStack_80;
  code *pcStack_78;
  undefined8 auStack_70 [8];
  
  fVar10 = _DAT_142e36f28;
  fStack_94 = *(float *)(param_3 + 0x30);
  if (fStack_94 < *param_2) {
    pcStack_88 = pdb_140f70fc0;
    pfStack_80 = &fStack_94;
    pcStack_78 = pdb_140f70fc0;
    uStack_90 = param_2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143070c10,&uStack_90,&UNK_143070c70);
  }
  if ((fStack_94 == 0.0) && (!NAN(fStack_94))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143070c88,0x25,&UNK_143070cb0);
  }
  fVar9 = *param_2 / fStack_94;
  afStack_a0[0] = fVar9;
  if ((fVar9 < 0.0) || (_DAT_142e36f28 < fVar9)) {
    uStack_90 = afStack_a0;
    pcStack_88 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335ec38,&uStack_90,&UNK_143070cc8);
  }
  uVar4 = pdb_1419a9060(param_3,fVar9);
  uVar5 = (ulonglong)uVar4;
  uVar2 = *(ulonglong *)(param_3 + 0x10);
  if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar5,uVar2,&UNK_14335e4e0);
  }
  if (uVar5 + 1 < uVar2) {
    lVar3 = *(longlong *)(param_3 + 8);
    fVar6 = fVar10 - extraout_XMM0_Da;
    uVar7 = *(undefined8 *)(lVar3 + uVar5 * 8);
    uVar1 = *(undefined8 *)(lVar3 + 8 + uVar5 * 8);
    uStack_90._0_4_ = extraout_XMM0_Da * (float)uVar1 + fVar6 * (float)uVar7;
    uStack_90._4_4_ =
         extraout_XMM0_Da * (float)((ulonglong)uVar1 >> 0x20) +
         fVar6 * (float)((ulonglong)uVar7 >> 0x20);
    pdb_140df4520(afStack_a0,&uStack_90);
    fVar6 = param_2[1];
    uVar4 = pdb_1419a9060(param_3,fVar9);
    uVar5 = (ulonglong)uVar4;
    if (uVar5 + 1 < uVar2) {
      uVar7 = *(undefined8 *)(lVar3 + uVar5 * 8);
      uVar1 = *(undefined8 *)(lVar3 + 8 + uVar5 * 8);
      fVar9 = (float)uVar1 - (float)uVar7;
      fVar8 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar7 >> 0x20);
      fVar10 = fVar10 / SQRT(fVar8 * fVar8 + fVar9 * fVar9);
      auStack_70[0] = CONCAT44(fVar9 * fVar10,fVar8 * (float)(_DAT_142e37820 ^ (uint)fVar10));
      pdb_140df4520(&uStack_90,auStack_70);
      fVar9 = (float)uStack_90 * _DAT_14302c610 * _DAT_142e36f60;
      fVar8 = uStack_90._4_4_ * _UNK_14302c614 * _UNK_142e36f64;
      fVar10 = pcStack_88._0_4_ * _DAT_14302c60c * _DAT_142e36f50;
      if (param_4 == '\0') {
        uVar7 = CONCAT44(fVar8 + fVar6,fVar9 + afStack_a0[0]);
        fStack_98 = fVar10 + fStack_98;
      }
      else {
        fStack_98 = fStack_98 - fVar10;
        uVar7 = CONCAT44(fVar6 - fVar8,afStack_a0[0] - fVar9);
      }
      *(float *)(param_1 + 1) = fStack_98;
      *param_1 = uVar7;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar5 + 1,uVar2,&UNK_14335e510);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar5 + 1,uVar2,&UNK_14335e4f8);
}

