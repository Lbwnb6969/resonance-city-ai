// VA 0x14230fa50, PDB extent 696 bytes
// ron::de::impl$6::next_key_seed<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$6::next_key_seed<serde::private::de::content::ContentVisitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 696 */

char * pdb_14230fa50(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  char cStack_68;
  byte bStack_67;
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
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  undefined2 uStack_28;
  undefined6 uStack_26;
  
  pdb_140dca8b0(&cStack_68);
  if (cStack_68 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_30,uStack_36);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_28,uStack_2e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_40,uStack_46);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_38,uStack_3e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_50,uStack_56);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_5f,
                  CONCAT16(cStack_60,
                           CONCAT15(cStack_61,
                                    CONCAT14(cStack_62,
                                             CONCAT13(cStack_63,
                                                      CONCAT12(cStack_64,
                                                               CONCAT11(cStack_65,cStack_66)))))));
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_58,
                  CONCAT15(cStack_59,
                           CONCAT14(cStack_5a,
                                    CONCAT13(cStack_5b,
                                             CONCAT12(cStack_5c,CONCAT11(cStack_5d,cStack_5e))))));
    *param_1 = cStack_68;
    param_1[1] = bStack_67;
    return param_1;
  }
  if ((bStack_67 & 1) == 0) {
    param_1[8] = '\x16';
    *param_1 = '2';
    return param_1;
  }
  pdb_140dcace0(&cStack_68);
  auVar9[0] = -(cStack_68 == DAT_142e69750);
  auVar9[1] = -(bStack_67 == UNK_142e69751);
  auVar9[2] = -(cStack_66 == UNK_142e69752);
  auVar9[3] = -(cStack_65 == UNK_142e69753);
  auVar9[4] = -(cStack_64 == UNK_142e69754);
  auVar9[5] = -(cStack_63 == UNK_142e69755);
  auVar9[6] = -(cStack_62 == UNK_142e69756);
  auVar9[7] = -(cStack_61 == UNK_142e69757);
  auVar9[8] = -(cStack_60 == UNK_142e69758);
  auVar9[9] = -(cStack_5f == UNK_142e69759);
  auVar9[10] = -(cStack_5e == UNK_142e6975a);
  auVar9[0xb] = -(cStack_5d == UNK_142e6975b);
  auVar9[0xc] = -(cStack_5c == UNK_142e6975c);
  auVar9[0xd] = -(cStack_5b == UNK_142e6975d);
  auVar9[0xe] = -(cStack_5a == UNK_142e6975e);
  auVar9[0xf] = -(cStack_59 == UNK_142e6975f);
  *(bool *)((longlong)param_2 + 10) =
       (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf)
       == 0xffff;
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  if (*(char *)(param_2 + 1) == '\x01') {
    if (cVar1 != '\0') {
      if (*(longlong *)(pcVar6 + 8) == 0) goto LAB_14230fc07;
      *(longlong *)(pcVar6 + 8) = *(longlong *)(pcVar6 + 8) + -1;
      pcVar6 = (char *)*param_2;
    }
    pdb_140dd4910(&cStack_68,pcVar6 + 0x10);
    if (cStack_68 != '2') {
      *(uint *)(param_1 + 4) = CONCAT13(cStack_61,CONCAT12(cStack_62,CONCAT11(cStack_63,cStack_64)))
      ;
      *(uint *)(param_1 + 1) = CONCAT13(cStack_64,CONCAT12(cStack_65,CONCAT11(cStack_66,bStack_67)))
      ;
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_36,uStack_38);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,uStack_30);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
      *param_1 = cStack_68;
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_59,
                    CONCAT16(cStack_5a,
                             CONCAT15(cStack_5b,
                                      CONCAT14(cStack_5c,
                                               CONCAT13(cStack_5d,
                                                        CONCAT12(cStack_5e,
                                                                 CONCAT11(cStack_5f,cStack_60)))))))
      ;
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,uStack_48);
      goto LAB_14230fcdf;
    }
    lVar3 = CONCAT17(cStack_59,
                     CONCAT16(cStack_5a,
                              CONCAT15(cStack_5b,
                                       CONCAT14(cStack_5c,
                                                CONCAT13(cStack_5d,
                                                         CONCAT12(cStack_5e,
                                                                  CONCAT11(cStack_5f,cStack_60))))))
                    );
    lVar8 = CONCAT62(uStack_56,uStack_58);
    if (SBORROW8(0,lVar3)) {
      uVar4 = 0xd;
      lVar3 = lVar8;
      lVar8 = CONCAT62(uStack_4e,uStack_50);
    }
    else {
      uVar4 = 0xc;
    }
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar8;
    *(longlong *)(param_1 + 0x20) = CONCAT62(uStack_4e,uStack_50);
  }
  else {
    if (*(char *)(param_2 + 1) == '\x03') {
      if (cVar1 != '\0') {
        if (*(longlong *)(pcVar6 + 8) == 0) {
LAB_14230fc07:
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(pcVar6 + 8) = *(longlong *)(pcVar6 + 8) + -1;
        pcVar6 = (char *)*param_2;
      }
      pdb_140dcce90(&cStack_68,pcVar6 + 0x10);
      if (cStack_68 == '2') {
        uVar4 = CONCAT17(cStack_59,
                         CONCAT16(cStack_5a,
                                  CONCAT15(cStack_5b,
                                           CONCAT14(cStack_5c,
                                                    CONCAT13(cStack_5d,
                                                             CONCAT12(cStack_5e,
                                                                      CONCAT11(cStack_5f,cStack_60))
                                                            )))));
        uVar5 = CONCAT62(uStack_56,uStack_58);
        *(undefined8 *)(pcVar6 + 0x58) = uVar4;
        *(undefined8 *)(pcVar6 + 0x60) = uVar5;
        uVar7 = 0xd;
      }
      else {
        *(uint *)(param_1 + 4) =
             CONCAT13(cStack_61,CONCAT12(cStack_62,CONCAT11(cStack_63,cStack_64)));
        *(uint *)(param_1 + 1) =
             CONCAT13(cStack_64,CONCAT12(cStack_65,CONCAT11(cStack_66,bStack_67)));
        uVar7 = CONCAT17(cStack_59,
                         CONCAT16(cStack_5a,
                                  CONCAT15(cStack_5b,
                                           CONCAT14(cStack_5c,
                                                    CONCAT13(cStack_5d,
                                                             CONCAT12(cStack_5e,
                                                                      CONCAT11(cStack_5f,cStack_60))
                                                            )))));
        uVar4 = CONCAT62(uStack_56,uStack_58);
        uVar5 = CONCAT62(uStack_4e,uStack_50);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,uStack_30);
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_3e,uStack_40);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_36,uStack_38);
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,uStack_48);
      }
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      *param_1 = cStack_68;
      goto LAB_14230fcdf;
    }
    if (cVar1 != '\0') {
      if (*(longlong *)(pcVar6 + 8) == 0) goto LAB_14230fc07;
      *(longlong *)(pcVar6 + 8) = *(longlong *)(pcVar6 + 8) + -1;
      pcVar6 = (char *)*param_2;
    }
    pdb_142311ff0(&cStack_68,pcVar6);
    if (cStack_68 != '2') {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_26,uStack_28);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_36,uStack_38);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_2e,uStack_30);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_3e,uStack_40);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)param_1 =
           CONCAT17(cStack_61,
                    CONCAT16(cStack_62,
                             CONCAT15(cStack_63,
                                      CONCAT14(cStack_64,
                                               CONCAT13(cStack_65,
                                                        CONCAT12(cStack_66,
                                                                 CONCAT11(bStack_67,cStack_68)))))))
      ;
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_59,
                    CONCAT16(cStack_5a,
                             CONCAT15(cStack_5b,
                                      CONCAT14(cStack_5c,
                                               CONCAT13(cStack_5d,
                                                        CONCAT12(cStack_5e,
                                                                 CONCAT11(cStack_5f,cStack_60)))))))
      ;
      goto LAB_14230fcdf;
    }
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_4e,uStack_50);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_59,
                  CONCAT16(cStack_5a,
                           CONCAT15(cStack_5b,
                                    CONCAT14(cStack_5c,
                                             CONCAT13(cStack_5d,
                                                      CONCAT12(cStack_5e,
                                                               CONCAT11(cStack_5f,cStack_60)))))));
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_56,uStack_58);
  }
  *param_1 = '2';
LAB_14230fcdf:
  piVar2 = (int *)*param_2;
  if (*piVar2 == 1) {
    lVar3 = -1;
    if (*(longlong *)(piVar2 + 2) + 1 != 0) {
      lVar3 = *(longlong *)(piVar2 + 2) + 1;
    }
    *(longlong *)(piVar2 + 2) = lVar3;
  }
  return param_1;
}

