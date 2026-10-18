// VA 0x142d06870, PDB extent 2078 bytes
// ron::parse::Parser::integer<u8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::integer<u8>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 2078 */

char * pdb_142d06870(char *param_1,ulonglong param_2,undefined8 param_3,code *param_4)

{
  code cVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined2 uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 unaff_R12;
  undefined7 uVar18;
  undefined4 *unaff_R13;
  uint uVar19;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  char cStack_95;
  char cStack_94;
  byte bStack_93;
  undefined2 uStack_92;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined1 uStack_49;
  undefined8 uStack_48;
  code *pcVar15;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar11 = param_2;
  lVar5 = pdb_140dd3680(param_2);
  pdb_140dd13d0(&cStack_98,param_2);
  if (cStack_98 != '2') goto LAB_142d06a84;
  iVar2 = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
  uVar18 = (undefined7)((ulonglong)unaff_R12 >> 8);
  uVar17 = CONCAT71(uVar18,1);
  if (iVar2 == 0x2b) {
LAB_142d068db:
    pdb_140dd08d0(param_2);
    pcVar15 = param_4;
  }
  else {
    if (iVar2 == 0x62) goto LAB_142d06a02;
    pcVar15 = param_4;
    if (iVar2 == 0x2d) {
      uVar17 = CONCAT71(uVar18,0xff);
      goto LAB_142d068db;
    }
  }
  do {
    param_4 = pdb_1406318f0;
    pcVar6 = (code *)pdb_140dd1cf0(param_2);
    lVar7 = pdb_140dd3680(param_2);
    if (pcVar6 == (code *)0x0) {
      if (lVar7 != 0) goto LAB_142d06920;
    }
    else if (pcVar6 < param_4) {
      if (-0x41 < (char)pcVar6[lVar7]) {
LAB_142d06920:
        if (param_4 == pcVar6) goto LAB_142d0701e;
        cVar1 = pcVar6[lVar7];
        uVar19 = (uint)(byte)cVar1;
        if ((char)cVar1 < '\0') {
          uVar14 = (byte)pcVar6[lVar7 + 1] & 0x3f;
          pcVar15 = (code *)(ulonglong)uVar14;
          if ((byte)cVar1 < 0xe0) {
            uVar19 = (uVar19 & 0x1f) << 6 | uVar14;
          }
          else {
            pcVar15 = (code *)(ulonglong)(uVar14 << 6);
            uVar14 = (byte)pcVar6[lVar7 + 2] & 0x3f | uVar14 << 6;
            if ((byte)cVar1 < 0xf0) {
              uVar19 = uVar14 | (uVar19 & 0x1f) << 0xc;
            }
            else {
              uVar19 = (byte)pcVar6[lVar7 + 3] & 0x3f | uVar14 << 6 | (uVar19 & 7) << 0x12;
            }
          }
        }
        if ((uVar19 != 0x69) && (uVar19 != 0x75)) goto LAB_142d0701e;
        unaff_R13 = (undefined4 *)(param_2 + 0x18);
        uStack_a8 = *(undefined8 *)(param_2 + 0x28);
        uStack_b8 = *(undefined8 *)(param_2 + 0x18);
        uStack_b0 = *(undefined8 *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x24);
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(longlong *)(param_2 + 0x18) = (longlong)(pcVar6 + *(longlong *)(param_2 + 0x18));
        puVar12 = &UNK_1436b61b0;
        cVar3 = pdb_140dcf030(param_2,&UNK_1436b61b0,2);
        uVar13 = (undefined4)uVar17;
        if (cVar3 != '\0') {
          pdb_140dd3680(param_2);
          *unaff_R13 = (undefined4)uStack_b8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
          *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
          *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
          *(undefined8 *)(param_2 + 0x28) = uStack_a8;
          uVar17 = param_2;
          pdb_142d053e0(&cStack_98);
          uVar10 = (undefined2)uVar17;
          if (cStack_98 == '2') {
            uStack_90 = 0;
            cVar3 = cStack_98;
            uVar8 = uStack_97;
            goto LAB_142d06f0d;
          }
LAB_142d06d18:
          uStack_50 = CONCAT13(cStack_94,CONCAT12(cStack_95,CONCAT11(uStack_96,uStack_97)));
          uStack_4c = (undefined3)(CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94)) >> 8);
          goto LAB_142d06ee1;
        }
        puVar12 = &UNK_1436b61b2;
        cVar3 = pdb_140dcf030(param_2,&UNK_1436b61b2,3);
        if (cVar3 == '\0') {
          puVar12 = &UNK_1436b61b5;
          cVar3 = pdb_140dcf030(param_2,&UNK_1436b61b5,3);
          if (cVar3 != '\0') {
            pdb_140dd3680(param_2);
            *unaff_R13 = (undefined4)uStack_b8;
            *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
            *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
            *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
            *(undefined8 *)(param_2 + 0x28) = uStack_a8;
            pcVar9 = &cStack_98;
            uVar16 = param_2;
            pdb_142d051a0(pcVar9,param_2,uVar17 & 0xffffffff);
            uVar10 = (undefined2)uVar16;
            uVar8 = SUB81(pcVar9,0);
            if (cStack_98 != '2') goto LAB_142d06ed5;
            uStack_90 = 2;
            uVar13 = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
            cVar3 = cStack_98;
            goto LAB_142d06f0d;
          }
          puVar12 = &UNK_1436b61b8;
          cVar3 = pdb_140dcf030(param_2,&UNK_1436b61b8,3);
          if (cVar3 != '\0') {
            pdb_140dd3680(param_2);
            *unaff_R13 = (undefined4)uStack_b8;
            *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
            *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
            *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
            *(undefined8 *)(param_2 + 0x28) = uStack_a8;
            uVar8 = SUB81(&cStack_98,0);
            uVar17 = param_2;
            pdb_142d05870();
            uVar10 = (undefined2)uVar17;
            if (cStack_98 != '2') goto LAB_142d06ed5;
            uVar4 = 3;
            goto LAB_142d06c65;
          }
          puVar12 = &UNK_1436b61bb;
          cVar3 = pdb_140dcf030(param_2,&UNK_1436b61bb,2);
          if (cVar3 != '\0') {
            pdb_140dd3680(param_2);
            *unaff_R13 = (undefined4)uStack_b8;
            *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
            *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
            *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
            *(undefined8 *)(param_2 + 0x28) = uStack_a8;
            uVar17 = param_2;
            pdb_142d05990(&cStack_98);
            uVar10 = (undefined2)uVar17;
            if (cStack_98 != '2') goto LAB_142d06d18;
            uStack_90 = 4;
            cVar3 = cStack_98;
            uVar8 = uStack_97;
            goto LAB_142d06f0d;
          }
          puVar12 = &UNK_1436b61bd;
          cVar3 = pdb_140dcf030(param_2,&UNK_1436b61bd,3);
          if (cVar3 == '\0') {
            puVar12 = &UNK_1436b61c0;
            cVar3 = pdb_140dcf030(param_2,&UNK_1436b61c0,3);
            if (cVar3 == '\0') goto LAB_142d06e7b;
            pdb_140dd3680(param_2);
            *unaff_R13 = (undefined4)uStack_b8;
            *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
            *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
            *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
            *(undefined8 *)(param_2 + 0x28) = uStack_a8;
            pcVar9 = &cStack_98;
            uVar16 = param_2;
            pdb_142d04f60(pcVar9,param_2,uVar17 & 0xffffffff);
            uVar10 = (undefined2)uVar16;
            uVar8 = SUB81(pcVar9,0);
            if (cStack_98 != '2') goto LAB_142d06ed5;
            uStack_90 = 6;
            uVar13 = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
            cVar3 = cStack_98;
            goto LAB_142d06f0d;
          }
          pdb_140dd3680(param_2);
          *unaff_R13 = (undefined4)uStack_b8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
          *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
          *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
          *(undefined8 *)(param_2 + 0x28) = uStack_a8;
          pcVar9 = &cStack_98;
          pdb_142d052c0(pcVar9,param_2);
          uVar8 = SUB81(pcVar9,0);
          if (cStack_98 != '2') goto LAB_142d06ed5;
          uStack_90 = 5;
        }
        else {
          pdb_140dd3680(param_2);
          *unaff_R13 = (undefined4)uStack_b8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_b8._4_4_;
          *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_b0;
          *(undefined4 *)(param_2 + 0x24) = uStack_b0._4_4_;
          *(undefined8 *)(param_2 + 0x28) = uStack_a8;
          pcVar9 = &cStack_98;
          pdb_142d05080(pcVar9,param_2);
          uVar8 = SUB81(pcVar9,0);
          if (cStack_98 != '2') goto LAB_142d06ed5;
          uStack_90 = 1;
        }
        uVar10 = CONCAT11(cStack_95,uStack_96);
        cVar3 = cStack_98;
        goto LAB_142d06f0d;
      }
    }
    else if (lVar7 != 0 && pcVar6 == param_4) goto LAB_142d06920;
    pdb_142dc8070(lVar7);
