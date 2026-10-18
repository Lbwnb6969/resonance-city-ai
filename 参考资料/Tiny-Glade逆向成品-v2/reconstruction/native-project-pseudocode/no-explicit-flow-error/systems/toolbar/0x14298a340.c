// VA 0x14298a340, PDB extent 102 bytes
// toolbar::resouces_and_components::taffy_layout::TaffyLayout::style
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::resouces_and_components::taffy_layout::TaffyLayout::style
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
   Extent: 102 */

undefined8 pdb_14298a340(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pdb_1411bdcb0(&iStack_48,param_1,param_2,param_3);
  if (iStack_48 == 4) {
    return CONCAT44(uStack_3c,uStack_40);
  }
  uStack_18 = uStack_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  iStack_28 = iStack_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_28,&UNK_1436088c0,&UNK_143608ae0);
}

