// VA 0x142328de0, PDB extent 351 bytes
// toolbar::menu::mods_workshop_tab::parts_label
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::mods_workshop_tab::parts_label
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
   Extent: 351 */

undefined8 pdb_142328de0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_50 = 0;
  pbStack_48 = (byte *)0x8;
  lStack_40 = 0;
  if (!SBORROW8(0,*param_2)) {
    uVar4 = 0x15;
    uVar2 = pdb_140dc6290(&UNK_1434da448);
    lVar1 = lStack_40;
    if (lStack_40 == lStack_50) {
      pdb_142d8afd0(&lStack_50);
    }
    lVar3 = lVar1 * 0x10;
    *(undefined8 *)(pbStack_48 + lVar3) = uVar2;
    *(undefined8 *)(pbStack_48 + lVar3 + 8) = uVar4;
    lStack_40 = lVar1 + 1;
  }
  if ((char)param_2[4] != '\0') {
    uVar4 = 0x19;
    uVar2 = pdb_140dc6290(&UNK_1434da45d);
    lVar1 = lStack_40;
    if (lStack_40 == lStack_50) {
      pdb_142d8afd0(&lStack_50);
    }
    lVar3 = lVar1 * 0x10;
    *(undefined8 *)(pbStack_48 + lVar3) = uVar2;
    *(undefined8 *)(pbStack_48 + lVar3 + 8) = uVar4;
    lStack_40 = lVar1 + 1;
  }
  pdb_14236afe0(param_1,pbStack_48,lStack_40,&UNK_1434da476,3);
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 << 4,8);
  }
  return param_1;
}