LAB_142d06a02:
    cVar3 = pdb_140dcdeb0(param_2,&UNK_1436b6150,2);
    pcVar15 = param_4;
  } while (cVar3 == '\0');
  pdb_140dd5190(&cStack_98,param_2);
  if (cStack_98 != '2') {
LAB_142d06a84:
    param_1[3] = cStack_95;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_96,uStack_97);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_7c,uStack_80);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_74,uStack_78);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_64,uStack_68);
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_54,uStack_58);
    *(ulonglong *)(param_1 + 8) =
         CONCAT44(uStack_8c,CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_84,uStack_88);
    *param_1 = cStack_98;
    *(uint *)(param_1 + 4) = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
    return param_1;
  }
  uVar19 = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
  if (uVar19 == 0x5c) {
    pdb_140dce080(&cStack_98,param_2,0,1);
    if (cStack_98 != '2') {
      param_1[3] = cStack_95;
      *(ushort *)(param_1 + 1) = CONCAT11(uStack_96,uStack_97);
      *(uint *)(param_1 + 6) = CONCAT13(uStack_8f,CONCAT12(uStack_90,uStack_92));
      *(undefined2 *)(param_1 + 10) = uStack_8e;
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_88,uStack_8c);
      *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_80,uStack_84);
      *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_78,uStack_7c);
      *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_70,uStack_74);
      *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_68,uStack_6c);
      *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_60,uStack_64);
      *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_54,uStack_58);
      *param_1 = cStack_98;
      *(ushort *)(param_1 + 4) = CONCAT11(bStack_93,cStack_94);
      return param_1;
    }
    if (cStack_94 == '\x01') {
      *param_1 = '\x1d';
      *(undefined **)(param_1 + 8) = &UNK_1436b6152;
      param_1[0x10] = ')';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      return param_1;
    }
    uVar19 = (uint)bStack_93;
  }
  else if (0x7f < uVar19) goto LAB_142d06d7b;
  lVar7 = 0x27;
  cVar3 = pdb_140dce020(param_2);
  if (cVar3 == '\0') {
LAB_142d06d7b:
    *param_1 = '\v';
    return param_1;
  }
  pdb_140dd3680(param_2);
  uVar16 = uVar11 - lVar7;
  if (uVar16 == 0) {
    if (lVar5 != 0) goto LAB_142d06d5f;
  }
  else if (uVar16 < uVar11) {
    if (-0x41 < *(char *)(lVar5 + uVar16)) {
LAB_142d06d5f:
      uStack_97 = (undefined1)uVar19;
      cStack_98 = '\x04';
      pdb_140dd5560(param_1,&cStack_98,lVar5);
      return param_1;
    }
  }
  else if (lVar5 != 0 && lVar7 == 0) goto LAB_142d06d5f;
  pdb_142dc8070(lVar5,uVar11,0,uVar16,&UNK_1436b6180);
