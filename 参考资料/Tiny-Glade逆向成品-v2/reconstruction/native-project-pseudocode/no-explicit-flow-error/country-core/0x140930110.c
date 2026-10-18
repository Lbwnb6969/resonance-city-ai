// VA 0x140930110, PDB extent 116 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::premade_wooden_wall_outer_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::premade_wooden_wall_outer_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 116 */

void pdb_140930110(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((*(char *)(param_2 + 0x29f) == '\x01') && (*(uint *)(param_2 + 600) < 2)) {
    uVar1 = *(undefined8 *)(param_2 + 0x260);
    uVar2 = *(undefined8 *)(param_2 + 0x264);
    uVar3 = *(undefined8 *)(param_2 + 0x26c);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 600);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 3) = uVar2;
    *(undefined8 *)(param_1 + 5) = uVar3;
    fVar4 = _DAT_142e382c0;
    if (*param_1 == 1) {
      param_1[5] = (int)((float)param_1[5] + _DAT_142e382c0);
      param_1[6] = (int)(fVar4 + (float)param_1[6]);
      return;
    }
    param_1[3] = (int)(_DAT_142e37988 + (float)param_1[3]);
    return;
  }
  *param_1 = 2;
  return;
}

