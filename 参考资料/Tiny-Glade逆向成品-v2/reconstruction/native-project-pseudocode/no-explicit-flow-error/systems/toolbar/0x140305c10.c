// VA 0x140305c10, PDB extent 580 bytes
// toolbar::mei::core::NodeContext::get_content_mut_impl<tiny_glade::gui::wall_selection_tags::GiftTagContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::get_content_mut_impl<tiny_glade::gui::wall_selection_tags::GiftTagContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 580 */

undefined8 pdb_140305c10(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 1);
    unaff_RDI = *(longlong *)(lVar2 + 0x1b0);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = param_1[1];
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(unaff_RDI + uVar6);
      auVar18[0] = -(auVar1[0] == auVar16[0]);
      auVar18[1] = -(auVar1[1] == auVar16[1]);
      auVar18[2] = -(auVar1[2] == auVar16[2]);
      auVar18[3] = -(auVar1[3] == auVar16[3]);
      auVar18[4] = -(auVar1[4] == auVar16[4]);
      auVar18[5] = -(auVar1[5] == auVar16[5]);
      auVar18[6] = -(auVar1[6] == auVar16[6]);
      auVar18[7] = -(auVar1[7] == auVar16[7]);
      auVar18[8] = -(auVar1[8] == auVar16[0]);
      auVar18[9] = -(auVar1[9] == auVar16[1]);
      auVar18[10] = -(auVar1[10] == auVar16[2]);
      auVar18[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar18[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar18[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar18[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar18[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar14 = (uVar4 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (lVar10 == *(longlong *)(unaff_RDI + -0xd8 + lVar14)) {
          unaff_RDI = unaff_RDI + lVar14;
          if (*(longlong *)(unaff_RDI + -0x38) == 0) goto LAB_140305d18;
          puVar8 = *(undefined **)(unaff_RDI + -0x30);
          goto LAB_140305dc4;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(auVar1[0] == -1);
      auVar17[1] = -(auVar1[1] == -1);
      auVar17[2] = -(auVar1[2] == -1);
      auVar17[3] = -(auVar1[3] == -1);
      auVar17[4] = -(auVar1[4] == -1);
      auVar17[5] = -(auVar1[5] == -1);
      auVar17[6] = -(auVar1[6] == -1);
      auVar17[7] = -(auVar1[7] == -1);
      auVar17[8] = -(auVar1[8] == -1);
      auVar17[9] = -(auVar1[9] == -1);
      auVar17[10] = -(auVar1[10] == -1);
      auVar17[0xb] = -(auVar1[0xb] == -1);
      auVar17[0xc] = -(auVar1[0xc] == -1);
      auVar17[0xd] = -(auVar1[0xd] == -1);
      auVar17[0xe] = -(auVar1[0xe] == -1);
      auVar17[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140305d18:
  plStack_70 = *(longlong **)(lVar2 + 0x270);
  LOCK();
  lVar2 = *plStack_70;
  *plStack_70 = *plStack_70 + 1;
  UNLOCK();
  if (*plStack_70 == 0 || SCARRY8(lVar2,1) != *plStack_70 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uStack_38 = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_68 = 0;
  uStack_60 = 4;
  auStack_58 = (undefined1  [16])0x0;
  uStack_48 = 4;
  uStack_40 = 0;
  LOCK();
  *plStack_70 = *plStack_70 + -1;
  UNLOCK();
  if (*plStack_70 == 0) {
    pdb_140cb5640(&plStack_70);
  }
  pdb_14007ee60();
  lVar10 = 8;
  pbVar7 = pub_1406abab0(0x38,8);
  if (pbVar7 != (byte *)0x0) {
    *(ulonglong *)(pbVar7 + 0x30) = CONCAT44(uStack_34,uStack_38);
    *(undefined8 *)(pbVar7 + 0x20) = uStack_48;
    *(undefined8 *)(pbVar7 + 0x28) = uStack_40;
    *(undefined8 *)(pbVar7 + 0x10) = auStack_58._0_8_;
    *(undefined8 *)(pbVar7 + 0x18) = auStack_58._8_8_;
    *(undefined8 *)pbVar7 = uStack_68;
    *(undefined8 *)(pbVar7 + 8) = uStack_60;
    *(byte **)(unaff_RDI + -0x38) = pbVar7;
    puVar8 = &UNK_142f3ba78;
    *(undefined **)(unaff_RDI + -0x30) = &UNK_142f3ba78;
LAB_140305dc4:
    uVar9 = (**(code **)(puVar8 + 0x28))();
    (**(code **)(lVar10 + 0x18))(&uStack_68,uVar9);
    auVar16[0] = -((char)uStack_68 == DAT_142f3b2d0);
    auVar16[1] = -(uStack_68._1_1_ == UNK_142f3b2d1);
    auVar16[2] = -(uStack_68._2_1_ == UNK_142f3b2d2);
    auVar16[3] = -(uStack_68._3_1_ == UNK_142f3b2d3);
    auVar16[4] = -(uStack_68._4_1_ == UNK_142f3b2d4);
    auVar16[5] = -(uStack_68._5_1_ == UNK_142f3b2d5);
    auVar16[6] = -(uStack_68._6_1_ == UNK_142f3b2d6);
    auVar16[7] = -(uStack_68._7_1_ == UNK_142f3b2d7);
    auVar16[8] = -((char)uStack_60 == UNK_142f3b2d8);
    auVar16[9] = -(uStack_60._1_1_ == UNK_142f3b2d9);
    auVar16[10] = -(uStack_60._2_1_ == UNK_142f3b2da);
    auVar16[0xb] = -(uStack_60._3_1_ == UNK_142f3b2db);
    auVar16[0xc] = -(uStack_60._4_1_ == UNK_142f3b2dc);
    auVar16[0xd] = -(uStack_60._5_1_ == UNK_142f3b2dd);
    auVar16[0xe] = -(uStack_60._6_1_ == UNK_142f3b2de);
    auVar16[0xf] = -(uStack_60._7_1_ == UNK_142f3b2df);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return uVar9;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x38);
}

