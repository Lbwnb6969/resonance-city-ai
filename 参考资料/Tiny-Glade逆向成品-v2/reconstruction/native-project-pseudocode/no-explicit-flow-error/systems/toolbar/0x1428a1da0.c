// VA 0x1428a1da0, PDB extent 671 bytes
// toolbar::mei::widgets::impl$27::label_with_id<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::label_with_id<u64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 671 */

longlong *
pdb_1428a1da0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong unaff_R15;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_58 = param_3;
  lStack_50 = pdb_140315970(&uStack_58);
  uStack_2b8 = pdb_140315970(&lStack_50);
  uStack_2b0 = _DAT_1435ad2f8;
  uStack_2a8 = _UNK_1435ad300;
  uStack_2b0 = pdb_142b38eb0(&uStack_2b8);
  uStack_2b8 = *(undefined8 *)(param_2 + 8);
  uVar7 = pdb_142b39020(&uStack_2b8);
  pdb_14072caa0(&lStack_50,param_2,uVar7);
  lVar2 = lStack_50;
  if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
    uVar8 = pdb_1413cd760(lStack_50 + 0x1d0,&lStack_48);
    unaff_R15 = *(longlong *)(lVar2 + 0x1b0);
    bVar15 = (byte)(uVar8 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    puVar11 = (undefined8 *)0x0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(unaff_R15 + uVar8);
      auVar18[0] = -(*pcVar1 == auVar16[0]);
      auVar18[1] = -(pcVar1[1] == auVar16[1]);
      auVar18[2] = -(pcVar1[2] == auVar16[2]);
      auVar18[3] = -(pcVar1[3] == auVar16[3]);
      auVar18[4] = -(pcVar1[4] == auVar16[4]);
      auVar18[5] = -(pcVar1[5] == auVar16[5]);
      auVar18[6] = -(pcVar1[6] == auVar16[6]);
      auVar18[7] = -(pcVar1[7] == auVar16[7]);
      auVar18[8] = -(pcVar1[8] == auVar16[0]);
      auVar18[9] = -(pcVar1[9] == auVar16[1]);
      auVar18[10] = -(pcVar1[10] == auVar16[2]);
      auVar18[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar18[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar18[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar18[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar18[0xf] = -(pcVar1[0xf] == auVar16[7]);
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
      while (param_2 = param_5, uVar13 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar14 = (uVar5 + uVar8 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (lStack_48 == *(longlong *)(unaff_R15 + -0xd8 + lVar14)) {
          unaff_R15 = unaff_R15 + lVar14;
          pbVar9 = *(byte **)(unaff_R15 + -0x38);
          if (pbVar9 == (byte *)0x0) goto LAB_1428a1f25;
          puVar10 = *(undefined **)(unaff_R15 + -0x30);
          goto LAB_1428a1f83;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = (longlong)puVar11 + uVar8 + 0x10;
      puVar11 = puVar11 + 2;
    }
  }
  pdb_142dc8110(&UNK_1435ad328,0xb,&UNK_1435ad360);
LAB_1428a1f25:
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
  pdb_140729b40(&uStack_2b8);
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x260,8);
  if (pbVar9 != (byte *)0x0) {
    puVar11 = &uStack_2b8;
    pub_142e32760(pbVar9,puVar11,0x260);
    *(byte **)(unaff_R15 + -0x38) = pbVar9;
    puVar10 = &UNK_1435ad468;
    *(undefined **)(unaff_R15 + -0x30) = &UNK_1435ad468;
LAB_1428a1f83:
    uVar7 = (**(code **)(puVar10 + 0x28))(pbVar9);
    (*(code *)puVar11[3])(&uStack_2b8,uVar7);
    auVar16[0] = -((char)uStack_2b8 == DAT_142f3b2f0);
    auVar16[1] = -(uStack_2b8._1_1_ == UNK_142f3b2f1);
    auVar16[2] = -(uStack_2b8._2_1_ == UNK_142f3b2f2);
    auVar16[3] = -(uStack_2b8._3_1_ == UNK_142f3b2f3);
    auVar16[4] = -(uStack_2b8._4_1_ == UNK_142f3b2f4);
    auVar16[5] = -(uStack_2b8._5_1_ == UNK_142f3b2f5);
    auVar16[6] = -(uStack_2b8._6_1_ == UNK_142f3b2f6);
    auVar16[7] = -(uStack_2b8._7_1_ == UNK_142f3b2f7);
    auVar16[8] = -((char)uStack_2b0 == UNK_142f3b2f8);
    auVar16[9] = -(uStack_2b0._1_1_ == UNK_142f3b2f9);
    auVar16[10] = -(uStack_2b0._2_1_ == UNK_142f3b2fa);
    auVar16[0xb] = -(uStack_2b0._3_1_ == UNK_142f3b2fb);
    auVar16[0xc] = -(uStack_2b0._4_1_ == UNK_142f3b2fc);
    auVar16[0xd] = -(uStack_2b0._5_1_ == UNK_142f3b2fd);
    auVar16[0xe] = -(uStack_2b0._6_1_ == UNK_142f3b2fe);
    auVar16[0xf] = -(uStack_2b0._7_1_ == UNK_142f3b2ff);
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
      pdb_142b39250(uVar7,param_4,param_2);
      param_1[2] = lStack_40;
      *param_1 = lStack_50;
      param_1[1] = lStack_48;
      return param_1;
    }
    pdb_142dc8110(&UNK_1435ad378,8,&UNK_1435ad380);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x260);
}

