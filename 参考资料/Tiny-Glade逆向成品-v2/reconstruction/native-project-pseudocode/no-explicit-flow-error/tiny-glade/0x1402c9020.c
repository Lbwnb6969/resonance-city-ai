// VA 0x1402c9020, PDB extent 592 bytes
// ron::de::impl$6::next_value_seed<core::marker::PhantomData<serde_core::de::ignored_any::IgnoredAny> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$6::next_value_seed<core::marker::PhantomData<serde_core::de::ignored_any::IgnoredAny>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 592 */

void pdb_1402c9020(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong arg1;
  char cVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
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
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  
  piVar2 = (int *)*param_2;
  piVar1 = piVar2 + 4;
  pdb_140dd4ac0(&cStack_68,piVar1);
  if (cStack_68 != '2') {
LAB_1402c9120:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,CONCAT11(uStack_27,uStack_28));
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_38));
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30));
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_61,
                  CONCAT16(cStack_62,
                           CONCAT15(cStack_63,
                                    CONCAT14(cStack_64,
                                             CONCAT13(cStack_65,
                                                      CONCAT12(cStack_66,
                                                               CONCAT11(cStack_67,cStack_68)))))));
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_59,
                  CONCAT16(cStack_5a,
                           CONCAT15(cStack_5b,
                                    CONCAT14(cStack_5c,
                                             CONCAT13(cStack_5d,
                                                      CONCAT12(cStack_5e,
                                                               CONCAT11(cStack_5f,cStack_60)))))));
    return;
  }
  cVar3 = pdb_140dce020(piVar1,0x3a);
  if (cVar3 == '\0') {
    *param_1 = '\x12';
    return;
  }
  pdb_140dd4ac0(&cStack_68,piVar1);
  if (cStack_68 != '2') goto LAB_1402c9120;
  if (*(char *)((longlong)param_2 + 10) != '\0') {
    pdb_140dca950(&cStack_68);
    auVar5[0] = -(cStack_68 == DAT_142e69760);
    auVar5[1] = -(cStack_67 == UNK_142e69761);
    auVar5[2] = -(cStack_66 == UNK_142e69762);
    auVar5[3] = -(cStack_65 == UNK_142e69763);
    auVar5[4] = -(cStack_64 == UNK_142e69764);
    auVar5[5] = -(cStack_63 == UNK_142e69765);
    auVar5[6] = -(cStack_62 == UNK_142e69766);
    auVar5[7] = -(cStack_61 == UNK_142e69767);
    auVar5[8] = -(cStack_60 == UNK_142e69768);
    auVar5[9] = -(cStack_5f == UNK_142e69769);
    auVar5[10] = -(cStack_5e == UNK_142e6976a);
    auVar5[0xb] = -(cStack_5d == UNK_142e6976b);
    auVar5[0xc] = -(cStack_5c == UNK_142e6976c);
    auVar5[0xd] = -(cStack_5b == UNK_142e6976d);
    auVar5[0xe] = -(cStack_5a == UNK_142e6976e);
    auVar5[0xf] = -(cStack_59 == UNK_142e6976f);
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        != 0xffff) {
      if (*piVar2 == 1) {
        if (*(longlong *)(piVar2 + 2) == 0) goto LAB_1402c9224;
        *(longlong *)(piVar2 + 2) = *(longlong *)(piVar2 + 2) + -1;
      }
      pdb_140dd4910(&cStack_68,piVar1);
      if (cStack_68 != '2') {
        *(uint *)(param_1 + 4) =
             CONCAT13(cStack_61,CONCAT12(cStack_62,CONCAT11(cStack_63,cStack_64)));
        *(uint *)(param_1 + 1) =
             CONCAT13(cStack_64,CONCAT12(cStack_65,CONCAT11(cStack_66,cStack_67)));
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48));
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_38));
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30));
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,CONCAT11(uStack_27,uStack_28));
        *(ulonglong *)(param_1 + 8) =
             CONCAT17(cStack_59,
                      CONCAT16(cStack_5a,
                               CONCAT15(cStack_5b,
                                        CONCAT14(cStack_5c,
                                                 CONCAT13(cStack_5d,
                                                          CONCAT12(cStack_5e,
                                                                   CONCAT11(cStack_5f,cStack_60)))))
                              ));
        *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
        *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50));
        *param_1 = cStack_68;
        return;
      }
      arg1 = CONCAT17(cStack_59,
                      CONCAT16(cStack_5a,
                               CONCAT15(cStack_5b,
                                        CONCAT14(cStack_5c,
                                                 CONCAT13(cStack_5d,
                                                          CONCAT12(cStack_5e,
                                                                   CONCAT11(cStack_5f,cStack_60)))))
                              ));
      if ((arg1 & 0x7fffffffffffffff) != 0) {
        pub_1406abac0((byte *)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)),arg1,1);
      }
      goto LAB_1402c90dc;
    }
  }
  if ((char)*piVar2 != '\0') {
    if (*(longlong *)(piVar2 + 2) == 0) {
LAB_1402c9224:
      *param_1 = '0';
      return;
    }
    *(longlong *)(piVar2 + 2) = *(longlong *)(piVar2 + 2) + -1;
  }
  pdb_1402c9f70(&cStack_68,piVar2);
  if (cStack_68 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,CONCAT11(uStack_27,uStack_28));
    *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_30,CONCAT61(uStack_36,uStack_37));
    *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_28,CONCAT61(uStack_2e,uStack_2f));
    *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_40,CONCAT61(uStack_46,uStack_47));
    *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_38,CONCAT61(uStack_3e,uStack_3f));
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_50,CONCAT61(uStack_56,uStack_57));
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_48,CONCAT61(uStack_4e,uStack_4f));
    *(ulonglong *)(param_1 + 1) =
         CONCAT17(cStack_60,
                  CONCAT16(cStack_61,
                           CONCAT15(cStack_62,
                                    CONCAT14(cStack_63,
                                             CONCAT13(cStack_64,
                                                      CONCAT12(cStack_65,
                                                               CONCAT11(cStack_66,cStack_67)))))));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17(uStack_58,
                  CONCAT16(cStack_59,
                           CONCAT15(cStack_5a,
                                    CONCAT14(cStack_5b,
                                             CONCAT13(cStack_5c,
                                                      CONCAT12(cStack_5d,
                                                               CONCAT11(cStack_5e,cStack_5f)))))));
    *param_1 = cStack_68;
    return;
  }
