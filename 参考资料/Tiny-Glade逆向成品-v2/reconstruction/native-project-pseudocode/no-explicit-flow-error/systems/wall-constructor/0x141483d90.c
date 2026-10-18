// VA 0x141483d90, PDB extent 256 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::BoardWallSpace::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 256 */

undefined8 * pdb_141483d90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_78;
  byte *pbStack_70;
  undefined4 uStack_60;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  puVar4 = (undefined8 *)pdb_14092fa10(param_2);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = *(undefined4 *)(param_2 + 0x290);
    *(undefined4 *)param_1 = 2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    uStack_60 = uVar5;
  }
  else {
    pdb_140a85120(&uStack_54,puVar4,_DAT_143015150);
    pdb_140a85190(&lStack_90,&uStack_54);
    if (lStack_90 != 0) {
      pub_1406abac0(pbStack_88,lStack_90 << 3,4);
    }
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_70,lStack_78 << 2,4);
    }
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar3 = *(undefined8 *)((longlong)puVar4 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)puVar4 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[5] = CONCAT44(uStack_44,uStack_48);
    param_1[6] = uStack_40;
    *(undefined8 *)((longlong)param_1 + 0x1c) = uStack_54;
    *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(uStack_48,uStack_4c);
    uVar5 = *(undefined4 *)(param_2 + 0x290);
  }
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_60;
  *(undefined4 *)(param_1 + 8) = 0x3e000000;
  return param_1;
}

