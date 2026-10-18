// VA 0x1426d8b30, PDB extent 750 bytes
// ddsfile::header10::Header10::read<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ddsfile::header10::Header10::read<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 750 */

longlong * pdb_1426d8b30(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  param_2 = (longlong *)*param_2;
  lVar6 = *param_2;
  uVar7 = param_2[1];
  uVar9 = *(ulonglong *)(lVar6 + 0x10);
  uVar10 = uVar7;
  if (uVar9 < uVar7) {
    uVar10 = uVar9;
  }
  if (uVar9 - uVar10 < 4) {
    param_2[1] = uVar9;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar6 + 8) + uVar10);
    uVar9 = uVar7 + 4;
    param_2[1] = uVar9;
    uVar10 = *(ulonglong *)(lVar6 + 0x10);
    if (uVar10 < uVar9) {
      uVar9 = uVar10;
    }
    if (3 < uVar10 - uVar9) {
      uVar2 = *(uint *)(*(longlong *)(lVar6 + 8) + uVar9);
      uVar9 = uVar7 + 8;
      param_2[1] = uVar9;
      uVar10 = *(ulonglong *)(lVar6 + 0x10);
      if (uVar10 < uVar9) {
        uVar9 = uVar10;
      }
      if (3 < uVar10 - uVar9) {
        uVar3 = *(uint *)(*(longlong *)(lVar6 + 8) + uVar9);
        uVar9 = uVar7 + 0xc;
        param_2[1] = uVar9;
        uVar10 = *(ulonglong *)(lVar6 + 0x10);
        if (uVar10 < uVar9) {
          uVar9 = uVar10;
        }
        if (3 < uVar10 - uVar9) {
          uVar4 = *(undefined4 *)(*(longlong *)(lVar6 + 8) + uVar9);
          uVar9 = uVar7 + 0x10;
          param_2[1] = uVar9;
          uVar10 = *(ulonglong *)(lVar6 + 0x10);
          if (uVar10 < uVar9) {
            uVar9 = uVar10;
          }
          if (3 < uVar10 - uVar9) {
            uVar5 = *(uint *)(*(longlong *)(lVar6 + 8) + uVar9);
            param_2[1] = uVar7 + 0x14;
            iVar8 = pdb_1426d90c0(uVar1);
            if (iVar8 == 0x85) {
              pdb_1426d8e90(&lStack_98);
            }
            else {
              lStack_98 = 8;
              iStack_90 = iVar8;
            }
            if (uVar2 < 5) {
              uStack_50 = CONCAT31(uStack_50._1_3_,(char)uVar2);
              uStack_58 = 8;
            }
            else {
              pdb_1426d8f00(&uStack_b8);
              uStack_48 = (undefined1)uStack_a8;
              uStack_47 = (undefined4)((ulonglong)uStack_a8 >> 8);
              uStack_43._0_3_ = (undefined3)((ulonglong)uStack_a8 >> 0x28);
              uStack_43._3_1_ = (undefined1)uStack_a0;
              uStack_3f = (undefined7)((ulonglong)uStack_a0 >> 8);
              uStack_58 = CONCAT44(uStack_b4,uStack_b8);
              uStack_50 = uStack_b0;
              uStack_4c = uStack_ac;
            }
            if (uVar5 < 5) {
              uStack_70 = (undefined1)uVar5;
              lStack_78 = 8;
            }
            else {
              pdb_1426d8e20(&uStack_b8);
              lStack_78 = CONCAT44(uStack_b4,uStack_b8);
              uStack_68 = (undefined1)uStack_a8;
              uStack_67 = (undefined7)((ulonglong)uStack_a8 >> 8);
              uStack_60 = (undefined1)uStack_a0;
              uStack_5f = (undefined7)((ulonglong)uStack_a0 >> 8);
              uStack_70 = (undefined1)uStack_b0;
              uStack_6f = (undefined7)(CONCAT44(uStack_ac,uStack_b0) >> 8);
            }
            if (lStack_98 != 8) {
              *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_7c;
              *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
              *(undefined4 *)(param_1 + 2) = uStack_88;
              *(undefined4 *)((longlong)param_1 + 0x14) = uStack_84;
              *(undefined4 *)(param_1 + 3) = uStack_80;
              *param_1 = lStack_98;
              *(int *)(param_1 + 1) = iStack_90;
              pdb_1417dc400(&lStack_78);
              pdb_1417dc400(&uStack_58);
              return param_1;
            }
            if (uStack_58 != 8) {
              param_1[3] = CONCAT71(uStack_3f,uStack_43._3_1_);
              *(uint *)((longlong)param_1 + 9) = CONCAT13((undefined1)uStack_4c,uStack_50._1_3_);
              *(uint *)((longlong)param_1 + 0xd) = CONCAT13(uStack_48,uStack_4c._1_3_);
              *(undefined4 *)((longlong)param_1 + 0x11) = uStack_47;
              *(undefined4 *)((longlong)param_1 + 0x15) = uStack_43;
              *param_1 = uStack_58;
              *(undefined1 *)(param_1 + 1) = (undefined1)uStack_50;
              pdb_1417dc400(&lStack_78);
              return param_1;
            }
            if (lStack_78 == 8) {
              *(int *)(param_1 + 1) = iStack_90;
              *(uint *)((longlong)param_1 + 0xc) = uVar3 & 4;
              *(undefined4 *)(param_1 + 2) = uVar4;
              *(undefined1 *)((longlong)param_1 + 0x14) = (undefined1)uStack_50;
              *(undefined1 *)((longlong)param_1 + 0x15) = uStack_70;
              *param_1 = 8;
              return param_1;
            }
            param_1[3] = CONCAT71(uStack_5f,uStack_60);
            *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_68,uStack_6f);
            *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_60,uStack_67);
            *param_1 = lStack_78;
            *(undefined1 *)(param_1 + 1) = uStack_70;
            return param_1;
          }
        }
      }
    }
    param_2[1] = uVar10;
  }
  *param_1 = 1;
  param_1[1] = (longlong)&UNK_143585028;
  return param_1;
}

