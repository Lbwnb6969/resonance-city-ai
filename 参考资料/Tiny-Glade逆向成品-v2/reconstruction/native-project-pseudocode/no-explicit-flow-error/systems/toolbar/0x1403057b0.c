// VA 0x1403057b0, PDB extent 565 bytes
// toolbar::mei::core::NodeContext::child_with_content<tiny_glade::gui::gui_fog::FogSliderContent,ref$<str$>,tiny_glade::gui::gui_fog::fill_slider::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::child_with_content<tiny_glade::gui::gui_fog::FogSliderContent,ref$<str$>,tiny_glade::gui::gui_fog::fill_slider::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 565 */

longlong * pdb_1403057b0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong *plStack_20;
  
  cStack_48 = (char)param_3;
  cStack_47 = (char)((ulonglong)param_3 >> 8);
  cStack_46 = (char)((ulonglong)param_3 >> 0x10);
  cStack_45 = (char)((ulonglong)param_3 >> 0x18);
  cStack_44 = (char)((ulonglong)param_3 >> 0x20);
  cStack_43 = (char)((ulonglong)param_3 >> 0x28);
  cStack_42 = (char)((ulonglong)param_3 >> 0x30);
  cStack_41 = (char)((ulonglong)param_3 >> 0x38);
  cStack_40 = (char)param_4;
  cStack_3f = (char)((ulonglong)param_4 >> 8);
  cStack_3e = (char)((ulonglong)param_4 >> 0x10);
  cStack_3d = (char)((ulonglong)param_4 >> 0x18);
  cStack_3c = (char)((ulonglong)param_4 >> 0x20);
  cStack_3b = (char)((ulonglong)param_4 >> 0x28);
  cStack_3a = (char)((ulonglong)param_4 >> 0x30);
  cStack_39 = (char)((ulonglong)param_4 >> 0x38);
  lStack_38 = pdb_14072aeb0(&cStack_48);
  lStack_30 = _DAT_142f3b440;
  lStack_28 = _UNK_142f3b448;
  lStack_30 = pdb_1400affa0(&lStack_38);
  lStack_38 = *(longlong *)(param_2 + 8);
  uVar6 = pdb_1400b0130(&lStack_38);
  pdb_14072caa0(&lStack_38,param_2,uVar6);
  lVar2 = lStack_38;
  if (*(longlong *)(lStack_38 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_38 + 0x1d0,&lStack_30);
    param_2 = *(longlong *)(lVar2 + 0x1b0);
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(param_2 + uVar7);
      auVar17[0] = -(*pcVar1 == auVar15[0]);
      auVar17[1] = -(pcVar1[1] == auVar15[1]);
      auVar17[2] = -(pcVar1[2] == auVar15[2]);
      auVar17[3] = -(pcVar1[3] == auVar15[3]);
      auVar17[4] = -(pcVar1[4] == auVar15[4]);
      auVar17[5] = -(pcVar1[5] == auVar15[5]);
      auVar17[6] = -(pcVar1[6] == auVar15[6]);
      auVar17[7] = -(pcVar1[7] == auVar15[7]);
      auVar17[8] = -(pcVar1[8] == auVar15[0]);
      auVar17[9] = -(pcVar1[9] == auVar15[1]);
      auVar17[10] = -(pcVar1[10] == auVar15[2]);
      auVar17[0xb] = -(pcVar1[0xb] == auVar15[3]);
      auVar17[0xc] = -(pcVar1[0xc] == auVar15[4]);
      auVar17[0xd] = -(pcVar1[0xd] == auVar15[5]);
      auVar17[0xe] = -(pcVar1[0xe] == auVar15[6]);
      auVar17[0xf] = -(pcVar1[0xf] == auVar15[7]);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = (uVar4 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (lStack_30 == *(longlong *)(param_2 + -0xd8 + lVar13)) {
          param_2 = param_2 + lVar13;
          pbVar8 = *(byte **)(param_2 + -0x38);
          if (pbVar8 == (byte *)0x0) goto LAB_140305908;
          puVar9 = *(undefined **)(param_2 + -0x30);
          goto LAB_140305975;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140305908:
  plStack_20 = *(longlong **)(lVar2 + 0x270);
  LOCK();
  lVar2 = *plStack_20;
  *plStack_20 = *plStack_20 + 1;
  UNLOCK();
  if (*plStack_20 == 0 || SCARRY8(lVar2,1) != *plStack_20 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cStack_48 = '\0';
  cStack_47 = '\0';
  cStack_46 = '\0';
  cStack_45 = '\0';
  cStack_44 = '\0';
  cStack_43 = '\0';
  cStack_42 = '\0';
  cStack_41 = '\0';
  cStack_40 = '\0';
  cStack_3f = '\0';
  cStack_3e = '\0';
  cStack_3d = '\0';
  cStack_3c = '\0';
  LOCK();
  *plStack_20 = *plStack_20 + -1;
  UNLOCK();
  if (*plStack_20 == 0) {
    pdb_140cb5640(&plStack_20);
  }
  pdb_14007ee60();
  lVar10 = 4;
  pbVar8 = pub_1406abab0(0x10,4);
  if (pbVar8 != (byte *)0x0) {
    *(ulonglong *)pbVar8 =
         CONCAT17(cStack_41,
                  CONCAT16(cStack_42,
                           CONCAT15(cStack_43,
                                    CONCAT14(cStack_44,
                                             CONCAT13(cStack_45,
                                                      CONCAT12(cStack_46,
                                                               CONCAT11(cStack_47,cStack_48)))))));
    *(ulonglong *)(pbVar8 + 8) =
         CONCAT17(cStack_39,
                  CONCAT16(cStack_3a,
                           CONCAT15(cStack_3b,
                                    CONCAT14(cStack_3c,
                                             CONCAT13(cStack_3d,
                                                      CONCAT12(cStack_3e,
                                                               CONCAT11(cStack_3f,cStack_40)))))));
    *(byte **)(param_2 + -0x38) = pbVar8;
    puVar9 = &UNK_142f3bbb8;
    *(undefined **)(param_2 + -0x30) = &UNK_142f3bbb8;
LAB_140305975:
    uVar6 = (**(code **)(puVar9 + 0x28))(pbVar8);
    (**(code **)(lVar10 + 0x18))(&cStack_48,uVar6);
    auVar15[0] = -(cStack_48 == DAT_142f3b2b0);
    auVar15[1] = -(cStack_47 == UNK_142f3b2b1);
    auVar15[2] = -(cStack_46 == UNK_142f3b2b2);
    auVar15[3] = -(cStack_45 == UNK_142f3b2b3);
    auVar15[4] = -(cStack_44 == UNK_142f3b2b4);
    auVar15[5] = -(cStack_43 == UNK_142f3b2b5);
    auVar15[6] = -(cStack_42 == UNK_142f3b2b6);
    auVar15[7] = -(cStack_41 == UNK_142f3b2b7);
    auVar15[8] = -(cStack_40 == UNK_142f3b2b8);
    auVar15[9] = -(cStack_3f == UNK_142f3b2b9);
    auVar15[10] = -(cStack_3e == UNK_142f3b2ba);
    auVar15[0xb] = -(cStack_3d == UNK_142f3b2bb);
    auVar15[0xc] = -(cStack_3c == UNK_142f3b2bc);
    auVar15[0xd] = -(cStack_3b == UNK_142f3b2bd);
    auVar15[0xe] = -(cStack_3a == UNK_142f3b2be);
    auVar15[0xf] = -(cStack_39 == UNK_142f3b2bf);
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[2] = lStack_28;
      *param_1 = lStack_38;
      param_1[1] = lStack_30;
      return param_1;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x10);
}

