// VA 0x1428a1d30, PDB extent 109 bytes
// toolbar::mei::core::NodeContext::child<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::core::NodeContext::child<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 109 */

undefined8 pdb_1428a1d30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uStack_28 = param_3;
  uStack_20 = param_4;
  uStack_40 = pdb_14072aeb0(&uStack_28);
  uStack_38 = CONCAT44(_UNK_1435ad31c,_DAT_1435ad318);
  uStack_30 = _UNK_1435ad320;
  uStack_2c = _UNK_1435ad324;
  uStack_38 = pdb_142b38eb0(&uStack_40);
  uStack_40 = uVar1;
  uVar1 = pdb_142b39020(&uStack_40);
  pdb_14072caa0(param_1,param_2,uVar1);
  return param_1;
}

