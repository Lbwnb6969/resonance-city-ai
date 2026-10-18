// VA 0x140bbbf80, PDB extent 545 bytes
// country_core::systems::wall::wall_highlight::wall_highlight
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_highlight.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::wall_highlight::wall_highlight
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_highlight.rs
   Extent: 545 */

void pdb_140bbbf80(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lStack_48;
  
  uVar22 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = uVar22;
  puVar4 = (undefined8 *)*param_1;
  *(undefined1 *)(puVar4 + 2) = 0;
  puVar5 = (ulonglong *)*param_3;
  lVar13 = param_3[1];
  uVar11 = *puVar5;
  uVar20 = 0;
  uVar14 = uVar11 - *(ulonglong *)(lVar13 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar13 + 0x18)) {
    uVar14 = uVar20;
  }
  uVar12 = uVar11 - *(ulonglong *)(lVar13 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar13 + 0x38)) {
    uVar12 = uVar20;
  }
  uVar11 = *(ulonglong *)(lVar13 + 0x10);
  uVar6 = *(ulonglong *)(lVar13 + 0x30);
  uVar17 = uVar6 - uVar12;
  if (uVar6 < uVar12) {
    uVar17 = uVar20;
  }
  uVar19 = uVar11 - uVar14;
  if (uVar11 < uVar14) {
    uVar19 = uVar20;
  }
  uVar20 = *(ulonglong *)(lVar13 + 0x40);
  lVar15 = *(longlong *)(lVar13 + 8);
  lVar13 = *(longlong *)(lVar13 + 0x28);
  *puVar5 = (uVar20 - uVar17) - uVar19;
  if (uVar11 >= uVar14 && uVar11 - uVar14 != 0 || uVar6 >= uVar12 && uVar6 - uVar12 != 0) {
    lVar15 = lVar15 + uVar14 * 0x18;
    if (uVar11 < uVar14) {
      lVar15 = 8;
    }
    lVar18 = 0;
    if (uVar14 < uVar11) {
      lVar18 = lVar15 + -0x18 + uVar19 * 0x18;
    }
    lVar13 = lVar13 + uVar12 * 0x18;
    if (uVar6 < uVar12) {
      lVar13 = 8;
    }
    lVar13 = lVar13 + -0x18 + uVar17 * 0x18;
    if (uVar6 <= uVar12) {
      lVar13 = lVar18;
    }
    *puVar5 = uVar20;
    lVar15 = *(longlong *)(lVar13 + 8);
    cVar2 = *(char *)(lVar13 + 0x10);
    param_4 = (longlong *)*param_4;
    if (param_4[3] != 0) {
      lStack_48 = lVar15;
      uVar11 = pdb_1400af0a0(param_4 + 4,&lStack_48);
      bVar21 = (byte)(uVar11 >> 0x39);
      auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar23 = pshuflw(auVar23,auVar23,0);
      lVar13 = 0;
      while( true ) {
        uVar11 = uVar11 & param_4[1];
        pcVar1 = (char *)(*param_4 + uVar11);
        auVar25[0] = -(*pcVar1 == auVar23[0]);
        auVar25[1] = -(pcVar1[1] == auVar23[1]);
        auVar25[2] = -(pcVar1[2] == auVar23[2]);
        auVar25[3] = -(pcVar1[3] == auVar23[3]);
        auVar25[4] = -(pcVar1[4] == auVar23[4]);
        auVar25[5] = -(pcVar1[5] == auVar23[5]);
        auVar25[6] = -(pcVar1[6] == auVar23[6]);
        auVar25[7] = -(pcVar1[7] == auVar23[7]);
        auVar25[8] = -(pcVar1[8] == auVar23[0]);
        auVar25[9] = -(pcVar1[9] == auVar23[1]);
        auVar25[10] = -(pcVar1[10] == auVar23[2]);
        auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
        auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
        auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
        auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
        auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
        uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf
        ;
        uVar10 = (uint)uVar16;
        while (uVar16 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar18 = *param_4 + (uVar8 + uVar11 & param_4[1]) * -0x10;
          if (lVar15 == *(longlong *)(lVar18 + -0x10)) {
            uVar7 = *(undefined8 *)(lVar18 + -8);
            if ((int)uVar7 == 0) {
              return;
            }
            *puVar3 = uVar22;
            *puVar4 = uVar7;
            puVar4[1] = lVar15;
            *(char *)(puVar4 + 2) = cVar2;
            uVar22 = 0;
            if (cVar2 != '\x01') {
              uVar22 = _DAT_142e3c650;
            }
            *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
            uVar10 = (uint)(cVar2 == '\x01');
            uVar11 = CONCAT44((int)(uVar10 << 0x1f) >> 0x1f,(int)(uVar10 << 0x1f) >> 0x1f);
            puVar5 = (ulonglong *)*param_2;
            *puVar5 = uVar11 & (ulonglong)DAT_143020eb0 | ~uVar11 & (ulonglong)DAT_143062190;
            *(undefined4 *)(puVar5 + 1) = uVar22;
            return;
          }
          uVar16 = (ushort)(uVar10 - 1) & (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar16);
        }
        auVar24[0] = -(*pcVar1 == -1);
        auVar24[1] = -(pcVar1[1] == -1);
        auVar24[2] = -(pcVar1[2] == -1);
        auVar24[3] = -(pcVar1[3] == -1);
        auVar24[4] = -(pcVar1[4] == -1);
        auVar24[5] = -(pcVar1[5] == -1);
        auVar24[6] = -(pcVar1[6] == -1);
        auVar24[7] = -(pcVar1[7] == -1);
        auVar24[8] = -(pcVar1[8] == -1);
        auVar24[9] = -(pcVar1[9] == -1);
        auVar24[10] = -(pcVar1[10] == -1);
        auVar24[0xb] = -(pcVar1[0xb] == -1);
        auVar24[0xc] = -(pcVar1[0xc] == -1);
        auVar24[0xd] = -(pcVar1[0xd] == -1);
        auVar24[0xe] = -(pcVar1[0xe] == -1);
        auVar24[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        uVar11 = uVar11 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
  }
  return;
}

