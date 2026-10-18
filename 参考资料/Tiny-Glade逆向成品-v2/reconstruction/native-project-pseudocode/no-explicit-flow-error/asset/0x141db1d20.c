// VA 0x141db1d20, PDB extent 117 bytes
// asset::texture::desc::impl$69::resolve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::desc::impl$69::resolve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 117 */

void pdb_141db1d20(longlong param_1,ulonglong param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
  }
  *(bool *)param_3 = bVar1;
  *(byte *)(param_3 + 0xc) = (byte)(param_2 >> 8) & 1;
  if ((char)(param_2 >> 0x20) == '\0') {
    *(undefined1 *)(param_3 + 0x10) = 0;
  }
  else if (((uint)(param_2 >> 0x20) & 0xff) == 1) {
    *(undefined1 *)(param_3 + 0x10) = 1;
  }
  else {
    *(undefined1 *)(param_3 + 0x10) = 2;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  *(char *)(param_3 + 0x18) = (char)(param_2 >> 0x28);
  *(byte *)(param_3 + 0x19) = (byte)(param_2 >> 0x10) & 1;
  *(byte *)(param_3 + 0x1a) = (byte)(param_2 >> 0x18) & 1;
  return;
}

