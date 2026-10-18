// VA 0x140908900, PDB extent 271 bytes
// rhapsody_core::shader::brdf::impl$0::descriptors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: rhapsody_core::shader::brdf::impl$0::descriptors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 271 */

undefined8 * pdb_140908900(undefined8 *param_1,char param_2)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  if (param_2 == '\0') {
    pbVar2 = (byte *)0x8;
    uVar4 = 0;
  }
  else {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x30,8);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    pdb_14007ee60();
    uVar4 = 1;
    pbVar3 = pub_1406abab0(8,1);
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(1,8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pbVar3[0] = 0x24;
    pbVar3[1] = 0x67;
    pbVar3[2] = 0x6c;
    pbVar3[3] = 0x6f;
    pbVar3[4] = 0x62;
    pbVar3[5] = 0x61;
    pbVar3[6] = 0x6c;
    pbVar3[7] = 0x73;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[8] = 8;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    *(byte **)(pbVar2 + 0x10) = pbVar3;
    pbVar2[0x18] = 8;
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
    pbVar2[0x28] = 1;
  }
  *param_1 = uVar4;
  param_1[1] = pbVar2;
  param_1[2] = uVar4;
  return param_1;
}

