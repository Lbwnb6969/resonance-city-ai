// VA 0x140c3ec10, PDB extent 515 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::decorator_info_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::decorator_info_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 515 */

longlong pdb_140c3ec10(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iStack_2c;
  longlong lStack_28;
  
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306ce60);
  }
  if (param_2 == 0) {
    if (param_1[3] != 0) {
      lStack_28 = param_3;
      uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_28);
      lVar5 = *param_1;
      bVar10 = (byte)(uVar4 >> 0x39);
      auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
      auVar11 = pshuflw(auVar11,auVar11,0);
      lVar7 = 0;
      while( true ) {
        uVar4 = uVar4 & param_1[1];
        pcVar1 = (char *)(lVar5 + uVar4);
        auVar14[0] = -(*pcVar1 == auVar11[0]);
        auVar14[1] = -(pcVar1[1] == auVar11[1]);
        auVar14[2] = -(pcVar1[2] == auVar11[2]);
        auVar14[3] = -(pcVar1[3] == auVar11[3]);
        auVar14[4] = -(pcVar1[4] == auVar11[4]);
        auVar14[5] = -(pcVar1[5] == auVar11[5]);
        auVar14[6] = -(pcVar1[6] == auVar11[6]);
        auVar14[7] = -(pcVar1[7] == auVar11[7]);
        auVar14[8] = -(pcVar1[8] == auVar11[0]);
        auVar14[9] = -(pcVar1[9] == auVar11[1]);
        auVar14[10] = -(pcVar1[10] == auVar11[2]);
        auVar14[0xb] = -(pcVar1[0xb] == auVar11[3]);
        auVar14[0xc] = -(pcVar1[0xc] == auVar11[4]);
        auVar14[0xd] = -(pcVar1[0xd] == auVar11[5]);
        auVar14[0xe] = -(pcVar1[0xe] == auVar11[6]);
        auVar14[0xf] = -(pcVar1[0xf] == auVar11[7]);
        uVar8 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        uVar6 = (uint)uVar8;
        while (uVar8 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar9 = (uVar2 + uVar4 & param_1[1]) * -0x98;
          if (param_3 == *(longlong *)(lVar5 + -0x98 + lVar9)) {
            param_1 = (longlong *)(lVar5 + lVar9 + -0x90);
            goto LAB_140c3ed2e;
          }
          uVar8 = (ushort)(uVar6 - 1) & (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar8);
        }
        auVar12[0] = -(*pcVar1 == -1);
        auVar12[1] = -(pcVar1[1] == -1);
        auVar12[2] = -(pcVar1[2] == -1);
        auVar12[3] = -(pcVar1[3] == -1);
        auVar12[4] = -(pcVar1[4] == -1);
        auVar12[5] = -(pcVar1[5] == -1);
        auVar12[6] = -(pcVar1[6] == -1);
        auVar12[7] = -(pcVar1[7] == -1);
        auVar12[8] = -(pcVar1[8] == -1);
        auVar12[9] = -(pcVar1[9] == -1);
        auVar12[10] = -(pcVar1[10] == -1);
        auVar12[0xb] = -(pcVar1[0xb] == -1);
        auVar12[0xc] = -(pcVar1[0xc] == -1);
        auVar12[0xd] = -(pcVar1[0xd] == -1);
        auVar12[0xe] = -(pcVar1[0xe] == -1);
        auVar12[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar12 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar12 >> 0x1f,0) & 1) != 0) || (SUB161(auVar12 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar12 >> 0x37,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar12 >> 0x47,0) & 1) != 0) || (SUB161(auVar12 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar12 >> 0x57,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x67,0) & 1) != 0) || (SUB161(auVar12 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x77,0) & 1) != 0) || auVar12[0xf] < '\0') break;
        uVar4 = uVar4 + lVar7 + 0x10;
        lVar7 = lVar7 + 0x10;
      }
    }
  }
  else {
    if (param_2 == 1) {
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
LAB_140c3ed2e:
    iStack_2c = param_4;
    pdb_1403b0de0(param_1 + 0xc,param_4);
    if (param_1[9] != 0) {
      uVar4 = pdb_1400aede0(param_1 + 10,&iStack_2c);
      lVar5 = param_1[6];
      bVar10 = (byte)(uVar4 >> 0x39);
      auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
      auVar11 = pshuflw(auVar11,auVar11,0);
      lVar7 = 0;
      do {
        uVar4 = uVar4 & param_1[7];
        pcVar1 = (char *)(lVar5 + uVar4);
        auVar15[0] = -(*pcVar1 == auVar11[0]);
        auVar15[1] = -(pcVar1[1] == auVar11[1]);
        auVar15[2] = -(pcVar1[2] == auVar11[2]);
        auVar15[3] = -(pcVar1[3] == auVar11[3]);
        auVar15[4] = -(pcVar1[4] == auVar11[4]);
        auVar15[5] = -(pcVar1[5] == auVar11[5]);
        auVar15[6] = -(pcVar1[6] == auVar11[6]);
        auVar15[7] = -(pcVar1[7] == auVar11[7]);
        auVar15[8] = -(pcVar1[8] == auVar11[0]);
        auVar15[9] = -(pcVar1[9] == auVar11[1]);
        auVar15[10] = -(pcVar1[10] == auVar11[2]);
        auVar15[0xb] = -(pcVar1[0xb] == auVar11[3]);
        auVar15[0xc] = -(pcVar1[0xc] == auVar11[4]);
        auVar15[0xd] = -(pcVar1[0xd] == auVar11[5]);
        auVar15[0xe] = -(pcVar1[0xe] == auVar11[6]);
        auVar15[0xf] = -(pcVar1[0xf] == auVar11[7]);
        uVar8 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
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
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        uVar6 = (uint)uVar8;
        while (uVar8 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar9 = (uVar2 + uVar4 & param_1[7]) * -0x68;
          if (param_4 == *(int *)(lVar5 + -0x68 + lVar9)) {
            lVar5 = lVar5 + lVar9;
            goto LAB_140c3ede5;
          }
          uVar8 = (ushort)(uVar6 - 1) & (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar8);
        }
        auVar13[0] = -(*pcVar1 == -1);
        auVar13[1] = -(pcVar1[1] == -1);
        auVar13[2] = -(pcVar1[2] == -1);
        auVar13[3] = -(pcVar1[3] == -1);
        auVar13[4] = -(pcVar1[4] == -1);
        auVar13[5] = -(pcVar1[5] == -1);
        auVar13[6] = -(pcVar1[6] == -1);
        auVar13[7] = -(pcVar1[7] == -1);
        auVar13[8] = -(pcVar1[8] == -1);
        auVar13[9] = -(pcVar1[9] == -1);
        auVar13[10] = -(pcVar1[10] == -1);
        auVar13[0xb] = -(pcVar1[0xb] == -1);
        auVar13[0xc] = -(pcVar1[0xc] == -1);
        auVar13[0xd] = -(pcVar1[0xd] == -1);
        auVar13[0xe] = -(pcVar1[0xe] == -1);
        auVar13[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar13 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar13 >> 0x1f,0) & 1) != 0) || (SUB161(auVar13 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar13 >> 0x37,0) & 1) != 0) || (SUB161(auVar13 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar13 >> 0x47,0) & 1) != 0) || (SUB161(auVar13 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar13 >> 0x57,0) & 1) != 0) || (SUB161(auVar13 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar13 >> 0x67,0) & 1) != 0) || (SUB161(auVar13 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar13 >> 0x77,0) & 1) != 0) || auVar13[0xf] < '\0') {
          lVar5 = 0;
LAB_140c3ede5:
          if (lVar5 == 0) {
            return 0;
          }
          return lVar5 + -0x60;
        }
        uVar4 = uVar4 + lVar7 + 0x10;
        lVar7 = lVar7 + 0x10;
      } while( true );
    }
  }
  return 0;
}

