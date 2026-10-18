// VA 0x142d927f0, PDB extent 430 bytes
// country_core::resources::clutter_packs::discover_mod_clutter::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_packs::discover_mod_clutter::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 430 */

undefined8 pdb_142d927f0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong *puStack_48;
  code *pcStack_40;
  byte **ppbStack_38;
  code *pcStack_30;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pbStack_28 = param_3;
  pdb_141b1e240(&uStack_68,param_1,param_2,2);
  pcStack_40 = pdb_140f58250;
  pcStack_30 = pdb_140de07e0;
  puStack_48 = &uStack_68;
  ppbStack_38 = &pbStack_28;
  pdb_140f60760(auStack_80,&UNK_1430761eb,&puStack_48);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  ppbStack_38 = (byte **)uStack_70;
  uVar1 = pdb_142de92b0(&puStack_48);
  pbStack_20 = pbStack_28;
  if (*(longlong *)pbStack_28 == 1) {
    pdb_1404b38e0(pbStack_28 + 8);
  }
  else if ((*(longlong *)pbStack_28 == 0) && (*(ulonglong *)(pbStack_28 + 0x10) != 0)) {
    pub_1406abac0(*(byte **)(pbStack_28 + 8),*(ulonglong *)(pbStack_28 + 0x10),1);
  }
  pub_1406abac0(pbStack_20,0x28,8);
  return uVar1;
}

