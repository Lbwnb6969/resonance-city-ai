// VA 0x140c3d060, PDB extent 489 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::decorator_info
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::decorator_info
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 489 */

longlong pdb_140c3d060(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iStack_24;
  longlong lStack_20;
  
  iStack_24 = param_4;
  if (param_2 == 0) {
    if (param_1[3] != 0) {
      lStack_20 = param_3;
      uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_20);
      lVar5 = *param_1;
      bVar11 = (byte)(uVar4 >> 0x39);
      auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
      auVar12 = pshuflw(auVar12,auVar12,0);
      lVar7 = 0;
      while( true ) {
        uVar4 = uVar4 & param_1[1];
        pcVar1 = (char *)(lVar5 + uVar4);
        auVar15[0] = -(*pcVar1 == auVar12[0]);
        auVar15[1] = -(pcVar1[1] == auVar12[1]);
        auVar15[2] = -(pcVar1[2] == auVar12[2]);
        auVar15[3] = -(pcVar1[3] == auVar12[3]);
        auVar15[4] = -(pcVar1[4] == auVar12[4]);
        auVar15[5] = -(pcVar1[5] == auVar12[5]);
        auVar15[6] = -(pcVar1[6] == auVar12[6]);
        auVar15[7] = -(pcVar1[7] == auVar12[7]);
        auVar15[8] = -(pcVar1[8] == auVar12[0]);
        auVar15[9] = -(pcVar1[9] == auVar12[1]);
        auVar15[10] = -(pcVar1[10] == auVar12[2]);
        auVar15[0xb] = -(pcVar1[0xb] == auVar12[3]);
        auVar15[0xc] = -(pcVar1[0xc] == auVar12[4]);
        auVar15[0xd] = -(pcVar1[0xd] == auVar12[5]);
        auVar15[0xe] = -(pcVar1[0xe] == auVar12[6]);
        auVar15[0xf] = -(pcVar1[0xf] == auVar12[7]);
        uVar9 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
        uVar8 = (uint)uVar9;
        while (uVar9 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar10 = (uVar2 + uVar4 & param_1[1]) * -0x98;
          if (param_3 == *(longlong *)(lVar5 + -0x98 + lVar10)) {
            lVar5 = lVar5 + lVar10;
            plVar6 = (longlong *)(lVar5 + -0x90);
            lVar5 = *(longlong *)(lVar5 + -0x48);
            goto joined_r0x000140c3d22a;
          }
          uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
            (SUB161(auVar13 >> 0x77,0) & 1) != 0) || auVar13[0xf] < '\0') break;
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
      plVar6 = param_1 + 0x12;
      lVar5 = param_1[0x1b];
    }
    else {
      if (param_1[0x24] == 0) {
        return 0;
      }
      plVar6 = param_1 + 0x24;
      lVar5 = param_1[0x2d];
    }
joined_r0x000140c3d22a:
    if (lVar5 != 0) {
      uVar4 = pdb_1400aede0(plVar6 + 10,&iStack_24);
      lVar5 = plVar6[6];
      bVar11 = (byte)(uVar4 >> 0x39);
      auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
      auVar12 = pshuflw(auVar12,auVar12,0);
      lVar7 = 0;
      do {
        uVar4 = uVar4 & plVar6[7];
        pcVar1 = (char *)(lVar5 + uVar4);
        auVar16[0] = -(*pcVar1 == auVar12[0]);
        auVar16[1] = -(pcVar1[1] == auVar12[1]);
        auVar16[2] = -(pcVar1[2] == auVar12[2]);
        auVar16[3] = -(pcVar1[3] == auVar12[3]);
        auVar16[4] = -(pcVar1[4] == auVar12[4]);
        auVar16[5] = -(pcVar1[5] == auVar12[5]);
        auVar16[6] = -(pcVar1[6] == auVar12[6]);
        auVar16[7] = -(pcVar1[7] == auVar12[7]);
        auVar16[8] = -(pcVar1[8] == auVar12[0]);
        auVar16[9] = -(pcVar1[9] == auVar12[1]);
        auVar16[10] = -(pcVar1[10] == auVar12[2]);
        auVar16[0xb] = -(pcVar1[0xb] == auVar12[3]);
        auVar16[0xc] = -(pcVar1[0xc] == auVar12[4]);
        auVar16[0xd] = -(pcVar1[0xd] == auVar12[5]);
        auVar16[0xe] = -(pcVar1[0xe] == auVar12[6]);
        auVar16[0xf] = -(pcVar1[0xf] == auVar12[7]);
        uVar9 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
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
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
        uVar8 = (uint)uVar9;
        while (uVar9 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar10 = (uVar2 + uVar4 & plVar6[7]) * -0x68;
          if (param_4 == *(int *)(lVar5 + -0x68 + lVar10)) {
            lVar5 = lVar5 + lVar10;
            goto LAB_140c3d236;
          }
          uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
        }
        auVar14[0] = -(*pcVar1 == -1);
        auVar14[1] = -(pcVar1[1] == -1);
        auVar14[2] = -(pcVar1[2] == -1);
        auVar14[3] = -(pcVar1[3] == -1);
        auVar14[4] = -(pcVar1[4] == -1);
        auVar14[5] = -(pcVar1[5] == -1);
        auVar14[6] = -(pcVar1[6] == -1);
        auVar14[7] = -(pcVar1[7] == -1);
        auVar14[8] = -(pcVar1[8] == -1);
        auVar14[9] = -(pcVar1[9] == -1);
        auVar14[10] = -(pcVar1[10] == -1);
        auVar14[0xb] = -(pcVar1[0xb] == -1);
        auVar14[0xc] = -(pcVar1[0xc] == -1);
        auVar14[0xd] = -(pcVar1[0xd] == -1);
        auVar14[0xe] = -(pcVar1[0xe] == -1);
        auVar14[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar14 >> 0x1f,0) & 1) != 0) || (SUB161(auVar14 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar14 >> 0x37,0) & 1) != 0) || (SUB161(auVar14 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar14 >> 0x47,0) & 1) != 0) || (SUB161(auVar14 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar14 >> 0x57,0) & 1) != 0) || (SUB161(auVar14 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar14 >> 0x67,0) & 1) != 0) || (SUB161(auVar14 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar14 >> 0x77,0) & 1) != 0) || auVar14[0xf] < '\0') {
          lVar5 = 0;
LAB_140c3d236:
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

