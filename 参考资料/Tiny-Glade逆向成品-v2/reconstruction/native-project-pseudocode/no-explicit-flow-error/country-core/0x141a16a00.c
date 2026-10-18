// VA 0x141a16a00, PDB extent 101 bytes
// country_core::resources::history::tree_edit::missing_prefab
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::history::tree_edit::missing_prefab
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
   Extent: 101 */

undefined8 * pdb_141a16a00(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x18,1);
  uVar2 = _UNK_143362f93;
  if (pbVar3 != (byte *)0x0) {
    *(undefined8 *)pbVar3 = _DAT_143362f8b;
    *(undefined8 *)(pbVar3 + 8) = uVar2;
    pbVar3[0x10] = 0x46;
    pbVar3[0x11] = 0x41;
    pbVar3[0x12] = 0x42;
    pbVar3[0x13] = 0x5f;
    pbVar3[0x14] = 0x4e;
    pbVar3[0x15] = 0x41;
    pbVar3[0x16] = 0x4d;
    pbVar3[0x17] = 0x45;
    *param_1 = 0x18;
    param_1[1] = pbVar3;
    param_1[2] = 0x18;
    return param_1;
  }
  pdb_142dc7e2a(1,0x18);
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}

