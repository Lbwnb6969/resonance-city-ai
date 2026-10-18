// VA 0x140af7230, PDB extent 134 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::DrawLists::sort
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::DrawLists::sort
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 134 */

void pdb_140af7230(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lVar3 = 0x10;
  do {
    while( true ) {
      uVar1 = *(undefined8 *)(param_1 + -8 + lVar3);
      uVar2 = *(ulonglong *)(param_1 + lVar3);
      if (1 < uVar2) break;
      lVar3 = lVar3 + 0x18;
      if (lVar3 == 0x220) {
        return;
      }
    }
    puStack_28 = &uStack_29;
    if (uVar2 < 0x15) {
      pdb_14151b1c0(uVar1,uVar2,1,&puStack_28);
    }
    else {
      pdb_140c75360(uVar1,uVar2,&puStack_28);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x220);
  return;
}

