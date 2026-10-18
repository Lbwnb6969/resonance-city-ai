// VA 0x1402d00f0, PDB extent 904 bytes
// ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<country_core::render::render_config::MonitorMatch> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<country_core::render::render_config::MonitorMatch>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 904 */

char * pdb_1402d00f0(char *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  char cStack_80;
  char cStack_7f;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  piVar1 = param_2 + 4;
  cVar7 = pdb_140dcf030(piVar1,&UNK_142e6a65d,4);
  if (cVar7 != '\0') {
    param_1[8] = '\x01';
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
  cVar7 = pdb_140dcf030(piVar1,&UNK_142e6a659,4);
  if (cVar7 != '\0') {
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 != '2') {
LAB_1402d0290:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,uStack_70);
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
      *(ulonglong *)param_1 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(cStack_7f,cStack_80)));
      *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_76,uStack_78);
      return param_1;
    }
    cVar7 = pdb_140dce020(piVar1,0x28);
    if (cVar7 != '\0') {
      pdb_140dd4ac0(&cStack_80,piVar1);
      if (cStack_80 != '2') goto LAB_1402d0290;
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 != 1) {
LAB_1402d01c7:
        pdb_1402de030(&cStack_80,param_2,&UNK_142e47c33,0xc);
        uVar6 = uStack_5c;
        uVar5 = uStack_64;
        if (cStack_80 != '2') {
          *(undefined4 *)(param_1 + 4) = uStack_7c;
          *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_7c,CONCAT21(uStack_7e,cStack_7f));
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
          *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
          *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
          *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_76,uStack_78);
          *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,uStack_70);
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
          *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
          *param_1 = cStack_80;
          return param_1;
        }
        uStack_30 = CONCAT62(uStack_76,uStack_78);
        pbStack_38 = (byte *)CONCAT62(uStack_6e,uStack_70);
        uVar4 = CONCAT62(uStack_56,uStack_58);
        uVar2 = CONCAT22(uStack_66,uStack_68);
        uVar3 = CONCAT22(uStack_5e,uStack_60);
        if (*param_2 == 1) {
          lVar8 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar8 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar8;
        }
        *(char *)(param_2 + 0x1a) = '\0';
        pdb_140dd3ab0(&cStack_80,piVar1);
        if (cStack_80 == '2') {
          cVar7 = pdb_140dce020(piVar1,0x29);
          if (cVar7 != '\0') {
            *(ulonglong *)(param_1 + 8) = uStack_30;
            *(byte **)(param_1 + 0x10) = pbStack_38;
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar5,uVar2);
            *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar6,uVar3);
            *(undefined8 *)(param_1 + 0x28) = uVar4;
            *param_1 = '2';
            return param_1;
          }
          *param_1 = '\x10';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_48,uStack_4e);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_40,uStack_46);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_58,CONCAT42(uStack_5c,uStack_5e));
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_50,uStack_56);
          *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_68,uStack_6e);
          *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_60,CONCAT42(uStack_64,uStack_66));
          *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_78,CONCAT42(uStack_7c,uStack_7e));
          *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_70,uStack_76);
          *param_1 = cStack_80;
          param_1[1] = cStack_7f;
        }
        if ((longlong)uStack_30 < -0x7ffffffffffffffe) {
          return param_1;
        }
        if (uStack_30 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_38,uStack_30,1);
        return param_1;
      }
      if (*(longlong *)(param_2 + 2) != 0) {
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
        goto LAB_1402d01c7;
      }
      goto LAB_1402d0364;
    }
  }
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    *param_1 = '\x0f';
    return param_1;
  }
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
LAB_1402d0364:
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  pdb_1402de030(&cStack_80,param_2,&UNK_142e47c33,0xc);
  if (cStack_80 == '2') {
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
    *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_76,uStack_78);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,uStack_70);
    *param_1 = '2';
    cVar7 = (char)*param_2;
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,uStack_70);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
    *(ulonglong *)param_1 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(cStack_7f,cStack_80)));
    *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_76,uStack_78);
    cVar7 = (char)*param_2;
  }
  if (cVar7 != '\0') {
    lVar8 = -1;
    if (*(longlong *)(param_2 + 2) + 1 != 0) {
      lVar8 = *(longlong *)(param_2 + 2) + 1;
    }
    *(longlong *)(param_2 + 2) = lVar8;
  }
  return param_1;
}

