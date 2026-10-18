// VA 0x142a93550, PDB extent 1695 bytes
// ron::de::impl$2::deserialize_any<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_any<serde::private::de::content::ContentVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 1695 */

void pdb_142a93550(char *param_1,int *param_2)

{
  int *piVar1;
  undefined5 uVar2;
  int iVar3;
  undefined5 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  short *psVar8;
  char cVar9;
  undefined *puVar10;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [4];
  undefined4 uStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined3 uStack_98;
  undefined4 uStack_95;
  undefined7 uStack_88;
  char cStack_80;
  char cStack_7f;
  undefined1 uStack_7e;
  char cStack_7d;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if ((char)param_2[0x1a] != '\0') {
    piVar1 = param_2 + 4;
    cVar5 = pdb_140dccd90(piVar1,0x29);
    if (cVar5 != '\0') {
      if ((char)param_2[0x1a] == '\0') {
        cVar5 = pdb_140dcdeb0(piVar1,&UNK_143635781,2);
        cVar9 = '\x18';
        if (cVar5 == '\0') goto LAB_142a935bf;
      }
      *(char *)(param_2 + 0x1a) = '\0';
      param_1[8] = '\x12';
      cVar9 = '2';
LAB_142a935bf:
      *param_1 = cVar9;
      return;
    }
    pdb_140dd1460(&cStack_80,piVar1,1,1);
    if (cStack_80 != '2') {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_48,uStack_4e);
      *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_40,uStack_46);
      *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_58,uStack_5e);
      *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_50,uStack_56);
      *(ulonglong *)(param_1 + 0x12) =
           CONCAT17(uStack_67,CONCAT16(uStack_68,CONCAT42(uStack_6c,uStack_6e)));
      *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
      *(ulonglong *)(param_1 + 2) =
           CONCAT17(uStack_77,
                    CONCAT16(uStack_78,
                             CONCAT24(uStack_7a,CONCAT22(uStack_7c,CONCAT11(cStack_7d,uStack_7e)))))
      ;
      *(ulonglong *)(param_1 + 10) =
           CONCAT17(uStack_6f,CONCAT16(uStack_70,CONCAT24(uStack_72,CONCAT22(uStack_74,uStack_76))))
      ;
      *param_1 = cStack_80;
      param_1[1] = cStack_7f;
      return;
    }
    if ((cStack_7f == '\x01') || (cStack_7f == '\x03')) {
      pdb_142a956c0(param_1,param_2);
      return;
    }
    if (cStack_7f == '\x04') {
      pdb_142a924c0(param_1,param_2);
      return;
    }
    *(char *)(param_2 + 0x1a) = '\0';
  }
  piVar1 = param_2 + 4;
  cVar5 = pdb_140dcf030(piVar1,&UNK_143635770,4);
  if (cVar5 != '\0') {
    param_1[8] = '\0';
    param_1[9] = '\x01';
    goto LAB_142a937fb;
  }
  cVar5 = pdb_140dcf030(piVar1,&UNK_143635774,5);
  if (cVar5 != '\0') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    goto LAB_142a937fb;
  }
  cVar5 = pdb_140dcdce0(piVar1,&UNK_143635779,4);
  if (cVar5 != '\0') {
    cVar5 = pdb_140dcf030(piVar1,&UNK_14363577d,4);
    if (cVar5 != '\0') goto LAB_142a937f7;
    cVar5 = pdb_140dcf030(piVar1,&UNK_143635779,4);
    if (cVar5 == '\0') {
LAB_142a9382d:
      if ((*(byte *)(param_2 + 8) & 2) == 0) {
        *param_1 = '\x0f';
        return;
      }
      if ((char)*param_2 != '\0') {
        if (*(longlong *)(param_2 + 2) == 0) {
LAB_142a938eb:
          *param_1 = '0';
          return;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      pdb_142709b40(param_1,param_2);
      if ((char)*param_2 == '\0') {
        return;
      }
      lVar7 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar7 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar7;
      return;
    }
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 != '2') {
LAB_142a93a16:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x10) =
           CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
      *(ulonglong *)param_1 =
           CONCAT26(uStack_7a,
                    CONCAT24(uStack_7c,
                             CONCAT13(cStack_7d,CONCAT12(uStack_7e,CONCAT11(cStack_7f,cStack_80)))))
      ;
      *(ulonglong *)(param_1 + 8) =
           CONCAT26(uStack_72,CONCAT24(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78))))
      ;
      return;
    }
    cVar5 = pdb_140dce020(piVar1,0x28);
    if (cVar5 == '\0') goto LAB_142a9382d;
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 != '2') goto LAB_142a93a16;
    *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 8) >> 2 & 1;
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 2) == 0) goto LAB_142a938eb;
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    pdb_142709b40(&cStack_80,param_2);
    if (cStack_80 == '2') {
      uStack_e8 = CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78));
      uStack_e0 = CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      if (*param_2 == 1) {
        lVar7 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar7 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar7;
      }
      uStack_c4 = (undefined4)(CONCAT26(uStack_72,CONCAT24(uStack_74,uStack_e8)) >> 0x20);
      uStack_b8 = (undefined4)CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
      uStack_b4 = (undefined4)((uint6)uStack_66 >> 0x10);
      uStack_b0 = (undefined4)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
      uStack_ac = (undefined4)((uint6)uStack_5e >> 0x10);
      uStack_d8 = uStack_b8;
      uStack_d4 = uStack_b4;
      uStack_d0 = uStack_b0;
      uStack_cc = uStack_ac;
      uStack_e4 = uStack_c4;
      uStack_dc = uStack_6c;
      *(char *)(param_2 + 0x1a) = '\0';
      pdb_140dd3ab0(&cStack_80,piVar1);
      if (cStack_80 == '2') {
        cVar5 = pdb_140dce020(piVar1,0x29);
        if (cVar5 != '\0') {
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_d4,uStack_d8);
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_cc,uStack_d0);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_e4,uStack_e8);
          *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_dc,uStack_e0);
          goto LAB_142a937fb;
        }
        *param_1 = '\x10';
      }
      else {
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_48,uStack_4e);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_40,uStack_46);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_58,uStack_5e);
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_50,uStack_56);
        *(ulonglong *)(param_1 + 0x12) =
             CONCAT17(uStack_67,CONCAT16(uStack_68,CONCAT42(uStack_6c,uStack_6e)));
        *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
        *(uint *)(param_1 + 2) = CONCAT22(uStack_7c,CONCAT11(cStack_7d,uStack_7e));
        *(uint *)(param_1 + 6) = CONCAT13(uStack_77,CONCAT12(uStack_78,uStack_7a));
        *(uint *)(param_1 + 10) = CONCAT22(uStack_74,uStack_76);
        *(uint *)(param_1 + 0xe) = CONCAT13(uStack_6f,CONCAT12(uStack_70,uStack_72));
        *param_1 = cStack_80;
        param_1[1] = cStack_7f;
      }
      pdb_142a927e0(&uStack_e8);
      return;
    }
    uStack_88 = (undefined7)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) >> 8);
    uVar2 = CONCAT23(uStack_7c,CONCAT12(cStack_7d,CONCAT11(uStack_7e,cStack_7f)));
    uVar4 = CONCAT23(uStack_74,CONCAT21(uStack_76,uStack_77));
    uStack_a8 = (undefined4)uVar2;
    uStack_a4 = (undefined4)(CONCAT17(uStack_78,CONCAT25(uStack_7a,uVar2)) >> 0x20);
    uStack_a0 = (undefined4)uVar4;
    uStack_9c = (undefined4)(CONCAT17(uStack_70,CONCAT25(uStack_72,uVar4)) >> 0x20);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_88,uStack_60);
    *(ulonglong *)(param_1 + 0x11) =
         CONCAT17(uStack_68,CONCAT43(uStack_6c,CONCAT21(uStack_6e,uStack_6f)));
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_60,CONCAT61(uStack_66,uStack_67));
    goto LAB_142a93971;
  }
  cVar5 = pdb_140dcf030(piVar1,&UNK_14363577d,4);
  if (cVar5 != '\0') {
LAB_142a937f7:
    param_1[8] = '\x10';
LAB_142a937fb:
    *param_1 = '2';
    return;
  }
  cVar5 = pdb_140dcdeb0(piVar1,&UNK_143635781,2);
  if (cVar5 != '\0') {
    param_1[8] = '\x12';
    goto LAB_142a937fb;
  }
  cVar5 = pdb_140dcf030(piVar1,&UNK_143635783,3);
  if ((cVar5 != '\0') || (cVar5 = pdb_140dcf030(piVar1,&UNK_143635786,6), cVar5 != '\0')) {
    param_1[8] = '\t';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = -0x80;
    param_1[0xf] = '\x7f';
    goto LAB_142a937fb;
  }
  cVar5 = pdb_140dcf030(piVar1,&UNK_14363578c,6);
  if (cVar5 != '\0') {
    param_1[8] = '\n';
    uVar6 = 0x7ff0000000000000;
LAB_142a938e2:
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    goto LAB_142a937fb;
  }
  cVar5 = pdb_140dcf030(piVar1,&UNK_143635792,3);
  if ((cVar5 != '\0') || (cVar5 = pdb_140dcf030(piVar1,&UNK_143635795,6), cVar5 != '\0')) {
    param_1[8] = '\t';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = -0x40;
    param_1[0xf] = '\x7f';
    goto LAB_142a937fb;
  }
  puVar10 = &UNK_14363579b;
  cVar5 = pdb_140dcf030(piVar1,&UNK_14363579b,6);
  if (cVar5 != '\0') {
    param_1[8] = '\n';
    uVar6 = 0x7ff8000000000000;
    goto LAB_142a938e2;
  }
  lVar7 = pdb_140dd0940(piVar1);
  if (lVar7 != 0) {
    pdb_140dd4ac0(&cStack_80,piVar1);
    if (cStack_80 == '2') {
      pdb_142a921e0(param_1,param_2,lVar7,puVar10);
      return;
    }
    goto LAB_142a93a16;
  }
  pdb_140dd13d0(&cStack_80,piVar1);
  if (cStack_80 != '2') {
    param_1[3] = cStack_7d;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_7e,cStack_7f);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
    *(ulonglong *)(param_1 + 8) =
         CONCAT26(uStack_72,CONCAT24(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78))));
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
    *param_1 = cStack_80;
    *(uint *)(param_1 + 4) = CONCAT22(uStack_7a,uStack_7c);
    return;
  }
  iVar3 = CONCAT22(uStack_7a,uStack_7c);
  puVar10 = &UNK_1436358ec;
  switch(iVar3) {
  case 0x22:
  case 0x72:
    pdb_1402d0b40(param_1,param_2);
    break;
  default:
    if (9 < iVar3 - 0x30U) {
      *param_1 = '$';
      *(int *)(param_1 + 4) = iVar3;
      return;
    }
  case 0x2b:
  case 0x2d:
  case 0x2e:
LAB_142a93a86:
    pdb_140dcb8e0(&cStack_80,piVar1);
    if (cStack_80 == '2') {
      uStack_a4 = CONCAT13(uStack_78,(undefined3)uStack_a4);
      uStack_a0._3_1_ = (undefined1)uStack_74;
      uStack_a0 = CONCAT13(uStack_a0._3_1_,
                           (int3)(CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78)) >> 8));
      uStack_9c = CONCAT13(uStack_70,(int3)(CONCAT22(uStack_72,uStack_74) >> 8));
      uStack_98 = (undefined3)(CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70)) >> 8);
      uStack_95 = uStack_6c;
      pdb_142d07150(param_1,auStack_c8);
    }
    else {
      uStack_98 = (undefined3)(CONCAT22(uStack_6e,CONCAT11(uStack_6f,uStack_70)) >> 8);
      uVar2 = CONCAT23(uStack_7c,CONCAT12(cStack_7d,CONCAT11(uStack_7e,cStack_7f)));
      uVar4 = CONCAT23(uStack_74,CONCAT21(uStack_76,uStack_77));
      uStack_a8 = (undefined4)uVar2;
      uStack_a4 = (undefined4)(CONCAT17(uStack_78,CONCAT25(uStack_7a,uVar2)) >> 0x20);
      uStack_a0 = (undefined4)uVar4;
      uStack_9c = (undefined4)(CONCAT17(uStack_70,CONCAT25(uStack_72,uVar4)) >> 0x20);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_6c,CONCAT31(uStack_98,uStack_70));
LAB_142a93971:
      *(undefined4 *)(param_1 + 1) = uStack_a8;
      *(undefined4 *)(param_1 + 5) = uStack_a4;
      *(undefined4 *)(param_1 + 9) = uStack_a0;
      *(undefined4 *)(param_1 + 0xd) = uStack_9c;
      *param_1 = cStack_80;
    }
    break;
  case 0x27:
    pdb_1402cdf30(param_1,param_2);
    break;
  case 0x28:
    pdb_142a921e0(param_1,param_2,0);
    break;
  case 0x5b:
    pdb_142a95080(param_1,param_2);
    break;
  case 0x62:
    psVar8 = (short *)pdb_140dd3680(piVar1);
    if ((puVar10 < (undefined *)0x2) || (*psVar8 != 0x2762)) {
      pdb_142a9a820(param_1,param_2);
      return;
    }
    goto LAB_142a93a86;
  case 0x7b:
    pdb_142a94dc0(param_1,param_2);
  }
  return;
}

