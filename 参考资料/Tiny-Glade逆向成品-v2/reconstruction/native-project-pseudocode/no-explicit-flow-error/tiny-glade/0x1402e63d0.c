// VA 0x1402e63d0, PDB extent 373 bytes
// ron::de::impl$2::deserialize_byte_buf<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_byte_buf<serde::private::de::content::ContentVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 373 */

void pdb_1402e63d0(char *param_1,longlong param_2)

{
  undefined7 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_48;
  
  cVar5 = pdb_140dccd90(param_2 + 0x10,0x5b);
  if (cVar5 == '\0') {
    pdb_140dcd5f0(&uStack_a0,param_2 + 0x10);
    if ((char)uStack_a0 != '2') {
      *(uint *)(param_1 + 4) = CONCAT13(uStack_99,CONCAT21(uStack_9b,uStack_9c));
      *(uint *)(param_1 + 1) = CONCAT13(uStack_9c,uStack_a0._1_3_);
      *(undefined8 *)(param_1 + 0x20) = uStack_80;
      *(undefined8 *)(param_1 + 0x28) = uStack_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_70;
      *(undefined8 *)(param_1 + 0x38) = uStack_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_60;
      *param_1 = (char)uStack_a0;
      *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
      *(ulonglong *)(param_1 + 0x10) = CONCAT17(uStack_89,CONCAT61(uStack_8f,uStack_90));
      *(ulonglong *)(param_1 + 0x18) = CONCAT17(uStack_81,uStack_88);
      return;
    }
    lVar6 = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
    if (SBORROW8(0,lVar6)) {
      cVar5 = '\x0f';
      lVar6 = 0x18;
      lVar7 = 0x10;
    }
    else {
      *(longlong *)(param_1 + 0x10) = lVar6;
      cVar5 = '\x0e';
      lVar6 = 0x20;
      lVar7 = 0x18;
    }
    *(ulonglong *)(param_1 + lVar7) = CONCAT17(uStack_89,CONCAT61(uStack_8f,uStack_90));
    *(ulonglong *)(param_1 + lVar6) = CONCAT17(uStack_81,uStack_88);
    param_1[8] = cVar5;
  }
  else {
    pdb_1402cba20(&uStack_a0,param_2);
    uVar4 = uStack_98;
    if ((char)uStack_a0 != '2') {
      uStack_48 = (undefined7)(CONCAT17(uStack_89,CONCAT61(uStack_8f,uStack_90)) >> 8);
      *(undefined8 *)(param_1 + 0x40) = uStack_60;
      *(undefined8 *)(param_1 + 0x30) = uStack_70;
      *(undefined8 *)(param_1 + 0x38) = uStack_68;
      *(undefined8 *)(param_1 + 0x20) = uStack_80;
      *(undefined8 *)(param_1 + 0x28) = uStack_78;
      *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_48,uStack_90);
      *(ulonglong *)(param_1 + 0x18) = CONCAT17(uStack_81,uStack_88);
      *(ulonglong *)(param_1 + 1) =
           CONCAT17(uStack_98,
                    CONCAT16(uStack_99,CONCAT24(uStack_9b,CONCAT13(uStack_9c,uStack_a0._1_3_))));
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_90,CONCAT16(uStack_91,uStack_97));
      *param_1 = (char)uStack_a0;
      return;
    }
    uVar1 = CONCAT61(uStack_97,uStack_98);
    uVar3 = CONCAT61(uStack_8f,uStack_90);
    uVar2 = CONCAT17(uStack_89,uVar3);
    uStack_89 = (undefined1)uStack_88;
    uStack_88 = (undefined7)(CONCAT17(uStack_81,uStack_88) >> 8);
    uStack_98 = (undefined1)uStack_97;
    uStack_97 = (undefined6)(CONCAT17(uStack_91,uVar1) >> 0x10);
    uStack_8f = (undefined6)((ulonglong)uVar2 >> 0x10);
    param_1[8] = '\x0e';
    *(ulonglong *)(param_1 + 9) = CONCAT17(uVar4,CONCAT25(uStack_9b,CONCAT14(uStack_9c,uStack_a0)));
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_90,CONCAT61(uStack_97,uStack_98));
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_8f,(short)uVar3);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_88,uStack_89);
  }
  *param_1 = '2';
  return;
}

