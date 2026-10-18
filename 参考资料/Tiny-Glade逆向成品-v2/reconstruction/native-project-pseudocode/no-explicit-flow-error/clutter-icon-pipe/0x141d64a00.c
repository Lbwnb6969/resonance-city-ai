// VA 0x141d64a00, PDB extent 862 bytes
// ddsfile::Dds::read<ref_mut$<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ddsfile::Dds::read<ref_mut$<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 862 */

undefined8 * pdb_141d64a00(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  longlong *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar2 = param_2[1];
  uVar3 = *(ulonglong *)(*param_2 + 0x10);
  uVar12 = uVar2;
  if (uVar3 < uVar2) {
    uVar12 = uVar3;
  }
  if (uVar3 - uVar12 < 4) {
    param_2[1] = uVar3;
    param_1[1] = 1;
    param_1[2] = &UNK_143585028;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(*param_2 + 8) + uVar12);
    param_2[1] = uVar2 + 4;
    if (iVar1 == 0x20534444) {
      plStack_40 = param_2;
      pdb_1426d85e0(&iStack_120,&plStack_40);
      uVar8 = uStack_10c;
      uVar7 = uStack_110;
      uVar6 = uStack_114;
      uVar5 = uStack_118;
      uVar4 = uStack_11c;
      iVar1 = iStack_120;
      if (iStack_120 == 2) {
        uVar10 = CONCAT44(iStack_fc,uStack_100);
        param_1[3] = CONCAT44(uStack_104,uStack_108);
        param_1[1] = CONCAT44(uStack_114,uStack_118);
        param_1[2] = CONCAT44(uStack_10c,uStack_110);
LAB_141d64abc:
        param_1[4] = uVar10;
        *param_1 = 0x8000000000000000;
        return param_1;
      }
      uStack_58 = uStack_10c;
      uStack_54 = CONCAT44(uStack_104,uStack_108);
      uStack_60 = uStack_114;
      uVar13 = 0x85;
      if ((iStack_fc == 0x30315844 & (byte)uStack_100) == 1) {
        pdb_1426d8b30(&iStack_120,&plStack_40);
        uStack_60 = uStack_10c;
        if (CONCAT44(uStack_11c,iStack_120) != 8) {
          uVar10 = CONCAT44(uStack_104,uStack_108);
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_10c;
          *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(uStack_110,uStack_114);
          param_1[1] = CONCAT44(uStack_11c,iStack_120);
          *(undefined4 *)(param_1 + 2) = uStack_118;
          goto LAB_141d64abc;
        }
        uStack_78 = CONCAT44(uStack_110,uStack_114);
        uStack_70 = uStack_10c;
        uVar13 = uStack_118;
      }
      iStack_120 = 0;
      uStack_11c = 0;
      uStack_118 = 1;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      piVar11 = &iStack_120;
      lVar9 = pdb_141ee9820(plStack_40);
      if (lVar9 != 1) {
        param_1[2] = CONCAT44(uStack_10c,uStack_110);
        *param_1 = CONCAT44(uStack_11c,iStack_120);
        param_1[1] = CONCAT44(uStack_114,uStack_118);
        param_1[5] = CONCAT44(uVar8,uVar7);
        param_1[6] = uStack_54;
        *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uVar5,uVar4);
        *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(uVar7,uVar6);
        param_1[8] = uStack_f8;
        param_1[9] = uStack_f0;
        param_1[10] = uStack_e8;
        param_1[0xb] = uStack_e0;
        param_1[0xc] = uStack_d8;
        param_1[0xd] = uStack_d0;
        param_1[0xe] = uStack_c8;
        param_1[0xf] = uStack_c0;
        param_1[0x10] = uStack_b8;
        param_1[0x11] = uStack_b0;
        param_1[0x12] = uStack_a8;
        param_1[0x13] = uStack_a0;
        param_1[0x14] = uStack_98;
        param_1[0x15] = uStack_90;
        param_1[0x16] = uStack_88;
        param_1[0x17] = uStack_80;
        *(undefined8 *)((longlong)param_1 + 0xc4) = uStack_78;
        *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_70;
        *(int *)(param_1 + 3) = iVar1;
        *(undefined4 *)(param_1 + 7) = uStack_100;
        *(int *)((longlong)param_1 + 0x3c) = iStack_fc;
        *(undefined4 *)(param_1 + 0x18) = uVar13;
        return param_1;
      }
      param_1[1] = 1;
      param_1[2] = piVar11;
      *param_1 = 0x8000000000000000;
      if (CONCAT44(uStack_11c,iStack_120) == 0) {
        return param_1;
      }
      pub_1406abac0((byte *)CONCAT44(uStack_114,uStack_118),CONCAT44(uStack_11c,iStack_120),1);
      return param_1;
    }
    param_1[1] = 3;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}

