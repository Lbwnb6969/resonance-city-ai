// VA 0x142a929d0, PDB extent 666 bytes
// ron::de::impl$6::next_key_seed<core::marker::PhantomData<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$6::next_key_seed<core::marker::PhantomData<alloc::string::String> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 666 */

void pdb_142a929d0(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int *piVar2;
  byte *pbVar3;
  ulonglong arg0;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char cStack_88;
  byte bStack_87;
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
  int6 iStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  char *pcStack_40;
  undefined1 uStack_38;
  
  pdb_140dca8b0(&cStack_88);
  if (cStack_88 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_50,uStack_56);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_60,uStack_66);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_58,uStack_5e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_70,uStack_76);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_68,iStack_6e);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_7f,
                  CONCAT16(cStack_80,
                           CONCAT15(cStack_81,
                                    CONCAT14(cStack_82,
                                             CONCAT13(cStack_83,
                                                      CONCAT12(cStack_84,
                                                               CONCAT11(cStack_85,cStack_86)))))));
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_78,
                  CONCAT15(cStack_79,
                           CONCAT14(cStack_7a,
                                    CONCAT13(cStack_7b,
                                             CONCAT12(cStack_7c,CONCAT11(cStack_7d,cStack_7e))))));
    *param_1 = cStack_88;
    param_1[1] = bStack_87;
    return;
  }
  if ((bStack_87 & 1) == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
    *param_1 = '2';
    return;
  }
  pdb_140dcace0(&cStack_88);
  auVar8[0] = -(cStack_88 == DAT_142e696b0);
  auVar8[1] = -(bStack_87 == UNK_142e696b1);
  auVar8[2] = -(cStack_86 == UNK_142e696b2);
  auVar8[3] = -(cStack_85 == UNK_142e696b3);
  auVar8[4] = -(cStack_84 == UNK_142e696b4);
  auVar8[5] = -(cStack_83 == UNK_142e696b5);
  auVar8[6] = -(cStack_82 == UNK_142e696b6);
  auVar8[7] = -(cStack_81 == UNK_142e696b7);
  auVar8[8] = -(cStack_80 == UNK_142e696b8);
  auVar8[9] = -(cStack_7f == UNK_142e696b9);
  auVar8[10] = -(cStack_7e == UNK_142e696ba);
  auVar8[0xb] = -(cStack_7d == UNK_142e696bb);
  auVar8[0xc] = -(cStack_7c == UNK_142e696bc);
  auVar8[0xd] = -(cStack_7b == UNK_142e696bd);
  auVar8[0xe] = -(cStack_7a == UNK_142e696be);
  auVar8[0xf] = -(cStack_79 == UNK_142e696bf);
  *(bool *)((longlong)param_2 + 10) =
       (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
       == 0xffff;
  pcStack_40 = (char *)*param_2;
  cVar1 = *pcStack_40;
  if (*(char *)(param_2 + 1) == '\x01') {
    if (cVar1 != '\0') {
      if (*(longlong *)(pcStack_40 + 8) == 0) goto LAB_142a92ba2;
      *(longlong *)(pcStack_40 + 8) = *(longlong *)(pcStack_40 + 8) + -1;
      pcStack_40 = (char *)*param_2;
    }
    uStack_38 = 1;
LAB_142a92adc:
    pdb_142adcc60(&cStack_88,&pcStack_40);
    if (cStack_88 != '2') {
LAB_142a92b6f:
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_66,uStack_68);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_76,uStack_78);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_6e,uStack_70);
      *(ulonglong *)param_1 =
           CONCAT17(cStack_81,
                    CONCAT16(cStack_82,
                             CONCAT15(cStack_83,
                                      CONCAT14(cStack_84,
                                               CONCAT13(cStack_85,
                                                        CONCAT12(cStack_86,
                                                                 CONCAT11(bStack_87,cStack_88)))))))
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
      goto LAB_142a92c3e;
    }
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_6e,uStack_70);
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_79,
                  CONCAT16(cStack_7a,
                           CONCAT15(cStack_7b,
                                    CONCAT14(cStack_7c,
                                             CONCAT13(cStack_7d,
                                                      CONCAT12(cStack_7e,
                                                               CONCAT11(cStack_7f,cStack_80)))))));
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_76,uStack_78);
  }
  else {
    if (*(char *)(param_2 + 1) == '\x03') {
      if (cVar1 != '\0') {
        if (*(longlong *)(pcStack_40 + 8) == 0) goto LAB_142a92ba2;
        *(longlong *)(pcStack_40 + 8) = *(longlong *)(pcStack_40 + 8) + -1;
        pcStack_40 = (char *)*param_2;
      }
      uStack_38 = 0;
      goto LAB_142a92adc;
    }
    if (cVar1 != '\0') {
      if (*(longlong *)(pcStack_40 + 8) == 0) {
LAB_142a92ba2:
        *param_1 = '0';
        return;
      }
      *(longlong *)(pcStack_40 + 8) = *(longlong *)(pcStack_40 + 8) + -1;
      pcStack_40 = (char *)*param_2;
    }
    pdb_140dd4910(&cStack_88,pcStack_40 + 0x10);
    if (cStack_88 != '2') {
      *(uint *)(param_1 + 4) = CONCAT13(cStack_81,CONCAT12(cStack_82,CONCAT11(cStack_83,cStack_84)))
      ;
      *(uint *)(param_1 + 1) = CONCAT13(cStack_84,CONCAT12(cStack_85,CONCAT11(cStack_86,bStack_87)))
      ;
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_66,uStack_68);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_5e,uStack_60);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_56,uStack_58);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_4e,uStack_50);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_46,uStack_48);
      *param_1 = cStack_88;
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
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(iStack_6e,uStack_70);
      goto LAB_142a92c3e;
    }
    uVar5 = CONCAT17(cStack_79,
                     CONCAT16(cStack_7a,
                              CONCAT15(cStack_7b,
                                       CONCAT14(cStack_7c,
                                                CONCAT13(cStack_7d,
                                                         CONCAT12(cStack_7e,
                                                                  CONCAT11(cStack_7f,cStack_80))))))
                    );
    pbVar3 = (byte *)CONCAT62(uStack_76,uStack_78);
    arg0 = CONCAT62(iStack_6e,uStack_70);
    pbVar4 = pbVar3;
    if (SBORROW8(0,uVar5)) {
      if (-1 < iStack_6e) {
        if (arg0 == 0) {
          pbVar4 = (byte *)0x1;
          uVar5 = 0;
        }
        else {
          pdb_14007ee60(-uVar5);
          uVar7 = 1;
          pbVar4 = pub_1406abab0(arg0,1);
          if (pbVar4 == (byte *)0x0) goto LAB_142a92b64;
          pub_142e32760(pbVar4,pbVar3,arg0);
          uVar5 = arg0;
        }
        goto LAB_142a92c2f;
      }
      uVar7 = 0;
LAB_142a92b64:
      pdb_142dc7e2a(uVar7,arg0);
      goto LAB_142a92b6f;
    }
LAB_142a92c2f:
    *(ulonglong *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 0x10) = pbVar4;
    *(ulonglong *)(param_1 + 0x18) = arg0;
  }
  *param_1 = '2';
LAB_142a92c3e:
  piVar2 = (int *)*param_2;
  if (*piVar2 == 1) {
    lVar6 = -1;
    if (*(longlong *)(piVar2 + 2) + 1 != 0) {
      lVar6 = *(longlong *)(piVar2 + 2) + 1;
    }
    *(longlong *)(piVar2 + 2) = lVar6;
  }
  return;
}

