// VA 0x140cb6900, PDB extent 76 bytes
// tg_text::TextRenderer::font_faces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextRenderer::font_faces
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 76 */

void pdb_140cb6900(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x28);
  param_1[3] = (ulonglong)*(uint *)(param_2 + 0x34);
  *param_1 = (ulonglong)(lVar2 != 0) * 0x80 + lVar1;
  param_1[1] = lVar2 * 0x80 + lVar1;
  param_1[2] = (ulonglong)(lVar2 != 0);
  param_1[4] = 0;
  param_1[6] = 0;
  return;
}

