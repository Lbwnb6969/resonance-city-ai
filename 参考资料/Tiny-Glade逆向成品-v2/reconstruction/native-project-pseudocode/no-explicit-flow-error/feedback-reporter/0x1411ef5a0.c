// VA 0x1411ef5a0, PDB extent 1914 bytes
// zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >,ref$<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >,ref$<alloc::string::String> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 1914 */

void pdb_1411ef5a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar10;
  int iStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_160;
  byte *pbStack_158;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong *puStack_78;
  longlong *plStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *plStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  uVar8 = 0x81a40000;
  if (param_4[2] != 0) {
    uVar8 = param_4[3] << 0x10 | 0x80000000;
  }
  uStack_60 = *param_4;
  uStack_5c = param_4[1];
  iVar3 = param_4[4];
  uVar2 = *(undefined2 *)(param_4 + 8);
  uStack_68 = CONCAT62(uStack_68._2_6_,*(undefined2 *)((longlong)param_4 + 0x22));
  uVar4 = *(undefined8 *)(param_4 + 9);
  puStack_78 = (ulonglong *)CONCAT71(puStack_78._1_7_,*(undefined1 *)(param_4 + 0xb));
  plStack_70 = param_3;
  plStack_58 = param_1;
  pdb_1411f0520(&iStack_218);
  lVar9 = CONCAT44(uStack_214,iStack_218);
  if (lVar9 == 4) {
    if ((param_2[6] != -0x7fffffffffffffff) || (!SBORROW8(0,param_2[7]))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3e08);
    }
    lVar9 = param_2[9];
    pdb_140f60be0(&uStack_160,plStack_70);
    uStack_b7 = 0x2e03;
    uStack_ba = (undefined1)iVar3;
    uStack_b9 = 0;
    uStack_c6 = (undefined2)uStack_68;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    uStack_c4 = 0;
    uStack_148 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    pbStack_140 = (byte *)0x1;
    uStack_138 = 0;
    uStack_130 = 0;
    pbStack_128 = (byte *)0x1;
    uStack_120 = 0;
    uStack_118 = 0;
    pbStack_110 = (byte *)0x1;
    uStack_108 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    uStack_b8 = puStack_78._0_1_;
    uStack_bb = 2;
    uStack_49 = 1;
    uStack_f8 = uVar4;
    lStack_e0 = lVar9;
    uStack_c8 = uVar2;
    uStack_c0 = uVar8;
    pdb_140222a10(&iStack_218,param_2 + 8,&uStack_160);
    lVar9 = CONCAT44(uStack_214,iStack_218);
    if (lVar9 == 4) {
      lStack_d0 = param_2[9];
      param_2[0x15] = lStack_d0;
      param_2[0x16] = 0;
      uStack_49 = 1;
      pdb_140dbfa40(&iStack_218);
      *(int *)(param_2 + 0x13) = iStack_218;
      *(undefined4 *)((longlong)param_2 + 0x9c) = uStack_214;
      *(undefined4 *)(param_2 + 0x14) = uStack_210;
      *(undefined4 *)((longlong)param_2 + 0xa4) = uStack_20c;
      pub_142e32760(&iStack_218,&uStack_160,0xb0);
      lVar9 = param_2[2];
      if (lVar9 == *param_2) {
        pdb_142d91cc0(param_2);
      }
      puVar1 = (ulonglong *)(param_2 + 6);
      pub_142e32760(lVar9 * 0xb0 + param_2[1],&iStack_218,0xb0);
      param_2[2] = lVar9 + 1;
      if (iVar3 == 1) {
        uStack_80 = param_4[7];
        lStack_88 = *(longlong *)(param_4 + 5);
        lStack_1b8 = param_2[0x12];
        lStack_1c8 = param_2[0x10];
        lStack_1c0 = param_2[0x11];
        lStack_1d8 = param_2[0xe];
        lStack_1d0 = param_2[0xf];
        iStack_218 = (int)*puVar1;
        uStack_214 = *(undefined4 *)((longlong)param_2 + 0x34);
        uVar5 = *puVar1;
        uStack_210 = (undefined4)param_2[7];
        uStack_20c = *(undefined4 *)((longlong)param_2 + 0x3c);
        lVar9 = param_2[7];
        uStack_208 = (undefined4)param_2[8];
        uStack_204 = *(undefined4 *)((longlong)param_2 + 0x44);
        uStack_200 = (undefined4)param_2[9];
        uStack_1fc = *(undefined4 *)((longlong)param_2 + 0x4c);
        uStack_1f8 = (undefined4)param_2[10];
        uStack_1f4 = *(undefined4 *)((longlong)param_2 + 0x54);
        uStack_1f0 = (undefined4)param_2[0xb];
        uStack_1ec = *(undefined4 *)((longlong)param_2 + 0x5c);
        uStack_1e8 = (undefined4)param_2[0xc];
        uStack_1e4 = *(undefined4 *)((longlong)param_2 + 100);
        uStack_1e0 = (undefined4)param_2[0xd];
        uStack_1dc = *(undefined4 *)((longlong)param_2 + 0x6c);
        *puVar1 = 0x8000000000000000;
        if ((uVar5 != 0x8000000000000001) || (!SBORROW8(0,lVar9))) {
          uStack_68 = lVar9;
          plStack_58 = (longlong *)uVar5;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3df0);
        }
        uStack_b0 = 0;
        uStack_a8 = 1;
        lStack_a0 = 0;
        uStack_4a = 1;
        uVar10 = 0;
        uStack_98 = uStack_208;
        uStack_94 = uStack_204;
        uStack_90 = uStack_200;
        uStack_8c = uStack_1fc;
        pdb_142d7f1b0(&uStack_b0,0,0xc,1,1);
        plStack_70 = param_2 + 7;
        *(undefined4 *)(uStack_a8 + 8 + lStack_a0) = 0;
        *(undefined8 *)(uStack_a8 + lStack_a0) = 0;
        lStack_a0 = lStack_a0 + 0xc;
        uVar5 = 2;
        if ((longlong)*puVar1 < 0) {
          uVar5 = *puVar1 ^ 0x8000000000000000;
        }
        puStack_78 = puVar1;
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            uVar5 = param_2[7];
            if ((!SBORROW8(0,uVar5)) && (uVar5 != 0)) {
              pub_1406abac0((byte *)param_2[8],uVar5,1);
            }
          }
          else {
            pdb_1411daf60(param_2 + 6);
          }
        }
        param_2[6] = -0x7fffffffffffffff;
        param_2[0xd] = CONCAT44(uStack_7c,uStack_80);
        param_2[0xb] = CONCAT44(uStack_8c,uStack_90);
        param_2[0xc] = lStack_88;
        param_2[9] = lStack_a0;
        param_2[10] = CONCAT44(uStack_94,uStack_98);
        *(undefined4 *)(param_2 + 7) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_b0._4_4_;
        *(undefined4 *)(param_2 + 8) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)param_2 + 0x44) = uStack_a8._4_4_;
      }
      pdb_1423aa1e0(&iStack_218,param_2 + 6,uVar2,uStack_68 & 0xffff,CONCAT44(uVar10,uStack_60),
                    uStack_5c);
      if (iStack_218 == 4) {
        *(undefined1 *)(param_2 + 0x17) = 1;
        *plStack_58 = 4;
        return;
      }
      plStack_58[2] = CONCAT44(uStack_204,uStack_208);
      *plStack_58 = CONCAT44(uStack_214,iStack_218);
      plStack_58[1] = CONCAT44(uStack_20c,uStack_210);
      return;
    }
    lVar7 = CONCAT44(uStack_20c,uStack_210);
    lVar6 = CONCAT44(uStack_204,uStack_208);
    if (uStack_160 != 0) {
      pub_1406abac0(pbStack_158,uStack_160,1);
    }
    if (uStack_148 != 0) {
      pub_1406abac0(pbStack_140,uStack_148,1);
    }
    if (uStack_130 != 0) {
      pub_1406abac0(pbStack_128,uStack_130,1);
    }
    if (uStack_118 != 0) {
      pub_1406abac0(pbStack_110,uStack_118,1);
    }
  }
  else {
    lVar7 = CONCAT44(uStack_20c,uStack_210);
    lVar6 = CONCAT44(uStack_204,uStack_208);
  }
  *plStack_58 = lVar9;
  plStack_58[1] = lVar7;
  plStack_58[2] = lVar6;
  return;
}

