// VA 0x1416432f0, PDB extent 271 bytes
// tg_mods::overlay::read_to_string<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::read_to_string<std::path::PathBuf>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 271 */

undefined8 pdb_1416432f0(undefined8 param_1,ulonglong *param_2)

{
  undefined1 auStack_68 [24];
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  ulonglong *puStack_30;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pbStack_28 = (byte *)param_2[1];
  puStack_30 = param_2;
  pdb_140d929f0(&uStack_50,pbStack_28,param_2[2]);
  pbStack_20 = pbStack_48;
  pdb_140f55d10(auStack_68,pbStack_48,uStack_40);
  pdb_141706360(param_1,auStack_68,&uStack_50);
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_20,uStack_50,1);
  }
  if (*puStack_30 != 0) {
    pub_1406abac0(pbStack_28,*puStack_30,1);
  }
  return param_1;
}

