// VA 0x140734440, PDB extent 169 bytes
// toolbar::mei::widgets::impl$27::label
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::label
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 169 */

undefined8 *
pdb_140734440(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3;
  uStack_30 = param_4;
  uStack_50 = pdb_140bbbcb0(&uStack_38);
  uStack_48 = CONCAT44(_UNK_14329c264,_DAT_14329c260);
  uStack_40 = _UNK_14329c268;
  uStack_3c = _UNK_14329c26c;
  uStack_48 = pdb_1400affa0(&uStack_50);
  uStack_50 = *(undefined8 *)(param_2 + 8);
  uVar1 = pdb_1400b0130(&uStack_50);
  pdb_14072caa0(&uStack_50,param_2,uVar1);
  uVar1 = pdb_14116ee90(&uStack_50,0);
  pdb_14119b6b0(uVar1,param_3,param_4);
  param_1[2] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = uStack_50;
  param_1[1] = uStack_48;
  return param_1;
}

