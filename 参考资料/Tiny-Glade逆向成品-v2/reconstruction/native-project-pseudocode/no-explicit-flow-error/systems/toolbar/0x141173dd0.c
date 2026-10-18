// VA 0x141173dd0, PDB extent 908 bytes
// toolbar::mei::widgets::impl$27::image<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::image<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 908 */

longlong *
pdb_141173dd0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong unaff_R14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 unaff_XMM6_Da;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_98 = pdb_140bbbcb0(&uStack_c8);
  uStack_90 = _DAT_14329c290;
  uStack_88 = _UNK_14329c298;
  uStack_90 = pdb_1400affa0(&uStack_98);
  uStack_98 = *(undefined8 *)(param_2 + 8);
  uVar6 = pdb_1400b0130(&uStack_98);
  pdb_14072caa0(&lStack_b0,param_2,uVar6);
  lVar1 = lStack_b0;
  if (*(longlong *)(lStack_b0 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lStack_b0 + 0x1d0,&lStack_a8);
    unaff_R14 = *(longlong *)(lVar1 + 0x1b0);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar1 + 0x1b8);
      auVar2 = *(undefined1 (*) [16])(unaff_R14 + uVar7);
      auVar19[0] = -(auVar2[0] == auVar17[0]);
      auVar19[1] = -(auVar2[1] == auVar17[1]);
      auVar19[2] = -(auVar2[2] == auVar17[2]);
      auVar19[3] = -(auVar2[3] == auVar17[3]);
      auVar19[4] = -(auVar2[4] == auVar17[4]);
      auVar19[5] = -(auVar2[5] == auVar17[5]);
      auVar19[6] = -(auVar2[6] == auVar17[6]);
      auVar19[7] = -(auVar2[7] == auVar17[7]);
      auVar19[8] = -(auVar2[8] == auVar17[0]);
      auVar19[9] = -(auVar2[9] == auVar17[1]);
      auVar19[10] = -(auVar2[10] == auVar17[2]);
      auVar19[0xb] = -(auVar2[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar2[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar2[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar2[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar2[0xf] == auVar17[7]);
      uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (unaff_RBX = param_5, param_2 = param_6, unaff_XMM6_Da = param_7, uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar14 = (uVar4 + uVar7 & *(ulonglong *)(lVar1 + 0x1b8)) * -0xd8;
        if (lStack_a8 == *(longlong *)(unaff_R14 + -0xd8 + lVar14)) {
          unaff_R14 = unaff_R14 + lVar14;
          if (*(longlong *)(unaff_R14 + -0x38) == 0) goto LAB_141173f48;
          puVar9 = *(undefined **)(unaff_R14 + -0x30);
          goto LAB_141174011;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar18[0] = -(auVar2[0] == -1);
      auVar18[1] = -(auVar2[1] == -1);
      auVar18[2] = -(auVar2[2] == -1);
      auVar18[3] = -(auVar2[3] == -1);
      auVar18[4] = -(auVar2[4] == -1);
      auVar18[5] = -(auVar2[5] == -1);
      auVar18[6] = -(auVar2[6] == -1);
      auVar18[7] = -(auVar2[7] == -1);
      auVar18[8] = -(auVar2[8] == -1);
      auVar18[9] = -(auVar2[9] == -1);
      auVar18[10] = -(auVar2[10] == -1);
      auVar18[0xb] = -(auVar2[0xb] == -1);
      auVar18[0xc] = -(auVar2[0xc] == -1);
      auVar18[0xd] = -(auVar2[0xd] == -1);
      auVar18[0xe] = -(auVar2[0xe] == -1);
      auVar18[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141173f48:
  plStack_b8 = *(longlong **)(lVar1 + 0x270);
  LOCK();
  lVar1 = *plStack_b8;
  *plStack_b8 = *plStack_b8 + 1;
  UNLOCK();
  if (*plStack_b8 == 0 || SCARRY8(lVar1,1) != *plStack_b8 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uStack_98 = 0;
  uStack_90 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_78 = 0;
  uStack_70 = 4;
  auStack_68 = (undefined1  [16])0x0;
  LOCK();
  *plStack_b8 = *plStack_b8 + -1;
  UNLOCK();
  if (*plStack_b8 == 0) {
    pdb_140cb5640(&plStack_b8);
  }
  pdb_14007ee60();
  lVar11 = 8;
  pbVar8 = pub_1406abab0(0x48,8);
  if (pbVar8 != (byte *)0x0) {
    *(ulonglong *)(pbVar8 + 0x40) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)(pbVar8 + 0x30) = auStack_68._0_8_;
    *(undefined8 *)(pbVar8 + 0x38) = auStack_68._8_8_;
    *(undefined8 *)(pbVar8 + 0x20) = uStack_78;
    *(undefined8 *)(pbVar8 + 0x28) = uStack_70;
    *(undefined8 *)(pbVar8 + 0x10) = uStack_88;
    *(ulonglong *)(pbVar8 + 0x18) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)pbVar8 = uStack_98;
    *(undefined8 *)(pbVar8 + 8) = uStack_90;
    *(byte **)(unaff_R14 + -0x38) = pbVar8;
    puVar9 = &UNK_14329c768;
    *(undefined **)(unaff_R14 + -0x30) = &UNK_14329c768;
LAB_141174011:
    puVar10 = (ulonglong *)(**(code **)(puVar9 + 0x28))();
    (**(code **)(lVar11 + 0x18))(&uStack_98,puVar10);
    auVar17[0] = -((char)uStack_98 == DAT_142f3b2c0);
    auVar17[1] = -(uStack_98._1_1_ == UNK_142f3b2c1);
    auVar17[2] = -(uStack_98._2_1_ == UNK_142f3b2c2);
    auVar17[3] = -(uStack_98._3_1_ == UNK_142f3b2c3);
    auVar17[4] = -(uStack_98._4_1_ == UNK_142f3b2c4);
    auVar17[5] = -(uStack_98._5_1_ == UNK_142f3b2c5);
    auVar17[6] = -(uStack_98._6_1_ == UNK_142f3b2c6);
    auVar17[7] = -(uStack_98._7_1_ == UNK_142f3b2c7);
    auVar17[8] = -((char)uStack_90 == UNK_142f3b2c8);
    auVar17[9] = -(uStack_90._1_1_ == UNK_142f3b2c9);
    auVar17[10] = -(uStack_90._2_1_ == UNK_142f3b2ca);
    auVar17[0xb] = -(uStack_90._3_1_ == UNK_142f3b2cb);
    auVar17[0xc] = -(uStack_90._4_1_ == UNK_142f3b2cc);
    auVar17[0xd] = -(uStack_90._5_1_ == UNK_142f3b2cd);
    auVar17[0xe] = -(uStack_90._6_1_ == UNK_142f3b2ce);
    auVar17[0xf] = -(uStack_90._7_1_ == UNK_142f3b2cf);
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
      uVar15 = param_2 == 0;
      if (-1 < (longlong)param_2) goto LAB_141174053;
      uVar6 = 0;
      uVar15 = true;
      while( true ) {
        pdb_142dc7e2a(uVar6,param_2);
LAB_141174053:
        if ((bool)uVar15) break;
        pdb_14007ee60();
        uVar6 = 1;
        pbVar8 = pub_1406abab0(param_2,1);
        uVar15 = pbVar8 == (byte *)0x0;
        if (!(bool)uVar15) {
          pub_142e32760(pbVar8,unaff_RBX,param_2);
          uVar7 = *puVar10;
joined_r0x0001411740e8:
          if (uVar7 != 0) {
            pub_1406abac0((byte *)puVar10[1],uVar7,1);
          }
          *puVar10 = param_2;
          puVar10[1] = (ulonglong)pbVar8;
          puVar10[2] = param_2;
          *(undefined4 *)(puVar10 + 3) = unaff_XMM6_Da;
          *(undefined1 *)((longlong)puVar10 + 0x1c) = 0;
          param_1[2] = lStack_a0;
          *param_1 = lStack_b0;
          param_1[1] = lStack_a8;
          return param_1;
        }
      }
      pbVar8 = (byte *)0x1;
      uVar7 = *puVar10;
      goto joined_r0x0001411740e8;
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

