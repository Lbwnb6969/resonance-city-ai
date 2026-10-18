// VA 0x14230ea60, PDB extent 644 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<toolbar::mei::layout::Rect<enum2$<toolbar::mei::layout::LengthPercentage> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<toolbar::mei::layout::Rect<enum2$<toolbar::mei::layout::LengthPercentage>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 644 */

char * pdb_14230ea60(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  char cStack_110;
  char cStack_10f;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_110,piVar1);
  if (cStack_110 == '2') {
    cVar5 = pdb_140dce020(piVar1,0x28);
    if (cVar5 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_110,piVar1);
    if (cStack_110 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_1411b66f0(&uStack_c8,param_2);
      if ((char)uStack_c8 == '2') {
        if (*param_2 == 1) {
          lVar7 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar7 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar7;
        }
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_110,piVar1);
        if (cStack_110 == '2') {
          cVar5 = pdb_140dce020(piVar1,0x29);
          cVar6 = '\x17';
          if (cVar5 != '\0') {
            *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_b0,uStack_b4);
            *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_a8,uStack_ac);
            *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c0,uStack_c4);
            *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_b8,uStack_bc);
            cVar6 = '2';
          }
          *param_1 = cVar6;
          return param_1;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ce,uStack_d0);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_d8,uStack_de);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_d0,uStack_d6);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_e8,uStack_ee);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_e0,uStack_e6);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_f8,uStack_fe);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_f0,uStack_f6);
        *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_108,uStack_10e);
        *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_100,uStack_106);
        *param_1 = cStack_110;
        param_1[1] = cStack_10f;
        return param_1;
      }
      uStack_48 = uStack_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      uStack_4c = uStack_9c;
      uStack_68 = uStack_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      pdb_140dca990(&cStack_110,&uStack_78,uVar2,uVar3);
      uStack_88 = (undefined4)CONCAT62(uStack_ce,uStack_d0);
      uStack_84 = (undefined4)((uint6)uStack_ce >> 0x10);
      uStack_98 = (undefined4)CONCAT62(uStack_de,uStack_e0);
      uStack_94 = (undefined4)((uint6)uStack_de >> 0x10);
      uStack_90 = (undefined4)CONCAT62(uStack_d6,uStack_d8);
      uStack_8c = (undefined4)((uint6)uStack_d6 >> 0x10);
      uStack_a8 = (undefined4)CONCAT62(uStack_ee,uStack_f0);
      uVar4 = uStack_a8;
      uStack_a4 = (undefined4)((uint6)uStack_ee >> 0x10);
      uStack_a0 = (undefined4)CONCAT62(uStack_e6,uStack_e8);
      uStack_9c = (undefined4)((uint6)uStack_e6 >> 0x10);
      uStack_b4 = (undefined4)((uint6)uStack_fe >> 0x10);
      uStack_ac = (undefined4)((uint6)uStack_f6 >> 0x10);
      uStack_c4 = (undefined4)((uint6)uStack_10e >> 0x10);
      uStack_bc = (undefined4)((uint6)uStack_106 >> 0x10);
      *(undefined4 *)(param_1 + 0x44) = uStack_84;
      *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_90,uStack_94);
      *(ulonglong *)(param_1 + 0x3c) = CONCAT44(uStack_88,uStack_8c);
      *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_a0,uStack_a4);
      *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_98,uStack_9c);
      uStack_c8._1_3_ = (undefined3)(CONCAT62(uStack_10e,CONCAT11(cStack_10f,cStack_110)) >> 8);
      uStack_c0._0_1_ = (undefined1)uStack_108;
      uStack_c0._1_3_ = (undefined3)(CONCAT62(uStack_106,uStack_108) >> 8);
      uStack_b8._0_1_ = (undefined1)uStack_100;
      *(ulonglong *)(param_1 + 1) =
           CONCAT17((undefined1)uStack_c0,CONCAT43(uStack_c4,uStack_c8._1_3_));
      *(ulonglong *)(param_1 + 9) =
           CONCAT17((undefined1)uStack_b8,CONCAT43(uStack_bc,uStack_c0._1_3_));
      uStack_b8._1_3_ = (undefined3)(CONCAT62(uStack_fe,uStack_100) >> 8);
      uStack_b0._0_1_ = (undefined1)uStack_f8;
      uStack_b0._1_3_ = (undefined3)(CONCAT62(uStack_f6,uStack_f8) >> 8);
      uStack_a8._0_1_ = (undefined1)uStack_f0;
      *(ulonglong *)(param_1 + 0x11) =
           CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
      *(ulonglong *)(param_1 + 0x19) =
           CONCAT17((undefined1)uStack_a8,CONCAT43(uStack_ac,uStack_b0._1_3_));
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      *param_1 = cStack_110;
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ce,uStack_d0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_de,uStack_e0);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_d6,uStack_d8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_ee,uStack_f0);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_e6,uStack_e8);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_fe,uStack_100);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_f6,uStack_f8);
  *(ulonglong *)param_1 = CONCAT62(uStack_10e,CONCAT11(cStack_10f,cStack_110));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_106,uStack_108);
  return param_1;
}

