// VA 0x141dd87b0, PDB extent 353 bytes
// paths::ensure_path<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: paths::ensure_path<std::path::PathBuf>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
   Extent: 353 */

undefined8 * pdb_141dd87b0(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong *puStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pbStack_60 = (byte *)param_2[1];
  uVar1 = param_2[2];
  uStack_50 = 1;
  uStack_58 = uVar1;
  puStack_30 = param_2;
  pbStack_28 = pbStack_60;
  uVar2 = pdb_140f46c40(&uStack_50,pbStack_60,uVar1);
  lVar3 = pdb_1426eeab0(uVar2,&pbStack_60);
  if (lVar3 == 0) {
    pdb_140f3e010(&uStack_50,pbStack_28,uVar1);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x20,8);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    *(undefined8 *)(pbVar4 + 0x10) = uStack_40;
    *(undefined8 *)(pbVar4 + 0x18) = uStack_38;
    *(ulonglong *)pbVar4 = CONCAT71(uStack_4f,uStack_50);
    *(undefined8 *)(pbVar4 + 8) = uStack_48;
    uVar2 = *(undefined8 *)(pbVar4 + 0x10);
    *param_1 = *(undefined8 *)(pbVar4 + 8);
    param_1[1] = uVar2;
    uVar1 = *puStack_30;
  }
  else {
    param_1[1] = lVar3;
    *param_1 = 0;
    uVar1 = *puStack_30;
  }
  if (uVar1 != 0) {
    pub_1406abac0(pbStack_28,uVar1,1);
  }
  return param_1;
}

