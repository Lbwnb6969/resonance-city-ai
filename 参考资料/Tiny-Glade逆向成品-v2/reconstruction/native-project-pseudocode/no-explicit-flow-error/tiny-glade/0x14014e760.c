// VA 0x14014e760, PDB extent 800 bytes
// tiny_glade::sdl_event_loop::process_event_batch<tiny_glade::sdl_event_loop::run_event_loop::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::sdl_event_loop::process_event_batch<tiny_glade::sdl_event_loop::run_event_loop::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
   Extent: 800 */

void pdb_14014e760(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  pdb_1406d07b0(&uStack_a0,param_1,5);
  if ((char)uStack_a0 == '\v') {
    puVar7 = (undefined8 *)*param_2;
    puVar8 = (undefined8 *)param_2[1];
    uVar6 = param_2[2];
    uVar10 = param_2[3];
    uVar9 = param_2[4];
    uStack_b0 = param_2[5];
    puStack_e8 = (undefined8 *)param_2[6];
    uStack_b8 = param_2[7];
    uStack_c0 = param_2[8];
    uVar11 = param_2[9];
    uStack_c8 = param_2[10];
    uStack_d0 = param_2[0xb];
  }
  else {
    uStack_48 = uStack_80;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_68 = uStack_a0;
    uStack_64 = uStack_9c;
    uStack_60 = uStack_98;
    uStack_5c = uStack_94;
    puVar7 = (undefined8 *)*param_2;
    puVar8 = (undefined8 *)param_2[1];
    uVar6 = param_2[2];
    uVar10 = param_2[3];
    uVar9 = param_2[4];
    uStack_b0 = param_2[5];
    puStack_e8 = (undefined8 *)param_2[6];
    uStack_d8 = *(undefined4 *)(puStack_e8 + 1);
    uStack_e0 = *puStack_e8;
    uStack_b8 = param_2[7];
    uStack_c0 = param_2[8];
    uVar11 = param_2[9];
    uStack_c8 = param_2[10];
    uStack_d0 = param_2[0xb];
    pdb_1406476f0(*puVar7,*puVar8,uVar6,uVar10,uVar9,uStack_b0,&uStack_e0,uStack_b8,uStack_c0,
                  &uStack_68,uVar11,uStack_c8,uStack_d0,uVar11);
  }
  uStack_a8 = pdb_1406d0830(param_1);
  pdb_1406d0de0(&uStack_a0,&uStack_a8);
  uVar5 = uStack_b0;
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  uVar2 = uStack_c8;
  uVar1 = uStack_d0;
  puStack_70 = puVar7;
  puStack_78 = puVar8;
  while ((char)uStack_a0 != '\v') {
    uStack_d8 = *(undefined4 *)(puStack_e8 + 1);
    uStack_e0 = *puStack_e8;
    pdb_1406476f0(*puStack_70,*puStack_78,uVar6,uVar10,uVar9,uVar5,&uStack_e0,uVar4,uVar3,&uStack_68
                  ,uVar11,uVar2,uVar1);
    pdb_1406d0de0(&uStack_a0,&uStack_a8);
  }
  return;
}

