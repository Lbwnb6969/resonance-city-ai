// VA 0x140c411c0, PDB extent 317 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::get_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::get_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 317 */

longlong * pdb_140c411c0(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_18;
  
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306d060);
  }
  if (param_2 == 0) {
    if (param_1[3] != 0) {
      lStack_18 = param_3;
      uVar4 = pdb_1400af0a0(param_1 + 4,&lStack_18);
      lVar6 = *param_1;
      bVar11 = (byte)(uVar4 >> 0x39);
      auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
      auVar12 = pshuflw(auVar12,auVar12,0);
      lVar9 = 0;
      while( true ) {
        uVar4 = uVar4 & param_1[1];
        pcVar1 = (char *)(lVar6 + uVar4);
        auVar14[0] = -(*pcVar1 == auVar12[0]);
        auVar14[1] = -(pcVar1[1] == auVar12[1]);
        auVar14[2] = -(pcVar1[2] == auVar12[2]);
        auVar14[3] = -(pcVar1[3] == auVar12[3]);
        auVar14[4] = -(pcVar1[4] == auVar12[4]);
        auVar14[5] = -(pcVar1[5] == auVar12[5]);
        auVar14[6] = -(pcVar1[6] == auVar12[6]);
        auVar14[7] = -(pcVar1[7] == auVar12[7]);
        auVar14[8] = -(pcVar1[8] == auVar12[0]);
        auVar14[9] = -(pcVar1[9] == auVar12[1]);
        auVar14[10] = -(pcVar1[10] == auVar12[2]);
        auVar14[0xb] = -(pcVar1[0xb] == auVar12[3]);
        auVar14[0xc] = -(pcVar1[0xc] == auVar12[4]);
        auVar14[0xd] = -(pcVar1[0xd] == auVar12[5]);
        auVar14[0xe] = -(pcVar1[0xe] == auVar12[6]);
        auVar14[0xf] = -(pcVar1[0xf] == auVar12[7]);
        uVar7 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
        uVar10 = (uint)uVar7;
        while (uVar7 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar8 = (uVar2 + uVar4 & param_1[1]) * -0x98;
          if (param_3 == *(longlong *)(lVar6 + -0x98 + lVar8)) {
            return (longlong *)(lVar6 + lVar8 + -0x90);
          }
          uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
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
        uVar4 = uVar4 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
    }
    plVar5 = (longlong *)0x0;
  }
  else {
    if (param_2 == 1) {
      plVar5 = param_1 + 0x12;
      lVar6 = param_1[0x12];
    }
    else {
      plVar5 = param_1 + 0x24;
      lVar6 = param_1[0x24];
    }
    if (lVar6 == 0) {
      plVar5 = (longlong *)0x0;
    }
  }
  return plVar5;
}

