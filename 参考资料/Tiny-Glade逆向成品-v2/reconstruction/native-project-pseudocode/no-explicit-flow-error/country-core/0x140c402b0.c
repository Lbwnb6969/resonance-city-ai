// VA 0x140c402b0, PDB extent 1104 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_change
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_change
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 1104 */

void pdb_140c402b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  char **ppcVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ushort uVar12;
  longlong lVar13;
  char *pcVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char *pcStack_110;
  char **ppcStack_108;
  char *pcStack_100;
  char **ppcStack_f8;
  code *pcStack_f0;
  int iStack_e8;
  undefined1 auStack_90 [16];
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cf80);
  }
  pcVar14 = (char *)param_2[2];
  if (pcVar14 == (char *)0x3) {
    pcVar14 = (char *)*param_2;
    ppcVar8 = (char **)param_2[1];
    iVar9 = (int)param_2[0x11];
  }
  else {
    iVar9 = (int)param_2[0x11];
    ppcStack_f8 = (char **)*param_2;
    pcStack_f0 = (code *)param_2[1];
    iStack_e8 = iVar9;
    pdb_140c40700(auStack_90,param_1,&ppcStack_f8);
    lStack_80 = param_2[4];
    lStack_78 = param_2[5];
    lStack_70 = param_2[6];
    lStack_68 = param_2[7];
    lStack_60 = param_2[8];
    ppcVar8 = (char **)param_2[3];
    pcVar7 = pcVar14;
    uVar4 = pdb_140c3f210(param_1,pcVar14,ppcVar8);
    pcStack_110 = pcVar14;
    ppcStack_108 = ppcVar8;
    pcStack_100 = pcVar7;
    pdb_140c8f970(&ppcStack_f8,uVar4,iVar9,auStack_90,&pcStack_110);
    if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306d060);
    }
  }
  if (pcVar14 == (char *)0x0) {
    ppcStack_f8 = ppcVar8;
    if (param_1[3] != 0) {
      uVar5 = pdb_1400af0a0(param_1 + 4,&ppcStack_f8);
      lVar6 = *param_1;
      bVar15 = (byte)(uVar5 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar11 = 0;
      while( true ) {
        uVar5 = uVar5 & param_1[1];
        pcVar14 = (char *)(lVar6 + uVar5);
        auVar19[0] = -(*pcVar14 == auVar16[0]);
        auVar19[1] = -(pcVar14[1] == auVar16[1]);
        auVar19[2] = -(pcVar14[2] == auVar16[2]);
        auVar19[3] = -(pcVar14[3] == auVar16[3]);
        auVar19[4] = -(pcVar14[4] == auVar16[4]);
        auVar19[5] = -(pcVar14[5] == auVar16[5]);
        auVar19[6] = -(pcVar14[6] == auVar16[6]);
        auVar19[7] = -(pcVar14[7] == auVar16[7]);
        auVar19[8] = -(pcVar14[8] == auVar16[0]);
        auVar19[9] = -(pcVar14[9] == auVar16[1]);
        auVar19[10] = -(pcVar14[10] == auVar16[2]);
        auVar19[0xb] = -(pcVar14[0xb] == auVar16[3]);
        auVar19[0xc] = -(pcVar14[0xc] == auVar16[4]);
        auVar19[0xd] = -(pcVar14[0xd] == auVar16[5]);
        auVar19[0xe] = -(pcVar14[0xe] == auVar16[6]);
        auVar19[0xf] = -(pcVar14[0xf] == auVar16[7]);
        uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
        ;
        uVar10 = (uint)uVar12;
        while (uVar12 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar13 = (uVar2 + uVar5 & param_1[1]) * -0x98;
          if (ppcVar8 == *(char ***)(lVar6 + -0x98 + lVar13)) {
            param_1 = (longlong *)(lVar6 + lVar13 + -0x90);
            goto LAB_140c40487;
          }
          uVar12 = (ushort)(uVar10 - 1) & (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar12);
        }
        auVar17[0] = -(*pcVar14 == -1);
        auVar17[1] = -(pcVar14[1] == -1);
        auVar17[2] = -(pcVar14[2] == -1);
        auVar17[3] = -(pcVar14[3] == -1);
        auVar17[4] = -(pcVar14[4] == -1);
        auVar17[5] = -(pcVar14[5] == -1);
        auVar17[6] = -(pcVar14[6] == -1);
        auVar17[7] = -(pcVar14[7] == -1);
        auVar17[8] = -(pcVar14[8] == -1);
        auVar17[9] = -(pcVar14[9] == -1);
        auVar17[10] = -(pcVar14[10] == -1);
        auVar17[0xb] = -(pcVar14[0xb] == -1);
        auVar17[0xc] = -(pcVar14[0xc] == -1);
        auVar17[0xd] = -(pcVar14[0xd] == -1);
        auVar17[0xe] = -(pcVar14[0xe] == -1);
        auVar17[0xf] = -(pcVar14[0xf] == -1);
        if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x1f,0) & 1) != 0) || (SUB161(auVar17 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
        uVar5 = uVar5 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
    }
  }
  else if ((int)pcVar14 == 1) {
    if (param_1[0x12] != 0) {
      param_1 = param_1 + 0x12;
LAB_140c40487:
      ppcStack_f8 = (char **)CONCAT44(ppcStack_f8._4_4_,iVar9);
      pdb_1403b0de0(param_1 + 0xc,iVar9);
      if (param_1[9] != 0) {
        uVar5 = pdb_1400aede0(param_1 + 10,&ppcStack_f8);
        lVar6 = param_1[6];
        bVar15 = (byte)(uVar5 >> 0x39);
        auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
        auVar16 = pshuflw(auVar16,auVar16,0);
        lVar11 = 0;
        while( true ) {
          uVar5 = uVar5 & param_1[7];
          auVar19 = *(undefined1 (*) [16])(lVar6 + uVar5);
          auVar20[0] = -(auVar19[0] == auVar16[0]);
          auVar20[1] = -(auVar19[1] == auVar16[1]);
          auVar20[2] = -(auVar19[2] == auVar16[2]);
          auVar20[3] = -(auVar19[3] == auVar16[3]);
          auVar20[4] = -(auVar19[4] == auVar16[4]);
          auVar20[5] = -(auVar19[5] == auVar16[5]);
          auVar20[6] = -(auVar19[6] == auVar16[6]);
          auVar20[7] = -(auVar19[7] == auVar16[7]);
          auVar20[8] = -(auVar19[8] == auVar16[0]);
          auVar20[9] = -(auVar19[9] == auVar16[1]);
          auVar20[10] = -(auVar19[10] == auVar16[2]);
          auVar20[0xb] = -(auVar19[0xb] == auVar16[3]);
          auVar20[0xc] = -(auVar19[0xc] == auVar16[4]);
          auVar20[0xd] = -(auVar19[0xd] == auVar16[5]);
          auVar20[0xe] = -(auVar19[0xe] == auVar16[6]);
          auVar20[0xf] = -(auVar19[0xf] == auVar16[7]);
          uVar12 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar20[0xf] >> 7) << 0xf;
          uVar10 = (uint)uVar12;
          while (uVar12 != 0) {
            uVar2 = 0;
            for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            lVar13 = (uVar2 + uVar5 & param_1[7]) * -0x68;
            if (iVar9 == *(int *)(lVar6 + -0x68 + lVar13)) {
              lVar6 = lVar6 + lVar13;
              if ((char)param_2[0xe] == '\x01') {
                *(undefined1 *)(lVar6 + -7) = *(undefined1 *)((longlong)param_2 + 0x71);
                lVar11 = param_2[10];
              }
              else {
                lVar11 = param_2[10];
              }
              if (lVar11 == 8) {
                cVar1 = *(char *)((longlong)param_2 + 0x72);
              }
              else {
                lVar13 = param_2[0xb];
                *(longlong *)(lVar6 + -0x60) = lVar11;
                *(longlong *)(lVar6 + -0x58) = lVar13;
                cVar1 = *(char *)((longlong)param_2 + 0x72);
              }
              if (cVar1 == '\x01') {
                *(int *)(lVar6 + -0xc) =
                     *(int *)(lVar6 + -0xc) + (int)*(char *)((longlong)param_2 + 0x73);
                *(char *)(lVar6 + -6) = (DAT_143cb2d0c == '\0') * '\x05';
                iVar9 = (int)param_2[0xc];
              }
              else {
                iVar9 = (int)param_2[0xc];
              }
              if (iVar9 == 1) {
                bVar15 = 6;
                if (1 < *(byte *)(lVar6 + -0x11)) {
                  bVar15 = *(byte *)(lVar6 + -0x11) - 2;
                }
                if ((bVar15 | 4) != 6) {
                  ppcStack_f8 = (char **)(lVar6 + -0x60);
                  pcStack_f0 = pdb_140c44830;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14306cf10,&ppcStack_f8,&UNK_14306cf38);
                }
                *(undefined4 *)(lVar6 + -0x28) = *(undefined4 *)((longlong)param_2 + 100);
                cVar1 = (char)param_2[0xd];
              }
              else {
                cVar1 = (char)param_2[0xd];
              }
              if (cVar1 == '\0') {
                cVar1 = *(char *)((longlong)param_2 + 0x74);
              }
              else {
                pcStack_110 = (char *)(lVar6 + -0x28);
                if (1 < *(byte *)(lVar6 + -0x11)) {
                  ppcStack_f8 = &pcStack_110;
                  pcStack_f0 = pdb_1417c24f0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14301e483,&ppcStack_f8,&UNK_14306cf50);
                }
                *(undefined4 *)(lVar6 + -0x24) = *(undefined4 *)((longlong)param_2 + 0x6c);
                cVar1 = *(char *)((longlong)param_2 + 0x74);
              }
              if (cVar1 != '\x02') {
                pcStack_110 = (char *)(lVar6 + -0x28);
                if (*(char *)(lVar6 + -0x11) != '\x05') {
                  ppcStack_f8 = &pcStack_110;
                  pcStack_f0 = pdb_1417c24f0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14301e45d,&ppcStack_f8,&UNK_14306cf68);
                }
                *pcStack_110 = cVar1;
              }
              return;
            }
            uVar12 = (ushort)(uVar10 - 1) & (ushort)uVar10;
            uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar12);
          }
          auVar18[0] = -(auVar19[0] == -1);
          auVar18[1] = -(auVar19[1] == -1);
          auVar18[2] = -(auVar19[2] == -1);
          auVar18[3] = -(auVar19[3] == -1);
          auVar18[4] = -(auVar19[4] == -1);
          auVar18[5] = -(auVar19[5] == -1);
          auVar18[6] = -(auVar19[6] == -1);
          auVar18[7] = -(auVar19[7] == -1);
          auVar18[8] = -(auVar19[8] == -1);
          auVar18[9] = -(auVar19[9] == -1);
          auVar18[10] = -(auVar19[10] == -1);
          auVar18[0xb] = -(auVar19[0xb] == -1);
          auVar18[0xc] = -(auVar19[0xc] == -1);
          auVar18[0xd] = -(auVar19[0xd] == -1);
          auVar18[0xe] = -(auVar19[0xe] == -1);
          auVar18[0xf] = -(auVar19[0xf] == -1);
          if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x2f,0) & 1) != 0) || (SUB161(auVar18 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
          uVar5 = uVar5 + lVar11 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14306cef8);
    }
  }
  else if (param_1[0x24] != 0) {
    param_1 = param_1 + 0x24;
    goto LAB_140c40487;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306cee0);
}

