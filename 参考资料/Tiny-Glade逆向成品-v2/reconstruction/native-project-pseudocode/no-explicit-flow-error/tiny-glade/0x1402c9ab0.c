// VA 0x1402c9ab0, PDB extent 597 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<country_core::render::render_config::LastKnownGraphicsDevice> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<country_core::render::render_config::LastKnownGraphicsDevice>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 597 */

char * pdb_1402c9ab0(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined7 uStack_a8;
  char cStack_68;
  byte bStack_67;
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
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined6 uStack_2e;
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
      pcVar2 = (char *)*param_2;
      if (*pcVar2 != '\0') {
        if (*(longlong *)(pcVar2 + 8) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar2 + 8) = *(longlong *)(pcVar2 + 8) + -1;
        pcVar2 = (char *)*param_2;
      }
      pdb_1402e4a20(&cStack_68,pcVar2,&UNK_142e4800e,0x17);
      if (cStack_68 == '2') {
        piVar3 = (int *)*param_2;
        if (*piVar3 == 1) {
          lVar1 = -1;
          if (*(longlong *)(piVar3 + 2) + 1 != 0) {
            lVar1 = *(longlong *)(piVar3 + 2) + 1;
          }
          *(longlong *)(piVar3 + 2) = lVar1;
          piVar3 = (int *)*param_2;
        }
        uStack_108 = (undefined4)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
        uStack_104 = (undefined4)((uint6)uStack_5e >> 0x10);
        uStack_100 = (undefined4)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
        uStack_fc = (undefined4)((uint6)uStack_56 >> 0x10);
        uStack_f8 = (undefined4)CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
        uStack_f4 = (undefined4)((uint6)uStack_4e >> 0x10);
        uStack_f0 = (undefined4)CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
        uStack_ec = (undefined4)((uint6)uStack_46 >> 0x10);
        uStack_e8 = (undefined4)CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
        uStack_e4 = (undefined4)((uint6)uStack_3e >> 0x10);
        uStack_e0 = (undefined4)CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_38));
        uStack_dc = (undefined4)((uint6)uStack_36 >> 0x10);
        pdb_140dd3ab0(&cStack_68,piVar3 + 4);
        if (cStack_68 == '2') {
          *(byte *)((longlong)param_2 + 9) = bStack_67;
          *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_e4,uStack_e8);
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_dc,uStack_e0);
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_f4,uStack_f8);
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_ec,uStack_f0);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_104,uStack_108);
          *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_fc,uStack_100);
          *param_1 = '2';
        }
        else {
          *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
          *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_30,uStack_36);
          *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_28,uStack_2e);
          *(ulonglong *)(param_1 + 0x22) = CONCAT17(uStack_3f,CONCAT16(uStack_40,uStack_46));
          *(ulonglong *)(param_1 + 0x2a) = CONCAT17(uStack_37,CONCAT16(uStack_38,uStack_3e));
          *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_4f,CONCAT16(uStack_50,uStack_56));
          *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_47,CONCAT16(uStack_48,uStack_4e));
          *(ulonglong *)(param_1 + 2) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
          *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
          *param_1 = cStack_68;
          param_1[1] = bStack_67;
          if (CONCAT44(uStack_104,uStack_108) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_fc,uStack_100),CONCAT44(uStack_104,uStack_108),1);
          }
          if (CONCAT44(uStack_ec,uStack_f0) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_e4,uStack_e8),CONCAT44(uStack_ec,uStack_f0),1);
          }
        }
      }
      else {
        uStack_a8 = (undefined7)(CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_38)) >> 8);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,uStack_30);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
        *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_a8,uStack_38);
        *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_40,CONCAT61(uStack_46,uStack_47));
        *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_38,CONCAT61(uStack_3e,uStack_3f));
        *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_50,CONCAT61(uStack_56,uStack_57));
        *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_48,CONCAT61(uStack_4e,uStack_4f));
        *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_60,CONCAT61(uStack_66,bStack_67));
        *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_58,CONCAT61(uStack_5e,uStack_5f));
        *param_1 = cStack_68;
      }
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_30,uStack_36);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_28,uStack_2e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT17(uStack_3f,CONCAT16(uStack_40,uStack_46));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT17(uStack_37,CONCAT16(uStack_38,uStack_3e));
    *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_4f,CONCAT16(uStack_50,uStack_56));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_47,CONCAT16(uStack_48,uStack_4e));
    *(ulonglong *)(param_1 + 2) = CONCAT17(uStack_5f,CONCAT16(uStack_60,uStack_66));
    *(ulonglong *)(param_1 + 10) = CONCAT17(uStack_57,CONCAT16(uStack_58,uStack_5e));
    *param_1 = cStack_68;
    param_1[1] = bStack_67;
  }
  return param_1;
}

