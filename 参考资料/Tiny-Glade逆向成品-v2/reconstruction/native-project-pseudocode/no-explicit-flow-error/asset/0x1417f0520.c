// VA 0x1417f0520, PDB extent 63 bytes
// asset::texture::impl$3::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::impl$3::resolve
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture.rs
   Extent: 63 */

void pdb_1417f0520(longlong param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
                  longlong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  *param_4 = param_3;
  uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  lVar3 = (param_2 & 0xffffffff) - (param_5 + 4U);
  uVar4 = lVar3 < 0;
  if (param_5 + 4U <= (param_2 & 0xffffffff)) goto LAB_1417f0542;
  if (!(bool)uVar4) {
    do {
      uVar2 = pdb_142e03660();
LAB_1417f0542:
    } while ((bool)uVar4);
  }
  if ((int)lVar3 == lVar3) {
    *(int *)(param_4 + 4) = (int)lVar3;
    *(undefined4 *)(param_4 + 8) = uVar2;
    return;
  }
  pdb_142e03620();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

