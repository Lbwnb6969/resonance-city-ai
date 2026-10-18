// VA 0x140649af0, PDB extent 515 bytes
// country_core::shader::upload_cpu_raster::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::upload_cpu_raster::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 515 */

undefined8 * pdb_140649af0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  ulonglong arg0;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x8;
  uStack_48 = 0;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x11,1);
  uVar5 = _UNK_142f8d0fc;
  uVar4 = _UNK_142f8d0f8;
  uVar3 = _UNK_142f8d0f4;
  if (pbVar6 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x11);
  }
  else {
    *(undefined4 *)pbVar6 = _DAT_142f8d0f0;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    pbVar6[0x10] = 0x74;
    arg0 = *(ulonglong *)(&UNK_142f8d670 + (ulonglong)*(byte *)(param_2 + 0x14) * 8);
    iVar1 = *(int *)(&UNK_142f8d7c0 + (ulonglong)*(byte *)(param_2 + 0x14) * 4);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(arg0,1);
    if (pbVar7 != (byte *)0x0) {
      pub_142e32760(pbVar7,&UNK_142f8d7c0 + iVar1,arg0);
      pdb_142d89a50(&uStack_58);
      puStack_50[4] = pbVar7;
      puStack_50[5] = arg0;
      puStack_50[2] = 0x11;
      puStack_50[3] = arg0;
      *puStack_50 = 0x11;
      puStack_50[1] = pbVar6;
      *param_1 = uStack_58;
      param_1[1] = puStack_50;
      param_1[2] = 1;
      return param_1;
    }
    pdb_142dc7e2a(1,arg0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

