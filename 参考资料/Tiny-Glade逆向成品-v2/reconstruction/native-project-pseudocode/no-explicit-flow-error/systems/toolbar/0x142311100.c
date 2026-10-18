// VA 0x142311100, PDB extent 422 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<toolbar::mei::config::NodeLayoutConfigAttrib> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<toolbar::mei::config::NodeLayoutConfigAttrib>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 422 */

char * pdb_142311100(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  int *piVar3;
  char cStack_b0;
  byte bStack_af;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined6 uStack_8c;
  undefined2 uStack_86;
  undefined6 uStack_84;
  undefined2 uStack_7e;
  undefined6 uStack_7c;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_49;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pdb_140dca8b0(&cStack_b0);
  if (cStack_b0 == '2') {
    if ((bStack_af & 1) == 0) {
      param_1[4] = '\t';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *param_1 = '2';
      return param_1;
    }
    pcVar2 = (char *)*param_2;
    if (*pcVar2 != '\0') {
      if (*(longlong *)(pcVar2 + 8) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(pcVar2 + 8) = *(longlong *)(pcVar2 + 8) + -1;
      pcVar2 = (char *)*param_2;
    }
    pdb_1423157f0(&cStack_b0,pcVar2,&UNK_14329f04d,0x16);
    if (cStack_b0 != '2') {
      uStack_49 = CONCAT31((int3)(CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90)) >> 8),uStack_90)
      ;
      *(undefined4 *)(param_1 + 0x44) = uStack_6c;
      *(ulonglong *)(param_1 + 0x34) = CONCAT26(uStack_76,uStack_7c);
      *(ulonglong *)(param_1 + 0x3c) = CONCAT26(uStack_6e,CONCAT24(uStack_70,uStack_74));
      *(ulonglong *)(param_1 + 0x24) = CONCAT26(uStack_86,uStack_8c);
      *(ulonglong *)(param_1 + 0x2c) = CONCAT26(uStack_7e,uStack_84);
      *(undefined4 *)(param_1 + 0x20) = uStack_49;
      *(ulonglong *)(param_1 + 0x11) =
           CONCAT17(uStack_98,CONCAT43(uStack_9c,CONCAT21(uStack_9e,uStack_9f)));
      *(ulonglong *)(param_1 + 0x19) =
           CONCAT17(uStack_90,CONCAT43(uStack_94,CONCAT21(uStack_96,uStack_97)));
      *(ulonglong *)(param_1 + 1) =
           CONCAT17(uStack_a8,CONCAT43(uStack_ac,CONCAT21(uStack_ae,bStack_af)));
      *(ulonglong *)(param_1 + 9) =
           CONCAT17(uStack_a0,CONCAT43(uStack_a4,CONCAT21(uStack_a6,uStack_a7)));
      *param_1 = cStack_b0;
      return param_1;
    }
    uStack_34 = CONCAT22(uStack_a6,CONCAT11(uStack_a7,uStack_a8));
    uStack_2c = CONCAT22(uStack_9e,CONCAT11(uStack_9f,uStack_a0));
    uStack_24 = CONCAT22(uStack_96,CONCAT11(uStack_97,uStack_98));
    uStack_1c = CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90));
    uStack_38 = uStack_ac;
    uStack_30 = uStack_a4;
    uStack_28 = uStack_9c;
    uStack_20 = uStack_94;
    piVar3 = (int *)*param_2;
    if (*piVar3 == 1) {
      lVar1 = -1;
      if (*(longlong *)(piVar3 + 2) + 1 != 0) {
        lVar1 = *(longlong *)(piVar3 + 2) + 1;
      }
      *(longlong *)(piVar3 + 2) = lVar1;
      piVar3 = (int *)*param_2;
    }
    pdb_140dd3ab0(&cStack_b0,piVar3 + 4);
    if (cStack_b0 == '2') {
      *(byte *)((longlong)param_2 + 9) = bStack_af;
      *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_24,uStack_28);
      *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_1c,uStack_20);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_34,uStack_38);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_2c,uStack_30);
      *param_1 = '2';
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
  *(ulonglong *)(param_1 + 0x32) = CONCAT62(uStack_7c,uStack_7e);
  *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_70,CONCAT42(uStack_74,uStack_76));
  *(ulonglong *)(param_1 + 0x22) = CONCAT62(uStack_8c,uStack_8e);
  *(ulonglong *)(param_1 + 0x2a) = CONCAT62(uStack_84,uStack_86);
  *(ulonglong *)(param_1 + 0x12) =
       CONCAT17(uStack_97,CONCAT16(uStack_98,CONCAT42(uStack_9c,uStack_9e)));
  *(ulonglong *)(param_1 + 0x1a) =
       CONCAT17(uStack_8f,CONCAT16(uStack_90,CONCAT42(uStack_94,uStack_96)));
  *(ulonglong *)(param_1 + 2) =
       CONCAT17(uStack_a7,CONCAT16(uStack_a8,CONCAT42(uStack_ac,uStack_ae)));
  *(ulonglong *)(param_1 + 10) =
       CONCAT17(uStack_9f,CONCAT16(uStack_a0,CONCAT42(uStack_a4,uStack_a6)));
  *param_1 = cStack_b0;
  param_1[1] = bStack_af;
  return param_1;
}

