// VA 0x140d926c0, PDB extent 226 bytes
// tg_mods::overlay::is_texture_source_image
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::is_texture_source_image
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 226 */

undefined8 pdb_140d926c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cStack_20;
  undefined7 uStack_1f;
  byte *pbStack_18;
  longlong lStack_10;
  
  lVar1 = pdb_140f3ec80();
  if ((lVar1 == 0) || (pdb_140f69110(&cStack_20,lVar1,param_2), cStack_20 != '\0')) {
    return 0;
  }
  pdb_140f5e900(&cStack_20,pbStack_18,lStack_10);
  if (lStack_10 == 4) {
    if (*(int *)pbStack_18 == 0x6765706a) {
      uVar2 = 1;
      if (CONCAT71(uStack_1f,cStack_20) == 0) {
        return 1;
      }
      goto LAB_140d9277c;
    }
LAB_140d9276c:
    uVar2 = 0;
  }
  else if ((lStack_10 != 3) ||
          (((uVar2 = 1, pbStack_18[2] != 0x67 || *(short *)pbStack_18 != 0x6e70 &&
            (pbStack_18[2] != 0x67 || *(short *)pbStack_18 != 0x706a)) &&
           (pbStack_18[2] != 0x73 || *(short *)pbStack_18 != 0x6464)))) goto LAB_140d9276c;
  if (CONCAT71(uStack_1f,cStack_20) == 0) {
    return uVar2;
  }
LAB_140d9277c:
  pub_1406abac0(pbStack_18,CONCAT71(uStack_1f,cStack_20),1);
  return uVar2;
}

