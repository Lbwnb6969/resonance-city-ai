// VA 0x141c36f80, PDB extent 456 bytes
// asset_pipe::store::open
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::store::open
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/store.rs
   Extent: 456 */

void pdb_141c36f80(ulonglong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  ulonglong uStack_50;
  byte *pbStack_48;
  byte *pbStack_30;
  longlong *plStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_19 = 1;
  plStack_28 = param_2;
  pdb_141d3fca0(&uStack_70);
  pbStack_30 = pbStack_68;
  pdb_140f3e9e0(&uStack_50,pbStack_68,uStack_60,&UNK_1433a01f0,0x11);
  uVar3 = uStack_70;
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_30,uStack_70,1);
    uVar3 = uStack_70;
  }
  uVar1 = pdb_142625820(&uStack_50);
  uVar2 = pdb_142567d30(uVar1);
  if ((uVar2 & 1) == 0) {
    *param_1 = uVar3;
    param_1[1] = (ulonglong)plStack_28;
    if (uStack_50 != 0) {
      pub_1406abac0(pbStack_48,uStack_50,1);
      return;
    }
  }
  else {
    param_1[1] = uVar3;
    *param_1 = 0;
    if (uStack_50 != 0) {
      pub_1406abac0(pbStack_48,uStack_50,1);
    }
    LOCK();
    *plStack_28 = *plStack_28 + -1;
    UNLOCK();
    uStack_19 = 0;
    pdb_142d8feb0(plStack_28 + 1);
  }
  return;
}

