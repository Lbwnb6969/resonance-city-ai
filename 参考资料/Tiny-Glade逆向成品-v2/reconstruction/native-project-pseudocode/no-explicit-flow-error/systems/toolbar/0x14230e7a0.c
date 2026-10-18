// VA 0x14230e7a0, PDB extent 691 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<enum2$<toolbar::mei::layout::LengthPercentage> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<enum2$<toolbar::mei::layout::LengthPercentage>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 691 */

char * pdb_14230e7a0(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  char cStack_130;
  char cStack_12f;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_130,piVar1);
  if (cStack_130 == '2') {
    cVar4 = pdb_140dce020(piVar1,0x28);
    if (cVar4 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_130,piVar1);
    if (cStack_130 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_1411b6c20(&uStack_e8,param_2);
      if ((char)uStack_e8 == '2') {
        if (*param_2 == 1) {
          lVar5 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar5 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar5;
        }
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_130,piVar1);
        if (cStack_130 == '2') {
          cVar4 = pdb_140dce020(piVar1,0x29);
          if (cVar4 != '\0') {
            *(undefined4 *)(param_1 + 4) = uStack_e4;
            *(undefined4 *)(param_1 + 8) = uStack_e0;
            *param_1 = '2';
            return param_1;
          }
          *param_1 = '\x17';
          return param_1;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ee,uStack_f0);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_f8,uStack_fe);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_f0,uStack_f6);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_108,uStack_10e);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_100,uStack_106);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_118,uStack_11e);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_110,uStack_116);
        *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_128,uStack_12e);
        *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_120,uStack_126);
        *param_1 = cStack_130;
        param_1[1] = cStack_12f;
        return param_1;
      }
      uStack_58 = uStack_a8;
      uStack_68 = uStack_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      uStack_98 = uStack_e8;
      uStack_94 = uStack_e4;
      uStack_90 = uStack_e0;
      uStack_8c = uStack_dc;
      pdb_140dca990(&cStack_130,&uStack_98,uVar2,uVar3);
      uStack_b8 = (undefined4)CONCAT62(uStack_fe,uStack_100);
      uStack_b4 = (undefined4)((uint6)uStack_fe >> 0x10);
      uStack_b0 = (undefined4)CONCAT62(uStack_f6,uStack_f8);
      uStack_ac = (undefined4)((uint6)uStack_f6 >> 0x10);
      uStack_c8 = (undefined4)CONCAT62(uStack_10e,uStack_110);
      uStack_c4 = (undefined4)((uint6)uStack_10e >> 0x10);
      uStack_c0 = (undefined4)CONCAT62(uStack_106,uStack_108);
      uStack_bc = (undefined4)((uint6)uStack_106 >> 0x10);
      uStack_d8 = (undefined4)CONCAT62(uStack_11e,uStack_120);
      uStack_d4 = (undefined4)((uint6)uStack_11e >> 0x10);
      uStack_d0 = (undefined4)CONCAT62(uStack_116,uStack_118);
      uStack_cc = (undefined4)((uint6)uStack_116 >> 0x10);
      uStack_e0 = (undefined4)CONCAT62(uStack_126,uStack_128);
      uStack_dc = (undefined4)((uint6)uStack_126 >> 0x10);
      uStack_e8._3_1_ = (char)((uint6)uStack_12e >> 8);
      param_1[3] = uStack_e8._3_1_;
      uStack_e8._1_2_ = (undefined2)(CONCAT62(uStack_12e,CONCAT11(cStack_12f,cStack_130)) >> 8);
      *(undefined2 *)(param_1 + 1) = uStack_e8._1_2_;
      uStack_e4 = (undefined4)((uint6)uStack_12e >> 0x10);
      *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ee,uStack_f0);
      *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_b8,uStack_bc);
      *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_b0,uStack_b4);
      *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_c8,uStack_cc);
      *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_c0,uStack_c4);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_d8,uStack_dc);
      *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_d0,uStack_d4);
      *param_1 = cStack_130;
      *(undefined4 *)(param_1 + 4) = uStack_e4;
      *(undefined4 *)(param_1 + 8) = uStack_e0;
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ee,uStack_f0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_fe,uStack_100);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_f6,uStack_f8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_10e,uStack_110);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_106,uStack_108);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_11e,uStack_120);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_116,uStack_118);
  *(ulonglong *)param_1 = CONCAT62(uStack_12e,CONCAT11(cStack_12f,cStack_130));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_126,uStack_128);
  return param_1;
}

