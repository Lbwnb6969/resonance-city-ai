// VA 0x1428a2040, PDB extent 844 bytes
// toolbar::mei::widgets::impl$27::image<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::image<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 844 */

longlong *
pdb_1428a2040(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined4 param_7)

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
  ulonglong *puVar11;
  longlong lVar12;
  undefined8 unaff_RBX;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong unaff_R14;
  undefined1 uVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 unaff_XMM6_Da;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  lStack_68 = pdb_14072aeb0(&uStack_c8);
  uStack_b8 = pdb_140315970(&lStack_68);
  uStack_b0 = _DAT_1435ad308;
  uStack_a8 = _UNK_1435ad310;
  uStack_b0 = pdb_142b38eb0(&uStack_b8);
  uStack_b8 = *(undefined8 *)(param_2 + 8);
  uVar7 = pdb_142b39020(&uStack_b8);
  pdb_14072caa0(&lStack_68,param_2,uVar7);
  lVar1 = lStack_68;
  if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
    uVar8 = pdb_1413cd760(lStack_68 + 0x1d0,&lStack_60);
    unaff_R14 = *(longlong *)(lVar1 + 0x1b0);
    bVar17 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar1 + 0x1b8);
      auVar2 = *(undefined1 (*) [16])(unaff_R14 + uVar8);
      auVar20[0] = -(auVar2[0] == auVar18[0]);
      auVar20[1] = -(auVar2[1] == auVar18[1]);
      auVar20[2] = -(auVar2[2] == auVar18[2]);
      auVar20[3] = -(auVar2[3] == auVar18[3]);
      auVar20[4] = -(auVar2[4] == auVar18[4]);
      auVar20[5] = -(auVar2[5] == auVar18[5]);
      auVar20[6] = -(auVar2[6] == auVar18[6]);
      auVar20[7] = -(auVar2[7] == auVar18[7]);
      auVar20[8] = -(auVar2[8] == auVar18[0]);
      auVar20[9] = -(auVar2[9] == auVar18[1]);
      auVar20[10] = -(auVar2[10] == auVar18[2]);
      auVar20[0xb] = -(auVar2[0xb] == auVar18[3]);
      auVar20[0xc] = -(auVar2[0xc] == auVar18[4]);
      auVar20[0xd] = -(auVar2[0xd] == auVar18[5]);
      auVar20[0xe] = -(auVar2[0xe] == auVar18[6]);
      auVar20[0xf] = -(auVar2[0xf] == auVar18[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (unaff_RBX = param_5, param_2 = param_6, unaff_XMM6_Da = param_7, uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar8 & *(ulonglong *)(lVar1 + 0x1b8)) * -0xd8;
        if (lStack_60 == *(longlong *)(unaff_R14 + -0xd8 + lVar15)) {
          unaff_R14 = unaff_R14 + lVar15;
          if (*(longlong *)(unaff_R14 + -0x38) == 0) goto LAB_1428a21c8;
          puVar10 = *(undefined **)(unaff_R14 + -0x30);
          goto LAB_1428a2240;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar19[0] = -(auVar2[0] == -1);
      auVar19[1] = -(auVar2[1] == -1);
      auVar19[2] = -(auVar2[2] == -1);
      auVar19[3] = -(auVar2[3] == -1);
      auVar19[4] = -(auVar2[4] == -1);
      auVar19[5] = -(auVar2[5] == -1);
      auVar19[6] = -(auVar2[6] == -1);
      auVar19[7] = -(auVar2[7] == -1);
      auVar19[8] = -(auVar2[8] == -1);
      auVar19[9] = -(auVar2[9] == -1);
      auVar19[10] = -(auVar2[10] == -1);
      auVar19[0xb] = -(auVar2[0xb] == -1);
      auVar19[0xc] = -(auVar2[0xc] == -1);
      auVar19[0xd] = -(auVar2[0xd] == -1);
      auVar19[0xe] = -(auVar2[0xe] == -1);
      auVar19[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar8 = uVar8 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_1435ad328,0xb,&UNK_1435ad360);
LAB_1428a21c8:
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
  pdb_140729ad0(&uStack_b8);
  pdb_14007ee60();
  lVar12 = 8;
  pbVar9 = pub_1406abab0(0x48,8);
  if (pbVar9 != (byte *)0x0) {
    *(undefined8 *)(pbVar9 + 0x40) = uStack_78;
    *(undefined8 *)(pbVar9 + 0x30) = uStack_88;
    *(undefined8 *)(pbVar9 + 0x38) = uStack_80;
    *(undefined8 *)(pbVar9 + 0x20) = uStack_98;
    *(undefined8 *)(pbVar9 + 0x28) = uStack_90;
    *(undefined8 *)(pbVar9 + 0x10) = uStack_a8;
    *(undefined8 *)(pbVar9 + 0x18) = uStack_a0;
    *(undefined8 *)pbVar9 = uStack_b8;
    *(undefined8 *)(pbVar9 + 8) = uStack_b0;
    *(byte **)(unaff_R14 + -0x38) = pbVar9;
    puVar10 = &UNK_1435ad3c8;
    *(undefined **)(unaff_R14 + -0x30) = &UNK_1435ad3c8;
LAB_1428a2240:
    puVar11 = (ulonglong *)(**(code **)(puVar10 + 0x28))();
    (**(code **)(lVar12 + 0x18))(&uStack_b8,puVar11);
    auVar18[0] = -((char)uStack_b8 == DAT_142f3b2c0);
    auVar18[1] = -(uStack_b8._1_1_ == UNK_142f3b2c1);
    auVar18[2] = -(uStack_b8._2_1_ == UNK_142f3b2c2);
    auVar18[3] = -(uStack_b8._3_1_ == UNK_142f3b2c3);
    auVar18[4] = -(uStack_b8._4_1_ == UNK_142f3b2c4);
    auVar18[5] = -(uStack_b8._5_1_ == UNK_142f3b2c5);
    auVar18[6] = -(uStack_b8._6_1_ == UNK_142f3b2c6);
    auVar18[7] = -(uStack_b8._7_1_ == UNK_142f3b2c7);
    auVar18[8] = -((char)uStack_b0 == UNK_142f3b2c8);
    auVar18[9] = -(uStack_b0._1_1_ == UNK_142f3b2c9);
    auVar18[10] = -(uStack_b0._2_1_ == UNK_142f3b2ca);
    auVar18[0xb] = -(uStack_b0._3_1_ == UNK_142f3b2cb);
    auVar18[0xc] = -(uStack_b0._4_1_ == UNK_142f3b2cc);
    auVar18[0xd] = -(uStack_b0._5_1_ == UNK_142f3b2cd);
    auVar18[0xe] = -(uStack_b0._6_1_ == UNK_142f3b2ce);
    auVar18[0xf] = -(uStack_b0._7_1_ == UNK_142f3b2cf);
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar16 = param_2 == 0;
      if (-1 < (longlong)param_2) goto LAB_1428a2282;
      uVar7 = 0;
      uVar16 = true;
      while( true ) {
        pdb_142dc7e2a(uVar7,param_2);
LAB_1428a2282:
        if ((bool)uVar16) break;
        pdb_14007ee60();
        uVar7 = 1;
        pbVar9 = pub_1406abab0(param_2,1);
        uVar16 = pbVar9 == (byte *)0x0;
        if (!(bool)uVar16) {
          pub_142e32760(pbVar9,unaff_RBX,param_2);
          uVar8 = *puVar11;
joined_r0x0001428a2317:
          if (uVar8 != 0) {
            pub_1406abac0((byte *)puVar11[1],uVar8,1);
          }
          *puVar11 = param_2;
          puVar11[1] = (ulonglong)pbVar9;
          puVar11[2] = param_2;
          *(undefined4 *)(puVar11 + 3) = unaff_XMM6_Da;
          *(undefined1 *)((longlong)puVar11 + 0x1c) = 0;
          param_1[2] = lStack_58;
          *param_1 = lStack_68;
          param_1[1] = lStack_60;
          return param_1;
        }
      }
      pbVar9 = (byte *)0x1;
      uVar8 = *puVar11;
      goto joined_r0x0001428a2317;
    }
    pdb_142dc8110(&UNK_1435ad378,8,&UNK_1435ad380);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

