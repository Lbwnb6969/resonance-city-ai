// VA 0x142310ee0, PDB extent 534 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<tg_text::shape_stream::ShapeStreamItem> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<tg_text::shape_stream::ShapeStreamItem>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 534 */

char * pdb_142310ee0(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  char cStack_78;
  byte bStack_77;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  byte *pbStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140dca8b0(&cStack_78);
  if (cStack_78 == '2') {
    if ((bStack_77 & 1) == 0) {
      param_1[8] = '\x05';
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
      pcVar6 = (char *)*param_2;
      if (*pcVar6 != '\0') {
        if (*(longlong *)(pcVar6 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar6 + 8) = *(longlong *)(pcVar6 + 8) + -1;
        pcVar6 = (char *)*param_2;
      }
      pdb_142316410(&cStack_78,pcVar6,&UNK_14360c67c,0xf);
      uVar4 = uStack_54;
      uVar3 = uStack_5c;
      if (cStack_78 == '2') {
        uStack_28 = CONCAT62(uStack_6e,uStack_70);
        pbStack_30 = (byte *)CONCAT62(uStack_66,uStack_68);
        uVar1 = CONCAT22(uStack_5e,uStack_60);
        uVar2 = CONCAT22(uStack_56,uStack_58);
        piVar7 = (int *)*param_2;
        if (*piVar7 == 1) {
          lVar5 = -1;
          if (*(longlong *)(piVar7 + 2) + 1 != 0) {
            lVar5 = *(longlong *)(piVar7 + 2) + 1;
          }
          *(longlong *)(piVar7 + 2) = lVar5;
          piVar7 = (int *)*param_2;
        }
        pdb_140dd3ab0(&cStack_78,piVar7 + 4);
        if (cStack_78 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_77;
          *(ulonglong *)(param_1 + 8) = uStack_28;
          *(byte **)(param_1 + 0x10) = pbStack_30;
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar3,uVar1);
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar4,uVar2);
          *param_1 = '2';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_40,uStack_46);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_38,uStack_3e);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_50,CONCAT42(uStack_54,uStack_56));
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_48,uStack_4e);
          *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_60,uStack_66);
          *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_58,CONCAT42(uStack_5c,uStack_5e));
          *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_70,CONCAT42(uStack_74,uStack_76));
          *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_68,uStack_6e);
          *param_1 = cStack_78;
          param_1[1] = bStack_77;
          if (0 < (longlong)uStack_28) {
            pub_1406abac0(pbStack_30,uStack_28,1);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = uStack_74;
        *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_74,CONCAT21(uStack_76,bStack_77));
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_3e,uStack_40);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_4e,uStack_50);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_46,uStack_48);
        *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_6e,uStack_70);
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_66,uStack_68);
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
        *param_1 = cStack_78;
      }
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_40,uStack_46);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_38,uStack_3e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_50,CONCAT42(uStack_54,uStack_56));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_60,uStack_66);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_58,CONCAT42(uStack_5c,uStack_5e));
    *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_70,CONCAT42(uStack_74,uStack_76));
    *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_68,uStack_6e);
    *param_1 = cStack_78;
    param_1[1] = bStack_77;
  }
  return param_1;
}

