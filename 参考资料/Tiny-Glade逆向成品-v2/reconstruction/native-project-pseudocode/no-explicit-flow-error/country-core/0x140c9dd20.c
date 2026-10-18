// VA 0x140c9dd20, PDB extent 81 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::sounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::sounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 81 */

undefined8 pdb_140c9dd20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  undefined8 uVar16;
  
  uVar16 = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x70) = uVar16;
  uVar16 = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x60) = uVar16;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[8];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  uVar13 = param_3[0xd];
  uVar14 = param_3[0xe];
  uVar15 = param_3[0xf];
  *(undefined4 *)(param_2 + 0x48) = param_3[0xc];
  *(undefined4 *)(param_2 + 0x4c) = uVar13;
  *(undefined4 *)(param_2 + 0x50) = uVar14;
  *(undefined4 *)(param_2 + 0x54) = uVar15;
  *(undefined4 *)(param_2 + 0x38) = uVar9;
  *(undefined4 *)(param_2 + 0x3c) = uVar10;
  *(undefined4 *)(param_2 + 0x40) = uVar11;
  *(undefined4 *)(param_2 + 0x44) = uVar12;
  *(undefined4 *)(param_2 + 0x28) = uVar5;
  *(undefined4 *)(param_2 + 0x2c) = uVar6;
  *(undefined4 *)(param_2 + 0x30) = uVar7;
  *(undefined4 *)(param_2 + 0x34) = uVar8;
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 0x20) = uVar3;
  *(undefined4 *)(param_2 + 0x24) = uVar4;
  pub_142e32760(uVar1,uVar5,0xb0);
  return param_1;
}

