// VA 0x140c40a30, PDB extent 696 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::lookup_decorator_info_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::lookup_decorator_info_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 696 */

longlong pdb_140c40a30(longlong *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_28;
  
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306d030);
  }
  lStack_28 = CONCAT44(lStack_28._4_4_,param_2);
  if (param_1[0xf] != 0) {
    uVar4 = pdb_1400aede0(param_1 + 0x10,&lStack_28);
    lVar5 = param_1[0xc];
    bVar12 = (byte)(uVar4 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar7 = 0;
    while( true ) {
      uVar4 = uVar4 & param_1[0xd];
      auVar19 = *(undefined1 (*) [16])(lVar5 + uVar4);
      auVar17[0] = -(auVar19[0] == auVar13[0]);
      auVar17[1] = -(auVar19[1] == auVar13[1]);
      auVar17[2] = -(auVar19[2] == auVar13[2]);
      auVar17[3] = -(auVar19[3] == auVar13[3]);
      auVar17[4] = -(auVar19[4] == auVar13[4]);
      auVar17[5] = -(auVar19[5] == auVar13[5]);
      auVar17[6] = -(auVar19[6] == auVar13[6]);
      auVar17[7] = -(auVar19[7] == auVar13[7]);
      auVar17[8] = -(auVar19[8] == auVar13[0]);
      auVar17[9] = -(auVar19[9] == auVar13[1]);
      auVar17[10] = -(auVar19[10] == auVar13[2]);
      auVar17[0xb] = -(auVar19[0xb] == auVar13[3]);
      auVar17[0xc] = -(auVar19[0xc] == auVar13[4]);
      auVar17[0xd] = -(auVar19[0xd] == auVar13[5]);
      auVar17[0xe] = -(auVar19[0xe] == auVar13[6]);
      auVar17[0xf] = -(auVar19[0xf] == auVar13[7]);
      uVar9 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar6 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar10 = uVar2 + uVar4 & param_1[0xd];
        if (param_2 == *(int *)(lVar5 + -0x18 + uVar10 * -0x18)) {
          lVar5 = lVar5 + uVar10 * -0x18;
          lVar7 = *(longlong *)(lVar5 + -0x10);
          if (lVar7 == 0) {
            lVar5 = *(longlong *)(lVar5 + -8);
            if (param_1[3] == 0) {
              return 0;
            }
            lStack_28 = lVar5;
            uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_28);
            lVar7 = *param_1;
            bVar12 = (byte)(uVar4 >> 0x39);
            auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
            auVar13 = pshuflw(auVar13,auVar13,0);
            lVar11 = 0;
            goto LAB_140c40b7a;
          }
          if ((int)lVar7 == 1) {
            if (param_1[0x12] == 0) {
              return 0;
            }
            param_1 = param_1 + 0x12;
          }
          else {
            if (param_1[0x24] == 0) {
              return 0;
            }
            param_1 = param_1 + 0x24;
          }
          goto LAB_140c40c03;
        }
        uVar9 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar9);
      }
      auVar14[0] = -(auVar19[0] == -1);
      auVar14[1] = -(auVar19[1] == -1);
      auVar14[2] = -(auVar19[2] == -1);
      auVar14[3] = -(auVar19[3] == -1);
      auVar14[4] = -(auVar19[4] == -1);
      auVar14[5] = -(auVar19[5] == -1);
      auVar14[6] = -(auVar19[6] == -1);
      auVar14[7] = -(auVar19[7] == -1);
      auVar14[8] = -(auVar19[8] == -1);
      auVar14[9] = -(auVar19[9] == -1);
      auVar14[10] = -(auVar19[10] == -1);
      auVar14[0xb] = -(auVar19[0xb] == -1);
      auVar14[0xc] = -(auVar19[0xc] == -1);
      auVar14[0xd] = -(auVar19[0xd] == -1);
      auVar14[0xe] = -(auVar19[0xe] == -1);
      auVar14[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar4 = uVar4 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
  return 0;
LAB_140c40b7a:
  uVar4 = uVar4 & param_1[1];
  auVar19 = *(undefined1 (*) [16])(lVar7 + uVar4);
  auVar18[0] = -(auVar19[0] == auVar13[0]);
  auVar18[1] = -(auVar19[1] == auVar13[1]);
  auVar18[2] = -(auVar19[2] == auVar13[2]);
  auVar18[3] = -(auVar19[3] == auVar13[3]);
  auVar18[4] = -(auVar19[4] == auVar13[4]);
  auVar18[5] = -(auVar19[5] == auVar13[5]);
  auVar18[6] = -(auVar19[6] == auVar13[6]);
  auVar18[7] = -(auVar19[7] == auVar13[7]);
  auVar18[8] = -(auVar19[8] == auVar13[0]);
  auVar18[9] = -(auVar19[9] == auVar13[1]);
  auVar18[10] = -(auVar19[10] == auVar13[2]);
  auVar18[0xb] = -(auVar19[0xb] == auVar13[3]);
  auVar18[0xc] = -(auVar19[0xc] == auVar13[4]);
  auVar18[0xd] = -(auVar19[0xd] == auVar13[5]);
  auVar18[0xe] = -(auVar19[0xe] == auVar13[6]);
  auVar18[0xf] = -(auVar19[0xf] == auVar13[7]);
  uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
  uVar6 = (uint)uVar9;
  while( true ) {
    if (uVar9 == 0) goto LAB_140c40bc0;
    uVar2 = 0;
    for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar8 = (uVar2 + uVar4 & param_1[1]) * -0x98;
    if (lVar5 == *(longlong *)(lVar7 + -0x98 + lVar8)) break;
    uVar9 = (ushort)(uVar6 - 1) & (ushort)uVar6;
    uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar9);
  }
  param_1 = (longlong *)(lVar7 + lVar8 + -0x90);
