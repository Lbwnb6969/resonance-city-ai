// VA 0x140ae6e30, PDB extent 253 bytes
// country_core::shader::inc::object_push::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::inc::object_push::impl$0::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 253 */

undefined8 *
pdb_140ae6e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x30,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x11,1);
  uVar2 = _UNK_14304fe08;
  if (pbVar4 != (byte *)0x0) {
    *(undefined8 *)pbVar4 = _DAT_14304fe00;
    *(undefined8 *)(pbVar4 + 8) = uVar2;
    pbVar4[0x10] = 0x68;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[8] = 0x11;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    *(byte **)(pbVar3 + 0x10) = pbVar4;
    pbVar3[0x18] = 0x11;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    pbVar3[0x1c] = 0;
    pbVar3[0x1d] = 0;
    pbVar3[0x1e] = 0;
    pbVar3[0x1f] = 0;
    pbVar3[0x20] = 0;
    pbVar3[0x21] = 0;
    pbVar3[0x22] = 0;
    pbVar3[0x23] = 0;
    pbVar3[0x24] = 1;
    pbVar3[0x25] = 0;
    pbVar3[0x26] = 0;
    pbVar3[0x27] = 0;
    pbVar3[0x28] = 4;
    *param_1 = 1;
    param_1[1] = pbVar3;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x11,param_3,param_4,pbVar3,uVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

