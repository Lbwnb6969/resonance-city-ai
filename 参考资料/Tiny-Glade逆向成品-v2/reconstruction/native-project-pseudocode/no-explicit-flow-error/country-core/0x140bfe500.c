// VA 0x140bfe500, PDB extent 487 bytes
// country_core::systems::debug::sheep_controls::SheepControl::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::debug::sheep_controls::SheepControl::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
   Extent: 487 */

undefined8 *
pdb_140bfe500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_178 = _DAT_1430311a0;
  uStack_170 = _UNK_1430311a8;
  uStack_168 = _DAT_1430311b0;
  pdb_140a9a270(&uStack_e0,&uStack_178);
  uStack_60 = 0x8000000000000000;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(0x12,1);
  uVar4 = _UNK_143067ad4;
  uVar3 = _UNK_143067ad0;
  uVar2 = _UNK_143067acc;
  if (pbStack_58 != (byte *)0x0) {
    *(undefined4 *)pbStack_58 = _DAT_143067ac8;
    *(undefined4 *)(pbStack_58 + 4) = uVar2;
    *(undefined4 *)(pbStack_58 + 8) = uVar3;
    *(undefined4 *)(pbStack_58 + 0xc) = uVar4;
    pbStack_58[0x10] = 0x62;
    pbStack_58[0x11] = 0x65;
    uStack_60 = 0x12;
    uStack_50 = 0x12;
    pub_142e32760(&uStack_178,&uStack_e0,0x98);
    uVar6 = pdb_140a2ca40(param_2,&uStack_178);
    pdb_140a596f0(&uStack_e0,param_3,&UNK_143067ada,0x19,&UNK_143067b30);
    uStack_a8 = uVar6;
    pdb_14161efe0(&uStack_178,param_4,&uStack_e0,&UNK_143067b48);
    uVar5 = uStack_178;
    pdb_140a596f0(auStack_d8,param_3,&UNK_143067ada,0x19,&UNK_143067b60);
    uStack_e0 = uVar6;
    pdb_14161b4c0(&uStack_178,param_4,&uStack_e0,&UNK_143067b78);
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[6] = uVar5;
    param_1[7] = uStack_178;
    *param_1 = 0x8000000000000000;
    param_1[3] = 0x8000000000000000;
    return param_1;
  }
  pdb_142dc7e2a(1,0x12);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

