// VA 0x1411845c0, PDB extent 709 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$2::visit_enum<serde_core::de::value::MapAccessDeserializer<ron::de::SerdeEnumContent> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$2::visit_enum<serde_core::de::value::MapAccessDeserializer<ron::de::SerdeEnumContent>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 709 */

char * pdb_1411845c0(char *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  longlong lVar3;
  char cStack_108;
  undefined1 uStack_107;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  char cStack_b8;
  undefined1 uStack_b7;
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
  undefined2 uStack_78;
  undefined6 uStack_76;
  
  piVar2 = *(int **)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  if (piVar2 == (int *)0x0) {
    cStack_b8 = '\v';
    pdb_142db7ac0(&cStack_108,&cStack_b8,&UNK_1434d9628,&UNK_1434d9638);
    if (cStack_108 != '2') {
LAB_14118475b:
      *(undefined4 *)(param_1 + 4) = uStack_104;
      *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_104,CONCAT21(uStack_106,uStack_107));
      uStack_b6 = (undefined6)(CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8)) >> 0x10);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_ce,uStack_d0);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_e6,uStack_e8);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_de,uStack_e0);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_fc,CONCAT22(uStack_fe,uStack_100));
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_b6,uStack_f8);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_ee,uStack_f0);
      *param_1 = cStack_108;
      return param_1;
    }
  }
  else {
    if ((*(longlong *)(param_2 + 4) != 5) || ((char)piVar2[1] != 'l' || *piVar2 != 0x6562614c)) {
      pdb_142db7e70(&cStack_b8,piVar2,*(longlong *)(param_2 + 4),&UNK_14329e7f8,1);
      if (cStack_b8 != '2') {
        uStack_c6 = uStack_76;
        uStack_d6 = uStack_86;
        uStack_d0 = uStack_80;
        uStack_ce = uStack_7e;
        uStack_c8 = uStack_78;
        uStack_e6 = uStack_96;
        uStack_e0 = uStack_90;
        uStack_de = uStack_8e;
        uStack_d8 = uStack_88;
        uStack_f6 = (undefined2)uStack_a6;
        uStack_f4 = (undefined4)((uint6)uStack_a6 >> 0x10);
        uStack_f0 = uStack_a0;
        uStack_ee = uStack_9e;
        uStack_e8 = uStack_98;
        uStack_106 = (undefined2)uStack_b6;
        uStack_104 = (undefined4)((uint6)uStack_b6 >> 0x10);
        uStack_100 = uStack_b0;
        uStack_fe = (undefined2)uStack_ae;
        uStack_fc = (undefined4)((uint6)uStack_ae >> 0x10);
        uStack_f8 = uStack_a8;
        cStack_108 = cStack_b8;
        uStack_107 = uStack_b7;
        goto LAB_14118475b;
      }
    }
    uStack_fc = param_2[1];
    uStack_f4 = param_2[3];
    uStack_100 = (undefined2)*param_2;
    uStack_fe = (undefined2)((uint)*param_2 >> 0x10);
    uStack_f8 = (undefined2)param_2[2];
    uStack_f6 = (undefined2)((uint)param_2[2] >> 0x10);
    uStack_f0 = (undefined2)*(undefined8 *)(param_2 + 4);
    uStack_ee = (undefined6)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x10);
  }
  lVar3 = CONCAT44(uStack_fc,CONCAT22(uStack_fe,uStack_100));
  pdb_140dd4ac0(&cStack_b8,lVar3 + 0x10);
  if (cStack_b8 == '2') {
    uVar1 = *(undefined1 *)(lVar3 + 0x69);
    *(undefined1 *)(lVar3 + 0x69) = 1;
    pdb_14231b180(&cStack_108,lVar3,&UNK_14329e7f0,5,&UNK_14329e830,7);
    *(undefined1 *)(lVar3 + 0x69) = uVar1;
    uStack_b7 = uStack_107;
    uStack_b0 = uStack_100;
    uStack_a8 = uStack_f8;
    uStack_a0 = uStack_f0;
    uStack_9e = uStack_ee;
    uStack_98 = uStack_e8;
    uStack_96 = uStack_e6;
    uStack_90 = uStack_e0;
    uStack_8e = uStack_de;
    uStack_88 = uStack_d8;
    uStack_86 = uStack_d6;
    uStack_80 = uStack_d0;
    uStack_7e = uStack_ce;
    uStack_78 = uStack_c8;
    uStack_76 = uStack_c6;
    cStack_b8 = cStack_108;
  }
  else {
    uStack_f6 = (undefined2)uStack_a6;
    uStack_f4 = (undefined4)((uint6)uStack_a6 >> 0x10);
    uStack_106 = (undefined2)uStack_b6;
    uStack_104 = (undefined4)((uint6)uStack_b6 >> 0x10);
    uStack_fe = (undefined2)uStack_ae;
    uStack_fc = (undefined4)((uint6)uStack_ae >> 0x10);
  }
  if (cStack_b8 == '2') {
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_7e,uStack_80);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_8e,uStack_90);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_86,uStack_88);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_9e,uStack_a0);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_96,uStack_98);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_fc,CONCAT22(uStack_fe,uStack_b0));
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_a8));
    *param_1 = '2';
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_76,uStack_78);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_86,uStack_88);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_7e,uStack_80);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_96,uStack_98);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_8e,uStack_90);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_a8));
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_9e,uStack_a0);
    *(ulonglong *)param_1 = CONCAT44(uStack_104,CONCAT22(uStack_106,CONCAT11(uStack_b7,cStack_b8)));
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_fc,CONCAT22(uStack_fe,uStack_b0));
  }
  return param_1;
}

