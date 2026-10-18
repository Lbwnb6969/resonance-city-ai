// VA 0x1400c2f20, PDB extent 1930 bytes
// zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >,ref$<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::zip_writer::ZipWriter::start_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >,ref$<alloc::string::String> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1930 */

void pdb_1400c2f20(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar7;
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
  longlong lStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  ulonglong uStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined2 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  ulonglong *puStack_58;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  uVar5 = 0x81a40000;
  if (param_4[2] != 0) {
    uVar5 = param_4[3] << 0x10 | 0x80000000;
  }
  uStack_68 = *param_4;
  uStack_64 = param_4[1];
  puStack_58 = (ulonglong *)CONCAT44(puStack_58._4_4_,param_4[4]);
  uVar2 = *(undefined2 *)(param_4 + 8);
  uStack_4c = *(undefined2 *)((longlong)param_4 + 0x22);
  uVar3 = *(undefined8 *)(param_4 + 9);
  plStack_70 = (longlong *)CONCAT71(plStack_70._1_7_,*(undefined1 *)(param_4 + 0xb));
  plStack_60 = param_1;
  pdb_1400c36b0(&iStack_218);
  lVar6 = CONCAT44(uStack_214,iStack_218);
  if (lVar6 == 4) {
    if ((param_2[6] != -0x7fffffffffffffff) || (!SBORROW8(0,param_2[7]))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142e61a2a,0x73,&UNK_142e61ad0);
    }
    lVar6 = param_2[9];
    pdb_140f60be0(&uStack_158,param_3);
    uStack_af = 0x2e03;
    uStack_b2 = SUB81(puStack_58,0);
    uStack_b1 = 0;
    uStack_be = uStack_4c;
    uStack_f8 = uStack_68;
    uStack_f4 = uStack_64;
    uStack_bc = 0;
    uStack_140 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    pbStack_138 = (byte *)0x1;
    uStack_130 = 0;
    uStack_128 = 0;
    pbStack_120 = (byte *)0x1;
    uStack_118 = 0;
    uStack_110 = 0;
    pbStack_108 = (byte *)0x1;
    uStack_100 = 0;
    uStack_d0 = 0;
    lStack_c8 = 0;
    uStack_b0 = plStack_70._0_1_;
    uStack_b3 = 2;
    uStack_49 = 1;
    uStack_f0 = uVar3;
    lStack_d8 = lVar6;
    uStack_c0 = uVar2;
    uStack_b8 = uVar5;
    pdb_140222a10(&iStack_218,param_2 + 8,&uStack_158);
    lVar6 = CONCAT44(uStack_214,iStack_218);
    if (lVar6 == 4) {
      lStack_c8 = param_2[9];
      param_2[0x15] = lStack_c8;
      param_2[0x16] = 0;
      uStack_49 = 1;
      pdb_140dbfa40(&iStack_218);
      *(int *)(param_2 + 0x13) = iStack_218;
      *(undefined4 *)((longlong)param_2 + 0x9c) = uStack_214;
      *(undefined4 *)(param_2 + 0x14) = uStack_210;
      *(undefined4 *)((longlong)param_2 + 0xa4) = uStack_20c;
      pub_142e32760(&iStack_218,&uStack_158,0xb0);
      lVar6 = param_2[2];
      if (lVar6 == *param_2) {
        pdb_142d91cc0(param_2);
      }
      puVar1 = (ulonglong *)(param_2 + 6);
      pub_142e32760(lVar6 * 0xb0 + param_2[1],&iStack_218,0xb0);
      param_2[2] = lVar6 + 1;
      if ((int)puStack_58 == 1) {
        uStack_78 = param_4[7];
        lStack_80 = *(longlong *)(param_4 + 5);
        lStack_1b8 = param_2[0x12];
        lStack_1c8 = param_2[0x10];
        lStack_1c0 = param_2[0x11];
        lStack_1d8 = param_2[0xe];
        lStack_1d0 = param_2[0xf];
        iStack_218 = (int)*puVar1;
        uStack_214 = *(undefined4 *)((longlong)param_2 + 0x34);
        uVar4 = *puVar1;
        uStack_210 = (undefined4)param_2[7];
        uStack_20c = *(undefined4 *)((longlong)param_2 + 0x3c);
        lVar6 = param_2[7];
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
        if ((uVar4 != 0x8000000000000001) || (!SBORROW8(0,lVar6))) {
          plStack_60 = (longlong *)uVar4;
          puStack_58 = (ulonglong *)lVar6;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_142e61a2a,0x73,&UNK_142e61ab8);
        }
        uStack_a8 = 0;
        uStack_a0 = 1;
        lStack_98 = 0;
        uStack_4a = 1;
        uVar7 = 0;
        uStack_90 = uStack_208;
        uStack_8c = uStack_204;
        uStack_88 = uStack_200;
        uStack_84 = uStack_1fc;
        pdb_142d7f1b0(&uStack_a8,0,0xc,1,1);
        plStack_70 = param_2 + 7;
        *(undefined4 *)(uStack_a0 + 8 + lStack_98) = 0;
        *(undefined8 *)(uStack_a0 + lStack_98) = 0;
        lStack_98 = lStack_98 + 0xc;
        uVar4 = 2;
        if ((longlong)*puVar1 < 0) {
          uVar4 = *puVar1 ^ 0x8000000000000000;
        }
        puStack_58 = puVar1;
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar4 = param_2[7];
            if ((!SBORROW8(0,uVar4)) && (uVar4 != 0)) {
              pub_1406abac0((byte *)param_2[8],uVar4,1);
            }
          }
          else {
            pdb_1404ab470(param_2 + 6);
          }
        }
        param_2[6] = -0x7fffffffffffffff;
        param_2[0xd] = CONCAT44(uStack_74,uStack_78);
        param_2[0xb] = CONCAT44(uStack_84,uStack_88);
        param_2[0xc] = lStack_80;
        param_2[9] = lStack_98;
        param_2[10] = CONCAT44(uStack_8c,uStack_90);
        *(undefined4 *)(param_2 + 7) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_a8._4_4_;
        *(undefined4 *)(param_2 + 8) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)param_2 + 0x44) = uStack_a0._4_4_;
      }
      pdb_1402232f0(&iStack_218,param_2 + 6,uVar2,uStack_4c,CONCAT44(uVar7,uStack_68),uStack_64);
      if (iStack_218 == 4) {
        *(undefined1 *)(param_2 + 0x17) = 1;
        *plStack_60 = 4;
        return;
      }
      plStack_60[2] = CONCAT44(uStack_204,uStack_208);
      *plStack_60 = CONCAT44(uStack_214,iStack_218);
      plStack_60[1] = CONCAT44(uStack_20c,uStack_210);
      return;
    }
    lStack_168 = CONCAT44(uStack_20c,uStack_210);
    lStack_160 = CONCAT44(uStack_204,uStack_208);
    if (uStack_158 != 0) {
      pub_1406abac0(pbStack_150,uStack_158,1);
    }
    if (uStack_140 != 0) {
      pub_1406abac0(pbStack_138,uStack_140,1);
    }
    if (uStack_128 != 0) {
      pub_1406abac0(pbStack_120,uStack_128,1);
    }
    if (uStack_110 != 0) {
      pub_1406abac0(pbStack_108,uStack_110,1);
    }
  }
  else {
    lStack_168 = CONCAT44(uStack_20c,uStack_210);
    lStack_160 = CONCAT44(uStack_204,uStack_208);
  }
  *plStack_60 = lVar6;
  plStack_60[1] = lStack_168;
  plStack_60[2] = lStack_160;
  return;
}

