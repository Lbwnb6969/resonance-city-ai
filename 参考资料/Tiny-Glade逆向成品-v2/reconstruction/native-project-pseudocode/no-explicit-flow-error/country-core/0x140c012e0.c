// VA 0x140c012e0, PDB extent 373 bytes
// country_core::resources::walls::split_height_into_skirts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::split_height_into_skirts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
   Extent: 373 */

longlong * pdb_140c012e0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  longlong lStack_88;
  undefined4 *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_88 = 0;
  puStack_80 = (undefined4 *)0x4;
  lStack_78 = 0;
  if (_DAT_1430679a0 <= param_2) {
    pdb_142d89720(&lStack_88);
    *puStack_80 = 0x40900000;
    fVar2 = _DAT_1430679a4;
    fVar1 = _DAT_14303e470;
    lVar3 = 1;
    fVar4 = _DAT_142f89620;
    while( true ) {
      fVar4 = fVar4 + fVar1;
      lStack_78 = lVar3;
      if (param_2 <= fVar4 + fVar2) break;
      if (lVar3 == lStack_88) {
        pdb_142d89720(&lStack_88);
      }
      puStack_80[lVar3] = fVar4;
      lVar3 = lVar3 + 1;
    }
  }
  param_1[2] = lStack_78;
  *param_1 = lStack_88;
  param_1[1] = (longlong)puStack_80;
  return param_1;
}

