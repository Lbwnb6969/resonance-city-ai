// VA 0x142310250, PDB extent 684 bytes
// ron::de::impl$6::next_value_seed<core::marker::PhantomData<toolbar::mei::config::LabelConfig> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$6::next_value_seed<core::marker::PhantomData<toolbar::mei::config::LabelConfig> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 684 */

char * pdb_142310250(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  byte *arg0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  char cStack_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  piVar2 = (int *)*param_2;
  piVar1 = piVar2 + 4;
  pdb_140dd4ac0(&cStack_88,piVar1);
  if (cStack_88 != '2') {
LAB_1423103b7:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_56,uStack_58);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_5e,uStack_60);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_76,uStack_78);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_81,
                  CONCAT16(cStack_82,
                           CONCAT15(cStack_83,
                                    CONCAT14(cStack_84,
                                             CONCAT13(cStack_85,
                                                      CONCAT12(cStack_86,
                                                               CONCAT11(cStack_87,cStack_88)))))));
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_79,
                  CONCAT16(cStack_7a,
                           CONCAT15(cStack_7b,
                                    CONCAT14(cStack_7c,
                                             CONCAT13(cStack_7d,
                                                      CONCAT12(cStack_7e,
                                                               CONCAT11(cStack_7f,cStack_80)))))));
    return param_1;
  }
  cVar10 = pdb_140dce020(piVar1,0x3a);
  if (cVar10 == '\0') {
    *param_1 = '\x12';
    return param_1;
  }
  pdb_140dd4ac0(&cStack_88,piVar1);
  if (cStack_88 != '2') goto LAB_1423103b7;
  if (*(char *)((longlong)param_2 + 10) == '\0') {
LAB_1423102e6:
    if ((char)*piVar2 != '\0') {
      if (*(longlong *)(piVar2 + 2) == 0) goto LAB_142310462;
      *(longlong *)(piVar2 + 2) = *(longlong *)(piVar2 + 2) + -1;
    }
    pdb_14231b180(&cStack_88,piVar2,&UNK_14329e7f0,5);
    uVar9 = uStack_64;
    uVar8 = uStack_6c;
    if (cStack_88 == '2') {
      uStack_38 = CONCAT17(cStack_79,
                           CONCAT16(cStack_7a,
                                    CONCAT15(cStack_7b,
                                             CONCAT14(cStack_7c,
                                                      CONCAT13(cStack_7d,
                                                               CONCAT12(cStack_7e,
                                                                        CONCAT11(cStack_7f,cStack_80
                                                                                )))))));
      arg0 = (byte *)CONCAT62(uStack_76,uStack_78);
      uVar7 = CONCAT62(uStack_4e,uStack_50);
      uVar5 = CONCAT62(uStack_5e,uStack_60);
      uVar6 = CONCAT62(uStack_56,uStack_58);
      uVar3 = CONCAT22(uStack_6e,uStack_70);
      uVar4 = CONCAT22(uStack_66,uStack_68);
      if (*piVar2 == 1) {
        lVar11 = -1;
        if (*(longlong *)(piVar2 + 2) + 1 != 0) {
          lVar11 = *(longlong *)(piVar2 + 2) + 1;
        }
        *(longlong *)(piVar2 + 2) = lVar11;
      }
      pdb_140dd3ab0(&cStack_88,piVar1);
      if (cStack_88 == '2') {
        *(char *)((longlong)param_2 + 9) = cStack_87;
        *(ulonglong *)(param_1 + 8) = uStack_38;
        *(byte **)(param_1 + 0x10) = arg0;
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar8,uVar3);
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar9,uVar4);
        *(undefined8 *)(param_1 + 0x28) = uVar5;
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        *(undefined8 *)(param_1 + 0x38) = uVar7;
        *param_1 = '2';
      }
      else {
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
        *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_50,uStack_56);
        *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_48,uStack_4e);
        *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_60,CONCAT42(uStack_64,uStack_66));
        *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_58,uStack_5e);
        *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_70,uStack_76);
        *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_68,CONCAT42(uStack_6c,uStack_6e));
        *(ulonglong *)(param_1 + 2) =
             CONCAT17(cStack_7f,
                      CONCAT16(cStack_80,
                               CONCAT15(cStack_81,
                                        CONCAT14(cStack_82,
                                                 CONCAT13(cStack_83,
                                                          CONCAT12(cStack_84,
                                                                   CONCAT11(cStack_85,cStack_86)))))
                              ));
        *(ulonglong *)(param_1 + 10) =
             CONCAT26(uStack_78,
                      CONCAT15(cStack_79,
                               CONCAT14(cStack_7a,
                                        CONCAT13(cStack_7b,
                                                 CONCAT12(cStack_7c,CONCAT11(cStack_7d,cStack_7e))))
                              ));
        *param_1 = cStack_88;
        param_1[1] = cStack_87;
        if (uStack_38 != 0) {
          pub_1406abac0(arg0,uStack_38,1);
        }
      }
    }
    else {
      *(uint *)(param_1 + 4) = CONCAT13(cStack_81,CONCAT12(cStack_82,CONCAT11(cStack_83,cStack_84)))
      ;
      *(uint *)(param_1 + 1) = CONCAT13(cStack_84,CONCAT12(cStack_85,CONCAT11(cStack_86,cStack_87)))
      ;
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_79,
                    CONCAT16(cStack_7a,
                             CONCAT15(cStack_7b,
                                      CONCAT14(cStack_7c,
                                               CONCAT13(cStack_7d,
                                                        CONCAT12(cStack_7e,
                                                                 CONCAT11(cStack_7f,cStack_80)))))))
      ;
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_76,uStack_78);
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_4e,uStack_50);
      *param_1 = cStack_88;
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
    }
  }
  else {
    pdb_140dca950(&cStack_88);
    auVar12[0] = -(cStack_88 == DAT_1434d8d20);
    auVar12[1] = -(cStack_87 == UNK_1434d8d21);
    auVar12[2] = -(cStack_86 == UNK_1434d8d22);
    auVar12[3] = -(cStack_85 == UNK_1434d8d23);
    auVar12[4] = -(cStack_84 == UNK_1434d8d24);
    auVar12[5] = -(cStack_83 == UNK_1434d8d25);
    auVar12[6] = -(cStack_82 == UNK_1434d8d26);
    auVar12[7] = -(cStack_81 == UNK_1434d8d27);
    auVar12[8] = -(cStack_80 == UNK_1434d8d28);
    auVar12[9] = -(cStack_7f == UNK_1434d8d29);
    auVar12[10] = -(cStack_7e == UNK_1434d8d2a);
    auVar12[0xb] = -(cStack_7d == UNK_1434d8d2b);
    auVar12[0xc] = -(cStack_7c == UNK_1434d8d2c);
    auVar12[0xd] = -(cStack_7b == UNK_1434d8d2d);
    auVar12[0xe] = -(cStack_7a == UNK_1434d8d2e);
    auVar12[0xf] = -(cStack_79 == UNK_1434d8d2f);
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) goto LAB_1423102e6;
    if (*piVar2 != 1) {
LAB_14231045d:
      *param_1 = '\x19';
      return param_1;
    }
    if (*(longlong *)(piVar2 + 2) != 0) {
      *(longlong *)(piVar2 + 2) = *(longlong *)(piVar2 + 2) + -1;
      goto LAB_14231045d;
    }
LAB_142310462:
    *param_1 = '0';
  }
  return param_1;
}

