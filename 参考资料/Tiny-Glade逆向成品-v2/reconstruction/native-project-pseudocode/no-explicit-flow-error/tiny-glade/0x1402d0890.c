// VA 0x1402d0890, PDB extent 682 bytes
// ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<uuid::Uuid> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_option<serde_core::de::impls::OptionVisitor<uuid::Uuid> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 682 */

char * pdb_1402d0890(char *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cStack_90;
  undefined4 uStack_8f;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  undefined1 uStack_88;
  undefined4 uStack_87;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar1 = param_2 + 4;
  cVar2 = pdb_140dcf030(piVar1,&UNK_142e6a65d,4);
  if (cVar2 != '\0') {
    param_1[0] = '2';
    param_1[1] = '\0';
    return param_1;
  }
  cVar2 = pdb_140dcf030(piVar1,&UNK_142e6a659,4);
  if (cVar2 != '\0') {
    pdb_140dd4ac0(&cStack_90,piVar1);
    if (cStack_90 != '2') {
LAB_1402d09eb:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_6e,uStack_70);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_66,uStack_68);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_7e,CONCAT11(uStack_7f,uStack_80));
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_76,uStack_78);
      *(ulonglong *)param_1 = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT41(uStack_8f,cStack_90)));
      *(ulonglong *)(param_1 + 8) =
           CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,uStack_88)));
      return param_1;
    }
    cVar2 = pdb_140dce020(piVar1,0x28);
    if (cVar2 != '\0') {
      pdb_140dd4ac0(&cStack_90,piVar1);
      if (cStack_90 != '2') goto LAB_1402d09eb;
      *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
      if (*param_2 != 1) {
LAB_1402d094e:
        pdb_1402cce10(&cStack_90,param_2);
        if (cStack_90 == '2') {
          uStack_34 = CONCAT13(uStack_88,CONCAT21(uStack_8a,uStack_8b));
          uStack_2c = CONCAT13(uStack_80,CONCAT21(uStack_82,uStack_83));
          uStack_38 = uStack_8f;
          uStack_30 = uStack_87;
          if (*param_2 == 1) {
            lVar4 = -1;
            if (*(longlong *)(param_2 + 2) + 1 != 0) {
              lVar4 = *(longlong *)(param_2 + 2) + 1;
            }
            *(longlong *)(param_2 + 2) = lVar4;
          }
          *(char *)(param_2 + 0x1a) = '\0';
          pdb_140dd3ab0(&cStack_90,piVar1);
          if (cStack_90 == '2') {
            cVar2 = pdb_140dce020(piVar1,0x29);
            cVar3 = '\x10';
            if (cVar2 != '\0') {
              *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_34,uStack_38);
              *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_2c,uStack_30);
              param_1[1] = '\x01';
              cVar3 = '2';
            }
            *param_1 = cVar3;
            return param_1;
          }
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_4e,uStack_50);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_58,uStack_5e);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_50,uStack_56);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_68,uStack_6e);
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_60,uStack_66);
          *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_78,uStack_7e);
          *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_70,uStack_76);
          uVar5 = CONCAT13(uStack_8b,uStack_8f._1_3_);
          uStack_44 = CONCAT13((undefined1)uStack_87,CONCAT12(uStack_88,uStack_8a));
          uVar6 = CONCAT13(uStack_83,uStack_87._1_3_);
          uStack_3c = CONCAT13(uStack_7f,CONCAT12(uStack_80,uStack_82));
        }
        else {
          uVar5 = CONCAT13(uStack_8b,uStack_8f._1_3_);
          uVar6 = CONCAT13(uStack_83,uStack_87._1_3_);
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_4e,uStack_50);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_58,uStack_5e);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_50,uStack_56);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_68,uStack_6e);
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_60,uStack_66);
          *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_78,uStack_7e);
          *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_70,uStack_76);
          uStack_44 = (undefined4)
                      (CONCAT17((undefined1)uStack_87,CONCAT16(uStack_88,CONCAT24(uStack_8a,uVar5)))
                      >> 0x20);
          uStack_3c = (undefined4)
                      (CONCAT17(uStack_7f,CONCAT16(uStack_80,CONCAT24(uStack_82,uVar6))) >> 0x20);
        }
        *(undefined4 *)(param_1 + 2) = uVar5;
        *(undefined4 *)(param_1 + 6) = uStack_44;
        *(undefined4 *)(param_1 + 10) = uVar6;
        *(undefined4 *)(param_1 + 0xe) = uStack_3c;
        *param_1 = cStack_90;
        param_1[1] = (char)uStack_8f;
        return param_1;
      }
      if (*(longlong *)(param_2 + 2) != 0) {
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
        goto LAB_1402d094e;
      }
      goto LAB_1402d0aae;
    }
  }
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    *param_1 = '\x0f';
    return param_1;
  }
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
LAB_1402d0aae:
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  pdb_1402cce10(&cStack_90,param_2);
  if (cStack_90 == '2') {
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(uStack_88,CONCAT25(uStack_8a,CONCAT14(uStack_8b,uStack_8f)));
    *(ulonglong *)(param_1 + 10) =
         CONCAT17(uStack_80,CONCAT25(uStack_82,CONCAT14(uStack_83,uStack_87)));
    param_1[0] = '2';
    param_1[1] = '\x01';
    cVar2 = (char)*param_2;
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_5e,uStack_60);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_6e,uStack_70);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_66,uStack_68);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_7e,CONCAT11(uStack_7f,uStack_80));
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_76,uStack_78);
    *(ulonglong *)param_1 = CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT41(uStack_8f,cStack_90)));
    *(ulonglong *)(param_1 + 8) =
         CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,uStack_88)));
    cVar2 = (char)*param_2;
  }
  if (cVar2 != '\0') {
    lVar4 = -1;
    if (*(longlong *)(param_2 + 2) + 1 != 0) {
      lVar4 = *(longlong *)(param_2 + 2) + 1;
    }
    *(longlong *)(param_2 + 2) = lVar4;
  }
  return param_1;
}

