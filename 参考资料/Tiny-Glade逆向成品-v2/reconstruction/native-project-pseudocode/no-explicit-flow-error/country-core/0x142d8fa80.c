// VA 0x142d8fa80, PDB extent 76 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::build_draw_lists::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::build_draw_lists::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 76 */

void pdb_142d8fa80(longlong param_1)

{
  longlong lVar1;
  undefined4 *puStack_20;
  code *pcStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  lVar1 = pdb_140e72a60(param_1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x18);
  uStack_10 = *(undefined4 *)(lVar1 + 0xe8);
  uStack_c = *(undefined4 *)(lVar1 + 0xec);
  uStack_8 = *(undefined4 *)(lVar1 + 0xf0);
  uStack_4 = *(undefined4 *)(lVar1 + 0xf4);
  puStack_20 = &uStack_10;
  pcStack_18 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430512d8,&puStack_20,&UNK_143051328);
}

