// VA 0x14094c790, PDB extent 260 bytes
// country_core::geometry::instanced_wall::BrickTransform::encode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::geometry::instanced_wall::BrickTransform::encode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 260 */

undefined4 * pdb_14094c790(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar6 = pdb_14094c8a0(*param_2);
  uVar7 = pdb_14094c8a0(uVar3);
  uVar8 = pdb_14094c8a0(uVar4);
  uVar9 = pdb_14094c8a0(uVar5);
  uVar10 = pdb_14094c8a0(uVar1);
  uVar11 = pdb_14094c8a0(param_2[6]);
  uVar12 = pdb_14094c8a0(param_2[7]);
  uVar13 = pdb_14094c8a0(param_2[8]);
  uVar14 = pdb_14094c8a0(CONCAT44(*(undefined4 *)((longlong)param_2 + 0x54),
                                  *(undefined4 *)(param_2 + 9)));
  uVar15 = pdb_14094c8a0(*(undefined4 *)(param_2 + 0xb));
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((longlong)param_2 + 0x24);
  param_1[7] = uVar2;
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar15;
  *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)((longlong)param_2 + 0x4c);
  param_1[0xf] = uVar1;
  return param_1;
}

