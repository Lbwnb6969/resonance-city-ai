// VA 0x140737780, PDB extent 340 bytes
// toolbar::mei::config::load_font_table
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::config::load_font_table
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 340 */

undefined8 pdb_140737780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  byte *pbStack_28;
  byte *pbStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_58 = param_2;
  uStack_50 = param_3;
  pdb_140d929f0(&uStack_48);
  pbStack_20 = pbStack_40;
  pdb_140f55d10(auStack_88,pbStack_40,uStack_38);
  pdb_1411d9a60(&uStack_70,auStack_88,&uStack_48);
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_20,uStack_48,1);
  }
  pbStack_20 = (byte *)uStack_70;
  if (!SBORROW8(0,uStack_70)) {
    uStack_38 = 0;
    uStack_48 = 1;
    pbStack_40 = (byte *)0x80;
    pbStack_28 = pbStack_68;
    pdb_1411d9c50(param_1,&uStack_48,pbStack_68,uStack_60);
    if (pbStack_20 != (byte *)0x0) {
      pub_1406abac0(pbStack_28,(ulonglong)pbStack_20,1);
    }
    return param_1;
  }
  pdb_142d8a8f0(&uStack_58,pbStack_68);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

