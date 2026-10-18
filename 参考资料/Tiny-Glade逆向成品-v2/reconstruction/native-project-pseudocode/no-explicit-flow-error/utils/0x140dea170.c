// VA 0x140dea170, PDB extent 223 bytes
// utils::wall_space::WallSpaceCoord::get_tangent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::WallSpaceCoord::get_tangent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 223 */

float pdb_140dea170(float *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = _DAT_142e36f28;
  fVar6 = *param_1 / *(float *)(param_2 + 0x30);
  if (NAN(fVar6)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433ecdf3,0x1d,&UNK_1431fee28);
  }
  if (ABS(fVar6) != INFINITY) {
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = _DAT_142e36f28;
    if (fVar7 <= _DAT_142e36f28) {
      fVar6 = fVar7;
    }
    uVar4 = pdb_141e38dd0(param_2,fVar6);
    uVar5 = (ulonglong)uVar4;
    if (uVar5 + 1 < *(ulonglong *)(param_2 + 0x10)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + uVar5 * 8);
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + uVar5 * 8);
      fVar6 = (float)uVar2 - (float)uVar1;
      fVar7 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
      return fVar6 * (fVar3 / SQRT(fVar7 * fVar7 + fVar6 * fVar6));
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar5 + 1,*(ulonglong *)(param_2 + 0x10),&UNK_1433eccb0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1433ece78,0x22,&UNK_1431fee28);
}

