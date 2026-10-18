// VA 0x14230e550, PDB extent 583 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<toolbar::mei::layout::Align> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<toolbar::mei::layout::Align> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 583 */

char * pdb_14230e550(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
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
  char cStack_c0;
  char cStack_bf;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_44;
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
      pdb_142316600(&cStack_c0,param_2,&UNK_1432a815f,5);
      if (cStack_c0 == '2') {
        if (*param_2 == 1) {
          lVar5 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar5 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar5;
        }
        *(undefined1 *)(param_2 + 0x1a) = 0;
        pdb_140dd3ab0(&cStack_108,piVar1);
        if (cStack_108 == '2') {
          cVar4 = pdb_140dce020(piVar1,0x29);
          if (cVar4 != '\0') {
            param_1[1] = cStack_bf;
            *param_1 = '2';
            return param_1;
          }
          *param_1 = '\x17';
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
      uStack_44 = uStack_8c;
      uStack_3c = uStack_84;
      uStack_54 = uStack_9c;
      uStack_4c = uStack_94;
      uStack_64 = uStack_ac;
      uStack_5c = uStack_a4;
      uStack_74 = uStack_bc;
      uStack_6c = uStack_b4;
      pdb_140dca990(&cStack_c0,auStack_78,uVar2,uVar3);
      *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_b8,CONCAT42(uStack_bc,uStack_be));
      *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_b0,CONCAT42(uStack_b4,uStack_b6));
      *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_a8,CONCAT42(uStack_ac,uStack_ae));
      *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_a0,CONCAT42(uStack_a4,uStack_a6));
      *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_98,CONCAT42(uStack_9c,uStack_9e));
      *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_90,CONCAT42(uStack_94,uStack_96));
      *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_88,CONCAT42(uStack_8c,uStack_8e));
      *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_80,CONCAT42(uStack_84,uStack_86));
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_7e,uStack_80);
      *(ushort *)param_1 = CONCAT11(cStack_bf,cStack_c0);
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

