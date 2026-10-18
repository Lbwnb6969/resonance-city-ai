// VA 0x14230b840, PDB extent 694 bytes
// ron::de::Deserializer::handle_struct_after_name<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::Deserializer::handle_struct_after_name<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 694 */

void pdb_14230b840(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
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
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  cVar1 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar1 = pdb_140dce020(param_2 + 4,0x28);
    if (cVar1 != '\0') {
      cVar1 = (char)param_2[0x1a];
      goto LAB_14230b88e;
    }
    *(undefined1 *)(param_1 + 1) = 0x15;
LAB_14230ba7f:
    *param_1 = -0x7fffffffffffffff;
  }
  else {
LAB_14230b88e:
    *(char *)(param_2 + 0x1a) = '\0';
    if ((char)*param_2 != '\0') {
      if (*(longlong *)(param_2 + 2) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        goto LAB_14230ba7f;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_e0 = CONCAT13(uStack_e0._3_1_,0x103);
    uStack_e8 = param_2;
    pdb_141183ef0(&lStack_198,&uStack_e8);
    if (lStack_198 == -0x7fffffffffffffff) {
      lStack_f8 = lStack_150;
      uStack_108 = uStack_160;
      uStack_104 = uStack_15c;
      uStack_100 = uStack_158;
      uStack_fc = uStack_154;
      uStack_118 = uStack_170;
      uStack_114 = uStack_16c;
      uStack_110 = uStack_168;
      uStack_10c = uStack_164;
      uStack_128 = uStack_180;
      uStack_124 = uStack_17c;
      uStack_120 = uStack_178;
      uStack_11c = uStack_174;
      uStack_138 = uStack_190;
      uStack_134 = uStack_18c;
      uStack_130 = uStack_188;
      uStack_12c = uStack_184;
      pdb_140dca990(&uStack_190,&uStack_138,0,0);
      param_1[9] = lStack_150;
      param_1[7] = CONCAT44(uStack_15c,uStack_160);
      param_1[8] = CONCAT44(uStack_154,uStack_158);
      param_1[5] = CONCAT44(uStack_16c,uStack_170);
      param_1[6] = CONCAT44(uStack_164,uStack_168);
      param_1[3] = CONCAT44(uStack_17c,uStack_180);
      param_1[4] = CONCAT44(uStack_174,uStack_178);
      param_1[1] = CONCAT44(uStack_18c,uStack_190);
      param_1[2] = CONCAT44(uStack_184,uStack_188);
      *param_1 = -0x7fffffffffffffff;
    }
    else {
      if (*param_2 == 1) {
        lVar2 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar2 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar2;
      }
      lStack_a0 = lStack_198;
      uStack_98 = CONCAT44(uStack_18c,uStack_190);
      pbStack_90 = (byte *)CONCAT44(uStack_184,uStack_188);
      uStack_88 = uStack_180;
      uStack_84 = uStack_17c;
      uStack_80 = uStack_178;
      uStack_7c = uStack_174;
      uStack_78 = uStack_170;
      uStack_74 = uStack_16c;
      uStack_70 = uStack_168;
      uStack_6c = uStack_164;
      uStack_68 = uStack_160;
      uStack_64 = uStack_15c;
      uStack_60 = uStack_158;
      uStack_5c = uStack_154;
      lStack_58 = lStack_150;
      uStack_50 = uStack_148;
      uStack_4c = uStack_144;
      uStack_48 = uStack_140;
      uStack_44 = uStack_13c;
      pdb_140dd4ac0(&uStack_e8,param_2 + 4);
      if ((char)uStack_e8 == '2') {
        if ((cVar1 != '\0') || (cVar1 = pdb_140dce020(param_2 + 4,0x29), cVar1 != '\0')) {
          param_1[10] = CONCAT44(uStack_4c,uStack_50);
          param_1[0xb] = CONCAT44(uStack_44,uStack_48);
          param_1[8] = CONCAT44(uStack_5c,uStack_60);
          param_1[9] = lStack_58;
          param_1[6] = CONCAT44(uStack_6c,uStack_70);
          param_1[7] = CONCAT44(uStack_64,uStack_68);
          param_1[4] = CONCAT44(uStack_7c,uStack_80);
          param_1[5] = CONCAT44(uStack_74,uStack_78);
          param_1[2] = (longlong)pbStack_90;
          param_1[3] = CONCAT44(uStack_84,uStack_88);
          *param_1 = lStack_a0;
          param_1[1] = uStack_98;
          return;
        }
        *(undefined1 *)(param_1 + 1) = 0x17;
        *param_1 = -0x7fffffffffffffff;
        lStack_198 = lStack_a0;
      }
      else {
        param_1[9] = lStack_a8;
        param_1[7] = lStack_b8;
        param_1[8] = lStack_b0;
        param_1[5] = lStack_c8;
        param_1[6] = lStack_c0;
        param_1[3] = lStack_d8;
        param_1[4] = lStack_d0;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_e8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_e8._4_4_;
        *(undefined4 *)(param_1 + 2) = uStack_e0;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_dc;
        *param_1 = -0x7fffffffffffffff;
      }
      if (SBORROW8(0,lStack_198)) {
        if (uStack_98 != 0) {
          pub_1406abac0(pbStack_90,uStack_98,1);
        }
      }
      else {
        pdb_14117cf10(&lStack_a0);
      }
    }
  }
  return;
}

