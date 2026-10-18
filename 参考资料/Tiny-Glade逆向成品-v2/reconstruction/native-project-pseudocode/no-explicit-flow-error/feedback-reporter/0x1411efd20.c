// VA 0x1411efd20, PDB extent 2042 bytes
// zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >,ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 2042 */

longlong *
pdb_1411efd20(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
             undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_fffffffffffffdc8;
  undefined4 uVar9;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
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
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  ulonglong uStack_178;
  byte *pbStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined2 uStack_cf;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined2 uStack_4e;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  if (param_5[2] == 0) {
    param_5[3] = 0x1a4;
    uVar6 = 0x81a40000;
  }
  else {
    uVar6 = param_5[3] << 0x10 | 0x80000000;
  }
  uStack_60 = *param_5;
  uStack_5c = param_5[1];
  lStack_58 = CONCAT44(lStack_58._4_4_,param_5[4]);
  uStack_68 = CONCAT62(uStack_68._2_6_,*(undefined2 *)(param_5 + 8));
  uStack_4e = *(undefined2 *)((longlong)param_5 + 0x22);
  uVar2 = *(undefined8 *)(param_5 + 9);
  uStack_4b = *(undefined1 *)(param_5 + 0xb);
  uStack_c8 = param_3;
  pdb_1411f0520(&iStack_228,param_2);
  lVar5 = CONCAT44(uStack_224,iStack_228);
  if (lVar5 == 4) {
    if ((param_2[6] != -0x7fffffffffffffff) || (!SBORROW8(0,param_2[7]))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3e08);
    }
    if (-1 < (longlong)param_4) {
      lStack_f8 = param_2[9];
      plStack_c0 = param_1;
      plStack_b0 = param_2 + 6;
      plStack_a8 = param_2 + 7;
      if (param_4 == 0) {
        pbVar3 = (byte *)0x1;
      }
      else {
        lStack_b8 = lStack_f8;
        pdb_14007ee60();
        lVar5 = 1;
        pbVar3 = pub_1406abab0(param_4,1);
        if (pbVar3 == (byte *)0x0) goto LAB_1411efe16;
        pub_142e32760(pbVar3,uStack_c8,param_4);
        lStack_f8 = lStack_b8;
      }
      uStack_cf = 0x2e03;
      uStack_d2 = (undefined1)lStack_58;
      uStack_d1 = 0;
      uStack_e0 = (undefined2)uStack_68;
      uStack_de = uStack_4e;
      uStack_118 = uStack_60;
      uStack_114 = uStack_5c;
      uStack_dc = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_160 = 0;
      pbStack_158 = (byte *)0x1;
      uStack_150 = 0;
      uStack_148 = 0;
      pbStack_140 = (byte *)0x1;
      uStack_138 = 0;
      uStack_130 = 0;
      pbStack_128 = (byte *)0x1;
      uStack_120 = 0;
      uStack_f0 = 0;
      lStack_e8 = 0;
      uStack_d0 = uStack_4b;
      uStack_d3 = 2;
      uStack_49 = 1;
      uStack_178 = param_4;
      pbStack_170 = pbVar3;
      uStack_168 = param_4;
      uStack_110 = uVar2;
      uStack_d8 = uVar6;
      pdb_140222a10(&iStack_228,param_2 + 8,&uStack_178);
      param_1 = plStack_c0;
      lVar5 = CONCAT44(uStack_224,iStack_228);
      if (lVar5 == 4) {
        lStack_e8 = param_2[9];
        param_2[0x15] = lStack_e8;
        param_2[0x16] = 0;
        uStack_49 = 1;
        pdb_140dbfa40(&iStack_228);
        *(int *)(param_2 + 0x13) = iStack_228;
        *(undefined4 *)((longlong)param_2 + 0x9c) = uStack_224;
        *(undefined4 *)(param_2 + 0x14) = uStack_220;
        *(undefined4 *)((longlong)param_2 + 0xa4) = uStack_21c;
        pub_142e32760(&iStack_228,&uStack_178,0xb0);
        lVar5 = param_2[2];
        if (lVar5 == *param_2) {
          pdb_142d91cc0(param_2);
        }
        pub_142e32760(lVar5 * 0xb0 + param_2[1],&iStack_228,0xb0);
        param_2[2] = lVar5 + 1;
        puVar1 = (ulonglong *)(param_2 + 6);
        if ((int)lStack_58 == 1) {
          uStack_70 = param_5[7];
          lStack_78 = *(longlong *)(param_5 + 5);
          lStack_1c8 = param_2[0x12];
          lStack_1d8 = param_2[0x10];
          lStack_1d0 = param_2[0x11];
          lStack_1e8 = param_2[0xe];
          lStack_1e0 = param_2[0xf];
          iStack_228 = (int)*puVar1;
          uStack_224 = *(undefined4 *)((longlong)param_2 + 0x34);
          uVar4 = *puVar1;
          uStack_220 = (undefined4)param_2[7];
          uStack_21c = *(undefined4 *)((longlong)param_2 + 0x3c);
          lVar5 = param_2[7];
          uStack_218 = (undefined4)param_2[8];
          uStack_214 = *(undefined4 *)((longlong)param_2 + 0x44);
          uStack_210 = (undefined4)param_2[9];
          uStack_20c = *(undefined4 *)((longlong)param_2 + 0x4c);
          uStack_208 = (undefined4)param_2[10];
          uStack_204 = *(undefined4 *)((longlong)param_2 + 0x54);
          uStack_200 = (undefined4)param_2[0xb];
          uStack_1fc = *(undefined4 *)((longlong)param_2 + 0x5c);
          uStack_1f8 = (undefined4)param_2[0xc];
          uStack_1f4 = *(undefined4 *)((longlong)param_2 + 100);
          uStack_1f0 = (undefined4)param_2[0xd];
          uStack_1ec = *(undefined4 *)((longlong)param_2 + 0x6c);
          *puVar1 = 0x8000000000000000;
          if ((uVar4 != 0x8000000000000001) || (!SBORROW8(0,lVar5))) {
            uStack_68 = uVar4;
            lStack_58 = lVar5;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3df0);
          }
          uStack_a0 = 0;
          uStack_98 = 1;
          lStack_90 = 0;
          uStack_4a = 1;
          uVar9 = 0;
          uStack_88 = uStack_218;
          uStack_84 = uStack_214;
          uStack_80 = uStack_210;
          uStack_7c = uStack_20c;
          pdb_142d7f1b0(&uStack_a0,0,0xc,1,1);
          *(undefined4 *)(uStack_98 + 8 + lStack_90) = 0;
          *(undefined8 *)(uStack_98 + lStack_90) = 0;
          lStack_90 = lStack_90 + 0xc;
          uVar4 = 2;
          if ((longlong)*puVar1 < 0) {
            uVar4 = *puVar1 ^ 0x8000000000000000;
          }
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              uVar4 = param_2[7];
              if ((!SBORROW8(0,uVar4)) && (uVar4 != 0)) {
                pub_1406abac0((byte *)param_2[8],uVar4,1);
              }
            }
            else {
              pdb_1411daf60(param_2 + 6);
            }
          }
          param_2[6] = -0x7fffffffffffffff;
          param_2[0xd] = CONCAT44(uStack_6c,uStack_70);
          param_2[0xb] = CONCAT44(uStack_7c,uStack_80);
          param_2[0xc] = lStack_78;
          param_2[9] = lStack_90;
          param_2[10] = CONCAT44(uStack_84,uStack_88);
          *(undefined4 *)(param_2 + 7) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_a0._4_4_;
          *(undefined4 *)(param_2 + 8) = (undefined4)uStack_98;
          *(undefined4 *)((longlong)param_2 + 0x44) = uStack_98._4_4_;
        }
        pdb_1423aa1e0(&iStack_228,param_2 + 6,uStack_68 & 0xffff,uStack_4e,CONCAT44(uVar9,uStack_60)
                      ,uStack_5c);
        if (iStack_228 == 4) {
          *(undefined1 *)(param_2 + 0x17) = 1;
          *param_1 = 4;
          return param_1;
        }
        param_1[2] = CONCAT44(uStack_214,uStack_218);
        *param_1 = CONCAT44(uStack_224,iStack_228);
        param_1[1] = CONCAT44(uStack_21c,uStack_220);
        return param_1;
      }
      lVar7 = CONCAT44(uStack_21c,uStack_220);
      lVar8 = CONCAT44(uStack_214,uStack_218);
      if (uStack_178 != 0) {
        pub_1406abac0(pbStack_170,uStack_178,1);
      }
      if (uStack_160 != 0) {
        pub_1406abac0(pbStack_158,uStack_160,1);
      }
      if (uStack_148 != 0) {
        pub_1406abac0(pbStack_140,uStack_148,1);
      }
      if (uStack_130 != 0) {
        pub_1406abac0(pbStack_128,uStack_130,1);
      }
      goto LAB_1411efe29;
    }
    lVar5 = 0;
LAB_1411efe16:
    pdb_142dc7e2a(lVar5,param_4);
  }
  lVar7 = CONCAT44(uStack_21c,uStack_220);
  lVar8 = CONCAT44(uStack_214,uStack_218);
LAB_1411efe29:
  *param_1 = lVar5;
  param_1[1] = lVar7;
  param_1[2] = lVar8;
  return param_1;
}