LAB_140c40c03:
  lStack_28 = CONCAT44(lStack_28._4_4_,param_2);
  pdb_1403b0de0(param_1 + 0xc,param_2);
  if (param_1[9] == 0) {
    return 0;
  }
  uVar4 = pdb_1400aede0(param_1 + 10,&lStack_28);
  lVar5 = param_1[6];
  bVar12 = (byte)(uVar4 >> 0x39);
  auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
  auVar13 = pshuflw(auVar13,auVar13,0);
  lVar7 = 0;
  do {
    uVar4 = uVar4 & param_1[7];
    pcVar1 = (char *)(lVar5 + uVar4);
    auVar19[0] = -(*pcVar1 == auVar13[0]);
    auVar19[1] = -(pcVar1[1] == auVar13[1]);
    auVar19[2] = -(pcVar1[2] == auVar13[2]);
    auVar19[3] = -(pcVar1[3] == auVar13[3]);
    auVar19[4] = -(pcVar1[4] == auVar13[4]);
    auVar19[5] = -(pcVar1[5] == auVar13[5]);
    auVar19[6] = -(pcVar1[6] == auVar13[6]);
    auVar19[7] = -(pcVar1[7] == auVar13[7]);
    auVar19[8] = -(pcVar1[8] == auVar13[0]);
    auVar19[9] = -(pcVar1[9] == auVar13[1]);
    auVar19[10] = -(pcVar1[10] == auVar13[2]);
    auVar19[0xb] = -(pcVar1[0xb] == auVar13[3]);
    auVar19[0xc] = -(pcVar1[0xc] == auVar13[4]);
    auVar19[0xd] = -(pcVar1[0xd] == auVar13[5]);
    auVar19[0xe] = -(pcVar1[0xe] == auVar13[6]);
    auVar19[0xf] = -(pcVar1[0xf] == auVar13[7]);
    uVar9 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar6 = (uint)uVar9;
    while (uVar9 != 0) {
      uVar2 = 0;
      for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar11 = (uVar2 + uVar4 & param_1[7]) * -0x68;
      if (param_2 == *(int *)(lVar5 + -0x68 + lVar11)) {
        lVar5 = lVar5 + lVar11;
        goto LAB_140c40cc2;
      }
      uVar9 = (ushort)(uVar6 - 1) & (ushort)uVar6;
      uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar9);
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
                  || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
      lVar5 = 0;
LAB_140c40cc2:
      if (lVar5 != 0) {
        return lVar5 + -0x60;
      }
      return 0;
    }
    uVar4 = uVar4 + lVar7 + 0x10;
    lVar7 = lVar7 + 0x10;
  } while( true );
LAB_140c40bc0:
  auVar15[0] = -(auVar19[0] == -1);
  auVar15[1] = -(auVar19[1] == -1);
  auVar15[2] = -(auVar19[2] == -1);
  auVar15[3] = -(auVar19[3] == -1);
  auVar15[4] = -(auVar19[4] == -1);
  auVar15[5] = -(auVar19[5] == -1);
  auVar15[6] = -(auVar19[6] == -1);
  auVar15[7] = -(auVar19[7] == -1);
  auVar15[8] = -(auVar19[8] == -1);
  auVar15[9] = -(auVar19[9] == -1);
  auVar15[10] = -(auVar19[10] == -1);
  auVar15[0xb] = -(auVar19[0xb] == -1);
  auVar15[0xc] = -(auVar19[0xc] == -1);
  auVar15[0xd] = -(auVar19[0xd] == -1);
  auVar15[0xe] = -(auVar19[0xe] == -1);
  auVar15[0xf] = -(auVar19[0xf] == -1);
  if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') {
    return 0;
  }
  uVar4 = uVar4 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_140c40b7a;
}

