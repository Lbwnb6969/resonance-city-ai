// VA 0x1402d0480, PDB extent 1032 bytes
// ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<alloc::string::String> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1032 */

char * pdb_1402d0480(char *param_1,int *param_2)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong arg0;
  char cVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cStack_98;
  char cStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  int6 iStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dcf030(piVar1,&UNK_142e6a65d,4);
  if (cVar3 != '\0') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
    *param_1 = '2';
    return param_1;
  }
  cVar3 = pdb_140dcf030(piVar1,&UNK_142e6a659,4);
  if (cVar3 != '\0') {
    pdb_140dd4ac0(&cStack_98,piVar1);
    if (cStack_98 != '2') {
LAB_1402d05ac:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_66,uStack_68);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_76,uStack_78);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_6e,uStack_70);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_86,uStack_88);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_7e,uStack_80);
      *(ulonglong *)param_1 = CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(cStack_97,cStack_98)));
      *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_8e,uStack_90);
      return param_1;
    }
    cVar3 = pdb_140dce020(piVar1,0x28);
    if (cVar3 != '\0') {
      pdb_140dd4ac0(&cStack_98,piVar1);
      if (cStack_98 != '2') goto LAB_1402d05ac;
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 == 1) {
        if (*(longlong *)(param_2 + 2) == 0) goto LAB_1402d0674;
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_140dd4910(&cStack_98,piVar1);
      if (cStack_98 != '2') {
        *(undefined4 *)(param_1 + 4) = uStack_94;
        *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,cStack_97));
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_76,uStack_78);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_6e,uStack_70);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_66,uStack_68);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_5e,uStack_60);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
        *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_8e,uStack_90);
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_86,uStack_88);
        *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_7e,uStack_80);
        *param_1 = cStack_98;
        return param_1;
      }
      pbVar2 = (byte *)CONCAT62(uStack_86,uStack_88);
      uVar5 = CONCAT62(iStack_7e,uStack_80);
      uStack_50 = CONCAT62(uStack_8e,uStack_90);
      pbVar4 = pbVar2;
      if (!SBORROW8(0,CONCAT62(uStack_8e,uStack_90))) goto LAB_1402d0779;
      if (iStack_7e < 0) {
        uVar7 = 0;
      }
      else {
        if (uVar5 == 0) {
          pbVar4 = (byte *)0x1;
          uStack_50 = 0;
LAB_1402d0779:
          if (*param_2 == 1) {
            lVar6 = -1;
            if (*(longlong *)(param_2 + 2) + 1 != 0) {
              lVar6 = *(longlong *)(param_2 + 2) + 1;
            }
            *(longlong *)(param_2 + 2) = lVar6;
          }
          *(char *)(param_2 + 0x1a) = '\0';
          pdb_140dd3ab0(&cStack_98,piVar1);
          if (cStack_98 == '2') {
            cVar3 = pdb_140dce020(piVar1,0x29);
            if (cVar3 != '\0') {
              *(ulonglong *)(param_1 + 8) = uStack_50;
              *(byte **)(param_1 + 0x10) = pbVar4;
              *(ulonglong *)(param_1 + 0x18) = uVar5;
              *param_1 = '2';
              return param_1;
            }
            *param_1 = '\x10';
          }
          else {
            *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
            *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_60,uStack_66);
            *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_58,uStack_5e);
            *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_70,uStack_76);
            *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_68,uStack_6e);
            *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_80,uStack_86);
            *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_78,iStack_7e);
            *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_90,CONCAT42(uStack_94,uStack_96));
            *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_88,uStack_8e);
            *param_1 = cStack_98;
            param_1[1] = cStack_97;
          }
          if (uStack_50 == 0) {
            return param_1;
          }
          pub_1406abac0(pbVar4,uStack_50,1);
          return param_1;
        }
        pdb_14007ee60();
        uVar7 = 1;
        pbVar4 = pub_1406abab0(uVar5,1);
        if (pbVar4 != (byte *)0x0) {
          pub_142e32760(pbVar4,pbVar2,uVar5);
          uStack_50 = uVar5;
          goto LAB_1402d0779;
        }
      }
      pdb_142dc7e2a(uVar7,uVar5);
    }
  }
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    *param_1 = '\x0f';
    return param_1;
  }
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
LAB_1402d0674:
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  pdb_140dd4910(&cStack_98,piVar1);
  if (cStack_98 == '2') {
    uVar5 = CONCAT62(uStack_8e,uStack_90);
    pbVar2 = (byte *)CONCAT62(uStack_86,uStack_88);
    arg0 = CONCAT62(iStack_7e,uStack_80);
    pbVar4 = pbVar2;
    if (SBORROW8(0,uVar5)) {
      if (iStack_7e < 0) {
        uVar7 = 0;
LAB_1402d0625:
        cStack_98 = pdb_142dc7e2a(uVar7,arg0);
        goto LAB_1402d0630;
      }
      if (arg0 == 0) {
        pbVar4 = (byte *)0x1;
        uVar5 = 0;
      }
      else {
        pdb_14007ee60(-uVar5);
        uVar7 = 1;
        pbVar4 = pub_1406abab0(arg0,1);
        if (pbVar4 == (byte *)0x0) goto LAB_1402d0625;
        pub_142e32760(pbVar4,pbVar2,arg0);
        uVar5 = arg0;
      }
    }
    *(ulonglong *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 0x10) = pbVar4;
    *(ulonglong *)(param_1 + 0x18) = arg0;
    *param_1 = '2';
    cVar3 = (char)*param_2;
  }
  else {
LAB_1402d0630:
    *(undefined4 *)(param_1 + 4) = uStack_94;
    *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,cStack_97));
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_76,uStack_78);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_6e,uStack_70);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_66,uStack_68);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_5e,uStack_60);
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
    *param_1 = cStack_98;
    *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_8e,uStack_90);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_86,uStack_88);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_7e,uStack_80);
    cVar3 = (char)*param_2;
  }
  if (cVar3 != '\0') {
    lVar6 = -1;
    if (*(longlong *)(param_2 + 2) + 1 != 0) {
      lVar6 = *(longlong *)(param_2 + 2) + 1;
    }
    *(longlong *)(param_2 + 2) = lVar6;
  }
  return param_1;
}

