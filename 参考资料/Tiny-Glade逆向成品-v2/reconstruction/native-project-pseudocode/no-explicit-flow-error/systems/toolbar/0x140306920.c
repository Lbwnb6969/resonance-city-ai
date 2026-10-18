// VA 0x140306920, PDB extent 596 bytes
// toolbar::mei::widgets::impl$27::frame<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::frame<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 596 */

longlong * pdb_140306920(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined *puVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lStack_40 = param_3;
  lStack_38 = param_4;
  uStack_78 = pdb_14072aeb0(&lStack_40);
  uStack_70 = _DAT_142f3b430;
  uStack_68 = _UNK_142f3b438;
  uStack_70 = pdb_1400affa0(&uStack_78);
  uStack_78 = *(undefined8 *)(param_2 + 8);
  uVar7 = pdb_1400b0130(&uStack_78);
  pdb_14072caa0(&lStack_40,param_2,uVar7);
  lVar1 = lStack_40;
  if (*(longlong *)(lStack_40 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(lStack_40 + 0x1d0,&lStack_38);
    param_2 = *(longlong *)(lVar1 + 0x1b0);
    bVar15 = (byte)(uVar8 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar1 + 0x1b8);
      auVar2 = *(undefined1 (*) [16])(param_2 + uVar8);
      auVar18[0] = -(auVar2[0] == auVar16[0]);
      auVar18[1] = -(auVar2[1] == auVar16[1]);
      auVar18[2] = -(auVar2[2] == auVar16[2]);
      auVar18[3] = -(auVar2[3] == auVar16[3]);
      auVar18[4] = -(auVar2[4] == auVar16[4]);
      auVar18[5] = -(auVar2[5] == auVar16[5]);
      auVar18[6] = -(auVar2[6] == auVar16[6]);
      auVar18[7] = -(auVar2[7] == auVar16[7]);
      auVar18[8] = -(auVar2[8] == auVar16[0]);
      auVar18[9] = -(auVar2[9] == auVar16[1]);
      auVar18[10] = -(auVar2[10] == auVar16[2]);
      auVar18[0xb] = -(auVar2[0xb] == auVar16[3]);
      auVar18[0xc] = -(auVar2[0xc] == auVar16[4]);
      auVar18[0xd] = -(auVar2[0xd] == auVar16[5]);
      auVar18[0xe] = -(auVar2[0xe] == auVar16[6]);
      auVar18[0xf] = -(auVar2[0xf] == auVar16[7]);
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
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar14 = (uVar5 + uVar8 & *(ulonglong *)(lVar1 + 0x1b8)) * -0xd8;
        if (lStack_38 == *(longlong *)(param_2 + -0xd8 + lVar14)) {
          param_2 = param_2 + lVar14;
          pbVar9 = *(byte **)(param_2 + -0x38);
          if (pbVar9 == (byte *)0x0) goto LAB_140306a75;
          puVar10 = *(undefined **)(param_2 + -0x30);
          goto LAB_140306adb;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(auVar2[0] == -1);
      auVar17[1] = -(auVar2[1] == -1);
      auVar17[2] = -(auVar2[2] == -1);
      auVar17[3] = -(auVar2[3] == -1);
      auVar17[4] = -(auVar2[4] == -1);
      auVar17[5] = -(auVar2[5] == -1);
      auVar17[6] = -(auVar2[6] == -1);
      auVar17[7] = -(auVar2[7] == -1);
      auVar17[8] = -(auVar2[8] == -1);
      auVar17[9] = -(auVar2[9] == -1);
      auVar17[10] = -(auVar2[10] == -1);
      auVar17[0xb] = -(auVar2[0xb] == -1);
      auVar17[0xc] = -(auVar2[0xc] == -1);
      auVar17[0xd] = -(auVar2[0xd] == -1);
      auVar17[0xe] = -(auVar2[0xe] == -1);
      auVar17[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140306a75:
  plVar3 = *(longlong **)(lVar1 + 0x270);
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pdb_140729a80(&uStack_78);
  pdb_14007ee60();
  lVar11 = 8;
  pbVar9 = pub_1406abab0(0x30,8);
  if (pbVar9 != (byte *)0x0) {
    *(undefined8 *)(pbVar9 + 0x20) = uStack_58;
    *(undefined8 *)(pbVar9 + 0x28) = uStack_50;
    *(undefined8 *)(pbVar9 + 0x10) = uStack_68;
    *(undefined8 *)(pbVar9 + 0x18) = uStack_60;
    *(undefined8 *)pbVar9 = uStack_78;
    *(undefined8 *)(pbVar9 + 8) = uStack_70;
    *(byte **)(param_2 + -0x38) = pbVar9;
    puVar10 = &UNK_142f3b938;
    *(undefined **)(param_2 + -0x30) = &UNK_142f3b938;
LAB_140306adb:
    uVar7 = (**(code **)(puVar10 + 0x28))(pbVar9);
    (**(code **)(lVar11 + 0x18))(&uStack_78,uVar7);
    auVar16[0] = -((char)uStack_78 == DAT_142f3b2a0);
    auVar16[1] = -(uStack_78._1_1_ == UNK_142f3b2a1);
    auVar16[2] = -(uStack_78._2_1_ == UNK_142f3b2a2);
    auVar16[3] = -(uStack_78._3_1_ == UNK_142f3b2a3);
    auVar16[4] = -(uStack_78._4_1_ == UNK_142f3b2a4);
    auVar16[5] = -(uStack_78._5_1_ == UNK_142f3b2a5);
    auVar16[6] = -(uStack_78._6_1_ == UNK_142f3b2a6);
    auVar16[7] = -(uStack_78._7_1_ == UNK_142f3b2a7);
    auVar16[8] = -((char)uStack_70 == UNK_142f3b2a8);
    auVar16[9] = -(uStack_70._1_1_ == UNK_142f3b2a9);
    auVar16[10] = -(uStack_70._2_1_ == UNK_142f3b2aa);
    auVar16[0xb] = -(uStack_70._3_1_ == UNK_142f3b2ab);
    auVar16[0xc] = -(uStack_70._4_1_ == UNK_142f3b2ac);
    auVar16[0xd] = -(uStack_70._5_1_ == UNK_142f3b2ad);
    auVar16[0xe] = -(uStack_70._6_1_ == UNK_142f3b2ae);
    auVar16[0xf] = -(uStack_70._7_1_ == UNK_142f3b2af);
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
      param_1[2] = lStack_30;
      *param_1 = lStack_40;
      param_1[1] = lStack_38;
      return param_1;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

