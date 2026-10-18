// VA 0x1402c8790, PDB extent 840 bytes
// ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$9::newtype_variant_seed<core::marker::PhantomData<alloc::string::String> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 840 */

char * pdb_1402c8790(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong arg0;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cStack_120;
  undefined3 uStack_11f;
  undefined1 uStack_11c;
  undefined3 uStack_11b;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_a8;
  char cStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  int6 iStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar7 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_a8,piVar1);
  if (cStack_a8 == '2') {
    cVar4 = pdb_140dce020(piVar1,0x28);
    if (cVar4 == '\0') {
      *param_1 = '\x15';
      return param_1;
    }
    pdb_140dd4ac0(&cStack_a8,piVar1);
    if (cStack_a8 == '2') {
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_140dd4910(&cStack_a8,piVar1);
      if (cStack_a8 != '2') {
        uStack_50 = CONCAT13((undefined1)uStack_a4,CONCAT21(uStack_a6,cStack_a7));
        uStack_4c = (undefined3)((uint)uStack_a4 >> 8);
        cStack_120 = cStack_a8;
        _uStack_11f = CONCAT13((undefined1)uStack_a4,CONCAT21(uStack_a6,cStack_a7));
        uStack_11b = uStack_4c;
        uStack_d8 = (undefined4)CONCAT62(uStack_86,uStack_88);
        uStack_d4 = (undefined4)((uint6)uStack_86 >> 0x10);
        uStack_d0 = (undefined4)CONCAT62(uStack_7e,uStack_80);
        uStack_cc = (undefined4)((uint6)uStack_7e >> 0x10);
        uStack_c8 = (undefined4)CONCAT62(uStack_76,uStack_78);
        uStack_c4 = (undefined4)((uint6)uStack_76 >> 0x10);
        uStack_c0 = (undefined4)CONCAT62(uStack_6e,uStack_70);
        uStack_bc = (undefined4)((uint6)uStack_6e >> 0x10);
        uStack_f0 = uStack_c8;
        uStack_ec = uStack_c4;
        uStack_e8 = uStack_c0;
        uStack_e4 = uStack_bc;
        uStack_100 = uStack_d8;
        uStack_fc = uStack_d4;
        uStack_f8 = uStack_d0;
        uStack_f4 = uStack_cc;
        pdb_140dca990(&cStack_a8,&cStack_120,uVar7,uVar2);
        uStack_50 = CONCAT13((char)uStack_a4,CONCAT21(uStack_a6,cStack_a7));
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_66,uStack_68);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_76,uStack_78);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_6e,uStack_70);
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_86,uStack_88);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_7e,uStack_80);
        *(undefined4 *)(param_1 + 4) = uStack_a4;
        *(undefined4 *)(param_1 + 1) = uStack_50;
        *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_9e,uStack_a0);
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_96,uStack_98);
        *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_8e,uStack_90);
        *param_1 = cStack_a8;
        return param_1;
      }
      pbVar3 = (byte *)CONCAT62(uStack_96,uStack_98);
      arg0 = CONCAT62(iStack_8e,uStack_90);
      uStack_58 = CONCAT62(uStack_9e,uStack_a0);
      pbVar5 = pbVar3;
      if (!SBORROW8(0,CONCAT62(uStack_9e,uStack_a0))) goto LAB_1402c89c3;
      if (iStack_8e < 0) {
        uVar7 = 0;
      }
      else {
        if (arg0 == 0) {
          pbVar5 = (byte *)0x1;
          uStack_58 = 0;
LAB_1402c89c3:
          if (*param_2 == 1) {
            lVar6 = -1;
            if (*(longlong *)(param_2 + 2) + 1 != 0) {
              lVar6 = *(longlong *)(param_2 + 2) + 1;
            }
            *(longlong *)(param_2 + 2) = lVar6;
          }
          *(undefined1 *)(param_2 + 0x1a) = 0;
          pbStack_60 = pbVar5;
          pdb_140dd3ab0(&cStack_a8,piVar1);
          if (cStack_a8 == '2') {
            cVar4 = pdb_140dce020(piVar1,0x29);
            if (cVar4 != '\0') {
              *(ulonglong *)(param_1 + 8) = uStack_58;
              *(byte **)(param_1 + 0x10) = pbStack_60;
              *(ulonglong *)(param_1 + 0x18) = arg0;
              *param_1 = '2';
              return param_1;
            }
            *param_1 = '\x17';
          }
          else {
            *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_66,uStack_68);
            *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_70,uStack_76);
            *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_68,uStack_6e);
            *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_80,uStack_86);
            *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_78,uStack_7e);
            *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_90,uStack_96);
            *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_88,iStack_8e);
            *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_a0,CONCAT42(uStack_a4,uStack_a6));
            *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_98,uStack_9e);
            *param_1 = cStack_a8;
            param_1[1] = cStack_a7;
          }
          if (uStack_58 == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_60,uStack_58,1);
          return param_1;
        }
        pdb_14007ee60();
        uVar7 = 1;
        pbVar5 = pub_1406abab0(arg0,1);
        if (pbVar5 != (byte *)0x0) {
          pub_142e32760(pbVar5,pbVar3,arg0);
          uStack_58 = arg0;
          goto LAB_1402c89c3;
        }
      }
      pdb_142dc7e2a(uVar7,arg0);
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_66,uStack_68);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_76,uStack_78);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_6e,uStack_70);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_86,uStack_88);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_7e,uStack_80);
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_96,uStack_98);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_8e,uStack_90);
  *(ulonglong *)param_1 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(cStack_a7,cStack_a8)));
  *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_9e,uStack_a0);
  return param_1;
}

