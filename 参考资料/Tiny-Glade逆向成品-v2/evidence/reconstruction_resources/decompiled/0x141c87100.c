// Matched PDB: asset::prefab::scan::load_prefab_config
// VA 0x141c87100, PDB extent 643 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: asset::prefab::scan::load_prefab_config
   Extent: 643 bytes. No whole-program auto-analysis. */

void pdb_141c87100(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_e8 = param_2;
  uStack_e0 = param_3;
  pdb_140f55d10(&uStack_b0);
  lVar2 = lStack_a0;
  pcVar1 = pcStack_a8;
  if (SBORROW8(0,(longlong)uStack_b0)) {
    lVar2 = pdb_142e03d30(pcStack_a8);
  }
  else {
    lStack_38 = (longlong)uStack_b0;
    lStack_a0 = 0;
    uStack_b0 = (undefined8 *)0x1;
    pcStack_a8 = (code *)0x80;
    uStack_40 = pcVar1;
    pdb_142634ce0(&uStack_158,&uStack_b0,pcVar1,lVar2);
    if ((char)uStack_158 == '2') {
      if (lStack_38 != 0) {
        func_0x0001406abac0(uStack_40,lStack_38,1);
      }
      lVar2 = lStack_148;
      if (CONCAT44(uStack_14c,uStack_150) != 0) {
        *param_1 = CONCAT44(uStack_14c,uStack_150);
        param_1[1] = lStack_148;
        param_1[2] = uStack_140;
        param_1[3] = CONCAT44(uStack_134,uStack_138);
        param_1[4] = CONCAT44(uStack_12c,uStack_130);
        param_1[5] = CONCAT44(uStack_124,uStack_128);
        return;
      }
    }
    else {
      uStack_b0._5_3_ = (undefined3)((uint)uStack_154 >> 8);
      uStack_d0 = CONCAT44(uStack_134,uStack_138);
      uStack_d8 = uStack_140;
      uStack_c8 = CONCAT44(uStack_12c,uStack_130);
      uStack_78 = uStack_120;
      uStack_70 = uStack_118;
      uStack_68 = uStack_110;
      uStack_60 = uStack_108;
      uStack_58 = uStack_100;
      uStack_50 = uStack_f8;
      lStack_a0 = lStack_148;
      uStack_88 = uStack_130;
      uStack_84 = uStack_12c;
      uStack_80 = uStack_128;
      uStack_7c = uStack_124;
      uStack_98 = (undefined4)uStack_140;
      uStack_94 = uStack_140._4_4_;
      uStack_90 = uStack_138;
      uStack_8c = uStack_134;
      uStack_b0 = (undefined8 *)
                  CONCAT71(CONCAT34(uStack_b0._5_3_,
                                    CONCAT13((undefined1)uStack_154,uStack_158._1_3_)),
                           (char)uStack_158);
      lVar2 = pdb_142e03ca0(&uStack_b0);
      if (lStack_38 != 0) {
        func_0x0001406abac0(uStack_40,lStack_38,1);
      }
    }
  }
  uStack_b0 = &uStack_e8;
  pcStack_a8 = pdb_140117670;
  uStack_29 = 1;
  lStack_48 = lVar2;
  pdb_140f60760(&uStack_d8,&UNK_143559ae0,&uStack_b0);
  lStack_148 = uStack_c8;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = (undefined4)uStack_d0;
  uStack_14c = uStack_d0._4_4_;
  uStack_b0 = (undefined8 *)0x3;
  uStack_29 = 0;
  uStack_140 = lVar2;
  lVar2 = pdb_142e03a00(&uStack_158,&uStack_b0);
  param_1[1] = lVar2;
  *param_1 = 0;
  return;
}

