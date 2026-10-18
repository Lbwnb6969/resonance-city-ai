// VA 0x14230f240, PDB extent 739 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<u32> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<u32> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 739 */

char * pdb_14230f240(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  char cStack_100;
  char cStack_ff;
  undefined1 uStack_fe;
  char cStack_fd;
  undefined4 uStack_fc;
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
  undefined2 uStack_c0;
  undefined6 uStack_be;
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
  char acStack_70 [3];
  char cStack_6d;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_100,piVar1);
  if (cStack_100 == '2') {
    cVar5 = pdb_140dce020(piVar1,0x28);
    if (cVar5 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_100,piVar1);
    if (cStack_100 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_1423209d0(&cStack_100,piVar1);
      uVar4 = uStack_fc;
      if (cStack_100 == '2') {
        if (*param_2 == 1) {
          lVar6 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar6 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar6;
        }
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_100,piVar1);
        if (cStack_100 == '2') {
          cVar5 = pdb_140dce020(piVar1,0x29);
          if (cVar5 != '\0') {
            *(undefined4 *)(param_1 + 4) = uVar4;
            *param_1 = '2';
            return param_1;
          }
          *param_1 = '\x17';
          return param_1;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_be,uStack_c0);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_c8,uStack_ce);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_c0,uStack_c6);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_d8,uStack_de);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_d0,uStack_d6);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_e8,uStack_ee);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_e0,uStack_e6);
        *(ulonglong *)(param_1 + 2) =
             CONCAT26(uStack_f8,CONCAT42(uStack_fc,CONCAT11(cStack_fd,uStack_fe)));
        *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_f0,uStack_f6);
        *param_1 = cStack_100;
        param_1[1] = cStack_ff;
        return param_1;
      }
      acStack_70[0] = cStack_100;
      cStack_6d = cStack_fd;
      uStack_6c = uStack_fc;
      uStack_b8 = (undefined4)CONCAT62(uStack_f6,uStack_f8);
      uStack_b4 = (undefined4)((uint6)uStack_f6 >> 0x10);
      uStack_b0 = (undefined4)CONCAT62(uStack_ee,uStack_f0);
      uStack_ac = (undefined4)((uint6)uStack_ee >> 0x10);
      uStack_a8 = (undefined4)CONCAT62(uStack_e6,uStack_e8);
      uStack_a4 = (undefined4)((uint6)uStack_e6 >> 0x10);
      uStack_a0 = (undefined4)CONCAT62(uStack_de,uStack_e0);
      uStack_9c = (undefined4)((uint6)uStack_de >> 0x10);
      uStack_98 = (undefined4)CONCAT62(uStack_d6,uStack_d8);
      uStack_94 = (undefined4)((uint6)uStack_d6 >> 0x10);
      uStack_90 = (undefined4)CONCAT62(uStack_ce,uStack_d0);
      uStack_8c = (undefined4)((uint6)uStack_ce >> 0x10);
      uStack_88 = (undefined4)CONCAT62(uStack_c6,uStack_c8);
      uStack_84 = (undefined4)((uint6)uStack_c6 >> 0x10);
      uStack_80 = (undefined4)CONCAT62(uStack_be,uStack_c0);
      uStack_7c = (undefined4)((uint6)uStack_be >> 0x10);
      uStack_38 = uStack_88;
      uStack_34 = uStack_84;
      uStack_30 = uStack_80;
      uStack_2c = uStack_7c;
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
      pdb_140dca990(&cStack_100,acStack_70,uVar2,uVar3);
      *param_1 = cStack_100;
      *(ushort *)(param_1 + 1) = CONCAT11(uStack_fe,cStack_ff);
      param_1[3] = cStack_fd;
      *(undefined4 *)(param_1 + 4) = uStack_fc;
      *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_f6,uStack_f8);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_ee,uStack_f0);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_e6,uStack_e8);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_de,uStack_e0);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_ce,uStack_d0);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_be,uStack_c0);
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_be,uStack_c0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_ce,uStack_d0);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_c6,uStack_c8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_de,uStack_e0);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_d6,uStack_d8);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_ee,uStack_f0);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_e6,uStack_e8);
  *(ulonglong *)param_1 =
       CONCAT44(uStack_fc,CONCAT13(cStack_fd,CONCAT12(uStack_fe,CONCAT11(cStack_ff,cStack_100))));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_f6,uStack_f8);
  return param_1;
}

