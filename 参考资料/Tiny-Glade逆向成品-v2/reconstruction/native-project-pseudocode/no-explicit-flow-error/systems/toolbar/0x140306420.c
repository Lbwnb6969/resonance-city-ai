// VA 0x140306420, PDB extent 589 bytes
// toolbar::mei::widgets::impl$27::tab_switcher<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::tab_switcher<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 589 */

undefined8 pdb_140306420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong unaff_RBX;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_68 = param_3;
  uStack_60 = param_4;
  lStack_d0 = pdb_14072aeb0(&uStack_68);
  lStack_c8 = _DAT_142f3b480;
  uStack_c0 = _UNK_142f3b488;
  lStack_c8 = pdb_1400affa0(&lStack_d0);
  lStack_d0 = *(longlong *)(param_2 + 8);
  uVar8 = pdb_1400b0130(&lStack_d0);
  pdb_14072caa0(&lStack_d0,param_2,uVar8);
  lVar2 = lStack_d0;
  if (*(longlong *)(lStack_d0 + 0x1c8) != 0) {
    uVar9 = pdb_1400af0a0(lStack_d0 + 0x1d0,&lStack_c8);
    unaff_RBX = *(longlong *)(lVar2 + 0x1b0);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(unaff_RBX + uVar9);
      auVar19[0] = -(*pcVar1 == auVar17[0]);
      auVar19[1] = -(pcVar1[1] == auVar17[1]);
      auVar19[2] = -(pcVar1[2] == auVar17[2]);
      auVar19[3] = -(pcVar1[3] == auVar17[3]);
      auVar19[4] = -(pcVar1[4] == auVar17[4]);
      auVar19[5] = -(pcVar1[5] == auVar17[5]);
      auVar19[6] = -(pcVar1[6] == auVar17[6]);
      auVar19[7] = -(pcVar1[7] == auVar17[7]);
      auVar19[8] = -(pcVar1[8] == auVar17[0]);
      auVar19[9] = -(pcVar1[9] == auVar17[1]);
      auVar19[10] = -(pcVar1[10] == auVar17[2]);
      auVar19[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(pcVar1[0xf] == auVar17[7]);
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
        lVar15 = (uVar5 + uVar9 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (lStack_c8 == *(longlong *)(unaff_RBX + -0xd8 + lVar15)) {
          unaff_RBX = unaff_RBX + lVar15;
          pbVar10 = *(byte **)(unaff_RBX + -0x38);
          if (pbVar10 == (byte *)0x0) goto LAB_140306575;
          puVar11 = *(undefined **)(unaff_RBX + -0x30);
          goto LAB_1403065be;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140306575:
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
  uVar7 = pdb_1407248c0();
  pdb_14007ee60();
  lVar12 = 4;
  pbVar10 = pub_1406abab0(4,4);
  if (pbVar10 != (byte *)0x0) {
    *(undefined4 *)pbVar10 = uVar7;
    *(byte **)(unaff_RBX + -0x38) = pbVar10;
    puVar11 = &UNK_142f3b7f8;
    *(undefined **)(unaff_RBX + -0x30) = &UNK_142f3b7f8;
LAB_1403065be:
    uVar8 = (**(code **)(puVar11 + 0x28))(pbVar10);
    (**(code **)(lVar12 + 0x18))(&uStack_68,uVar8);
    auVar17[0] = -((char)uStack_68 == DAT_142f3b2e0);
    auVar17[1] = -(uStack_68._1_1_ == UNK_142f3b2e1);
    auVar17[2] = -(uStack_68._2_1_ == UNK_142f3b2e2);
    auVar17[3] = -(uStack_68._3_1_ == UNK_142f3b2e3);
    auVar17[4] = -(uStack_68._4_1_ == UNK_142f3b2e4);
    auVar17[5] = -(uStack_68._5_1_ == UNK_142f3b2e5);
    auVar17[6] = -(uStack_68._6_1_ == UNK_142f3b2e6);
    auVar17[7] = -(uStack_68._7_1_ == UNK_142f3b2e7);
    auVar17[8] = -((char)uStack_60 == UNK_142f3b2e8);
    auVar17[9] = -(uStack_60._1_1_ == UNK_142f3b2e9);
    auVar17[10] = -(uStack_60._2_1_ == UNK_142f3b2ea);
    auVar17[0xb] = -(uStack_60._3_1_ == UNK_142f3b2eb);
    auVar17[0xc] = -(uStack_60._4_1_ == UNK_142f3b2ec);
    auVar17[0xd] = -(uStack_60._5_1_ == UNK_142f3b2ed);
    auVar17[0xe] = -(uStack_60._6_1_ == UNK_142f3b2ee);
    auVar17[0xf] = -(uStack_60._7_1_ == UNK_142f3b2ef);
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
      uStack_78 = uStack_c0;
      lStack_88 = lStack_d0;
      lStack_80 = lStack_c8;
      pdb_1407373e0(&lStack_d0);
      pdb_140737590(&uStack_68,&lStack_d0);
      pdb_14072cf30(param_1,&lStack_88,&uStack_68);
      return param_1;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,4);
}