LAB_142d06e7b:
  puVar12 = &UNK_1436b61c3;
  cVar3 = pdb_140dcf030(param_2,&UNK_1436b61c3,3);
  if (cVar3 == '\0') {
    *(undefined8 *)(unaff_R13 + 4) = uStack_a8;
    *unaff_R13 = (undefined4)uStack_b8;
    unaff_R13[1] = uStack_b8._4_4_;
    unaff_R13[2] = (undefined4)uStack_b0;
    unaff_R13[3] = uStack_b0._4_4_;
LAB_142d0701e:
    pdb_140dd56f0(param_1,param_2,uVar17 & 0xffffffff);
    return param_1;
  }
  pdb_140dd3680(param_2);
  *unaff_R13 = (undefined4)uStack_b8;
  unaff_R13[1] = uStack_b8._4_4_;
  unaff_R13[2] = (undefined4)uStack_b0;
  unaff_R13[3] = uStack_b0._4_4_;
  *(undefined8 *)(unaff_R13 + 4) = uStack_a8;
  uVar8 = SUB81(&cStack_98,0);
  uVar13 = (undefined4)uVar17;
  uVar17 = param_2;
  pdb_142d05750();
  uVar10 = (undefined2)uVar17;
  if (cStack_98 == '2') {
    uVar4 = 7;
LAB_142d06c65:
    pcVar15 = (code *)CONCAT44(uStack_8c,CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
    cVar3 = cStack_98;
    uStack_90 = uVar4;
  }
  else {
LAB_142d06ed5:
    uStack_50 = CONCAT13(cStack_94,CONCAT12(cStack_95,CONCAT11(uStack_96,uStack_97)));
    uStack_4c = (undefined3)(CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94)) >> 8);
