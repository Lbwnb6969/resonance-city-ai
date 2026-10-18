// VA 0x1402232f0, PDB extent 1079 bytes
// zip::write::GenericZipWriter::switch_to<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::GenericZipWriter::switch_to<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1079 */

undefined8 *
pdb_1402232f0(undefined8 *param_1,ulonglong *param_2,short param_3,short param_4,uint param_5,
             uint param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *arg0;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  byte *pbStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *param_2;
  uVar5 = 2;
  if ((longlong)uVar3 < 0) {
    uVar5 = uVar3 ^ 0x8000000000000000;
  }
  if (uVar5 == 0) {
    uVar1 = pdb_140f370c0(CONCAT71((int7)(uVar3 >> 8),0xb),&UNK_142e61ae8,0x1c);
    *param_1 = 0;
    param_1[1] = uVar1;
    return param_1;
  }
  if (uVar5 == 1) {
    if (param_3 == 0) goto LAB_1402236b6;
    *param_2 = 0x8000000000000000;
    uVar3 = param_2[1];
    arg0 = (byte *)param_2[2];
    uStack_58 = param_2[7];
    uStack_68 = param_2[5];
    uStack_60 = param_2[6];
    uStack_78 = param_2[3];
    uStack_70 = param_2[4];
    if (param_3 == 0) goto LAB_1402235b4;
LAB_140223396:
    if (param_3 != 1) {
      *param_1 = 2;
      if (param_4 == 99) {
        param_1[1] = &UNK_142e61b21;
        param_1[2] = 0x2c;
      }
      else {
        param_1[1] = &UNK_142e61b4d;
        param_1[2] = 0x17;
      }
      goto joined_r0x000140223621;
    }
    uStack_160 = (undefined4)uStack_78;
    uStack_15c = uStack_78._4_4_;
    uStack_158 = (undefined4)uStack_70;
    uStack_154 = uStack_70._4_4_;
    uStack_150 = (undefined4)uStack_68;
    uStack_14c = uStack_68._4_4_;
    uStack_148 = (undefined4)uStack_60;
    uStack_144 = uStack_60._4_4_;
    uStack_140 = uStack_58;
    uVar4 = 6;
    if ((param_5 & 1) != 0) {
      uVar4 = param_6;
    }
    uStack_170 = uVar3;
    pbStack_168 = arg0;
    if (9 < uVar4) {
      *param_1 = 2;
      *(undefined4 *)(param_1 + 1) = 0x42e61b04;
      *(undefined4 *)((longlong)param_1 + 0xc) = 1;
      uStack_1d0 = uVar3;
      goto LAB_1402235e8;
    }
    pdb_1400c4370(&uStack_1d8,&uStack_170);
    uStack_a8 = uStack_1c0;
    uStack_a0 = uStack_1b8;
    uStack_98 = uStack_1b0;
    uStack_90 = uStack_1a8;
    uStack_88 = uStack_1a0;
    uStack_138 = uStack_198;
    uStack_130 = uStack_190;
    uStack_128 = uStack_188;
    uStack_120 = uStack_180;
    uStack_118 = uStack_178;
    arg0 = pbStack_1c8;
  }
  else {
    if (param_3 == 1) goto LAB_1402236b6;
    *param_2 = 0x8000000000000000;
    uStack_108 = param_2[1];
    uStack_100 = param_2[2];
    uStack_f8 = param_2[3];
    pbStack_f0 = (byte *)param_2[4];
    uStack_e8 = (undefined4)param_2[5];
    uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_e0 = (undefined4)param_2[6];
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_d8 = param_2[7];
    uStack_d0 = (undefined4)param_2[8];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_c8 = (undefined4)param_2[9];
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_c0 = (undefined4)param_2[10];
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x54);
    uStack_b8 = (undefined4)param_2[0xb];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x5c);
    uStack_b0 = param_2[0xc];
    uStack_110 = uVar3;
    lVar2 = pdb_1406433f0(&uStack_110);
    arg0 = pbStack_f0;
    uVar3 = uStack_f8;
    if (lVar2 != 0) {
      pdb_1404ab470(&uStack_110);
      *param_1 = 0;
      param_1[1] = lVar2;
      return param_1;
    }
    uStack_f8 = 0x8000000000000001;
    if (uVar3 == 0x8000000000000001) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e3cf38);
    }
    uStack_78 = CONCAT44(uStack_e4,uStack_e8);
    uStack_70 = CONCAT44(uStack_dc,uStack_e0);
    uStack_68 = uStack_d8;
    uStack_60 = CONCAT44(uStack_cc,uStack_d0);
    uStack_58 = CONCAT44(uStack_c4,uStack_c8);
    pdb_1404ab470(&uStack_110);
    if (param_3 != 0) goto LAB_140223396;
LAB_1402235b4:
    uStack_1d0 = uVar3;
    if (param_5 != 0) {
      *param_1 = 2;
      param_1[1] = &UNK_142e61b04;
LAB_1402235e8:
      param_1[2] = 0x1d;
      uVar3 = uStack_1d0;
joined_r0x000140223621:
      if ((uVar3 & 0x7fffffffffffffff) == 0) {
        return param_1;
      }
      pub_1406abac0(arg0,uVar3,1);
      return param_1;
    }
    uStack_88 = uStack_58;
    uStack_98 = uStack_68;
    uStack_90 = uStack_60;
    uStack_a8 = uStack_78;
    uStack_a0 = uStack_70;
    uStack_1d8 = 0x8000000000000001;
  }
  *param_2 = uStack_1d8;
  param_2[1] = uStack_1d0;
  param_2[2] = (ulonglong)arg0;
  param_2[7] = uStack_88;
  param_2[5] = uStack_98;
  param_2[6] = uStack_90;
  param_2[3] = uStack_a8;
  param_2[4] = uStack_a0;
  param_2[8] = uStack_138;
  param_2[9] = uStack_130;
  param_2[10] = uStack_128;
  param_2[0xb] = uStack_120;
  param_2[0xc] = uStack_118;
LAB_1402236b6:
  *param_1 = 4;
  return param_1;
}

