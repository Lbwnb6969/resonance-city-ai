// VA 0x140be7db0, PDB extent 492 bytes
// country_core::shader::vermeer::generate_strokes::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::vermeer::generate_strokes::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 492 */

undefined8 * pdb_140be7db0(undefined8 *param_1,longlong param_2)

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
  pbVar3 = pub_1406abab0(9,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,9);
  }
  else {
    pbVar3[0] = 0x70;
    pbVar3[1] = 0x68;
    pbVar3[2] = 0x6f;
    pbVar3[3] = 0x74;
    pbVar3[4] = 0x6f;
    pbVar3[5] = 0x6d;
    pbVar3[6] = 0x6f;
    pbVar3[7] = 100;
    pbVar3[8] = 0x65;
    bVar1 = *(byte *)(param_2 + 0x28);
    arg0 = (ulonglong)bVar1 ^ 5;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(arg0,1);
    if (pbVar4 != (byte *)0x0) {
      puVar5 = &UNK_1430651f0;
      if (bVar1 != 0) {
        puVar5 = &UNK_1430651f5;
      }
      pub_142e32760(pbVar4,puVar5,arg0);
      pdb_142d89a50(&uStack_50);
      puStack_48[4] = pbVar4;
      puStack_48[5] = arg0;
      puStack_48[2] = 9;
      puStack_48[3] = arg0;
      *puStack_48 = 9;
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

