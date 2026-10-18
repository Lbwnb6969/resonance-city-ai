// VA 0x140b78570, PDB extent 374 bytes
// turbosloth::util::normalize_file_path<ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::util::normalize_file_path<ref$<std::path::PathBuf> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 374 */

ulonglong * pdb_140b78570(ulonglong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  cVar3 = pdb_140f3dec0(uVar1,uVar2);
  if (cVar3 == '\0') {
    pdb_140f4c140(&uStack_58);
    if (SBORROW8(0,uStack_58)) {
      param_1[1] = (ulonglong)pbStack_50;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    pbStack_30 = (byte *)uStack_58;
    pbStack_38 = pbStack_50;
    pdb_140f3e9e0(&uStack_78,pbStack_50,uStack_48,uVar1,uVar2);
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_38,(ulonglong)pbStack_30,1);
    }
  }
  else {
    pdb_140f3e010(&uStack_78,uVar1,uVar2);
  }
  pbStack_30 = pbStack_70;
  pdb_141c5da90(&uStack_58,pbStack_70,uStack_68);
  param_1[2] = uStack_48;
  param_1[3] = uStack_40;
  *param_1 = uStack_58;
  param_1[1] = (ulonglong)pbStack_50;
  if (uStack_78 != 0) {
    pub_1406abac0(pbStack_30,uStack_78,1);
  }
  return param_1;
}

