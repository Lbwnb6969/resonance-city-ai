// VA 0x1402c8250, PDB extent 741 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<usize> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<usize> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 741 */

char * pdb_1402c8250(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined3 uStack_f4;
  char cStack_f0;
  char cStack_ef;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
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
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
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
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 uStack_6c;
  undefined3 uStack_6b;
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
  
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_f0,piVar1);
  if (cStack_f0 == '2') {
    cVar4 = pdb_140dce020(piVar1,0x28);
    if (cVar4 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_f0,piVar1);
    if (cStack_f0 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_140633d60(&cStack_f0,piVar1);
      if (cStack_f0 == '2') {
        if (*param_2 == 1) {
          lVar5 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar5 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar5;
        }
        uVar2 = CONCAT62(uStack_e6,uStack_e8);
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_f0,piVar1);
        if (cStack_f0 == '2') {
          cVar4 = pdb_140dce020(piVar1,0x29);
          if (cVar4 != '\0') {
            *(undefined8 *)(param_1 + 8) = uVar2;
            *param_1 = '2';
            return param_1;
          }
          *param_1 = '\x17';
          return param_1;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ae,uStack_b0);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_b8,uStack_be);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_b0,uStack_b6);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_c8,uStack_ce);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_c0,uStack_c6);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_d8,uStack_de);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_d0,uStack_d6);
        *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_e8,CONCAT42(uStack_ec,uStack_ee));
        *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_e0,uStack_e6);
        *param_1 = cStack_f0;
        param_1[1] = cStack_ef;
        return param_1;
      }
      uStack_f4 = (undefined3)((uint)uStack_ec >> 8);
      cStack_70 = cStack_f0;
      _uStack_6f = CONCAT13((undefined1)uStack_ec,CONCAT21(uStack_ee,cStack_ef));
      uStack_6b = uStack_f4;
      uStack_a8 = (undefined4)CONCAT62(uStack_de,uStack_e0);
      uStack_a4 = (undefined4)((uint6)uStack_de >> 0x10);
      uStack_a0 = (undefined4)CONCAT62(uStack_d6,uStack_d8);
      uStack_9c = (undefined4)((uint6)uStack_d6 >> 0x10);
      uStack_98 = (undefined4)CONCAT62(uStack_ce,uStack_d0);
      uStack_94 = (undefined4)((uint6)uStack_ce >> 0x10);
      uStack_90 = (undefined4)CONCAT62(uStack_c6,uStack_c8);
      uStack_8c = (undefined4)((uint6)uStack_c6 >> 0x10);
      uStack_88 = (undefined4)CONCAT62(uStack_be,uStack_c0);
      uStack_84 = (undefined4)((uint6)uStack_be >> 0x10);
      uStack_80 = (undefined4)CONCAT62(uStack_b6,uStack_b8);
      uStack_7c = (undefined4)((uint6)uStack_b6 >> 0x10);
      uStack_40 = uStack_88;
      uStack_3c = uStack_84;
      uStack_38 = uStack_80;
      uStack_34 = uStack_7c;
      uStack_50 = uStack_98;
      uStack_4c = uStack_94;
      uStack_48 = uStack_90;
      uStack_44 = uStack_8c;
      uStack_60 = uStack_a8;
      uStack_5c = uStack_a4;
      uStack_58 = uStack_a0;
      uStack_54 = uStack_9c;
      pdb_140dca990(&cStack_f0,&cStack_70,uVar2,uVar3,
                    CONCAT13((undefined1)uStack_ec,CONCAT21(uStack_ee,cStack_ef)));
      *param_1 = cStack_f0;
      *(uint *)(param_1 + 1) = CONCAT13((char)uStack_ec,CONCAT21(uStack_ee,cStack_ef));
      *(undefined4 *)(param_1 + 4) = uStack_ec;
      *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_e6,uStack_e8);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_de,uStack_e0);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_ce,uStack_d0);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_b6,uStack_b8);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ae,uStack_b0);
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_ae,uStack_b0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_be,uStack_c0);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_b6,uStack_b8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_ce,uStack_d0);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_c6,uStack_c8);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_de,uStack_e0);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_d6,uStack_d8);
  *(ulonglong *)param_1 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(cStack_ef,cStack_f0)));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_e6,uStack_e8);
  return param_1;
}

