// VA 0x140d9d440, PDB extent 190 bytes
// asset_pipe::texture::impl$8::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::impl$8::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 190 */

void pdb_140d9d440(longlong param_1,uint *param_2,int *param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 uVar5;
  
  if (*(ulonglong *)(param_1 + 0x20) < 9) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    param_3[0] = -1;
    param_3[1] = -1;
    pub_142e32760(param_3,uVar2);
  }
  else {
    uVar1 = *param_2;
    uVar4 = (uint)*(ulonglong *)(param_1 + 0x20);
    *param_3 = (uVar4 & 0x3f) + (uVar4 & 0xffffffc0) * 4 + 0x80;
    lVar3 = uVar1 - param_4;
    uVar5 = lVar3 < 0;
    if (param_4 <= uVar1) goto LAB_140d9d498;
    if (!(bool)uVar5) {
      do {
        lVar3 = pdb_142dffb20();
LAB_140d9d498:
      } while ((bool)uVar5);
    }
    param_3[1] = (int)lVar3;
  }
  pdb_141c36ef0(param_1,param_3 + 4,(longlong)param_3 + (param_4 - (longlong)param_3) + 0x10);
  pdb_141db1d20(param_1 + 0x28,*(undefined8 *)(param_2 + 1),param_3 + 8,
                (longlong)param_3 + (param_4 - (longlong)param_3) + 0x20);
  *(undefined1 *)(param_3 + 0xf) = *(undefined1 *)((longlong)param_2 + 10);
  return;
}

