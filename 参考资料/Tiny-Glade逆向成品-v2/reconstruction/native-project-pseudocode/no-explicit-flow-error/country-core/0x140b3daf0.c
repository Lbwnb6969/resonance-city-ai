// VA 0x140b3daf0, PDB extent 450 bytes
// country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::skewed_box_trigger_vol
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_orientation::skewed_box_trigger_vol
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_orientation.rs
   Extent: 450 */

void pdb_140b3daf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_38;
  
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_68 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0xc) >> 0x20);
  uVar5 = param_3[3];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar11 = param_3[4];
  uStack_50 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_38 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
  uVar6 = param_2[3];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *param_3;
  uVar10 = param_3[1];
  uVar9 = *param_2;
  uVar12 = param_2[1];
  iVar18 = param_4 + 1;
  iVar14 = param_4 + 2;
  iVar17 = param_4 + 3;
  iVar13 = param_4 + 4;
  iVar15 = param_4 + 5;
  iVar16 = param_4 + 6;
  iVar19 = param_4 + 7;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  param_1[8] = CONCAT44(uVar3,uStack_38);
  param_1[9] = uVar6;
  param_1[6] = uVar9;
  param_1[7] = uVar12;
  param_1[4] = uVar11;
  param_1[5] = CONCAT44(uVar2,uStack_50);
  param_1[2] = CONCAT44(uVar1,uStack_68);
  param_1[3] = uVar5;
  *param_1 = uVar8;
  param_1[1] = uVar10;
  *(int *)(param_1 + 0xc) = param_4;
  *(int *)((longlong)param_1 + 100) = iVar18;
  *(int *)(param_1 + 0xd) = iVar14;
  *(int *)((longlong)param_1 + 0x6c) = iVar14;
  *(int *)(param_1 + 0xe) = iVar17;
  *(int *)((longlong)param_1 + 0x74) = param_4;
  *(int *)(param_1 + 0xf) = iVar13;
  *(int *)((longlong)param_1 + 0x7c) = iVar15;
  *(int *)(param_1 + 0x10) = iVar16;
  *(int *)((longlong)param_1 + 0x84) = iVar16;
  *(int *)(param_1 + 0x11) = iVar19;
  *(int *)((longlong)param_1 + 0x8c) = iVar13;
  *(int *)(param_1 + 0x12) = iVar17;
  *(int *)((longlong)param_1 + 0x94) = iVar14;
  *(int *)(param_1 + 0x13) = iVar16;
  *(int *)((longlong)param_1 + 0x9c) = iVar16;
  *(int *)(param_1 + 0x14) = iVar19;
  *(int *)((longlong)param_1 + 0xa4) = iVar17;
  *(int *)(param_1 + 0x15) = iVar18;
  *(int *)((longlong)param_1 + 0xac) = param_4;
  *(int *)(param_1 + 0x16) = iVar13;
  *(int *)((longlong)param_1 + 0xb4) = iVar13;
  *(int *)(param_1 + 0x17) = iVar15;
  *(int *)((longlong)param_1 + 0xbc) = iVar18;
  *(int *)(param_1 + 0x18) = iVar14;
  *(int *)((longlong)param_1 + 0xc4) = iVar18;
  *(int *)(param_1 + 0x19) = iVar15;
  *(int *)((longlong)param_1 + 0xcc) = iVar15;
  *(int *)(param_1 + 0x1a) = iVar16;
  *(int *)((longlong)param_1 + 0xd4) = iVar14;
  *(int *)(param_1 + 0x1b) = param_4;
  *(int *)((longlong)param_1 + 0xdc) = iVar17;
  *(int *)(param_1 + 0x1c) = iVar19;
  *(int *)((longlong)param_1 + 0xe4) = iVar19;
  *(int *)(param_1 + 0x1d) = iVar13;
  *(int *)((longlong)param_1 + 0xec) = param_4;
  return;
}

