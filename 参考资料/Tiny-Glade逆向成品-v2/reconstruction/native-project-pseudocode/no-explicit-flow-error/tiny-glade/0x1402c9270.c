// VA 0x1402c9270, PDB extent 747 bytes
// ron::de::impl$6::next_value_seed<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$6::next_value_seed<serde::private::de::content::ContentVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 747 */

char * pdb_1402c9270(char *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_108 [8];
  undefined7 uStack_c8;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  undefined1 uStack_57;
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
  undefined6 uStack_36;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  piVar4 = (int *)*param_2;
  piVar1 = piVar4 + 4;
  pdb_140dd4ac0(&cStack_78,piVar1);
  if (cStack_78 != '2') {
LAB_1402c93b1:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
    *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
    *(ulonglong *)(param_1 + 0x38) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
    *(ulonglong *)(param_1 + 0x20) =
         CONCAT26(uStack_52,CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58)));
    *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT26(uStack_62,CONCAT42(uStack_66,CONCAT11(uStack_67,uStack_68)));
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT26(uStack_5a,CONCAT42(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_71,
                  CONCAT16(cStack_72,
                           CONCAT15(cStack_73,
                                    CONCAT14(cStack_74,
                                             CONCAT13(cStack_75,
                                                      CONCAT12(cStack_76,
                                                               CONCAT11(cStack_77,cStack_78)))))));
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_69,
                  CONCAT16(cStack_6a,
                           CONCAT15(cStack_6b,
                                    CONCAT14(cStack_6c,
                                             CONCAT13(cStack_6d,
                                                      CONCAT12(cStack_6e,
                                                               CONCAT11(cStack_6f,cStack_70)))))));
    return param_1;
  }
  cVar5 = pdb_140dce020(piVar1,0x3a);
  if (cVar5 == '\0') {
    *param_1 = '\x12';
    return param_1;
  }
  pdb_140dd4ac0(&cStack_78,piVar1);
  if (cStack_78 != '2') goto LAB_1402c93b1;
  if (*(char *)((longlong)param_2 + 10) != '\0') {
    pdb_140dca950(&cStack_78);
    auVar7[0] = -(cStack_78 == DAT_142e69750);
    auVar7[1] = -(cStack_77 == UNK_142e69751);
    auVar7[2] = -(cStack_76 == UNK_142e69752);
    auVar7[3] = -(cStack_75 == UNK_142e69753);
    auVar7[4] = -(cStack_74 == UNK_142e69754);
    auVar7[5] = -(cStack_73 == UNK_142e69755);
    auVar7[6] = -(cStack_72 == UNK_142e69756);
    auVar7[7] = -(cStack_71 == UNK_142e69757);
    auVar7[8] = -(cStack_70 == UNK_142e69758);
    auVar7[9] = -(cStack_6f == UNK_142e69759);
    auVar7[10] = -(cStack_6e == UNK_142e6975a);
    auVar7[0xb] = -(cStack_6d == UNK_142e6975b);
    auVar7[0xc] = -(cStack_6c == UNK_142e6975c);
    auVar7[0xd] = -(cStack_6b == UNK_142e6975d);
    auVar7[0xe] = -(cStack_6a == UNK_142e6975e);
    auVar7[0xf] = -(cStack_69 == UNK_142e6975f);
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        != 0xffff) {
      if (*piVar4 == 1) {
        if (*(longlong *)(piVar4 + 2) == 0) goto LAB_1402c94c2;
        *(longlong *)(piVar4 + 2) = *(longlong *)(piVar4 + 2) + -1;
      }
      pdb_140dd4910(&cStack_78,piVar1);
      if (cStack_78 != '2') {
        *(uint *)(param_1 + 4) =
             CONCAT13(cStack_71,CONCAT12(cStack_72,CONCAT11(cStack_73,cStack_74)));
        *(uint *)(param_1 + 1) =
             CONCAT13(cStack_74,CONCAT12(cStack_75,CONCAT11(cStack_76,cStack_77)));
        *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
        *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
        *(ulonglong *)(param_1 + 0x38) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
        *(ulonglong *)(param_1 + 8) =
             CONCAT17(cStack_69,
                      CONCAT16(cStack_6a,
                               CONCAT15(cStack_6b,
                                        CONCAT14(cStack_6c,
                                                 CONCAT13(cStack_6d,
                                                          CONCAT12(cStack_6e,
                                                                   CONCAT11(cStack_6f,cStack_70)))))
                              ));
        *(ulonglong *)(param_1 + 0x10) =
             CONCAT26(uStack_62,CONCAT42(uStack_66,CONCAT11(uStack_67,uStack_68)));
        *(ulonglong *)(param_1 + 0x18) =
             CONCAT26(uStack_5a,CONCAT42(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
        *(ulonglong *)(param_1 + 0x20) =
             CONCAT26(uStack_52,CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58)));
        *param_1 = cStack_78;
        return param_1;
      }
      lStack_b0 = CONCAT17(cStack_69,
                           CONCAT16(cStack_6a,
                                    CONCAT15(cStack_6b,
                                             CONCAT14(cStack_6c,
                                                      CONCAT13(cStack_6d,
                                                               CONCAT12(cStack_6e,
                                                                        CONCAT11(cStack_6f,cStack_70
                                                                                )))))));
      lVar6 = CONCAT26(uStack_62,CONCAT42(uStack_66,CONCAT11(uStack_67,uStack_68)));
      lStack_a0 = CONCAT26(uStack_5a,CONCAT42(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
      if (SBORROW8(0,lStack_b0)) {
        uStack_b8 = 0xd;
        lStack_a8 = lStack_a0;
        lStack_b0 = lVar6;
        lStack_a0 = param_4;
      }
      else {
        uStack_b8 = 0xc;
        lStack_a8 = lVar6;
      }
      puVar2 = &uStack_b8;
      iVar3 = *piVar4;
      goto joined_r0x0001402c9352;
    }
  }
  if ((char)*piVar4 != '\0') {
    if (*(longlong *)(piVar4 + 2) == 0) {
LAB_1402c94c2:
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(piVar4 + 2) = *(longlong *)(piVar4 + 2) + -1;
  }
  pdb_1402ca540(&cStack_78,piVar4);
  if (cStack_78 != '2') {
    uStack_c8 = (undefined7)
                (CONCAT26(uStack_52,CONCAT42(uStack_56,CONCAT11(uStack_57,uStack_58))) >> 8);
    *(ulonglong *)(param_1 + 0x38) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
    *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
    *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_c8,uStack_58);
    *(ulonglong *)(param_1 + 0x11) =
         CONCAT17(uStack_60,CONCAT25(uStack_62,CONCAT41(uStack_66,uStack_67)));
    *(ulonglong *)(param_1 + 0x19) =
         CONCAT17(uStack_58,CONCAT25(uStack_5a,CONCAT41(uStack_5e,uStack_5f)));
    *(ulonglong *)(param_1 + 1) =
         CONCAT17(cStack_70,
                  CONCAT16(cStack_71,
                           CONCAT15(cStack_72,
                                    CONCAT14(cStack_73,
                                             CONCAT13(cStack_74,
                                                      CONCAT12(cStack_75,
                                                               CONCAT11(cStack_76,cStack_77)))))));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17(uStack_68,
                  CONCAT16(cStack_69,
                           CONCAT15(cStack_6a,
                                    CONCAT14(cStack_6b,
                                             CONCAT13(cStack_6c,
                                                      CONCAT12(cStack_6d,
                                                               CONCAT11(cStack_6e,cStack_6f)))))));
    *param_1 = cStack_78;
    return param_1;
  }
  puVar2 = auStack_108;
  iVar3 = *piVar4;
joined_r0x0001402c9352:
  if (iVar3 == 1) {
    lVar6 = -1;
    if (*(longlong *)(piVar4 + 2) + 1 != 0) {
      lVar6 = *(longlong *)(piVar4 + 2) + 1;
    }
    *(longlong *)(piVar4 + 2) = lVar6;
  }
  cStack_78 = '2';
  uStack_98 = *puVar2;
  uStack_90 = puVar2[1];
  uStack_88 = *(undefined4 *)(puVar2 + 2);
  uStack_84 = *(undefined4 *)((longlong)puVar2 + 0x14);
  uStack_80 = *(undefined4 *)(puVar2 + 3);
  uStack_7c = *(undefined4 *)((longlong)puVar2 + 0x1c);
  pdb_140dd3ab0(&cStack_78,piVar1);
  if (cStack_78 == '2') {
    *(char *)((longlong)param_2 + 9) = cStack_77;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_84,uStack_88);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_1 + 8) = uStack_98;
    *(undefined8 *)(param_1 + 0x10) = uStack_90;
    *param_1 = '2';
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_36,uStack_38);
    *(undefined4 *)(param_1 + 0x32) = uStack_46;
    *(uint *)(param_1 + 0x36) = CONCAT22(uStack_40,uStack_42);
    *(undefined4 *)(param_1 + 0x3a) = uStack_3e;
    *(uint *)(param_1 + 0x3e) = CONCAT22(uStack_38,uStack_3a);
    *(undefined4 *)(param_1 + 0x22) = uStack_56;
    *(uint *)(param_1 + 0x26) = CONCAT22(uStack_50,uStack_52);
    *(undefined4 *)(param_1 + 0x2a) = uStack_4e;
    *(uint *)(param_1 + 0x2e) = CONCAT22(uStack_48,uStack_4a);
    *(undefined4 *)(param_1 + 0x12) = uStack_66;
    *(uint *)(param_1 + 0x16) = CONCAT13(uStack_5f,CONCAT12(uStack_60,uStack_62));
    *(undefined4 *)(param_1 + 0x1a) = uStack_5e;
    *(uint *)(param_1 + 0x1e) = CONCAT13(uStack_57,CONCAT12(uStack_58,uStack_5a));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_6f,
                  CONCAT16(cStack_70,
                           CONCAT15(cStack_71,
                                    CONCAT14(cStack_72,
                                             CONCAT13(cStack_73,
                                                      CONCAT12(cStack_74,
                                                               CONCAT11(cStack_75,cStack_76)))))));
    *(ulonglong *)(param_1 + 10) =
         CONCAT17(uStack_67,
                  CONCAT16(uStack_68,
                           CONCAT15(cStack_69,
                                    CONCAT14(cStack_6a,
                                             CONCAT13(cStack_6b,
                                                      CONCAT12(cStack_6c,
                                                               CONCAT11(cStack_6d,cStack_6e)))))));
    *param_1 = cStack_78;
    param_1[1] = cStack_77;
    pdb_1402c09b0(&uStack_98);
  }
  return param_1;
}

