// VA 0x142d90120, PDB extent 258 bytes
// country_core::render::load_texture::create_game_texture::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::load_texture::create_game_texture::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
   Extent: 258 */

undefined8 pdb_142d90120(undefined8 param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *arg0;
  ulonglong uVar4;
  undefined8 uStack_48;
  code *pcStack_40;
  ulonglong *puStack_38;
  code *pcStack_30;
  ulonglong *puStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pcStack_40 = pdb_1402ed420;
  pcStack_30 = pdb_140b96400;
  uStack_48 = param_1;
  puStack_38 = param_2;
  puStack_28 = param_2;
  uVar2 = pdb_142d8fe70(&UNK_14305e2ef,&uStack_48);
  puVar1 = puStack_28;
  uVar4 = *puStack_28;
  lVar3 = 0;
  if (7 < uVar4) {
    lVar3 = uVar4 - 8;
  }
  if (lVar3 == 0) {
    if (((uVar4 < 6) && ((0x32UL >> (uVar4 & 0x3f) & 1) != 0)) && (puStack_28[1] != 0)) {
      pub_1406abac0((byte *)puStack_28[2],puStack_28[1],1);
    }
    uVar4 = puVar1[4];
    if (uVar4 == 0) {
      return uVar2;
    }
    arg0 = (byte *)puVar1[5];
  }
  else {
    if (lVar3 == 1) {
      pdb_1404b83f0(puStack_28 + 1);
      return uVar2;
    }
    uVar4 = puStack_28[1];
    if (uVar4 == 0) {
      return uVar2;
    }
    arg0 = (byte *)puStack_28[2];
  }
  pub_1406abac0(arg0,uVar4,1);
  return uVar2;
}

