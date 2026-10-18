// VA 0x142310830, PDB extent 485 bytes
// ron::de::impl$5::next_element_seed<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<serde::private::de::content::ContentVisitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 485 */

char * pdb_142310830(char *param_1,undefined8 *param_2)

{
  undefined6 uVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined7 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  byte bStack_67;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140dca8b0(&cStack_68);
  if (cStack_68 == '2') {
    if ((bStack_67 & 1) == 0) {
      param_1[8] = '\x16';
      *param_1 = '2';
    }
    else {
      pcVar6 = (char *)*param_2;
      if (*pcVar6 != '\0') {
        if (*(longlong *)(pcVar6 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar6 + 8) = *(longlong *)(pcVar6 + 8) + -1;
        pcVar6 = (char *)*param_2;
      }
      pdb_142311ff0(&cStack_68,pcVar6);
      if (cStack_68 == '2') {
        uVar1 = CONCAT42(uStack_5e,CONCAT11(uStack_5f,uStack_60));
        uVar2 = CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58));
        uVar3 = CONCAT42(uStack_4e,CONCAT11(uStack_4f,uStack_50));
        uVar4 = CONCAT42(uStack_46,CONCAT11(uStack_47,uStack_48));
        piVar7 = (int *)*param_2;
        if (*piVar7 == 1) {
          lVar5 = -1;
          if (*(longlong *)(piVar7 + 2) + 1 != 0) {
            lVar5 = *(longlong *)(piVar7 + 2) + 1;
          }
          *(longlong *)(piVar7 + 2) = lVar5;
          piVar7 = (int *)*param_2;
        }
        uStack_d8 = (undefined4)uVar1;
        uStack_d4 = (undefined4)(CONCAT26(uStack_5a,uVar1) >> 0x20);
        uStack_d0 = (undefined4)uVar2;
        uStack_cc = (undefined4)(CONCAT26(uStack_52,uVar2) >> 0x20);
        uStack_c8 = (undefined4)uVar3;
        uStack_c4 = (undefined4)(CONCAT26(uStack_4a,uVar3) >> 0x20);
        uStack_c0 = (undefined4)uVar4;
        uStack_bc = (undefined4)(CONCAT26(uStack_42,uVar4) >> 0x20);
        uStack_78 = uStack_c8;
        uStack_74 = uStack_c4;
        uStack_70 = uStack_c0;
        uStack_6c = uStack_bc;
        uStack_88 = uStack_d8;
        uStack_84 = uStack_d4;
        uStack_80 = uStack_d0;
        uStack_7c = uStack_cc;
        pdb_140dd3ab0(&cStack_68,piVar7 + 4);
        if (cStack_68 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_67;
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_74,uStack_78);
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_6c,uStack_70);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_84,uStack_88);
          *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_7c,uStack_80);
          *param_1 = '2';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
          *(undefined4 *)(param_1 + 0x32) = uStack_36;
          *(uint *)(param_1 + 0x36) = CONCAT22(uStack_30,uStack_32);
          *(undefined4 *)(param_1 + 0x3a) = uStack_2e;
          *(uint *)(param_1 + 0x3e) = CONCAT22(uStack_28,uStack_2a);
          *(undefined4 *)(param_1 + 0x22) = uStack_46;
          *(uint *)(param_1 + 0x26) = CONCAT22(uStack_40,uStack_42);
          *(undefined4 *)(param_1 + 0x2a) = uStack_3e;
          *(uint *)(param_1 + 0x2e) = CONCAT22(uStack_38,uStack_3a);
          *(undefined4 *)(param_1 + 0x12) = uStack_56;
          *(uint *)(param_1 + 0x16) = CONCAT13(uStack_4f,CONCAT12(uStack_50,uStack_52));
          *(undefined4 *)(param_1 + 0x1a) = uStack_4e;
          *(uint *)(param_1 + 0x1e) = CONCAT13(uStack_47,CONCAT12(uStack_48,uStack_4a));
          *(undefined4 *)(param_1 + 2) = uStack_66;
          *(uint *)(param_1 + 6) = CONCAT13(uStack_5f,CONCAT12(uStack_60,uStack_62));
          *(undefined4 *)(param_1 + 10) = uStack_5e;
          *(uint *)(param_1 + 0xe) = CONCAT13(uStack_57,CONCAT12(uStack_58,uStack_5a));
          *param_1 = cStack_68;
          param_1[1] = bStack_67;
          pdb_14230bf80(&uStack_88);
        }
      }
      else {
        uStack_98 = (undefined7)
                    (CONCAT26(uStack_42,CONCAT42(uStack_46,CONCAT11(uStack_47,uStack_48))) >> 8);
        *(ulonglong *)(param_1 + 0x38) = CONCAT26(uStack_2a,CONCAT42(uStack_2e,uStack_30));
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
        *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
        *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_32,CONCAT42(uStack_36,uStack_38));
        *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_98,uStack_48);
        *(ulonglong *)(param_1 + 0x11) =
             CONCAT17(uStack_50,CONCAT25(uStack_52,CONCAT41(uStack_56,uStack_57)));
        *(ulonglong *)(param_1 + 0x19) =
             CONCAT17(uStack_48,CONCAT25(uStack_4a,CONCAT41(uStack_4e,uStack_4f)));
        *(ulonglong *)(param_1 + 1) =
             CONCAT17(uStack_60,CONCAT25(uStack_62,CONCAT41(uStack_66,bStack_67)));
        *(ulonglong *)(param_1 + 9) =
             CONCAT17(uStack_58,CONCAT25(uStack_5a,CONCAT41(uStack_5e,uStack_5f)));
        *param_1 = cStack_68;
      }
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_30,CONCAT24(uStack_32,uStack_36));
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_28,CONCAT24(uStack_2a,uStack_2e));
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_40,CONCAT24(uStack_42,uStack_46));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_38,CONCAT24(uStack_3a,uStack_3e));
    *(ulonglong *)(param_1 + 0x12) =
         CONCAT17(uStack_4f,CONCAT16(uStack_50,CONCAT24(uStack_52,uStack_56)));
    *(ulonglong *)(param_1 + 0x1a) =
         CONCAT17(uStack_47,CONCAT16(uStack_48,CONCAT24(uStack_4a,uStack_4e)));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(uStack_5f,CONCAT16(uStack_60,CONCAT24(uStack_62,uStack_66)));
    *(ulonglong *)(param_1 + 10) =
         CONCAT17(uStack_57,CONCAT16(uStack_58,CONCAT24(uStack_5a,uStack_5e)));
    *param_1 = cStack_68;
    param_1[1] = bStack_67;
  }
  return param_1;
}

