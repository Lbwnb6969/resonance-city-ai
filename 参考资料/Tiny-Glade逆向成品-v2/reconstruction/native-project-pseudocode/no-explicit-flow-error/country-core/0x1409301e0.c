// VA 0x1409301e0, PDB extent 421 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 421 */

undefined8 pdb_1409301e0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_60;
  longlong lStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uVar3 = 0;
  if (((*(char *)(param_1 + 0x29f) == '\x01') && (*(uint *)(param_1 + 600) < 2)) &&
     (0.0 < *(float *)(param_1 + 0x294))) {
    pdb_14092ff30();
    if (param_4 == '\0') {
      if (*(char *)(param_1 + 0x108) == '\0') {
        pdb_142d8e040();
        goto LAB_140930369;
      }
    }
    else {
      fVar4 = (float)pdb_14007ee60();
      lStack_58 = *(longlong *)(param_1 + 0x98);
      if (lStack_58 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14304eb90);
      }
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14304eb48,0x2d,&UNK_14304eb78);
      }
      uStack_60 = *(undefined8 *)(param_1 + 0x90);
      pcStack_50 = pdb_140ade410;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      uStack_48 = 0;
      uStack_40 = 0;
      pdb_140adead0(&uStack_60,fVar4);
      uVar2 = *(ulonglong *)(param_1 + 0xe8);
      if (uVar2 <= (uStack_40 & 0xffffffff)) {
LAB_140930369:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      uVar1 = (uStack_40 & 0xffffffff) + 1;
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,uVar2,&UNK_143022000);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

