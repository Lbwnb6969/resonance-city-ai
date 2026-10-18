// VA 0x142623b40, PDB extent 461 bytes
// turbosloth::util::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::util::_::impl$0::serialize<ref_mut$<bincode::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 461 */

longlong pdb_142623b40(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = pdb_142a84f40(param_1 + 8);
  if (lVar6 == 0) {
    auVar7[0] = -((char)*param_1 == DAT_14300c7d0);
    auVar7[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14300c7d1);
    auVar7[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14300c7d2);
    auVar7[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14300c7d3);
    auVar7[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14300c7d4);
    auVar7[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14300c7d5);
    auVar7[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14300c7d6);
    auVar7[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14300c7d7);
    auVar7[8] = -((char)param_1[1] == UNK_14300c7d8);
    auVar7[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14300c7d9);
    auVar7[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14300c7da);
    auVar7[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14300c7db);
    auVar7[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14300c7dc);
    auVar7[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14300c7dd);
    auVar7[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14300c7de);
    auVar7[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14300c7df);
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        != 0xffff) {
      uVar1 = *param_1;
      plVar2 = (longlong *)*param_2;
      lVar6 = plVar2[2];
      if ((ulonglong)(*plVar2 - lVar6) < 4) {
        pdb_142d7f1b0(plVar2,lVar6,4,1,1);
        lVar6 = plVar2[2];
      }
      *(undefined4 *)(plVar2[1] + lVar6) = 0;
      plVar2[2] = lVar6 + 4;
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      plVar2 = (longlong *)*param_2;
      lVar6 = plVar2[2];
      if ((ulonglong)(*plVar2 - lVar6) < 0x10) {
        pdb_142d7f1b0(plVar2,lVar6,0x10,1,1);
        lVar6 = plVar2[2];
      }
      lVar5 = plVar2[1];
      *(ulonglong *)(lVar5 + 8 + lVar6) = uVar4;
      *(ulonglong *)(lVar5 + lVar6) = uVar3;
      plVar2[2] = lVar6 + 0x10;
      uVar3 = param_1[4];
      plVar2 = (longlong *)*param_2;
      lVar6 = plVar2[2];
      if ((ulonglong)(*plVar2 - lVar6) < 8) {
        pdb_142d7f1b0(plVar2,lVar6,8,1,1);
        lVar6 = plVar2[2];
      }
      *(ulonglong *)(plVar2[1] + lVar6) = uVar3;
      plVar2[2] = lVar6 + 8;
      if ((uVar1 & 1) != 0) {
        param_2 = (longlong *)*param_2;
        lVar6 = param_2[2];
        if (*param_2 == lVar6) {
          pdb_142d7f1b0(param_2,lVar6,1,1,1);
          lVar6 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + lVar6) = 1;
        lVar6 = lVar6 + 1;
        param_2[2] = lVar6;
        uVar1 = param_1[2];
        uVar3 = param_1[3];
        if ((ulonglong)(*param_2 - lVar6) < 0x10) {
          pdb_142d7f1b0(param_2,lVar6,0x10,1,1);
          lVar6 = param_2[2];
        }
        lVar5 = param_2[1];
        *(ulonglong *)(lVar5 + 8 + lVar6) = uVar3;
        *(ulonglong *)(lVar5 + lVar6) = uVar1;
        param_2[2] = lVar6 + 0x10;
        return 0;
      }
      param_2 = (longlong *)*param_2;
      lVar6 = param_2[2];
      if (*param_2 == lVar6) {
        pdb_142d7f1b0(param_2,lVar6,1,1,1);
        lVar6 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + lVar6) = 0;
      param_2[2] = lVar6 + 1;
      return 0;
    }
    param_2 = (longlong *)*param_2;
    lVar6 = param_2[2];
    if ((ulonglong)(*param_2 - lVar6) < 4) {
      pdb_142d7f1b0(param_2,lVar6,4,1,1);
      lVar6 = param_2[2];
    }
    *(undefined4 *)(param_2[1] + lVar6) = 1;
    param_2[2] = lVar6 + 4;
    lVar6 = 0;
  }
  return lVar6;
}

