// VA 0x1417fc630, PDB extent 577 bytes
// turbosloth::store::read_packaged_asset<clutter_pack_pipe::ClutterMeshAsset,ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::read_packaged_asset<clutter_pack_pipe::ClutterMeshAsset,ref$<std::path::PathBuf>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 577 */

ulonglong * pdb_1417fc630(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uStack_120;
  byte *pbStack_118;
  ulonglong uStack_110;
  undefined1 auStack_108 [176];
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  byte *pbStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  pdb_141c2d570(&uStack_120,param_3,param_4);
  pbStack_30 = pbStack_118;
  pdb_140f3e9e0(&uStack_58,uVar1,uVar2,pbStack_118,uStack_110);
  if (uStack_120 != 0) {
    pub_1406abac0(pbStack_30,uStack_120,1);
  }
  pbStack_30 = pbStack_50;
  pdb_140f55fb0(&uStack_120,pbStack_50,uStack_48);
  if (uStack_58 != 0) {
    pub_1406abac0(pbStack_30,uStack_58,1);
  }
  if (SBORROW8(0,uStack_120)) {
    param_1[1] = (ulonglong)pbStack_118;
    *param_1 = 0x8000000000000000;
  }
  else {
    pbStack_30 = (byte *)uStack_120;
    pbStack_38 = pbStack_118;
    pdb_1414dcec0(&uStack_120,pbStack_118,uStack_110);
    if (SBORROW8(0,uStack_120)) {
      uVar3 = pdb_140f3fdf0(0x28,1,&UNK_143071248);
      param_1[1] = uVar3;
      *param_1 = 0x8000000000000000;
    }
    else {
      pub_142e32760(param_1 + 3,auStack_108,0xb0);
      *param_1 = uStack_120;
      param_1[1] = (ulonglong)pbStack_118;
      param_1[2] = uStack_110;
    }
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_38,(ulonglong)pbStack_30,1);
    }
  }
  return param_1;
}

