// VA 0x140acf740, PDB extent 571 bytes
// country_core::systems::mod_editor::sanitize_stem
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::sanitize_stem
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 571 */

ulonglong * pdb_140acf740(ulonglong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong arg0;
  undefined8 uVar4;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140f5e900(&uStack_78);
  pbStack_40 = pbStack_70;
  uStack_58 = 0;
  pbStack_50 = (byte *)0x1;
  uStack_48 = 0;
  if (uStack_68 != 0) {
    pdb_142d7f1b0(&uStack_58,0,((uStack_68 >> 2) + 1) - (ulonglong)((uStack_68 & 3) == 0),1,1);
  }
  pdb_1419b5a30(pbStack_40,pbStack_40 + uStack_68,&uStack_58);
  arg0 = uStack_48;
  pbVar3 = pbStack_50;
  uStack_60 = uStack_58;
  if (uStack_78 != 0) {
    pub_1406abac0(pbStack_40,uStack_78,1);
  }
  pbStack_40 = pbVar3;
  uVar2 = pdb_140b95c90(pbVar3,arg0,0x5f);
  if (arg0 == 0) {
    pdb_14007ee60();
    arg0 = 4;
    pbVar3 = pub_1406abab0(4,1);
    if (pbVar3 != (byte *)0x0) {
      pbVar3[0] = 0x69;
      pbVar3[1] = 0x74;
      pbVar3[2] = 0x65;
      pbVar3[3] = 0x6d;
LAB_140acf861:
      *param_1 = arg0;
      param_1[1] = (ulonglong)pbVar3;
      param_1[2] = arg0;
      if (uStack_60 != 0) {
        pub_1406abac0(pbStack_40,uStack_60,1);
      }
      return param_1;
    }
    pdb_142dc7e2a(1,4);
  }
  else {
    if ((longlong)arg0 < 0) {
      uVar4 = 0;
    }
    else {
      pdb_14007ee60();
      uVar4 = 1;
      pbVar3 = pub_1406abab0(arg0,1);
      if (pbVar3 != (byte *)0x0) {
        pub_142e32760(pbVar3,uVar2,arg0);
        goto LAB_140acf861;
      }
    }
    pdb_142dc7e2a(uVar4,arg0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

