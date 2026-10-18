// VA 0x14086ebd0, PDB extent 397 bytes
// system_decorator::ui_systems::ui_place_decorator::show_decorator_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_place_decorator::show_decorator_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
   Extent: 397 */

void pdb_14086ebd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_a0 = &uStack_60;
  uStack_98 = pdb_1414d1a30;
  uStack_60 = param_3;
  uStack_5c = param_4;
  pdb_140f60760(&uStack_78,&UNK_14300dd20,&uStack_a0);
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x28,8);
  pbStack_58 = pbStack_70;
  if (pbVar1 != (byte *)0x0) {
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[8] = 1;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
    *(undefined8 *)(pbVar1 + 0x10) = param_1;
    *(undefined8 *)(pbVar1 + 0x18) = param_2;
    *(undefined4 *)(pbVar1 + 0x20) = param_3;
    *(undefined4 *)(pbVar1 + 0x24) = param_4;
    pdb_1409baea0(&uStack_a0,pbStack_70,uStack_68,pbVar1,&UNK_14300dd30);
    uStack_a8 = uStack_80;
    uStack_b8 = uStack_90;
    uStack_b4 = uStack_8c;
    uStack_b0 = uStack_88;
    uStack_ac = uStack_84;
    uStack_c8 = (undefined4)uStack_a0;
    uStack_c4 = uStack_a0._4_4_;
    uStack_c0 = (undefined4)uStack_98;
    uStack_bc = uStack_98._4_4_;
    pdb_140b133a0(param_5,&uStack_c8);
    if (uStack_78 != 0) {
      pub_1406abac0(pbStack_58,uStack_78,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

