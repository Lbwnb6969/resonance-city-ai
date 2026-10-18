// VA 0x1402c9890, PDB extent 529 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<rhapsody::raw::init::GraphicsLayerAllowlistItem> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<enum2$<rhapsody::raw::init::GraphicsLayerAllowlistItem>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 529 */

char * pdb_1402c9890(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  int *piVar6;
  char cStack_98;
  byte bStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined6 uStack_8e;
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
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140dca8b0(&cStack_98);
  if (cStack_98 == '2') {
    if ((bStack_97 & 1) == 0) {
      param_1[8] = '\x02';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *param_1 = '2';
    }
    else {
      pcVar5 = (char *)*param_2;
      if (*pcVar5 != '\0') {
        if (*(longlong *)(pcVar5 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar5 + 8) = *(longlong *)(pcVar5 + 8) + -1;
        pcVar5 = (char *)*param_2;
      }
      pdb_1402ce410(&cStack_98,pcVar5,&UNK_142f38f84,0x1a);
      if (cStack_98 == '2') {
        piVar6 = (int *)*param_2;
        if (*piVar6 == 1) {
          lVar4 = -1;
          if (*(longlong *)(piVar6 + 2) + 1 != 0) {
            lVar4 = *(longlong *)(piVar6 + 2) + 1;
          }
          *(longlong *)(piVar6 + 2) = lVar4;
          piVar6 = (int *)*param_2;
        }
        uStack_48 = CONCAT62(uStack_86,uStack_88);
        uVar1 = CONCAT62(uStack_8e,uStack_90);
        uVar2 = CONCAT62(uStack_86,uStack_88);
        pbStack_50 = (byte *)CONCAT62(uStack_7e,uStack_80);
        uVar3 = CONCAT62(uStack_76,uStack_78);
        pdb_140dd3ab0(&cStack_98,piVar6 + 4);
        if (cStack_98 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_97;
          *(undefined8 *)(param_1 + 8) = uVar1;
          *(undefined8 *)(param_1 + 0x10) = uVar2;
          *(byte **)(param_1 + 0x18) = pbStack_50;
          *(undefined8 *)(param_1 + 0x20) = uVar3;
          *param_1 = '2';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_60,uStack_66);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_58,uStack_5e);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_70,uStack_76);
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_68,uStack_6e);
          *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_80,uStack_86);
          *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_78,uStack_7e);
          *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_90,CONCAT42(uStack_94,uStack_96));
          *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_88,uStack_8e);
          *param_1 = cStack_98;
          param_1[1] = bStack_97;
          if (uStack_48 != 0) {
            pub_1406abac0(pbStack_50,uStack_48,1);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = uStack_94;
        *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,bStack_97));
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_6e,uStack_70);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_66,uStack_68);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_5e,uStack_60);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
        *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_8e,uStack_90);
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_86,uStack_88);
        *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_7e,uStack_80);
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_76,uStack_78);
        *param_1 = cStack_98;
      }
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_60,uStack_66);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_58,uStack_5e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_70,uStack_76);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_68,uStack_6e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_80,uStack_86);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_78,uStack_7e);
    *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_90,CONCAT42(uStack_94,uStack_96));
    *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_88,uStack_8e);
    *param_1 = cStack_98;
    param_1[1] = bStack_97;
  }
  return param_1;
}

