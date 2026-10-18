// VA 0x142310c10, PDB extent 708 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<toolbar::mei::config::NodeOwnConfig> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$5::next_element_seed<core::marker::PhantomData<toolbar::mei::config::NodeOwnConfig>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 708 */

undefined8 * pdb_142310c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
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
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  char cStack_70;
  byte bStack_6f;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined2 uStack_58;
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
  undefined6 uStack_2e;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140dca8b0(&cStack_70);
  if (cStack_70 == '2') {
    if ((bStack_6f & 1) == 0) {
      param_1[1] = 0x8000000000000000;
    }
    else {
      pcVar9 = (char *)*param_2;
      if (*pcVar9 != '\0') {
        if (*(longlong *)(pcVar9 + 8) == 0) {
          *(undefined1 *)(param_1 + 1) = 0x30;
          goto LAB_142310d4d;
        }
        *(longlong *)(pcVar9 + 8) = *(longlong *)(pcVar9 + 8) + -1;
        pcVar9 = (char *)*param_2;
      }
      pdb_142318120(&cStack_70,pcVar9,&UNK_14329f080,0xd);
      uVar1 = CONCAT26(uStack_62,CONCAT42(uStack_66,uStack_68));
      uVar2 = CONCAT26(uStack_5a,CONCAT42(uStack_5e,uStack_60));
      uVar3 = CONCAT26(uStack_52,CONCAT42(uStack_56,uStack_58));
      uVar4 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
      uVar5 = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
      uVar6 = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
      uVar7 = CONCAT26(uStack_32,CONCAT42(uStack_36,uStack_38));
      uStack_78 = uStack_28;
      if (cStack_70 != '\0') {
        param_1[9] = uStack_28;
        param_1[7] = uVar7;
        param_1[8] = CONCAT62(uStack_2e,uStack_30);
        param_1[5] = uVar5;
        param_1[6] = uVar6;
        param_1[3] = uVar3;
        param_1[4] = uVar4;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        goto LAB_142310d4d;
      }
      piVar10 = (int *)*param_2;
      if (*piVar10 == 1) {
        lVar8 = -1;
        if (*(longlong *)(piVar10 + 2) + 1 != 0) {
          lVar8 = *(longlong *)(piVar10 + 2) + 1;
        }
        *(longlong *)(piVar10 + 2) = lVar8;
        piVar10 = (int *)*param_2;
      }
      uStack_c8 = uStack_28;
      uStack_158 = (undefined4)CONCAT42(uStack_66,uStack_68);
      uStack_154 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uStack_150 = (undefined4)CONCAT42(uStack_5e,uStack_60);
      uStack_14c = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_148 = (undefined4)CONCAT42(uStack_56,uStack_58);
      uStack_144 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_140 = (undefined4)CONCAT42(uStack_4e,uStack_50);
      uStack_13c = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_138 = (undefined4)CONCAT42(uStack_46,uStack_48);
      uStack_134 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_130 = (undefined4)CONCAT42(uStack_3e,uStack_40);
      uStack_12c = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_128 = (undefined4)CONCAT42(uStack_36,uStack_38);
      uStack_124 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_120 = (undefined4)CONCAT62(uStack_2e,uStack_30);
      uStack_11c = (undefined4)((uint6)uStack_2e >> 0x10);
      uStack_d8 = uStack_128;
      uStack_d4 = uStack_124;
      uStack_d0 = uStack_120;
      uStack_cc = uStack_11c;
      uStack_e8 = uStack_138;
      uStack_e4 = uStack_134;
      uStack_e0 = uStack_130;
      uStack_dc = uStack_12c;
      uStack_f8 = uStack_148;
      uStack_f4 = uStack_144;
      uStack_f0 = uStack_140;
      uStack_ec = uStack_13c;
      uStack_108 = uStack_158;
      uStack_104 = uStack_154;
      uStack_100 = uStack_150;
      uStack_fc = uStack_14c;
      pdb_140dd3ab0(&cStack_70,piVar10 + 4);
      if (cStack_70 != '2') {
        param_1[9] = CONCAT62(uStack_2e,uStack_30);
        *(undefined4 *)((longlong)param_1 + 0x3a) = uStack_3e;
        *(uint *)((longlong)param_1 + 0x3e) = CONCAT22(uStack_38,uStack_3a);
        *(undefined4 *)((longlong)param_1 + 0x42) = uStack_36;
        *(uint *)((longlong)param_1 + 0x46) = CONCAT22(uStack_30,uStack_32);
        *(undefined4 *)((longlong)param_1 + 0x2a) = uStack_4e;
        *(uint *)((longlong)param_1 + 0x2e) = CONCAT22(uStack_48,uStack_4a);
        *(undefined4 *)((longlong)param_1 + 0x32) = uStack_46;
        *(uint *)((longlong)param_1 + 0x36) = CONCAT22(uStack_40,uStack_42);
        *(undefined4 *)((longlong)param_1 + 0x1a) = uStack_5e;
        *(uint *)((longlong)param_1 + 0x1e) = CONCAT22(uStack_58,uStack_5a);
        *(undefined4 *)((longlong)param_1 + 0x22) = uStack_56;
        *(uint *)((longlong)param_1 + 0x26) = CONCAT22(uStack_50,uStack_52);
        *(undefined4 *)((longlong)param_1 + 10) = uStack_6e;
        *(uint *)((longlong)param_1 + 0xe) = CONCAT22(uStack_68,uStack_6a);
        *(undefined4 *)((longlong)param_1 + 0x12) = uStack_66;
        *(uint *)((longlong)param_1 + 0x16) = CONCAT22(uStack_60,uStack_62);
        *(char *)(param_1 + 1) = cStack_70;
        *(byte *)((longlong)param_1 + 9) = bStack_6f;
        *param_1 = 1;
        pdb_14117d570(&uStack_108);
        return param_1;
      }
      *(byte *)((longlong)param_2 + 9) = bStack_6f;
      param_1[9] = uStack_c8;
      param_1[7] = CONCAT44(uStack_d4,uStack_d8);
      param_1[8] = CONCAT44(uStack_cc,uStack_d0);
      param_1[5] = CONCAT44(uStack_e4,uStack_e8);
      param_1[6] = CONCAT44(uStack_dc,uStack_e0);
      param_1[3] = CONCAT44(uStack_f4,uStack_f8);
      param_1[4] = CONCAT44(uStack_ec,uStack_f0);
      param_1[1] = CONCAT44(uStack_104,uStack_108);
      param_1[2] = CONCAT44(uStack_fc,uStack_100);
    }
    *param_1 = 0;
  }
  else {
    param_1[9] = CONCAT62(uStack_2e,uStack_30);
    *(ulonglong *)((longlong)param_1 + 0x3a) = CONCAT26(uStack_38,CONCAT24(uStack_3a,uStack_3e));
    *(ulonglong *)((longlong)param_1 + 0x42) = CONCAT26(uStack_30,CONCAT24(uStack_32,uStack_36));
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_48,CONCAT24(uStack_4a,uStack_4e));
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_40,CONCAT24(uStack_42,uStack_46));
    *(ulonglong *)((longlong)param_1 + 0x1a) = CONCAT26(uStack_58,CONCAT24(uStack_5a,uStack_5e));
    *(ulonglong *)((longlong)param_1 + 0x22) = CONCAT26(uStack_50,CONCAT24(uStack_52,uStack_56));
    *(ulonglong *)((longlong)param_1 + 10) = CONCAT26(uStack_68,CONCAT24(uStack_6a,uStack_6e));
    *(ulonglong *)((longlong)param_1 + 0x12) = CONCAT26(uStack_60,CONCAT24(uStack_62,uStack_66));
    *(char *)(param_1 + 1) = cStack_70;
    *(byte *)((longlong)param_1 + 9) = bStack_6f;
LAB_142310d4d:
    *param_1 = 1;
  }
  return param_1;
}

