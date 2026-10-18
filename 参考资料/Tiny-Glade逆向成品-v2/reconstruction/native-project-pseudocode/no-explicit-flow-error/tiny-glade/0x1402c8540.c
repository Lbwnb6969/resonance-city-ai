// VA 0x1402c8540, PDB extent 587 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<country_core::render::render_config::VideoMode> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<country_core::render::render_config::VideoMode>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 587 */

char * pdb_1402c8540(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  char cStack_108;
  char cStack_107;
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
  undefined2 uStack_c8;
  undefined6 uStack_c6;
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
  pdb_140dd4ac0(&cStack_108,piVar1);
  if (cStack_108 == '2') {
    cVar4 = pdb_140dce020(piVar1,0x28);
    if (cVar4 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_108,piVar1);
    if (cStack_108 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_1402d6120(&uStack_c0,param_2,&UNK_142e47c00,9);
      if ((char)uStack_c0 == '2') {
        if (*param_2 == 1) {
          lVar6 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar6 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar6;
        }
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_108,piVar1);
        if (cStack_108 == '2') {
          cVar4 = pdb_140dce020(piVar1,0x29);
          cVar5 = '\x17';
          if (cVar4 != '\0') {
            *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_b8,uStack_bc);
            *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
            cVar5 = '2';
          }
          *param_1 = cVar5;
          return param_1;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_c6,uStack_c8);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_d0,uStack_d6);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_c8,uStack_ce);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_e0,uStack_e6);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_d8,uStack_de);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_f0,uStack_f6);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_e8,uStack_ee);
        *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_100,uStack_106);
        *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_f8,uStack_fe);
        *param_1 = cStack_108;
        param_1[1] = cStack_107;
        return param_1;
      }
      uStack_48 = uStack_90;
      uStack_44 = uStack_8c;
      uStack_40 = uStack_88;
      uStack_3c = uStack_84;
      uStack_58 = uStack_a0;
      uStack_54 = uStack_9c;
      uStack_50 = uStack_98;
      uStack_4c = uStack_94;
      uStack_68 = uStack_b0;
      uStack_64 = uStack_ac;
      uStack_60 = uStack_a8;
      uStack_5c = uStack_a4;
      uStack_78 = uStack_c0;
      uStack_74 = uStack_bc;
      uStack_70 = uStack_b8;
      uStack_6c = uStack_b4;
      pdb_140dca990(&uStack_c0,&uStack_78,uVar2,uVar3);
      *(undefined4 *)(param_1 + 0x44) = uStack_7c;
      *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_88,uStack_8c);
      *(ulonglong *)(param_1 + 0x3c) = CONCAT44(uStack_80,uStack_84);
      *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_98,uStack_9c);
      *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_90,uStack_94);
      *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_a0,uStack_a4);
      *(undefined4 *)(param_1 + 0x10) = uStack_b0;
      *(ulonglong *)(param_1 + 1) =
           CONCAT17((undefined1)uStack_b8,CONCAT43(uStack_bc,uStack_c0._1_3_));
      *(ulonglong *)(param_1 + 9) =
           CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
      *param_1 = (char)uStack_c0;
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_c6,uStack_c8);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_d6,uStack_d8);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_ce,uStack_d0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_e6,uStack_e8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_de,uStack_e0);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_f6,uStack_f8);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_ee,uStack_f0);
  *(ulonglong *)param_1 = CONCAT62(uStack_106,CONCAT11(cStack_107,cStack_108));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_fe,uStack_100);
  return param_1;
}

