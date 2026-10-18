// VA 0x1402c9d10, PDB extent 602 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<tiny_glade::app_config::VulkanLayerAllowlistDefaults> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<tiny_glade::app_config::VulkanLayerAllowlistDefaults>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 602 */

char * pdb_1402c9d10(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined7 uStack_a8;
  char cStack_78;
  byte bStack_77;
  undefined6 uStack_76;
  undefined1 uStack_70;
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
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140dca8b0(&cStack_78);
  if (cStack_78 == '2') {
    if ((bStack_77 & 1) == 0) {
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
      pcVar1 = (char *)*param_2;
      if (*pcVar1 != '\0') {
        if (*(longlong *)(pcVar1 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar1 + 8) = *(longlong *)(pcVar1 + 8) + -1;
        pcVar1 = (char *)*param_2;
      }
      pdb_1402ded60(&cStack_78,pcVar1,&UNK_142f45bc0,0x1c);
      if (cStack_78 == '2') {
        piVar2 = (int *)*param_2;
        if (*piVar2 == 1) {
          lVar3 = -1;
          if (*(longlong *)(piVar2 + 2) + 1 != 0) {
            lVar3 = *(longlong *)(piVar2 + 2) + 1;
          }
          *(longlong *)(piVar2 + 2) = lVar3;
          piVar2 = (int *)*param_2;
        }
        uStack_e8 = (undefined4)CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
        uStack_e4 = (undefined4)((uint6)uStack_6e >> 0x10);
        uStack_e0 = (undefined4)CONCAT62(uStack_66,CONCAT11(uStack_67,uStack_68));
        uStack_dc = (undefined4)((uint6)uStack_66 >> 0x10);
        uStack_d8 = (undefined4)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
        uStack_d4 = (undefined4)((uint6)uStack_5e >> 0x10);
        uStack_d0 = (undefined4)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
        uStack_cc = (undefined4)((uint6)uStack_56 >> 0x10);
        pdb_140dd3ab0(&cStack_78,piVar2 + 4);
        if (cStack_78 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_77;
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_d4,uStack_d8);
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_cc,uStack_d0);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_e4,uStack_e8);
          *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_dc,uStack_e0);
          *param_1 = '2';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_40,uStack_46);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_38,uStack_3e);
          *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_50,uStack_56);
          *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_48,uStack_4e);
          *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
          *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
          *(ulonglong *)(param_1 + 2) = CONCAT17(uStack_6f,CONCAT16(uStack_70,uStack_76));
          *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_67,CONCAT16(uStack_68,uStack_6e));
          *param_1 = cStack_78;
          param_1[1] = bStack_77;
          lVar3 = CONCAT44(uStack_d4,uStack_d8);
          if (lVar3 != 0) {
            pbVar4 = (byte *)CONCAT44(uStack_dc,uStack_e0) + 0x10;
            do {
              if (*(ulonglong *)(pbVar4 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
              }
              pbVar4 = pbVar4 + 0x20;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          if (CONCAT44(uStack_e4,uStack_e8) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_dc,uStack_e0),CONCAT44(uStack_e4,uStack_e8) << 5,8
                         );
          }
        }
      }
      else {
        uStack_a8 = (undefined7)(CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)) >> 8);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_3e,uStack_40);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_4e,uStack_50);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_46,uStack_48);
        *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_a8,uStack_58);
        *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_60,CONCAT61(uStack_66,uStack_67));
        *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_58,CONCAT61(uStack_5e,uStack_5f));
        *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_70,CONCAT61(uStack_76,bStack_77));
        *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_68,CONCAT61(uStack_6e,uStack_6f));
        *param_1 = cStack_78;
      }
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_40,uStack_46);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_38,uStack_3e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_50,uStack_56);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
    *(ulonglong *)(param_1 + 2) = CONCAT17(uStack_6f,CONCAT16(uStack_70,uStack_76));
    *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_67,CONCAT16(uStack_68,uStack_6e));
    *param_1 = cStack_78;
    param_1[1] = bStack_77;
  }
  return param_1;
}

