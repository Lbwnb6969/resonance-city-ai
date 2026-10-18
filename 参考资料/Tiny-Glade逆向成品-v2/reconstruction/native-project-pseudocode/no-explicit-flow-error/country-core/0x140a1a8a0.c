// VA 0x140a1a8a0, PDB extent 436 bytes
// country_core::resources::history::wall_compound_edit::CompoundEditBuilder::with_concurrent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::CompoundEditBuilder::with_concurrent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 436 */

void pdb_140a1a8a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [264];
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 0x10) * 0x18 + *(longlong *)(param_1 + 8);
  uStack_29 = lVar3 + -0x18 == 0 || *(longlong *)(param_1 + 0x10) == 0;
  uStack_40 = param_2;
  if ((bool)uStack_29) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430372e0);
  }
  pub_142e32760(auStack_148,param_2,0x100);
  pbStack_158 = (byte *)0x1;
  uStack_150 = 1;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x110,0x10);
  if (pbVar2 != (byte *)0x0) {
    pub_142e32760(pbVar2,&pbStack_158,0x110);
    lVar1 = *(longlong *)(lVar3 + -8);
    pbStack_38 = pbVar2;
    if (lVar1 == *(longlong *)(lVar3 + -0x18)) {
      pbStack_158 = pbVar2;
      pdb_142d7e8a0(lVar3 + -0x18);
    }
    *(byte **)(*(longlong *)(lVar3 + -0x10) + lVar1 * 8) = pbStack_38;
    *(longlong *)(lVar3 + -8) = lVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x110);
}

