// VA 0x1414ecb70, PDB extent 444 bytes
// country_core::render::nani::trimesh::TrimeshBuilder::attrib<glam::f32::vec3::Vec3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::trimesh::TrimeshBuilder::attrib<glam::f32::vec3::Vec3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/trimesh.rs
   Extent: 444 */

undefined8 *
pdb_1414ecb70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_40 = param_2;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143316e38,0x22,&UNK_143316e60);
  }
  if (param_4 <= (longlong)param_2[8]) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143316d40,0x3c,&UNK_143316db0);
  }
  if (param_2[9] == 0) {
    param_2[9] = param_4;
  }
  else {
    lStack_48 = param_4;
    if (param_2[9] != param_4) {
      pdb_142dc7fb4(0,param_2 + 9,&lStack_48,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  lVar10 = param_2[6];
  lVar1 = param_2[7];
  if (((lVar1 != 0) && (lVar10 + lVar1 * 0x18 != 0x18)) &&
     (*(byte *)(lVar10 + lVar1 * 0x18 + -6) < 4)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143316de0,0x7b,&UNK_143316e20);
  }
  if (lVar1 == param_2[5]) {
    pdb_142d7e830();
    lVar10 = puStack_40[6];
    param_2 = puStack_40;
  }
  *(undefined8 *)(lVar10 + lVar1 * 0x18) = param_3;
  *(longlong *)(lVar10 + 8 + lVar1 * 0x18) = param_4 * 0xc;
  *(undefined2 *)(lVar10 + 0x10 + lVar1 * 0x18) = 0xc;
  *(undefined1 *)(lVar10 + 0x12 + lVar1 * 0x18) = 4;
  param_2[7] = lVar1 + 1;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  return param_1;
}

