// VA 0x141c87100, PDB extent 643 bytes
// asset::prefab::scan::load_prefab_config
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::prefab::scan::load_prefab_config
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
   Extent: 643 */

void pdb_141c87100(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  code *pcStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  ulonglong uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_e8 = param_2;
  uStack_e0 = param_3;
  pdb_140f55d10(&uStack_b0);
  lVar5 = lStack_a0;
  pcVar4 = pcStack_a8;
  if (SBORROW8(0,(longlong)uStack_b0)) {
    lVar5 = pdb_142e03d30(pcStack_a8);
  }
  else {
    uStack_38 = (ulonglong)uStack_b0;
    lStack_a0 = 0;
    uStack_b0 = (undefined8 *)0x1;
    pcStack_a8 = (code *)0x80;
    pbStack_40 = (byte *)pcVar4;
    pdb_142634ce0(&uStack_158,&uStack_b0,pcVar4,lVar5);
    if ((char)uStack_158 == '2') {
      if (uStack_38 != 0) {
        pub_1406abac0(pbStack_40,uStack_38,1);
      }
      lVar5 = lStack_148;
      if (CONCAT44(uStack_14c,uStack_150) != 0) {
        *param_1 = CONCAT44(uStack_14c,uStack_150);
        param_1[1] = lStack_148;
        param_1[2] = lStack_140;
        param_1[3] = lStack_138;
        param_1[4] = lStack_130;
        param_1[5] = lStack_128;
        return;
      }
    }
    else {
      uStack_b0._5_3_ = (undefined3)((uint)uStack_154 >> 8);
      uStack_d8 = lStack_140;
      lVar5 = uStack_d8;
      uStack_d0 = lStack_138;
      lVar1 = uStack_d0;
      uStack_c8 = lStack_130;
      lVar2 = uStack_c8;
      uStack_c0 = lStack_128;
      lVar3 = uStack_c0;
      uStack_78 = uStack_120;
      uStack_70 = uStack_118;
      uStack_68 = uStack_110;
      uStack_60 = uStack_108;
      uStack_58 = uStack_100;
      uStack_50 = uStack_f8;
      lStack_a0 = lStack_148;
      uStack_d8._0_4_ = (undefined4)lStack_140;
      uStack_d8._4_4_ = (undefined4)((ulonglong)lStack_140 >> 0x20);
      uStack_d0._0_4_ = (undefined4)lStack_138;
      uStack_d0._4_4_ = (undefined4)((ulonglong)lStack_138 >> 0x20);
      uStack_c8._0_4_ = (undefined4)lStack_130;
      uStack_c8._4_4_ = (undefined4)((ulonglong)lStack_130 >> 0x20);
      uStack_c0._0_4_ = (undefined4)lStack_128;
      uStack_c0._4_4_ = (undefined4)((ulonglong)lStack_128 >> 0x20);
      uStack_88 = (undefined4)uStack_c8;
      uStack_84 = uStack_c8._4_4_;
      uStack_80 = (undefined4)uStack_c0;
      uStack_7c = uStack_c0._4_4_;
      uStack_98 = (undefined4)uStack_d8;
      uStack_94 = uStack_d8._4_4_;
      uStack_90 = (undefined4)uStack_d0;
      uStack_8c = uStack_d0._4_4_;
      uStack_b0 = (undefined8 *)
                  CONCAT71(CONCAT34(uStack_b0._5_3_,
                                    CONCAT13((undefined1)uStack_154,uStack_158._1_3_)),
                           (char)uStack_158);
      uStack_d8 = lVar5;
      uStack_d0 = lVar1;
      uStack_c8 = lVar2;
      uStack_c0 = lVar3;
      lVar5 = pdb_142e03ca0(&uStack_b0);
      if (uStack_38 != 0) {
        pub_1406abac0(pbStack_40,uStack_38,1);
      }
    }
  }
  uStack_b0 = &uStack_e8;
  pcStack_a8 = pdb_140117670;
  uStack_29 = 1;
  lStack_48 = lVar5;
  pdb_140f60760(&uStack_d8,&UNK_143559ae0,&uStack_b0);
  lStack_148 = uStack_c8;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = (undefined4)uStack_d0;
  uStack_14c = uStack_d0._4_4_;
  uStack_b0 = (undefined8 *)0x3;
  uStack_29 = 0;
  lStack_140 = lVar5;
  lVar5 = pdb_142e03a00(&uStack_158,&uStack_b0);
  param_1[1] = lVar5;
  *param_1 = 0;
  return;
}

