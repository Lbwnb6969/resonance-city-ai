// VA 0x142d926c0, PDB extent 290 bytes
// country_core::resources::clutter_packs::discover_mod_clutter::closure$8
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::discover_mod_clutter::closure$8
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 290 */

undefined8 pdb_142d926c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong *puStack_48;
  code *pcStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = param_3;
  pdb_141b1e240(&uStack_68,param_1,param_2,2);
  pcStack_40 = pdb_140f58250;
  puStack_38 = &uStack_20;
  pcStack_30 = pdb_140f59780;
  puStack_48 = &uStack_68;
  pdb_140f60760(auStack_80,&UNK_1430761d5,&puStack_48);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  puStack_38 = (undefined8 *)uStack_70;
  uVar1 = pdb_142de92b0(&puStack_48);
  pdb_1404b38e0(&uStack_20);
  return uVar1;
}