LAB_142d06ee1:
    pcVar15 = (code *)CONCAT44(uStack_84,uStack_88);
    uStack_e8 = CONCAT44(uStack_7c,uStack_80);
    uStack_e0 = CONCAT44(uStack_74,uStack_78);
    uStack_d8 = CONCAT44(uStack_6c,uStack_70);
    uStack_d0 = CONCAT44(uStack_64,uStack_68);
    uStack_c8 = CONCAT44(uStack_5c,uStack_60);
    uStack_c0 = CONCAT44(uStack_54,uStack_58);
    cVar3 = cStack_98;
    uVar8 = uStack_8f;
    uVar10 = uStack_8e;
    uVar13 = uStack_8c;
  }
LAB_142d06f0d:
  uStack_97 = (undefined1)uStack_50;
  uStack_96 = (undefined1)((uint)uStack_50 >> 8);
  cStack_95 = (char)((uint)uStack_50 >> 0x10);
  cStack_94 = uStack_50._3_1_;
  bStack_93 = (byte)uStack_4c;
  uStack_92 = (undefined2)((uint3)uStack_4c >> 8);
  uStack_88 = SUB84(pcVar15,0);
  uStack_84 = (undefined4)((ulonglong)pcVar15 >> 0x20);
  uStack_80 = (undefined4)uStack_e8;
  uStack_7c = uStack_e8._4_4_;
  uStack_78 = (undefined4)uStack_e0;
  uStack_74 = uStack_e0._4_4_;
  uStack_70 = (undefined4)uStack_d8;
  uStack_6c = uStack_d8._4_4_;
  uStack_68 = (undefined4)uStack_d0;
  uStack_64 = uStack_d0._4_4_;
  uStack_60 = (undefined4)uStack_c8;
  uStack_5c = uStack_c8._4_4_;
  uStack_58 = (undefined4)uStack_c0;
  uStack_54 = uStack_c0._4_4_;
  uStack_8f = uVar8;
  uStack_8e = uVar10;
  uStack_8c = uVar13;
  if ((cVar3 != '\x1f') && (cVar3 != '#')) {
    uStack_49 = 1;
    pdb_140dd0940(param_2);
  }
  uVar17 = uVar11 - (longlong)puVar12;
  if (uVar17 == 0) {
    if (lVar5 == 0) goto LAB_142d06fec;
  }
  else if (uVar17 < uVar11) {
    if (*(char *)(lVar5 + uVar17) < -0x40) {
LAB_142d06fec:
      uStack_49 = 1;
      pdb_142dc8070(lVar5,uVar11,0,uVar17,&UNK_1436b61c8);
                    /* WARNING: Does not return */
      pcVar15 = (code *)invalidInstructionException();
      (*pcVar15)();
    }
  }
  else if (lVar5 == 0 || puVar12 != (undefined *)0x0) goto LAB_142d06fec;
  if (cVar3 == '2') {
    uStack_f8 = CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90));
    uStack_f4 = uStack_8c;
    uStack_f0 = uStack_88;
    uStack_ec = uStack_84;
    uStack_49 = 0;
    pdb_140dd5560(param_1,&uStack_f8,lVar5);
    return param_1;
  }
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_84,uStack_88);
  *(ulonglong *)(param_1 + 1) =
       CONCAT17(uStack_90,
                CONCAT25(uStack_92,
                         CONCAT14(bStack_93,
                                  CONCAT13(cStack_94,
                                           CONCAT12(cStack_95,CONCAT11(uStack_96,uStack_97))))));
  *(ulonglong *)(param_1 + 9) =
       CONCAT17((undefined1)uStack_88,CONCAT43(uStack_8c,CONCAT21(uStack_8e,uStack_8f)));
  *(undefined8 *)(param_1 + 0x18) = uStack_e8;
  *(undefined8 *)(param_1 + 0x20) = uStack_e0;
  *(undefined8 *)(param_1 + 0x28) = uStack_d8;
  *(undefined8 *)(param_1 + 0x30) = uStack_d0;
  *(undefined8 *)(param_1 + 0x38) = uStack_c8;
  *(undefined8 *)(param_1 + 0x40) = uStack_c0;
  *param_1 = cVar3;
  return param_1;
}

