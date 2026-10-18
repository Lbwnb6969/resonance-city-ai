// VA 0x140dea570, PDB extent 141 bytes
// utils::wall_space::WallSpaceCoord::from_curve_internal_coord
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::WallSpaceCoord::from_curve_internal_coord
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 141 */

float pdb_140dea570(uint param_1,float param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar2 = *(ulonglong *)(param_4 + 0x28);
  if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar3,uVar2,&UNK_1433ecc20);
  }
  if (uVar3 + 1 < uVar2) {
    if ((0.0 <= param_2) && (param_2 <= _DAT_142e36f28)) {
      fVar1 = *(float *)(*(longlong *)(param_4 + 0x20) + uVar3 * 4);
      return (param_2 * (*(float *)(*(longlong *)(param_4 + 0x20) + 4 + uVar3 * 4) - fVar1) + fVar1)
             * *(float *)(param_4 + 0x30);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433ece10,0x2a,&UNK_1433ece60);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar3 + 1,uVar2,&UNK_1433ecc38);
}

