// VA 0x140905300, PDB extent 279 bytes
// asset::texture::desc::impl$68::hash<turbosloth::id::Hash128>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::texture::desc::impl$68::hash<turbosloth::id::Hash128>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/texture/desc.rs
   Extent: 279 */

void pdb_140905300(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uStack_28;
  
  uVar1 = *param_1;
  uStack_28 = (ulonglong)uVar1;
  pdb_1417ca2e0(param_2,&uStack_28,8);
  if ((ulonglong)uVar1 == 1) {
    uStack_28 = 2;
    pdb_1417ca2e0(param_2,&uStack_28,8);
    pdb_1417ca2e0(param_2,param_1 + 1,8);
  }
  uStack_28 = (ulonglong)(byte)param_1[5];
  pdb_1417ca2e0(param_2,&uStack_28,8);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uStack_28 = (ulonglong)uVar1;
  pdb_1417ca2e0(param_2,&uStack_28,8);
  if ((ulonglong)uVar1 == 2) {
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    pdb_1417ca2e0(param_2,&uStack_28,4);
  }
  uStack_28 = (ulonglong)*(byte *)((longlong)param_1 + 0x17);
  pdb_1417ca2e0(param_2,&uStack_28,8);
  uStack_28 = (ulonglong)*(byte *)((longlong)param_1 + 0x15);
  pdb_1417ca2e0(param_2,&uStack_28,8);
  uStack_28 = (ulonglong)*(byte *)((longlong)param_1 + 0x16);
  pdb_1417ca2e0(param_2,&uStack_28,8);
  return;
}

