// VA 0x140a39920, PDB extent 386 bytes
// country_core::startup::load_glade_audio::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_glade_audio::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
   Extent: 386 */

undefined8 * pdb_140a39920(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x18,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x19,1);
  uVar5 = _UNK_14303b318;
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x19);
  }
  else {
    *(ulonglong *)(pbVar7 + 9) = CONCAT17(UNK_14303b317,CONCAT43(_UNK_14303b313,_DAT_14303b310));
    *(undefined8 *)(pbVar7 + 0x11) = uVar5;
    uVar4 = _UNK_14303b313;
    uVar3 = _UNK_14303b30f;
    uVar2 = _UNK_14303b30b;
    *(undefined4 *)pbVar7 = _DAT_14303b307;
    *(undefined4 *)(pbVar7 + 4) = uVar2;
    *(undefined4 *)(pbVar7 + 8) = uVar3;
    *(undefined4 *)(pbVar7 + 0xc) = uVar4;
    pbVar6[0] = 0x19;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    *(byte **)(pbVar6 + 8) = pbVar7;
    pbVar6[0x10] = 0x19;
    pbVar6[0x11] = 0;
    pbVar6[0x12] = 0;
    pbVar6[0x13] = 0;
    pbVar6[0x14] = 0;
    pbVar6[0x15] = 0;
    pbVar6[0x16] = 0;
    pbVar6[0x17] = 0;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x13,1);
    uVar5 = _UNK_14303b328;
    if (pbVar7 != (byte *)0x0) {
      *(undefined8 *)pbVar7 = _DAT_14303b320;
      *(undefined8 *)(pbVar7 + 8) = uVar5;
      pbVar7[0xf] = 0x65;
      pbVar7[0x10] = 0x6e;
      pbVar7[0x11] = 99;
      pbVar7[0x12] = 0x65;
      *param_1 = 1;
      param_1[1] = pbVar6;
      param_1[2] = 1;
      param_1[3] = 0x13;
      param_1[4] = pbVar7;
      param_1[5] = 0x13;
      param_1[6] = 0x8000000000000000;
      return param_1;
    }
    pdb_142dc7e2a(1,0x13);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

