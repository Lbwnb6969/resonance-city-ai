// VA 0x14297ab80, PDB extent 132 bytes
// toolbar::ui_interaction::ui_nav_update::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::ui_nav_update::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 132 */

bool pdb_14297ab80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int *piStack_10;
  
  iStack_48 = 0;
  uStack_3c = 0x7f7fffff;
  uStack_38 = param_1[1];
  uStack_30 = param_1[2];
  uStack_28 = *(undefined4 *)(param_1 + 3);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_20 = *(undefined4 *)(param_1 + 4);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x24);
  puStack_18 = &uStack_3c;
  piStack_10 = &iStack_48;
  pdb_142388030(*(undefined8 *)*param_1,param_2,param_3,&uStack_38);
  if (iStack_48 != 0) {
    plVar1 = (longlong *)param_1[5];
    *(undefined4 *)plVar1[2] = *(undefined4 *)((longlong)plVar1 + 0x1c);
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(ulonglong *)(lVar2 + 0x18) = CONCAT44(uStack_44,iStack_48);
  }
  return iStack_48 != 0;
}

