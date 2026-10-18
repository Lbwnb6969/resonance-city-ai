// VA 0x140163f10, PDB extent 255 bytes
// toolbar::mei::widgets::tweaker::impl$7::format<tiny_glade::gui::settings::DisplayMode>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$7::format<tiny_glade::gui::settings::DisplayMode>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 255 */

undefined8 * pdb_140163f10(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_38 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  uStack_40 = 0x60000020;
  puStack_50 = &uStack_38;
  puStack_48 = &UNK_142e4c178;
  if (*(char *)*param_2 == '\x01') {
    uVar3 = 0x1e;
    uVar2 = pdb_140dc6290(&UNK_142f4548e,0x1e);
  }
  else {
    uVar3 = 0x1c;
    uVar2 = pdb_140dc6290(&UNK_142f45472,0x1c);
  }
  cVar1 = pdb_140f679a0(&puStack_50,uVar2,uVar3);
  if (cVar1 == '\0') {
    param_1[2] = uStack_28;
    *param_1 = uStack_38;
    param_1[1] = uStack_30;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_19,&UNK_142e4c298,&UNK_142e4c250);
}

