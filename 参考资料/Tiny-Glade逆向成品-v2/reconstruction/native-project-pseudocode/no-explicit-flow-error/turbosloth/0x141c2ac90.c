// VA 0x141c2ac90, PDB extent 2686 bytes
// turbosloth::store::impl$8::get_or_insert_with
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::impl$8::get_or_insert_with
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2686 */

longlong *
pdb_141c2ac90(uint *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  byte *pbVar1;
  byte *arg0;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar14 = *param_1;
  if (uVar14 < 0x3ffffffe) {
    LOCK();
    uVar11 = *param_1;
    if (uVar14 == uVar11) {
      *param_1 = uVar14 + 1;
    }
    UNLOCK();
    if (uVar14 == uVar11) {
      cVar6 = (char)param_1[2];
      goto joined_r0x000141c2b227;
    }
  }
  pdb_142dc6cb0(param_1);
  cVar6 = (char)param_1[2];
joined_r0x000141c2b227:
  if (cVar6 != '\0') {
    uStack_68 = param_1 + 4;
    uStack_60 = (code *)param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_68,&UNK_14339fb88,&UNK_14339edb0);
  }
  bVar4 = (byte)(param_2 >> 0x38);
  if (*(longlong *)(param_1 + 10) != 0) {
    auVar19 = ZEXT216(CONCAT11(bVar4 >> 1,bVar4 >> 1));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar12 = 0;
    uVar15 = param_2;
    while( true ) {
      uVar15 = uVar15 & *(ulonglong *)(param_1 + 6);
      auVar20 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 4) + uVar15);
      auVar23[0] = -(auVar20[0] == auVar19[0]);
      auVar23[1] = -(auVar20[1] == auVar19[1]);
      auVar23[2] = -(auVar20[2] == auVar19[2]);
      auVar23[3] = -(auVar20[3] == auVar19[3]);
      auVar23[4] = -(auVar20[4] == auVar19[4]);
      auVar23[5] = -(auVar20[5] == auVar19[5]);
      auVar23[6] = -(auVar20[6] == auVar19[6]);
      auVar23[7] = -(auVar20[7] == auVar19[7]);
      auVar23[8] = -(auVar20[8] == auVar19[0]);
      auVar23[9] = -(auVar20[9] == auVar19[1]);
      auVar23[10] = -(auVar20[10] == auVar19[2]);
      auVar23[0xb] = -(auVar20[0xb] == auVar19[3]);
      auVar23[0xc] = -(auVar20[0xc] == auVar19[4]);
      auVar23[0xd] = -(auVar20[0xd] == auVar19[5]);
      auVar23[0xe] = -(auVar20[0xe] == auVar19[6]);
      auVar23[0xf] = -(auVar20[0xf] == auVar19[7]);
      uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar11 = 0;
        for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar17 = *(longlong *)(param_1 + 4) +
                 (uVar11 + uVar15 & *(ulonglong *)(param_1 + 6)) * -0x20;
        if (*(ulonglong *)(lVar17 + -0x20) == param_2 && *(longlong *)(lVar17 + -0x18) == param_3) {
          plVar9 = *(longlong **)(lVar17 + -0x10);
          if (plVar9 != (longlong *)0xffffffffffffffff) {
            lVar12 = *plVar9;
            while (lVar12 != 0) {
              if (lVar12 < 0) {
                uStack_68 = (uint *)&UNK_1431f7898;
                uStack_60 = pdb_1402ed400;
                uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_1431f78a8,&uStack_68,&UNK_1431f7918);
              }
              LOCK();
              lVar17 = *plVar9;
              bVar18 = lVar12 == lVar17;
              if (bVar18) {
                *plVar9 = lVar12 + 1;
                lVar17 = lVar12;
              }
              UNLOCK();
              lVar12 = lVar17;
              if (bVar18) {
                LOCK();
                uVar14 = *param_1;
                *param_1 = *param_1 - 1;
                UNLOCK();
                if (SBORROW4(0,uVar14 - 1 & 0xbfffffff)) {
                  pdb_142dc6fa0(param_1);
                }
                return plVar9;
              }
            }
          }
          goto LAB_141c2adef;
        }
        uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
      }
      auVar21[0] = -(auVar20[0] == -1);
      auVar21[1] = -(auVar20[1] == -1);
      auVar21[2] = -(auVar20[2] == -1);
      auVar21[3] = -(auVar20[3] == -1);
      auVar21[4] = -(auVar20[4] == -1);
      auVar21[5] = -(auVar20[5] == -1);
      auVar21[6] = -(auVar20[6] == -1);
      auVar21[7] = -(auVar20[7] == -1);
      auVar21[8] = -(auVar20[8] == -1);
      auVar21[9] = -(auVar20[9] == -1);
      auVar21[10] = -(auVar20[10] == -1);
      auVar21[0xb] = -(auVar20[0xb] == -1);
      auVar21[0xc] = -(auVar20[0xc] == -1);
      auVar21[0xd] = -(auVar20[0xd] == -1);
      auVar21[0xe] = -(auVar20[0xe] == -1);
      auVar21[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar15 = uVar15 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_141c2adef:
  LOCK();
  uVar14 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar14 - 1 & 0xbfffffff)) {
    uStack_49 = 0;
    pdb_142dc6fa0(param_1);
  }
  LOCK();
  uVar14 = *param_1;
  if (uVar14 == 0) {
    *param_1 = 0x3fffffff;
  }
  UNLOCK();
  if (uVar14 != 0) {
    uStack_49 = 0;
    pdb_142dc6e70(param_1);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = (char)param_1[2];
  }
  else {
    uStack_49 = 0;
    bVar5 = pdb_142dc79e0();
    bVar5 = bVar5 ^ 1;
    cVar6 = (char)param_1[2];
  }
  if (cVar6 != '\0') {
    uVar15 = (ulonglong)uStack_60 >> 8;
    uStack_60 = (code *)CONCAT71((int7)uVar15,bVar5);
    uStack_68 = param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_68,&UNK_14339fc68,&UNK_14339ede8);
  }
  auVar19 = ZEXT216(CONCAT11(bVar4 >> 1,bVar4 >> 1));
  auVar19 = pshuflw(auVar19,auVar19,0);
  lVar12 = 0;
  uVar15 = param_2;
  while( true ) {
    uVar15 = uVar15 & *(ulonglong *)(param_1 + 6);
    auVar20 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 4) + uVar15);
    auVar24[0] = -(auVar20[0] == auVar19[0]);
    auVar24[1] = -(auVar20[1] == auVar19[1]);
    auVar24[2] = -(auVar20[2] == auVar19[2]);
    auVar24[3] = -(auVar20[3] == auVar19[3]);
    auVar24[4] = -(auVar20[4] == auVar19[4]);
    auVar24[5] = -(auVar20[5] == auVar19[5]);
    auVar24[6] = -(auVar20[6] == auVar19[6]);
    auVar24[7] = -(auVar20[7] == auVar19[7]);
    auVar24[8] = -(auVar20[8] == auVar19[0]);
    auVar24[9] = -(auVar20[9] == auVar19[1]);
    auVar24[10] = -(auVar20[10] == auVar19[2]);
    auVar24[0xb] = -(auVar20[0xb] == auVar19[3]);
    auVar24[0xc] = -(auVar20[0xc] == auVar19[4]);
    auVar24[0xd] = -(auVar20[0xd] == auVar19[5]);
    auVar24[0xe] = -(auVar20[0xe] == auVar19[6]);
    auVar24[0xf] = -(auVar20[0xf] == auVar19[7]);
    uVar16 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
    uVar14 = (uint)uVar16;
    while (uVar16 != 0) {
      uVar11 = 0;
      for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      lVar17 = *(longlong *)(param_1 + 4) + (uVar11 + uVar15 & *(ulonglong *)(param_1 + 6)) * -0x20;
      if (*(ulonglong *)(lVar17 + -0x20) == param_2 && *(longlong *)(lVar17 + -0x18) == param_3) {
        plVar9 = *(longlong **)(lVar17 + -0x10);
        if (plVar9 == (longlong *)0xffffffffffffffff) goto LAB_141c2af3a;
        lVar8 = *plVar9;
        goto LAB_141c2af10;
      }
      uVar16 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar16);
    }
    auVar22[0] = -(auVar20[0] == -1);
    auVar22[1] = -(auVar20[1] == -1);
    auVar22[2] = -(auVar20[2] == -1);
    auVar22[3] = -(auVar20[3] == -1);
    auVar22[4] = -(auVar20[4] == -1);
    auVar22[5] = -(auVar20[5] == -1);
    auVar22[6] = -(auVar20[6] == -1);
    auVar22[7] = -(auVar20[7] == -1);
    auVar22[8] = -(auVar20[8] == -1);
    auVar22[9] = -(auVar20[9] == -1);
    auVar22[10] = -(auVar20[10] == -1);
    auVar22[0xb] = -(auVar20[0xb] == -1);
    auVar22[0xc] = -(auVar20[0xc] == -1);
    auVar22[0xd] = -(auVar20[0xd] == -1);
    auVar22[0xe] = -(auVar20[0xe] == -1);
    auVar22[0xf] = -(auVar20[0xf] == -1);
    if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
    uVar15 = uVar15 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar12 = 1;
    pdb_142df0160(param_1 + 4,1,param_1 + 0xc,CONCAT71((int7)(uVar15 >> 8),1));
  }
  plVar9 = (longlong *)(**(code **)(param_5 + 0x28))(param_4);
  (**(code **)(lVar12 + 0x18))
            (&uStack_68,
             (longlong)plVar9 + (*(longlong *)(lVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  auVar20[0] = -((char)uStack_68 == DAT_14333ddb0);
  auVar20[1] = -(uStack_68._1_1_ == UNK_14333ddb1);
  auVar20[2] = -(uStack_68._2_1_ == UNK_14333ddb2);
  auVar20[3] = -(uStack_68._3_1_ == UNK_14333ddb3);
  auVar20[4] = -(uStack_68._4_1_ == UNK_14333ddb4);
  auVar20[5] = -(uStack_68._5_1_ == UNK_14333ddb5);
  auVar20[6] = -(uStack_68._6_1_ == UNK_14333ddb6);
  auVar20[7] = -(uStack_68._7_1_ == UNK_14333ddb7);
  auVar20[8] = -((char)uStack_60 == UNK_14333ddb8);
  auVar20[9] = -(uStack_60._1_1_ == UNK_14333ddb9);
  auVar20[10] = -(uStack_60._2_1_ == UNK_14333ddba);
  auVar20[0xb] = -(uStack_60._3_1_ == UNK_14333ddbb);
  auVar20[0xc] = -(uStack_60._4_1_ == UNK_14333ddbc);
  auVar20[0xd] = -(uStack_60._5_1_ == UNK_14333ddbd);
  auVar20[0xe] = -(uStack_60._6_1_ == UNK_14333ddbe);
  auVar20[0xf] = -(uStack_60._7_1_ == UNK_14333ddbf);
  if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf)
      != 0xffff) {
    uStack_68 = (uint *)plVar9;
    uStack_60 = (code *)lVar12;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_68,&UNK_14339fb68,&UNK_14339ee18);
  }
  do {
    lVar12 = plVar9[1];
    while (lVar12 != -1) {
      if (lVar12 < 0) {
        uStack_68 = (uint *)&UNK_1431f7898;
        uStack_60 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1431f78a8,&uStack_68,&UNK_1431f7930);
      }
      LOCK();
      lVar17 = plVar9[1];
      bVar18 = lVar12 == lVar17;
      if (bVar18) {
        plVar9[1] = lVar12 + 1;
        lVar17 = lVar12;
      }
      UNLOCK();
      lVar12 = lVar17;
      if (bVar18) {
        pauVar2 = *(undefined1 (**) [16])(param_1 + 4);
        uVar15 = *(ulonglong *)(param_1 + 6);
        uVar13 = uVar15 & param_2;
        auVar19 = *(undefined1 (*) [16])(*pauVar2 + uVar13);
        uVar16 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
        uVar14 = (uint)uVar16;
        if (uVar16 == 0) {
          lVar12 = 0x10;
          do {
            uVar13 = uVar13 + lVar12 & uVar15;
            auVar19 = *(undefined1 (*) [16])(*pauVar2 + uVar13);
            lVar12 = lVar12 + 0x10;
            uVar14 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
          } while (uVar14 == 0);
        }
        uVar11 = 0;
        for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar13 = uVar11 + uVar13 & uVar15;
        bVar10 = (*pauVar2)[uVar13];
        if (-1 < (char)bVar10) {
          auVar19 = *pauVar2;
          uVar14 = 0;
          for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar19[0xf] >> 7) << 0xf); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar13 = (ulonglong)uVar14;
          bVar10 = (*pauVar2)[uVar13];
        }
        (*pauVar2)[uVar13] = bVar4 >> 1;
        pauVar2[1][uVar13 - 0x10 & uVar15] = bVar4 >> 1;
        *(ulonglong *)pauVar2[uVar13 * -2 + -2] = param_2;
        *(longlong *)(pauVar2[uVar13 * -2 + -2] + 8) = param_3;
        *(longlong **)pauVar2[uVar13 * -2 + -1] = plVar9;
        lVar12 = *(longlong *)(param_1 + 10) - _UNK_142e47bf8;
        *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) - (ulonglong)(bVar10 & 1);
        *(longlong *)(param_1 + 10) = lVar12;
        goto joined_r0x000141c2aff8;
      }
    }
  } while( true );
  while( true ) {
    if (lVar8 < 0) {
      uStack_68 = (uint *)&UNK_1431f7898;
      uStack_60 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1431f78a8,&uStack_68,&UNK_1431f7918);
    }
    LOCK();
    lVar7 = *plVar9;
    bVar18 = lVar8 == lVar7;
    if (bVar18) {
      *plVar9 = lVar8 + 1;
      lVar7 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar7;
    if (bVar18) break;
LAB_141c2af10:
    if (lVar8 == 0) {
LAB_141c2af3a:
      plVar9 = (longlong *)(**(code **)(param_5 + 0x28))(param_4,lVar12,param_1 + 0xc);
      (**(code **)(lVar12 + 0x18))
                (&uStack_68,
                 (longlong)plVar9 + (*(longlong *)(lVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
      auVar19[0] = -((char)uStack_68 == DAT_14333ddb0);
      auVar19[1] = -(uStack_68._1_1_ == UNK_14333ddb1);
      auVar19[2] = -(uStack_68._2_1_ == UNK_14333ddb2);
      auVar19[3] = -(uStack_68._3_1_ == UNK_14333ddb3);
      auVar19[4] = -(uStack_68._4_1_ == UNK_14333ddb4);
      auVar19[5] = -(uStack_68._5_1_ == UNK_14333ddb5);
      auVar19[6] = -(uStack_68._6_1_ == UNK_14333ddb6);
      auVar19[7] = -(uStack_68._7_1_ == UNK_14333ddb7);
      auVar19[8] = -((char)uStack_60 == UNK_14333ddb8);
      auVar19[9] = -(uStack_60._1_1_ == UNK_14333ddb9);
      auVar19[10] = -(uStack_60._2_1_ == UNK_14333ddba);
      auVar19[0xb] = -(uStack_60._3_1_ == UNK_14333ddbb);
      auVar19[0xc] = -(uStack_60._4_1_ == UNK_14333ddbc);
      auVar19[0xd] = -(uStack_60._5_1_ == UNK_14333ddbd);
      auVar19[0xe] = -(uStack_60._6_1_ == UNK_14333ddbe);
      auVar19[0xf] = -(uStack_60._7_1_ == UNK_14333ddbf);
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar19[0xf] >> 7) << 0xf) != 0xffff) {
        uStack_68 = (uint *)plVar9;
        uStack_60 = (code *)lVar12;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_68,&UNK_14339fb68,&UNK_14339ee00);
      }
      do {
        lVar12 = plVar9[1];
        while (lVar12 != -1) {
          if (lVar12 < 0) {
            uStack_68 = (uint *)&UNK_1431f7898;
            uStack_60 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_1431f78a8,&uStack_68,&UNK_1431f7930);
          }
          LOCK();
          lVar8 = plVar9[1];
          bVar18 = lVar12 == lVar8;
          if (bVar18) {
            plVar9[1] = lVar12 + 1;
            lVar8 = lVar12;
          }
          UNLOCK();
          lVar12 = lVar8;
          if (bVar18) {
            arg0 = *(byte **)(lVar17 + -0x10);
            if (arg0 != (byte *)0xffffffffffffffff) {
              LOCK();
              pbVar1 = arg0 + 8;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
              UNLOCK();
              if (*(longlong *)pbVar1 == 0) {
                pub_1406abac0(arg0,0x80,0x10);
              }
            }
            *(longlong **)(lVar17 + -0x10) = plVar9;
            goto joined_r0x000141c2aff8;
          }
        }
      } while( true );
    }
  }
joined_r0x000141c2aff8:
  if ((bVar5 == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    uStack_49 = 0;
    cVar6 = pdb_142dc79e0();
    if (cVar6 == '\0') {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  LOCK();
  uVar14 = *param_1;
  *param_1 = *param_1 + 0xc0000001;
  UNLOCK();
  if (uVar14 + 0xc0000001 < 0x40000000) {
    return plVar9;
  }
  uStack_49 = 0;
  pdb_142dc6fa0(param_1);
  return plVar9;
}

