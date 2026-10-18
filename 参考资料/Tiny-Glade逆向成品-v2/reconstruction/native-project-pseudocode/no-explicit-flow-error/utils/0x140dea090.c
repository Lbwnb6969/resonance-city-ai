// VA 0x140dea090, PDB extent 216 bytes
// utils::wall_space::WallSpaceCoord::get_pos_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::WallSpaceCoord::get_pos_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 216 */

float pdb_140dea090(float *param_1,longlong param_2)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  float extraout_XMM0_Da;
  float fStack_2c;
  float *pfStack_28;
  code *pcStack_20;
  
  fVar2 = _DAT_142e36f28;
  fStack_2c = *param_1 / *(float *)(param_2 + 0x30);
  if ((fStack_2c < 0.0) || (_DAT_142e36f28 < fStack_2c)) {
    pfStack_28 = &fStack_2c;
    pcStack_20 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_28,&UNK_1431fee10);
  }
  uVar3 = pdb_141e38dd0(param_2);
  uVar4 = (ulonglong)uVar3;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4,uVar1,&UNK_1433ecc50);
  }
  if (uVar4 + 1 < uVar1) {
    return *(float *)(*(longlong *)(param_2 + 8) + 8 + uVar4 * 8) * extraout_XMM0_Da +
           *(float *)(*(longlong *)(param_2 + 8) + uVar4 * 8) * (fVar2 - extraout_XMM0_Da);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar4 + 1,uVar1,&UNK_1433ecc68);
}

