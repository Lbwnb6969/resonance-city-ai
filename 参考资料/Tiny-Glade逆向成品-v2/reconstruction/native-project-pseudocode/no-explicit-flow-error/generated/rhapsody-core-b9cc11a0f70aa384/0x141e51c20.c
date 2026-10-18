// VA 0x141e51c20, PDB extent 492 bytes
// rhapsody_core::shader::calculate_reprojection_map::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_core::shader::calculate_reprojection_map::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-core-b9cc11a0f70aa384/out/shabriri.rs
   Extent: 492 */

undefined8 * pdb_141e51c20(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  ulonglong arg0;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x8;
  uStack_40 = 0;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xc,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xc);
  }
  else {
    pbVar3[0] = 0x75;
    pbVar3[1] = 0x73;
    pbVar3[2] = 0x65;
    pbVar3[3] = 0x5f;
    pbVar3[4] = 0x76;
    pbVar3[5] = 0x65;
    pbVar3[6] = 0x6c;
    pbVar3[7] = 0x6f;
    pbVar3[8] = 99;
    pbVar3[9] = 0x69;
    pbVar3[10] = 0x74;
    pbVar3[0xb] = 0x79;
    bVar1 = *(byte *)(param_2 + 0x20);
    arg0 = (ulonglong)bVar1 ^ 5;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(arg0,1);
    if (pbVar4 != (byte *)0x0) {
      puVar5 = &UNK_1433f0be0;
      if (bVar1 != 0) {
        puVar5 = &UNK_1433f0be5;
      }
      pub_142e32760(pbVar4,puVar5,arg0);
      pdb_142d89a50(&uStack_50);
      puStack_48[4] = pbVar4;
      puStack_48[5] = arg0;
      puStack_48[2] = 0xc;
      puStack_48[3] = arg0;
      *puStack_48 = 0xc;
      puStack_48[1] = pbVar3;
      *param_1 = uStack_50;
      param_1[1] = puStack_48;
      param_1[2] = 1;
      return param_1;
    }
    pdb_142dc7e2a(1,arg0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

