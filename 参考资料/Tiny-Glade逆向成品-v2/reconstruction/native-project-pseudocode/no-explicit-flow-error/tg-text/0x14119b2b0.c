// VA 0x14119b2b0, PDB extent 177 bytes
// tg_text::TextFragment::set_metrics<f32>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_metrics<f32>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 177 */

void pdb_14119b2b0(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fVar2 = (float)pdb_140cb5910(param_2);
  if ((fVar2 == *(float *)(param_1 + 0x240)) && (!NAN(fVar2) && !NAN(*(float *)(param_1 + 0x240))))
  {
    if ((param_2 == *(float *)(param_1 + 0x244)) &&
       (!NAN(param_2) && !NAN(*(float *)(param_1 + 0x244)))) {
      return;
    }
  }
  fStack_48 = fVar2;
  fStack_44 = param_2;
  lVar1 = pdb_140cb8d90(*(longlong *)(param_1 + 0x230) + 0x10,*(undefined1 *)(param_1 + 0x255));
  if (lVar1 != 0) {
    pdb_140cb8d70(auStack_40,lVar1,&fStack_48);
    pdb_140cb5ec0(param_1,uStack_30,uStack_2c);
    *(float *)(param_1 + 0x240) = fVar2;
    *(float *)(param_1 + 0x244) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14329fbe0);
}

