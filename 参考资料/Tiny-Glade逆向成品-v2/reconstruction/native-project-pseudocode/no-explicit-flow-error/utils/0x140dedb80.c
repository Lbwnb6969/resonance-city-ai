// VA 0x140dedb80, PDB extent 235 bytes
// utils::natural_cubic::Spline3D::to_owned
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::natural_cubic::Spline3D::to_owned
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 235 */

ulonglong * pdb_140dedb80(ulonglong *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  ulonglong *arg0;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = *param_2;
  pbVar1 = (byte *)param_2[1];
  uVar5 = param_2[2];
  pbVar3 = pbVar1;
  if (SBORROW8(0,uVar4)) {
    arg0 = (ulonglong *)(uVar5 << 6);
    if (arg0 < (ulonglong *)0x7ffffffffffffffd && uVar5 >> 0x3a == 0) goto LAB_140dedbdb;
    puVar2 = (ulonglong *)0x0;
    do {
      param_1 = puVar2;
      param_2 = arg0;
      pdb_142dc7e2a();
LAB_140dedbdb:
      if (arg0 == (ulonglong *)0x0) {
        pbVar3 = (byte *)0x4;
        uVar4 = 0;
        break;
      }
      pdb_14007ee60();
      pbVar3 = pub_1406abab0((ulonglong)arg0,4);
      puVar2 = (ulonglong *)0x4;
      uVar4 = uVar5;
    } while (pbVar3 == (byte *)0x0);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      pub_142e32760(pbVar3,pbVar1,arg0);
    }
  }
  *param_1 = uVar4;
  param_1[1] = (ulonglong)pbVar3;
  param_1[2] = uVar5;
  param_1[3] = param_2[3];
  return param_1;
}

