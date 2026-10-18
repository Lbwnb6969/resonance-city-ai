// VA 0x140d9d400, PDB extent 50 bytes
// asset_pipe::texture::impl$16::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::impl$16::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 50 */

void pdb_140d9d400(longlong param_1,ulonglong param_2,int *param_3,ulonglong param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  lVar3 = (param_2 & 0xffffffff) - param_4;
  uVar4 = lVar3 < 0;
  if (param_4 <= (param_2 & 0xffffffff)) goto LAB_140d9d416;
  if (!(bool)uVar4) {
    do {
      iVar2 = pdb_142dffb20();
LAB_140d9d416:
    } while ((bool)uVar4);
  }
  if ((int)lVar3 == lVar3) {
    *param_3 = (int)lVar3;
    param_3[1] = iVar2;
    return;
  }
  pdb_142dffb60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

