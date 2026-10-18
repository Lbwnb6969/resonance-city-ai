// VA 0x14180dc90, PDB extent 644 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<alloc::string::String> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 644 */

char * pdb_14180dc90(char *param_1,undefined8 *param_2)

{
  ulonglong arg0;
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  byte *pbVar6;
  char cStack_98;
  byte bStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  int6 iStack_7e;
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
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = -0x80;
      *param_1 = '2';
      return param_1;
    }
    pcVar4 = (char *)*param_2;
    if (*pcVar4 != '\0') {
      if (*(longlong *)(pcVar4 + 8) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(pcVar4 + 8) = *(longlong *)(pcVar4 + 8) + -1;
      pcVar4 = (char *)*param_2;
    }
    pdb_140dd4910(&cStack_98,pcVar4 + 0x10);
    if (cStack_98 != '2') {
      *(undefined4 *)(param_1 + 4) = uStack_94;
      *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,bStack_97));
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_76,uStack_78);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_6e,uStack_70);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_66,uStack_68);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_8e,uStack_90);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_86,uStack_88);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_7e,uStack_80);
      *param_1 = cStack_98;
      return param_1;
    }
    uStack_48 = CONCAT62(uStack_8e,uStack_90);
    pbVar6 = (byte *)CONCAT62(uStack_86,uStack_88);
    arg0 = CONCAT62(iStack_7e,uStack_80);
    if (SBORROW8(0,uStack_48)) {
      if (iStack_7e < 0) {
        cVar1 = '\0';
LAB_14180dd2d:
        cStack_98 = cVar1;
        bStack_97 = pdb_142dc7e2a(cStack_98,arg0);
        goto LAB_14180dd38;
      }
      if (arg0 == 0) {
        pbVar6 = (byte *)0x1;
        uStack_48 = 0;
      }
      else {
        pdb_14007ee60();
        pbVar2 = pub_1406abab0(arg0,1);
        cVar1 = '\x01';
        if (pbVar2 == (byte *)0x0) goto LAB_14180dd2d;
        pub_142e32760(pbVar2,pbVar6,arg0);
        pbVar6 = pbVar2;
        uStack_48 = arg0;
      }
    }
    piVar5 = (int *)*param_2;
    if (*piVar5 == 1) {
      lVar3 = -1;
      if (*(longlong *)(piVar5 + 2) + 1 != 0) {
        lVar3 = *(longlong *)(piVar5 + 2) + 1;
      }
      *(longlong *)(piVar5 + 2) = lVar3;
      piVar5 = (int *)*param_2;
    }
    pbStack_50 = pbVar6;
    pdb_140dd3ab0(&cStack_98,piVar5 + 4);
    if (cStack_98 == '2') {
      *(byte *)((longlong)param_2 + 9) = bStack_97;
      *(ulonglong *)(param_1 + 8) = uStack_48;
      *(byte **)(param_1 + 0x10) = pbStack_50;
      *(ulonglong *)(param_1 + 0x18) = arg0;
      *param_1 = '2';
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_60,uStack_66);
      *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_58,uStack_5e);
      *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_70,uStack_76);
      *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_68,uStack_6e);
      *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_80,uStack_86);
      *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_78,iStack_7e);
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
LAB_14180dd38:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_60,uStack_66);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_58,uStack_5e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_70,uStack_76);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_68,uStack_6e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_80,uStack_86);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_78,iStack_7e);
    *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_90,CONCAT42(uStack_94,uStack_96));
    *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_88,uStack_8e);
    *param_1 = cStack_98;
    param_1[1] = bStack_97;
  }
  return param_1;
}

