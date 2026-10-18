// VA 0x1424f3050, PDB extent 187 bytes
// system_decorator::decorator_visual::chimney_assemble_bricks::impl$5::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::chimney_assemble_bricks::impl$5::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
   Extent: 187 */

void pdb_1424f3050(int *param_1,undefined8 *param_2)

{
  int *piStack_8;
  
  piStack_8 = param_1 + 1;
  if (*param_1 == 0) {
    pdb_140f66e50(param_2,&UNK_143513228,7,&UNK_14351322f,0xb,&piStack_8,&UNK_143513208);
    return;
  }
  if (*param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_14351323a,0x12,*(code **)(param_2[1] + 0x18));
    return;
  }
  pdb_140f66e50(param_2,&UNK_14351324c,4,&UNK_14351322f,0xb,&piStack_8,&UNK_143513208);
  return;
}

