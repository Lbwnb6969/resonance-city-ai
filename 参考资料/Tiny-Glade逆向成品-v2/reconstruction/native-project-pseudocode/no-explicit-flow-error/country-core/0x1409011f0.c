// VA 0x1409011f0, PDB extent 185 bytes
// country_core::resources::walls::decorator::DecoratorInfo::dst_as_wall_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorInfo::dst_as_wall_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 185 */

longlong pdb_1409011f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lStack_18;
  longlong *plStack_10;
  code *pcStack_8;
  
  lStack_18 = param_1 + 0x10;
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x32)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x32) - 1;
  }
  if (lVar1 == 0) {
    return lStack_18;
  }
  if ((int)lVar1 == 1) {
    plStack_10 = &lStack_18;
    pcStack_8 = pdb_1417c29e0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301e3d2,&plStack_10,param_2);
  }
  if ((int)lVar1 != 2) {
    plStack_10 = &lStack_18;
    pcStack_8 = pdb_1417c2770;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14301e398,&plStack_10,param_2);
  }
  plStack_10 = &lStack_18;
  pcStack_8 = pdb_1417c28a0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301e35c,&plStack_10,param_2);
}

