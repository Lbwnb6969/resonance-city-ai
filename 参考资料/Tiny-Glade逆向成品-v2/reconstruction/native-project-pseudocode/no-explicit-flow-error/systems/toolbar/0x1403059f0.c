// VA 0x1403059f0, PDB extent 532 bytes
// toolbar::mei::core::NodeContext::get_content_mut_impl<toolbar::mei::widgets::ImageContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::get_content_mut_impl<toolbar::mei::widgets::ImageContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 532 */

undefined8 pdb_1403059f0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong unaff_RDI;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 1);
    unaff_RDI = *(longlong *)(lVar2 + 0x1b0);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = param_1[1];
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(unaff_RDI + uVar7);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (lVar11 == *(longlong *)(unaff_RDI + -0xd8 + lVar15)) {
          unaff_RDI = unaff_RDI + lVar15;
          if (*(longlong *)(unaff_RDI + -0x38) == 0) goto LAB_140305af8;
          puVar9 = *(undefined **)(unaff_RDI + -0x30);
          goto LAB_140305b70;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140305af8:
  plVar3 = *(longlong **)(lVar2 + 0x270);
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pdb_140729ad0(&cStack_78);
  pdb_14007ee60();
  lVar11 = 8;
  pbVar8 = pub_1406abab0(0x48,8);
  if (pbVar8 != (byte *)0x0) {
    *(undefined8 *)(pbVar8 + 0x40) = uStack_38;
    *(undefined8 *)(pbVar8 + 0x30) = uStack_48;
    *(undefined8 *)(pbVar8 + 0x38) = uStack_40;
    *(undefined8 *)(pbVar8 + 0x20) = uStack_58;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_50;
    *(undefined8 *)(pbVar8 + 0x10) = uStack_68;
    *(undefined8 *)(pbVar8 + 0x18) = uStack_60;
    *(ulonglong *)pbVar8 =
         CONCAT17(cStack_71,
                  CONCAT16(cStack_72,
                           CONCAT15(cStack_73,
                                    CONCAT14(cStack_74,
                                             CONCAT13(cStack_75,
                                                      CONCAT12(cStack_76,
                                                               CONCAT11(cStack_77,cStack_78)))))));
    *(ulonglong *)(pbVar8 + 8) =
         CONCAT17(cStack_69,
                  CONCAT16(cStack_6a,
                           CONCAT15(cStack_6b,
                                    CONCAT14(cStack_6c,
                                             CONCAT13(cStack_6d,
                                                      CONCAT12(cStack_6e,
                                                               CONCAT11(cStack_6f,cStack_70)))))));
    *(byte **)(unaff_RDI + -0x38) = pbVar8;
    puVar9 = &UNK_142f3b758;
    *(undefined **)(unaff_RDI + -0x30) = &UNK_142f3b758;
LAB_140305b70:
    uVar10 = (**(code **)(puVar9 + 0x28))();
    (**(code **)(lVar11 + 0x18))(&cStack_78,uVar10);
    auVar17[0] = -(cStack_78 == DAT_142f3b2c0);
    auVar17[1] = -(cStack_77 == UNK_142f3b2c1);
    auVar17[2] = -(cStack_76 == UNK_142f3b2c2);
    auVar17[3] = -(cStack_75 == UNK_142f3b2c3);
    auVar17[4] = -(cStack_74 == UNK_142f3b2c4);
    auVar17[5] = -(cStack_73 == UNK_142f3b2c5);
    auVar17[6] = -(cStack_72 == UNK_142f3b2c6);
    auVar17[7] = -(cStack_71 == UNK_142f3b2c7);
    auVar17[8] = -(cStack_70 == UNK_142f3b2c8);
    auVar17[9] = -(cStack_6f == UNK_142f3b2c9);
    auVar17[10] = -(cStack_6e == UNK_142f3b2ca);
    auVar17[0xb] = -(cStack_6d == UNK_142f3b2cb);
    auVar17[0xc] = -(cStack_6c == UNK_142f3b2cc);
    auVar17[0xd] = -(cStack_6b == UNK_142f3b2cd);
    auVar17[0xe] = -(cStack_6a == UNK_142f3b2ce);
    auVar17[0xf] = -(cStack_69 == UNK_142f3b2cf);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return uVar10;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

