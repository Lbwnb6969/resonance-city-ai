// VA 0x140a1aa80, PDB extent 503 bytes
// country_core::resources::history::wall_compound_edit::CompoundEditBuilder::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::CompoundEditBuilder::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 503 */

void pdb_140a1aa80(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined8 auStack_138 [32];
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(8,8);
  uStack_38 = param_2;
  pbStack_30 = pbVar4;
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pub_142e32760(auStack_138,param_2,0x100);
  uStack_148 = 1;
  pbStack_140 = (byte *)0x1;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x110,0x10);
  if (pbVar5 != (byte *)0x0) {
    pub_142e32760(pbVar5,&uStack_148,0x110);
    *(byte **)pbVar4 = pbVar5;
    uStack_148 = 1;
    auStack_138[0] = 1;
    lVar2 = param_1[2];
    pbStack_140 = pbVar4;
    if (lVar2 == *param_1) {
      pdb_142d7e830(param_1);
    }
    lVar3 = param_1[1];
    *(undefined8 *)(lVar3 + 0x10 + lVar2 * 0x18) = auStack_138[0];
    puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x18);
    *puVar1 = uStack_148;
    puVar1[1] = pbStack_140;
    param_1[2] = lVar2 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x110);
}

