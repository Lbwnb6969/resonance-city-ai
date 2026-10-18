// VA 0x142ad73b0, PDB extent 590 bytes
// png::decoder::ReadDecoder::decode_next<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::decoder::ReadDecoder::decode_next<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 590 */

void pdb_142ad73b0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  byte bStack_47;
  undefined2 uStack_46;
  
  if (*(char *)(param_2 + 0x208) == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 0x1e0);
    uVar4 = *(ulonglong *)(param_2 + 0x1e8);
    do {
      lVar7 = *(longlong *)(param_2 + 0x1d0);
      uVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1 || uVar5 == 0) {
        uVar1 = *(ulonglong *)(param_2 + 0x200);
        uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x1f8) + 0x10);
        uVar2 = uVar1;
        if (uVar4 < uVar1) {
          uVar2 = uVar4;
        }
        uVar6 = *(ulonglong *)(param_2 + 0x1f0);
        uVar5 = uVar4 - uVar2;
        if (*(ulonglong *)(param_2 + 0x1d8) <= uVar4 - uVar2) {
          uVar5 = *(ulonglong *)(param_2 + 0x1d8);
        }
        pub_142e32760(lVar7,uVar2 + *(longlong *)(*(longlong *)(param_2 + 0x1f8) + 8),uVar5);
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        *(ulonglong *)(param_2 + 0x200) = uVar1 + uVar5;
        *(undefined8 *)(param_2 + 0x1e0) = 0;
        *(ulonglong *)(param_2 + 0x1e8) = uVar5;
        *(ulonglong *)(param_2 + 0x1f0) = uVar6;
        if (uVar5 == 0) {
          *(undefined8 *)(param_1 + 2) = 1;
          *(undefined1 *)(param_1 + 4) = 2;
          *param_1 = 1;
          return;
        }
      }
      else {
        if (lVar7 == 0) {
          *(undefined8 *)(param_1 + 2) = 0;
          *(ulonglong *)(param_1 + 4) = uVar5;
          *param_1 = 1;
          return;
        }
        lVar7 = lVar7 + uVar1;
      }
      pdb_140dbaa70(&lStack_68,param_2,lVar7,uVar5,param_3);
      if (bStack_47 == 0xd) {
        *(ulonglong *)(param_1 + 8) =
             CONCAT35((undefined3)uStack_4b,CONCAT41(uStack_4f,uStack_53._3_1_));
        *(undefined8 *)(param_1 + 4) = uStack_60;
        *(ulonglong *)(param_1 + 6) = CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,uStack_58));
        *(longlong *)(param_1 + 2) = lStack_68;
        *param_1 = 1;
        return;
      }
      uVar1 = lStack_68 + *(longlong *)(param_2 + 0x1e0);
      uVar4 = *(ulonglong *)(param_2 + 0x1e8);
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      *(ulonglong *)(param_2 + 0x1e0) = uVar1;
      cVar3 = bStack_47 - 2;
      if (bStack_47 < 2) {
        cVar3 = '\x06';
      }
      if (cVar3 != '\0') {
        if (cVar3 != '\n') {
          *(ulonglong *)((longlong)param_1 + 0xd) = CONCAT44(uStack_53,uStack_57);
          *(ulonglong *)((longlong)param_1 + 0x15) = CONCAT44(uStack_4b,uStack_4f);
          *(undefined8 *)(param_1 + 1) = uStack_60;
          *(ulonglong *)(param_1 + 3) =
               CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,uStack_58));
          *(byte *)((longlong)param_1 + 0x1d) = bStack_47;
          *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_46;
          goto LAB_142ad73da;
        }
        *(undefined1 *)(param_2 + 0x208) = 1;
        break;
      }
    } while (*(char *)(param_2 + 0x208) == '\0');
  }
  *(undefined1 *)((longlong)param_1 + 0x1d) = 0xd;
LAB_142ad73da:
  *param_1 = 0;
  return;
}

