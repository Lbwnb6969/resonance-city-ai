// VA 0x141479670, PDB extent 683 bytes
// system_wall_constructor::construct_elevation_supports::rectangle_pillars::find_stone_column_start_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::rectangle_pillars::find_stone_column_start_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_pillars.rs
   Extent: 683 */

undefined8
pdb_141479670(undefined8 param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [136];
  
  uStack_c8 = *(undefined4 *)(param_2 + 1);
  uStack_d0 = *param_2;
  uStack_c4 = _DAT_142f61040;
  uStack_bc = 0x80000000;
  uVar5 = 0;
  pdb_1409efb80(&uStack_f8,param_1,&uStack_d0,_DAT_142e36f3c,0x1202,1,param_5);
  uVar6 = (undefined4)((ulonglong)param_5 >> 0x20);
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(uStack_f8 & 0xff) {
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_100 = uVar1;
  uStack_fc = uVar2;
  uVar3 = pdb_14140ce00(param_3,uVar1,uVar2);
  pdb_140df4540(auStack_a0,&uStack_100,uVar3);
  if (*param_4 == '\0') {
    uVar3 = 0;
    uVar4 = _DAT_142e36f28;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 8);
    uVar4 = *(undefined4 *)(param_4 + 4);
  }
  pdb_140df3380(auStack_b8,_DAT_142e3783c,_DAT_142e3783c,uVar4,uVar3,CONCAT44(uVar5,uVar1),
                CONCAT44(uVar6,uVar2),&UNK_14330c410);
  pdb_140df0010(&uStack_f8,auStack_b8);
  pdb_14140ce00(param_3,uStack_f8,uStack_f4);
  pdb_14140ce00(param_3,uStack_f0,uStack_ec);
  pdb_14140ce00(param_3,uStack_e8,uStack_e4);
  pdb_14140ce00(param_3,uStack_e0,uStack_dc);
  return 1;
}

