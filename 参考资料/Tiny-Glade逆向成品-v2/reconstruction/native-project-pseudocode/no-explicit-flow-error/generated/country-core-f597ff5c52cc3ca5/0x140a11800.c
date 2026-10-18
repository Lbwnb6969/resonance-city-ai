// VA 0x140a11800, PDB extent 228 bytes
// country_core::shader::nani_curved_halftimber::impl$6::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani_curved_halftimber::impl$6::bind<rhapsody::raw::binding_set::RawProtocol,rhapsody::raw::binding_set::RawBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 228 */

void pdb_140a11800(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pdb_140e27260(param_3,param_2,*param_1,0,0xffffffff);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iStack_34 = iVar1 + 1;
  iVar3 = param_2[2];
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  pdb_140e272d0(param_3,&iStack_34,param_1[1]);
  iStack_34 = iVar1 + 2;
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  pdb_140e272d0(param_3,&iStack_34,param_1[2]);
  iStack_34 = iVar1 + 3;
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  pdb_140e272d0(param_3,&iStack_34,param_1[3]);
  iStack_34 = iVar1 + 4;
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  pdb_140e272d0(param_3,&iStack_34,param_1[4]);
  iStack_34 = iVar1 + 5;
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  pdb_140e272d0(param_3,&iStack_34,param_1[5]);
  return;
}