LAB_1402c90dc:
  if (*piVar2 == 1) {
    lVar4 = -1;
    if (*(longlong *)(piVar2 + 2) + 1 != 0) {
      lVar4 = *(longlong *)(piVar2 + 2) + 1;
    }
    *(longlong *)(piVar2 + 2) = lVar4;
  }
  pdb_140dd3ab0(&cStack_68,piVar1);
  if (cStack_68 == '2') {
    *(char *)((longlong)param_2 + 9) = cStack_67;
    *param_1 = '2';
  }
  else {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,CONCAT11(uStack_27,uStack_28));
    *(ulonglong *)(param_1 + 0x32) = CONCAT17(uStack_2f,CONCAT16(uStack_30,uStack_36));
    *(ulonglong *)(param_1 + 0x3a) = CONCAT17(uStack_27,CONCAT16(uStack_28,uStack_2e));
    *(ulonglong *)(param_1 + 0x22) = CONCAT17(uStack_3f,CONCAT16(uStack_40,uStack_46));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT17(uStack_37,CONCAT16(uStack_38,uStack_3e));
    *(ulonglong *)(param_1 + 0x12) = CONCAT17(uStack_4f,CONCAT16(uStack_50,uStack_56));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT17(uStack_47,CONCAT16(uStack_48,uStack_4e));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_5f,
                  CONCAT16(cStack_60,
                           CONCAT15(cStack_61,
                                    CONCAT14(cStack_62,
                                             CONCAT13(cStack_63,
                                                      CONCAT12(cStack_64,
                                                               CONCAT11(cStack_65,cStack_66)))))));
    *(ulonglong *)(param_1 + 10) =
         CONCAT17(uStack_57,
                  CONCAT16(uStack_58,
                           CONCAT15(cStack_59,
                                    CONCAT14(cStack_5a,
                                             CONCAT13(cStack_5b,
                                                      CONCAT12(cStack_5c,
                                                               CONCAT11(cStack_5d,cStack_5e)))))));
    *param_1 = cStack_68;
    param_1[1] = cStack_67;
  }
  return;
}

