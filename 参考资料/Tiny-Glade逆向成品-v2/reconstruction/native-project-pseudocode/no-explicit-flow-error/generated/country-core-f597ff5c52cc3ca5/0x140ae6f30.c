// VA 0x140ae6f30, PDB extent 431 bytes
// country_core::shader::water::inc::waves::impl$3::descriptors<shabriri_rt::api::EmptyProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::water::inc::waves::impl$3::descriptors<shabriri_rt::api::EmptyProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 431 */

undefined8 *
pdb_140ae6f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x60,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x60);
  }
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x14,1);
  uVar4 = _UNK_14304fe1d;
  uVar3 = _UNK_14304fe19;
  uVar2 = _UNK_14304fe15;
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x14);
  }
  else {
    *(undefined4 *)pbVar7 = _DAT_14304fe11;
    *(undefined4 *)(pbVar7 + 4) = uVar2;
    *(undefined4 *)(pbVar7 + 8) = uVar3;
    *(undefined4 *)(pbVar7 + 0xc) = uVar4;
    pbVar7[0x10] = 0x66;
    pbVar7[0x11] = 0x66;
    pbVar7[0x12] = 0x65;
    pbVar7[0x13] = 0x72;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0x13,1);
    uVar5 = _UNK_14304fe2d;
    if (pbVar8 != (byte *)0x0) {
      *(undefined8 *)pbVar8 = _DAT_14304fe25;
      *(undefined8 *)(pbVar8 + 8) = uVar5;
      pbVar8[0xf] = 0x74;
      pbVar8[0x10] = 0x75;
      pbVar8[0x11] = 0x72;
      pbVar8[0x12] = 0x65;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[8] = 0x14;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      pbVar6[0xc] = 0;
      pbVar6[0xd] = 0;
      pbVar6[0xe] = 0;
      pbVar6[0xf] = 0;
      *(byte **)(pbVar6 + 0x10) = pbVar7;
      pbVar6[0x18] = 0x14;
      pbVar6[0x19] = 0;
      pbVar6[0x1a] = 0;
      pbVar6[0x1b] = 0;
      pbVar6[0x1c] = 0;
      pbVar6[0x1d] = 0;
      pbVar6[0x1e] = 0;
      pbVar6[0x1f] = 0;
      pbVar6[0x20] = 0;
      pbVar6[0x21] = 0;
      pbVar6[0x22] = 0;
      pbVar6[0x23] = 0;
      pbVar6[0x24] = 1;
      pbVar6[0x25] = 0;
      pbVar6[0x26] = 0;
      pbVar6[0x27] = 0;
      pbVar6[0x28] = 0;
      pbVar6[0x30] = 1;
      pbVar6[0x31] = 0;
      pbVar6[0x32] = 0;
      pbVar6[0x33] = 0;
      pbVar6[0x38] = 0x13;
      pbVar6[0x39] = 0;
      pbVar6[0x3a] = 0;
      pbVar6[0x3b] = 0;
      pbVar6[0x3c] = 0;
      pbVar6[0x3d] = 0;
      pbVar6[0x3e] = 0;
      pbVar6[0x3f] = 0;
      *(byte **)(pbVar6 + 0x40) = pbVar8;
      pbVar6[0x48] = 0x13;
      pbVar6[0x49] = 0;
      pbVar6[0x4a] = 0;
      pbVar6[0x4b] = 0;
      pbVar6[0x4c] = 0;
      pbVar6[0x4d] = 0;
      pbVar6[0x4e] = 0;
      pbVar6[0x4f] = 0;
      pbVar6[0x50] = 0;
      pbVar6[0x51] = 0;
      pbVar6[0x52] = 0;
      pbVar6[0x53] = 0;
      pbVar6[0x54] = 1;
      pbVar6[0x55] = 0;
      pbVar6[0x56] = 0;
      pbVar6[0x57] = 0;
      pbVar6[0x58] = 4;
      *param_1 = 2;
      param_1[1] = pbVar6;
      param_1[2] = 2;
      return param_1;
    }
    pdb_142dc7e2a(1,0x13,param_3,param_4,pbVar7,pbVar6);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

