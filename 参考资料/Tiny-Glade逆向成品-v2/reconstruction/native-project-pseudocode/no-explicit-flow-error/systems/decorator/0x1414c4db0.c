// VA 0x1414c4db0, PDB extent 497 bytes
// system_decorator::ui_systems::calculate_decorator_grab_offset::raycast_with_ss_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_grab_offset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::calculate_decorator_grab_offset::raycast_with_ss_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_grab_offset.rs
   Extent: 497 */

undefined8 *
pdb_1414c4db0(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
             longlong param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 uVar9;
  float fVar10;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int aiStack_98 [12];
  int iStack_68;
  
  param_4 = param_2 + param_4;
  uVar1 = *param_8;
  uVar9 = pdb_140a6ad50(param_8[4]);
  pdb_1414c9450(&fStack_130,param_4,param_3 + param_5,uVar1,uVar9,param_2);
  uVar9 = 0x30ab;
  if (param_6 == 7) {
    uVar9 = 0x23;
  }
  pdb_1409ed340(&iStack_d8,param_8 + 8,&fStack_130,_DAT_142e36f3c,uVar9);
  if (iStack_a4 == 2) {
    iStack_68 = 2;
  }
  else {
    iStack_e4 = iStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    fStack_f8 = (float)uStack_b8;
    fStack_108 = fStack_c8;
    uStack_104 = uStack_c4;
    iStack_118 = iStack_d8;
    uStack_114 = uStack_d4;
    fStack_110 = fStack_d0;
    fStack_10c = fStack_cc;
    pdb_1409f9a10(aiStack_98,&iStack_118);
  }
  pdb_1414c46d0(&iStack_118,param_9,&fStack_130,_DAT_142e36f3c);
  if (iStack_118 != 1) {
    fVar10 = (0.0 - fStack_12c) / fStack_120;
    fStack_110 = fVar10 * fStack_124 + fStack_130;
    fStack_10c = fVar10 * fStack_120 + fStack_12c;
    fStack_108 = fVar10 * fStack_11c + fStack_128;
  }
  uStack_100 = CONCAT44(fStack_10c,fStack_110);
  fStack_f8 = fStack_108;
  iStack_118 = CONCAT31(iStack_118._1_3_,0xb);
  uStack_f4 = 0x3f80000000000000;
  uStack_ec = 0;
  piVar8 = aiStack_98;
  if (iStack_68 == 2) {
    piVar8 = &iStack_118;
  }
  uVar1 = *(undefined8 *)(piVar8 + 2);
  uVar2 = *(undefined8 *)(piVar8 + 4);
  uVar3 = *(undefined8 *)(piVar8 + 6);
  uVar4 = *(undefined8 *)(piVar8 + 8);
  uVar5 = *(undefined8 *)(piVar8 + 10);
  uVar6 = *(undefined8 *)(piVar8 + 0xc);
  uVar7 = *(undefined8 *)(piVar8 + 0xe);
  *param_1 = *(undefined8 *)piVar8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  return param_1;
}

