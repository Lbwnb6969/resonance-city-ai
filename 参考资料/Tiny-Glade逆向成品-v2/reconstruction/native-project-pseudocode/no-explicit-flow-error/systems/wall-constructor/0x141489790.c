// VA 0x141489790, PDB extent 569 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::rectangle_gable_wallspace_ranges
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::rectangle_gable_wallspace_ranges
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 569 */

longlong * pdb_141489790(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  float *pfStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    uStack_168 = *(undefined8 *)(param_2 + 0x30);
    uStack_178 = *(undefined8 *)(param_2 + 0x20);
    uStack_170 = *(undefined4 *)(param_2 + 0x28);
    uStack_16c = *(undefined4 *)(param_2 + 0x2c);
    fVar2 = (float)pdb_140df0700(&uStack_178,0);
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar3 = (float)pdb_140df0700(&uStack_178,1);
    fVar4 = (float)pdb_140df0700(&uStack_178,1);
    fVar5 = (float)pdb_140df0700(&uStack_178,2);
    fVar6 = (float)pdb_140df0700(&uStack_178,2);
    fVar7 = (float)pdb_140df0700(&uStack_178,3);
    fVar8 = (float)pdb_140df0700(&uStack_178,3);
    fStack_ec = (float)pdb_140df0700(&uStack_178,4);
    fStack_108 = fVar2 * fVar1;
    fStack_104 = fVar3 * fVar1;
    fStack_100 = fVar4 * fVar1;
    fStack_fc = fVar5 * fVar1;
    fStack_f8 = fVar6 * fVar1;
    fStack_f4 = fVar7 * fVar1;
    fStack_f0 = fVar8 * fVar1;
    fStack_ec = fStack_ec * fVar1;
    uStack_118 = *(undefined8 *)(param_3 + 4);
    uStack_128 = *param_3;
    uStack_124 = param_3[1];
    uStack_120 = param_3[2];
    uStack_11c = param_3[3];
    uStack_178 = 0;
    uStack_150 = 0;
    uStack_148 = uStack_e0;
    uStack_144 = uStack_dc;
    uStack_140 = uStack_d8;
    uStack_13c = uStack_d4;
    uStack_138 = uStack_d0;
    uStack_134 = uStack_cc;
    uStack_130 = uStack_c8;
    uStack_12c = uStack_c4;
    pfStack_110 = &fStack_108;
    uStack_c0 = uStack_128;
    uStack_bc = uStack_124;
    uStack_b8 = uStack_120;
    uStack_b4 = uStack_11c;
    uStack_b0 = uStack_118;
    pdb_1413e8ae0(&lStack_190,&uStack_178);
    if (!SBORROW8(0,lStack_190)) {
      param_1[2] = lStack_180;
      *param_1 = lStack_190;
      param_1[1] = lStack_188;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return param_1;
}

