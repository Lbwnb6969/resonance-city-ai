// VA 0x141b05a50, PDB extent 476 bytes
// country_core::startup::load_clutter_packs::unload_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_clutter_packs::unload_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 476 */

void pdb_141b05a50(ulonglong param_1,longlong param_2,byte *param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  longlong lStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar1 = param_1 + param_2 * 8;
  uStack_90 = param_1;
  uStack_88 = uVar1;
  pbStack_80 = param_3;
  pdb_141600e40(&lStack_70,&uStack_90);
  uStack_41 = 1;
  pdb_140c26330(param_3,param_1,param_2);
  lStack_50 = lStack_70;
  pbStack_58 = pbStack_68;
  pbVar2 = pbStack_68;
  for (lVar4 = lStack_60 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
    pdb_140a56c60(param_4,*(undefined8 *)pbVar2,*(undefined8 *)(pbVar2 + 8));
    pbVar2 = pbVar2 + 0x10;
  }
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_58,lStack_50 << 4,8);
  }
  while (param_1 != uVar1) {
    uStack_41 = 0;
    uVar3 = pdb_1417c5550(param_5 + 0x20,param_1);
    uStack_41 = 0;
    pdb_140ca9020(&uStack_90,param_5,uVar3,param_1);
    param_1 = param_1 + 8;
    if ((uStack_88 != 0x8000000000000001) && ((uStack_88 & 0x7fffffffffffffff) != 0)) {
      pub_1406abac0(pbStack_80,uStack_88,1);
    }
  }
  return;
}

