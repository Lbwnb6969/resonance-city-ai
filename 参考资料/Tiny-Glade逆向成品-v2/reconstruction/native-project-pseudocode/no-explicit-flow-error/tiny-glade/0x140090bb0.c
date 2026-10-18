// VA 0x140090bb0, PDB extent 2035 bytes
// tiny_glade::icc::get_monitor_icc_profile
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/icc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::icc::get_monitor_icc_profile
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/icc.rs
   Extent: 2035 */

undefined8 * pdb_140090bb0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *arg0;
  undefined8 uVar7;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  byte *pbStack_78;
  uint uStack_6c;
  byte *pbStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140747860(&uStack_e8,*param_2);
  if ((char)uStack_e8 != '\0') {
    pdb_1404b38e0(&uStack_e0);
    uVar7 = pdb_142d877a0(&UNK_142e38bf5,0x20);
    param_1[1] = uVar7;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  uStack_138 = uStack_84;
  uStack_148 = uStack_94;
  uStack_140 = uStack_8c;
  uStack_158 = uStack_a4;
  uStack_150 = uStack_9c;
  uStack_168 = uStack_b8._4_4_;
  uStack_164 = uStack_b0;
  uStack_160 = uStack_ac;
  uStack_15c = uStack_a8;
  uStack_178 = uStack_c8._4_4_;
  uStack_174 = (undefined4)uStack_c0;
  uStack_170 = uStack_c0._4_4_;
  uStack_16c = (undefined4)uStack_b8;
  uStack_188 = uStack_d8._4_4_;
  uStack_184 = (undefined4)uStack_d0;
  uStack_180 = uStack_d0._4_4_;
  uStack_17c = (undefined4)uStack_c8;
  uStack_198 = (byte *)CONCAT44((undefined4)uStack_e0,uStack_e8._4_4_);
  uStack_190 = (byte *)CONCAT44((undefined4)uStack_d8,uStack_e0._4_4_);
  pdb_140747640(&uStack_e8,&uStack_170,0x20);
  pbStack_48 = uStack_e0;
  pdb_140f5fd10(&iStack_110,uStack_e0,uStack_d8);
  arg0 = pbStack_100;
  pbStack_50 = (byte *)CONCAT44(uStack_104,uStack_108);
  if ((longlong)pbStack_100 < 0) {
    uVar7 = 0;
LAB_140090c6d:
    pdb_142dc7e2a(uVar7,arg0);
LAB_140091105:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pbStack_100 == (byte *)0x0) {
    pbVar3 = (byte *)0x1;
    uVar4 = CONCAT44(uStack_10c,iStack_110);
  }
  else {
    pdb_14007ee60();
    uVar7 = 1;
    pbVar3 = pub_1406abab0((ulonglong)arg0,1);
    if (pbVar3 == (byte *)0x0) goto LAB_140090c6d;
    pub_142e32760(pbVar3,pbStack_50,arg0);
    uVar4 = CONCAT44(uStack_10c,iStack_110);
  }
  if (0 < (longlong)uVar4) {
    pub_1406abac0(pbStack_50,uVar4,1);
  }
  if (uStack_e8 != (byte *)0x0) {
    pub_1406abac0(pbStack_48,(ulonglong)uStack_e8,1);
  }
  pbStack_68 = arg0;
  pbStack_78 = pbVar3;
  if (arg0 < (byte *)0x10) {
    if (arg0 == (byte *)0x0) {
      uVar4 = 0;
      arg0 = (byte *)0x0;
    }
    else {
      uVar4 = 0;
      pbVar6 = (byte *)0x0;
      do {
        if (pbVar3[(longlong)pbVar6] == 0) {
          uVar4 = 1;
          arg0 = pbVar6;
          break;
        }
        pbVar6 = pbVar6 + 1;
      } while (arg0 != pbVar6);
    }
  }
  else {
    uStack_39 = 0;
    uVar4 = pdb_140f69320(0,pbVar3,arg0);
    arg0 = pbVar3;
  }
  uStack_e8 = pbStack_68;
  uStack_e0 = pbStack_78;
  uStack_d8 = pbStack_68;
  if ((uVar4 & 1) != 0) {
    uStack_d0 = arg0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e38fb0,0x2b,&uStack_e8,&UNK_142e38f90,&UNK_142e38ba0);
  }
  uStack_39 = 1;
  pbVar6 = (byte *)pdb_140f60480(&uStack_e8);
  uVar7 = pub_142e31e30(pbVar6,0,0,0);
  pdb_14007ee60();
  pbVar3 = pub_1406abae0(0x800,1);
  pbStack_50 = pbVar6;
  pbStack_48 = arg0;
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x800);
    goto LAB_140091105;
  }
  uStack_6c = 0x800;
  iVar2 = pub_142e31e50(uVar7,&uStack_6c,pbVar3);
  pbStack_78 = (byte *)CONCAT44(pbStack_78._4_4_,iVar2);
  pbStack_68 = pbVar3;
  if (iVar2 == 0) {
    uVar5 = pdb_142d877a0(&UNK_142e38bb8,0x25);
    pub_142e31e40(uVar7);
    pub_1406abac0(pbStack_68,0x800,1);
    pbStack_130 = (byte *)0x8000000000000000;
LAB_140090ebc:
    *pbStack_50 = 0;
    if (pbStack_48 != (byte *)0x0) {
      pub_1406abac0(pbStack_50,(ulonglong)pbStack_48,1);
    }
    *param_1 = pbStack_130;
    param_1[1] = uVar5;
    param_1[2] = pbVar3;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    uStack_d8 = (byte *)0x800;
    if (uStack_6c < 0x800) {
      uStack_d8 = (byte *)(ulonglong)uStack_6c;
    }
    uStack_e8 = (byte *)0x800;
    uStack_e0 = pbVar3;
    pdb_140f602a0(&iStack_110,&uStack_e8);
    if (iStack_110 == 2) {
      pdb_140f601b0(&pbStack_130,CONCAT44(uStack_104,uStack_108),pbStack_100);
      if ((char)uStack_118 == '\x02') {
        if (!SBORROW8(0,(longlong)pbStack_130)) {
          pbVar3 = (byte *)CONCAT44(uStack_11c,uStack_120);
          pub_142e31e40(uVar7);
          uVar5 = uStack_128;
          goto LAB_140090ebc;
        }
      }
      else {
        pbStack_58 = pbStack_130;
        uStack_60 = uStack_128;
        uStack_3b = 1;
        pdb_140f3f5b0(&uStack_e8);
        uStack_178 = (undefined4)uStack_c8;
        uStack_174 = uStack_c8._4_4_;
        uStack_170 = (undefined4)uStack_c0;
        uStack_16c = uStack_c0._4_4_;
        uStack_188 = (undefined4)uStack_d8;
        uStack_184 = uStack_d8._4_4_;
        uStack_180 = (undefined4)uStack_d0;
        uStack_17c = uStack_d0._4_4_;
        uStack_198 = uStack_e8;
        uStack_190 = uStack_e0;
        uStack_d8 = pbStack_58;
        uStack_d0 = (byte *)uStack_60;
        uStack_c8 = (byte *)CONCAT44(uStack_11c,uStack_120);
        uStack_c0 = CONCAT44(uStack_114,uStack_118);
        uStack_e8 = &UNK_142e38bdd;
        uStack_e0 = (byte *)0x18;
        uStack_3b = 0;
        uStack_128 = pdb_142d882e0(&uStack_e8,&uStack_198);
      }
      param_1[1] = uStack_128;
      *param_1 = 0x8000000000000000;
      *pbStack_50 = 0;
    }
    else {
      pbStack_58 = pbStack_100;
      uStack_60 = uStack_f8;
      uStack_3a = 0;
      pdb_140f3f5b0(&uStack_e8);
      uStack_178 = (undefined4)uStack_c8;
      uStack_174 = uStack_c8._4_4_;
      uStack_170 = (undefined4)uStack_c0;
      uStack_16c = uStack_c0._4_4_;
      uStack_188 = (undefined4)uStack_d8;
      uStack_184 = uStack_d8._4_4_;
      uStack_180 = (undefined4)uStack_d0;
      uStack_17c = uStack_d0._4_4_;
      uStack_198 = uStack_e8;
      uStack_190 = uStack_e0;
      uStack_d8 = (byte *)CONCAT44(uStack_10c,iStack_110);
      uStack_d0 = (byte *)CONCAT44(uStack_104,uStack_108);
      uStack_c8 = pbStack_58;
      uStack_c0 = uStack_60;
      uStack_b8 = uStack_f0;
      uStack_e8 = &UNK_142e38bdd;
      uStack_e0 = (byte *)0x18;
      uStack_3a = 1;
      uVar7 = pdb_142d87df0(&uStack_e8,&uStack_198);
      param_1[1] = uVar7;
      *param_1 = 0x8000000000000000;
      *pbStack_50 = 0;
    }
    if (pbStack_48 != (byte *)0x0) {
      pub_1406abac0(pbStack_50,(ulonglong)pbStack_48,1);
    }
  }
  return param_1;
}

