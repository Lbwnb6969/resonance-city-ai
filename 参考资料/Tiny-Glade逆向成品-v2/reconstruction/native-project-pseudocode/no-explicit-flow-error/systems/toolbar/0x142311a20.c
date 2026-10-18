// VA 0x142311a20, PDB extent 1486 bytes
// ron::de::impl$2::deserialize_any<serde_core::de::ignored_any::IgnoredAny>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_any<serde_core::de::ignored_any::IgnoredAny>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 1486 */

void pdb_142311a20(char *param_1,int *param_2)

{
  int *piVar1;
  undefined7 uVar2;
  char cVar3;
  longlong lVar4;
  short *psVar5;
  char cVar6;
  undefined *puVar7;
  char cStack_80;
  char cStack_7f;
  undefined1 uStack_7e;
  char cStack_7d;
  int iStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_29;
  
  if ((char)param_2[0x1a] != '\0') {
    piVar1 = param_2 + 4;
    cVar3 = pdb_140dccd90(piVar1,0x29);
    if (cVar3 != '\0') {
      if ((char)param_2[0x1a] == '\0') {
        cVar3 = pdb_140dcdeb0(piVar1,&UNK_1434d9051,2);
        cVar6 = '\x18';
        if (cVar3 == '\0') goto LAB_142311a78;
      }
      *(char *)(param_2 + 0x1a) = '\0';
      cVar6 = '2';
LAB_142311a78:
      *param_1 = cVar6;
      return;
    }
    pdb_140dd1460(&cStack_80,piVar1,1,1);
    if (cStack_80 != '2') {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
      *(ulonglong *)(param_1 + 0x32) = CONCAT17(uStack_47,CONCAT16(uStack_48,uStack_4e));
      *(ulonglong *)(param_1 + 0x3a) = CONCAT17(uStack_3f,CONCAT16(uStack_40,uStack_46));
      *(ulonglong *)(param_1 + 0x22) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
      *(ulonglong *)(param_1 + 0x2a) = CONCAT17(uStack_4f,CONCAT16(uStack_50,uStack_56));
      *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_67,CONCAT16(uStack_68,uStack_6e));
      *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
      *(ulonglong *)(param_1 + 2) =
           CONCAT17((undefined1)uStack_77,
                    CONCAT16(uStack_78,CONCAT42(iStack_7c,CONCAT11(cStack_7d,uStack_7e))));
      *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_6f,CONCAT43(uStack_73,uStack_77._1_3_));
      *param_1 = cStack_80;
      param_1[1] = cStack_7f;
      return;
    }
    if ((cStack_7f == '\x01') || (cStack_7f == '\x03')) {
      pdb_1423169d0(param_1,param_2);
      return;
    }
    if (cStack_7f == '\x04') {
      pdb_14230bb00(param_1,param_2);
      return;
    }
    *(char *)(param_2 + 0x1a) = '\0';
  }
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9040,4);
  if ((cVar3 != '\0') || (cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9044,5), cVar3 != '\0'))
  goto LAB_142311b3b;
  cVar3 = pdb_140dcdce0(piVar1,&UNK_1434d9049,4);
  if (cVar3 != '\0') {
    cVar3 = pdb_140dcf030(piVar1,&UNK_1434d904d,4);
    if (cVar3 != '\0') goto LAB_142311b3b;
    cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9049,4);
    if (cVar3 == '\0') {
LAB_142311d8b:
      if ((*(byte *)(param_2 + 8) & 2) == 0) {
        *param_1 = '\x0f';
        return;
      }
      if ((char)*param_2 != '\0') {
        if (*(longlong *)(param_2 + 2) == 0) {
LAB_142311e0e:
          *param_1 = '0';
          return;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_142311a20(param_1,param_2);
      if ((char)*param_2 == '\0') {
        return;
      }
      lVar4 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar4 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar4;
      return;
    }
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 != '2') {
LAB_142311d99:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_73._3_1_));
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
      *(ulonglong *)param_1 =
           CONCAT44(iStack_7c,CONCAT13(cStack_7d,CONCAT12(uStack_7e,CONCAT11(cStack_7f,cStack_80))))
      ;
      *(ulonglong *)(param_1 + 8) = CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,uStack_78));
      return;
    }
    cVar3 = pdb_140dce020(piVar1,0x28);
    if (cVar3 == '\0') goto LAB_142311d8b;
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 != '2') goto LAB_142311d99;
    *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 2) == 0) goto LAB_142311e0e;
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    pdb_142311a20(&cStack_80,param_2);
    if (cStack_80 == '2') {
      if (*param_2 == 1) {
        lVar4 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar4 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar4;
      }
      *(char *)(param_2 + 0x1a) = '\0';
      pdb_140dd3ab0(&cStack_80,piVar1);
      if (cStack_80 != '2') {
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
        *(ulonglong *)(param_1 + 0x32) = CONCAT17(uStack_47,CONCAT16(uStack_48,uStack_4e));
        *(ulonglong *)(param_1 + 0x3a) = CONCAT17(uStack_3f,CONCAT16(uStack_40,uStack_46));
        *(ulonglong *)(param_1 + 0x22) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
        *(ulonglong *)(param_1 + 0x2a) = CONCAT17(uStack_4f,CONCAT16(uStack_50,uStack_56));
        *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_67,CONCAT16(uStack_68,uStack_6e));
        *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
        *(ulonglong *)(param_1 + 2) =
             CONCAT17((undefined1)uStack_77,
                      CONCAT16(uStack_78,CONCAT42(iStack_7c,CONCAT11(cStack_7d,uStack_7e))));
        *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_6f,CONCAT43(uStack_73,uStack_77._1_3_));
        *param_1 = cStack_80;
        param_1[1] = cStack_7f;
        return;
      }
      cVar3 = pdb_140dce020(piVar1,0x29);
      if (cVar3 == '\0') {
        *param_1 = '\x10';
        return;
      }
      goto LAB_142311b3b;
    }
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
    uStack_38 = CONCAT13((undefined1)iStack_7c,CONCAT12(cStack_7d,CONCAT11(uStack_7e,cStack_7f)));
    uStack_34 = CONCAT13(uStack_78,iStack_7c._1_3_);
    *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_48,CONCAT61(uStack_4e,uStack_4f));
    *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_40,CONCAT61(uStack_46,uStack_47));
    *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_58,CONCAT61(uStack_5e,uStack_5f));
    *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_50,CONCAT61(uStack_56,uStack_57));
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_68,CONCAT61(uStack_6e,uStack_6f));
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_60,CONCAT61(uStack_66,uStack_67));
    goto LAB_142311e3f;
  }
  cVar3 = pdb_140dcf030(piVar1,&UNK_1434d904d,4);
  if (((((cVar3 != '\0') || (cVar3 = pdb_140dcdeb0(piVar1,&UNK_1434d9051,2), cVar3 != '\0')) ||
       (cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9053,3), cVar3 != '\0')) ||
      ((cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9056,6), cVar3 != '\0' ||
       (cVar3 = pdb_140dcf030(piVar1,&UNK_1434d905c,6), cVar3 != '\0')))) ||
     ((cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9062,3), cVar3 != '\0' ||
      ((cVar3 = pdb_140dcf030(piVar1,&UNK_1434d9065,6), cVar3 != '\0' ||
       (cVar3 = pdb_140dcf030(piVar1,&UNK_1434d906b,6), cVar3 != '\0')))))) goto LAB_142311b3b;
  lVar4 = pdb_140dd0940(piVar1);
  if (lVar4 != 0) {
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 == '2') {
      pdb_14230b310(param_1,param_2,lVar4);
      return;
    }
    goto LAB_142311d99;
  }
  pdb_140dd13d0(&cStack_80,piVar1);
  if (cStack_80 != '2') {
    param_1[3] = cStack_7d;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_7e,cStack_7f);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
    *(ulonglong *)(param_1 + 8) = CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,uStack_78));
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_73._3_1_));
    *param_1 = cStack_80;
    *(int *)(param_1 + 4) = iStack_7c;
    return;
  }
  puVar7 = &UNK_1434d9330;
  switch(iStack_7c) {
  case 0x22:
  case 0x72:
    pdb_1402d0bf0(param_1,param_2);
    break;
  default:
    if (9 < iStack_7c - 0x30U) {
      *param_1 = '$';
      *(int *)(param_1 + 4) = iStack_7c;
      return;
    }
  case 0x2b:
  case 0x2d:
  case 0x2e:
LAB_142311ebc:
    pdb_140dcb8e0(&cStack_80,piVar1);
    if (cStack_80 == '2') {
LAB_142311b3b:
      *param_1 = '2';
    }
    else {
      uVar2 = CONCAT43(iStack_7c,CONCAT12(cStack_7d,CONCAT11(uStack_7e,cStack_7f)));
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
      uStack_29 = (undefined1)((uint)uStack_73 >> 0x18);
      *(ulonglong *)(param_1 + 0x10) = CONCAT71(CONCAT61(uStack_6e,uStack_6f),uStack_29);
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)(CONCAT17(uStack_78,uVar2) >> 0x20);
LAB_142311e3f:
      *(undefined4 *)(param_1 + 1) = uStack_38;
      *(undefined4 *)(param_1 + 5) = uStack_34;
      *(undefined4 *)(param_1 + 9) = uStack_77;
      *(undefined4 *)(param_1 + 0xd) = uStack_73;
      *param_1 = cStack_80;
    }
    break;
  case 0x27:
    pdb_1402cdec0(param_1,param_2);
    break;
  case 0x28:
    pdb_14230b310(param_1,param_2,0);
    break;
  case 0x5b:
    pdb_142314b00(param_1,param_2);
    break;
  case 0x62:
    psVar5 = (short *)pdb_140dd3680(piVar1);
    if ((puVar7 < (undefined *)0x2) || (*psVar5 != 0x2762)) {
      pdb_14231d390(param_1,param_2);
      return;
    }
    goto LAB_142311ebc;
  case 0x7b:
    pdb_142313ba0(param_1,param_2);
  }
  return;
}

