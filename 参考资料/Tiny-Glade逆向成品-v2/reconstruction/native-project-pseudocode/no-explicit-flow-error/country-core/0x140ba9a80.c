// VA 0x140ba9a80, PDB extent 438 bytes
// country_core::systems::wall::wall_splitter::wall_splitter::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_splitter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_splitter::wall_splitter::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_splitter.rs
   Extent: 438 */

undefined8 *
pdb_140ba9a80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(0xb,1);
  if (pbStack_b8 != (byte *)0x0) {
    pbStack_b8[0] = 0x75;
    pbStack_b8[1] = 0x69;
    pbStack_b8[2] = 0x5f;
    pbStack_b8[3] = 0x73;
    pbStack_b8[4] = 99;
    pbStack_b8[5] = 0x69;
    pbStack_b8[6] = 0x73;
    pbStack_b8[7] = 0x73;
    pbStack_b8[7] = 0x73;
    pbStack_b8[8] = 0x6f;
    pbStack_b8[9] = 0x72;
    pbStack_b8[10] = 0x73;
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_c8 = 0x8000000000000000;
    uStack_c0 = 0xb;
    uStack_b0 = 0xb;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 2;
    uStack_68 = 1;
    uStack_60 = 0x100;
    uStack_5c = 0x3f800000;
    fStack_58 = _DAT_14300c320 + _DAT_1430608b0;
    fStack_54 = *(float *)(param_2 + 2) + _UNK_1430608b4;
    fStack_50 = (float)*(undefined8 *)((longlong)param_2 + 0x14) + _UNK_1430608b8;
    fStack_4c = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x14) >> 0x20) +
                _UNK_1430608bc;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_42 = 0;
    pdb_1409bba50(auStack_f0,&uStack_c8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = auStack_f0[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0xb);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

