// VA 0x1401048a0, PDB extent 269 bytes
// country_core::shader::inc::wall_slot_identity::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::wall_slot_identity::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 269 */

undefined8 *
pdb_1401048a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x30,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xd,1);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[5] = 0x77;
    pbVar3[6] = 0x61;
    pbVar3[7] = 0x6c;
    pbVar3[8] = 0x6c;
    pbVar3[9] = 0x5f;
    pbVar3[10] = 0x69;
    pbVar3[0xb] = 100;
    pbVar3[0xc] = 0x73;
    pbVar3[0] = 0x73;
    pbVar3[1] = 0x6c;
    pbVar3[2] = 0x6f;
    pbVar3[3] = 0x74;
    pbVar3[4] = 0x5f;
    pbVar3[5] = 0x77;
    pbVar3[6] = 0x61;
    pbVar3[7] = 0x6c;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[8] = 0xd;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    *(byte **)(pbVar2 + 0x10) = pbVar3;
    pbVar2[0x18] = 0xd;
    pbVar2[0x19] = 0;
    pbVar2[0x1a] = 0;
    pbVar2[0x1b] = 0;
    pbVar2[0x1c] = 0;
    pbVar2[0x1d] = 0;
    pbVar2[0x1e] = 0;
    pbVar2[0x1f] = 0;
    pbVar2[0x20] = 0;
    pbVar2[0x21] = 0;
    pbVar2[0x22] = 0;
    pbVar2[0x23] = 0;
    pbVar2[0x24] = 1;
    pbVar2[0x25] = 0;
    pbVar2[0x26] = 0;
    pbVar2[0x27] = 0;
    pbVar2[0x28] = 0;
    *param_1 = 1;
    param_1[1] = pbVar2;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0xd,param_3,param_4,pbVar2,uVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

