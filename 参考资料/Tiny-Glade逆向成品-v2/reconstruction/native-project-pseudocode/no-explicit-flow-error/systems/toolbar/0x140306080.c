// VA 0x140306080, PDB extent 222 bytes
// toolbar::mei::core::NodeContext::child<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::core::NodeContext::child<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 222 */

undefined8 pdb_140306080(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_38 = param_3;
  uStack_50 = pdb_1407361c0(param_3);
  uStack_48 = CONCAT44(_UNK_142f5faf4,_DAT_142f5faf0);
  uStack_40 = _UNK_142f5faf8;
  uStack_3c = _UNK_142f5fafc;
  uVar1 = pdb_1400affa0(&uStack_50);
  if (*puStack_38 != 0) {
    pub_1406abac0((byte *)puStack_38[1],*puStack_38,1);
  }
  uStack_50 = uVar2;
  uStack_48 = uVar1;
  uVar2 = pdb_1400b0130(&uStack_50);
  pdb_14072caa0(param_1,param_2,uVar2);
  return param_1;
}

