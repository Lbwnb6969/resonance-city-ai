// VA 0x142310a20, PDB extent 485 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<alloc::vec::Vec<enum2$<toolbar::mei::config::NodeChild>,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<alloc::vec::Vec<enum2$<toolbar::mei::config::NodeChild>,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 485 */

char * pdb_142310a20(char *param_1,undefined8 *param_2)

{
  undefined6 uVar1;
  undefined6 uVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  undefined7 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  undefined2 uStack_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined2 uStack_48;
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
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = -0x80;
      *param_1 = '2';
    }
    else {
      pcVar4 = (char *)*param_2;
      if (*pcVar4 != '\0') {
        if (*(longlong *)(pcVar4 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar4 + 8) = *(longlong *)(pcVar4 + 8) + -1;
        pcVar4 = (char *)*param_2;
      }
      pdb_1423141a0(&cStack_68,pcVar4);
      if (cStack_68 == '2') {
        uStack_78 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
        uVar1 = CONCAT42(uStack_5e,CONCAT11(uStack_5f,uStack_60));
        uVar2 = CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58));
        piVar5 = (int *)*param_2;
        if (*piVar5 == 1) {
          lVar3 = -1;
          if (*(longlong *)(piVar5 + 2) + 1 != 0) {
            lVar3 = *(longlong *)(piVar5 + 2) + 1;
          }
          *(longlong *)(piVar5 + 2) = lVar3;
          piVar5 = (int *)*param_2;
        }
        uStack_a8 = (undefined4)uVar1;
        uStack_a4 = (undefined4)(CONCAT26(uStack_5a,uVar1) >> 0x20);
        uStack_a0 = (undefined4)uVar2;
        uStack_9c = (undefined4)(CONCAT26(uStack_52,uVar2) >> 0x20);
        uStack_88 = uStack_a8;
        uStack_84 = uStack_a4;
        uStack_80 = uStack_a0;
        uStack_7c = uStack_9c;
        pdb_140dd3ab0(&cStack_68,piVar5 + 4);
        if (cStack_68 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_67;
          *(undefined8 *)(param_1 + 0x18) = uStack_78;
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
          *(uint *)(param_1 + 0x16) = CONCAT22(uStack_50,uStack_52);
          *(undefined4 *)(param_1 + 0x1a) = uStack_4e;
          *(uint *)(param_1 + 0x1e) = CONCAT22(uStack_48,uStack_4a);
          *(undefined4 *)(param_1 + 2) = uStack_66;
          *(uint *)(param_1 + 6) = CONCAT13(uStack_5f,CONCAT12(uStack_60,uStack_62));
          *(undefined4 *)(param_1 + 10) = uStack_5e;
          *(uint *)(param_1 + 0xe) = CONCAT13(uStack_57,CONCAT12(uStack_58,uStack_5a));
          *param_1 = cStack_68;
          param_1[1] = bStack_67;
          pdb_141181530(&uStack_88);
        }
      }
      else {
        uStack_b8 = (undefined7)
                    (CONCAT26(uStack_52,CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58))) >> 8);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
        *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_32,CONCAT42(uStack_36,uStack_38));
        *(ulonglong *)(param_1 + 0x38) = CONCAT26(uStack_2a,CONCAT42(uStack_2e,uStack_30));
        *(ulonglong *)(param_1 + 0x20) = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
        *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
        *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_b8,uStack_58);
        *(ulonglong *)(param_1 + 0x18) = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
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
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_50,CONCAT24(uStack_52,uStack_56));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_48,CONCAT24(uStack_4a,uStack_4e));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(uStack_5f,CONCAT16(uStack_60,CONCAT24(uStack_62,uStack_66)));
    *(ulonglong *)(param_1 + 10) =
         CONCAT17(uStack_57,CONCAT16(uStack_58,CONCAT24(uStack_5a,uStack_5e)));
    *param_1 = cStack_68;
    param_1[1] = bStack_67;
  }
  return param_1;
}

