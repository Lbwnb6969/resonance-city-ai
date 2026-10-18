// VA 0x1402cfe40, PDB extent 686 bytes
// ron::de::impl$2::deserialize_tuple<serde_core::de::ignored_any::IgnoredAny>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_tuple<serde_core::de::ignored_any::IgnoredAny>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 686 */

void pdb_1402cfe40(char *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int *piStack_d0;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  char cStack_c0;
  char cStack_bf;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined6 uStack_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  
  cVar1 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar1 = pdb_140dce020(param_2 + 4,0x28);
    if (cVar1 == '\0') {
      *param_1 = '\x15';
      return;
    }
    cVar1 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_c8 = 0x102;
  uStack_c6 = 0;
  piStack_d0 = param_2;
  pdb_140dca8b0(&cStack_c0,&piStack_d0);
  if (cStack_c0 == '2') {
    do {
      if (cStack_bf != '\x01') {
        if (*param_2 == 1) {
          lVar2 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar2 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar2;
        }
        pdb_140dd4ac0(&cStack_c0,param_2 + 4);
        if (cStack_c0 == '2') {
          if ((cVar1 == '\0') && (cVar1 = pdb_140dce020(param_2 + 4,0x29), cVar1 == '\0')) {
            *param_1 = '\x17';
            return;
          }
          *param_1 = '2';
          return;
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_7e,uStack_80);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_8e,uStack_90);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_86,uStack_88);
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_9e,uStack_a0);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_96,uStack_98);
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_ae,uStack_b0);
        *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_a6,uStack_a8);
        *(ulonglong *)param_1 = CONCAT62(uStack_be,CONCAT11(cStack_bf,cStack_c0));
        *(ulonglong *)(param_1 + 8) = CONCAT62(uStack_b6,uStack_b8);
        return;
      }
      if (*piStack_d0 == 1) {
        if (*(longlong *)(piStack_d0 + 2) == 0) {
          cStack_c0 = '0';
          cStack_bf = '\x01';
          goto LAB_1402cffb1;
        }
        *(longlong *)(piStack_d0 + 2) = *(longlong *)(piStack_d0 + 2) + -1;
      }
      pdb_1402c9f70(&cStack_c0);
      if (cStack_c0 != '2') {
        uStack_78 = CONCAT26(uStack_b8,uStack_be);
        uStack_70 = CONCAT26(uStack_b0,uStack_b6);
        uStack_68 = CONCAT26(uStack_a8,uStack_ae);
        uStack_60 = CONCAT26(uStack_a0,uStack_a6);
        uStack_58 = CONCAT26(uStack_98,uStack_9e);
        uStack_50 = CONCAT26(uStack_90,uStack_96);
        uStack_48 = CONCAT26(uStack_88,uStack_8e);
        uStack_40 = uStack_86;
        uStack_3a = uStack_80;
        uStack_38 = uStack_7e;
        goto LAB_1402cffb1;
      }
      if (*piStack_d0 == 1) {
        lVar2 = *(longlong *)(piStack_d0 + 2) + 1;
        if (lVar2 == 0) {
          lVar2 = -1;
        }
        *(longlong *)(piStack_d0 + 2) = lVar2;
      }
      pdb_140dd3ab0(&cStack_c0,piStack_d0 + 4);
      if (cStack_c0 != '2') break;
      uStack_c8 = CONCAT11(cStack_bf,(undefined1)uStack_c8);
      pdb_140dca8b0(&cStack_c0,&piStack_d0);
    } while (cStack_c0 == '2');
  }
  uStack_38 = uStack_7e;
  uStack_78 = CONCAT26(uStack_b8,uStack_be);
  uStack_70 = CONCAT26(uStack_b0,uStack_b6);
  uStack_68 = CONCAT26(uStack_a8,uStack_ae);
  uStack_60 = CONCAT26(uStack_a0,uStack_a6);
  uStack_58 = CONCAT26(uStack_98,uStack_9e);
  uStack_50 = CONCAT26(uStack_90,uStack_96);
  uStack_48 = CONCAT26(uStack_88,uStack_8e);
  uStack_40 = uStack_86;
  uStack_3a = uStack_80;
LAB_1402cffb1:
  param_1[1] = cStack_bf;
  *(undefined8 *)(param_1 + 2) = uStack_78;
  *(undefined8 *)(param_1 + 10) = uStack_70;
  *(undefined8 *)(param_1 + 0x12) = uStack_68;
  *(undefined8 *)(param_1 + 0x1a) = uStack_60;
  *(undefined8 *)(param_1 + 0x22) = uStack_58;
  *(undefined8 *)(param_1 + 0x2a) = uStack_50;
  *(undefined8 *)(param_1 + 0x32) = uStack_48;
  *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_3a,uStack_40);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_38,uStack_3a);
  *param_1 = cStack_c0;
  return;
}

