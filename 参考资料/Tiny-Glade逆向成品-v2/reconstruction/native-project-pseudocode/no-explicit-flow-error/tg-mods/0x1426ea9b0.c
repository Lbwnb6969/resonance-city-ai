// VA 0x1426ea9b0, PDB extent 298 bytes
// zip::read::find_content<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::read::find_content<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
   Extent: 298 */

longlong * pdb_1426ea9b0(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar4 = *(ulonglong *)(param_2 + 0x80);
  uVar5 = *(ulonglong *)(param_3 + 0x10);
  uVar9 = uVar4;
  if (uVar5 < uVar4) {
    uVar9 = uVar5;
  }
  if (3 < uVar5 - uVar9) {
    lVar8 = *(longlong *)(param_3 + 8);
    iVar3 = *(int *)(lVar8 + uVar9);
    *(ulonglong *)(param_3 + 0x18) = uVar4 + 4;
    if (iVar3 != 0x4034b50) {
      param_1[1] = 1;
      param_1[2] = (longlong)&UNK_143586f60;
      param_1[3] = 0x19;
      *param_1 = 0;
      return param_1;
    }
    uVar9 = uVar4 + 0x1a;
    if (uVar9 < uVar4 + 4) {
      puVar6 = &UNK_143586ef0;
      goto LAB_1426ea9e8;
    }
    if (uVar5 < uVar9) {
      uVar9 = uVar5;
    }
    if (1 < uVar5 - uVar9) {
      uVar7 = uVar4 + 0x1c;
      if (uVar5 < uVar4 + 0x1c) {
        uVar7 = uVar5;
      }
      if (1 < uVar5 - uVar7) {
        uVar1 = *(ushort *)(lVar8 + uVar9);
        uVar2 = *(ushort *)(lVar8 + uVar7);
        *(ulonglong *)(param_3 + 0x18) = uVar4 + 0x1e;
        lVar8 = uVar4 + uVar1 + 0x1e + (ulonglong)uVar2;
        pdb_1417ca890(param_2 + 0x90,lVar8);
        *(longlong *)(param_3 + 0x18) = lVar8;
        lVar8 = *(longlong *)(param_2 + 0x70);
        *param_1 = param_3;
        param_1[1] = (longlong)&UNK_143586f08;
        param_1[2] = lVar8;
        param_1[3] = lVar8;
        return param_1;
      }
    }
  }
  *(ulonglong *)(param_3 + 0x18) = uVar5;
  puVar6 = &UNK_143586e60;
LAB_1426ea9e8:
  param_1[2] = (longlong)puVar6;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

