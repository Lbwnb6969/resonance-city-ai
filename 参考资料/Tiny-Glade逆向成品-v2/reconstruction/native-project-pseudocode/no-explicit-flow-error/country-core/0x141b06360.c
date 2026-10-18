// VA 0x141b06360, PDB extent 592 bytes
// country_core::startup::load_clutter_packs::InFlightPackBuild::spawn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::InFlightPackBuild::spawn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 592 */

undefined8 * pdb_141b06360(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  byte *pbStack_338;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 uStack_96;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar4 = param_2[1];
  lVar1 = param_2[2];
  uStack_68 = param_3;
  puStack_48 = param_2;
  uStack_40 = param_3;
  if (lVar1 == 0) {
    pbStack_338 = (byte *)0x8;
  }
  else {
    pdb_14007ee60();
    pbStack_338 = pub_1406abab0(lVar1 * 0x38,8);
    if (pbStack_338 == (byte *)0x0) {
      uStack_31 = 1;
      pdb_142dc7e2a(8,lVar1 * 0x38);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  puStack_348 = &uStack_50;
  uStack_50 = 0;
  uStack_340 = 0;
  uStack_60 = lVar1;
  uStack_58 = pbStack_338;
  pdb_1419b50a0(lVar4,lVar1 * 0x90 + lVar4,&puStack_348);
  uStack_88 = (undefined4)uStack_60;
  uStack_84 = uStack_60._4_4_;
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  uStack_78 = uStack_50;
  uStack_32 = 1;
  lVar4 = pdb_140f2ccc0();
  uStack_a0 = uStack_78;
  uStack_b0 = uStack_88;
  uStack_ac = uStack_84;
  uStack_a8 = uStack_80;
  uStack_a4 = uStack_7c;
  uStack_b8 = uStack_40;
  uStack_96 = 0;
  uStack_32 = 0;
  uVar5 = pdb_141ae5d00(*(longlong *)(lVar4 + 0x18) + 0x10,&puStack_348);
  param_1[2] = puStack_48[2];
  uVar3 = puStack_48[1];
  *param_1 = *puStack_48;
  param_1[1] = uVar3;
  param_1[3] = uVar5;
  return param_1;
}

