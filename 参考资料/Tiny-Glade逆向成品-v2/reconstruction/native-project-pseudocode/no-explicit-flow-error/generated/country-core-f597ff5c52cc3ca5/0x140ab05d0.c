// VA 0x140ab05d0, PDB extent 465 bytes
// country_core::shader::roof::inc::wooden_floor::impl$2::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::roof::inc::wooden_floor::impl$2::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 465 */

void pdb_140ab05d0(undefined8 *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  
  uVar4 = param_1[1];
  uVar5 = pdb_140e1cfc0(uVar4);
  uVar1 = param_2[2];
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar1) = uVar5;
  pdb_140e272d0(param_3,param_2,*param_1);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iStack_3c = iVar2 + 1;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,uVar4);
  iStack_3c = iVar2 + 0xb;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[2]);
  iStack_3c = iVar2 + 2;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[3]);
  iStack_3c = iVar2 + 3;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[4]);
  iStack_3c = iVar2 + 4;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[5]);
  iStack_3c = iVar2 + 5;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[6]);
  iStack_3c = iVar2 + 6;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[7]);
  iStack_3c = iVar2 + 7;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[8]);
  iStack_3c = iVar2 + 8;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[9]);
  iStack_3c = iVar2 + 9;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[10]);
  iStack_3c = iVar2 + 10;
  iStack_38 = iVar3;
  uStack_34 = uVar1;
  pdb_140e272d0(param_3,&iStack_3c,param_1[0xb]);
  return;
}

