// VA 0x141ee9c60, PDB extent 301 bytes
// zip::read::find_content<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::read::find_content<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 301 */

undefined8 * pdb_141ee9c60(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar4 = *(ulonglong *)(param_2 + 0x80);
  uVar5 = *(ulonglong *)(*param_3 + 0x10);
  uVar8 = uVar4;
  if (uVar5 < uVar4) {
    uVar8 = uVar5;
  }
  if (3 < uVar5 - uVar8) {
    lVar10 = *(longlong *)(*param_3 + 8);
    iVar3 = *(int *)(lVar10 + uVar8);
    param_3[1] = uVar4 + 4;
    if (iVar3 != 0x4034b50) {
      param_1[1] = 1;
      param_1[2] = &UNK_1434264b8;
      param_1[3] = 0x19;
      *param_1 = 0;
      return param_1;
    }
    uVar8 = uVar4 + 0x1a;
    if (uVar8 < uVar4 + 4) {
      puVar7 = &UNK_143426448;
      goto LAB_141ee9c9b;
    }
    if (uVar5 < uVar8) {
      uVar8 = uVar5;
    }
    if (1 < uVar5 - uVar8) {
      uVar9 = uVar4 + 0x1c;
      if (uVar5 < uVar4 + 0x1c) {
        uVar9 = uVar5;
      }
      if (1 < uVar5 - uVar9) {
        uVar1 = *(ushort *)(lVar10 + uVar8);
        uVar2 = *(ushort *)(lVar10 + uVar9);
        param_3[1] = uVar4 + 0x1e;
        lVar10 = uVar4 + uVar1 + 0x1e + (ulonglong)uVar2;
        pdb_1417ca890(param_2 + 0x90,lVar10);
        param_3[1] = lVar10;
        uVar6 = *(undefined8 *)(param_2 + 0x70);
        *param_1 = param_3;
        param_1[1] = &UNK_143426460;
        param_1[2] = uVar6;
        param_1[3] = uVar6;
        return param_1;
      }
    }
  }
  param_3[1] = uVar5;
  puVar7 = &UNK_1434263b8;
LAB_141ee9c9b:
  param_1[2] = puVar7;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

