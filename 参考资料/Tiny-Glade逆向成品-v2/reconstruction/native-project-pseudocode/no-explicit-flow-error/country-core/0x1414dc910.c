// VA 0x1414dc910, PDB extent 300 bytes
// country_core::resources::gothic_window_profile::gothic_door_profile_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::gothic_window_profile::gothic_door_profile_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
   Extent: 300 */

undefined8 * pdb_1414dc910(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == 1) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x30,4);
    uVar2 = _UNK_143315188;
    if (pbVar1 == (byte *)0x0) {
LAB_1414dca05:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x30);
    }
    *(undefined8 *)pbVar1 = _DAT_143315180;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315198;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315190;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar3 = _DAT_1433151a0;
    uVar4 = _UNK_1433151a4;
    uVar5 = _UNK_1433151a8;
    uVar6 = _UNK_1433151ac;
  }
  else {
    if (param_2 == 2) {
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(0x28,4);
      uVar2 = _UNK_143315158;
      if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x28);
      }
      *(undefined8 *)pbVar1 = _DAT_143315150;
      *(undefined8 *)(pbVar1 + 8) = uVar2;
      uVar2 = _UNK_143315168;
      *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315160;
      *(undefined8 *)(pbVar1 + 0x18) = uVar2;
      *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315170;
      uVar2 = 5;
      goto LAB_1414dc9f1;
    }
    if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14331591d,0x28,&UNK_143315980);
    }
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x30,4);
    uVar2 = _UNK_143315128;
    if (pbVar1 == (byte *)0x0) goto LAB_1414dca05;
    *(undefined8 *)pbVar1 = _DAT_143315120;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315138;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315130;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar3 = _DAT_143315140;
    uVar4 = _UNK_143315144;
    uVar5 = _UNK_143315148;
    uVar6 = _UNK_14331514c;
  }
  *(undefined4 *)(pbVar1 + 0x20) = uVar3;
  *(undefined4 *)(pbVar1 + 0x24) = uVar4;
  *(undefined4 *)(pbVar1 + 0x28) = uVar5;
  *(undefined4 *)(pbVar1 + 0x2c) = uVar6;
  uVar2 = 6;
LAB_1414dc9f1:
  *param_1 = uVar2;
  param_1[1] = pbVar1;
  param_1[2] = uVar2;
  return param_1;
}

